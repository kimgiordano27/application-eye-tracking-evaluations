/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.Vector3f>
ENTRY_POINT: 03a1d7e8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_Vector3f>(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *unaff_x19;
  long unaff_x21;
  int unaff_w22;
  
  FUN_03fd7d90(*(undefined8 *)(param_1 + 0x68));
  puVar2 = PTR_DAT_075d6450;
  if (unaff_w22 < 1) {
    lVar3 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_075d6450 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar3 = FUN_03b6a804();
    lVar4 = *unaff_x19;
    if (lVar4 != 0) {
      iVar5 = *(int *)((long)unaff_x19 + 0xc);
      if (0 < iVar5) {
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
          iVar5 = *(int *)((long)unaff_x19 + 0xc);
          lVar4 = *unaff_x19;
        }
        iVar1 = unaff_w22;
        if (iVar5 <= unaff_w22) {
          iVar1 = iVar5;
        }
        FUN_06dd33f0(lVar3,lVar4,(long)(iVar1 * 0x5c),0);
      }
    }
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_03b6ef70();
  *unaff_x19 = lVar3;
  iVar5 = (int)unaff_x19[1];
  if (unaff_w22 <= (int)unaff_x19[1]) {
    iVar5 = unaff_w22;
  }
  *(int *)(unaff_x19 + 1) = iVar5;
  *(int *)((long)unaff_x19 + 0xc) = unaff_w22;
  return;
}


