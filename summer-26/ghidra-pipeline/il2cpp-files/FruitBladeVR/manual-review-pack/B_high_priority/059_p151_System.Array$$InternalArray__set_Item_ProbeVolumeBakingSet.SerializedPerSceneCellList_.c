/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 01e2d2cc
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__set_Item<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_01c5c92c(PTR_object___TypeInfo_03cb62b8);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01c8c87c(param_5);
    }
  }
  uVar1 = System_Array__get_Length(param_1,0);
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01c8fb4c(param_1,*(undefined8 *)PTR_object___TypeInfo_03cb62b8);
    if (plVar2 == (long *)0x0) {
      FUN_01c5c9d0(param_1,param_2,&local_40);
    }
    else {
      uStack_48 = uStack_38;
      local_50 = local_40;
      lVar3 = thunk_FUN_01c8f880(**(undefined8 **)(param_5 + 0x38),&local_50);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01c8fb4c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = thunk_FUN_01c9d12c();
                    /* WARNING: Subroutine does not return */
        FUN_01c5ca98(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01cc8040(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01cb9718(PTR_System_ArgumentOutOfRangeException_TypeInfo_03cb6330);
  uVar6 = thunk_FUN_01c8fc48();
  uVar5 = thunk_FUN_01cb9718(PTR_StringLiteral_8617_03cb6588);
  System_ArgumentOutOfRangeException___ctor(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01c5ca98(uVar6,param_5);
}


