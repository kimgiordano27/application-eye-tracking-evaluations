/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$get_Current
ENTRY_POINT: 0379d688
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


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__get_Current(void)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long unaff_x20;
  int iVar4;
  long unaff_x23;
  undefined8 *puVar5;
  long *unaff_x24;
  
  puVar5 = *(undefined8 **)(unaff_x23 + 0x110);
  iVar4 = 0;
  while( true ) {
    lVar1 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                      ();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar2 = FUN_02526f10(*(undefined8 *)(lVar1 + 0x20),0);
    if ((uVar2 & 1) != 0) break;
    iVar3 = *(int *)(unaff_x20 + 0x18);
    iVar4 = iVar4 + 1;
    if (iVar3 <= iVar4) {
LAB_0379d6e8:
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                    ();
          FUN_0379d360();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(unaff_x20 + 0x18));
      }
      FUN_0379d7d4();
      FUN_051e4284();
      return;
    }
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_04866d9c(*puVar5,0);
  iVar3 = *(int *)(unaff_x20 + 0x18);
  goto LAB_0379d6e8;
}


