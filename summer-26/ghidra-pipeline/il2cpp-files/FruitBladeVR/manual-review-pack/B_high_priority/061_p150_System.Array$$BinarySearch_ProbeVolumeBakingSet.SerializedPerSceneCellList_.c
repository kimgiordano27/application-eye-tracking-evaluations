/*
FUNCTION_NAME: System.Array$$BinarySearch<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 01ebd964
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void System_Array__BinarySearch<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_01c8c87c(param_7);
  }
  if (param_1 == 0) {
    thunk_FUN_01cb9718(PTR_System_ArgumentNullException_TypeInfo_03cb62e0);
    uVar4 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_7572_03cb6590);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
  }
  else if ((int)(param_3 | param_2) < 0) {
    puVar1 = PTR_StringLiteral_8877_03cb65b8;
    if ((int)param_2 < 0) {
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
      lVar2 = *(long *)(*(long *)(param_7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01c8c820();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      lVar6 = *(long *)(*(long *)(param_7 + 0x38) + 8);
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
      System_Collections_Generic_ArraySortHelper<ProbeVolumeBakingSet_SerializedPerSceneCellList>__BinarySearch
                (**(long **)(lVar2 + 0xb8),param_1,param_2,param_3,param_4,param_5,param_6,
                 *(undefined8 *)(*(long *)(param_7 + 0x38) + 0x30));
      return;
    }
    thunk_FUN_01cb9718(PTR_System_ArgumentException_TypeInfo_03cb63c8);
    uVar4 = thunk_FUN_01c8fc48();
    uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_4294_03cb65c0);
    System_ArgumentException___ctor(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar4,param_7);
}


