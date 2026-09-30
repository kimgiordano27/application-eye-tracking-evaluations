/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 013ceeb8
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


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_AppPerfFrameStats>
               (long param_1,long param_2,int param_3,uint param_4,undefined8 param_5)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_x9;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar4 = thunk_FUN_0124bba8();
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027b3f90);
    FUN_01e75914(uVar4,uVar7,0);
  }
  else if (((int)param_4 < 0) || (param_3 < 0)) {
    puVar1 = PTR_DAT_027b3fa0;
    if (-1 < param_3) {
      puVar1 = PTR_DAT_027b3f98;
    }
    uVar7 = thunk_FUN_01279b34(puVar1);
    thunk_FUN_01279b34(PTR_DAT_027b3fa8);
    uVar4 = thunk_FUN_0124bba8();
    uVar3 = thunk_FUN_01279b34(PTR_DAT_027b3fb0);
    FUN_01e79c88(uVar4,uVar7,uVar3,0);
  }
  else {
    if ((int)param_4 <= *(int *)(param_2 + 0x18) - param_3) {
      if (1 < (int)param_4) {
                    /* try { // try from 013ceee4 to 014ceee7 has its CatchHandler @ 013cef4c */
        puVar6 = (undefined8 *)(param_2 + (long)param_3 * 0x18 + 0x38);
        puVar5 = (undefined8 *)((ulong)param_4 * 0x18 + (long)param_3 * 0x18 + param_2 + 8);
        do {
          uVar7 = puVar6[-1];
          uVar8 = puVar6[-2];
          uVar4 = puVar6[-3];
                    /* try { // try from 013cef10 to 014cef23 has its CatchHandler @ 013cef38 */
          uVar9 = puVar5[1];
          uVar3 = *puVar5;
          puVar6[-1] = puVar5[2];
          puVar6[-2] = uVar9;
          puVar6[-3] = uVar3;
          puVar5[2] = uVar7;
          puVar5[1] = uVar8;
          *puVar5 = uVar4;
          bVar2 = puVar6 < puVar5 + -3;
          puVar6 = puVar6 + 3;
          puVar5 = puVar5 + -3;
        } while (bVar2);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 013cef10 with catch @ 013cef38
                        */
      if (*(long *)(param_1 + 0x28) != in_x9) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 013ceee4 with catch @ 013cef4c
                        */
      return;
    }
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar4 = thunk_FUN_0124bba8();
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027b3fb8);
    FUN_01e7d290(uVar4,uVar7,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar4,param_5);
}


