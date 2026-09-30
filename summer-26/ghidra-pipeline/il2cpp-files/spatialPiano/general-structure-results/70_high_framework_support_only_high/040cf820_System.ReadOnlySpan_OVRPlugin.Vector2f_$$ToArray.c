/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector2f>$$ToArray
ENTRY_POINT: 040cf820
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<OVRPlugin_Vector2f>__ToArray
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  int unaff_w24;
  long *plVar7;
  undefined8 in_stack_00000008;
  
  do {
    lVar2 = thunk_FUN_02f44ec4(param_1,param_3);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_02f45174(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar3 = (long)(int)unaff_w19;
    unaff_w24 = unaff_w24 + 1;
    unaff_w19 = unaff_w19 + 1;
    unaff_x22[lVar3 + 4] = lVar2;
    if (unaff_w24 == unaff_w23) {
      return;
    }
    plVar7 = *(long **)(unaff_x21 + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c(lVar2);
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_040cf7fc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0(plVar7,lVar2,0);
LAB_040cf7fc:
    in_stack_00000008._4_1_ = (*(code *)*puVar1)(plVar7,unaff_w24,puVar1[1]);
    param_1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    param_3 = (long)&stack0x00000008 + 4;
  } while( true );
}


