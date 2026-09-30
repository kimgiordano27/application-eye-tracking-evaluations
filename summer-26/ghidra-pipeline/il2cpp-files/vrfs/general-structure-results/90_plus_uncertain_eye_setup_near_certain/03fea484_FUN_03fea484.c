/*
FUNCTION_NAME: FUN_03fea484
ENTRY_POINT: 03fea484
PROGRAM: vrfs-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03fea484(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_0723c8a4 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06deb1a8);
    thunk_FUN_0159f088(PTR_DAT_06e304e0);
    thunk_FUN_0159f088(PTR_DAT_06e51030);
    thunk_FUN_0159f088(PTR_DAT_06e53a18);
    thunk_FUN_0159f088(PTR_DAT_06dd0d18);
    DAT_0723c8a4 = 1;
  }
  puVar1 = PTR_DAT_06e51030;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_051df8e4(*(long *)(param_1 + 0x28),0,0);
    uVar4 = FUN_0431b2e0(param_1,*(undefined8 *)puVar1);
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x88),uVar4);
    lVar5 = *(long *)(param_1 + 0x18);
    uVar4 = FUN_051d85c4(0);
    if (lVar5 != 0) {
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (lVar5,uVar4,0);
      if (*(long *)(param_1 + 0x98) != 0) {
        lVar5 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                          (*(long *)(param_1 + 0x98),0,*(undefined8 *)PTR_DAT_06e53a18);
        plVar6 = (long *)(param_1 + 0xa0);
        *plVar6 = lVar5;
        thunk_FUN_01656ef8(plVar6,lVar5);
        puVar3 = PTR_DAT_06e304e0;
        puVar2 = PTR_DAT_06deb1a8;
        puVar1 = PTR_DAT_06dd0d18;
        plVar6 = (long *)*plVar6;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x378))(plVar6,0,*(undefined8 *)(*plVar6 + 0x380));
          uVar4 = FUN_0431ae70(param_1,*(undefined8 *)puVar2);
          *(undefined8 *)(param_1 + 0xa8) = uVar4;
          thunk_FUN_01656ef8();
          uVar4 = FUN_0431ae70(param_1,*(undefined8 *)puVar3);
          lVar5 = FUN_02beb5f0(uVar4,*(undefined8 *)puVar1,0);
          if (lVar5 != 0) {
            uVar4 = FUN_051e516c(lVar5,0);
            *(undefined8 *)(param_1 + 0xb0) = uVar4;
            thunk_FUN_01656ef8((undefined8 *)(param_1 + 0xb0),uVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


