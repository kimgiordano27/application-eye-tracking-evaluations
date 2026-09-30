/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector4s>
ENTRY_POINT: 013e0b9c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector4s>
               (long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w20;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_0122e7a4();
  }
  if (param_2 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar4 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3f90);
    FUN_01e75914(uVar4,uVar5,0);
  }
  else if ((int)(unaff_w20 | param_3) < 0) {
    puVar1 = PTR_DAT_027b3f98;
    if (-1 < (int)unaff_w20) {
      puVar1 = PTR_DAT_027b3fa0;
    }
    uVar5 = thunk_FUN_01279b34(puVar1);
    thunk_FUN_01279b34(PTR_DAT_027b3fa8);
    uVar4 = thunk_FUN_0124bba8();
    uVar3 = thunk_FUN_01279b34(PTR_DAT_027b3fb0);
    FUN_01e79c88(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)unaff_w20 <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
      if ((int)unaff_w20 < 2) {
        return;
      }
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0122e748();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
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
      FUN_019d1a90(**(long **)(lVar2 + 0xb8),param_2,param_3,unaff_w20);
      return;
    }
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar4 = thunk_FUN_0124bba8();
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027b3fb8);
    FUN_01e7d290(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar4);
}


