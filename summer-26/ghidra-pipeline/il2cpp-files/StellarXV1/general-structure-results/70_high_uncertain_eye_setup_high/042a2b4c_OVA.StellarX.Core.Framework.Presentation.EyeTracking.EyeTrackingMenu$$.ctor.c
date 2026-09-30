/*
FUNCTION_NAME: OVA.StellarX.Core.Framework.Presentation.EyeTracking.EyeTrackingMenu$$.ctor
ENTRY_POINT: 042a2b4c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4
OVA_StellarX_Core_Framework_Presentation_EyeTracking_EyeTrackingMenu___ctor
          (undefined1 param_1 [16],undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_0928d918);
  *(undefined1 *)(unaff_x21 + 0xfeb) = 1;
  puVar2 = PTR_DAT_0928d910;
  if (**(char **)(*unaff_x20 + 0xb8) != '\0') {
    lVar3 = *(long *)PTR_DAT_0928d910;
    **(char **)(*unaff_x20 + 0xb8) = '\0';
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_08a1d424(0);
    FUN_08a1d424(0);
    FUN_08a1d424(0);
    FUN_08a1d4e8(uVar4,param_2,0);
  }
  if (*(char *)(unaff_x19 + 0x48) != '\0') {
    if (*(char *)(unaff_x19 + 0x49) == '\0') {
      uVar4 = *(undefined4 *)(unaff_x19 + 0x24);
      param_2 = *(undefined4 *)(unaff_x19 + 0x28);
      uVar6 = *(undefined4 *)(unaff_x19 + 0x2c);
      if (*(int *)(*(long *)PTR_DAT_0928d920 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08a297f0(uVar4,param_2,uVar6,0);
    }
    else {
      *(undefined2 *)(unaff_x19 + 0x48) = 0;
      if (DAT_09885777 == '\0') {
        FUN_04077588(PTR_DAT_09286e28);
        DAT_09885777 = '\x01';
      }
      *(undefined8 *)(unaff_x19 + 0x28) = **(undefined8 **)(*(long *)PTR_DAT_09286e28 + 0xb8);
    }
  }
  if (*(char *)(unaff_x19 + 0x4a) != '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_08a1d424(0);
    FUN_08a1d424(0);
    FUN_08a1d424(0);
    FUN_08a1d4e8(uVar4,param_2,0);
    **(undefined1 **)(*unaff_x20 + 0xb8) = 1;
  }
  if (*(char *)(unaff_x19 + 0x7c) != '\0') {
    lVar3 = *(long *)(unaff_x19 + 0x60);
    if (*(char *)(unaff_x19 + 0x7d) == '\0') {
      if (lVar3 == 0) goto LAB_042a2d14;
      fVar5 = *(float *)(unaff_x19 + 0x1c);
    }
    else {
      if (lVar3 == 0) {
LAB_042a2d14:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      fVar5 = *(float *)(unaff_x19 + 0x44) * *(float *)(unaff_x19 + 0x1c);
    }
    iVar1 = -0x80000000;
    if (fVar5 != INFINITY) {
      iVar1 = (int)fVar5;
    }
    FUN_08a261b0(lVar3,iVar1,0);
  }
  return *(undefined4 *)(unaff_x19 + 0x10);
}


