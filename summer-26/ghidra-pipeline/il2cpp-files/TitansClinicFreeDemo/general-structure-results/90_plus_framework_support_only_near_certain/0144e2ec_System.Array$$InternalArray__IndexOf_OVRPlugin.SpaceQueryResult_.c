/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0144e2ec
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__IndexOf<OVRPlugin_SpaceQueryResult>(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x22;
  
  if (param_1 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b4798);
    thunk_FUN_01279b34(PTR_DAT_027b3620);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
      FUN_0122e7a4();
    }
  }
  if (unaff_x22 != 0) {
    if (param_2 < 1) {
      if (param_2 != 0) {
        thunk_FUN_01279b34(PTR_DAT_027b3fa8);
        uVar3 = thunk_FUN_0124bba8();
        uVar2 = thunk_FUN_01279b34(PTR_DAT_027b3f98);
        System_TimeSpan__get_Seconds(uVar3,uVar2,0);
        goto LAB_0144e3fc;
      }
      lVar1 = **(long **)(*(long *)PTR_DAT_027b3620 + 0xb8);
    }
    else {
      lVar1 = thunk_FUN_0122f4b0(param_2,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar2 = System_Int32__TryParse(lVar1,0);
      (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar2,param_2);
    }
    return lVar1;
  }
  thunk_FUN_01279b34(PTR_DAT_027b3df8);
  uVar3 = thunk_FUN_0124bba8();
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027b3ff0);
  FUN_01e75914(uVar3,uVar2,0);
LAB_0144e3fc:
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar3);
}


