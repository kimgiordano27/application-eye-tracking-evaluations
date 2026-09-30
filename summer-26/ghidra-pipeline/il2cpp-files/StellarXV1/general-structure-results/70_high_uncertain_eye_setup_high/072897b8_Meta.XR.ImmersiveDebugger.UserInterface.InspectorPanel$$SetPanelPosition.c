/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SetPanelPosition
ENTRY_POINT: 072897b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SetPanelPosition(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  
  uVar2 = FUN_072891f8();
  lVar1 = in_stack_00000010;
  if ((uVar2 & 1) == 0) {
    in_stack_00000010 = in_stack_00000008;
    thunk_FUN_040ec700(&stack0x00000010);
    in_stack_00000008 = lVar1;
    thunk_FUN_040ec700(&stack0x00000008,lVar1);
  }
  uVar2 = FUN_072891f8(in_stack_00000028,in_stack_00000010);
  lVar1 = in_stack_00000028;
  if ((uVar2 & 1) == 0) {
    in_stack_00000028 = in_stack_00000010;
    thunk_FUN_040ec700(&stack0x00000028);
    in_stack_00000010 = lVar1;
    thunk_FUN_040ec700(&stack0x00000010,lVar1);
    lVar1 = in_stack_00000018;
    in_stack_00000018 = in_stack_00000008;
    thunk_FUN_040ec700(&stack0x00000018);
    in_stack_00000008 = lVar1;
    thunk_FUN_040ec700(&stack0x00000008,lVar1);
  }
  uVar2 = FUN_072891f8(in_stack_00000010,in_stack_00000018);
  if ((uVar2 & 1) == 0) {
    if ((in_stack_00000010 == 0) || (in_stack_00000018 == 0)) goto LAB_07289980;
    fVar6 = *(float *)(in_stack_00000010 + 0x38);
    fVar3 = *(float *)(in_stack_00000018 + 0x38);
  }
  else {
    uVar2 = FUN_072891f8(in_stack_00000018,in_stack_00000008);
    if ((uVar2 & 1) == 0) {
      fVar3 = (float)FUN_072892b4(in_stack_00000028,in_stack_00000010,in_stack_00000018);
      fVar5 = (float)FUN_072892b4(in_stack_00000028,in_stack_00000008,in_stack_00000018);
      fVar6 = -fVar3;
      lVar1 = in_stack_00000008;
      if (0.0 <= fVar3 - fVar5) {
        fVar6 = fVar3;
        fVar5 = -fVar5;
      }
    }
    else {
      fVar3 = (float)FUN_07289244();
      fVar4 = (float)FUN_07289244(in_stack_00000010,in_stack_00000018,in_stack_00000008);
      fVar6 = -fVar3;
      fVar5 = -fVar4;
      lVar1 = in_stack_00000018;
      if (0.0 <= fVar3 + fVar4) {
        fVar6 = fVar3;
        fVar5 = fVar4;
      }
    }
    if ((in_stack_00000010 == 0) || (lVar1 == 0)) {
LAB_07289980:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    fVar4 = 0.0;
    if (0.0 <= fVar6) {
      fVar4 = fVar6;
    }
    fVar3 = *(float *)(lVar1 + 0x38);
    fVar7 = 0.0;
    if (0.0 <= fVar5) {
      fVar7 = fVar5;
    }
    fVar6 = *(float *)(in_stack_00000010 + 0x38);
    if (fVar7 < fVar4) {
      fVar3 = fVar3 + (fVar7 / (fVar4 + fVar7)) * (fVar6 - fVar3);
      goto LAB_0728994c;
    }
    if (fVar7 != 0.0) {
      fVar3 = fVar6 + (fVar4 / (fVar4 + fVar7)) * (fVar3 - fVar6);
      goto LAB_0728994c;
    }
  }
  fVar3 = (fVar6 + fVar3) * 0.5;
LAB_0728994c:
  *(float *)(unaff_x19 + 0x38) = fVar3;
  return;
}


