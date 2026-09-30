/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$op_Equality
ENTRY_POINT: 04a113e4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__op_Equality(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w25;
  undefined8 uVar3;
  
  do {
    if (in_NG == in_OV) {
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a10df4();
      return unaff_w19;
    }
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_04a10df4();
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_04a114a8;
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar3 = *(undefined8 *)(unaff_x20 + (long)(int)unaff_w19 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar3);
    } while (iVar1 < 0);
    do {
      unaff_w25 = unaff_w25 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w25) {
LAB_04a114a8:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
    } while (iVar1 < 0);
    in_OV = SBORROW4(unaff_w19,unaff_w25);
    in_NG = (int)(unaff_w19 - unaff_w25) < 0;
  } while( true );
}


