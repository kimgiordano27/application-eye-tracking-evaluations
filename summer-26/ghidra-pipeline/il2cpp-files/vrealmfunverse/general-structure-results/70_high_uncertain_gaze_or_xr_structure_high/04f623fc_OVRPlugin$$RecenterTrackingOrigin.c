/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 04f623fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__RecenterTrackingOrigin(long param_1,float param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  FUN_05c9c840(param_2 * *(float *)(param_1 + 0xc),param_2 * *(float *)(param_1 + 0x10),
               *(float *)(param_1 + 0x14) * param_2);
  uVar1 = FUN_05c89340();
  uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x14);
  uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
  OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo___ctor(&stack0x00000020 + 4);
  in_stack_00000040 = in_stack_00000020._4_8_;
  uStack0000000000000054 = in_stack_00000038;
  uStack000000000000004c = in_stack_00000030;
  FUN_04efb620(uVar1,&stack0x00000040,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 != 0) {
    lVar2 = thunk_FUN_02b79644(*(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_var);
    FUN_04f624c8(lVar2,lVar4);
    plVar3 = (long *)(unaff_x19 + 0x48);
    *plVar3 = lVar2;
    thunk_FUN_02bb0e9c(plVar3,lVar2);
    *(bool *)(unaff_x19 + 0x38) = *plVar3 != 0;
  }
  return;
}


