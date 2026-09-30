/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopyTo
ENTRY_POINT: 04a0ff90
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopyTo(long param_1)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 uVar3;
  int unaff_w25;
  uint uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 04a0ff90 to 04b0ff9b has its CatchHandler @ 04a0fc2c */
  uVar3 = *(undefined8 *)(unaff_x20 + (long)unaff_w25 * 8 + 0x20);
  uVar4 = unaff_w23 - 1;
                    /* try { // try from 04a0ff9c to 04b0ffa3 has its CatchHandler @ 04a0ffa4 */
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04a0ff68 with catch @ 04a0ffa4
                       catch(type#2 @ 00000000) { ... } // from try @ 04a0ff9c with catch @ 04a0ffa4
                        */
    FUN_0322bef4();
  }
  FUN_04a0fa64();
  if ((int)uVar4 <= (int)unaff_w19) {
LAB_04a100ac:
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
    FUN_04a0fa64();
    return unaff_w19;
  }
  do {
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_04a10118:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)unaff_w19 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar5,uVar3,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    do {
      uVar4 = uVar4 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_04a10118;
      uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)uVar4 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar3,uVar5,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    if ((int)uVar4 <= (int)unaff_w19) goto LAB_04a100ac;
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
    FUN_04a0fa64();
  } while( true );
}


