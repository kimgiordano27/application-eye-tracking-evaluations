/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 033c3958
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  byte bVar1;
  bool bVar2;
  undefined1 in_CY;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  uint unaff_w23;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long unaff_x25;
  ulong uVar17;
  uint unaff_w27;
  long *unaff_x29;
  
code_r0x033c3958:
  if ((bool)in_CY) goto thunk_FUN_01d7db78;
  plVar16 = unaff_x20 + (long)(int)unaff_w27 + 4;
  plVar4 = (long *)*plVar16;
  if (((plVar4 != (long *)0x0) &&
      (lVar5 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0)), lVar5 != 0))
     && (unaff_x19 != 0)) {
    iVar3 = *(int *)(unaff_x19 + 0x18);
    iVar11 = (int)*(undefined8 *)(lVar5 + 0x18);
                    /* try { // try from 033c3988 to 034c398b has its CatchHandler @ 033c3994 */
                    /* catch() { ... } // from try @ 033c3874 with catch @ 033c398c
                       try { // try from 033c398c to 034c3a0f has its CatchHandler @ 033c31f0 */
                    /* catch() { ... } // from try @ 033c3654 with catch @ 033c3990 */
    if (iVar11 == iVar3) {
                    /* catch() { ... } // from try @ 033c3988 with catch @ 033c3994 */
                    /* catch() { ... } // from try @ 033c374c with catch @ 033c3998 */
      if (iVar11 < 1) {
        iVar11 = 0;
      }
      else {
                    /* catch() { ... } // from try @ 033c3600 with catch @ 033c399c
                       catch() { ... } // from try @ 033c3634 with catch @ 033c399c
                       catch() { ... } // from try @ 033c367c with catch @ 033c399c */
                    /* catch() { ... } // from try @ 033c3660 with catch @ 033c39a0 */
        if (iVar11 == 0) goto thunk_FUN_01d7db78;
        uVar17 = 0;
        while( true ) {
          plVar4 = *(long **)(lVar5 + 0x20 + uVar17 * 8);
          if (plVar4 == (long *)0x0) goto LAB_033c3de8;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          uVar10 = (uint)uVar17;
          if ((*(uint *)(unaff_x19 + 0x18) <= uVar10) || (*(uint *)(lVar5 + 0x18) <= uVar10))
          goto thunk_FUN_01d7db78;
          uVar6 = FUN_0330c348(*(undefined8 *)(unaff_x25 + uVar17 * 8),
                               *(undefined8 *)(lVar5 + 0x20 + uVar17 * 8),0);
          if ((uVar6 & 1) == 0) {
            uVar13 = *(undefined8 *)StringLiteral_2477;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar13 = FUN_033a87c8(uVar13,0);
            uVar6 = FUN_033aa3b4(plVar4,uVar13,0);
            if ((uVar6 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto thunk_FUN_01d7db78;
              plVar14 = *(long **)(unaff_x25 + uVar17 * 8);
              if (plVar14 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)StringLiteral_6170 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)StringLiteral_6170)) {
                  if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto thunk_FUN_01d7db78;
                  plVar9 = (long *)*plVar16;
                  if (plVar9 == (long *)0x0) goto LAB_033c3bd4;
                  bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)StringLiteral_1554)) goto LAB_033c3bd4;
                  plVar14 = (long *)FUN_0330c7a4(plVar14,plVar9,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30(*unaff_x29);
                  }
                  uVar6 = FUN_033aa3b4(plVar14,0,0);
                  if ((uVar6 & 1) != 0) goto LAB_033c3bd4;
                }
              }
              if (plVar4 == (long *)0x0) goto LAB_033c3de8;
              uVar6 = FUN_033ac7d8(plVar4,0);
              if ((uVar6 & 1) == 0) {
                uVar6 = (**(code **)(*plVar4 + 0x288))
                                  (plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x290));
              }
              else {
                if ((plVar14 == (long *)0x0) ||
                   (lVar7 = (**(code **)(*plVar14 + 0x308))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x310)), lVar7 == 0))
                goto LAB_033c3de8;
                uVar6 = FUN_033ab100(lVar7,0);
                if ((uVar6 & 1) == 0) goto LAB_033c3bd4;
                uVar13 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
                uVar8 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
                if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                }
                uVar6 = FUN_033c3e90(uVar13,uVar8);
              }
              if ((uVar6 & 1) == 0) goto LAB_033c3bd4;
            }
          }
          uVar17 = uVar17 + 1;
          if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar17) break;
          if (*(uint *)(lVar5 + 0x18) <= (uint)uVar17) goto thunk_FUN_01d7db78;
        }
        uVar17 = (ulong)(uVar10 + 1);
LAB_033c3bd4:
        iVar11 = (int)uVar17;
        iVar3 = *(int *)(unaff_x19 + 0x18);
      }
      if (iVar11 == iVar3) {
        uVar10 = *(uint *)(unaff_x20 + 3);
        if (uVar10 <= unaff_w27) goto thunk_FUN_01d7db78;
        lVar5 = *plVar16;
        if (lVar5 != 0) {
          lVar7 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar7 == 0) {
            uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar13,0);
          }
          uVar10 = *(uint *)(unaff_x20 + 3);
        }
        if (uVar10 <= unaff_w23) goto thunk_FUN_01d7db78;
        lVar7 = (long)(int)unaff_w23;
        unaff_x20[lVar7 + 4] = lVar5;
        unaff_w23 = unaff_w23 + 1;
        thunk_FUN_01e10808(unaff_x20 + lVar7 + 4,lVar5);
      }
    }
    unaff_w27 = unaff_w27 + 1;
    uVar10 = (uint)unaff_x20[3];
    if ((int)unaff_w27 < (int)uVar10) {
      in_CY = uVar10 <= unaff_w27;
      goto code_r0x033c3958;
    }
    if (unaff_w23 == 0) {
      return 0;
    }
    if (unaff_w23 == 1) {
      if (uVar10 != 0) goto LAB_033c3dc0;
      goto thunk_FUN_01d7db78;
    }
    if (unaff_x19 == 0) goto LAB_033c3de8;
    lVar5 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,*(undefined4 *)(unaff_x19 + 0x18));
    iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
    if (iVar3 < 1) goto LAB_033c3cc4;
    if (lVar5 != 0) {
      uVar10 = *(uint *)(lVar5 + 0x18);
      uVar17 = 0;
      goto LAB_033c3cac;
    }
  }
LAB_033c3de8:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    *(int *)(lVar5 + 0x20 + uVar17 * 4) = (int)uVar17;
    uVar17 = uVar17 + 1;
    if ((long)iVar3 <= (long)uVar17) break;
LAB_033c3cac:
    if (uVar10 <= uVar17) goto thunk_FUN_01d7db78;
  }
LAB_033c3cc4:
  if ((int)unaff_w23 < 2) {
    uVar10 = 0;
  }
  else {
    lVar7 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar7 + 1U))
      goto thunk_FUN_01d7db78;
      lVar12 = unaff_x20[lVar7 + 5];
      lVar15 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_033c0e28(lVar15,lVar5,0,lVar12,lVar5,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar10 = (int)lVar7 + 1;
      }
      lVar7 = lVar7 + 1;
    } while ((ulong)unaff_w23 - 1 != lVar7);
    if (bVar2) {
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar13 = thunk_FUN_01de27b8();
      uVar8 = thunk_FUN_01dd295c(StringLiteral_6016);
      FUN_033063d0(uVar13,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8819);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,uVar8);
    }
  }
  if (uVar10 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar10;
LAB_033c3dc0:
    return unaff_x20[4];
  }
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


