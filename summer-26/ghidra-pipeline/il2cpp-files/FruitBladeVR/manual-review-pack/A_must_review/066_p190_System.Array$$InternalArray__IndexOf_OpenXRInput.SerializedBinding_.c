/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OpenXRInput.SerializedBinding>
ENTRY_POINT: 01dbf9d0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


int System_Array__InternalArray__IndexOf<OpenXRInput_SerializedBinding>
              (long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long local_a0 [3];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    FUN_01c8c87c(param_4);
  }
  local_70 = 0;
  uStack_68 = 0;
  iVar1 = System_Array__get_Rank(param_1,0);
  if (1 < iVar1) {
    thunk_FUN_01cb9718(&System_RankException_TypeInfo);
    uVar3 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(&StringLiteral_4358);
    System_RankException___ctor(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5ca98(uVar3,param_4);
  }
  uVar2 = System_Array__get_Length(param_1,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&local_70,(void *)((long)param_1 + uVar7 * *(uint *)(*param_1 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_1 + 0x104));
      local_80 = param_2;
      uStack_78 = param_3;
      uVar3 = thunk_FUN_01c8f880(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),&local_80);
      lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c8c820(lVar6);
      }
      local_a0[1] = 0xffffffffffffffff;
      uStack_88 = uStack_68;
      local_a0[2] = local_70;
      local_a0[0] = lVar6;
      uVar4 = System_ValueType__Equals(local_a0,uVar3,0);
      if ((uVar4 & 1) != 0) {
        iVar1 = System_Array__GetLowerBound(param_1,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = System_Array__GetLowerBound(param_1,0,0);
  return iVar1 + -1;
}


