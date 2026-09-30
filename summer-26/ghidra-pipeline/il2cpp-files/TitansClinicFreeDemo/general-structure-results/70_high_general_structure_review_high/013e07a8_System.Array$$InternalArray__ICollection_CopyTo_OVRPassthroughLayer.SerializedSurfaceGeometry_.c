/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 013e07a8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,uint param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_0122e7a4(param_5);
  }
  if (param_1 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar4 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3f90);
    FUN_01e75914(uVar4,uVar5,0);
  }
  else if ((int)(param_3 | param_2) < 0) {
    puVar1 = PTR_DAT_027b3f98;
    if (-1 < (int)param_3) {
      puVar1 = PTR_DAT_027b3fa0;
    }
    uVar5 = thunk_FUN_01279b34(puVar1);
    thunk_FUN_01279b34(PTR_DAT_027b3fa8);
    uVar4 = thunk_FUN_0124bba8();
    uVar3 = thunk_FUN_01279b34(PTR_DAT_027b3fb0);
    FUN_01e79c88(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 <= (int)(*(int *)(param_1 + 0x18) - param_2)) {
      if ((int)param_3 < 2) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0122e748();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0122e748();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0122e748();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0122e748();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0122e748();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      FUN_019ce980(**(long **)(lVar2 + 0xb8),param_1,param_2,param_3,param_4,
                   *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
      return;
    }
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar4 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3fb8);
    FUN_01e7d290(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar4,param_5);
}


