/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_base__set
ENTRY_POINT: 0854c8c0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_base__set
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000234;
  undefined4 in_stack_00000238;
  undefined4 in_stack_0000023c;
  
  unaff_x23[0x13] = param_1._8_8_;
  unaff_x23[0x12] = param_1._0_8_;
  unaff_x23[0x15] = param_2._8_8_;
  unaff_x23[0x14] = param_2._0_8_;
  FUN_0844a000();
  lVar5 = *(long *)(unaff_x20 + 0x1a0);
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0xa0);
    uVar3 = *(undefined8 *)(lVar5 + 0xa8);
    uVar8 = *(undefined8 *)(lVar5 + 0xb0);
    plVar9 = (long *)(unaff_x19 + 0xd8);
    lVar7 = *plVar9;
    unaff_x23[0x39] = *(undefined8 *)(lVar5 + 0x98);
    unaff_x23[0x38] = uVar2;
    unaff_x23[0x3b] = uVar3;
    unaff_x23[0x3a] = uVar6;
    if (lVar7 == 0) {
      uVar2 = *(undefined8 *)(lVar5 + 0x90);
      auVar12 = *(undefined1 (*) [16])(lVar5 + 0xa0);
      uVar6 = *(undefined8 *)(lVar5 + 0xb0);
      lVar7 = *(long *)PTR_DAT_09326d38;
      unaff_x23[0x2b] = *(undefined8 *)(lVar5 + 0x98);
      unaff_x23[0x2a] = uVar2;
      unaff_x23[0x2d] = auVar12._8_8_;
      unaff_x23[0x2c] = auVar12._0_8_;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      unaff_x23[0xd] = unaff_x23[0x2b];
      unaff_x23[0xc] = unaff_x23[0x2a];
      unaff_x23[0xf] = SUB168(*(undefined1 (*) [16])(unaff_x23 + 0x2c),8);
      unaff_x23[0xe] = SUB168(*(undefined1 (*) [16])(unaff_x23 + 0x2c),0);
      in_stack_00000130 = uVar6;
      lVar5 = FUN_08449f30(&stack0x00000110,0);
      *plVar9 = lVar5;
      thunk_FUN_040ec700(plVar9,lVar5);
    }
    else {
      uVar2 = *(undefined8 *)(lVar7 + 0x28);
      uVar6 = *(undefined8 *)(lVar7 + 0x38);
      uVar3 = *(undefined8 *)(lVar7 + 0x40);
      in_stack_00000100 = *(undefined8 *)(lVar7 + 0x48);
      unaff_x23[7] = *(undefined8 *)(lVar7 + 0x30);
      unaff_x23[6] = uVar2;
      unaff_x23[9] = uVar3;
      unaff_x23[8] = uVar6;
      uVar2 = *(undefined8 *)(lVar5 + 0x90);
      auVar12 = *(undefined1 (*) [16])(lVar5 + 0xa0);
      in_stack_000000d0 = *(undefined8 *)(lVar5 + 0xb0);
      unaff_x23[1] = *(undefined8 *)(lVar5 + 0x98);
      *unaff_x23 = uVar2;
      unaff_x23[3] = auVar12._8_8_;
      unaff_x23[2] = auVar12._0_8_;
      uVar4 = FUN_089ea6f4(&stack0x000000e0,&stack0x000000b0,0);
      if ((uVar4 & 1) != 0) {
        in_stack_00000088 = unaff_x23[0x39];
        in_stack_00000080 = unaff_x23[0x38];
        in_stack_00000098 = SUB168(*(undefined1 (*) [16])(unaff_x23 + 0x3a),8);
        in_stack_00000090 = SUB168(*(undefined1 (*) [16])(unaff_x23 + 0x3a),0);
        in_stack_000000a0 = uVar8;
        FUN_0844a000(plVar9,&stack0x00000080,0);
      }
    }
    lVar5 = *(long *)(unaff_x20 + 0x1a0);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(lVar5 + 0xc0);
      uVar2 = *(undefined8 *)(lVar5 + 0xb8);
      uVar3 = *(undefined8 *)(lVar5 + 200);
      uVar8 = *(undefined8 *)(lVar5 + 0xd0);
      uVar11 = *(undefined8 *)(lVar5 + 0xe0);
      uVar10 = *(undefined8 *)(lVar5 + 0xd8);
      unaff_x23[0x31] = uVar6;
      unaff_x23[0x30] = uVar2;
      unaff_x23[0x33] = uVar8;
      unaff_x23[0x32] = uVar3;
      unaff_x23[0x35] = uVar11;
      unaff_x23[0x34] = uVar10;
      auVar12 = *(undefined1 (*) [16])(unaff_x23 + 0x30);
      unaff_x23[0x31] = uVar6;
      unaff_x23[0x30] = uVar2;
      unaff_x23[0x31] = uVar6;
      unaff_x23[0x30] = uVar2;
      unaff_x23[0x31] = uVar6;
      unaff_x23[0x30] = uVar2;
      unaff_x23[0x31] = uVar6;
      unaff_x23[0x30] = uVar2;
      FUN_089af740(&stack0x00000230,0);
      lVar5 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar5 != 0) {
        uVar2 = *(undefined8 *)(lVar5 + 0xb8);
        uVar6 = *(undefined8 *)(lVar5 + 200);
        uVar3 = *(undefined8 *)(lVar5 + 0xd0);
        uVar10 = *(undefined8 *)(lVar5 + 0xe0);
        uVar8 = *(undefined8 *)(lVar5 + 0xd8);
        unaff_x23[0x31] = *(undefined8 *)(lVar5 + 0xc0);
        unaff_x23[0x30] = uVar2;
        unaff_x23[0x33] = uVar3;
        unaff_x23[0x32] = uVar6;
        unaff_x23[0x35] = uVar10;
        unaff_x23[0x34] = uVar8;
        if (unaff_x21 != 0) {
          auVar1._4_4_ = in_stack_00000234;
          auVar1._0_4_ = auVar12._0_4_;
          auVar1._8_4_ = in_stack_00000238;
          auVar1._12_4_ = in_stack_0000023c;
          NEON_rev64(auVar1,4);
          auVar12 = FUN_084701c4();
          *(undefined1 (*) [16])(unaff_x19 + 200) = auVar12;
          auVar12 = FUN_084701c4();
          *(undefined1 (*) [16])(unaff_x19 + 0xe0) = auVar12;
          if (*(long *)(unaff_x20 + 0x1a0) != 0) {
            *(undefined1 *)(unaff_x19 + 0xf0) = *(undefined1 *)(*(long *)(unaff_x20 + 0x1a0) + 0x22)
            ;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


