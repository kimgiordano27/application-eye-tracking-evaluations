/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnEnable
ENTRY_POINT: 0142b684
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnEnable
               (undefined1 param_1 [16],float param_2,float param_3)

{
  int iVar1;
  int unaff_w19;
  ulong unaff_x20;
  ulong unaff_x21;
  int unaff_w22;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  while( true ) {
    fStack0000000000000070 = (float)FUN_02699088(0);
    fStack0000000000000070 = unaff_s10 + fStack0000000000000070;
    fStack0000000000000074 = unaff_s9 + param_2;
    in_stack_00000078 = unaff_s8 + param_3;
    FUN_013444d4(&stack0x00000030,unaff_w23,&stack0x00000070,*unaff_x26);
    if ((unaff_x21 & 1) != 0) {
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000050,unaff_w22,&stack0x00000070,*unaff_x25);
      fVar2 = unaff_s13;
      fVar3 = unaff_s12;
      fStack0000000000000070 = (float)FUN_02699088(0);
      fStack0000000000000074 = fVar2;
      in_stack_00000078 = fVar3;
      FUN_013444d4(&stack0x00000020,unaff_w23,&stack0x00000070,*unaff_x26);
    }
    if ((unaff_x20 & 1) != 0) {
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000040,unaff_w22,&stack0x00000070,*unaff_x27);
      DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                (&stack0x00000040,unaff_w22,&stack0x00000070,*unaff_x27);
      fVar2 = unaff_s13;
      fVar3 = unaff_s12;
      fStack0000000000000070 = (float)FUN_02699088(0);
      fStack0000000000000074 = fVar2;
      in_stack_00000078 = fVar3;
      FUN_013444d4(&stack0x00000010,unaff_w23,&stack0x00000070,*unaff_x28);
      unaff_s10 = fStack000000000000000c;
      unaff_s8 = fStack0000000000000008;
    }
    unaff_w22 = unaff_w22 + 1;
    iVar1 = FUN_01344a5c(&stack0x00000060,*unaff_x24);
    if (iVar1 <= unaff_w22) break;
    unaff_w23 = unaff_w19 + unaff_w22;
    DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
              (&stack0x00000060,unaff_w22,&stack0x00000070,*unaff_x25);
    param_2 = unaff_s13;
    param_3 = unaff_s12;
  }
  return;
}


