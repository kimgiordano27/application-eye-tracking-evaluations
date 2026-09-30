/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Equals
ENTRY_POINT: 06e284e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Equals
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  uVar8 = param_2._8_8_;
  uVar7 = param_2._0_8_;
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
code_r0x06e284e4:
                    /* catch() { ... } // from try @ 06e28638 with catch @ 06e284ec
                       catch() { ... } // from try @ 06e28674 with catch @ 06e284ec
                       catch() { ... } // from try @ 06e286b0 with catch @ 06e284ec
                       catch() { ... } // from try @ 06e286dc with catch @ 06e284ec
                       catch() { ... } // from try @ 06e28750 with catch @ 06e284ec */
  uStack0000000000000088 = in_stack_00000048;
  uStack0000000000000080 = in_stack_00000040;
  uStack0000000000000098 = in_stack_00000058;
  uStack0000000000000090 = in_stack_00000050;
  uStack00000000000000a0 = uVar5;
  uStack00000000000000a8 = uVar6;
  uStack00000000000000b0 = uVar7;
  uStack00000000000000b8 = uVar8;
  FUN_06e27b04();
LAB_06e28500:
  do {
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x40;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_06e28530;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_06e28534;
    if (unaff_x20 == 0) goto LAB_06e28530;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    uStack0000000000000088 = puVar1[1];
    uStack0000000000000080 = *puVar1;
    uStack0000000000000098 = puVar1[3];
    uStack0000000000000090 = puVar1[2];
    uStack00000000000000a8 = puVar1[5];
    uStack00000000000000a0 = puVar1[4];
    uStack00000000000000b8 = puVar1[7];
    uStack00000000000000b0 = puVar1[6];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                       *(undefined8 *)(unaff_x20 + 0x28));
  } while ((uVar3 & 1) == 0);
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_06e28534:
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (unaff_x22 != 0) {
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000058 = puVar1[3];
      in_stack_00000050 = puVar1[2];
      uVar6 = puVar1[5];
      uVar5 = puVar1[4];
      uVar8 = puVar1[7];
      uVar7 = puVar1[6];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar2 * 0x40;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar4 + 0x28) = in_stack_00000048;
          *(undefined8 *)(lVar4 + 0x20) = in_stack_00000040;
          *(undefined8 *)(lVar4 + 0x38) = in_stack_00000058;
          *(undefined8 *)(lVar4 + 0x30) = in_stack_00000050;
          *(undefined8 *)(lVar4 + 0x48) = uVar6;
          *(undefined8 *)(lVar4 + 0x40) = uVar5;
          *(undefined8 *)(lVar4 + 0x58) = uVar8;
          *(undefined8 *)(lVar4 + 0x50) = uVar7;
          thunk_FUN_049ee3d8(lVar4 + 0x20,0);
          goto LAB_06e28500;
        }
        goto code_r0x06e284e4;
      }
    }
  }
LAB_06e28530:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


