/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 04f623a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__SetTrackingCalibratedOrigin(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *plVar4;
  long unaff_x20;
  float fVar5;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  if (unaff_x19 != 0) {
    lVar1 = FUN_05c89340();
    if (DAT_066c1d98 == '\0') {
      FUN_02b3c81c(PTR_DAT_06312438);
      DAT_066c1d98 = '\x01';
    }
    if (lVar1 != 0) {
      fVar5 = *(float *)(unaff_x20 + 0x28);
      lVar3 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
      FUN_05c9c840(fVar5 * *(float *)(lVar3 + 0xc),fVar5 * *(float *)(lVar3 + 0x10),
                   *(float *)(lVar3 + 0x14) * fVar5,lVar1,0);
      uVar2 = FUN_05c89340();
      uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x14);
      uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x20 + 0xc);
      OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo___ctor(&stack0x00000020 + 4);
      in_stack_00000040 = in_stack_00000020._4_8_;
      uStack0000000000000054 = (undefined4)in_stack_00000038;
      uStack0000000000000058 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
      uStack000000000000004c = in_stack_00000030;
      FUN_04efb620(uVar2,&stack0x00000040,0,0);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if (lVar1 != 0) {
        lVar3 = thunk_FUN_02b79644(*(undefined8 *)System_Xml_Serialization_XmlEnumAttribute_var);
        FUN_04f624c8(lVar3,lVar1);
        plVar4 = (long *)(unaff_x19 + 0x48);
        *plVar4 = lVar3;
        thunk_FUN_02bb0e9c(plVar4,lVar3);
        *(bool *)(unaff_x19 + 0x38) = *plVar4 != 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


