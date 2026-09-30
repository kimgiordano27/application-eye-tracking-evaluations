/*
FUNCTION_NAME: FUN_05e461f0
ENTRY_POINT: 05e461f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05e461f0(long param_1,void *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_1a8 [120];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [128];
  
  if ((DAT_06a7b466 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Unity_Collections_NativeArray<XRHandJoint>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Protobuf_MessageParser<PoiSubmissionTelemetry>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Collections_Generic_List<ValueTuple<Vector3,_float>>_TypeInfo);
    DAT_06a7b466 = 1;
  }
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = 0;
  plVar4 = *(long **)(param_1 + 0x30);
  if (plVar4 == (long *)0x0) {
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    memcpy(auStack_1a8,param_2,0x78);
    FUN_05df0b68(&local_130,auStack_1a8,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)Google_Protobuf_MessageParser<PoiSubmissionTelemetry>_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Google_Protobuf_MessageParser<PoiSubmissionTelemetry>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar4);
    }
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_128 = 0;
    local_130 = 0;
    memcpy(auStack_1a8,param_2,0x78);
    FUN_05df0b68(&local_130,auStack_1a8,0);
    puVar2 = System_Collections_Generic_List<ValueTuple<Vector3,_float>>_TypeInfo;
    if (plVar4 != (long *)0x0) {
      FUN_05df0b7c(*(undefined4 *)((long)plVar4 + 0x24),&local_130,0);
      FUN_05df0b84(&local_130,(char)plVar4[4],0);
      uVar3 = *(undefined8 *)puVar2;
      memcpy(auStack_b0,&local_130,0x80);
      System_Threading_Tasks_TaskFactory__StartNew<object>(auStack_b0,0,0,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


