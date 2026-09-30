/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 03cb798c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Dispose
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],undefined1 param_5 [16],undefined8 param_6,
               undefined1 *param_7,undefined8 param_8)

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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  
  uStack0000000000000038 = param_5._8_8_;
  uStack0000000000000030 = param_5._0_8_;
  uStack0000000000000028 = param_4._8_8_;
  uStack0000000000000020 = param_4._0_8_;
  uStack0000000000000098 = param_3._8_8_;
  uStack0000000000000090 = param_3._0_8_;
  uStack0000000000000088 = param_2._8_8_;
  uStack0000000000000080 = param_2._0_8_;
  do {
    uStack00000000000000a0 = uStack0000000000000020;
    uStack00000000000000a8 = uStack0000000000000028;
    uStack00000000000000b0 = uStack0000000000000030;
    uStack00000000000000b8 = uStack0000000000000038;
    uVar3 = (*param_1)(param_6,param_7,param_8);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) {
LAB_03cb7a74:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_03cb7a78;
      if (unaff_x22 == 0) goto LAB_03cb7a74;
      puVar1 = (undefined8 *)(lVar4 + unaff_x24);
      uVar7 = puVar1[1];
      uVar5 = *puVar1;
      uVar11 = puVar1[3];
      uVar9 = puVar1[2];
      uVar8 = puVar1[5];
      uVar6 = puVar1[4];
      uVar12 = puVar1[7];
      uVar10 = puVar1[6];
      lVar4 = *(long *)(unaff_x22 + 0x10);
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_03cb7a74;
      uVar2 = *(uint *)(unaff_x22 + 0x18);
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar2 * 0x40;
        *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar4 + 0x28) = uVar7;
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        *(undefined8 *)(lVar4 + 0x38) = uVar11;
        *(undefined8 *)(lVar4 + 0x30) = uVar9;
        *(undefined8 *)(lVar4 + 0x48) = uVar8;
        *(undefined8 *)(lVar4 + 0x40) = uVar6;
        *(undefined8 *)(lVar4 + 0x58) = uVar12;
        *(undefined8 *)(lVar4 + 0x50) = uVar10;
      }
      else {
        uStack0000000000000080 = uVar5;
        uStack0000000000000088 = uVar7;
        uStack0000000000000090 = uVar9;
        uStack0000000000000098 = uVar11;
        uStack00000000000000a0 = uVar6;
        uStack00000000000000a8 = uVar8;
        uStack00000000000000b0 = uVar10;
        uStack00000000000000b8 = uVar12;
        FUN_03cb70cc();
      }
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x40;
    if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x23) {
      return;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    if (lVar4 == 0) goto LAB_03cb7a74;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_03cb7a78:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x20 == 0) goto LAB_03cb7a74;
    puVar1 = (undefined8 *)(lVar4 + unaff_x24);
    param_6 = *(undefined8 *)(unaff_x20 + 0x40);
    param_8 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack0000000000000088 = puVar1[1];
    uStack0000000000000080 = *puVar1;
    uStack0000000000000098 = puVar1[3];
    uStack0000000000000090 = puVar1[2];
    param_7 = (undefined1 *)&stack0x00000080;
    uStack0000000000000028 = puVar1[5];
    uStack0000000000000020 = puVar1[4];
    uStack0000000000000038 = puVar1[7];
    uStack0000000000000030 = puVar1[6];
    param_1 = *(code **)(unaff_x20 + 0x18);
  } while( true );
}


