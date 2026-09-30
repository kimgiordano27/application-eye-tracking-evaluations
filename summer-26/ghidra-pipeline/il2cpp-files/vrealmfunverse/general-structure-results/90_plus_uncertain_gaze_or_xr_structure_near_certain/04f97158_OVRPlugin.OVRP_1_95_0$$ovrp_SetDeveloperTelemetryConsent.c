/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 04f97158
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 178
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  long unaff_x21;
  undefined8 uVar15;
  long *unaff_x23;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  uStack0000000000000108 = in_stack_00000128;
  uStack0000000000000100 = in_stack_00000120;
  *(undefined8 *)(unaff_x21 + 0x94) = *(undefined8 *)(unaff_x21 + 0xb4);
  *(undefined8 *)(unaff_x21 + 0x8c) = *(undefined8 *)(unaff_x21 + 0xac);
                    /* try { // try from 04f9716c to 05097197 has its CatchHandler @ 04f972d0 */
  if (0x13 < in_w8) {
    uVar12 = *(undefined8 *)(unaff_x21 + 0x94);
    uVar14 = *(undefined8 *)(unaff_x21 + 0x8c);
    *(undefined4 *)(unaff_x20 + 0x2cc) = 5;
    *(undefined8 *)(unaff_x20 + 0x2d8) = in_stack_00000128;
    *(undefined8 *)(unaff_x20 + 0x2d0) = in_stack_00000120;
    *(undefined8 *)(unaff_x20 + 0x2e4) = uVar12;
    *(undefined8 *)(unaff_x20 + 0x2dc) = uVar14;
    uVar4 = DAT_01032340;
    uVar3 = DAT_01031f58;
    uVar2 = DAT_01031c74;
    *(undefined4 *)(unaff_x20 + 0x2ec) = 0;
    in_stack_000000e0 = 0;
    in_stack_000000e8 = 0;
    in_stack_000000f8 = 0;
    in_stack_000000f0 = 0;
                    /* try { // try from 04f971cc to 050971f7 has its CatchHandler @ 04f972d4 */
    FUN_05c99d80(uVar3,uVar2,uVar4,0,0,0,0xbf800000,&stack0x000000e0,0);
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    in_stack_000000c8 = in_stack_000000e8;
    in_stack_000000c0 = in_stack_000000e0;
    *(undefined8 *)(unaff_x21 + 0x54) = *(undefined8 *)(unaff_x21 + 0x74);
    *(undefined8 *)(unaff_x21 + 0x4c) = *(undefined8 *)(unaff_x21 + 0x6c);
    if (0x14 < uVar1) {
      uVar12 = *(undefined8 *)(unaff_x21 + 0x54);
      uVar14 = *(undefined8 *)(unaff_x21 + 0x4c);
      *(undefined4 *)(unaff_x20 + 0x2f0) = 8;
      *(undefined8 *)(unaff_x20 + 0x308) = uVar12;
      *(undefined8 *)(unaff_x20 + 0x300) = uVar14;
      *(undefined8 *)(unaff_x20 + 0x2fc) = in_stack_000000e8;
      *(undefined8 *)(unaff_x20 + 0x2f4) = in_stack_000000e0;
      uVar4 = DAT_010327c8;
      uVar3 = DAT_01032414;
      uVar2 = DAT_01031e28;
      *(undefined4 *)(unaff_x20 + 0x310) = 0;
      in_stack_000000a0 = 0;
      in_stack_000000a8 = 0;
      in_stack_000000b8 = 0;
      in_stack_000000b0 = 0;
      FUN_05c99d80(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x000000a0,0);
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      in_stack_00000088 = in_stack_000000a8;
      in_stack_00000080 = in_stack_000000a0;
      *(undefined8 *)(unaff_x21 + 0x14) = *(undefined8 *)(unaff_x21 + 0x34);
      *(undefined8 *)(unaff_x21 + 0xc) = *(undefined8 *)(unaff_x21 + 0x2c);
      if (0x15 < uVar1) {
        uVar12 = *(undefined8 *)(unaff_x21 + 0x14);
        uVar14 = *(undefined8 *)(unaff_x21 + 0xc);
        *(undefined4 *)(unaff_x20 + 0x314) = 0xb;
        *(undefined8 *)(unaff_x20 + 800) = in_stack_000000a8;
        *(undefined8 *)(unaff_x20 + 0x318) = in_stack_000000a0;
        uVar3 = DAT_01031c7c;
        uVar2 = DAT_01031c78;
        *(undefined8 *)(unaff_x20 + 0x32c) = uVar12;
        *(undefined8 *)(unaff_x20 + 0x324) = uVar14;
        uVar4 = DAT_0103203c;
        *(undefined4 *)(unaff_x20 + 0x334) = 0;
        in_stack_00000060 = 0;
        uStack0000000000000068 = 0;
        uStack000000000000006c = 0;
        in_stack_00000078 = 0;
        uStack0000000000000070 = 0;
        uStack0000000000000074 = 0;
        FUN_05c99d80(uVar2,uVar4,uVar3,0,0,0,0xbf800000,&stack0x00000060,0);
        uStack0000000000000054 = CONCAT44(in_stack_00000078,uStack0000000000000074);
        uStack0000000000000048 = uStack0000000000000068;
        in_stack_00000040 = in_stack_00000060;
        uStack000000000000004c = uStack000000000000006c;
        uStack0000000000000050 = uStack0000000000000070;
        if (0x16 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x338) = 0xe;
          *(ulong *)(unaff_x20 + 0x344) = CONCAT44(uStack000000000000006c,uStack0000000000000068);
          *(undefined8 *)(unaff_x20 + 0x33c) = in_stack_00000060;
          *(undefined8 *)(unaff_x20 + 0x350) = uStack0000000000000054;
          *(ulong *)(unaff_x20 + 0x348) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
          uVar4 = DAT_0103298c;
          uVar3 = DAT_01032764;
          uVar2 = DAT_01032760;
          *(undefined4 *)(unaff_x20 + 0x358) = 0;
          in_stack_00000020 = 0;
          uStack0000000000000028 = 0;
          uStack000000000000002c = 0;
          in_stack_00000038 = 0;
          uStack0000000000000030 = 0;
          uStack0000000000000034 = 0;
          FUN_05c99d80(uVar2,uVar3,uVar4,0,0,0,0xbf800000,&stack0x00000020,0);
          if (0x17 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined4 *)(unaff_x20 + 0x35c) = 0x12;
            *(ulong *)(unaff_x20 + 0x368) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
            *(undefined8 *)(unaff_x20 + 0x360) = in_stack_00000020;
            *(ulong *)(unaff_x20 + 0x374) = CONCAT44(in_stack_00000038,uStack0000000000000034);
            *(ulong *)(unaff_x20 + 0x36c) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
            *(undefined4 *)(unaff_x20 + 0x37c) = 0;
            if (unaff_x19 != 0) {
              *(long *)(unaff_x19 + 0x10) = unaff_x20;
              thunk_FUN_02bb0e9c();
              **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
              thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x23 + 0xb8));
              lVar10 = thunk_FUN_02b79644(*unaff_x23);
              FUN_04f965b8();
              puVar9 = System_Func<AndroidAxis,_string>_TypeInfo;
              puVar8 = System_Func<float[],_Vector4>_TypeInfo;
              puVar7 = System_Func<float[],_Vector3>_TypeInfo;
              puVar6 = System_Func<float[],_Vector2>_TypeInfo;
              puVar5 = System_Func<float[],_Quaternion>_TypeInfo;
              if (**(long **)(*unaff_x23 + 0xb8) != 0) {
                lVar11 = *(long *)System_Func<AndroidAxis,_string>_TypeInfo;
                uVar14 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar11 = *(long *)puVar9;
                }
                uVar15 = **(undefined8 **)(lVar11 + 0xb8);
                uVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                FUN_049bccb8(uVar12,uVar15,*(undefined8 *)puVar8,0);
                uVar14 = FUN_031bc914(uVar14,uVar12,*(undefined8 *)puVar5);
                uVar14 = FUN_031c7164(uVar14,*(undefined8 *)puVar6);
                if (lVar10 != 0) {
                  *(undefined8 *)(lVar10 + 0x10) = uVar14;
                  thunk_FUN_02bb0e9c();
                  plVar13 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
                  *plVar13 = lVar10;
                  thunk_FUN_02bb0e9c(plVar13,lVar10);
                  return;
                }
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


