/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04a1124c
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


uint Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (ulong param_1,long param_2,uint param_3,int param_4,long param_5)

{
  char in_NG;
  char in_OV;
  int iVar1;
  long lVar2;
  int in_w9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (in_NG != in_OV) {
    in_w9 = in_w9 + 1;
  }
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0322bef4();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x48);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0322bef4();
  }
  uVar4 = param_3 + (in_w9 >> 1);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_04a10d1c();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_04a10d1c();
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  FUN_04a10d1c();
  if (unaff_x20 == 0) {
LAB_04a114ac:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (uVar4 < *(uint *)(unaff_x20 + 0x18)) {
    uVar3 = *(undefined8 *)(unaff_x20 + (long)(int)uVar4 * 8 + 0x20);
    uVar4 = param_4 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_04a10df4();
    if ((int)uVar4 <= (int)param_3) {
LAB_04a1143c:
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
      return param_3;
    }
    while (param_3 = param_3 + 1, param_3 < *(uint *)(unaff_x20 + 0x18)) {
      if (param_5 == 0) goto LAB_04a114ac;
      uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)param_3 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar1 = (**(code **)(param_5 + 0x18))
                        (*(undefined8 *)(param_5 + 0x40),uVar5,uVar3,*(undefined8 *)(param_5 + 0x28)
                        );
      if (-1 < iVar1) {
        do {
          uVar4 = uVar4 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_04a114a8;
          uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)uVar4 * 8 + 0x20);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          iVar1 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar3,uVar5,
                             *(undefined8 *)(param_5 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar4 <= (int)param_3) goto LAB_04a1143c;
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
      }
    }
  }
LAB_04a114a8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


