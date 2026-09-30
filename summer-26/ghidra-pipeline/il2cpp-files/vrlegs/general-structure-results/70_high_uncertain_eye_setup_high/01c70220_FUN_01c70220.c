/*
FUNCTION_NAME: FUN_01c70220
ENTRY_POINT: 01c70220
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01c704f8) */
/* WARNING: Removing unreachable block (ram,0x01c7052c) */

int FUN_01c70220(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined1 local_60 [16];
  char local_44 [4];
  
  if ((DAT_0411f89f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed58);
    FUN_01ab69ac(PTR_DAT_03cbeb18);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cc4e98);
    DAT_0411f89f = 1;
  }
  local_44[0] = '\0';
  if (param_2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_02786d28(param_4,0,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_01c6d508(uVar3,param_4,0);
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x30);
        if ((lVar5 != 0) && (*(char *)(lVar5 + 0x31) != '\0')) {
          plVar6 = (long *)FUN_01c6c41c(lVar5,param_2);
          puVar1 = PTR_DAT_03cbed58;
          lVar5 = *(long *)PTR_DAT_03cbed58;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar5);
            lVar5 = *(long *)puVar1;
          }
          local_60._8_8_ = (*(undefined8 **)(lVar5 + 0xb8))[1];
          local_60._0_8_ = **(undefined8 **)(lVar5 + 0xb8);
          uVar7 = thunk_FUN_01a89a98(lVar5,local_60);
          if (plVar6 == (long *)0x0) goto LAB_01c7051c;
          uVar3 = (**(code **)(*plVar6 + 0x138))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x140));
          if ((uVar3 & 1) != 0) {
            lVar5 = *(long *)(lVar4 + 0x30);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            local_60 = FUN_02760d74(0);
            uVar7 = thunk_FUN_01a89a98(*(undefined8 *)puVar1,local_60);
            if (lVar5 == 0) goto LAB_01c7051c;
            FUN_01c7069c(lVar5,param_2,uVar7);
          }
        }
        iVar2 = FUN_025bbc00(param_3,*(undefined8 *)PTR_DAT_03cc4e98,5,0);
        lVar5 = 0x58;
        if (iVar2 != 0) {
          lVar5 = 0x50;
        }
        lVar5 = *(long *)(lVar4 + lVar5);
        if (lVar5 != 0) {
          plVar6 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cbeb18,
                                        *(undefined4 *)(lVar5 + 0x18));
          if (plVar6 != (long *)0x0) {
            if (0 < (int)plVar6[3]) {
              uVar10 = 0;
              do {
                if (*(uint *)(lVar5 + 0x18) <= uVar10) {
LAB_01c70518:
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c44();
                }
                lVar8 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_01c7051c;
                lVar8 = FUN_01c6c41c(lVar8,param_2);
                if (lVar8 != 0) {
                  lVar9 = thunk_FUN_01a89d6c(lVar8,*(undefined8 *)(*plVar6 + 0x40));
                  if (lVar9 == 0) {
                    uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar7,0);
                  }
                }
                if (*(uint *)(plVar6 + 3) <= uVar10) goto LAB_01c70518;
                plVar6[(long)(int)uVar10 + 4] = lVar8;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (plVar6 + (long)(int)uVar10 + 4,lVar8);
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)plVar6[3]);
            }
            lVar5 = FUN_01c708a8(param_1,lVar4,param_3);
            local_44[0] = '\0';
            FUN_027e0bd8(lVar5,local_44,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            iVar2 = FUN_01c70b80(lVar5,plVar6);
            if (*(char *)(lVar4 + 0x60) != '\0') {
              uVar7 = FUN_01c70edc(*(undefined8 *)(param_1 + 0x40));
              FUN_01c70f58(lVar4,param_2,uVar7);
            }
            if (local_44[0] != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
            }
            if (iVar2 < 1) {
              return iVar2;
            }
            FUN_01c7101c(param_1,lVar4,0);
            return iVar2;
          }
        }
      }
LAB_01c7051c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  return 0;
}


