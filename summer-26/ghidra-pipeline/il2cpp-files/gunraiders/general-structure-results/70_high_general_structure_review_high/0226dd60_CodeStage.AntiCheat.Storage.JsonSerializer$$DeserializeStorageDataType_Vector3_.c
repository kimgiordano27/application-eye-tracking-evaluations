/*
FUNCTION_NAME: CodeStage.AntiCheat.Storage.JsonSerializer$$DeserializeStorageDataType<Vector3>
ENTRY_POINT: 0226dd60
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16]
CodeStage_AntiCheat_Storage_JsonSerializer__DeserializeStorageDataType<Vector3>
          (long *param_1,uint param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_032e9d44(param_1,0);
  if (param_2 < uVar2) {
    memcpy(&local_30,
           (void *)((long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (long)(int)param_2 + 0x20),
           (ulong)*(uint *)(*param_1 + 0x104));
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = local_30;
    return auVar1;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar3 = thunk_FUN_01c496e0();
  uVar4 = thunk_FUN_01c273e8(PTR_DAT_04238118);
  FUN_03247e00(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,param_3);
}


