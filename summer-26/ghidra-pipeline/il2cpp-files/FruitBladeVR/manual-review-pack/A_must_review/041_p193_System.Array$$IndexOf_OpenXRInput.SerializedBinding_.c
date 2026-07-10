/*
FUNCTION_NAME: System.Array$$IndexOf<OpenXRInput.SerializedBinding>
ENTRY_POINT: 01fe7fc4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__IndexOf<OpenXRInput_SerializedBinding>
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (*(long *)(param_6 + 0x38) == 0) {
    FUN_01c8c87c(param_6);
  }
  if (param_1 == 0) {
    thunk_FUN_01cb9718(&System_ArgumentNullException_TypeInfo);
    uVar1 = thunk_FUN_01c8fc48();
    uVar2 = thunk_FUN_01cb9718(&StringLiteral_7572);
    System_ArgumentNullException___ctor(uVar1,uVar2,0);
    goto LAB_01fe80f4;
  }
  if (param_4 < 0) {
LAB_01fe804c:
    thunk_FUN_01cb9718(&System_ArgumentOutOfRangeException_TypeInfo);
    uVar1 = thunk_FUN_01c8fc48();
    uVar2 = thunk_FUN_01cb9718(&StringLiteral_9773);
    puVar4 = &StringLiteral_3224;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_4) goto LAB_01fe804c;
    if ((-1 < param_5) && (param_5 <= *(int *)(param_1 + 0x18) - param_4)) {
      System_Array__IndexOfImpl<OpenXRInput_SerializedBinding>
                (param_1,param_2,param_3,param_4,param_5,
                 *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_01cb9718(&System_ArgumentOutOfRangeException_TypeInfo);
    uVar1 = thunk_FUN_01c8fc48();
    uVar2 = thunk_FUN_01cb9718(&StringLiteral_7938);
    puVar4 = &StringLiteral_2198;
  }
  uVar3 = thunk_FUN_01cb9718(puVar4);
  System_ArgumentOutOfRangeException___ctor(uVar1,uVar2,uVar3,0);
LAB_01fe80f4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar1,param_6);
}


