/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 050a6644
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w26;
  
  while( true ) {
    if (-1 < param_1) {
      if ((int)unaff_w26 <= (int)unaff_w19) {
        lVar4 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03ac4090();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03ac4090();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        FUN_050a5f98();
        return unaff_w19;
      }
      lVar4 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03ac4090();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      FUN_050a5f98();
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_050a672c;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar4 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
        uVar1 = *(undefined8 *)(lVar4 + 0x20);
        uVar2 = *(undefined8 *)(lVar4 + 0x28);
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_03ac4090();
        }
        iVar3 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar2);
      } while (iVar3 < 0);
    }
    unaff_w26 = unaff_w26 - 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w26) break;
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    param_1 = (**(code **)(unaff_x22 + 0x18))(*(undefined8 *)(unaff_x22 + 0x40));
  }
LAB_050a672c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


