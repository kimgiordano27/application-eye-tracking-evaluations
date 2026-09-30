/*
FUNCTION_NAME: Meta.XR.Acoustics.Spectrum$$.ctor
ENTRY_POINT: 01428420
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_Spectrum___ctor(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined4 *puVar17;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar18 [16];
  ulong in_stack_000000a0;
  long *in_stack_000000a8;
  long in_stack_00000110;
  
  auVar18 = FUN_0141dad0();
  auVar18 = FUN_0134423c(auVar18._0_8_,auVar18._8_8_,*unaff_x28);
  uVar2 = *(undefined8 *)(unaff_x21 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x21 + 0xf8);
  if (*(int *)(*(long *)
                Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011627b4(auVar18._0_8_,auVar18._8_8_,uVar2,uVar3,unaff_w19,*unaff_x29);
  uVar9 = *(uint *)(unaff_x21 + 8);
  if (((unaff_w26 & uVar9) >> 0xc & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar18 = FUN_0141dad0();
    auVar18 = FUN_0134423c(auVar18._0_8_,auVar18._8_8_,*unaff_x28);
    uVar2 = *(undefined8 *)(unaff_x21 + 0x100);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x108);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar18._0_8_,auVar18._8_8_,uVar2,uVar3,unaff_w19,*unaff_x29);
    uVar9 = *(uint *)(unaff_x21 + 8);
  }
  puVar7 = Method_GlassesObject_GlassesRemoved__;
  puVar6 = System_Net_IPAddress___TypeInfo;
  if (((unaff_w26 & uVar9) >> 3 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar18 = FUN_0141dc98();
    auVar18 = FUN_0134423c(auVar18._0_8_,auVar18._8_8_,*(undefined8 *)puVar6);
    uVar2 = *(undefined8 *)(unaff_x21 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x21 + 0x88);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar18._0_8_,auVar18._8_8_,uVar2,uVar3,unaff_w19,*(undefined8 *)puVar7);
  }
  if ((in_stack_000000a0 & 1) != 0) {
    if (in_stack_000000a8 == (long *)0x0) goto LAB_014287b8;
    lVar10 = *in_stack_000000a8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
           ) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
          goto LAB_014285bc;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(in_stack_000000a8,
                          *(long *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
                          ,0xf);
LAB_014285bc:
    (*(code *)*puVar8)(in_stack_000000a8);
  }
  if ((in_stack_000000a0 & 0x100000000) == 0) {
    return;
  }
  if (in_stack_00000110 != 0) {
    uVar9 = *(uint *)(in_stack_00000110 + 0x18);
    uVar11 = (ulong)uVar9;
    if (0 < (long)(uVar11 << 0x20)) {
      uVar12 = 0;
      do {
        if (unaff_x20 == 0) goto LAB_014287b8;
        if (uVar11 == uVar12) goto LAB_014287dc;
        lVar10 = *(long *)(unaff_x20 + 0x70);
        if (lVar10 == 0) goto LAB_014287b8;
        if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_014287dc;
        lVar16 = uVar12 * 4;
        lVar14 = uVar12 * 4;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(lVar10 + lVar14 + 0x20) = *(undefined4 *)(in_stack_00000110 + 0x20 + lVar16)
        ;
      } while ((long)uVar12 < (long)(int)uVar9);
    }
    if ((unaff_x20 != 0) && (lVar10 = *(long *)(unaff_x20 + 0xd0), lVar10 != 0)) {
      uVar9 = 0;
      do {
        if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar9) {
LAB_014287dc:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar10 = *(long *)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar10 == 0) break;
        lVar10 = *(long *)(lVar10 + 0x10);
        if (unaff_w19 != 0) {
          if (lVar10 == 0) break;
          uVar4 = *(uint *)(lVar10 + 0x18);
          if (0 < (long)((ulong)uVar4 << 0x20)) {
            uVar12 = 0;
            do {
              if (uVar4 == uVar12) goto LAB_014287dc;
              *(int *)(lVar10 + 0x20 + uVar12 * 4) =
                   *(int *)(lVar10 + 0x20 + uVar12 * 4) + unaff_w19;
              uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)uVar4);
          }
        }
        if (*(char *)(unaff_x20 + 0x69) != '\0') {
          if (lVar10 == 0) break;
          uVar4 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar4) {
            uVar15 = 1;
            do {
              if ((uVar4 <= uVar15 - 1) || (uVar4 <= uVar15)) goto LAB_014287dc;
              lVar14 = lVar10 + (long)(int)uVar15 * 4;
              puVar17 = (undefined4 *)(lVar10 + (long)(int)(uVar15 - 1) * 4 + 0x20);
              uVar5 = *puVar17;
              iVar1 = uVar15 + 2;
              uVar15 = uVar15 + 3;
              *puVar17 = *(undefined4 *)(lVar14 + 0x20);
              *(undefined4 *)(lVar14 + 0x20) = uVar5;
            } while (iVar1 < (int)uVar4);
          }
        }
        lVar14 = *(long *)(unaff_x20 + 0x80);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_014287dc;
        lVar16 = *(long *)(unaff_x21 + 0x130);
        if (lVar16 == 0) break;
        uVar4 = *(uint *)(lVar14 + (long)(int)uVar9 * 4 + 0x20);
        lVar14 = (long)(int)uVar4;
        if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_014287dc;
        lVar16 = *(long *)(lVar16 + lVar14 * 8 + 0x20);
        if (lVar16 == 0) break;
        if ((uint)uVar11 <= uVar4) goto LAB_014287dc;
        if (lVar10 == 0) break;
        piVar13 = (int *)(in_stack_00000110 + lVar14 * 4 + 0x20);
        FUN_017953b8(lVar10,*(undefined8 *)(lVar16 + 0x10),*piVar13,0);
        lVar16 = *(long *)(unaff_x20 + 0x78);
        if (lVar16 == 0) break;
        if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_014287dc;
        lVar16 = lVar16 + lVar14 * 4;
        iVar1 = *(int *)(lVar10 + 0x18);
        *(int *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) + iVar1;
        uVar11 = *(ulong *)(in_stack_00000110 + 0x18);
        if ((uint)uVar11 <= uVar4) goto LAB_014287dc;
        uVar9 = uVar9 + 1;
        *piVar13 = *piVar13 + iVar1;
        lVar10 = *(long *)(unaff_x20 + 0xd0);
      } while (lVar10 != 0);
    }
  }
LAB_014287b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


