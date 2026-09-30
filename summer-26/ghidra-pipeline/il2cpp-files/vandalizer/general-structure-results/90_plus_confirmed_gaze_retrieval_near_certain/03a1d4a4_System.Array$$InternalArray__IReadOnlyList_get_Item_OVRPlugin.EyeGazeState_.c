/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03a1d4a4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  
  if (param_1 == 0) {
    FUN_031f20f4(PTR_DAT_075d6450);
    if (*(long *)(unaff_x21 + 0x38) == 0) {
      FUN_0322bf50();
    }
  }
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = unaff_w22 & ((int)unaff_w22 >> 0x1f ^ 0xffffffffU);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  FUN_03fd7d04(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x68));
  puVar3 = PTR_DAT_075d6450;
  if ((int)uVar1 < 1) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_075d6450 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar4 = FUN_03b6a804();
    lVar5 = *unaff_x19;
    if (lVar5 != 0) {
      uVar6 = *(uint *)((long)unaff_x19 + 0xc);
      if (0 < (int)uVar6) {
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
          uVar6 = *(uint *)((long)unaff_x19 + 0xc);
          lVar5 = *unaff_x19;
        }
        uVar2 = uVar1;
        if ((int)uVar6 <= (int)uVar1) {
          uVar2 = uVar6;
        }
        FUN_06dd33f0(lVar4,lVar5,(long)(int)(uVar2 << 2),0);
      }
    }
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_03b6eed8();
  *unaff_x19 = lVar4;
  uVar6 = *(uint *)(unaff_x19 + 1);
  if ((int)uVar1 <= (int)*(uint *)(unaff_x19 + 1)) {
    uVar6 = uVar1;
  }
  *(uint *)(unaff_x19 + 1) = uVar6;
  *(uint *)((long)unaff_x19 + 0xc) = uVar1;
  return;
}


