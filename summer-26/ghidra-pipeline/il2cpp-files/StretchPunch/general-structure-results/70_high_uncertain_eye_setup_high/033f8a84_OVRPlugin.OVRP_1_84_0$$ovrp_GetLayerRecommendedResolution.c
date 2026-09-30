/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_GetLayerRecommendedResolution
ENTRY_POINT: 033f8a84
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f8f30) */
/* WARNING: Removing unreachable block (ram,0x033f90e0) */

void OVRPlugin_OVRP_1_84_0__ovrp_GetLayerRecommendedResolution(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  char cStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000038;
  
  FUN_01d7d918(StringLiteral_460);
  *(undefined1 *)(unaff_x20 + 0xbda) = 1;
  puVar3 = StringLiteral_9435;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  cStack000000000000001c = '\0';
  iVar13 = *unaff_x19;
  lVar11 = *(long *)(unaff_x19 + 0xe);
  if (iVar13 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    iVar13 = -1;
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
LAB_033f8cc4:
    lVar12 = FUN_029c1798(&stack0x00000020,*(undefined8 *)StringLiteral_9454);
    plVar6 = (long *)(unaff_x19 + 0x12);
    if (*plVar6 == lVar12) {
      *plVar6 = 0;
      thunk_FUN_01e10808(plVar6,0);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033f5cc4(lVar12);
      FUN_033f5da8(lVar12,0);
      uVar5 = 1;
      iVar15 = 10;
      iVar1 = 10;
      if (iVar13 < 0) goto LAB_033f9070;
LAB_033f8d38:
      iVar15 = iVar1;
      bVar2 = true;
    }
    else {
      uVar5 = 0;
      iVar15 = 0xb;
      iVar1 = 0xb;
      if (-1 < iVar13) goto LAB_033f8d38;
LAB_033f9070:
      plVar6 = *(long **)(unaff_x19 + 0x10);
      if (plVar6 != (long *)0x0) {
        lVar12 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)
                 Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_033f90cc;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01dde8fc(plVar6,*(long *)
                                      Field_UnityEngine_UIElements_UIR_RenderChain_DepthOrderedDirtyTracking_heads
                              ,0);
LAB_033f90cc:
        (*(code *)*puVar9)(plVar6,puVar9[1]);
      }
      bVar2 = false;
    }
    if (iVar15 != 0xb) {
      if (iVar15 == 10) goto LAB_033f8ec8;
      if (iVar15 != 0) {
        return;
      }
    }
    piVar10 = unaff_x19 + 0x10;
    piVar10[0] = 0;
    piVar10[1] = 0;
    thunk_FUN_01e10808(piVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar14 = *(undefined8 *)(lVar11 + 0x20);
    cStack000000000000001c = '\0';
    FUN_033f4894(uVar14,&stack0x0000001c);
    uVar8 = FUN_033f81c0(lVar11,*(undefined8 *)(unaff_x19 + 10));
    if ((uVar8 & 1) == 0) {
      iVar13 = 0xd;
    }
    else {
      if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f3e58(unaff_x19 + 8);
      uVar5 = 0;
      iVar13 = 10;
    }
    if (!bVar2 && cStack000000000000001c != '\0') {
      FUN_01dccd6c(uVar14);
    }
    if (iVar13 != 0xd) {
      if (iVar13 == 10) goto LAB_033f8ec8;
      if (iVar13 != 0) {
        return;
      }
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    auVar16 = FUN_026c53b8(*(long *)(unaff_x19 + 10),0,*(undefined8 *)StringLiteral_9460);
    uVar8 = FUN_029c1214();
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar16;
      thunk_FUN_01e10808(unaff_x19 + 0x18,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_01ee9390(unaff_x19 + 2);
      return;
    }
  }
  else {
    if (iVar13 != 1) {
      if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar12 = *(long *)(unaff_x19 + 8);
      if (lVar12 == 0) {
        lVar12 = thunk_FUN_01de27b8();
        thunk_FUN_01da0934();
        *(undefined4 *)(lVar12 + 0x24) = 0xffffffff;
        FUN_033d8040(lVar12,0);
        thunk_FUN_01da0934();
        *(undefined4 *)(lVar12 + 0x20) = 1;
      }
      else {
        if (*(int *)(*(long *)StringLiteral_9368 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar12 = FUN_033f68a4(lVar12,0);
      }
      *(long *)(unaff_x19 + 0x10) = lVar12;
      thunk_FUN_01e10808(unaff_x19 + 0x10,lVar12);
      plVar6 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_9458,2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar12 = *(long *)(unaff_x19 + 10);
      if ((lVar12 != 0) &&
         (lVar7 = thunk_FUN_01de26bc(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
        uVar14 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar14,0);
      }
      if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar6[4] = lVar12;
      thunk_FUN_01e10808(plVar6 + 4,lVar12);
      lVar12 = *(long *)(unaff_x19 + 0x10);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      iVar1 = unaff_x19[0xc];
      FUN_033f5cc4(lVar12);
      in_stack_00000038 = lVar12;
      thunk_FUN_01e10808(&stack0x00000038,lVar12);
      lVar12 = in_stack_00000038;
      if (*(int *)(*(long *)StringLiteral_460 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar12 = FUN_0340af60(iVar1,lVar12,0);
      if ((lVar12 != 0) &&
         (lVar7 = thunk_FUN_01de26bc(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
        uVar14 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar14,0);
      }
      if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      plVar6[5] = lVar12;
      thunk_FUN_01e10808(plVar6 + 5,lVar12);
      lVar12 = FUN_0340b438(plVar6,0);
      *(undefined8 *)(unaff_x19 + 0x12) = *(undefined8 *)(unaff_x19 + 10);
      thunk_FUN_01e10808();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      _in_stack_00000020 = FUN_026ca578(lVar12,0,*(undefined8 *)StringLiteral_9459);
      uVar8 = FUN_029c174c(&stack0x00000020,*(undefined8 *)StringLiteral_9456);
      if ((uVar8 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000020;
        thunk_FUN_01e10808(unaff_x19 + 0x14,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        FUN_01ee95a4(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      goto LAB_033f8cc4;
    }
    unaff_x19[0x18] = 0;
    unaff_x19[0x19] = 0;
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    *unaff_x19 = -1;
    _in_stack_00000020 = ZEXT816(0);
  }
  uVar5 = FUN_029c1260();
LAB_033f8ec8:
  *unaff_x19 = -2;
  puVar4 = StringLiteral_9451;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0253d68c(unaff_x19 + 2,uVar5 & 1,*(undefined8 *)puVar4);
  return;
}


