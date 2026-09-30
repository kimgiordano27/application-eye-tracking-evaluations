/*
FUNCTION_NAME: Unity.VisualScripting.Generated.Aot.AotStubs$$UnityEngine_PhysicsUpdateBehaviour2D_op_Equality
ENTRY_POINT: 032df7e8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 *
Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_PhysicsUpdateBehaviour2D_op_Equality
          (undefined8 *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uStack0000000000000008;
  undefined8 *puStack0000000000000010;
  void *in_stack_00000018;
  undefined8 *in_stack_00000028;
  
  uStack0000000000000008 = 0;
  puStack0000000000000010 = param_1;
  uVar5 = FUN_032e0d10(&DAT_076ebdc8,&stack0x00000008,&stack0x00000028);
  if ((in_stack_00000028 == (undefined8 *)0x0) || (puVar6 = in_stack_00000028, (uVar5 & 1) == 0)) {
    FUN_03296828(&stack0x00000020,Method_OVRTask_FromRequest<OVRResult<OVRPlugin_Result>>__);
    uStack0000000000000008 = 0;
    puStack0000000000000010 = param_1;
    uVar4 = FUN_032e0d10(&DAT_076ebdc8,&stack0x00000008,&stack0x00000028);
    if ((in_stack_00000028 == (undefined8 *)0x0) ||
       (puVar6 = in_stack_00000028, ((uVar4 ^ 1) & 1) != 0)) {
      puVar6 = (undefined8 *)FUN_032fb70c(1,0x138);
      puVar6[0xf] = puVar6;
      puVar6[3] = param_1[3];
      FUN_03300854(&stack0x00000008,&DAT_013aa2c2,param_1[2]);
      pvVar2 = (void *)((ulong)&stack0x00000008 | 1);
      if ((uStack0000000000000008 & 1) != 0) {
        pvVar2 = in_stack_00000018;
      }
      uVar7 = FUN_03300ea8(pvVar2);
      puVar6[2] = uVar7;
      if ((uStack0000000000000008 & 1) != 0) {
        operator_delete(in_stack_00000018);
      }
      puVar1 = (ushort *)((long)puVar6 + 0x135);
      *puVar6 = *param_1;
      uVar3 = *puVar1;
      *puVar1 = uVar3 | 2;
      uVar4 = *(uint *)(param_1 + 0x23);
      puVar6[0x1f] = 0x800000008;
      *(uint *)(puVar6 + 0x23) = uVar4 & 7;
      *puVar1 = uVar3 | 0x102;
      puVar6[4] = param_1 + 4;
      puVar6[6] = param_1 + 4;
      *(undefined1 *)((long)puVar6 + 0x2a) = 0xf;
      puVar6[0xb] = 0;
      *(undefined1 *)(puVar6 + 0x26) = 1;
      puVar6[8] = param_1;
      puVar6[9] = param_1;
      *(uint *)(puVar6 + 7) = *(uint *)(puVar6 + 7) & 0xff0fffff | 0x200f0000;
      uStack0000000000000008 = 0;
      puStack0000000000000010 = param_1;
      in_stack_00000028 = puVar6;
      FUN_032e0fa0(&DAT_076ebdc8,&stack0x00000008,&stack0x00000028);
    }
    FUN_03296ccc(&stack0x00000020);
  }
  return puVar6;
}


