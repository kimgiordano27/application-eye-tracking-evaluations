/*
FUNCTION_NAME: OVRPlugin$$ResetDefaultExternalCamera
ENTRY_POINT: 033c155c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__ResetDefaultExternalCamera
               (ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long *param_5,
               long param_6)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  long unaff_x20;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  uint uStack000000000000001c;
  
                    /* try { // try from 033c1564 to 034c1573 has its CatchHandler @ 033c1618 */
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_8808);
                    /* try { // try from 033c1578 to 034c157b has its CatchHandler @ 033c1614 */
    FUN_01d7d918(StringLiteral_8523);
                    /* try { // try from 033c158c to 034c158f has its CatchHandler @ 033c160c */
    FUN_01d7d918(StringLiteral_151);
    FUN_01d7d918(StringLiteral_8809);
                    /* try { // try from 033c15a0 to 034c15bf has its CatchHandler @ 033c161c */
    FUN_01d7d918(StringLiteral_6208);
    FUN_01d7d918(StringLiteral_2477);
    FUN_01d7d918(StringLiteral_1157);
                    /* try { // try from 033c15c0 to 034c1607 has its CatchHandler @ 033c14fc */
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_8810);
    FUN_01d7d918(StringLiteral_8811);
    *(undefined1 *)(unaff_x20 + 0x993) = 1;
  }
  puVar3 = StringLiteral_8811;
  if (param_6 != 0) {
    lVar6 = *(long *)StringLiteral_8811;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
                    /* try { // try from 033c1608 to 034c160b has its CatchHandler @ 033c1610 */
      lVar6 = *(long *)puVar3;
    }
    puVar2 = StringLiteral_8808;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c158c with catch @ 033c160c
                       try { // try from 033c160c to 034c1633 has its CatchHandler @ 033c14fc */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c1608 with catch @ 033c1610
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c1578 with catch @ 033c1614
                        */
    lVar17 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c1564 with catch @ 033c1618
                        */
    if (lVar17 == 0) {
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar6 = *(long *)puVar3;
      }
      uVar18 = **(undefined8 **)(lVar6 + 0xb8);
      lVar17 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8809);
      FUN_0252996c(lVar17,uVar18,*(undefined8 *)StringLiteral_8810,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar7 = lVar17;
      thunk_FUN_01e10808(plVar7,lVar17);
    }
    uVar8 = FUN_02093cac(param_6,lVar17,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      thunk_FUN_01dd295c(StringLiteral_1111);
      uVar18 = thunk_FUN_01de27b8();
      uVar11 = thunk_FUN_01dd295c(StringLiteral_8813);
      FUN_032870b8(uVar18,uVar11,0);
      uVar11 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar18,uVar11);
    }
  }
  if ((param_4 == 0) || (*(long *)(param_4 + 0x18) == 0)) {
    uVar18 = thunk_FUN_01dd295c(StringLiteral_8801);
    uVar11 = FUN_033d6e4c(uVar18,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar18 = thunk_FUN_01de27b8();
    uVar12 = thunk_FUN_01dd295c(StringLiteral_1240);
    FUN_03287130(uVar18,uVar11,uVar12,0);
    goto LAB_033c1ed0;
  }
  lVar6 = FUN_033b5440(param_4,0);
  if (lVar6 == 0) {
    plVar7 = (long *)0x0;
    if (param_6 == 0) goto LAB_033c16e0;
LAB_033c16cc:
    uVar15 = *(uint *)(param_6 + 0x18);
    plVar10 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  else {
    uVar18 = *(undefined8 *)StringLiteral_6208;
    plVar7 = (long *)thunk_FUN_01de26bc(lVar6,uVar18);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar6,uVar18);
    }
    if (param_6 != 0) goto LAB_033c16cc;
LAB_033c16e0:
    uVar15 = 0;
    plVar10 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material =
       (undefined *)plVar10;
  if (plVar7 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar8 = plVar7[3] & 0xffffffff;
  if ((int)plVar7[3] < 1) {
    uStack000000000000001c = 0;
  }
  else {
    uStack000000000000001c = 0;
    uVar16 = 0;
    uVar21 = 0;
    do {
      if (param_6 == 0) {
LAB_033c1980:
        if (uVar16 == uVar15) {
LAB_033c1988:
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar8 = FUN_033ab18c(param_5,0,0);
          uVar16 = uVar15;
          if ((uVar8 & 1) == 0) {
LAB_033c1b60:
            uVar14 = *(uint *)(plVar7 + 3);
            if (uVar14 <= uVar21) goto LAB_033c1e60;
            lVar6 = plVar7[uVar21 + 4];
            if (lVar6 != 0) {
              lVar17 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar17 == 0) {
                uVar18 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                FUN_01d7da3c(uVar18,0);
              }
              uVar14 = (uint)plVar7[3];
            }
            if (uVar14 <= uStack000000000000001c) goto LAB_033c1e60;
            lVar17 = (long)(int)uStack000000000000001c;
            plVar7[lVar17 + 4] = lVar6;
            uStack000000000000001c = uStack000000000000001c + 1;
            thunk_FUN_01e10808(plVar7 + lVar17 + 4,lVar6);
          }
          else {
            if (*(uint *)(plVar7 + 3) <= uVar21) goto LAB_033c1e60;
            plVar20 = plVar7 + uVar21 + 4;
            plVar9 = (long *)*plVar20;
            if ((plVar9 == (long *)0x0) ||
               (lVar6 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230)),
               lVar6 == 0)) goto LAB_033c1e64;
            uVar8 = FUN_033ac7d8(lVar6,0);
            if ((uVar8 & 1) == 0) {
              if (*(uint *)(plVar7 + 3) <= uVar21) goto LAB_033c1e60;
              plVar20 = (long *)*plVar20;
              if ((plVar20 == (long *)0x0) ||
                 (plVar9 = (long *)(**(code **)(*plVar20 + 0x228))
                                             (plVar20,*(undefined8 *)(*plVar20 + 0x230)),
                 plVar9 == (long *)0x0)) goto LAB_033c1e64;
              uVar8 = (**(code **)(*plVar9 + 0x288))
                                (plVar9,param_5,*(undefined8 *)(*plVar9 + 0x290));
joined_r0x033c1b5c:
              if ((uVar8 & 1) != 0) goto LAB_033c1b60;
            }
            else {
              if (param_5 == (long *)0x0) goto LAB_033c1e64;
              plVar9 = (long *)(**(code **)(*param_5 + 0x308))
                                         (param_5,*(undefined8 *)(*param_5 + 0x310));
              if (plVar9 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)StringLiteral_1157)) {
                  plVar13 = (long *)(**(code **)(*param_5 + 0x308))
                                              (param_5,*(undefined8 *)(*param_5 + 0x310));
                  if (uVar21 < *(uint *)(plVar7 + 3)) {
                    plVar20 = (long *)*plVar20;
                    if ((plVar20 != (long *)0x0) &&
                       (plVar9 = (long *)(**(code **)(*plVar20 + 0x228))
                                                   (plVar20,*(undefined8 *)(*plVar20 + 0x230)),
                       plVar9 != (long *)0x0)) {
                      plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                                 (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                      }
                      lVar6 = *(long *)StringLiteral_1157;
                      if (plVar13 != (long *)0x0) {
                        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar13 + 200) +
                                      (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01d7df0c(plVar13);
                        }
                      }
                      if (plVar9 != (long *)0x0) {
                        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8
                                     + -8) != lVar6)) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
                          FUN_01d7df0c(plVar9);
                        }
                      }
                      uVar8 = FUN_033c1f44(plVar13,plVar9);
                      goto joined_r0x033c1b5c;
                    }
                    goto LAB_033c1e64;
                  }
                  goto LAB_033c1e60;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar8 <= uVar21) goto LAB_033c1e60;
        plVar9 = (long *)plVar7[uVar21 + 4];
        if ((plVar9 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           lVar6 == 0)) goto LAB_033c1e64;
        uVar14 = (uint)*(undefined8 *)(lVar6 + 0x18);
        if (uVar15 == uVar14) {
          if ((int)uVar15 < 1) {
            uVar16 = 0;
            goto LAB_033c1980;
          }
          if (uVar14 != 0) {
            lVar17 = 0;
            uVar14 = 1;
            while( true ) {
              plVar9 = *(long **)(lVar6 + lVar17 * 8 + 0x20);
              if (plVar9 == (long *)0x0) goto LAB_033c1e64;
              uVar16 = uVar14 - 1;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (*(uint *)(param_6 + 0x18) <= uVar16) goto LAB_033c1e60;
              plVar20 = (long *)(param_6 + lVar17 * 8 + 0x20);
              lVar17 = *plVar20;
              if (*(int *)(*plVar10 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar8 = FUN_033aa3b4(plVar9,lVar17,0);
              if ((uVar8 & 1) == 0) {
                uVar18 = *(undefined8 *)StringLiteral_2477;
                if (*(int *)(*plVar10 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar18 = FUN_033a87c8(uVar18,0);
                uVar8 = FUN_033aa3b4(plVar9,uVar18,0);
                if ((uVar8 & 1) == 0) {
                  if (plVar9 == (long *)0x0) goto LAB_033c1e64;
                  uVar8 = FUN_033ac7d8(plVar9,0);
                  if (*(uint *)(param_6 + 0x18) <= uVar16) goto LAB_033c1e60;
                  plVar13 = (long *)*plVar20;
                  if ((uVar8 & 1) == 0) {
                    uVar8 = (**(code **)(*plVar9 + 0x288))
                                      (plVar9,plVar13,*(undefined8 *)(*plVar9 + 0x290));
                  }
                  else {
                    if (plVar13 == (long *)0x0) goto LAB_033c1e64;
                    plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x310));
                    if (plVar13 == (long *)0x0) goto LAB_033c1980;
                    bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
                    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)StringLiteral_1157)) goto LAB_033c1980;
                    if (*(uint *)(param_6 + 0x18) <= uVar16) goto LAB_033c1e60;
                    plVar20 = (long *)*plVar20;
                    if (plVar20 == (long *)0x0) goto LAB_033c1e64;
                    plVar20 = (long *)(**(code **)(*plVar20 + 0x308))
                                                (plVar20,*(undefined8 *)(*plVar20 + 0x310));
                    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                               (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                    }
                    lVar17 = *(long *)StringLiteral_1157;
                    if (plVar20 != (long *)0x0) {
                      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8
                                   + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(plVar20);
                      }
                    }
                    if (plVar9 != (long *)0x0) {
                      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar17 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar17 + 0x130) * 8
                                   + -8) != lVar17)) goto LAB_033c1e68;
                    }
                    uVar8 = FUN_033c1f44(plVar20,plVar9);
                  }
                  if ((uVar8 & 1) == 0) goto LAB_033c1980;
                }
              }
              if (uVar15 == uVar14) break;
              lVar17 = (long)(int)uVar14;
              bVar4 = *(uint *)(lVar6 + 0x18) <= uVar14;
              uVar14 = uVar14 + 1;
              if (bVar4) goto LAB_033c1e60;
            }
            goto LAB_033c1988;
          }
          goto LAB_033c1e60;
        }
      }
      uVar8 = (ulong)*(uint *)(plVar7 + 3);
      uVar21 = uVar21 + 1;
    } while ((long)uVar21 < (long)(int)*(uint *)(plVar7 + 3));
  }
  if (uStack000000000000001c == 0) {
    lVar6 = 0;
  }
  else {
    if (uStack000000000000001c == 1) {
      if ((int)uVar8 == 0) {
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
    }
    else {
      lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar15);
      if (0 < (int)uVar15) {
        if (lVar6 == 0) goto LAB_033c1e64;
        uVar16 = *(uint *)(lVar6 + 0x18);
        uVar8 = 0;
        do {
          if (uVar16 <= uVar8) goto LAB_033c1e60;
          *(int *)(lVar6 + 0x20 + uVar8 * 4) = (int)uVar8;
          uVar8 = uVar8 + 1;
        } while (uVar15 != uVar8);
      }
      if ((int)uStack000000000000001c < 2) {
        uVar15 = 0;
      }
      else {
        bVar4 = false;
        uVar16 = 1;
        uVar14 = 0;
        do {
          if (*(uint *)(plVar7 + 3) <= uVar14) goto LAB_033c1e60;
          plVar9 = plVar7 + (long)(int)uVar14 + 4;
          plVar10 = (long *)*plVar9;
          if (plVar10 == (long *)0x0) goto LAB_033c1e64;
          uVar18 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
          if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_033c1e60;
          plVar20 = plVar7 + (long)(int)uVar16 + 4;
          plVar10 = (long *)*plVar20;
          if (plVar10 == (long *)0x0) goto LAB_033c1e64;
          uVar11 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
          }
          iVar5 = FUN_033c2168(uVar18,uVar11,param_5);
          if ((param_6 != 0) && (iVar5 == 0)) {
            if (*(uint *)(plVar7 + 3) <= uVar14) goto LAB_033c1e60;
            plVar10 = (long *)*plVar9;
            if (plVar10 == (long *)0x0) goto LAB_033c1e64;
            uVar18 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (*(uint *)(plVar7 + 3) <= uVar16) goto LAB_033c1e60;
            plVar10 = (long *)*plVar20;
            if (plVar10 == (long *)0x0) goto LAB_033c1e64;
            uVar11 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
            }
            iVar5 = FUN_033c2504(uVar18,lVar6,0,uVar11,lVar6,0,param_6,0);
          }
          if (iVar5 == 0) {
            if ((*(uint *)(plVar7 + 3) <= uVar14) || (*(uint *)(plVar7 + 3) <= uVar16))
            goto LAB_033c1e60;
            lVar17 = *plVar9;
            lVar19 = *plVar20;
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            iVar5 = FUN_033c2954(lVar17,lVar19);
            bVar4 = (bool)(bVar4 | iVar5 == 0);
          }
          uVar15 = uVar16;
          if (iVar5 != 2) {
            uVar15 = uVar14;
          }
          uVar16 = uVar16 + 1;
          bVar4 = (bool)(bVar4 & iVar5 != 2);
          uVar14 = uVar15;
        } while (uStack000000000000001c != uVar16);
        if (bVar4) {
          uVar18 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar11 = FUN_033d6e4c(uVar18,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar18 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar18,uVar11,0);
LAB_033c1ed0:
          uVar11 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar18,uVar11);
        }
      }
      if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_033c1e60;
      plVar7 = plVar7 + (int)uVar15;
    }
    lVar6 = plVar7[4];
  }
  return lVar6;
}


