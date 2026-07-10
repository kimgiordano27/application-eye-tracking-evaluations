/*
FUNCTION_NAME: System.Array$$Sort<OpenXRInput.SerializedBinding>
ENTRY_POINT: 01e60a00
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__Sort<OpenXRInput_SerializedBinding>
               (long param_1,uint param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_01c8c87c(param_5);
  }
  if (param_1 == 0) {
    thunk_FUN_01cb9718(PTR_System_ArgumentNullException_TypeInfo_03cb62e0);
    uVar4 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_7572_03cb6590);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
  }
  else if ((int)(param_3 | param_2) < 0) {
    puVar1 = PTR_StringLiteral_8877_03cb65b8;
    if (-1 < (int)param_3) {
      puVar1 = PTR_StringLiteral_8617_03cb6588;
    }
    uVar5 = thunk_FUN_01cb9718(puVar1);
    thunk_FUN_01cb9718(PTR_System_ArgumentOutOfRangeException_TypeInfo_03cb6330);
    uVar4 = thunk_FUN_01c8fc48();
    uVar3 = thunk_FUN_01cb9718(PTR_StringLiteral_4132_03cb65b0);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 <= (int)(*(int *)(param_1 + 0x18) - param_2)) {
      if (param_3 < 2) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c8c820();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c8c820();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c8c820();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c8c820();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c8c820();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      System_Collections_Generic_ArraySortHelper<OpenXRInput_SerializedBinding>__Sort
                (**(long **)(lVar2 + 0xb8),param_1,param_2,param_3,param_4,
                 *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
      return;
    }
    thunk_FUN_01cb9718(PTR_System_ArgumentException_TypeInfo_03cb63c8);
    uVar4 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_4294_03cb65c0);
    System_ArgumentException___ctor(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar4,param_5);
}


