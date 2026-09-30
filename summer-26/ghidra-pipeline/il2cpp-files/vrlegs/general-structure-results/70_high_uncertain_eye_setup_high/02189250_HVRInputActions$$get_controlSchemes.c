/*
FUNCTION_NAME: HVRInputActions$$get_controlSchemes
ENTRY_POINT: 02189250
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


/* WARNING: Removing unreachable block (ram,0x021893f8) */

undefined4 HVRInputActions__get_controlSchemes(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *unaff_x20;
  undefined4 uVar9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  FUN_027e0bd8(param_1,param_2,0);
  if (*(long *)(unaff_x23 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar2 = *(int *)(*(long *)(unaff_x23 + 0x10) + 0x18);
  uVar4 = FUN_0267b204();
  lVar6 = *(long *)(unaff_x23 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)(uVar4 & 0x7fffffff) / iVar2;
  }
  uVar4 = (uVar4 & 0x7fffffff) - iVar3 * iVar2;
  uVar7 = uVar4;
  do {
    if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 0x10 + 0x20);
    if (lVar8 == unaff_x22) {
      lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 0x10 + 0x28);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01a46ff8(lVar6);
      }
      if (lVar8 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = thunk_FUN_01a89d6c(lVar8,lVar6);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(lVar8,lVar6);
        }
      }
      *unaff_x20 = lVar5;
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01a46ff8(lVar6);
      }
      if ((lVar8 != 0) && (lVar5 = thunk_FUN_01a89d6c(lVar8,lVar6), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar8,lVar6);
      }
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar9 = 1;
      goto LAB_02189374;
    }
    if (lVar8 == 0) break;
    uVar1 = 0;
    if (uVar7 + 1 != iVar2) {
      uVar1 = uVar7 + 1;
    }
    uVar7 = uVar1;
  } while (uVar1 != uVar4);
  uVar9 = 0;
LAB_02189374:
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return uVar9;
}


