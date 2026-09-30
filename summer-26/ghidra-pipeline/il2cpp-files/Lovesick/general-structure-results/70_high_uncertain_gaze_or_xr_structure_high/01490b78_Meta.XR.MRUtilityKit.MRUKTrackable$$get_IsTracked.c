/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$get_IsTracked
ENTRY_POINT: 01490b78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_MRUtilityKit_MRUKTrackable__get_IsTracked(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_00000028;
  
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w19;
  uVar4 = FUN_01490c40(unaff_w21,unaff_w19);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  puVar3 = StringLiteral_302;
  puVar2 = 
  Field_<PrivateImplementationDetails>_4800FBFC4566EB02D1727A4B1C949CCBC7535C216A0766564C199308631B5DD6
  ;
  puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
  if (in_stack_00000028._4_4_ != 0) {
    in_stack_00000008 = *(undefined8 *)PTR_DAT_033eb800;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = in_stack_00000028._4_4_;
    uVar4 = FUN_017a7f78(&stack0x00000008,0);
    uVar4 = FUN_015f5b28(*(undefined8 *)puVar2,uVar4,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    FUN_026610e4(uVar4,0);
    *(undefined8 *)(unaff_x20 + 0x10) = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  }
  uVar4 = FUN_00da4fb8(*unaff_x22,unaff_w19);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  return;
}


