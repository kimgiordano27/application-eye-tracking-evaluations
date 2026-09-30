/*
FUNCTION_NAME: Meta.XR.Acoustics.MaterialData$$get_IsEmpty
ENTRY_POINT: 014282e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_MaterialData__get_IsEmpty(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar17;
  long unaff_x25;
  uint unaff_w26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar18 [16];
  ulong in_stack_000000a0;
  long *in_stack_000000a8;
  long in_stack_00000110;
  
  auVar18 = FUN_0134423c(param_1,param_2,*unaff_x28);
  uVar2 = *(undefined8 *)(unaff_x21 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x21 + 200);
                    /* try { // try from 014282fc to 015282ff has its CatchHandler @ 01428364 */
  if (*(int *)(*(long *)
                Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__ +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_011627b4(auVar18._0_8_,auVar18._8_8_,uVar2,uVar3,unaff_w19,*unaff_x29);
  uVar17 = *(uint *)(unaff_x21 + 8);
  if (((unaff_w26 & uVar17) >> 9 & 1) != 0) {
                    /* try { // try from 0142833c to 01528347 has its CatchHandler @ 01428374 */
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
                    /* try { // try from 01428348 to 0152834b has its CatchHandler @ 01428370 */
                    /* try { // try from 0142834c to 0152834f has its CatchHandler @ 01428374 */
    auVar18 = FUN_0141dad0();
                    /* try { // try from 01428350 to 01528353 has its CatchHandler @ 0142836c */
                    /* try { // try from 01428354 to 01528357 has its CatchHandler @ 01428368 */
    auVar18 = FUN_0134423c(auVar18._0_8_,auVar18._8_8_,*unaff_x28);
                    /* try { // try from 01428358 to 0152835b has its CatchHandler @ 01428360 */
                    /* try { // try from 0142835c to 015283a3 has its CatchHandler @ 014280a8 */
                    /* catch() { ... } // from try @ 01428358 with catch @ 01428360 */
                    /* catch() { ... } // from try @ 014282fc with catch @ 01428364 */
    uVar2 = *(undefined8 *)(unaff_x21 + 0xd0);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xd8);
                    /* catch() { ... } // from try @ 01428354 with catch @ 01428368 */
                    /* catch() { ... } // from try @ 01428350 with catch @ 0142836c */
                    /* catch() { ... } // from try @ 01428348 with catch @ 01428370 */
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar18._0_8_,auVar18._8_8_,uVar2,uVar3,unaff_w19,*unaff_x29);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 10 & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar18 = FUN_0141dad0();
    auVar18 = FUN_0134423c(auVar18._0_8_,auVar18._8_8_,*unaff_x28);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xe8);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar18._0_8_,auVar18._8_8_,uVar2,uVar3,unaff_w19,*unaff_x29);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 0xb & 1) != 0) {
    if ((unaff_x20 == 0) || (unaff_x25 == 0)) goto LAB_014287b8;
    auVar18 = FUN_0141dad0();
    auVar18 = FUN_0134423c(auVar18._0_8_,auVar18._8_8_,*unaff_x28);
    uVar2 = *(undefined8 *)(unaff_x21 + 0xf0);
    uVar3 = *(undefined8 *)(unaff_x21 + 0xf8);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_011627b4(auVar18._0_8_,auVar18._8_8_,uVar2,uVar3,unaff_w19,*unaff_x29);
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  if (((unaff_w26 & uVar17) >> 0xc & 1) != 0) {
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
    uVar17 = *(uint *)(unaff_x21 + 8);
  }
  puVar7 = Method_GlassesObject_GlassesRemoved__;
  puVar6 = System_Net_IPAddress___TypeInfo;
  if (((unaff_w26 & uVar17) >> 3 & 1) != 0) {
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
    lVar9 = *in_stack_000000a8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_SetStateMachine__
           ) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
          goto LAB_014285bc;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
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
    uVar17 = *(uint *)(in_stack_00000110 + 0x18);
    uVar10 = (ulong)uVar17;
    if (0 < (long)(uVar10 << 0x20)) {
      uVar11 = 0;
      do {
        if (unaff_x20 == 0) goto LAB_014287b8;
        if (uVar10 == uVar11) goto LAB_014287dc;
        lVar9 = *(long *)(unaff_x20 + 0x70);
        if (lVar9 == 0) goto LAB_014287b8;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_014287dc;
        lVar15 = uVar11 * 4;
        lVar13 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(lVar9 + lVar13 + 0x20) = *(undefined4 *)(in_stack_00000110 + 0x20 + lVar15);
      } while ((long)uVar11 < (long)(int)uVar17);
    }
    if ((unaff_x20 != 0) && (lVar9 = *(long *)(unaff_x20 + 0xd0), lVar9 != 0)) {
      uVar17 = 0;
      do {
        if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar17) {
          return;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar17) {
LAB_014287dc:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar9 = *(long *)(lVar9 + (long)(int)uVar17 * 8 + 0x20);
        if (lVar9 == 0) break;
        lVar9 = *(long *)(lVar9 + 0x10);
        if (unaff_w19 != 0) {
          if (lVar9 == 0) break;
          uVar4 = *(uint *)(lVar9 + 0x18);
          if (0 < (long)((ulong)uVar4 << 0x20)) {
            uVar11 = 0;
            do {
              if (uVar4 == uVar11) goto LAB_014287dc;
              *(int *)(lVar9 + 0x20 + uVar11 * 4) = *(int *)(lVar9 + 0x20 + uVar11 * 4) + unaff_w19;
              uVar11 = uVar11 + 1;
            } while ((long)uVar11 < (long)(int)uVar4);
          }
        }
        if (*(char *)(unaff_x20 + 0x69) != '\0') {
          if (lVar9 == 0) break;
          uVar4 = *(uint *)(lVar9 + 0x18);
          if (0 < (int)uVar4) {
            uVar14 = 1;
            do {
              if ((uVar4 <= uVar14 - 1) || (uVar4 <= uVar14)) goto LAB_014287dc;
              lVar13 = lVar9 + (long)(int)uVar14 * 4;
              puVar16 = (undefined4 *)(lVar9 + (long)(int)(uVar14 - 1) * 4 + 0x20);
              uVar5 = *puVar16;
              iVar1 = uVar14 + 2;
              uVar14 = uVar14 + 3;
              *puVar16 = *(undefined4 *)(lVar13 + 0x20);
              *(undefined4 *)(lVar13 + 0x20) = uVar5;
            } while (iVar1 < (int)uVar4);
          }
        }
        lVar13 = *(long *)(unaff_x20 + 0x80);
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar17) goto LAB_014287dc;
        lVar15 = *(long *)(unaff_x21 + 0x130);
        if (lVar15 == 0) break;
        uVar4 = *(uint *)(lVar13 + (long)(int)uVar17 * 4 + 0x20);
        lVar13 = (long)(int)uVar4;
        if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_014287dc;
        lVar15 = *(long *)(lVar15 + lVar13 * 8 + 0x20);
        if (lVar15 == 0) break;
        if ((uint)uVar10 <= uVar4) goto LAB_014287dc;
        if (lVar9 == 0) break;
        piVar12 = (int *)(in_stack_00000110 + lVar13 * 4 + 0x20);
        FUN_017953b8(lVar9,*(undefined8 *)(lVar15 + 0x10),*piVar12,0);
        lVar15 = *(long *)(unaff_x20 + 0x78);
        if (lVar15 == 0) break;
        if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_014287dc;
        lVar15 = lVar15 + lVar13 * 4;
        iVar1 = *(int *)(lVar9 + 0x18);
        *(int *)(lVar15 + 0x20) = *(int *)(lVar15 + 0x20) + iVar1;
        uVar10 = *(ulong *)(in_stack_00000110 + 0x18);
        if ((uint)uVar10 <= uVar4) goto LAB_014287dc;
        uVar17 = uVar17 + 1;
        *piVar12 = *piVar12 + iVar1;
        lVar9 = *(long *)(unaff_x20 + 0xd0);
      } while (lVar9 != 0);
    }
  }
LAB_014287b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


