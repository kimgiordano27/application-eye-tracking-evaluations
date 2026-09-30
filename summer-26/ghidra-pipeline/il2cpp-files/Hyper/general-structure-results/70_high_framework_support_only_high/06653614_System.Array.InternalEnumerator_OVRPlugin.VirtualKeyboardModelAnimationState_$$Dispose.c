/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 06653614
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (ushort *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  int *unaff_x21;
  int unaff_w23;
  
  do {
    if ((*param_1 & 1) == 0) {
      FUN_04980b34();
    }
    FUN_0665262c();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0xe0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34(lVar2);
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_066536b8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_066536b8:
    uVar1 = (*(code *)*puVar3)();
    if (((uVar1 & 1) != 0) || (unaff_w23 = unaff_w23 + 1, *unaff_x21 <= unaff_w23)) {
      return uVar1 & 1;
    }
    param_1 = (ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  } while( true );
}


