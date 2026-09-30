/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$Reset
ENTRY_POINT: 0379d67c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__Reset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long unaff_x20;
  int iVar6;
  
  puVar2 = PTR_DAT_06e52cd8;
  puVar1 = PTR_DAT_06db9110;
  iVar6 = 0;
  while( true ) {
    lVar3 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                      ();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar4 = FUN_02526f10(*(undefined8 *)(lVar3 + 0x20),0);
    if ((uVar4 & 1) != 0) break;
    iVar5 = *(int *)(unaff_x20 + 0x18);
    iVar6 = iVar6 + 1;
    if (iVar5 <= iVar6) {
LAB_0379d6e8:
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                    ();
          FUN_0379d360();
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(unaff_x20 + 0x18));
      }
      FUN_0379d7d4();
      FUN_051e4284();
      return;
    }
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_04866d9c(*(undefined8 *)puVar1,0);
  iVar5 = *(int *)(unaff_x20 + 0x18);
  goto LAB_0379d6e8;
}


