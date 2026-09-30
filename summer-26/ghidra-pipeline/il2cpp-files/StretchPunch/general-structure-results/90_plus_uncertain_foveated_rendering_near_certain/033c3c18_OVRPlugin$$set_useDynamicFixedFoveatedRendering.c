/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 033c3c18
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


long OVRPlugin__set_useDynamicFixedFoveatedRendering(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint in_w8;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar13;
  uint unaff_w23;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long unaff_x25;
  long lVar17;
  uint unaff_w27;
  long *unaff_x29;
  
  while (unaff_w23 < in_w8) {
    lVar6 = (long)(int)unaff_w23;
    unaff_x20[lVar6 + 4] = unaff_x21;
    unaff_w23 = unaff_w23 + 1;
    thunk_FUN_01e10808(unaff_x20 + lVar6 + 4,unaff_x21);
    do {
      do {
        unaff_w27 = unaff_w27 + 1;
        uVar10 = (uint)unaff_x20[3];
        if ((int)uVar10 <= (int)unaff_w27) {
          if (unaff_w23 == 0) {
            return 0;
          }
          if (unaff_w23 == 1) {
            if (uVar10 != 0) goto LAB_033c3dc0;
            goto thunk_FUN_01d7db78;
          }
          if (unaff_x19 != 0) {
            lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,*(undefined4 *)(unaff_x19 + 0x18))
            ;
            iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
            if (iVar3 < 1) goto LAB_033c3cc4;
            if (lVar6 != 0) {
              uVar10 = *(uint *)(lVar6 + 0x18);
              uVar11 = 0;
              goto LAB_033c3cac;
            }
          }
LAB_033c3de8:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (uVar10 <= unaff_w27) goto thunk_FUN_01d7db78;
        plVar16 = unaff_x20 + (long)(int)unaff_w27 + 4;
        plVar4 = (long *)*plVar16;
        if (((plVar4 == (long *)0x0) ||
            (lVar6 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0)),
            lVar6 == 0)) || (unaff_x19 == 0)) goto LAB_033c3de8;
        iVar3 = *(int *)(unaff_x19 + 0x18);
        iVar12 = (int)*(undefined8 *)(lVar6 + 0x18);
      } while (iVar12 != iVar3);
      if (iVar12 < 1) {
        iVar12 = 0;
      }
      else {
        if (iVar12 == 0) goto thunk_FUN_01d7db78;
        uVar11 = 0;
        while( true ) {
          plVar4 = *(long **)(lVar6 + 0x20 + uVar11 * 8);
          if (plVar4 == (long *)0x0) goto LAB_033c3de8;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          uVar10 = (uint)uVar11;
          if ((*(uint *)(unaff_x19 + 0x18) <= uVar10) || (*(uint *)(lVar6 + 0x18) <= uVar10))
          goto thunk_FUN_01d7db78;
          uVar5 = FUN_0330c348(*(undefined8 *)(unaff_x25 + uVar11 * 8),
                               *(undefined8 *)(lVar6 + 0x20 + uVar11 * 8),0);
          if ((uVar5 & 1) == 0) {
            uVar7 = *(undefined8 *)StringLiteral_2477;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar7 = FUN_033a87c8(uVar7,0);
            uVar5 = FUN_033aa3b4(plVar4,uVar7,0);
            if ((uVar5 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto thunk_FUN_01d7db78;
              plVar14 = *(long **)(unaff_x25 + uVar11 * 8);
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
                  uVar5 = FUN_033aa3b4(plVar14,0,0);
                  if ((uVar5 & 1) != 0) goto LAB_033c3bd4;
                }
              }
              if (plVar4 == (long *)0x0) goto LAB_033c3de8;
              uVar5 = FUN_033ac7d8(plVar4,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = (**(code **)(*plVar4 + 0x288))
                                  (plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x290));
              }
              else {
                if ((plVar14 == (long *)0x0) ||
                   (lVar17 = (**(code **)(*plVar14 + 0x308))
                                       (plVar14,*(undefined8 *)(*plVar14 + 0x310)), lVar17 == 0))
                goto LAB_033c3de8;
                uVar5 = FUN_033ab100(lVar17,0);
                if ((uVar5 & 1) == 0) goto LAB_033c3bd4;
                uVar7 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
                uVar8 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
                if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                }
                uVar5 = FUN_033c3e90(uVar7,uVar8);
              }
              if ((uVar5 & 1) == 0) goto LAB_033c3bd4;
            }
          }
          uVar11 = uVar11 + 1;
          if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar11) break;
          if (*(uint *)(lVar6 + 0x18) <= (uint)uVar11) goto thunk_FUN_01d7db78;
        }
        uVar11 = (ulong)(uVar10 + 1);
LAB_033c3bd4:
        iVar12 = (int)uVar11;
        iVar3 = *(int *)(unaff_x19 + 0x18);
      }
    } while (iVar12 != iVar3);
    in_w8 = *(uint *)(unaff_x20 + 3);
    if (in_w8 <= unaff_w27) break;
    unaff_x21 = *plVar16;
    if (unaff_x21 != 0) {
      lVar6 = thunk_FUN_01de26bc(unaff_x21,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar6 == 0) {
        uVar7 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,0);
      }
      in_w8 = *(uint *)(unaff_x20 + 3);
    }
  }
  goto thunk_FUN_01d7db78;
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar11 * 4) = (int)uVar11;
    uVar11 = uVar11 + 1;
    if ((long)iVar3 <= (long)uVar11) break;
LAB_033c3cac:
    if (uVar10 <= uVar11) goto thunk_FUN_01d7db78;
  }
LAB_033c3cc4:
  if ((int)unaff_w23 < 2) {
    uVar10 = 0;
  }
  else {
    lVar17 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar17 + 1U))
      goto thunk_FUN_01d7db78;
      lVar13 = unaff_x20[lVar17 + 5];
      lVar15 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_033c0e28(lVar15,lVar6,0,lVar13,lVar6,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar10 = (int)lVar17 + 1;
      }
      lVar17 = lVar17 + 1;
    } while ((ulong)unaff_w23 - 1 != lVar17);
    if (bVar2) {
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar7 = thunk_FUN_01de27b8();
      uVar8 = thunk_FUN_01dd295c(StringLiteral_6016);
      FUN_033063d0(uVar7,uVar8,0);
      uVar8 = thunk_FUN_01dd295c(StringLiteral_8819);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar7,uVar8);
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


