/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 02bbbb3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Reset(void)

{
  int iVar1;
  bool in_CY;
  int unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar2;
  long unaff_x26;
  undefined4 unaff_w27;
  int *unaff_x28;
  undefined4 unaff_w29;
  
  if (!in_CY) {
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + (long)unaff_w19 * 0x18 + 0x24);
    lVar2 = unaff_x26 + (long)unaff_w19 * 0x18;
    *(undefined4 *)(lVar2 + 0x20) = unaff_w27;
    iVar1 = *unaff_x28;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    *(int *)(lVar2 + 0x24) = iVar1 + -1;
    thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x28));
    *(undefined4 *)(lVar2 + 0x30) = unaff_w29;
    *unaff_x28 = unaff_w19 + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


