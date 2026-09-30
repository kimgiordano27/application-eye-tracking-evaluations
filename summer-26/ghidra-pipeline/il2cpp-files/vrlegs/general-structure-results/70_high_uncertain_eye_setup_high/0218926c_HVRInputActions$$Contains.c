/*
FUNCTION_NAME: HVRInputActions$$Contains
ENTRY_POINT: 0218926c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x021893f8) */

undefined4 HVRInputActions__Contains(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *unaff_x20;
  undefined4 uVar8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  uVar3 = FUN_0267b204();
  lVar5 = *(long *)(unaff_x23 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar2 = 0;
  if (unaff_w24 != 0) {
    iVar2 = (int)(uVar3 & 0x7fffffff) / unaff_w24;
  }
  uVar3 = (uVar3 & 0x7fffffff) - iVar2 * unaff_w24;
  uVar6 = uVar3;
  do {
    if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar7 = *(long *)(lVar5 + (long)(int)uVar6 * 0x10 + 0x20);
    if (lVar7 == unaff_x22) {
      lVar7 = *(long *)(lVar5 + (long)(int)uVar6 * 0x10 + 0x28);
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8(lVar5);
      }
      if (lVar7 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_01a89d6c(lVar7,lVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar7,lVar5);
        }
      }
      *unaff_x20 = lVar4;
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01a46ff8(lVar5);
      }
      if ((lVar7 != 0) && (lVar4 = thunk_FUN_01a89d6c(lVar7,lVar5), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar7,lVar5);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar8 = 1;
      goto LAB_02189374;
    }
    if (lVar7 == 0) break;
    uVar1 = 0;
    if (uVar6 + 1 != unaff_w24) {
      uVar1 = uVar6 + 1;
    }
    uVar6 = uVar1;
  } while (uVar1 != uVar3);
  uVar8 = 0;
LAB_02189374:
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return uVar8;
}


