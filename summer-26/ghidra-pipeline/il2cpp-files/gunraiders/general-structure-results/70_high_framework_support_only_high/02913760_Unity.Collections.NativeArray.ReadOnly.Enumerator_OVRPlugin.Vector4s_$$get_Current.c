/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4s>$$get_Current
ENTRY_POINT: 02913760
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4s>__get_Current
               (long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x25;
  
  uVar4 = *(undefined8 *)(param_1 + 0x180);
  if (in_w9 == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_032e04b8(uVar4,0);
  if (unaff_x22 != 0) {
    lVar1 = FUN_031e5740();
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394(lVar5);
    }
    if (lVar1 == 0) {
      FUN_032f25c4(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar2 = thunk_FUN_01c495e4(lVar1,lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(lVar1,lVar5);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar6 = 0;
      plVar7 = (long *)(lVar2 + 0x20);
      do {
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        if (uVar3 <= uVar6) {
LAB_029138c4:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        if (*plVar7 == 0) {
          FUN_032f25c4(0x11,0);
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        }
        if (uVar3 <= uVar6) goto LAB_029138c4;
        plVar7 = plVar7 + 7;
        Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>__Reset();
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)*(int *)(lVar2 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar1 = FUN_0329f684(0);
    if (lVar1 != 0) {
      FUN_0282be2c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


