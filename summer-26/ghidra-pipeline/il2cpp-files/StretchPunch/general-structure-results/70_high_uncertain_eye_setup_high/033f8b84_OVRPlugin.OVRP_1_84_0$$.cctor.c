/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$.cctor
ENTRY_POINT: 033f8b84
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f8f30) */
/* WARNING: Removing unreachable block (ram,0x033f90e0) */

void OVRPlugin_OVRP_1_84_0___cctor(long param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  int iVar10;
  undefined8 unaff_x21;
  long lVar11;
  int unaff_w24;
  undefined8 uVar12;
  long *unaff_x25;
  int iVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  *(undefined8 *)(param_1 + 0x40) = unaff_x21;
  thunk_FUN_01e10808();
  plVar5 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_9458,2);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  lVar11 = *(long *)(unaff_x19 + 10);
  if ((lVar11 != 0) &&
     (lVar6 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
    uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar12,0);
  }
  if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  plVar5[4] = lVar11;
  thunk_FUN_01e10808(plVar5 + 4,lVar11);
  lVar11 = *(long *)(unaff_x19 + 0x10);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = unaff_x19[0xc];
  FUN_033f5cc4(lVar11);
  in_stack_00000038 = lVar11;
  thunk_FUN_01e10808(&stack0x00000038,lVar11);
  lVar11 = in_stack_00000038;
  if (*(int *)(*(long *)StringLiteral_460 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  lVar11 = FUN_0340af60(uVar1,lVar11,0);
  if ((lVar11 != 0) &&
     (lVar6 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
    uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar12,0);
  }
  if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  plVar5[5] = lVar11;
  thunk_FUN_01e10808(plVar5 + 5,lVar11);
  lVar11 = FUN_0340b438(plVar5,0);
  *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(unaff_x19 + 10);
  thunk_FUN_01e10808();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  _in_stack_00000020 = FUN_026ca578(lVar11,0,*(undefined8 *)StringLiteral_9459);
  uVar7 = FUN_029c174c(&stack0x00000020,*(undefined8 *)StringLiteral_9456);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
    thunk_FUN_01e10808(unaff_x19 + 0x14,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_01ee95a4(unaff_x19 + 2,&stack0x00000020);
    return;
  }
  lVar11 = FUN_029c1798(&stack0x00000020,*(undefined8 *)StringLiteral_9454);
  plVar5 = (long *)(unaff_x19 + 0x12);
  if (*plVar5 == lVar11) {
    *plVar5 = 0;
    thunk_FUN_01e10808(plVar5,0);
    lVar11 = *(long *)(unaff_x19 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_033f5cc4(lVar11);
    FUN_033f5da8(lVar11,0);
    uVar4 = 1;
    iVar13 = 10;
    iVar10 = 10;
    if (unaff_w24 < 0) goto LAB_033f9070;
LAB_033f8d38:
    iVar13 = iVar10;
    bVar2 = true;
  }
  else {
    uVar4 = 0;
    iVar13 = 0xb;
    iVar10 = 0xb;
    if (-1 < unaff_w24) goto LAB_033f8d38;
LAB_033f9070:
    plVar5 = *(long **)(unaff_x19 + 0x10);
    if (plVar5 != (long *)0x0) {
      lVar11 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads)
          {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_033f90cc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01dde8fc(plVar5,*(long *)
                                    Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                            ,0);
LAB_033f90cc:
      (*(code *)*puVar8)(plVar5,puVar8[1]);
    }
    bVar2 = false;
  }
  if (iVar13 != 0xb) {
    if (iVar13 == 10) goto LAB_033f8ec8;
    if (iVar13 != 0) {
      return;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  thunk_FUN_01e10808(unaff_x19 + 0x10,0);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  in_stack_00000018._4_1_ = '\0';
  FUN_033f4894(uVar12,(long)&stack0x00000018 + 4);
  uVar7 = FUN_033f81c0();
  if ((uVar7 & 1) == 0) {
    iVar10 = 0xd;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(unaff_x19 + 8);
    uVar4 = 0;
    iVar10 = 10;
  }
  if (!bVar2 && in_stack_00000018._4_1_ != '\0') {
    FUN_01dccd6c(uVar12);
  }
  if (iVar10 != 0xd) {
    if (iVar10 == 10) goto LAB_033f8ec8;
    if (iVar10 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  auVar14 = FUN_026c53b8(*(long *)(unaff_x19 + 10),0,*(undefined8 *)StringLiteral_9460);
  uVar7 = FUN_029c1214();
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar14;
    thunk_FUN_01e10808(unaff_x19 + 0x18,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_01ee9390(unaff_x19 + 2);
    return;
  }
  uVar4 = FUN_029c1260();
LAB_033f8ec8:
  *unaff_x19 = 0xfffffffe;
  puVar3 = StringLiteral_9451;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0253d68c(unaff_x19 + 2,uVar4 & 1,*(undefined8 *)puVar3);
  return;
}


