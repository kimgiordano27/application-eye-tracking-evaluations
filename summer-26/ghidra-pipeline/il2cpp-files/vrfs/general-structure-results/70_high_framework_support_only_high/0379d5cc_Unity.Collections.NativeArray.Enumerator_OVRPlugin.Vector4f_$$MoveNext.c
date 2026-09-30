/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$MoveNext
ENTRY_POINT: 0379d5cc
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long unaff_x20;
  int iVar7;
  long unaff_x21;
  
  thunk_FUN_0159f088(PTR_DAT_06db9110);
  *(undefined1 *)(unaff_x21 + 0x195) = 1;
  if ((unaff_x20 == 0) || (*(int *)(unaff_x20 + 0x18) == 0)) {
    return 0;
  }
  uVar3 = FUN_0379d754();
  puVar2 = PTR_DAT_06e52cd8;
  puVar1 = PTR_DAT_06db9110;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(unaff_x20 + 0x18) < 1) goto LAB_0379d720;
    iVar7 = 0;
    do {
      lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        ();
      if (lVar4 == 0) goto LAB_0379d750;
      uVar3 = FUN_02526f10(*(undefined8 *)(lVar4 + 0x20),0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_04866d9c(*(undefined8 *)puVar1,0);
        iVar6 = *(int *)(unaff_x20 + 0x18);
        break;
      }
      iVar6 = *(int *)(unaff_x20 + 0x18);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  else {
    if (*(int *)(unaff_x20 + 0x18) < 1) goto LAB_0379d720;
    iVar7 = 0;
    do {
      lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                        ();
      if (lVar4 == 0) {
LAB_0379d750:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar3 = FUN_02526f10(*(undefined8 *)(lVar4 + 0x20),0);
      if ((uVar3 & 1) != 0) {
        lVar4 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                          ();
        if (lVar4 == 0) goto LAB_0379d750;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        thunk_FUN_01656ef8();
      }
      iVar6 = *(int *)(unaff_x20 + 0x18);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  if (0 < iVar6) {
    iVar7 = 0;
    do {
      System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                ();
      FUN_0379d360();
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(unaff_x20 + 0x18));
  }
LAB_0379d720:
  FUN_0379d7d4();
  uVar5 = FUN_051e4284();
  return uVar5;
}


