/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsState
ENTRY_POINT: 033bf07c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__GetControllerHapticsState(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar18;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar19;
  long *unaff_x28;
  long lVar20;
  long lVar21;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x033bf07c:
  uVar6 = *(uint *)(param_1 + 0x18);
LAB_033bf080:
  if ((int)uVar6 < 1) {
    uVar7 = 0;
  }
  else {
                    /* try { // try from 033bf088 to 034bf0c7 has its CatchHandler @ 033bf088
                       catch() { ... } // from try @ 033bf088 with catch @ 033bf088
                       catch() { ... } // from try @ 033bf0d4 with catch @ 033bf088
                       catch() { ... } // from try @ 033bf104 with catch @ 033bf088
                       catch() { ... } // from try @ 033bf140 with catch @ 033bf088 */
    uVar15 = 0;
    plVar16 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar15) goto LAB_033bfa24;
      lVar20 = (long)(int)uVar15;
      plVar8 = *(long **)(unaff_x27 + lVar20 * 8 + 0x20);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
         plVar8 == (long *)0x0)) goto LAB_033bec5c;
                    /* try { // try from 033bf0c8 to 034bf0d3 has its CatchHandler @ 033bf0e8 */
      uVar9 = FUN_033ac048(plVar8,0);
      if ((uVar9 & 1) != 0) {
                    /* try { // try from 033bf0d4 to 034bf0ff has its CatchHandler @ 033bf088 */
        plVar8 = (long *)(**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
      }
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bf0c8 with catch @ 033bf0e8
                        */
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
      lVar13 = *plVar16;
      if (lVar13 == 0) goto LAB_033bec5c;
                    /* try { // try from 033bf100 to 034bf103 has its CatchHandler @ 033bf130 */
                    /* try { // try from 033bf104 to 034bf133 has its CatchHandler @ 033bf088 */
      if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
      if (unaff_x26 == 0) goto LAB_033bec5c;
      uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
      uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
                    /* catch() { ... } // from try @ 033bf100 with catch @ 033bf130 */
                    /* try { // try from 033bf134 to 034bf13f has its CatchHandler @ 033bf154 */
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar9 = FUN_033aa3b4(plVar8,uVar17,0);
      if ((uVar9 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
          lVar13 = *plVar16;
          if (lVar13 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
          lVar14 = *in_stack_00000058;
          if (lVar14 == 0) goto LAB_033bec5c;
          uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
          if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
          lVar13 = *unaff_x22;
          lVar14 = *(long *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar13 = *unaff_x22;
          }
          if (lVar14 == *(long *)(*(long *)(lVar13 + 0xb8) + 0x18)) goto LAB_033bf488;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
        lVar13 = *plVar16;
        if (lVar13 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
        lVar14 = *in_stack_00000058;
        if (lVar14 == 0) goto LAB_033bec5c;
        uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
        if (*(long *)(lVar14 + (long)(int)uVar7 * 8 + 0x20) != 0) {
          uVar17 = *(undefined8 *)StringLiteral_2477;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar17 = FUN_033a87c8(uVar17,0);
          uVar9 = FUN_033aa3b4(plVar8,uVar17,0);
          if ((uVar9 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_033bec5c;
            uVar9 = FUN_033ac7d8(plVar8,0);
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
            lVar13 = *plVar16;
            if (lVar13 == 0) goto LAB_033bec5c;
            if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
               (uVar7 = *(uint *)(lVar13 + lVar20 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7)
               ) goto LAB_033bfa24;
            uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar10 = FUN_033aa3b4(uVar17,0,0);
            unaff_x22 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            uVar7 = uVar15;
            if ((uVar9 & 1) == 0) {
              if ((uVar10 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                lVar13 = *plVar16;
                if (lVar13 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                   (uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                uVar9 = (**(code **)(*plVar8 + 0x288))
                                  (plVar8,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                   *(undefined8 *)(*plVar8 + 0x290));
                if ((uVar9 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                  lVar13 = *plVar16;
                  if (lVar13 == 0) goto LAB_033bec5c;
                  if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                     (uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                  lVar13 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar13 == 0) goto LAB_033bec5c;
                  uVar9 = FUN_033ac5f4(lVar13,0);
                  unaff_x24 = in_stack_00000040;
                  unaff_x28 = in_stack_00000058;
                  if ((uVar9 & 1) != 0) {
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar13 = *plVar16;
                      if (lVar13 != 0) {
                        if (uVar15 < *(uint *)(lVar13 + 0x18)) {
                          lVar14 = *in_stack_00000058;
                          if (lVar14 != 0) {
                            uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                              uVar9 = (**(code **)(*plVar8 + 0x858))
                                                (plVar8,*(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20),
                                                 *(undefined8 *)(*plVar8 + 0x860));
                              goto joined_r0x033bf484;
                            }
                            goto LAB_033bfa24;
                          }
                          goto LAB_033bec5c;
                        }
                        goto LAB_033bfa24;
                      }
                      goto LAB_033bec5c;
                    }
                    goto LAB_033bfa24;
                  }
                  break;
                }
              }
            }
            else {
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              if ((uVar10 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
              lVar13 = *plVar16;
              if (lVar13 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
              lVar14 = *in_stack_00000058;
              if (lVar14 == 0) goto LAB_033bec5c;
              uVar1 = *(uint *)(lVar13 + lVar20 * 4 + 0x20);
              if (*(uint *)(lVar14 + 0x18) <= uVar1) goto LAB_033bfa24;
              uVar17 = *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
              if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
              if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(plVar8);
              }
              uVar9 = FUN_033c0b48(uVar17,plVar8);
              unaff_x22 = (long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              ;
joined_r0x033bf484:
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              if ((uVar9 & 1) == 0) break;
            }
          }
        }
      }
LAB_033bf488:
      uVar15 = uVar15 + 1;
      unaff_x24 = in_stack_00000040;
      unaff_x28 = in_stack_00000058;
      uVar7 = uVar6;
    } while (uVar6 != uVar15);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar9 = FUN_033ab18c(in_stack_00000048,0,0);
  if (((uVar9 & 1) != 0) && (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar20 = *unaff_x28;
    if (lVar20 == 0) goto LAB_033bec5c;
    lVar13 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
    while ((int)uVar7 < *(int *)(lVar20 + 0x18)) {
      if ((in_stack_00000048 == (long *)0x0) ||
         (uVar9 = FUN_033ac7d8(in_stack_00000048,0), unaff_x26 == 0)) goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
      uVar17 = *(undefined8 *)(unaff_x26 + lVar13);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar10 = FUN_033aa3b4(uVar17,0,0);
      unaff_x22 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar9 & 1) == 0) {
        if ((uVar10 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
          uVar9 = (**(code **)(*in_stack_00000048 + 0x288))
                            (in_stack_00000048,*(undefined8 *)(unaff_x26 + lVar13),
                             *(undefined8 *)(*in_stack_00000048 + 0x290));
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
            if (*(long *)(unaff_x26 + lVar13) == 0) goto LAB_033bec5c;
            uVar9 = FUN_033ac5f4(*(long *)(unaff_x26 + lVar13),0);
            if ((uVar9 & 1) != 0) {
              lVar20 = *unaff_x28;
              if (lVar20 != 0) {
                if (uVar7 < *(uint *)(lVar20 + 0x18)) {
                  uVar9 = (**(code **)(*in_stack_00000048 + 0x858))
                                    (in_stack_00000048,*(undefined8 *)(lVar20 + lVar13),
                                     *(undefined8 *)(*in_stack_00000048 + 0x860));
                  goto joined_r0x033bf658;
                }
                goto LAB_033bfa24;
              }
              goto LAB_033bec5c;
            }
            break;
          }
        }
      }
      else {
        if ((uVar10 & 1) != 0) break;
        lVar20 = *unaff_x28;
        if (lVar20 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_033bfa24;
        uVar17 = *(undefined8 *)(lVar20 + lVar13);
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
        if ((*(byte *)(*in_stack_00000048 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*in_stack_00000048 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(in_stack_00000048);
        }
        uVar9 = FUN_033c0b48(uVar17,in_stack_00000048);
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
joined_r0x033bf658:
        if ((uVar9 & 1) == 0) break;
      }
      lVar20 = *unaff_x28;
      uVar7 = uVar7 + 1;
      lVar13 = lVar13 + 8;
      if (lVar20 == 0) goto LAB_033bec5c;
    }
  }
  if (*unaff_x28 != 0) {
    unaff_x22 = unaff_x22;
    uVar9 = unaff_x25;
    if (uVar7 != *(uint *)(*unaff_x28 + 0x18)) goto LAB_033bf82c;
    if (unaff_x23 != 0) {
      if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) &&
         (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))) {
        lVar20 = (long)(int)in_stack_00000030;
        *(undefined8 *)(unaff_x23 + lVar20 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        thunk_FUN_01e10808();
        if (in_stack_00000038 != (long *)0x0) {
          if ((in_stack_00000048 == (long *)0x0) ||
             (lVar13 = thunk_FUN_01de26bc(in_stack_00000048,
                                          *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar13 != 0))
          {
            if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
              in_stack_00000038[lVar20 + 4] = (long)in_stack_00000048;
              thunk_FUN_01e10808(in_stack_00000038 + lVar20 + 4,in_stack_00000048);
              uVar9 = (ulong)*(uint *)(unaff_x24 + 3);
              if (unaff_x25 < uVar9) {
                lVar13 = *in_stack_00000028;
                if (lVar13 == 0) goto LAB_033bf738;
LAB_033bf720:
                lVar14 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*unaff_x24 + 0x40));
                if (lVar14 != 0) {
                  uVar9 = unaff_x24[3];
LAB_033bf738:
                  if (in_stack_00000030 < (uint)uVar9) {
                    unaff_x24[lVar20 + 4] = lVar13;
                    in_stack_00000030 = in_stack_00000030 + 1;
                    thunk_FUN_01e10808(unaff_x24 + lVar20 + 4,lVar13);
                    unaff_x22 = (long *)
                                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                    ;
                    uVar9 = unaff_x25;
LAB_033bf82c:
                    do {
                      uVar6 = *(uint *)(unaff_x24 + 3);
                      uVar10 = (ulong)uVar6;
                      unaff_x25 = uVar9 + 1;
                      if ((long)(int)uVar6 <= (long)unaff_x25) {
                        if (in_stack_00000030 != 1) {
                          if (in_stack_00000030 == 0) {
                            uVar17 = thunk_FUN_01dd295c(StringLiteral_8802);
                            uVar17 = FUN_033d6e4c(uVar17,0);
                            thunk_FUN_01dd295c(StringLiteral_1159);
                            uVar19 = thunk_FUN_01de27b8();
                            FUN_033958dc(uVar19,uVar17,0);
                            goto LAB_033c0894;
                          }
                          if ((int)in_stack_00000030 < 2) {
                            uVar6 = 0;
                            goto LAB_033bfae0;
                          }
                          if (uVar6 == 0) goto LAB_033bfa24;
                          lVar20 = 0;
                          lVar13 = 0;
                          uVar6 = 0;
                          bVar2 = false;
                          plVar16 = unaff_x24;
                          goto LAB_033bf900;
                        }
                        if (in_stack_00000020 != 0) {
                          if (unaff_x23 == 0) goto LAB_033bec5c;
                          if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                          if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
                          lVar20 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
                          lVar13 = *unaff_x28;
                          if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0))
                          goto LAB_033bec5c;
                          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                          lVar14 = in_stack_00000038[4];
                          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          bVar4 = FUN_033ab18c(lVar14,0,0);
                          lVar14 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
                          if (lVar20 == 0) {
                            lVar18 = 0;
                          }
                          else {
                            uVar17 = *(undefined8 *)StringLiteral_151;
                            lVar18 = thunk_FUN_01de26bc(lVar20,uVar17);
                            if (lVar18 == 0) goto LAB_033bfb98;
                          }
                          uVar17 = *(undefined8 *)(lVar13 + 0x18);
                          FUN_033d8040(lVar14,0);
                          *(long *)(lVar14 + 0x10) = lVar18;
                          thunk_FUN_01e10808((long *)(lVar14 + 0x10),lVar18);
                          *(int *)(lVar14 + 0x18) = (int)uVar17;
                          *(byte *)(lVar14 + 0x1c) = bVar4 & 1;
                          *in_stack_00000010 = lVar14;
                          thunk_FUN_01e10808(in_stack_00000010,lVar14);
                          if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                          uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
                          lVar20 = *unaff_x28;
                          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          FUN_033c0ca4(uVar17,lVar20);
                          uVar6 = (uint)in_stack_00000040[3];
                          unaff_x22 = (long *)
                                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          ;
                          unaff_x24 = in_stack_00000040;
                        }
                        if (uVar6 == 0) goto LAB_033bfa24;
                        plVar8 = unaff_x24 + 4;
                        plVar16 = (long *)*plVar8;
                        if (((plVar16 == (long *)0x0) ||
                            (lVar20 = (**(code **)(*plVar16 + 0x3b8))
                                                (plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
                            lVar20 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
                        iVar5 = *(int *)(*unaff_x28 + 0x18);
                        if (*(int *)(lVar20 + 0x18) == iVar5) {
                          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                          lVar13 = in_stack_00000038[4];
                          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          uVar9 = FUN_033ab18c(lVar13,0,0);
                          if ((uVar9 & 1) == 0) goto LAB_033c0740;
                          plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                         *(undefined4 *)(lVar20 + 0x18));
                          uVar6 = *(int *)(lVar20 + 0x18) - 1;
                          FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar6,0);
                          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                          lVar13 = in_stack_00000038[4];
                          lVar20 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                          if (lVar20 == 0) goto LAB_033bec5c;
                          if (*(int *)(lVar20 + 0x18) == 0) goto LAB_033bfa24;
                          *(undefined4 *)(lVar20 + 0x20) = 1;
                          lVar20 = thunk_FUN_033b4750(lVar13,lVar20,0);
                          if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                          if ((lVar20 != 0) &&
                             (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar13 == 0)) goto LAB_033c07f0;
                          if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                          plVar11 = plVar16 + (long)(int)uVar6 + 4;
                          *plVar11 = lVar20;
                          thunk_FUN_01e10808(plVar11,lVar20);
                          if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                          lVar20 = *unaff_x28;
                          if (lVar20 == 0) goto LAB_033bec5c;
                          if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_033bfa24;
                          plVar11 = (long *)*plVar11;
                          if (plVar11 == (long *)0x0) goto LAB_033bec5c;
                          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                          if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
                             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
                              *(long *)StringLiteral_1183)) goto LAB_033c090c;
                          FUN_033b49e8(plVar11,*(undefined8 *)(lVar20 + (long)(int)uVar6 * 8 + 0x20)
                                       ,0,0);
                          goto LAB_033c0730;
                        }
                        if (iVar5 < *(int *)(lVar20 + 0x18)) {
                          plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
                          lVar13 = *unaff_x28;
                          if (lVar13 == 0) goto LAB_033bec5c;
                          uVar9 = 0;
                          plVar11 = plVar16 + 4;
                          goto LAB_033bfe14;
                        }
                        if ((int)unaff_x24[3] == 0) goto LAB_033bfa24;
                        plVar16 = (long *)*plVar8;
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        uVar6 = (**(code **)(*plVar16 + 600))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                        if ((uVar6 >> 1 & 1) != 0) goto LAB_033c0740;
                        plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                       *(undefined4 *)(lVar20 + 0x18));
                        uVar6 = *(int *)(lVar20 + 0x18) - 1;
                        FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar6,0);
                        if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                        lVar13 = in_stack_00000038[4];
                        lVar20 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                        if ((*unaff_x28 == 0) || (lVar20 == 0)) goto LAB_033bec5c;
                        if (*(int *)(lVar20 + 0x18) == 0) goto LAB_033bfa24;
                        *(uint *)(lVar20 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
                        lVar20 = thunk_FUN_033b4750(lVar13,lVar20,0);
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        if ((lVar20 != 0) &&
                           (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar13 == 0)) goto LAB_033c07f0;
                        if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                        plVar11 = plVar16 + (long)(int)uVar6 + 4;
                        *plVar11 = lVar20;
                        thunk_FUN_01e10808(plVar11,lVar20);
                        if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                        lVar20 = *unaff_x28;
                        if (lVar20 == 0) goto LAB_033bec5c;
                        plVar11 = (long *)*plVar11;
                        if (plVar11 != (long *)0x0) {
                          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                          if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
                             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
                              *(long *)StringLiteral_1183)) goto LAB_033c090c;
                        }
                        FUN_033b4f38(lVar20,uVar6,plVar11,0,*(int *)(lVar20 + 0x18) - uVar6,0);
                        *unaff_x28 = (long)plVar16;
                        thunk_FUN_01e10808(unaff_x28,plVar16);
                        unaff_x24 = in_stack_00000040;
                        goto LAB_033c0740;
                      }
                      if (uVar10 <= unaff_x25) goto LAB_033bfa24;
                      in_stack_00000028 = unaff_x24 + uVar9 + 5;
                      uVar10 = FUN_03308638(*in_stack_00000028,0,0);
                      uVar9 = unaff_x25;
                    } while ((uVar10 & 1) != 0);
                    if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_033bfa24;
                    plVar16 = (long *)*in_stack_00000028;
                    if ((plVar16 == (long *)0x0) ||
                       (unaff_x27 = (**(code **)(*plVar16 + 0x3b8))
                                              (plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
                       unaff_x27 == 0)) goto LAB_033bec5c;
                    uVar10 = *(ulong *)(unaff_x27 + 0x18);
                    lVar20 = *unaff_x28;
                    if (uVar10 == 0) {
                      if (lVar20 == 0) goto LAB_033bec5c;
                      if (*(long *)(lVar20 + 0x18) == 0) goto LAB_033beda8;
                      if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_033bfa24;
                      plVar16 = (long *)*in_stack_00000028;
                      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                      uVar6 = (**(code **)(*plVar16 + 600))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                      if ((uVar6 >> 1 & 1) != 0) goto LAB_033beda8;
                      goto LAB_033bf82c;
                    }
                    if (lVar20 == 0) goto LAB_033bec5c;
                    uVar6 = *(uint *)(lVar20 + 0x18);
                    iVar5 = (int)uVar10;
                    if ((int)uVar6 < iVar5) {
                      uVar7 = iVar5 - 1;
                      if ((int)uVar6 < (int)uVar7) {
                        plVar16 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                        do {
                          if ((uint)uVar10 <= uVar6) goto LAB_033bfa24;
                          plVar8 = (long *)*plVar16;
                          if (plVar8 == (long *)0x0) goto LAB_033bec5c;
                          lVar20 = (**(code **)(*plVar8 + 0x1f8))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x200));
                          puVar3 = StringLiteral_4821;
                          lVar13 = *(long *)StringLiteral_4821;
                          if (*(int *)(lVar13 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30(lVar13);
                            lVar13 = *(long *)puVar3;
                          }
                          if (lVar20 == **(long **)(lVar13 + 0xb8)) {
                            uVar10 = (ulong)*(uint *)(unaff_x27 + 0x18);
                            uVar7 = *(uint *)(unaff_x27 + 0x18) - 1;
                            unaff_x28 = in_stack_00000058;
                            break;
                          }
                          uVar10 = *(ulong *)(unaff_x27 + 0x18);
                          uVar6 = uVar6 + 1;
                          plVar16 = plVar16 + 1;
                          uVar7 = (int)uVar10 - 1;
                          unaff_x28 = in_stack_00000058;
                        } while ((int)uVar6 < (int)uVar7);
                      }
                      if (uVar6 != uVar7) goto LAB_033bf82c;
                      if ((uint)uVar10 <= uVar6) goto LAB_033bfa24;
                      plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                      plVar16 = (long *)*plVar8;
                      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                      lVar20 = (**(code **)(*plVar16 + 0x1f8))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x200));
                      puVar3 = StringLiteral_4821;
                      lVar13 = *(long *)StringLiteral_4821;
                      if (*(int *)(lVar13 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30(lVar13);
                        lVar13 = *(long *)puVar3;
                      }
                      if (lVar20 != **(long **)(lVar13 + 0xb8)) goto LAB_033bf040;
                      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
                      plVar16 = (long *)*plVar8;
                      if ((plVar16 == (long *)0x0) ||
                         (lVar20 = (**(code **)(*plVar16 + 0x1d8))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                         lVar20 == 0)) goto LAB_033bec5c;
                      uVar10 = FUN_033ac038(lVar20,0);
                      if ((uVar10 & 1) == 0) goto LAB_033bf82c;
                      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
                      plVar16 = (long *)*plVar8;
                      uVar17 = *(undefined8 *)StringLiteral_8800;
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30();
                      }
                      uVar17 = FUN_033a87c8(uVar17,0);
                      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                      uVar10 = (**(code **)(*plVar16 + 0x208))
                                         (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                      unaff_x22 = (long *)
                                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      ;
                      if ((uVar10 & 1) == 0) goto LAB_033bf82c;
                      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
                      plVar8 = (long *)*plVar8;
                      if ((plVar8 == (long *)0x0) ||
                         (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                      (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                         plVar16 == (long *)0x0)) goto LAB_033bec5c;
LAB_033bf87c:
                      in_stack_00000048 =
                           (long *)(**(code **)(*plVar16 + 0x418))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x420));
                    }
                    else {
                      if (iVar5 == 0) goto LAB_033bfa24;
                      uVar7 = iVar5 - 1;
                      lVar20 = (long)(int)uVar7;
                      plVar8 = (long *)(unaff_x27 + lVar20 * 8 + 0x20);
                      plVar16 = (long *)*plVar8;
                      if ((plVar16 == (long *)0x0) ||
                         (lVar13 = (**(code **)(*plVar16 + 0x1d8))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                         lVar13 == 0)) goto LAB_033bec5c;
                      uVar10 = FUN_033ac038(lVar13,0);
                      if (iVar5 < (int)uVar6) {
                        unaff_x24 = in_stack_00000040;
                        if ((uVar10 & 1) != 0) {
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                          plVar16 = (long *)*plVar8;
                          uVar17 = *(undefined8 *)StringLiteral_8800;
                          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          uVar17 = FUN_033a87c8(uVar17,0);
                          if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                          uVar10 = (**(code **)(*plVar16 + 0x208))
                                             (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                          unaff_x22 = (long *)
                                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          ;
                          if ((uVar10 & 1) != 0) {
                            if (unaff_x23 == 0) goto LAB_033bec5c;
                            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                            lVar13 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                            if (lVar13 == 0) goto LAB_033bec5c;
                            if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_033bfa24;
                            if (*(uint *)(lVar13 + lVar20 * 4 + 0x20) == uVar7) {
LAB_033bf854:
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                              plVar8 = (long *)*plVar8;
                              if ((plVar8 != (long *)0x0) &&
                                 (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                              (plVar8,*(undefined8 *)
                                                                       (*plVar8 + 0x1e0)),
                                 unaff_x24 = in_stack_00000040, plVar16 != (long *)0x0))
                              goto LAB_033bf87c;
                              goto LAB_033bec5c;
                            }
                          }
                        }
                        goto LAB_033bf82c;
                      }
                      unaff_x24 = in_stack_00000040;
                      if ((uVar10 & 1) != 0) {
                        if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                        plVar16 = (long *)*plVar8;
                        uVar17 = *(undefined8 *)StringLiteral_8800;
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_01dc4f30();
                        }
                        uVar17 = FUN_033a87c8(uVar17,0);
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        uVar9 = (**(code **)(*plVar16 + 0x208))
                                          (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                        unaff_x22 = (long *)
                                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        ;
                        if ((uVar9 & 1) == 0) {
                          in_stack_00000048 = (long *)0x0;
                          goto LAB_033bf044;
                        }
                        if (unaff_x23 == 0) goto LAB_033bec5c;
                        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                        lVar13 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                        if (lVar13 == 0) goto LAB_033bec5c;
                        if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_033bfa24;
                        if (*(uint *)(lVar13 + lVar20 * 4 + 0x20) == uVar7) {
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                          plVar16 = (long *)*plVar8;
                          if ((plVar16 == (long *)0x0) ||
                             (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)
                                                          ), unaff_x26 == 0)) goto LAB_033bec5c;
                          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
                          if (plVar16 != (long *)0x0) {
                            uVar9 = (**(code **)(*plVar16 + 0x288))
                                              (plVar16,*(undefined8 *)
                                                        (unaff_x26 + lVar20 * 8 + 0x20),
                                               *(undefined8 *)(*plVar16 + 0x290));
                            if ((uVar9 & 1) == 0) goto LAB_033bf854;
                            goto LAB_033bf040;
                          }
                          goto LAB_033bec5c;
                        }
                      }
LAB_033bf040:
                      in_stack_00000048 = (long *)0x0;
                    }
LAB_033bf044:
                    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30();
                    }
                    uVar9 = FUN_033ab18c(in_stack_00000048,0,0);
                    if ((uVar9 & 1) != 0) {
                      uVar6 = *(int *)(unaff_x27 + 0x18) - 1;
                      goto LAB_033bf080;
                    }
                    param_1 = *unaff_x28;
                    if (param_1 != 0) goto code_r0x033bf07c;
                    goto LAB_033bec5c;
                  }
                  goto LAB_033bfa24;
                }
                goto LAB_033c07f0;
              }
            }
            goto LAB_033bfa24;
          }
          goto LAB_033c07f0;
        }
        goto LAB_033bec5c;
      }
      goto LAB_033bfa24;
    }
  }
  goto LAB_033bec5c;
LAB_033bf900:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar20 + 1, uVar10 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_033bfa24;
  lVar18 = plVar16[lVar13 + 4];
  lVar21 = unaff_x24[lVar20 + 5];
  lVar14 = in_stack_00000038[lVar13 + 4];
  uVar17 = *(undefined8 *)(unaff_x23 + lVar13 * 8 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x23 + 0x28 + lVar20 * 8);
  lVar13 = in_stack_00000038[lVar20 + 5];
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar5 = FUN_033c0e28(lVar18,uVar17,lVar14,lVar21,uVar19,lVar13);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar20 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar20) {
    lVar13 = (long)(int)uVar6;
    lVar20 = lVar20 + 1;
    uVar10 = in_stack_00000040[3] & 0xffffffff;
    plVar16 = in_stack_00000040;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_033bfa24;
    goto LAB_033bf900;
  }
  unaff_x22 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
  ;
  unaff_x24 = in_stack_00000040;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar17 = thunk_FUN_01dd295c(StringLiteral_6016);
    uVar17 = FUN_033d6e4c(uVar17,0);
    thunk_FUN_01dd295c(StringLiteral_5868);
    uVar19 = thunk_FUN_01de27b8();
    FUN_033063d0(uVar19,uVar17,0);
LAB_033c0894:
    uVar17 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar19,uVar17);
  }
LAB_033bfae0:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar16 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar20 = *plVar16;
    if (lVar20 == 0) goto LAB_033bec5c;
    lVar20 = FUN_033b5440(lVar20,0);
    lVar13 = *unaff_x28;
    if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar14,0,0);
    lVar14 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar20 == 0) {
      lVar18 = 0;
    }
    else {
      uVar17 = *(undefined8 *)StringLiteral_151;
      lVar18 = thunk_FUN_01de26bc(lVar20,uVar17);
      if (lVar18 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar20,uVar17);
      }
    }
    uVar17 = *(undefined8 *)(lVar13 + 0x18);
    FUN_033d8040(lVar14,0);
    *(long *)(lVar14 + 0x10) = lVar18;
    thunk_FUN_01e10808((long *)(lVar14 + 0x10),lVar18);
    *(int *)(lVar14 + 0x18) = (int)uVar17;
    *(byte *)(lVar14 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar14;
    thunk_FUN_01e10808(in_stack_00000010,lVar14);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar20 = *plVar16;
    lVar13 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar20,lVar13);
    unaff_x22 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
  plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar16 = (long *)*plVar8;
  if (((plVar16 == (long *)0x0) ||
      (lVar20 = (**(code **)(*plVar16 + 0x3b8))(plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
      lVar20 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar20 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033ab18c(lVar13,0,0);
    if ((uVar9 & 1) != 0) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar20 + 0x18)
                                    );
      uVar7 = *(int *)(lVar20 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar20 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar20 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar20 + 0x20) = 1;
      lVar20 = thunk_FUN_033b4750(lVar13,lVar20,0);
      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar20 != 0) &&
         (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      plVar11 = plVar16 + (long)(int)uVar7 + 4;
      *plVar11 = lVar20;
      thunk_FUN_01e10808(plVar11,lVar20);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      lVar20 = *unaff_x28;
      if (lVar20 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_033bfa24;
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_033bec5c;
      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar11);
      }
      FUN_033b49e8(plVar11,*(undefined8 *)(lVar20 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar20 + 0x18)) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_033bec5c;
      uVar9 = 0;
      plVar11 = plVar16 + 4;
      do {
        if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar20 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_033bfa24;
              plVar12 = *(long **)(lVar20 + 0x20 + uVar9 * 8);
              if ((plVar12 == (long *)0x0) ||
                 (lVar13 = (**(code **)(*plVar12 + 0x1f8))
                                     (plVar12,*(undefined8 *)(*plVar12 + 0x200)),
                 plVar16 == (long *)0x0)) goto LAB_033bec5c;
              if ((lVar13 != 0) &&
                 (lVar14 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0)
                 ) goto LAB_033c07f0;
              if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_033bfa24;
              *plVar11 = lVar13;
              thunk_FUN_01e10808(plVar11,lVar13);
              uVar7 = *(uint *)(lVar20 + 0x18);
              uVar9 = uVar9 + 1;
              plVar11 = plVar11 + 1;
            } while ((int)uVar9 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
          lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = FUN_033ab18c(lVar13,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar10 & 1) == 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_033bfa24;
            plVar11 = *(long **)(lVar20 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar11 == (long *)0x0) ||
               (lVar20 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
               plVar16 == (long *)0x0)) goto LAB_033bec5c;
            if ((lVar20 != 0) &&
               (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
            goto LAB_033c07f0;
            uVar15 = *(uint *)(plVar16 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
            lVar20 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar17 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
            lVar20 = thunk_FUN_033b4750(lVar20,uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar20 != 0) &&
               (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
            goto LAB_033c07f0;
            uVar15 = *(uint *)(plVar16 + 3);
          }
          if (uVar15 <= uVar7) goto LAB_033bfa24;
          plVar16[(long)(int)uVar7 + 4] = lVar20;
          thunk_FUN_01e10808(plVar16 + (long)(int)uVar7 + 4,lVar20);
FUN_033c07b0:
          *unaff_x28 = (long)plVar16;
          thunk_FUN_01e10808(unaff_x28,plVar16);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin__TriggerVibrationAction;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_033bfa24;
        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
        lVar13 = *(long *)(lVar13 + uVar9 * 8 + 0x20);
        if ((lVar13 != 0) &&
           (lVar14 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_033bfa24;
        *plVar11 = lVar13;
        thunk_FUN_01e10808(plVar11,lVar13);
        lVar13 = *unaff_x28;
        uVar9 = uVar9 + 1;
        plVar11 = plVar11 + 1;
        if (lVar13 == 0) goto LAB_033bec5c;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
    plVar16 = (long *)*plVar8;
    if (plVar16 == (long *)0x0) goto LAB_033bec5c;
    uVar7 = (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar20 + 0x18)
                                    );
      uVar7 = *(int *)(lVar20 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar20 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar20 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar20 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar20 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar20 = thunk_FUN_033b4750(lVar13,lVar20,0);
      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar20 != 0) &&
         (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      plVar11 = plVar16 + (long)(int)uVar7 + 4;
      *plVar11 = lVar20;
      thunk_FUN_01e10808(plVar11,lVar20);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      lVar20 = *unaff_x28;
      if (lVar20 == 0) goto LAB_033bec5c;
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar20,uVar7,plVar11,0,*(int *)(lVar20 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar16;
      thunk_FUN_01e10808(unaff_x28,plVar16);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    lVar13 = *(long *)(lVar13 + uVar9 * 8 + 0x20);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_033bfa24;
    *plVar11 = lVar13;
    thunk_FUN_01e10808(plVar11,lVar13);
    lVar13 = *unaff_x28;
    uVar9 = uVar9 + 1;
    plVar11 = plVar11 + 1;
    if (lVar13 == 0) break;
LAB_033bfe14:
    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar20 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_033c0080;
      goto LAB_033c000c;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_033bfa24;
    if (plVar16 == (long *)0x0) break;
  }
  goto LAB_033bec5c;
LAB_033beda8:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
     (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_033bfa24;
  lVar20 = (long)(int)in_stack_00000030;
  *(undefined8 *)(unaff_x23 + lVar20 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01e10808();
  uVar9 = (ulong)*(uint *)(unaff_x24 + 3);
  if (uVar9 <= unaff_x25) goto LAB_033bfa24;
  lVar13 = *in_stack_00000028;
  if (lVar13 != 0) goto LAB_033bf720;
  goto LAB_033bf738;
  while( true ) {
    plVar12 = *(long **)(lVar20 + 0x20 + uVar9 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar13 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar16 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_033bfa24;
    *plVar11 = lVar13;
    thunk_FUN_01e10808(plVar11,lVar13);
    uVar6 = *(uint *)(lVar20 + 0x18);
    uVar9 = uVar9 + 1;
    plVar11 = plVar11 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar9) break;
LAB_033c000c:
    if (uVar6 <= (uint)uVar9) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar13 = in_stack_00000038[4];
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar10 = FUN_033ab18c(lVar13,0,0);
      uVar6 = (uint)uVar9;
      if ((uVar10 & 1) == 0) {
        if (*(uint *)(lVar20 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar11 = *(long **)(lVar20 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar11 == (long *)0x0) ||
           (lVar20 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
           plVar16 == (long *)0x0)) goto LAB_033bec5c;
        if ((lVar20 != 0) &&
           (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0))
        goto LAB_033c07f0;
        uVar7 = *(uint *)(plVar16 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar20 = in_stack_00000038[4];
        uVar17 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        lVar20 = thunk_FUN_033b4750(lVar20,uVar17,0);
        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar20 != 0) &&
           (lVar13 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar16 + 0x40)), lVar13 == 0)) {
LAB_033c07f0:
          uVar17 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar17,0);
        }
        uVar7 = *(uint *)(plVar16 + 3);
      }
      if (uVar6 < uVar7) {
        plVar16[(long)(int)uVar6 + 4] = lVar20;
        thunk_FUN_01e10808(plVar16 + (long)(int)uVar6 + 4,lVar20);
LAB_033c0730:
        *unaff_x28 = (long)plVar16;
        thunk_FUN_01e10808(unaff_x28,plVar16);
        unaff_x24 = in_stack_00000040;
LAB_033c0740:
        if ((int)unaff_x24[3] != 0) {
LAB_033c07cc:
          return *plVar8;
        }
      }
    }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


