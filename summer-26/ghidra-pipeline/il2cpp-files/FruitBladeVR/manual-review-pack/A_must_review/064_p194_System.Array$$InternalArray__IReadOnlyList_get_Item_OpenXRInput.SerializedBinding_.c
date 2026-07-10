/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OpenXRInput.SerializedBinding>
ENTRY_POINT: 02196fd4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
System_Array__InternalArray__IReadOnlyList_get_Item<OpenXRInput_SerializedBinding>
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
  uVar2 = System_Array__get_Length(param_1,0);
  if (param_2 < uVar2) {
    memcpy(&local_30,
           (void *)((long)param_1 + (ulong)*(uint *)(*param_1 + 0x104) * (long)(int)param_2 + 0x20),
           (ulong)*(uint *)(*param_1 + 0x104));
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = local_30;
    return auVar1;
  }
  thunk_FUN_01cb9718(&System_ArgumentOutOfRangeException_TypeInfo);
  uVar3 = thunk_FUN_01c8fc48();
  uVar4 = thunk_FUN_01cb9718(&StringLiteral_8617);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar3,param_3);
}


