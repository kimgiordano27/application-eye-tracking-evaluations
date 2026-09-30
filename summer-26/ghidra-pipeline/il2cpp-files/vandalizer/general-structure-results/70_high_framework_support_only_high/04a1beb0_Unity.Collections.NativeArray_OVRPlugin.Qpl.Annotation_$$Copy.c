/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Copy
ENTRY_POINT: 04a1beb0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Copy(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint in_w8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w24;
  uint unaff_w25;
  
  while (unaff_w19 = unaff_w19 + 1, unaff_w19 < in_w8) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar1 = *(undefined4 *)(unaff_x20 + (long)(int)unaff_w19 * 4 + 0x20);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    iVar2 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),uVar1,unaff_w24,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar2) {
      do {
        unaff_w25 = unaff_w25 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w25) goto LAB_04a1c000;
        uVar1 = *(undefined4 *)(unaff_x20 + (long)(int)unaff_w25 * 4 + 0x20);
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        iVar2 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),unaff_w24,uVar1,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar2 < 0);
      if ((int)unaff_w25 <= (int)unaff_w19) {
        lVar3 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0322bef4();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_04a1b958();
        return unaff_w19;
      }
      lVar3 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a1b958();
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
  }
LAB_04a1c000:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


