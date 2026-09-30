/*
FUNCTION_NAME: Unity.Services.Lobbies.Http.ApiTelemetryScope$$Dispose
ENTRY_POINT: 08070114
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_Services_Lobbies_Http_ApiTelemetryScope__Dispose
               (undefined1 param_1 [16],undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 unaff_d13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 uStack00000000000000a8;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  
  *(long *)(unaff_x21 + 0x10) = param_1._8_8_;
  *(long *)(unaff_x21 + 8) = param_1._0_8_;
  puVar5 = PTR_DAT_08efe348;
  uStack00000000000000a8 = param_2;
  if (10 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x20 + 0x168) = in_stack_00000218;
    *(undefined8 *)(unaff_x20 + 0x160) = in_stack_00000210;
    *(undefined8 *)(unaff_x20 + 0x178) = param_2;
    *(undefined8 *)(unaff_x20 + 0x170) = in_stack_00000220;
    thunk_FUN_03d233cc(unaff_x20 + 0x160,0);
    uVar6 = *(undefined8 *)puVar5;
    thunk_FUN_03d233cc(&stack0x00000210);
    uVar7 = _DAT_018b1330;
    uVar8 = DAT_018aeec8;
    *(undefined8 *)(unaff_x21 + 0x10) = _UNK_018b1338;
    *(undefined8 *)(unaff_x21 + 8) = uVar7;
    puVar5 = PTR_DAT_08efe368;
    if (0xb < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined8 *)(unaff_x20 + 0x188) = 0;
      *(undefined8 *)(unaff_x20 + 0x180) = uVar6;
      *(undefined8 *)(unaff_x20 + 0x198) = uVar8;
      *(undefined8 *)(unaff_x20 + 400) = 0;
      thunk_FUN_03d233cc(unaff_x20 + 0x180,0);
      uVar7 = *(undefined8 *)puVar5;
      thunk_FUN_03d233cc(&stack0x00000210);
      uVar8 = _DAT_018b15b0;
      uVar2 = DAT_018b02cc;
      *(undefined8 *)(unaff_x21 + 0x10) = _UNK_018b15b8;
      *(undefined8 *)(unaff_x21 + 8) = uVar8;
      fVar9 = (float)FUN_085d3e08(uVar2,0);
      uVar4 = DAT_018b0c60;
      fVar10 = (float)FUN_085d3e08(DAT_018b0c60,0);
      uVar1 = DAT_018b005c;
      fVar11 = (float)FUN_085d3e08(DAT_018b005c,0);
      fVar3 = DAT_018b045c;
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
      if (fVar9 <= fVar11) {
        fVar9 = fVar11;
      }
      fVar9 = fVar9 + DAT_018b045c;
      fVar11 = (float)FUN_085d3e08(uVar2,0);
      fVar12 = (float)FUN_085d3e08(uVar4,0);
      fVar13 = (float)FUN_085d3e08(uVar1,0);
      puVar5 = PTR_DAT_08efe370;
      fVar10 = DAT_018b0710;
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      if (fVar11 <= fVar13) {
        fVar11 = fVar13;
      }
      fVar11 = fVar11 + DAT_018b0710;
      if (0xc < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined8 *)(unaff_x20 + 0x1a8) = 0;
        *(undefined8 *)(unaff_x20 + 0x1a0) = uVar7;
        *(ulong *)(unaff_x20 + 0x1b8) = CONCAT44(fVar11,fVar9);
        *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
        thunk_FUN_03d233cc(unaff_x20 + 0x1a0,0);
        uVar7 = *(undefined8 *)puVar5;
        thunk_FUN_03d233cc(&stack0x00000210);
        uVar8 = _DAT_018b1190;
        uVar1 = DAT_018b0e74;
        *(undefined8 *)(unaff_x21 + 0x10) = _UNK_018b1198;
        *(undefined8 *)(unaff_x21 + 8) = uVar8;
        fVar9 = (float)FUN_085d3e08(uVar1,0);
        uVar2 = DAT_018b0e78;
        fVar11 = (float)FUN_085d3e08(DAT_018b0e78,0);
        uVar4 = DAT_018b0efc;
        fVar12 = (float)FUN_085d3e08(DAT_018b0efc,0);
        if (fVar9 <= fVar11) {
          fVar9 = fVar11;
        }
        if (fVar9 <= fVar12) {
          fVar9 = fVar12;
        }
        fVar11 = (float)FUN_085d3e08(uVar1,0);
        fVar12 = (float)FUN_085d3e08(uVar2,0);
        fVar13 = (float)FUN_085d3e08(uVar4,0);
        puVar5 = PTR_DAT_08ef1ce0;
        if (fVar11 <= fVar12) {
          fVar11 = fVar12;
        }
        if (fVar11 <= fVar13) {
          fVar11 = fVar13;
        }
        if (0xd < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
          *(undefined8 *)(unaff_x20 + 0x1c0) = uVar7;
          *(ulong *)(unaff_x20 + 0x1d8) = CONCAT44(fVar11 + fVar10,fVar9 + fVar3);
          *(undefined8 *)(unaff_x20 + 0x1d0) = 0;
          thunk_FUN_03d233cc(unaff_x20 + 0x1c0,0);
          uVar8 = *(undefined8 *)puVar5;
          thunk_FUN_03d233cc(&stack0x00000210);
          *(undefined8 *)(unaff_x21 + 0x10) = in_stack_00000008;
          *(undefined8 *)(unaff_x21 + 8) = in_stack_00000000;
          if (0xe < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(unaff_x20 + 0x1e8) = 0;
            *(undefined8 *)(unaff_x20 + 0x1e0) = uVar8;
            *(undefined8 *)(unaff_x20 + 0x1f8) = unaff_d13;
            *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
            thunk_FUN_03d233cc(unaff_x20 + 0x1e0,0);
            *(long *)(unaff_x19 + 0x10) = unaff_x20;
            thunk_FUN_03d233cc();
            uVar7 = _UNK_018b28e8;
            uVar8 = _DAT_018b28e0;
            *(undefined8 *)(unaff_x19 + 0x34) = in_stack_00000008;
            *(undefined8 *)(unaff_x19 + 0x2c) = in_stack_00000000;
            *(undefined8 *)(unaff_x19 + 0x24) = uVar7;
            *(undefined8 *)(unaff_x19 + 0x1c) = uVar8;
            *(undefined4 *)(unaff_x19 + 0x40) = 0x3f666666;
            FUN_07145224();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


