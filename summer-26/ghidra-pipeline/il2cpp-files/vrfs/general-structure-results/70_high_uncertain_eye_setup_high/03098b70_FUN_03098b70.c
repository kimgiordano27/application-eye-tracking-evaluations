/*
FUNCTION_NAME: FUN_03098b70
ENTRY_POINT: 03098b70
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_03098b70(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  if ((bRam0000000007237435 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06df32e0);
    thunk_FUN_0159f088(PTR_DAT_06ddaaf8);
    thunk_FUN_0159f088(PTR_DAT_06e5fa78);
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    bRam0000000007237435 = 1;
  }
  puVar3 = PTR_DAT_06e5fa78;
  puVar2 = PTR_DAT_06df32e0;
  puVar1 = PTR_DAT_06d9fd78;
  lVar4 = FUN_051e5130(param_1,0);
  while( true ) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar5 = FUN_051d2ac0(lVar4,0,0);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    if (lVar4 == 0) break;
    FUN_0431b25c(lVar4,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)puVar2);
    lVar6 = *(long *)(param_1 + 0xf0);
    if (lVar6 == 0) break;
    iVar7 = 0;
    while (iVar7 < *(int *)(lVar6 + 0x18)) {
      lVar6 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        (lVar6,iVar7,*(undefined8 *)puVar3);
      if (lVar6 == 0) goto LAB_03098ce4;
      uVar5 = FUN_051de2f8(lVar6,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0xf0) == 0) ||
           (lVar6 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                              (*(long *)(param_1 + 0xf0),iVar7,*(undefined8 *)puVar3), lVar6 == 0))
        goto LAB_03098ce4;
        uVar5 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(lVar6,0);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
      }
      if ((*(long *)(param_1 + 0xf0) == 0) ||
         (lVar6 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                            (*(long *)(param_1 + 0xf0),iVar7,*(undefined8 *)puVar3), lVar6 == 0))
      goto LAB_03098ce4;
      uVar5 = FUN_036e1c40(lVar6,0);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      lVar6 = *(long *)(param_1 + 0xf0);
      iVar7 = iVar7 + 1;
      if (lVar6 == 0) goto LAB_03098ce4;
    }
    lVar4 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                      (lVar4,0);
  }
LAB_03098ce4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


