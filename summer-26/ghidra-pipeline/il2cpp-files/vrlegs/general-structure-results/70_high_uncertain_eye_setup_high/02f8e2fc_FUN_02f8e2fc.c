/*
FUNCTION_NAME: FUN_02f8e2fc
ENTRY_POINT: 02f8e2fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f8e478) */

void FUN_02f8e2fc(long param_1,long param_2,long param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  char local_44 [4];
  
  local_44[0] = '\0';
  FUN_027e0bd8(param_3,local_44,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar3 = *(long **)(param_3 + 0x18);
  if (plVar3 != (long *)0x0) {
    iVar8 = 0;
    do {
      iVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
      if (iVar2 <= iVar8) {
        if (local_44[0] != '\0') {
          OVRManager_<>c__<InitOVRManager>b__424_0(param_3,0);
        }
        return;
      }
      lVar4 = FUN_02f8961c(param_3,iVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = FUN_02f864e4(lVar4);
      if ((uVar5 & 1) == 0) {
        if (((param_6 & 1) == 0) || (*(int *)(lVar4 + 0x20) == 1)) {
          lVar7 = *(long *)(lVar4 + 0x68);
          if (lVar7 == 0) {
LAB_02f8e404:
            if ((*(char *)(lVar4 + 0x70) == '\0') || ((param_5 & 1) != 0)) {
              if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_02f89ff4(param_2,lVar4,0);
            }
          }
          else {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar1) {
              lVar6 = 0;
              do {
                if (uVar1 <= (uint)lVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                if (*(int *)(lVar7 + 0x20 + lVar6 * 4) == param_4) goto LAB_02f8e404;
                lVar6 = lVar6 + 1;
              } while ((int)lVar6 < (int)uVar1);
            }
          }
        }
      }
      else {
        plVar3 = *(long **)(param_3 + 0x18);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*plVar3 + 0x3d8))(plVar3,iVar8,*(undefined8 *)(*plVar3 + 0x3e0));
        iVar8 = iVar8 + -1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
      }
      plVar3 = *(long **)(param_3 + 0x18);
      iVar8 = iVar8 + 1;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


