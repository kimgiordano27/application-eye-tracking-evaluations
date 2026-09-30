/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$UpdateBackground
ENTRY_POINT: 052d935c
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__UpdateBackground
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_052c2b3c();
  if (unaff_x21 == 0) goto LAB_052d9470;
  fVar2 = (float)FUN_066d6014();
  fVar6 = param_2;
  fVar7 = param_3;
  if (((char)unaff_x19[0x4e] == '\0') || (*(char *)((long)unaff_x19 + 0x36c) != '\0')) {
LAB_052d938c:
    lVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (lVar1 == 0) goto LAB_052d9470;
    FUN_066d48c0(lVar1,0);
  }
  else {
    if (unaff_x19[0x50] == 0) goto LAB_052d9470;
    if (*(char *)(unaff_x19[0x50] + 0x9d) == '\0') goto LAB_052d938c;
    lVar1 = FUN_066c67b0();
    FUN_052d3f4c();
    if (lVar1 == 0) goto LAB_052d9470;
    FUN_066d31a4(lVar1,0);
  }
  fVar3 = (float)FUN_052d4090();
  lVar1 = unaff_x19[0x50];
  fVar6 = fVar6 - param_2;
  fVar7 = fVar7 - param_3;
  *(float *)((long)unaff_x19 + 0x34c) = fVar3 - fVar2;
  *(float *)(unaff_x19 + 0x6a) = fVar6;
  *(float *)((long)unaff_x19 + 0x354) = fVar7;
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x90) != '\0') {
      fVar4 = (float)FUN_052c2ae0(lVar1,0);
      fVar2 = fVar6;
      fVar3 = fVar7;
      fVar5 = (float)FUN_052d0164();
      *(bool *)((long)unaff_x19 + 0x359) = fVar7 * fVar3 + fVar4 * fVar5 + fVar6 * fVar2 < 0.0;
    }
    return;
  }
LAB_052d9470:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


