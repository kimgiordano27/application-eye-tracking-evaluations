/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRRaycaster.RaycastHit>
ENTRY_POINT: 03098c68
PROGRAM: vrfs-libil2cpp.so
SCORE: 142
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4
*/


undefined8
System_Array__InternalArray__set_Item<OVRRaycaster_RaycastHit>
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  while (lVar1 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                           (param_1,unaff_w21,param_3), lVar1 != 0) {
    uVar2 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    do {
      if ((*(long *)(unaff_x19 + 0xf0) == 0) ||
         (lVar1 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                            (*(long *)(unaff_x19 + 0xf0),unaff_w21,*unaff_x24), lVar1 == 0))
      goto LAB_03098ce4;
      uVar2 = FUN_036e1c40(lVar1,0);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      lVar1 = *(long *)(unaff_x19 + 0xf0);
      unaff_w21 = unaff_w21 + 1;
      if (lVar1 == 0) goto LAB_03098ce4;
      while (*(int *)(lVar1 + 0x18) <= unaff_w21) {
        unaff_x20 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                              (unaff_x20,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar2 = FUN_051d2ac0(unaff_x20,0,0);
        if ((uVar2 & 1) == 0) {
          return 1;
        }
        if (unaff_x20 == 0) goto LAB_03098ce4;
        FUN_0431b25c(unaff_x20,*(undefined8 *)(unaff_x19 + 0xf0),*unaff_x23);
        lVar1 = *(long *)(unaff_x19 + 0xf0);
        if (lVar1 == 0) goto LAB_03098ce4;
        unaff_w21 = 0;
      }
      lVar1 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar1,unaff_w21,*unaff_x24);
      if (lVar1 == 0) goto LAB_03098ce4;
      uVar2 = FUN_051de2f8(lVar1,0);
    } while ((uVar2 & 1) == 0);
    param_1 = *(long *)(unaff_x19 + 0xf0);
    if (param_1 == 0) break;
    param_3 = *unaff_x24;
  }
LAB_03098ce4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


