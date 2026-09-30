/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 0600838c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetTrackerPose(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long *unaff_x21;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s14;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fStack000000000000000c = (float)FUN_06e464bc(0);
  uVar4 = *unaff_x20;
  fVar5 = (float)unaff_x20[1];
  fVar8 = (float)unaff_x20[2];
  uVar6 = unaff_x20[3];
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf2 = '\x01';
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  fStack0000000000000004 =
       (float)FUN_06e464bc(uVar4,fVar5,fVar8,uVar6,*(undefined4 *)(lVar1 + 0x18),
                           *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),0);
  uVar4 = *unaff_x19;
  fVar7 = (float)unaff_x19[1];
  fVar9 = (float)unaff_x19[2];
  uVar6 = unaff_x19[3];
  if (DAT_07a3caf2 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3caf2 = '\x01';
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  fVar3 = unaff_s14 * fStack000000000000000c;
  fVar2 = (float)FUN_06e464bc(uVar4,fVar7,fVar9,uVar6,*(undefined4 *)(lVar1 + 0x18),
                              *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),0);
  return 1.0 - ((fStack0000000000000058 * param_3 + fVar3 + fStack000000000000005c * param_2) * 0.5
               + 0.5) * ((fVar8 * fVar9 + fStack0000000000000004 * fVar2 + fVar5 * fVar7) * 0.5 +
                        0.5);
}


