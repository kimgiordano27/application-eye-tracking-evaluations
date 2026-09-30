/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry
ENTRY_POINT: 033bf650
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__GetBoundaryGeometry(code *param_1,long *param_2,undefined8 param_3)

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
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long in_x9;
  long unaff_x19;
  uint unaff_w20;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar18;
  ulong unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  undefined8 uVar19;
  long *unaff_x28;
  long lVar20;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x033bf650:
  uVar10 = (*param_1)(param_2,param_3,*(undefined8 *)(in_x9 + 0x860));
  param_2 = unaff_x27;
  if ((uVar10 & 1) == 0) goto LAB_033bf674;
LAB_033bf65c:
  lVar15 = *unaff_x28;
  unaff_w20 = unaff_w20 + 1;
  unaff_x19 = unaff_x19 + 8;
  if (lVar15 != 0) {
LAB_033bf4f4:
    if ((int)unaff_w20 < *(int *)(lVar15 + 0x18)) {
      if ((param_2 == (long *)0x0) || (uVar10 = FUN_033ac7d8(param_2,0), unaff_x26 == 0))
      goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_033bfa24;
      uVar17 = *(undefined8 *)(unaff_x26 + unaff_x19);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar9 = FUN_033aa3b4(uVar17,0,0);
      unaff_x22 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar10 & 1) == 0) {
        if ((uVar9 & 1) != 0) goto LAB_033bf65c;
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_033bfa24;
        uVar10 = (**(code **)(*param_2 + 0x288))
                           (param_2,*(undefined8 *)(unaff_x26 + unaff_x19),
                            *(undefined8 *)(*param_2 + 0x290));
        if ((uVar10 & 1) != 0) goto LAB_033bf65c;
        if (*(uint *)(unaff_x26 + 0x18) <= unaff_w20) goto LAB_033bfa24;
        if (*(long *)(unaff_x26 + unaff_x19) == 0) goto LAB_033bec5c;
        uVar10 = FUN_033ac5f4(*(long *)(unaff_x26 + unaff_x19),0);
        if ((uVar10 & 1) != 0) {
          lVar15 = *unaff_x28;
          if (lVar15 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar15 + 0x18) <= unaff_w20) goto LAB_033bfa24;
          in_x9 = *param_2;
          param_3 = *(undefined8 *)(lVar15 + unaff_x19);
          param_1 = *(code **)(in_x9 + 0x858);
          unaff_x27 = param_2;
          goto code_r0x033bf650;
        }
      }
      else if ((uVar9 & 1) == 0) {
        lVar15 = *unaff_x28;
        if (lVar15 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar15 + 0x18) <= unaff_w20) goto LAB_033bfa24;
        uVar17 = *(undefined8 *)(lVar15 + unaff_x19);
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
        if ((*(byte *)(*param_2 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(param_2);
        }
        uVar10 = FUN_033c0b48(uVar17,param_2);
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar10 & 1) != 0) goto LAB_033bf65c;
      }
    }
LAB_033bf674:
    if (*unaff_x28 != 0) {
      unaff_x22 = unaff_x22;
      uVar10 = unaff_x25;
      if (unaff_w20 != *(uint *)(*unaff_x28 + 0x18)) goto LAB_033bf82c;
                    /* try { // try from 033bf688 to 034bf68f has its CatchHandler @ 033bf7fc */
      if (unaff_x23 != 0) {
                    /* try { // try from 033bf69c to 034bf6a3 has its CatchHandler @ 033bf7e0 */
        if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) &&
           (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))) {
          lVar15 = (long)(int)in_stack_00000030;
          *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) =
               *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
          thunk_FUN_01e10808();
          if (in_stack_00000038 != (long *)0x0) {
                    /* try { // try from 033bf6dc to 034bf713 has its CatchHandler @ 033bf7f4 */
            if ((param_2 == (long *)0x0) ||
               (lVar11 = thunk_FUN_01de26bc(param_2,*(undefined8 *)(*in_stack_00000038 + 0x40)),
               lVar11 != 0)) {
              if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
                in_stack_00000038[lVar15 + 4] = (long)param_2;
                thunk_FUN_01e10808(in_stack_00000038 + lVar15 + 4,param_2);
                uVar10 = (ulong)*(uint *)(unaff_x24 + 3);
                if (unaff_x25 < uVar10) {
                  lVar11 = *in_stack_00000028;
                  if (lVar11 == 0) goto LAB_033bf738;
LAB_033bf720:
                    /* try { // try from 033bf724 to 034bf72f has its CatchHandler @ 033bf7d8 */
                  lVar12 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*unaff_x24 + 0x40));
                  if (lVar12 != 0) {
                    /* try { // try from 033bf734 to 034bf73f has its CatchHandler @ 033bf7d4 */
                    uVar10 = unaff_x24[3];
LAB_033bf738:
                    if (in_stack_00000030 < (uint)uVar10) {
                      unaff_x24[lVar15 + 4] = lVar11;
                      in_stack_00000030 = in_stack_00000030 + 1;
                      thunk_FUN_01e10808(unaff_x24 + lVar15 + 4,lVar11);
                      unaff_x22 = (long *)
                                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      ;
                      uVar10 = unaff_x25;
LAB_033bf82c:
                      do {
                        uVar6 = *(uint *)(unaff_x24 + 3);
                        uVar9 = (ulong)uVar6;
                        unaff_x25 = uVar10 + 1;
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
                            lVar15 = 0;
                            lVar11 = 0;
                            uVar6 = 0;
                            bVar2 = false;
                            plVar16 = unaff_x24;
                            goto LAB_033bf900;
                          }
                          if (in_stack_00000020 != 0) {
                            if (unaff_x23 == 0) goto LAB_033bec5c;
                            if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                            if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
                            lVar15 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
                            lVar11 = *unaff_x28;
                            if ((lVar11 == 0) || (in_stack_00000038 == (long *)0x0))
                            goto LAB_033bec5c;
                            if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                            lVar12 = in_stack_00000038[4];
                            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                              thunk_FUN_01dc4f30();
                            }
                            bVar4 = FUN_033ab18c(lVar12,0,0);
                            lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
                            if (lVar15 == 0) {
                              lVar18 = 0;
                            }
                            else {
                              uVar17 = *(undefined8 *)StringLiteral_151;
                              lVar18 = thunk_FUN_01de26bc(lVar15,uVar17);
                              if (lVar18 == 0) goto LAB_033bfb98;
                            }
                            uVar17 = *(undefined8 *)(lVar11 + 0x18);
                            FUN_033d8040(lVar12,0);
                            *(long *)(lVar12 + 0x10) = lVar18;
                            thunk_FUN_01e10808((long *)(lVar12 + 0x10),lVar18);
                            *(int *)(lVar12 + 0x18) = (int)uVar17;
                            *(byte *)(lVar12 + 0x1c) = bVar4 & 1;
                            *in_stack_00000010 = lVar12;
                            thunk_FUN_01e10808(in_stack_00000010,lVar12);
                            if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                            uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
                            lVar15 = *unaff_x28;
                            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                              thunk_FUN_01dc4f30();
                            }
                            FUN_033c0ca4(uVar17,lVar15);
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
                              (lVar15 = (**(code **)(*plVar16 + 0x3b8))
                                                  (plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
                              lVar15 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
                          iVar5 = *(int *)(*unaff_x28 + 0x18);
                          if (*(int *)(lVar15 + 0x18) == iVar5) {
                            if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                            if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                            lVar11 = in_stack_00000038[4];
                            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                              thunk_FUN_01dc4f30();
                            }
                            uVar10 = FUN_033ab18c(lVar11,0,0);
                            if ((uVar10 & 1) == 0) goto LAB_033c0740;
                            plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                           *(undefined4 *)(lVar15 + 0x18));
                            uVar6 = *(int *)(lVar15 + 0x18) - 1;
                            FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar6,0);
                            if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                            lVar11 = in_stack_00000038[4];
                            lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                            if (lVar15 == 0) goto LAB_033bec5c;
                            if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
                            *(undefined4 *)(lVar15 + 0x20) = 1;
                            lVar15 = thunk_FUN_033b4750(lVar11,lVar15,0);
                            if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                            if ((lVar15 != 0) &&
                               (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40))
                               , lVar11 == 0)) goto LAB_033c07f0;
                            if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                            plVar13 = plVar16 + (long)(int)uVar6 + 4;
                            *plVar13 = lVar15;
                            thunk_FUN_01e10808(plVar13,lVar15);
                            if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                            lVar15 = *unaff_x28;
                            if (lVar15 == 0) goto LAB_033bec5c;
                            if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
                            plVar13 = (long *)*plVar13;
                            if (plVar13 == (long *)0x0) goto LAB_033bec5c;
                            bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                            if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
                               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
                                *(long *)StringLiteral_1183)) goto LAB_033c090c;
                            FUN_033b49e8(plVar13,*(undefined8 *)
                                                  (lVar15 + (long)(int)uVar6 * 8 + 0x20),0,0);
                            goto LAB_033c0730;
                          }
                          if (iVar5 < *(int *)(lVar15 + 0x18)) {
                            plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
                            lVar11 = *unaff_x28;
                            if (lVar11 == 0) goto LAB_033bec5c;
                            uVar10 = 0;
                            plVar13 = plVar16 + 4;
                            goto LAB_033bfe14;
                          }
                          if ((int)unaff_x24[3] == 0) goto LAB_033bfa24;
                          plVar16 = (long *)*plVar8;
                          if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                          uVar6 = (**(code **)(*plVar16 + 600))
                                            (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                          if ((uVar6 >> 1 & 1) != 0) goto LAB_033c0740;
                          plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                         *(undefined4 *)(lVar15 + 0x18));
                          uVar6 = *(int *)(lVar15 + 0x18) - 1;
                          FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar6,0);
                          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                          lVar11 = in_stack_00000038[4];
                          lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                          if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_033bec5c;
                          if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
                          *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
                          lVar15 = thunk_FUN_033b4750(lVar11,lVar15,0);
                          if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                          if ((lVar15 != 0) &&
                             (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar11 == 0)) goto LAB_033c07f0;
                          if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                          plVar13 = plVar16 + (long)(int)uVar6 + 4;
                          *plVar13 = lVar15;
                          thunk_FUN_01e10808(plVar13,lVar15);
                          if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                          lVar15 = *unaff_x28;
                          if (lVar15 == 0) goto LAB_033bec5c;
                          plVar13 = (long *)*plVar13;
                          if (plVar13 != (long *)0x0) {
                            bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                            if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
                               (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
                                *(long *)StringLiteral_1183)) goto LAB_033c090c;
                          }
                          FUN_033b4f38(lVar15,uVar6,plVar13,0,*(int *)(lVar15 + 0x18) - uVar6,0);
                          *unaff_x28 = (long)plVar16;
                          thunk_FUN_01e10808(unaff_x28,plVar16);
                          unaff_x24 = in_stack_00000040;
                          goto LAB_033c0740;
                        }
                        if (uVar9 <= unaff_x25) goto LAB_033bfa24;
                        in_stack_00000028 = unaff_x24 + uVar10 + 5;
                        uVar9 = FUN_03308638(*in_stack_00000028,0,0);
                        uVar10 = unaff_x25;
                      } while ((uVar9 & 1) != 0);
                      if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_033bfa24;
                      plVar16 = (long *)*in_stack_00000028;
                      if ((plVar16 == (long *)0x0) ||
                         (lVar15 = (**(code **)(*plVar16 + 0x3b8))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
                         lVar15 == 0)) goto LAB_033bec5c;
                      uVar9 = *(ulong *)(lVar15 + 0x18);
                      lVar11 = *unaff_x28;
                      if (uVar9 == 0) {
                        if (lVar11 == 0) goto LAB_033bec5c;
                        if (*(long *)(lVar11 + 0x18) == 0) goto LAB_033beda8;
                        if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_033bfa24;
                        plVar16 = (long *)*in_stack_00000028;
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        uVar6 = (**(code **)(*plVar16 + 600))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                        if ((uVar6 >> 1 & 1) != 0) goto LAB_033beda8;
                        goto LAB_033bf82c;
                      }
                      if (lVar11 == 0) goto LAB_033bec5c;
                      uVar6 = *(uint *)(lVar11 + 0x18);
                      iVar5 = (int)uVar9;
                      if ((int)uVar6 < iVar5) {
                        uVar7 = iVar5 - 1;
                        if ((int)uVar6 < (int)uVar7) {
                          plVar16 = (long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
                          do {
                            if ((uint)uVar9 <= uVar6) goto LAB_033bfa24;
                            plVar8 = (long *)*plVar16;
                            if (plVar8 == (long *)0x0) goto LAB_033bec5c;
                            lVar11 = (**(code **)(*plVar8 + 0x1f8))
                                               (plVar8,*(undefined8 *)(*plVar8 + 0x200));
                            puVar3 = StringLiteral_4821;
                            lVar12 = *(long *)StringLiteral_4821;
                            if (*(int *)(lVar12 + 0xe0) == 0) {
                              thunk_FUN_01dc4f30(lVar12);
                              lVar12 = *(long *)puVar3;
                            }
                            if (lVar11 == **(long **)(lVar12 + 0xb8)) {
                              uVar9 = (ulong)*(uint *)(lVar15 + 0x18);
                              uVar7 = *(uint *)(lVar15 + 0x18) - 1;
                              unaff_x28 = in_stack_00000058;
                              break;
                            }
                            uVar9 = *(ulong *)(lVar15 + 0x18);
                            uVar6 = uVar6 + 1;
                            plVar16 = plVar16 + 1;
                            uVar7 = (int)uVar9 - 1;
                            unaff_x28 = in_stack_00000058;
                          } while ((int)uVar6 < (int)uVar7);
                        }
                        if (uVar6 != uVar7) goto LAB_033bf82c;
                        if ((uint)uVar9 <= uVar6) goto LAB_033bfa24;
                        plVar8 = (long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
                        plVar16 = (long *)*plVar8;
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        lVar11 = (**(code **)(*plVar16 + 0x1f8))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x200));
                        puVar3 = StringLiteral_4821;
                        lVar12 = *(long *)StringLiteral_4821;
                        if (*(int *)(lVar12 + 0xe0) == 0) {
                          thunk_FUN_01dc4f30(lVar12);
                          lVar12 = *(long *)puVar3;
                        }
                        if (lVar11 != **(long **)(lVar12 + 0xb8)) goto LAB_033bf040;
                        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
                        plVar16 = (long *)*plVar8;
                        if ((plVar16 == (long *)0x0) ||
                           (lVar11 = (**(code **)(*plVar16 + 0x1d8))
                                               (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                           lVar11 == 0)) goto LAB_033bec5c;
                        uVar9 = FUN_033ac038(lVar11,0);
                        if ((uVar9 & 1) == 0) goto LAB_033bf82c;
                        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
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
                        if ((uVar9 & 1) == 0) goto LAB_033bf82c;
                        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
                        plVar8 = (long *)*plVar8;
                        if ((plVar8 == (long *)0x0) ||
                           (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                           plVar16 == (long *)0x0)) goto LAB_033bec5c;
LAB_033bf87c:
                        plStack0000000000000048 =
                             (long *)(**(code **)(*plVar16 + 0x418))
                                               (plVar16,*(undefined8 *)(*plVar16 + 0x420));
                      }
                      else {
                        if (iVar5 == 0) goto LAB_033bfa24;
                        uVar7 = iVar5 - 1;
                        lVar11 = (long)(int)uVar7;
                        plVar8 = (long *)(lVar15 + lVar11 * 8 + 0x20);
                        plVar16 = (long *)*plVar8;
                        if ((plVar16 == (long *)0x0) ||
                           (lVar12 = (**(code **)(*plVar16 + 0x1d8))
                                               (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                           lVar12 == 0)) goto LAB_033bec5c;
                        uVar9 = FUN_033ac038(lVar12,0);
                        if (iVar5 < (int)uVar6) {
                          unaff_x24 = in_stack_00000040;
                          if ((uVar9 & 1) != 0) {
                            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
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
                            if ((uVar9 & 1) != 0) {
                              if (unaff_x23 == 0) goto LAB_033bec5c;
                              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                              lVar12 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                              if (lVar12 == 0) goto LAB_033bec5c;
                              if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_033bfa24;
                              if (*(uint *)(lVar12 + lVar11 * 4 + 0x20) == uVar7) {
LAB_033bf854:
                                if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
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
                        if ((uVar9 & 1) != 0) {
                          if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
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
                          if ((uVar10 & 1) == 0) {
                            plStack0000000000000048 = (long *)0x0;
                            goto LAB_033bf044;
                          }
                          if (unaff_x23 == 0) goto LAB_033bec5c;
                          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                          lVar12 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                          if (lVar12 == 0) goto LAB_033bec5c;
                          if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_033bfa24;
                          if (*(uint *)(lVar12 + lVar11 * 4 + 0x20) == uVar7) {
                            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
                            plVar16 = (long *)*plVar8;
                            if ((plVar16 == (long *)0x0) ||
                               (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                                            (plVar16,*(undefined8 *)
                                                                      (*plVar16 + 0x1e0)),
                               unaff_x26 == 0)) goto LAB_033bec5c;
                            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
                            if (plVar16 != (long *)0x0) {
                              uVar10 = (**(code **)(*plVar16 + 0x288))
                                                 (plVar16,*(undefined8 *)
                                                           (unaff_x26 + lVar11 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar16 + 0x290));
                              if ((uVar10 & 1) == 0) goto LAB_033bf854;
                              goto LAB_033bf040;
                            }
                            goto LAB_033bec5c;
                          }
                        }
LAB_033bf040:
                        plStack0000000000000048 = (long *)0x0;
                      }
LAB_033bf044:
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30();
                      }
                      uVar10 = FUN_033ab18c(plStack0000000000000048,0,0);
                      if ((uVar10 & 1) == 0) {
                        if (*unaff_x28 == 0) goto LAB_033bec5c;
                        uVar6 = *(uint *)(*unaff_x28 + 0x18);
                      }
                      else {
                        uVar6 = *(int *)(lVar15 + 0x18) - 1;
                      }
                      if (0 < (int)uVar6) {
                        uVar7 = 0;
                        plVar16 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                        goto LAB_033bf094;
                      }
                      unaff_w20 = 0;
                      goto LAB_033bf4a8;
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
  }
  goto LAB_033bec5c;
LAB_033bf900:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar10 = lVar15 + 1, uVar9 <= uVar10)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar10)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar10)) goto LAB_033bfa24;
  lVar18 = plVar16[lVar11 + 4];
  lVar20 = unaff_x24[lVar15 + 5];
  lVar12 = in_stack_00000038[lVar11 + 4];
  uVar17 = *(undefined8 *)(unaff_x23 + lVar11 * 8 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x23 + 0x28 + lVar15 * 8);
  lVar11 = in_stack_00000038[lVar15 + 5];
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar5 = FUN_033c0e28(lVar18,uVar17,lVar12,lVar20,uVar19,lVar11);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar15 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar15) {
    lVar11 = (long)(int)uVar6;
    lVar15 = lVar15 + 1;
    uVar9 = in_stack_00000040[3] & 0xffffffff;
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
    lVar15 = *plVar16;
    if (lVar15 == 0) goto LAB_033bec5c;
    lVar15 = FUN_033b5440(lVar15,0);
    lVar11 = *unaff_x28;
    if ((lVar11 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar12 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar12,0,0);
    lVar12 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar15 == 0) {
      lVar18 = 0;
    }
    else {
      uVar17 = *(undefined8 *)StringLiteral_151;
      lVar18 = thunk_FUN_01de26bc(lVar15,uVar17);
      if (lVar18 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar15,uVar17);
      }
    }
    uVar17 = *(undefined8 *)(lVar11 + 0x18);
    FUN_033d8040(lVar12,0);
    *(long *)(lVar12 + 0x10) = lVar18;
    thunk_FUN_01e10808((long *)(lVar12 + 0x10),lVar18);
    *(int *)(lVar12 + 0x18) = (int)uVar17;
    *(byte *)(lVar12 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar12;
    thunk_FUN_01e10808(in_stack_00000010,lVar12);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar15 = *plVar16;
    lVar11 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar15,lVar11);
    unaff_x22 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
  plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar16 = (long *)*plVar8;
  if (((plVar16 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar16 + 0x3b8))(plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
      lVar15 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar15 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar10 = FUN_033ab18c(lVar11,0,0);
    if ((uVar10 & 1) != 0) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar15 + 0x18)
                                    );
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = thunk_FUN_033b4750(lVar11,lVar15,0);
      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar15 != 0) &&
         (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      plVar13 = plVar16 + (long)(int)uVar7 + 4;
      *plVar13 = lVar15;
      thunk_FUN_01e10808(plVar13,lVar15);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_033bec5c;
      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar13);
      }
      FUN_033b49e8(plVar13,*(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar15 + 0x18)) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar11 = *unaff_x28;
      if (lVar11 == 0) goto LAB_033bec5c;
      uVar10 = 0;
      plVar13 = plVar16 + 4;
      do {
        if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar10) {
          uVar7 = *(uint *)(lVar15 + 0x18);
          if ((int)uVar10 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar10) goto LAB_033bfa24;
              plVar14 = *(long **)(lVar15 + 0x20 + uVar10 * 8);
              if ((plVar14 == (long *)0x0) ||
                 (lVar11 = (**(code **)(*plVar14 + 0x1f8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x200)),
                 plVar16 == (long *)0x0)) goto LAB_033bec5c;
              if ((lVar11 != 0) &&
                 (lVar12 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)
                 ) goto LAB_033c07f0;
              if (*(uint *)(plVar16 + 3) <= (uint)uVar10) goto LAB_033bfa24;
              *plVar13 = lVar11;
              thunk_FUN_01e10808(plVar13,lVar11);
              uVar7 = *(uint *)(lVar15 + 0x18);
              uVar10 = uVar10 + 1;
              plVar13 = plVar13 + 1;
            } while ((int)uVar10 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
          lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033ab18c(lVar11,0,0);
          uVar7 = (uint)uVar10;
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
            plVar13 = *(long **)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar13 == (long *)0x0) ||
               (lVar15 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
               plVar16 == (long *)0x0)) goto LAB_033bec5c;
            if ((lVar15 != 0) &&
               (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
            goto LAB_033c07f0;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
            lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar17 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
            lVar15 = thunk_FUN_033b4750(lVar15,uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar15 != 0) &&
               (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
            goto LAB_033c07f0;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          if (uVar1 <= uVar7) goto LAB_033bfa24;
          plVar16[(long)(int)uVar7 + 4] = lVar15;
          thunk_FUN_01e10808(plVar16 + (long)(int)uVar7 + 4,lVar15);
FUN_033c07b0:
          *unaff_x28 = (long)plVar16;
          thunk_FUN_01e10808(unaff_x28,plVar16);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin__TriggerVibrationAction;
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_033bfa24;
        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
        lVar11 = *(long *)(lVar11 + uVar10 * 8 + 0x20);
        if ((lVar11 != 0) &&
           (lVar12 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar16 + 3) <= uVar10) goto LAB_033bfa24;
        *plVar13 = lVar11;
        thunk_FUN_01e10808(plVar13,lVar11);
        lVar11 = *unaff_x28;
        uVar10 = uVar10 + 1;
        plVar13 = plVar13 + 1;
        if (lVar11 == 0) goto LAB_033bec5c;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
    plVar16 = (long *)*plVar8;
    if (plVar16 == (long *)0x0) goto LAB_033bec5c;
    uVar7 = (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar15 + 0x18)
                                    );
      uVar7 = *(int *)(lVar15 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar16,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar15 = thunk_FUN_033b4750(lVar11,lVar15,0);
      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar15 != 0) &&
         (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      plVar13 = plVar16 + (long)(int)uVar7 + 4;
      *plVar13 = lVar15;
      thunk_FUN_01e10808(plVar13,lVar15);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_033bec5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar15,uVar7,plVar13,0,*(int *)(lVar15 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar16;
      thunk_FUN_01e10808(unaff_x28,plVar16);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    lVar11 = *(long *)(lVar11 + uVar10 * 8 + 0x20);
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar16 + 3) <= uVar10) goto LAB_033bfa24;
    *plVar13 = lVar11;
    thunk_FUN_01e10808(plVar13,lVar11);
    lVar11 = *unaff_x28;
    uVar10 = uVar10 + 1;
    plVar13 = plVar13 + 1;
    if (lVar11 == 0) break;
LAB_033bfe14:
    if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar10) {
      uVar6 = *(uint *)(lVar15 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar10) goto LAB_033c0080;
      goto LAB_033c000c;
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_033bfa24;
    if (plVar16 == (long *)0x0) break;
  }
  goto LAB_033bec5c;
LAB_033beda8:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
     (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_033bfa24;
  lVar15 = (long)(int)in_stack_00000030;
  *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01e10808();
  uVar10 = (ulong)*(uint *)(unaff_x24 + 3);
  if (uVar10 <= unaff_x25) goto LAB_033bfa24;
  lVar11 = *in_stack_00000028;
  if (lVar11 != 0) goto LAB_033bf720;
  goto LAB_033bf738;
LAB_033bf094:
  do {
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
    lVar11 = (long)(int)uVar7;
    plVar8 = *(long **)(lVar15 + lVar11 * 8 + 0x20);
    if ((plVar8 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
       plVar8 == (long *)0x0)) goto LAB_033bec5c;
    uVar10 = FUN_033ac048(plVar8,0);
    if ((uVar10 & 1) != 0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
    }
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
    lVar12 = *plVar16;
    if (lVar12 == 0) goto LAB_033bec5c;
    if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_033bfa24;
    if (unaff_x26 == 0) goto LAB_033bec5c;
    uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar1) goto LAB_033bfa24;
    uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar10 = FUN_033aa3b4(plVar8,uVar17,0);
    if ((uVar10 & 1) == 0) {
      if ((in_stack_00000050 >> 0x12 & 1) != 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
        lVar12 = *plVar16;
        if (lVar12 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_033bfa24;
        lVar18 = *in_stack_00000058;
        if (lVar18 == 0) goto LAB_033bec5c;
        uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
        if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_033bfa24;
        lVar12 = *unaff_x22;
        lVar18 = *(long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar12 = *unaff_x22;
        }
        if (lVar18 == *(long *)(*(long *)(lVar12 + 0xb8) + 0x18)) goto LAB_033bf488;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
      lVar12 = *plVar16;
      if (lVar12 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_033bfa24;
      lVar18 = *in_stack_00000058;
      if (lVar18 == 0) goto LAB_033bec5c;
      uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
      if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_033bfa24;
      if (*(long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20) != 0) {
        uVar17 = *(undefined8 *)StringLiteral_2477;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar17 = FUN_033a87c8(uVar17,0);
        uVar10 = FUN_033aa3b4(plVar8,uVar17,0);
        if ((uVar10 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_033bec5c;
          uVar10 = FUN_033ac7d8(plVar8,0);
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
          lVar12 = *plVar16;
          if (lVar12 == 0) goto LAB_033bec5c;
          if ((*(uint *)(lVar12 + 0x18) <= uVar7) ||
             (uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar1))
          goto LAB_033bfa24;
          uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033aa3b4(uVar17,0,0);
          unaff_x22 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          unaff_w20 = uVar7;
          if ((uVar10 & 1) == 0) {
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
              lVar12 = *plVar16;
              if (lVar12 == 0) goto LAB_033bec5c;
              if ((*(uint *)(lVar12 + 0x18) <= uVar7) ||
                 (uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20),
                 *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
              uVar10 = (**(code **)(*plVar8 + 0x288))
                                 (plVar8,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                  *(undefined8 *)(*plVar8 + 0x290));
              if ((uVar10 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                lVar12 = *plVar16;
                if (lVar12 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar12 + 0x18) <= uVar7) ||
                   (uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                lVar12 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_033bec5c;
                uVar10 = FUN_033ac5f4(lVar12,0);
                unaff_x24 = in_stack_00000040;
                unaff_x28 = in_stack_00000058;
                if ((uVar10 & 1) != 0) {
                  if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                    lVar12 = *plVar16;
                    if (lVar12 != 0) {
                      if (uVar7 < *(uint *)(lVar12 + 0x18)) {
                        lVar18 = *in_stack_00000058;
                        if (lVar18 != 0) {
                          uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
                          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                            uVar10 = (**(code **)(*plVar8 + 0x858))
                                               (plVar8,*(undefined8 *)
                                                        (lVar18 + (long)(int)uVar1 * 8 + 0x20),
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
            if ((uVar9 & 1) != 0) break;
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
            lVar12 = *plVar16;
            if (lVar12 == 0) goto LAB_033bec5c;
            if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_033bfa24;
            lVar18 = *in_stack_00000058;
            if (lVar18 == 0) goto LAB_033bec5c;
            uVar1 = *(uint *)(lVar12 + lVar11 * 4 + 0x20);
            if (*(uint *)(lVar18 + 0x18) <= uVar1) goto LAB_033bfa24;
            uVar17 = *(undefined8 *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
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
            uVar10 = FUN_033c0b48(uVar17,plVar8);
            unaff_x22 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
joined_r0x033bf484:
            unaff_x24 = in_stack_00000040;
            unaff_x28 = in_stack_00000058;
            if ((uVar10 & 1) == 0) break;
          }
        }
      }
    }
LAB_033bf488:
    uVar7 = uVar7 + 1;
    unaff_x24 = in_stack_00000040;
    unaff_x28 = in_stack_00000058;
    unaff_w20 = uVar6;
  } while (uVar6 != uVar7);
LAB_033bf4a8:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar10 = FUN_033ab18c(plStack0000000000000048,0,0);
  param_2 = plStack0000000000000048;
  if (((uVar10 & 1) == 0) || (unaff_w20 != *(int *)(lVar15 + 0x18) - 1U)) goto LAB_033bf674;
  lVar15 = *unaff_x28;
  if (lVar15 == 0) goto LAB_033bec5c;
  unaff_x19 = (-(ulong)(unaff_w20 >> 0x1f) & 0xfffffff800000000 | (ulong)unaff_w20 << 3) + 0x20;
  goto LAB_033bf4f4;
  while( true ) {
    plVar14 = *(long **)(lVar15 + 0x20 + uVar10 * 8);
    if ((plVar14 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200)),
       plVar16 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar16 + 3) <= (uint)uVar10) goto LAB_033bfa24;
    *plVar13 = lVar11;
    thunk_FUN_01e10808(plVar13,lVar11);
    uVar6 = *(uint *)(lVar15 + 0x18);
    uVar10 = uVar10 + 1;
    plVar13 = plVar13 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar10) break;
LAB_033c000c:
    if (uVar6 <= (uint)uVar10) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar11 = in_stack_00000038[4];
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar9 = FUN_033ab18c(lVar11,0,0);
      uVar6 = (uint)uVar10;
      if ((uVar9 & 1) == 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar13 = *(long **)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar13 == (long *)0x0) ||
           (lVar15 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
           plVar16 == (long *)0x0)) goto LAB_033bec5c;
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
        goto LAB_033c07f0;
        uVar7 = *(uint *)(plVar16 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar15 = in_stack_00000038[4];
        uVar17 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        lVar15 = thunk_FUN_033b4750(lVar15,uVar17,0);
        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)) {
LAB_033c07f0:
          uVar17 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar17,0);
        }
        uVar7 = *(uint *)(plVar16 + 3);
      }
      if (uVar6 < uVar7) {
        plVar16[(long)(int)uVar6 + 4] = lVar15;
        thunk_FUN_01e10808(plVar16 + (long)(int)uVar6 + 4,lVar15);
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


