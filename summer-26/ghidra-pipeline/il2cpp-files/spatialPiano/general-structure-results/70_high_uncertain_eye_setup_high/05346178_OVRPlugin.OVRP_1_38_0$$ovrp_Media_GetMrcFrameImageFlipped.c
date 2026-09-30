/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameImageFlipped
ENTRY_POINT: 05346178
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameImageFlipped
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong in_x9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
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
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  do {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar11 + 9) * 0x10 + 0x138);
        goto LAB_053461b8;
      }
      in_x9 = in_x9 - 1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
    do {
      puVar3 = (undefined8 *)FUN_02f421d0(unaff_x23,param_3,9);
LAB_053461b8:
      (*(code *)*puVar3)(unaff_x23,unaff_w22,&stack0x00000050,puVar3[1]);
      uVar4 = FUN_05346470();
      if ((uVar4 & 1) == 0) {
        in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
        in_stack_00000018 = in_stack_00000058;
        uStack0000000000000024 = uStack0000000000000064;
        uStack0000000000000020 = uStack0000000000000060;
        lVar5 = FUN_05346518();
        plVar12 = *(long **)(unaff_x19 + 0x78);
        in_stack_00000078 = lVar5;
        if (plVar12 == (long *)0x0) goto LAB_0534645c;
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar7,0);
        }
        if (*(uint *)(plVar12 + 3) <= unaff_w22) {
LAB_05346460:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar12[(long)(int)unaff_w22 + 4] = lVar5;
      }
      uStack000000000000000c = unaff_w22;
      uVar7 = thunk_FUN_02f44ec4(*unaff_x28,(long)&stack0x00000008 + 4);
      uStack0000000000000008 = (int)unaff_x21;
      uVar8 = thunk_FUN_02f44ec4(*unaff_x28,&stack0x00000008);
      FUN_04f70018(*(undefined8 *)UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo,
                   uVar7,uVar8,0);
      if (*(long *)(unaff_x19 + 0x40) == 0) {
LAB_0534645c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      fVar13 = (float)FUN_053466d8(*(long *)(unaff_x19 + 0x40),unaff_w22);
      if (*(int *)(*unaff_x27 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar4 = FUN_053367e4(unaff_x21 & 0xffffffff,0);
      plVar12 = *(long **)(unaff_x19 + 0x38);
      fVar2 = fVar13;
      if (unaff_w22 != 0) {
        fVar2 = unaff_s10;
      }
      fVar14 = -fVar13;
      if ((uVar4 & 1) == 0) {
        fVar14 = fVar2;
      }
      if (plVar12 == (long *)0x0) goto LAB_0534645c;
      lVar5 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar11 + 9) * 0x10 + 0x138);
            goto LAB_0534632c;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar12,*unaff_x26,9);
LAB_0534632c:
      (*(code *)*puVar3)(plVar12,unaff_x21 & 0xffffffff,&stack0x00000030,puVar3[1]);
      lVar5 = in_stack_00000078;
      if (in_stack_00000078 == 0) goto LAB_0534645c;
      FUN_060ed7ac(in_stack_00000078,0);
      uVar7 = FUN_05346754(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                           uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar13,
                           fVar14);
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_UIElements_ExecuteCommandEvent_TypeInfo)
      ;
      FUN_05116b38(lVar6,0);
      lVar9 = *(long *)(unaff_x19 + 0x68);
      *(uint *)(lVar6 + 0x10) = unaff_w22;
      *(int *)(lVar6 + 0x14) = (int)unaff_x21;
      *(long *)(lVar6 + 0x18) = lVar5;
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      if (lVar9 == 0) goto LAB_0534645c;
      lVar5 = *(long *)(lVar9 + 0x10);
      lVar10 = *unaff_x29;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0534645c;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      }
      else {
        FUN_03abf904(lVar9,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      do {
        unaff_x21 = unaff_x21 + 1;
        if (unaff_x21 == 0x1a) {
          FUN_05346a00();
          lVar5 = *(long *)(unaff_x19 + 0x58);
          *(undefined1 *)(unaff_x19 + 0x81) = 1;
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
            return;
          }
          goto LAB_0534645c;
        }
        lVar5 = *unaff_x27;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar5 = *unaff_x27;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar5 == 0) goto LAB_0534645c;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05346460;
        unaff_w22 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
      } while ((unaff_w22 == 0xffffffff) ||
              ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
      unaff_x23 = *(long **)(unaff_x19 + 0x38);
      if (unaff_x23 == (long *)0x0) goto LAB_0534645c;
      param_1 = *unaff_x23;
      param_3 = *unaff_x26;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
  } while( true );
}


