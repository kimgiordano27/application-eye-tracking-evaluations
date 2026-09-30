/*
FUNCTION_NAME: OVRSpatialAnchor$$ToNativeArray
ENTRY_POINT: 05dd7a20
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void OVRSpatialAnchor__ToNativeArray
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,ulong param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  char *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined1 uStack000000000000005c;
  
  if (DAT_076dab70 == (code *)0x0) {
    in_stack_00000030 = "OculusSpatializerFMOD";
    in_stack_00000038 = 0x15;
    in_stack_00000040 = "ovrAudio_AudioGeometryUploadMeshArrays";
    in_stack_00000048 = 0x26;
    uStack0000000000000058 = 0x58;
    in_stack_00000050 = DAT_0139df28;
    uStack000000000000005c = 0;
    param_6 = param_6 & 0xffffffff;
    DAT_076dab70 = (code *)Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_Object_op_Inequality
                                     (&stack0x00000030);
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x20;
  }
  lVar2 = 0;
  if (param_7 != 0) {
    lVar2 = param_7 + 0x20;
  }
  (*DAT_076dab70)(param_1,lVar1,param_3,param_4,param_5,param_6,lVar2,param_8);
  return;
}


