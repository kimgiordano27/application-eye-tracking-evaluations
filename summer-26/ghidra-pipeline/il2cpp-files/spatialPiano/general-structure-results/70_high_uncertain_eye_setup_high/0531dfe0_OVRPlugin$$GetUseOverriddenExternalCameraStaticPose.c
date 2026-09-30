/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 0531dfe0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetUseOverriddenExternalCameraStaticPose
                (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  undefined4 *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float unaff_s13;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  fVar2 = (float)FUN_060dfb18();
  uVar4 = *unaff_x19;
  fVar5 = (float)unaff_x19[1];
  fVar6 = (float)unaff_x19[2];
  uVar7 = unaff_x19[3];
  if (*(char *)(unaff_x22 + 0x2c4) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    *(undefined1 *)(unaff_x22 + 0x2c4) = 1;
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  fVar3 = (float)FUN_060dfb18(uVar4,fVar5,fVar6,uVar7,*(undefined4 *)(lVar1 + 0x18),
                              *(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),0);
  return ((fStack000000000000000c * unaff_s13 +
          fStack000000000000005c * fStack0000000000000008 +
          fStack0000000000000058 * in_stack_00000000._4_4_) * 0.5 + 0.5) *
         ((param_3 * fVar6 + fVar2 * fVar3 + param_2 * fVar5) * 0.5 + 0.5);
}


