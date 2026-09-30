/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 033c3824
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__set_foveatedRenderingLevel(void)

{
  byte bVar1;
  bool bVar2;
  undefined1 in_CY;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar13;
  int iVar14;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long unaff_x24;
  long *plVar20;
  long unaff_x25;
  uint uVar21;
  uint uVar22;
  undefined *puVar12;
  
  while (!(bool)in_CY) {
    plVar4 = *(long **)(unaff_x25 + unaff_x24 * 8);
                    /* try { // try from 033c3840 to 034c386f has its CatchHandler @ 033c39b8 */
    if ((plVar4 == (long *)0x0) ||
       (lVar5 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310)),
       unaff_x19 == (long *)0x0)) goto LAB_033c3de8;
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*unaff_x19 + 0x40)), lVar6 == 0))
    goto LAB_033c3e48;
    uVar19 = (uint)unaff_x24;
    if (*(uint *)(unaff_x19 + 3) <= uVar19) break;
                    /* try { // try from 033c3874 to 034c38ab has its CatchHandler @ 033c398c */
    *unaff_x22 = lVar5;
    thunk_FUN_01e10808(unaff_x22,lVar5);
    if (*(uint *)(unaff_x19 + 3) <= uVar19) break;
    if (*unaff_x22 == 0) goto LAB_033c3de8;
    uVar7 = FUN_033ab100(*unaff_x22,0);
    if ((uVar7 & 1) == 0) {
      if (uVar19 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 033c38ac to 034c38ff has its CatchHandler @ 033c31f0 */
        if ((long *)*unaff_x22 != (long *)0x0) {
          lVar5 = *(long *)*unaff_x22;
          bVar1 = *(byte *)(*(long *)StringLiteral_6170 + 0x130);
          if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)StringLiteral_6170)) goto LAB_033c38e4;
        }
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar15 = thunk_FUN_01de27b8();
        uVar10 = thunk_FUN_01dd295c(StringLiteral_6098);
        puVar12 = StringLiteral_8502;
LAB_033c3e18:
        uVar11 = thunk_FUN_01dd295c(puVar12);
        FUN_03287130(uVar15,uVar10,uVar11,0);
        goto LAB_033c3e30;
      }
      break;
    }
LAB_033c38e4:
    unaff_x24 = unaff_x24 + 1;
    unaff_x22 = unaff_x22 + 1;
    if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)(uint)unaff_x24) {
                    /* try { // try from 033c3900 to 034c3903 has its CatchHandler @ 033c39b4 */
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar15 = thunk_FUN_01de27b8();
        uVar10 = thunk_FUN_01dd295c(StringLiteral_8801);
        puVar12 = StringLiteral_1240;
        goto LAB_033c3e18;
      }
                    /* try { // try from 033c3904 to 034c3907 has its CatchHandler @ 033c39b0 */
                    /* try { // try from 033c3908 to 034c390b has its CatchHandler @ 033c39ac */
                    /* try { // try from 033c390c to 034c3987 has its CatchHandler @ 033c31f0 */
      lVar5 = FUN_033b5440();
      if (lVar5 == 0) goto LAB_033c3de8;
      uVar15 = *(undefined8 *)StringLiteral_8768;
      plVar4 = (long *)thunk_FUN_01de26bc(lVar5,uVar15);
      puVar12 = 
      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar5,uVar15);
      }
      lVar5 = plVar4[3];
      if ((int)lVar5 < 1) goto LAB_033c3c68;
      uVar19 = 0;
      uVar22 = 0;
      goto LAB_033c3954;
    }
    in_CY = *(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x24;
  }
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
LAB_033c3954:
  do {
    if ((uint)lVar5 <= uVar22) goto thunk_FUN_01d7db78;
    plVar20 = plVar4 + (long)(int)uVar22 + 4;
    plVar8 = (long *)*plVar20;
    if (((plVar8 == (long *)0x0) ||
        (lVar5 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0)), lVar5 == 0
        )) || (unaff_x19 == (long *)0x0)) goto LAB_033c3de8;
    iVar3 = (int)unaff_x19[3];
    iVar14 = (int)*(undefined8 *)(lVar5 + 0x18);
    if (iVar14 == iVar3) {
      if (iVar14 < 1) {
        iVar14 = 0;
      }
      else {
        if (iVar14 == 0) goto thunk_FUN_01d7db78;
        uVar7 = 0;
        while( true ) {
          plVar8 = *(long **)(lVar5 + 0x20 + uVar7 * 8);
          if (plVar8 == (long *)0x0) goto LAB_033c3de8;
          plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
          uVar21 = (uint)uVar7;
          if ((*(uint *)(unaff_x19 + 3) <= uVar21) || (*(uint *)(lVar5 + 0x18) <= uVar21))
          goto thunk_FUN_01d7db78;
          uVar9 = FUN_0330c348(unaff_x19[uVar7 + 4],*(undefined8 *)(lVar5 + 0x20 + uVar7 * 8),0);
          if ((uVar9 & 1) == 0) {
            uVar15 = *(undefined8 *)StringLiteral_2477;
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar15 = FUN_033a87c8(uVar15,0);
            uVar9 = FUN_033aa3b4(plVar8,uVar15,0);
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 3) <= uVar21) goto thunk_FUN_01d7db78;
              plVar17 = (long *)unaff_x19[uVar7 + 4];
              if (plVar17 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)StringLiteral_6170 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar17 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)StringLiteral_6170)) {
                  if (*(uint *)(plVar4 + 3) <= uVar22) goto thunk_FUN_01d7db78;
                  plVar13 = (long *)*plVar20;
                  if (plVar13 == (long *)0x0) goto LAB_033c3bd4;
                  bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
                  if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)StringLiteral_1554)) goto LAB_033c3bd4;
                  plVar17 = (long *)FUN_0330c7a4(plVar17,plVar13,0);
                  lVar6 = *(long *)puVar12;
                  if (*(int *)(lVar6 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30(lVar6);
                  }
                  uVar9 = FUN_033aa3b4(plVar17,0,0);
                  if ((uVar9 & 1) != 0) goto LAB_033c3bd4;
                }
              }
              if (plVar8 == (long *)0x0) goto LAB_033c3de8;
              uVar9 = FUN_033ac7d8(plVar8,0);
              if ((uVar9 & 1) == 0) {
                uVar9 = (**(code **)(*plVar8 + 0x288))
                                  (plVar8,plVar17,*(undefined8 *)(*plVar8 + 0x290));
              }
              else {
                if ((plVar17 == (long *)0x0) ||
                   (lVar6 = (**(code **)(*plVar17 + 0x308))
                                      (plVar17,*(undefined8 *)(*plVar17 + 0x310)), lVar6 == 0))
                goto LAB_033c3de8;
                uVar9 = FUN_033ab100(lVar6,0);
                if ((uVar9 & 1) == 0) goto LAB_033c3bd4;
                uVar15 = (**(code **)(*plVar17 + 0x308))(plVar17,*(undefined8 *)(*plVar17 + 0x310));
                uVar10 = (**(code **)(*plVar8 + 0x308))(plVar8,*(undefined8 *)(*plVar8 + 0x310));
                if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                }
                uVar9 = FUN_033c3e90(uVar15,uVar10);
              }
              if ((uVar9 & 1) == 0) goto LAB_033c3bd4;
            }
          }
          uVar7 = uVar7 + 1;
          if ((int)unaff_x19[3] <= (int)(uint)uVar7) break;
          if (*(uint *)(lVar5 + 0x18) <= (uint)uVar7) goto thunk_FUN_01d7db78;
        }
        uVar7 = (ulong)(uVar21 + 1);
LAB_033c3bd4:
        iVar14 = (int)uVar7;
        iVar3 = (int)unaff_x19[3];
      }
      if (iVar14 == iVar3) {
        uVar21 = *(uint *)(plVar4 + 3);
        if (uVar21 <= uVar22) goto thunk_FUN_01d7db78;
        lVar5 = *plVar20;
        if (lVar5 != 0) {
          lVar6 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar6 == 0) {
LAB_033c3e48:
            uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar15,0);
          }
          uVar21 = *(uint *)(plVar4 + 3);
        }
        if (uVar21 <= uVar19) goto thunk_FUN_01d7db78;
        lVar6 = (long)(int)uVar19;
        plVar4[lVar6 + 4] = lVar5;
        uVar19 = uVar19 + 1;
        thunk_FUN_01e10808(plVar4 + lVar6 + 4,lVar5);
      }
    }
    lVar5 = plVar4[3];
    uVar22 = uVar22 + 1;
  } while ((int)uVar22 < (int)lVar5);
  if (uVar19 == 0) {
LAB_033c3c68:
    lVar5 = 0;
  }
  else {
    if (uVar19 == 1) {
      if ((int)lVar5 == 0) goto thunk_FUN_01d7db78;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
LAB_033c3de8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar5 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,(int)unaff_x19[3]);
      lVar6 = unaff_x19[3];
      if (0 < (int)lVar6) {
        if (lVar5 == 0) goto LAB_033c3de8;
        uVar22 = *(uint *)(lVar5 + 0x18);
        uVar7 = 0;
        do {
          if (uVar22 <= uVar7) goto thunk_FUN_01d7db78;
          *(int *)(lVar5 + 0x20 + uVar7 * 4) = (int)uVar7;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)lVar6);
      }
      if ((int)uVar19 < 2) {
        uVar22 = 0;
      }
      else {
        lVar6 = 0;
        uVar22 = 0;
        bVar2 = false;
        do {
          if (((uint)plVar4[3] <= uVar22) || ((plVar4[3] & 0xffffffffU) <= lVar6 + 1U))
          goto thunk_FUN_01d7db78;
          lVar16 = plVar4[lVar6 + 5];
          lVar18 = plVar4[(long)(int)uVar22 + 4];
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          iVar3 = FUN_033c0e28(lVar18,lVar5,0,lVar16,lVar5,0);
          if (iVar3 == 0) {
            bVar2 = true;
          }
          else if (iVar3 == 2) {
            bVar2 = false;
            uVar22 = (int)lVar6 + 1;
          }
          lVar6 = lVar6 + 1;
        } while ((ulong)uVar19 - 1 != lVar6);
        if (bVar2) {
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar15 = thunk_FUN_01de27b8();
          uVar10 = thunk_FUN_01dd295c(StringLiteral_6016);
          FUN_033063d0(uVar15,uVar10,0);
LAB_033c3e30:
          uVar10 = thunk_FUN_01dd295c(StringLiteral_8819);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar15,uVar10);
        }
      }
      if (*(uint *)(plVar4 + 3) <= uVar22) goto thunk_FUN_01d7db78;
      plVar4 = plVar4 + (int)uVar22;
    }
    lVar5 = plVar4[4];
  }
  return lVar5;
}


