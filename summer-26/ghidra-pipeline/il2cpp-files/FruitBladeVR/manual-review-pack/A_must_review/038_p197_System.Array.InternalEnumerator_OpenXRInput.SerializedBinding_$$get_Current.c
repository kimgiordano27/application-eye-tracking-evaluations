/*
FUNCTION_NAME: System.Array.InternalEnumerator<OpenXRInput.SerializedBinding>$$get_Current
ENTRY_POINT: 02a7c570
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array_InternalEnumerator<OpenXRInput_SerializedBinding>__get_Current
               (long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar6;
  long lVar7;
  undefined *puVar5;
  
  if ((int)param_1[1] == -1) {
    thunk_FUN_01cb9718(&System_InvalidOperationException_TypeInfo);
    uVar3 = thunk_FUN_01c8fc48();
    puVar5 = &StringLiteral_2601;
  }
  else {
    if ((int)param_1[1] != -2) {
      lVar7 = *param_1;
      if (lVar7 != 0) {
        iVar2 = System_Array__get_Length(lVar7,0);
        lVar6 = *(long *)(param_2 + 0x20);
        uVar1 = *(uint *)(param_1 + 1);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c8c820(lVar6);
        }
        System_Array__InternalArray__get_Item<OpenXRInput_SerializedBinding>
                  (lVar7,iVar2 + ~uVar1,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 8));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    thunk_FUN_01cb9718(&System_InvalidOperationException_TypeInfo);
    uVar3 = thunk_FUN_01c8fc48();
    puVar5 = &StringLiteral_2604;
  }
  uVar4 = thunk_FUN_01cb9718(puVar5);
  System_InvalidOperationException___ctor(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar3,param_2);
}


