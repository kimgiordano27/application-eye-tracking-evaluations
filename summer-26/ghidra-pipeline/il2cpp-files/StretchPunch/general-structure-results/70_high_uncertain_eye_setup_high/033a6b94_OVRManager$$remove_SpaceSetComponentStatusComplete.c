/*
FUNCTION_NAME: OVRManager$$remove_SpaceSetComponentStatusComplete
ENTRY_POINT: 033a6b94
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SpaceSetComponentStatusComplete(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  uint unaff_w19;
  uint unaff_w20;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar11 [16];
  ushort *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  uVar3 = in_stack_00000038;
  uVar4 = in_stack_00000040;
  while( true ) {
    for (; in_stack_00000038 = uVar3, in_stack_00000040 = uVar4, 0 < (int)unaff_w19;
        unaff_w19 = unaff_w19 - **(int **)(lVar7 + 0xb8)) {
      uVar1 = *(undefined8 *)unaff_x29;
      uVar2 = *(undefined8 *)(unaff_x29 + 4);
      lVar10 = *(long *)StringLiteral_8440;
      lVar7 = *(long *)(lVar10 + 0x38);
      if (lVar7 == 0) {
        FUN_01dde854(lVar10);
        lVar7 = *(long *)(lVar10 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
                    /* try { // try from 033a6bd8 to 034a6c07 has its CatchHandler @ 033a6bd8
                       catch() { ... } // from try @ 033a6bd8 with catch @ 033a6bd8
                       catch() { ... } // from try @ 033a6c3c with catch @ 033a6bd8
                       catch() { ... } // from try @ 033a6c74 with catch @ 033a6bd8
                       catch() { ... } // from try @ 033a6cb0 with catch @ 033a6bd8 */
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      auVar11 = FUN_02191188(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
                    /* try { // try from 033a6c08 to 034a6c13 has its CatchHandler @ 033a6c58 */
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *(long *)StringLiteral_8439;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
                    /* try { // try from 033a6c30 to 034a6c3b has its CatchHandler @ 033a6c54 */
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
                    /* try { // try from 033a6c3c to 034a6c6f has its CatchHandler @ 033a6bd8 */
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033a6c30 with catch @ 033a6c54
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033a6c08 with catch @ 033a6c58
                        */
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 033a6c70 to 034a6c73 has its CatchHandler @ 033a6ca0 */
        lVar7 = FUN_01dde7f8();
      }
                    /* try { // try from 033a6c74 to 034a6ca3 has its CatchHandler @ 033a6bd8 */
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar6 = FUN_028549c8(&stack0x00000020,auVar11._0_8_,auVar11._8_8_,*unaff_x26);
      if ((uVar6 & 1) == 0) {
        iVar5 = FUN_033ba8d0(auVar11._0_8_,auVar11._8_8_,0);
        uVar6 = (long)unaff_x29 - in_stack_00000010;
        if ((long)uVar6 < 0) {
          uVar6 = uVar6 + 1;
        }
        uVar6 = (ulong)(uint)(iVar5 + (int)(uVar6 >> 1));
        goto LAB_033a6df4;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar10 = *unaff_x28;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar9 = *unaff_x28;
      lVar10 = *(long *)(lVar9 + 0x20);
      iVar5 = **(int **)(lVar7 + 0xb8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01dde7f8(lVar10);
      }
      lVar7 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01dde7f8();
      }
      unaff_x29 = unaff_x29 + iVar5;
      uVar3 = in_stack_00000038;
      uVar4 = in_stack_00000040;
    }
    uVar6 = (long)in_stack_00000008 - (long)unaff_x29;
    if (in_stack_00000008 < unaff_x29 || uVar6 == 0) break;
    if ((long)uVar6 < 0) {
      uVar6 = uVar6 + 1;
    }
    uVar6 = uVar6 >> 1;
    while (iVar5 = (int)uVar6, puVar8 = unaff_x29, 3 < iVar5) {
      if (((uint)*unaff_x29 == (unaff_w20 & 0xffff)) ||
         (puVar8 = unaff_x29 + 1, (uint)*puVar8 == (unaff_w20 & 0xffff))) goto LAB_033a6de0;
      if ((uint)unaff_x29[2] == (unaff_w20 & 0xffff)) {
LAB_033a6ddc:
        puVar8 = puVar8 + 1;
        goto LAB_033a6de0;
      }
      if ((uint)unaff_x29[3] == (unaff_w20 & 0xffff)) {
        puVar8 = unaff_x29 + 2;
        goto LAB_033a6ddc;
      }
      unaff_x29 = unaff_x29 + 4;
      uVar6 = (ulong)(iVar5 - 4);
    }
    if (0 < iVar5) {
      iVar5 = iVar5 + 1;
      do {
        if ((uint)*puVar8 == (unaff_w20 & 0xffff)) goto LAB_033a6de0;
        iVar5 = iVar5 + -1;
        unaff_x29 = puVar8 + 1;
        puVar8 = unaff_x29;
      } while (1 < iVar5);
    }
    uVar6 = FUN_0331bf08(0);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = (long)in_stack_00000008 - (long)unaff_x29,
       in_stack_00000008 < unaff_x29 || uVar6 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar10 = *unaff_x28;
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01dde7f8();
    }
    if ((long)uVar6 < 0) {
      uVar6 = uVar6 + 1;
    }
    unaff_w19 = -**(int **)(lVar7 + 0xb8) & (uint)(uVar6 >> 1);
    FUN_028513c0(&stack0x00000038,unaff_w20,*(undefined8 *)StringLiteral_8438);
    uVar3 = in_stack_00000038;
    uVar4 = in_stack_00000040;
  }
  uVar6 = 0xffffffff;
LAB_033a6df4:
  if (*(long *)(in_stack_00000018 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
LAB_033a6de0:
  uVar6 = (long)puVar8 - in_stack_00000010;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  uVar6 = uVar6 >> 1;
  goto LAB_033a6df4;
}


