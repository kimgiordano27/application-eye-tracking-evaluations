/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$CopyTo
ENTRY_POINT: 03cb7bd4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo(void)

{
  undefined1 in_NG;
  ulong uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  ulong unaff_x23;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  do {
    if ((bool)in_NG) {
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      unaff_x19[7] = 0;
      unaff_x19[6] = 0;
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_03cb7c7c;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w22) {
LAB_03cb7c80:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x21 == 0) {
LAB_03cb7c7c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = unaff_x23 & 0xffffffff;
    lVar2 = lVar2 + uVar3 * 0x40;
    in_stack_00000048 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000040 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000058 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000050 = *(undefined8 *)(lVar2 + 0x30);
    in_stack_00000068 = *(undefined8 *)(lVar2 + 0x48);
    in_stack_00000060 = *(undefined8 *)(lVar2 + 0x40);
    in_stack_00000078 = *(undefined8 *)(lVar2 + 0x58);
    in_stack_00000070 = *(undefined8 *)(lVar2 + 0x50);
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x21 + 0x28));
    unaff_x23 = unaff_x23 - 1;
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + 0x10);
      if (lVar2 != 0) {
        if (unaff_w22 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + uVar3 * 0x40;
          uVar4 = *(undefined8 *)(lVar2 + 0x20);
          uVar6 = *(undefined8 *)(lVar2 + 0x38);
          uVar5 = *(undefined8 *)(lVar2 + 0x30);
          unaff_x19[1] = *(undefined8 *)(lVar2 + 0x28);
          *unaff_x19 = uVar4;
          unaff_x19[3] = uVar6;
          unaff_x19[2] = uVar5;
          uVar4 = *(undefined8 *)(lVar2 + 0x40);
          uVar6 = *(undefined8 *)(lVar2 + 0x58);
          uVar5 = *(undefined8 *)(lVar2 + 0x50);
          unaff_x19[5] = *(undefined8 *)(lVar2 + 0x48);
          unaff_x19[4] = uVar4;
          unaff_x19[7] = uVar6;
          unaff_x19[6] = uVar5;
          return;
        }
        goto LAB_03cb7c80;
      }
      goto LAB_03cb7c7c;
    }
    unaff_w22 = unaff_w22 - 1;
    in_NG = (int)unaff_w22 < 0;
  } while( true );
}


