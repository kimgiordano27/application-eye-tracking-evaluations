/*
FUNCTION_NAME: OVRPlugin$$get_gpuLevel
ENTRY_POINT: 0337fbd0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_gpuLevel(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long unaff_x20;
  int iVar7;
  long unaff_x21;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x21 + 0x940);
  if ((*(byte *)(unaff_x20 + 0x5f4) & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04230940);
    *(undefined1 *)(unaff_x20 + 0x5f4) = 1;
  }
  plVar6 = (long *)thunk_FUN_01c496e0(*puVar8);
  FUN_03160a50(plVar6,0);
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar7 = 0;
      bVar2 = false;
      bVar3 = false;
      bVar4 = false;
      do {
        uVar5 = FUN_0314e438(param_1,iVar7,0);
        uVar1 = uVar5 & 0xffff;
        if (uVar1 == 0x2c) {
          if (bVar2) {
            if (plVar6 == (long *)0x0) goto LAB_0337fd48;
            FUN_0315aa9c(plVar6,0x2c,0);
LAB_0337fc8c:
            bVar2 = true;
          }
          else {
            if (bVar4) {
              bVar3 = true;
            }
            else {
              if (plVar6 == (long *)0x0) goto LAB_0337fd48;
              FUN_0315aa9c(plVar6,0x2c,0);
            }
            bVar2 = false;
            bVar4 = true;
          }
        }
        else if (uVar1 == 0x5d) {
          if (plVar6 == (long *)0x0) goto LAB_0337fd48;
          FUN_0315aa9c(plVar6,0x5d,0);
          bVar2 = false;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          if (uVar1 == 0x5b) {
            if (plVar6 != (long *)0x0) {
              FUN_0315aa9c(plVar6,0x5b,0);
              bVar3 = false;
              bVar4 = false;
              goto LAB_0337fc8c;
            }
            goto LAB_0337fd48;
          }
          if (bVar3) {
            bVar2 = false;
            bVar3 = true;
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_0337fd48;
            FUN_0315aa9c(plVar6,uVar5,0);
            bVar2 = false;
            bVar3 = false;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0337fd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
  }
LAB_0337fd48:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


