/*
FUNCTION_NAME: OVRPlugin$$SetDefaultExternalCamera
ENTRY_POINT: 033c161c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetDefaultExternalCamera(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  long unaff_x19;
  uint uVar14;
  long *unaff_x20;
  long unaff_x21;
  uint uVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  long *unaff_x25;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  uint uStack000000000000001c;
  
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033c15a0 with catch @ 033c161c
                        */
  if (unaff_x22 == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      param_1 = *unaff_x20;
    }
                    /* try { // try from 033c1634 to 034c1637 has its CatchHandler @ 033c1644 */
    uVar16 = **(undefined8 **)(param_1 + 0xb8);
                    /* catch() { ... } // from try @ 033c1634 with catch @ 033c1644 */
    uVar4 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8809);
                    /* try { // try from 033c1650 to 034c165b has its CatchHandler @ 033c1670 */
                    /* try { // try from 033c165c to 034c1667 has its CatchHandler @ 033c14fc */
    FUN_0252996c(uVar4,uVar16,*(undefined8 *)StringLiteral_8810,0);
                    /* try { // try from 033c1668 to 034c166f has its CatchHandler @ 033c1670 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033c1650 with catch @ 033c1670
                       catch(type#2 @ 00000000) { ... } // from try @ 033c1668 with catch @ 033c1670
                        */
    puVar5 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    *puVar5 = uVar4;
    thunk_FUN_01e10808(puVar5,uVar4);
  }
  uVar6 = FUN_02093cac();
  if ((uVar6 & 1) == 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar4 = thunk_FUN_01de27b8();
    uVar16 = thunk_FUN_01dd295c(StringLiteral_8813);
    FUN_032870b8(uVar4,uVar16,0);
    uVar16 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar4,uVar16);
  }
  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) {
    uVar4 = thunk_FUN_01dd295c(StringLiteral_8801);
    uVar16 = FUN_033d6e4c(uVar4,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar4 = thunk_FUN_01de27b8();
    uVar11 = thunk_FUN_01dd295c(StringLiteral_1240);
    FUN_03287130(uVar4,uVar16,uVar11,0);
    goto LAB_033c1ed0;
  }
  lVar7 = FUN_033b5440();
  if (lVar7 == 0) {
    plVar8 = (long *)0x0;
    if (unaff_x19 == 0) goto LAB_033c16e0;
LAB_033c16cc:
    uVar14 = *(uint *)(unaff_x19 + 0x18);
    plVar10 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  else {
    uVar4 = *(undefined8 *)StringLiteral_6208;
    plVar8 = (long *)thunk_FUN_01de26bc(lVar7,uVar4);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar7,uVar4);
    }
    if (unaff_x19 != 0) goto LAB_033c16cc;
LAB_033c16e0:
    uVar14 = 0;
    plVar10 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material =
       (undefined *)plVar10;
  if (plVar8 == (long *)0x0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar6 = plVar8[3] & 0xffffffff;
  if ((int)plVar8[3] < 1) {
    uStack000000000000001c = 0;
  }
  else {
    uStack000000000000001c = 0;
    uVar15 = 0;
    uVar20 = 0;
    do {
      if (unaff_x19 == 0) {
LAB_033c1980:
        if (uVar15 == uVar14) {
LAB_033c1988:
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar6 = FUN_033ab18c(unaff_x25,0,0);
          uVar15 = uVar14;
          if ((uVar6 & 1) == 0) {
LAB_033c1b60:
            uVar13 = *(uint *)(plVar8 + 3);
            if (uVar13 <= uVar20) goto LAB_033c1e60;
            lVar7 = plVar8[uVar20 + 4];
            if (lVar7 != 0) {
              lVar18 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar18 == 0) {
                uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                FUN_01d7da3c(uVar4,0);
              }
              uVar13 = (uint)plVar8[3];
            }
            if (uVar13 <= uStack000000000000001c) goto LAB_033c1e60;
            lVar18 = (long)(int)uStack000000000000001c;
            plVar8[lVar18 + 4] = lVar7;
            uStack000000000000001c = uStack000000000000001c + 1;
            thunk_FUN_01e10808(plVar8 + lVar18 + 4,lVar7);
          }
          else {
            if (*(uint *)(plVar8 + 3) <= uVar20) goto LAB_033c1e60;
            plVar19 = plVar8 + uVar20 + 4;
            plVar9 = (long *)*plVar19;
            if ((plVar9 == (long *)0x0) ||
               (lVar7 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230)),
               lVar7 == 0)) goto LAB_033c1e64;
            uVar6 = FUN_033ac7d8(lVar7,0);
            if ((uVar6 & 1) == 0) {
              if (*(uint *)(plVar8 + 3) <= uVar20) goto LAB_033c1e60;
              plVar19 = (long *)*plVar19;
              if ((plVar19 == (long *)0x0) ||
                 (plVar9 = (long *)(**(code **)(*plVar19 + 0x228))
                                             (plVar19,*(undefined8 *)(*plVar19 + 0x230)),
                 plVar9 == (long *)0x0)) goto LAB_033c1e64;
              uVar6 = (**(code **)(*plVar9 + 0x288))
                                (plVar9,unaff_x25,*(undefined8 *)(*plVar9 + 0x290));
joined_r0x033c1b5c:
              if ((uVar6 & 1) != 0) goto LAB_033c1b60;
            }
            else {
              if (unaff_x25 == (long *)0x0) goto LAB_033c1e64;
              plVar9 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                         (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
              if (plVar9 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar9 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)StringLiteral_1157)) {
                  plVar12 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                              (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
                  if (uVar20 < *(uint *)(plVar8 + 3)) {
                    plVar19 = (long *)*plVar19;
                    if ((plVar19 != (long *)0x0) &&
                       (plVar9 = (long *)(**(code **)(*plVar19 + 0x228))
                                                   (plVar19,*(undefined8 *)(*plVar19 + 0x230)),
                       plVar9 != (long *)0x0)) {
                      plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                                 (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                      }
                      lVar7 = *(long *)StringLiteral_1157;
                      if (plVar12 != (long *)0x0) {
                        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar12 + 200) +
                                      (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01d7df0c(plVar12);
                        }
                      }
                      if (plVar9 != (long *)0x0) {
                        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8
                                     + -8) != lVar7)) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
                          FUN_01d7df0c(plVar9);
                        }
                      }
                      uVar6 = FUN_033c1f44(plVar12,plVar9);
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
        if (uVar6 <= uVar20) goto LAB_033c1e60;
        plVar9 = (long *)plVar8[uVar20 + 4];
        if ((plVar9 == (long *)0x0) ||
           (lVar7 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240)),
           lVar7 == 0)) goto LAB_033c1e64;
        uVar13 = (uint)*(undefined8 *)(lVar7 + 0x18);
        if (uVar14 == uVar13) {
          if ((int)uVar14 < 1) {
            uVar15 = 0;
            goto LAB_033c1980;
          }
          if (uVar13 != 0) {
            lVar18 = 0;
            uVar13 = 1;
            while( true ) {
              plVar9 = *(long **)(lVar7 + lVar18 * 8 + 0x20);
              if (plVar9 == (long *)0x0) goto LAB_033c1e64;
              uVar15 = uVar13 - 1;
              plVar9 = (long *)(**(code **)(*plVar9 + 0x1d8))
                                         (plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto LAB_033c1e60;
              plVar19 = (long *)(unaff_x19 + lVar18 * 8 + 0x20);
              lVar18 = *plVar19;
              if (*(int *)(*plVar10 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar6 = FUN_033aa3b4(plVar9,lVar18,0);
              if ((uVar6 & 1) == 0) {
                uVar4 = *(undefined8 *)StringLiteral_2477;
                if (*(int *)(*plVar10 + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar4 = FUN_033a87c8(uVar4,0);
                uVar6 = FUN_033aa3b4(plVar9,uVar4,0);
                if ((uVar6 & 1) == 0) {
                  if (plVar9 == (long *)0x0) goto LAB_033c1e64;
                  uVar6 = FUN_033ac7d8(plVar9,0);
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto LAB_033c1e60;
                  plVar12 = (long *)*plVar19;
                  if ((uVar6 & 1) == 0) {
                    uVar6 = (**(code **)(*plVar9 + 0x288))
                                      (plVar9,plVar12,*(undefined8 *)(*plVar9 + 0x290));
                  }
                  else {
                    if (plVar12 == (long *)0x0) goto LAB_033c1e64;
                    plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                                (plVar12,*(undefined8 *)(*plVar12 + 0x310));
                    if (plVar12 == (long *)0x0) goto LAB_033c1980;
                    bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
                    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)StringLiteral_1157)) goto LAB_033c1980;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto LAB_033c1e60;
                    plVar19 = (long *)*plVar19;
                    if (plVar19 == (long *)0x0) goto LAB_033c1e64;
                    plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                (plVar19,*(undefined8 *)(*plVar19 + 0x310));
                    plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                               (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                    }
                    lVar18 = *(long *)StringLiteral_1157;
                    if (plVar19 != (long *)0x0) {
                      if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8
                                   + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(plVar19);
                      }
                    }
                    if (plVar9 != (long *)0x0) {
                      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8
                                   + -8) != lVar18)) goto LAB_033c1e68;
                    }
                    uVar6 = FUN_033c1f44(plVar19,plVar9);
                  }
                  if ((uVar6 & 1) == 0) goto LAB_033c1980;
                }
              }
              if (uVar14 == uVar13) break;
              lVar18 = (long)(int)uVar13;
              bVar2 = *(uint *)(lVar7 + 0x18) <= uVar13;
              uVar13 = uVar13 + 1;
              if (bVar2) goto LAB_033c1e60;
            }
            goto LAB_033c1988;
          }
          goto LAB_033c1e60;
        }
      }
      uVar6 = (ulong)*(uint *)(plVar8 + 3);
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)(int)*(uint *)(plVar8 + 3));
  }
  if (uStack000000000000001c == 0) {
    lVar7 = 0;
  }
  else {
    if (uStack000000000000001c == 1) {
      if ((int)uVar6 == 0) {
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
    }
    else {
      lVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,uVar14);
      if (0 < (int)uVar14) {
        if (lVar7 == 0) goto LAB_033c1e64;
        uVar15 = *(uint *)(lVar7 + 0x18);
        uVar6 = 0;
        do {
          if (uVar15 <= uVar6) goto LAB_033c1e60;
          *(int *)(lVar7 + 0x20 + uVar6 * 4) = (int)uVar6;
          uVar6 = uVar6 + 1;
        } while (uVar14 != uVar6);
      }
      if ((int)uStack000000000000001c < 2) {
        uVar14 = 0;
      }
      else {
        bVar2 = false;
        uVar15 = 1;
        uVar13 = 0;
        do {
          if (*(uint *)(plVar8 + 3) <= uVar13) goto LAB_033c1e60;
          plVar9 = plVar8 + (long)(int)uVar13 + 4;
          plVar10 = (long *)*plVar9;
          if (plVar10 == (long *)0x0) goto LAB_033c1e64;
          uVar4 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
          if (*(uint *)(plVar8 + 3) <= uVar15) goto LAB_033c1e60;
          plVar19 = plVar8 + (long)(int)uVar15 + 4;
          plVar10 = (long *)*plVar19;
          if (plVar10 == (long *)0x0) goto LAB_033c1e64;
          uVar16 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
          }
          iVar3 = FUN_033c2168(uVar4,uVar16,unaff_x25);
          if ((unaff_x19 != 0) && (iVar3 == 0)) {
            if (*(uint *)(plVar8 + 3) <= uVar13) goto LAB_033c1e60;
            plVar10 = (long *)*plVar9;
            if (plVar10 == (long *)0x0) goto LAB_033c1e64;
            uVar4 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (*(uint *)(plVar8 + 3) <= uVar15) goto LAB_033c1e60;
            plVar10 = (long *)*plVar19;
            if (plVar10 == (long *)0x0) goto LAB_033c1e64;
            uVar16 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
            }
            iVar3 = FUN_033c2504(uVar4,lVar7,0,uVar16,lVar7,0);
          }
          if (iVar3 == 0) {
            if ((*(uint *)(plVar8 + 3) <= uVar13) || (*(uint *)(plVar8 + 3) <= uVar15))
            goto LAB_033c1e60;
            lVar18 = *plVar9;
            lVar17 = *plVar19;
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            iVar3 = FUN_033c2954(lVar18,lVar17);
            bVar2 = (bool)(bVar2 | iVar3 == 0);
          }
          uVar14 = uVar15;
          if (iVar3 != 2) {
            uVar14 = uVar13;
          }
          uVar15 = uVar15 + 1;
          bVar2 = (bool)(bVar2 & iVar3 != 2);
          uVar13 = uVar14;
        } while (uStack000000000000001c != uVar15);
        if (bVar2) {
          uVar4 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar16 = FUN_033d6e4c(uVar4,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar4 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar4,uVar16,0);
LAB_033c1ed0:
          uVar16 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar4,uVar16);
        }
      }
      if (*(uint *)(plVar8 + 3) <= uVar14) goto LAB_033c1e60;
      plVar8 = plVar8 + (int)uVar14;
    }
    lVar7 = plVar8[4];
  }
  return lVar7;
}


