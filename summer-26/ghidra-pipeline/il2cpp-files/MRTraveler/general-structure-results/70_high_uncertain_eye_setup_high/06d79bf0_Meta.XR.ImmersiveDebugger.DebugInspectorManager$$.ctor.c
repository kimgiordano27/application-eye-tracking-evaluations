/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$.ctor
ENTRY_POINT: 06d79bf0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager___ctor
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
               undefined8 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  long *plVar13;
  long unaff_x23;
  long *plVar14;
  long unaff_x24;
  long *unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  long unaff_x28;
  undefined8 unaff_x29;
  undefined1 auVar15 [16];
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  while( true ) {
    uVar6 = FUN_06d7a1a8(auVar15._0_8_,auVar15._8_8_,param_3,param_4,param_5,param_6);
    lVar11 = *unaff_x25;
    if (lVar11 == 0) break;
    bVar4 = *(uint *)(lVar11 + 0x18) <= unaff_x26;
    if ((uVar6 & 1) == 0) {
      if (bVar4) goto LAB_06d79fdc;
      *(undefined4 *)(lVar11 + unaff_x26 * 4 + 0x20) = 0xffffffff;
    }
    else {
      if (bVar4) {
LAB_06d79fdc:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(int *)(lVar11 + unaff_x26 * 4 + 0x20) = unaff_w21;
      if (unaff_x24 == 0) break;
      uVar10 = *(undefined8 *)(unaff_x28 + 0x18);
      lVar11 = *(long *)(unaff_x24 + 0x10);
      *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
      if (lVar11 == 0) break;
      uVar5 = *(uint *)(unaff_x24 + 0x18);
      if (uVar5 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x24 + 0x18) = uVar5 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar5 * 8 + 0x20) = uVar10;
        thunk_FUN_03d233cc();
      }
      else {
        FUN_05212cf4();
      }
      uVar3 = in_stack_00000068._4_4_;
      uVar10 = FUN_06d755c4(unaff_x29,in_stack_00000068._4_4_);
      if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*(long *)PTR_DAT_08e68f00);
      }
      uVar6 = FUN_085dfaac(uVar10,0,0);
      if ((uVar6 & 1) != 0) {
        in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar3);
        uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000018);
        in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(unaff_x28 + 0x10));
        uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,&stack0x00000028);
        uVar7 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8f4d0,uVar7,uVar8,0);
        if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
        }
        FUN_085a437c(uVar7,0);
      }
      if (unaff_x23 == 0) break;
      lVar11 = *(long *)(unaff_x23 + 0x10);
      unaff_w22 = 0x37;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar11 == 0) break;
      uVar5 = *(uint *)(unaff_x23 + 0x18);
      if (uVar5 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar5 + 1;
        puVar9 = (undefined8 *)(lVar11 + (long)(int)uVar5 * 8 + 0x20);
        *puVar9 = uVar10;
        thunk_FUN_03d233cc(puVar9,uVar10);
      }
      else {
        FUN_05212cf4();
      }
      unaff_w21 = unaff_w21 + 1;
      unaff_x20 = (long *)PTR_DAT_08e71508;
    }
    do {
      unaff_x26 = unaff_x26 + 1;
      if (unaff_x26 == unaff_x27) {
        uVar6 = FUN_085f07cc(in_stack_00000008,0);
        if ((uVar6 & 1) != 0) {
          FUN_085f07dc(in_stack_00000008,0);
        }
        uVar6 = FUN_085f07cc(in_stack_00000010 + 0x68,0);
        if ((uVar6 & 1) != 0) {
          FUN_085f07dc(in_stack_00000010 + 0x68,0);
        }
        if (unaff_x24 != 0) {
          uVar10 = FUN_05214770();
          in_stack_00000018 = 0;
          FUN_085f066c(&stack0x00000018,uVar10,0xffffffff,0);
          *in_stack_00000008 = in_stack_00000018;
          puVar1 = PTR_DAT_08e85450;
          if (unaff_x23 != 0) {
            uVar10 = FUN_05214770();
            in_stack_00000028 = 0;
            FUN_085f066c(&stack0x00000028,uVar10,0xffffffff,0);
            plVar14 = (long *)(in_stack_00000010 + 0x38);
            *(undefined8 *)(in_stack_00000010 + 0x68) = in_stack_00000028;
            if (*plVar14 != 0) {
              FUN_05594600(plVar14,*(undefined8 *)PTR_DAT_08e85478);
            }
            puVar2 = PTR_DAT_08e8f4c8;
            uVar5 = FUN_085f0a00(in_stack_00000008,0);
            uVar6 = (ulong)uVar5;
            in_stack_00000018 = 0;
            in_stack_00000020 = 0;
            FUN_055942ac(&stack0x00000018,uVar6,4,1,*(undefined8 *)puVar1);
            *(undefined8 *)(in_stack_00000010 + 0x40) = in_stack_00000020;
            *plVar14 = in_stack_00000018;
            plVar13 = (long *)(in_stack_00000010 + 0x48);
            *(undefined8 *)(in_stack_00000010 + 0x78) = in_stack_00000020;
            *(long *)(in_stack_00000010 + 0x70) = in_stack_00000018;
            if (*plVar13 != 0) {
              FUN_055ed558(plVar13,*(undefined8 *)PTR_DAT_08e8f4b8);
            }
            puVar1 = PTR_DAT_08e6abb0;
            in_stack_00000018 = 0;
            in_stack_00000020 = 0;
            FUN_055ed204(&stack0x00000018,uVar6,4,1,*(undefined8 *)puVar2);
            *(undefined8 *)(in_stack_00000010 + 0x50) = in_stack_00000020;
            *plVar13 = in_stack_00000018;
            if (0 < (int)uVar5) {
              lVar11 = 0;
              do {
                puVar9 = (undefined8 *)(*plVar13 + lVar11);
                lVar11 = lVar11 + 0x50;
                puVar9[7] = 0;
                puVar9[6] = 0;
                puVar9[9] = 0;
                puVar9[8] = 0;
                puVar9[3] = 0;
                puVar9[2] = 0;
                puVar9[5] = 0;
                puVar9[4] = 0;
                puVar9[1] = 0;
                *puVar9 = 0;
              } while (uVar6 * 0x50 - lVar11 != 0);
            }
            in_stack_00000038 = *(undefined8 *)(in_stack_00000010 + 0x40);
            in_stack_00000030 = *plVar14;
            in_stack_00000048 = *(undefined8 *)(in_stack_00000010 + 0x50);
            in_stack_00000040 = *plVar13;
            *(undefined8 *)(in_stack_00000010 + 0x88) = in_stack_00000038;
            *(long *)(in_stack_00000010 + 0x80) = in_stack_00000030;
            *(undefined8 *)(in_stack_00000010 + 0x98) = in_stack_00000048;
            *(long *)(in_stack_00000010 + 0x90) = in_stack_00000040;
            uVar10 = FUN_03c8f97c(*(undefined8 *)puVar1,*(undefined4 *)(in_stack_00000010 + 0x50));
            *(undefined8 *)(in_stack_00000010 + 200) = uVar10;
            thunk_FUN_03d233cc();
            FUN_06d7a2f8(in_stack_00000010,unaff_x29);
            return;
          }
        }
        goto LAB_06d79fd8;
      }
      lVar11 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x20) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06d79b88;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06d79b88:
      auVar15 = (*(code *)*puVar9)();
      param_3 = auVar15._0_8_;
    } while (param_3 == 0);
    in_stack_00000068._4_4_ = unaff_w22;
    if (DAT_0940fffc == '\0') {
      auVar15 = FUN_03c8f898(PTR_DAT_08e69f40);
      DAT_0940fffc = '\x01';
    }
    param_5 = (long)&stack0x00000068 + 4;
    param_6 = &stack0x00000050;
    in_stack_00000058 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
    in_stack_00000050 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
    param_4 = unaff_x29;
    unaff_x28 = param_3;
  }
LAB_06d79fd8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


