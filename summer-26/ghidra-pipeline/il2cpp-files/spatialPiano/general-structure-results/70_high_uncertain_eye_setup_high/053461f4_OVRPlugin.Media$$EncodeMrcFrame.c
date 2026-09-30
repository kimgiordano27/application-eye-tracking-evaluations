/*
FUNCTION_NAME: OVRPlugin.Media$$EncodeMrcFrame
ENTRY_POINT: 053461f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__EncodeMrcFrame(undefined1 param_1 [16],undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar12;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar13;
  float fVar14;
  float unaff_s10;
  undefined4 uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  long in_stack_00000078;
  
  uStack0000000000000018 = param_1._8_4_;
  uStack0000000000000010 = param_1._0_8_;
  while( true ) {
    uStack000000000000001c = (undefined4)param_2;
    uStack0000000000000020 = (undefined4)((ulong)param_2 >> 0x20);
    lVar3 = FUN_05346518();
    plVar12 = *(long **)(unaff_x19 + 0x78);
    in_stack_00000078 = lVar3;
    if (plVar12 == (long *)0x0) break;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_02f45174(lVar3,*(undefined8 *)(*plVar12 + 0x40)), lVar4 == 0)) {
      uVar5 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar5,0);
    }
    if (*(uint *)(plVar12 + 3) <= unaff_w22) {
LAB_05346460:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    plVar12[(long)(int)unaff_w22 + 4] = lVar3;
    do {
      uStack000000000000000c = unaff_w22;
      uVar5 = thunk_FUN_02f44ec4(*unaff_x28,(long)&stack0x00000008 + 4);
      uStack0000000000000008 = (int)unaff_x21;
      uVar6 = thunk_FUN_02f44ec4(*unaff_x28,&stack0x00000008);
      FUN_04f70018(*(undefined8 *)UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo,
                   uVar5,uVar6,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_0534645c;
      fVar13 = (float)FUN_053466d8(*(long *)(unaff_x19 + 0x40),unaff_w22);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_053367e4(unaff_x21 & 0xffffffff,0);
      plVar12 = *(long **)(unaff_x19 + 0x38);
      fVar2 = fVar13;
      if (unaff_w22 != 0) {
        fVar2 = unaff_s10;
      }
      fVar14 = -fVar13;
      if ((uVar7 & 1) == 0) {
        fVar14 = fVar2;
      }
      if (plVar12 == (long *)0x0) goto LAB_0534645c;
      lVar3 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_0534632c;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*unaff_x26,9);
LAB_0534632c:
      (*(code *)*puVar8)(plVar12,unaff_x21 & 0xffffffff,&stack0x00000030,puVar8[1]);
      lVar3 = in_stack_00000078;
      if (in_stack_00000078 == 0) goto LAB_0534645c;
      FUN_060ed7ac(in_stack_00000078,0);
      uVar5 = FUN_05346754(uStack0000000000000050,uStack0000000000000054,uStack0000000000000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar13,
                           fVar14);
      lVar4 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo)
      ;
      FUN_05116b38(lVar4,0);
      lVar9 = *(long *)(unaff_x19 + 0x68);
      *(uint *)(lVar4 + 0x10) = unaff_w22;
      *(int *)(lVar4 + 0x14) = (int)unaff_x21;
      *(long *)(lVar4 + 0x18) = lVar3;
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      if (lVar9 == 0) goto LAB_0534645c;
      lVar3 = *(long *)(lVar9 + 0x10);
      lVar10 = *unaff_x29;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_0534645c;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      }
      else {
        FUN_03abf904(lVar9,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      do {
        unaff_x21 = unaff_x21 + 1;
        if (unaff_x21 == 0x1a) {
          FUN_05346a00();
          lVar3 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar3 != 0) {
            (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
            ;
            return;
          }
          goto LAB_0534645c;
        }
        lVar3 = *unaff_x27;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar3 = *unaff_x27;
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_0534645c;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x21) goto LAB_05346460;
        unaff_w22 = *(uint *)(lVar3 + unaff_x21 * 4 + 0x20);
      } while ((unaff_w22 == 0xffffffff) ||
              ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
      plVar12 = *(long **)(unaff_x19 + 0x38);
      if (plVar12 == (long *)0x0) goto LAB_0534645c;
      lVar3 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar3 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_053461b8;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*unaff_x26,9);
LAB_053461b8:
      (*(code *)*puVar8)(plVar12,unaff_w22,&stack0x00000050,puVar8[1]);
      uVar7 = FUN_05346470();
    } while ((uVar7 & 1) != 0);
    uStack0000000000000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    param_2 = CONCAT44(in_stack_00000060,uStack000000000000005c);
    uStack0000000000000018 = uStack0000000000000058;
  }
LAB_0534645c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


