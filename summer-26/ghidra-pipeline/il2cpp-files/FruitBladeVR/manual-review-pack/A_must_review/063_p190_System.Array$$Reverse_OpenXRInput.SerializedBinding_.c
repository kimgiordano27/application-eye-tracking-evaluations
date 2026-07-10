/*
FUNCTION_NAME: System.Array$$Reverse<OpenXRInput.SerializedBinding>
ENTRY_POINT: 01e4c2fc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__Reverse<OpenXRInput_SerializedBinding>
               (long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    thunk_FUN_01cb9718(PTR_System_ArgumentNullException_TypeInfo_03cb62e0);
    uVar3 = thunk_FUN_01c8fc48();
    uVar4 = thunk_FUN_01cb9718(PTR_StringLiteral_7572_03cb6590);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
  }
  else if ((int)(param_3 | param_2) < 0) {
    puVar1 = PTR_StringLiteral_8877_03cb65b8;
    if ((int)param_2 < 0) {
      puVar1 = PTR_StringLiteral_8617_03cb6588;
    }
    uVar4 = thunk_FUN_01cb9718(puVar1);
    thunk_FUN_01cb9718(PTR_System_ArgumentOutOfRangeException_TypeInfo_03cb6330);
    uVar3 = thunk_FUN_01c8fc48();
    uVar2 = thunk_FUN_01cb9718(PTR_StringLiteral_4132_03cb65b0);
    System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar2,0);
  }
  else {
    if ((int)param_3 <= (int)(*(int *)(param_1 + 0x18) - param_2)) {
      if (1 < param_3) {
        puVar5 = (undefined8 *)(param_1 + (ulong)param_2 * 0x10 + 0x20);
        puVar6 = puVar5 + (ulong)param_3 * 2 + -2;
        do {
          uVar3 = puVar5[1];
          uVar4 = *puVar5;
          uVar2 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar2;
          thunk_FUN_01cc8040(puVar5 + 1,0);
          puVar6[1] = uVar3;
          *puVar6 = uVar4;
          thunk_FUN_01cc8040(puVar6 + 1,0);
          puVar5 = puVar5 + 2;
          puVar6 = puVar6 + -2;
        } while (puVar5 < puVar6);
      }
      return;
    }
    thunk_FUN_01cb9718(PTR_System_ArgumentException_TypeInfo_03cb63c8);
    uVar3 = thunk_FUN_01c8fc48();
    uVar4 = thunk_FUN_01cb9718(PTR_StringLiteral_4294_03cb65c0);
    System_ArgumentException___ctor(uVar3,uVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar3,param_4);
}


