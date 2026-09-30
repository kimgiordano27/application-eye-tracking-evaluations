/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum$$Clone
ENTRY_POINT: 01428250
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_Spectrum__Clone(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint in_w8;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined4 *puVar15;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar16;
  long unaff_x25;
  uint unaff_w26;
  long unaff_x28;
  undefined8 *puVar17;
  long unaff_x29;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  ulong in_stack_000000a0;
  long *in_stack_000000a8;
  long in_stack_00000110;
  
  puVar17 = *(undefined8 **)(unaff_x28 + 0x820);
  puVar18 = *(undefined8 **)(unaff_x29 + 0xfd8);
  if (((unaff_w26 & in_w8) >> 7 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar19 = FUN_0141dad0();
    auVar19 = FUN_0134423c(auVar19._0_8_,auVar19._8_8_,*puVar17);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xb0);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xb8);
                    /* try { // try from 01428294 to 015282b7 has its CatchHandler @ 0142838c */
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar19._0_8_,auVar19._8_8_,uVar2,uVar3,unaff_w19,*puVar18);
    in_w8 = *(uint *)(unaff_x21 + 8);
  }
                    /* try { // try from 014282c4 to 015282cb has its CatchHandler @ 0142837c */
  if (((unaff_w26 & in_w8) >> 8 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar19 = FUN_0141dad0();
    auVar19 = FUN_0134423c(auVar19._0_8_,auVar19._8_8_,*puVar17);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x21 + 200);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar19._0_8_,auVar19._8_8_,uVar2,uVar3,unaff_w19,*puVar18);
    in_w8 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & in_w8) >> 9 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar19 = FUN_0141dad0();
    auVar19 = FUN_0134423c(auVar19._0_8_,auVar19._8_8_,*puVar17);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xd0);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xd8);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar19._0_8_,auVar19._8_8_,uVar2,uVar3,unaff_w19,*puVar18);
    in_w8 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & in_w8) >> 10 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar19 = FUN_0141dad0();
    auVar19 = FUN_0134423c(auVar19._0_8_,auVar19._8_8_,*puVar17);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xe8);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar19._0_8_,auVar19._8_8_,uVar2,uVar3,unaff_w19,*puVar18);
    in_w8 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & in_w8) >> 0xb & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar19 = FUN_0141dad0();
    auVar19 = FUN_0134423c(auVar19._0_8_,auVar19._8_8_,*puVar17);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xf8);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar19._0_8_,auVar19._8_8_,uVar2,uVar3,unaff_w19,*puVar18);
    in_w8 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & in_w8) >> 0xc & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar19 = FUN_0141dad0();
    auVar19 = FUN_0134423c(auVar19._0_8_,auVar19._8_8_,*puVar17);
    uVar2 = *(undefined8 *)(unaff_x21 + 0x100);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x108);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar19._0_8_,auVar19._8_8_,uVar2,uVar3,unaff_w19,*puVar18);
    in_w8 = *(uint *)(unaff_x21 + 8);
  }
  puVar7 = Method_GlassesObject_GlassesRemoved__;
  puVar6 = System_Net_IPAddress___TypeInfo;
  if (((unaff_w26 & in_w8) >> 3 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar19 = FUN_0141dc98();
    auVar19 = FUN_0134423c(auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar6);
    uVar2 = *(undefined8 *)(unaff_x21 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x88);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar19._0_8_,auVar19._8_8_,uVar2,uVar3,unaff_w19,*(undefined8 *)puVar7);
  }
  if ((in_stack_000000a0 & 1) != 0) {
    if (in_stack_000000a8 == (long *)0x0) goto LAB_014287b8;
    lVar8 = *in_stack_000000a8;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
           ) {
          puVar17 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
          goto LAB_014285bc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar17 = (undefined8 *)
              FUN_00d59724(in_stack_000000a8,
                           *(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                           ,0xf);
LAB_014285bc:
    (*(code *)*puVar17)(in_stack_000000a8);
  }
  if ((in_stack_000000a0 & 0x100000000) == 0) {
    return;
  }
  if (in_stack_00000110 != 0) {
    uVar16 = *(uint *)(in_stack_00000110 + 0x18);
    uVar9 = (ulong)uVar16;
    if (0 < (long)(uVar9 << 0x20)) {
      uVar10 = 0;
      do {
        if (unaff_x20 == 0) goto LAB_014287b8;
        if (uVar9 == uVar10) goto LAB_014287dc;
        lVar8 = *(long *)(unaff_x20 + 0x70);
        if (lVar8 == 0) goto LAB_014287b8;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_014287dc;
        lVar14 = uVar10 * 4;
        lVar12 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar8 + lVar12 + 0x20) = *(undefined4 *)(in_stack_00000110 + 0x20 + lVar14);
      } while ((long)uVar10 < (long)(int)uVar16);
    }
    if ((unaff_x20 != 0) && (lVar8 = *(long *)(unaff_x20 + 0xd0), lVar8 != 0)) {
      uVar16 = 0;
      do {
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar16) {
          return;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar16) {
LAB_014287dc:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar8 = *(long *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
        if (lVar8 == 0) break;
        lVar8 = *(long *)(lVar8 + 0x10);
        if (unaff_w19 != 0) {
          if (lVar8 == 0) break;
          uVar4 = *(uint *)(lVar8 + 0x18);
          if (0 < (long)((ulong)uVar4 << 0x20)) {
            uVar10 = 0;
            do {
              if (uVar4 == uVar10) goto LAB_014287dc;
              *(int *)(lVar8 + 0x20 + uVar10 * 4) = *(int *)(lVar8 + 0x20 + uVar10 * 4) + unaff_w19;
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)uVar4);
          }
        }
        if (*(char *)(unaff_x20 + 0x69) != '\0') {
          if (lVar8 == 0) break;
          uVar4 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar4) {
            uVar13 = 1;
            do {
              if ((uVar4 <= uVar13 - 1) || (uVar4 <= uVar13)) goto LAB_014287dc;
              lVar12 = lVar8 + (long)(int)uVar13 * 4;
              puVar15 = (undefined4 *)(lVar8 + (long)(int)(uVar13 - 1) * 4 + 0x20);
              uVar5 = *puVar15;
              iVar1 = uVar13 + 2;
              uVar13 = uVar13 + 3;
              *puVar15 = *(undefined4 *)(lVar12 + 0x20);
              *(undefined4 *)(lVar12 + 0x20) = uVar5;
            } while (iVar1 < (int)uVar4);
          }
        }
        lVar12 = *(long *)(unaff_x20 + 0x80);
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar16) goto LAB_014287dc;
        lVar14 = *(long *)(unaff_x21 + 0x130);
        if (lVar14 == 0) break;
        uVar4 = *(uint *)(lVar12 + (long)(int)uVar16 * 4 + 0x20);
        lVar12 = (long)(int)uVar4;
        if (*(uint *)(lVar14 + 0x18) <= uVar4) goto LAB_014287dc;
        lVar14 = *(long *)(lVar14 + lVar12 * 8 + 0x20);
        if (lVar14 == 0) break;
        if ((uint)uVar9 <= uVar4) goto LAB_014287dc;
        if (lVar8 == 0) break;
        piVar11 = (int *)(in_stack_00000110 + lVar12 * 4 + 0x20);
        FUN_017953b8(lVar8,*(undefined8 *)(lVar14 + 0x10),*piVar11,0);
        lVar14 = *(long *)(unaff_x20 + 0x78);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar4) goto LAB_014287dc;
        lVar14 = lVar14 + lVar12 * 4;
        iVar1 = *(int *)(lVar8 + 0x18);
        *(int *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + iVar1;
        uVar9 = *(ulong *)(in_stack_00000110 + 0x18);
        if ((uint)uVar9 <= uVar4) goto LAB_014287dc;
        uVar16 = uVar16 + 1;
        *piVar11 = *piVar11 + iVar1;
        lVar8 = *(long *)(unaff_x20 + 0xd0);
      } while (lVar8 != 0);
    }
  }
LAB_014287b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


