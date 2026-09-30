/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 0338d85c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpaces(void)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  int unaff_w25;
  int iVar5;
  long *unaff_x27;
  int unaff_w29;
  
  iVar5 = unaff_w24 + 2;
  do {
    sVar2 = FUN_0314e438();
    if (sVar2 == 0x5d) {
      unaff_w29 = unaff_w29 + -1;
      if (unaff_w29 == 0) {
        uVar3 = FUN_031548e4();
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x27);
        }
        FUN_0338261c(uVar3,0);
        uVar3 = FUN_0338d9d0();
        if (unaff_x22 == 0) goto LAB_0338d9cc;
        lVar4 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_0338d9cc;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          unaff_w29 = 0;
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
        }
        else {
          FUN_02d5004c();
          unaff_w29 = 0;
        }
      }
    }
    else if (sVar2 == 0x5b) {
      unaff_w29 = unaff_w29 + 1;
    }
    iVar5 = iVar5 + 1;
  } while (unaff_w25 != iVar5);
  if ((unaff_x22 != 0) && (FUN_02d51a80(), unaff_x21 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0338d9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x21 + 0x8f8))();
    return;
  }
LAB_0338d9cc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


