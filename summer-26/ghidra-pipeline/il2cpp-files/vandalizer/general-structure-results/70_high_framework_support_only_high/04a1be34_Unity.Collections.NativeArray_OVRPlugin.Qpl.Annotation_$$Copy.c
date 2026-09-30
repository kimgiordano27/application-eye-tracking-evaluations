/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 04a1be34
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w25;
  uint uVar5;
  
  FUN_04a1b88c();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_04a1b88c();
  if (unaff_x20 == 0) {
LAB_04a1c004:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (unaff_w25 < *(uint *)(unaff_x20 + 0x18)) {
    uVar1 = *(undefined4 *)(unaff_x20 + (long)(int)unaff_w25 * 4 + 0x20);
    uVar5 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_04a1b958();
    if ((int)uVar5 <= (int)unaff_w19) {
LAB_04a1bf94:
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0322bef4();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a1b958();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      if (unaff_x22 == 0) goto LAB_04a1c004;
      uVar2 = *(undefined4 *)(unaff_x20 + (long)(int)unaff_w19 * 4 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar3 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar2,uVar1,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar3) {
        do {
          uVar5 = uVar5 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar5) goto LAB_04a1c000;
          uVar2 = *(undefined4 *)(unaff_x20 + (long)(int)uVar5 * 4 + 0x20);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          iVar3 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar2,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar3 < 0);
        if ((int)uVar5 <= (int)unaff_w19) goto LAB_04a1bf94;
        lVar4 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0322bef4();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0322bef4();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_04a1b958();
      }
    }
  }
LAB_04a1c000:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


