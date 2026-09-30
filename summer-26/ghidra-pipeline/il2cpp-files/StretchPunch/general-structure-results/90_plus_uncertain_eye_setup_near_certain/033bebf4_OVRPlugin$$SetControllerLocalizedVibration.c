/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 033bebf4
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


long OVRPlugin__SetControllerLocalizedVibration(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong unaff_x19;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  undefined8 uVar20;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  ulong uVar21;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 uVar22;
  long *unaff_x28;
  long lVar23;
  long *in_stack_00000010;
  long *in_stack_00000038;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  
  do {
    lVar8 = *(long *)(param_1 + unaff_x19 * 8 + 0x20);
    if (lVar8 != 0) {
      lVar8 = thunk_FUN_01dfff04(lVar8,0);
      if (unaff_x26 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*unaff_x26 + 0x40)), lVar9 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(unaff_x26 + 3) <= unaff_x19) break;
      *unaff_x27 = lVar8;
      thunk_FUN_01e10808(unaff_x27,lVar8);
      param_1 = *unaff_x28;
    }
    unaff_x19 = unaff_x19 + 1;
    unaff_x27 = unaff_x27 + 1;
    if (param_1 == 0) goto LAB_033bec5c;
    if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x19) {
      if ((int)unaff_x24[3] < 1) goto LAB_033c085c;
      uVar21 = 0;
      uVar7 = 0;
      uVar14 = unaff_x24[3] & 0xffffffff;
      plVar13 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      goto LAB_033bec84;
    }
  } while (unaff_x19 < *(uint *)(param_1 + 0x18));
  goto LAB_033bfa24;
LAB_033bec84:
  if (uVar14 <= uVar21) goto LAB_033bfa24;
  plVar19 = unaff_x24 + uVar21 + 4;
  uVar14 = FUN_03308638(*plVar19,0,0);
  if ((uVar14 & 1) != 0) goto LAB_033bf82c;
  if (*(uint *)(unaff_x24 + 3) <= uVar21) goto LAB_033bfa24;
  plVar10 = (long *)*plVar19;
  if ((plVar10 == (long *)0x0) ||
     (lVar8 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0)), lVar8 == 0
     )) goto LAB_033bec5c;
  uVar14 = *(ulong *)(lVar8 + 0x18);
  lVar9 = *unaff_x28;
  if (uVar14 == 0) {
    if (lVar9 == 0) goto LAB_033bec5c;
    if (*(long *)(lVar9 + 0x18) != 0) {
      if (*(uint *)(unaff_x24 + 3) <= uVar21) goto LAB_033bfa24;
      plVar10 = (long *)*plVar19;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      uVar5 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
      if ((uVar5 >> 1 & 1) == 0) goto LAB_033bf82c;
    }
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar21) || (*(uint *)(unaff_x23 + 0x18) <= uVar7))
    goto LAB_033bfa24;
    *(undefined8 *)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20) =
         *(undefined8 *)(unaff_x23 + uVar21 * 8 + 0x20);
    thunk_FUN_01e10808();
    uVar5 = *(uint *)(unaff_x24 + 3);
    if (uVar5 <= uVar21) goto LAB_033bfa24;
    lVar8 = *plVar19;
joined_r0x033bedec:
    if (lVar8 != 0) {
      lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar9 == 0) goto LAB_033c07f0;
      uVar5 = (uint)unaff_x24[3];
    }
    lVar9 = (long)(int)uVar7;
    if (uVar5 <= uVar7) goto LAB_033bfa24;
    unaff_x24[lVar9 + 4] = lVar8;
    uVar7 = uVar7 + 1;
    thunk_FUN_01e10808(unaff_x24 + lVar9 + 4,lVar8);
    plVar13 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    goto LAB_033bf82c;
  }
  if (lVar9 == 0) goto LAB_033bec5c;
  uVar5 = *(uint *)(lVar9 + 0x18);
  iVar6 = (int)uVar14;
  if ((int)uVar5 < iVar6) {
    uVar18 = iVar6 - 1;
    if ((int)uVar5 < (int)uVar18) {
      plVar10 = (long *)(lVar8 + (long)(int)uVar5 * 8 + 0x20);
      do {
        if ((uint)uVar14 <= uVar5) goto LAB_033bfa24;
        plVar11 = (long *)*plVar10;
        if (plVar11 == (long *)0x0) goto LAB_033bec5c;
        lVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
        puVar3 = StringLiteral_4821;
        lVar15 = *(long *)StringLiteral_4821;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar15);
          lVar15 = *(long *)puVar3;
        }
        if (lVar9 == **(long **)(lVar15 + 0xb8)) {
          uVar14 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar18 = *(uint *)(lVar8 + 0x18) - 1;
          break;
        }
        uVar14 = *(ulong *)(lVar8 + 0x18);
        uVar5 = uVar5 + 1;
        plVar10 = plVar10 + 1;
        uVar18 = (int)uVar14 - 1;
      } while ((int)uVar5 < (int)uVar18);
    }
    if (uVar5 == uVar18) {
      if ((uint)uVar14 <= uVar5) goto LAB_033bfa24;
      plVar11 = (long *)(lVar8 + (long)(int)uVar5 * 8 + 0x20);
      plVar10 = (long *)*plVar11;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      lVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
      puVar3 = StringLiteral_4821;
      lVar15 = *(long *)StringLiteral_4821;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar15);
        lVar15 = *(long *)puVar3;
      }
      if (lVar9 != **(long **)(lVar15 + 0xb8)) goto LAB_033bf040;
      if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_033bfa24;
      plVar10 = (long *)*plVar11;
      if ((plVar10 == (long *)0x0) ||
         (lVar9 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
         lVar9 == 0)) goto LAB_033bec5c;
      uVar14 = FUN_033ac038(lVar9,0);
      if ((uVar14 & 1) != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_033bfa24;
        plVar10 = (long *)*plVar11;
        uVar20 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*plVar13 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar20 = FUN_033a87c8(uVar20,0);
        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
        uVar14 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar20,1,*(undefined8 *)(*plVar10 + 0x210))
        ;
        plVar13 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar14 & 1) != 0) {
          if (uVar5 < *(uint *)(lVar8 + 0x18)) {
            plVar11 = (long *)*plVar11;
            if (plVar11 != (long *)0x0) {
              plVar10 = (long *)(**(code **)(*plVar11 + 0x1d8))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
              goto joined_r0x033bf814;
            }
            goto LAB_033bec5c;
          }
          goto LAB_033bfa24;
        }
      }
    }
    goto LAB_033bf82c;
  }
  if (iVar6 == 0) goto LAB_033bfa24;
  uVar18 = iVar6 - 1;
  lVar9 = (long)(int)uVar18;
  plVar11 = (long *)(lVar8 + lVar9 * 8 + 0x20);
  plVar10 = (long *)*plVar11;
  if ((plVar10 == (long *)0x0) ||
     (lVar15 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
     lVar15 == 0)) goto LAB_033bec5c;
  uVar14 = FUN_033ac038(lVar15,0);
  if (iVar6 < (int)uVar5) {
    if ((uVar14 & 1) != 0) {
      if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_033bfa24;
      plVar10 = (long *)*plVar11;
      uVar20 = *(undefined8 *)StringLiteral_8800;
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar20 = FUN_033a87c8(uVar20,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      uVar14 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar20,1,*(undefined8 *)(*plVar10 + 0x210));
      plVar13 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar14 & 1) != 0) {
        if (unaff_x23 == 0) goto LAB_033bec5c;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
        lVar15 = *(long *)(unaff_x23 + uVar21 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_033bfa24;
        if (*(uint *)(lVar15 + lVar9 * 4 + 0x20) == uVar18) {
LAB_033bf854:
          if (uVar18 < *(uint *)(lVar8 + 0x18)) {
            plVar11 = (long *)*plVar11;
            if (plVar11 != (long *)0x0) {
              plVar10 = (long *)(**(code **)(*plVar11 + 0x1d8))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
joined_r0x033bf814:
              if (plVar10 != (long *)0x0) {
                plStack0000000000000048 =
                     (long *)(**(code **)(*plVar10 + 0x418))
                                       (plVar10,*(undefined8 *)(*plVar10 + 0x420));
                goto LAB_033bf044;
              }
            }
            goto LAB_033bec5c;
          }
          goto LAB_033bfa24;
        }
      }
    }
    goto LAB_033bf82c;
  }
  if ((uVar14 & 1) == 0) {
LAB_033bf040:
    plStack0000000000000048 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_033bfa24;
    plVar10 = (long *)*plVar11;
    uVar20 = *(undefined8 *)StringLiteral_8800;
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar20 = FUN_033a87c8(uVar20,0);
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    uVar14 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar20,1,*(undefined8 *)(*plVar10 + 0x210));
    plVar13 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    if ((uVar14 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
      lVar15 = *(long *)(unaff_x23 + uVar21 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_033bfa24;
      if (*(uint *)(lVar15 + lVar9 * 4 + 0x20) != uVar18) goto LAB_033bf040;
      if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_033bfa24;
      plVar10 = (long *)*plVar11;
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
         unaff_x26 == (long *)0x0)) goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 3) <= uVar18) goto LAB_033bfa24;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      uVar14 = (**(code **)(*plVar10 + 0x288))
                         (plVar10,unaff_x26[lVar9 + 4],*(undefined8 *)(*plVar10 + 0x290));
      if ((uVar14 & 1) == 0) goto LAB_033bf854;
      goto LAB_033bf040;
    }
    plStack0000000000000048 = (long *)0x0;
  }
LAB_033bf044:
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = FUN_033ab18c(plStack0000000000000048,0,0);
  if ((uVar14 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_033bec5c;
    uVar5 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar5 = *(int *)(lVar8 + 0x18) - 1;
  }
  if ((int)uVar5 < 1) {
    uVar18 = 0;
  }
  else {
    uVar17 = 0;
    plVar10 = (long *)(unaff_x23 + uVar21 * 8 + 0x20);
    do {
      if (*(uint *)(lVar8 + 0x18) <= uVar17) goto LAB_033bfa24;
      lVar9 = (long)(int)uVar17;
      plVar11 = *(long **)(lVar8 + lVar9 * 8 + 0x20);
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x1d8))
                                      (plVar11,*(undefined8 *)(*plVar11 + 0x1e0)),
         plVar11 == (long *)0x0)) goto LAB_033bec5c;
      uVar14 = FUN_033ac048(plVar11,0);
      if ((uVar14 & 1) != 0) {
        plVar11 = (long *)(**(code **)(*plVar11 + 0x418))(plVar11,*(undefined8 *)(*plVar11 + 0x420))
        ;
      }
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
      lVar15 = *plVar10;
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
      if (unaff_x26 == (long *)0x0) goto LAB_033bec5c;
      uVar18 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 3) <= uVar18) goto LAB_033bfa24;
      lVar15 = unaff_x26[(long)(int)uVar18 + 4];
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar14 = FUN_033aa3b4(plVar11,lVar15,0);
      if ((uVar14 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
          lVar15 = *plVar10;
          if (lVar15 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
          lVar16 = *unaff_x28;
          if (lVar16 == 0) goto LAB_033bec5c;
          uVar18 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
          if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_033bfa24;
          lVar15 = *plVar13;
          lVar16 = *(long *)(lVar16 + (long)(int)uVar18 * 8 + 0x20);
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar15 = *plVar13;
          }
          if (lVar16 == *(long *)(*(long *)(lVar15 + 0xb8) + 0x18)) goto LAB_033bf488;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
        lVar15 = *plVar10;
        if (lVar15 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_033bec5c;
        uVar18 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_033bfa24;
        if (*(long *)(lVar16 + (long)(int)uVar18 * 8 + 0x20) != 0) {
          uVar20 = *(undefined8 *)StringLiteral_2477;
          if (*(int *)(*plVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar20 = FUN_033a87c8(uVar20,0);
          uVar14 = FUN_033aa3b4(plVar11,uVar20,0);
          if ((uVar14 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto LAB_033bec5c;
            uVar14 = FUN_033ac7d8(plVar11,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
            lVar15 = *plVar10;
            if (lVar15 == 0) goto LAB_033bec5c;
            if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
               (uVar18 = *(uint *)(lVar15 + lVar9 * 4 + 0x20), *(uint *)(unaff_x26 + 3) <= uVar18))
            goto LAB_033bfa24;
            lVar15 = unaff_x26[(long)(int)uVar18 + 4];
            if (*(int *)(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar12 = FUN_033aa3b4(lVar15,0,0);
            plVar13 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            uVar18 = uVar17;
            if ((uVar14 & 1) == 0) {
              if ((uVar12 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
                lVar15 = *plVar10;
                if (lVar15 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
                   (uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20), *(uint *)(unaff_x26 + 3) <= uVar1)
                   ) goto LAB_033bfa24;
                uVar14 = (**(code **)(*plVar11 + 0x288))
                                   (plVar11,unaff_x26[(long)(int)uVar1 + 4],
                                    *(undefined8 *)(*plVar11 + 0x290));
                if ((uVar14 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
                  lVar15 = *plVar10;
                  if (lVar15 == 0) goto LAB_033bec5c;
                  if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
                     (uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 3) <= uVar1)) goto LAB_033bfa24;
                  if (unaff_x26[(long)(int)uVar1 + 4] == 0) goto LAB_033bec5c;
                  uVar14 = FUN_033ac5f4(unaff_x26[(long)(int)uVar1 + 4],0);
                  if ((uVar14 & 1) != 0) {
                    if (uVar21 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar15 = *plVar10;
                      if (lVar15 != 0) {
                        if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                          lVar16 = *unaff_x28;
                          if (lVar16 != 0) {
                            uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                              uVar14 = (**(code **)(*plVar11 + 0x858))
                                                 (plVar11,*(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar11 + 0x860));
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
              if ((uVar12 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= uVar21) goto LAB_033bfa24;
              lVar15 = *plVar10;
              if (lVar15 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
              lVar16 = *unaff_x28;
              if (lVar16 == 0) goto LAB_033bec5c;
              uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
              if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_033bfa24;
              uVar20 = *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(plVar11);
              }
              uVar14 = FUN_033c0b48(uVar20,plVar11);
              plVar13 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              ;
joined_r0x033bf484:
              if ((uVar14 & 1) == 0) break;
            }
          }
        }
      }
LAB_033bf488:
      uVar17 = uVar17 + 1;
      uVar18 = uVar5;
    } while (uVar5 != uVar17);
  }
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = FUN_033ab18c(plStack0000000000000048,0,0);
  if (((uVar14 & 1) != 0) && (uVar18 == *(int *)(lVar8 + 0x18) - 1U)) {
    lVar8 = *unaff_x28;
    if (lVar8 == 0) goto LAB_033bec5c;
    lVar9 = (-(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar18 << 3) + 0x20;
    while ((int)uVar18 < *(int *)(lVar8 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar14 = FUN_033ac7d8(plStack0000000000000048,0), unaff_x26 == (long *)0x0))
      goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 3) <= uVar18) goto LAB_033bfa24;
      uVar20 = *(undefined8 *)((long)unaff_x26 + lVar9);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_033aa3b4(uVar20,0,0);
      plVar13 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar14 & 1) == 0) {
        if ((uVar12 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 3) <= uVar18) goto LAB_033bfa24;
          uVar14 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)((long)unaff_x26 + lVar9),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar14 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 3) <= uVar18) goto LAB_033bfa24;
            if (*(long *)((long)unaff_x26 + lVar9) == 0) goto LAB_033bec5c;
            uVar14 = FUN_033ac5f4(*(long *)((long)unaff_x26 + lVar9),0);
            if ((uVar14 & 1) != 0) {
              lVar8 = *unaff_x28;
              if (lVar8 != 0) {
                if (uVar18 < *(uint *)(lVar8 + 0x18)) {
                  uVar14 = (**(code **)(*plStack0000000000000048 + 0x858))
                                     (plStack0000000000000048,*(undefined8 *)(lVar8 + lVar9),
                                      *(undefined8 *)(*plStack0000000000000048 + 0x860));
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
        if ((uVar12 & 1) != 0) break;
        lVar8 = *unaff_x28;
        if (lVar8 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar8 + 0x18) <= uVar18) goto LAB_033bfa24;
        uVar20 = *(undefined8 *)(lVar8 + lVar9);
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
        if ((*(byte *)(*plStack0000000000000048 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plStack0000000000000048 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plStack0000000000000048);
        }
        uVar14 = FUN_033c0b48(uVar20,plStack0000000000000048);
        plVar13 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
joined_r0x033bf658:
        if ((uVar14 & 1) == 0) break;
      }
      lVar8 = *unaff_x28;
      uVar18 = uVar18 + 1;
      lVar9 = lVar9 + 8;
      if (lVar8 == 0) goto LAB_033bec5c;
    }
  }
  if (*unaff_x28 == 0) goto LAB_033bec5c;
  if (uVar18 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 != 0) {
      if ((uVar21 < *(uint *)(unaff_x23 + 0x18)) && (uVar7 < *(uint *)(unaff_x23 + 0x18))) {
        *(undefined8 *)(unaff_x23 + (long)(int)uVar7 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + uVar21 * 8 + 0x20);
        thunk_FUN_01e10808();
        if (in_stack_00000038 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar8 = thunk_FUN_01de26bc(plStack0000000000000048,
                                         *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar8 != 0)) {
            if (uVar7 < *(uint *)(in_stack_00000038 + 3)) {
              in_stack_00000038[(long)(int)uVar7 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01e10808(in_stack_00000038 + (long)(int)uVar7 + 4,plStack0000000000000048);
              uVar5 = *(uint *)(unaff_x24 + 3);
              if (uVar21 < uVar5) {
                lVar8 = *plVar19;
                goto joined_r0x033bedec;
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
    goto LAB_033bec5c;
  }
LAB_033bf82c:
  uVar5 = *(uint *)(unaff_x24 + 3);
  uVar14 = (ulong)uVar5;
  uVar21 = uVar21 + 1;
  if ((long)(int)uVar5 <= (long)uVar21) goto LAB_033bf8b4;
  goto LAB_033bec84;
LAB_033bf8b4:
  if (uVar7 == 1) {
    if (unaff_x25 != 0) {
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
      lVar8 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
      lVar9 = *unaff_x28;
      if ((lVar9 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
      if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
      lVar15 = in_stack_00000038[4];
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      bVar4 = FUN_033ab18c(lVar15,0,0);
      lVar15 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
      if (lVar8 == 0) {
        lVar16 = 0;
      }
      else {
        uVar20 = *(undefined8 *)StringLiteral_151;
        lVar16 = thunk_FUN_01de26bc(lVar8,uVar20);
        if (lVar16 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar8,uVar20);
        }
      }
      uVar20 = *(undefined8 *)(lVar9 + 0x18);
      FUN_033d8040(lVar15,0);
      *(long *)(lVar15 + 0x10) = lVar16;
      thunk_FUN_01e10808((long *)(lVar15 + 0x10),lVar16);
      *(int *)(lVar15 + 0x18) = (int)uVar20;
      *(byte *)(lVar15 + 0x1c) = bVar4 & 1;
      *in_stack_00000010 = lVar15;
      thunk_FUN_01e10808(in_stack_00000010,lVar15);
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
      uVar20 = *(undefined8 *)(unaff_x23 + 0x20);
      lVar8 = *unaff_x28;
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033c0ca4(uVar20,lVar8);
      uVar5 = (uint)unaff_x24[3];
      plVar13 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
    }
    if (uVar5 == 0) goto LAB_033bfa24;
    plVar10 = unaff_x24 + 4;
    plVar19 = (long *)*plVar10;
    if (((plVar19 == (long *)0x0) ||
        (lVar8 = (**(code **)(*plVar19 + 0x3b8))(plVar19,*(undefined8 *)(*plVar19 + 0x3c0)),
        lVar8 == 0)) || (*unaff_x28 == 0)) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    iVar6 = *(int *)(*unaff_x28 + 0x18);
    if (*(int *)(lVar8 + 0x18) == iVar6) {
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
      lVar9 = in_stack_00000038[4];
      if (*(int *)(*plVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar21 = FUN_033ab18c(lVar9,0,0);
      if ((uVar21 & 1) != 0) {
        plVar13 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar8 + 0x18));
        uVar7 = *(int *)(lVar8 + 0x18) - 1;
        FUN_033b4f38(*unaff_x28,0,plVar13,0,uVar7,0);
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar9 = in_stack_00000038[4];
        lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if (lVar8 == 0) goto LAB_033bec5c;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_033bfa24;
        *(undefined4 *)(lVar8 + 0x20) = 1;
        lVar8 = thunk_FUN_033b4750(lVar9,lVar8,0);
        if (plVar13 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0)) {
LAB_033c07f0:
          uVar20 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar20,0);
        }
        if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
        plVar19 = plVar13 + (long)(int)uVar7 + 4;
        *plVar19 = lVar8;
        thunk_FUN_01e10808(plVar19,lVar8);
        if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
        lVar8 = *unaff_x28;
        if (lVar8 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_033bec5c;
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar19);
        }
        FUN_033b49e8(plVar19,*(undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20),0,0);
        goto LAB_033c0730;
      }
    }
    else {
      if (iVar6 < *(int *)(lVar8 + 0x18)) {
        plVar13 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
        lVar9 = *unaff_x28;
        if (lVar9 != 0) {
          uVar21 = 0;
          plVar19 = plVar13 + 4;
          do {
            if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar21) {
              uVar7 = *(uint *)(lVar8 + 0x18);
              if ((int)(uVar7 - 1) <= (int)uVar21) goto LAB_033c0080;
              goto LAB_033c000c;
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar21) goto LAB_033bfa24;
            if (plVar13 == (long *)0x0) break;
            lVar9 = *(long *)(lVar9 + uVar21 * 8 + 0x20);
            if ((lVar9 != 0) &&
               (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_033c07f0;
            if (*(uint *)(plVar13 + 3) <= uVar21) goto LAB_033bfa24;
            *plVar19 = lVar9;
            thunk_FUN_01e10808(plVar19,lVar9);
            lVar9 = *unaff_x28;
            uVar21 = uVar21 + 1;
            plVar19 = plVar19 + 1;
          } while (lVar9 != 0);
        }
        goto LAB_033bec5c;
      }
      if ((int)unaff_x24[3] == 0) goto LAB_033bfa24;
      plVar13 = (long *)*plVar10;
      if (plVar13 == (long *)0x0) goto LAB_033bec5c;
      uVar7 = (**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
      if ((uVar7 >> 1 & 1) == 0) {
        plVar13 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar8 + 0x18));
        uVar7 = *(int *)(lVar8 + 0x18) - 1;
        FUN_033b4f38(*unaff_x28,0,plVar13,0,uVar7,0);
        if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar9 = in_stack_00000038[4];
        lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if ((*unaff_x28 == 0) || (lVar8 == 0)) goto LAB_033bec5c;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_033bfa24;
        *(uint *)(lVar8 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
        lVar8 = thunk_FUN_033b4750(lVar9,lVar8,0);
        if (plVar13 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
        plVar19 = plVar13 + (long)(int)uVar7 + 4;
        *plVar19 = lVar8;
        thunk_FUN_01e10808(plVar19,lVar8);
        if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
        lVar8 = *unaff_x28;
        if (lVar8 == 0) goto LAB_033bec5c;
        plVar19 = (long *)*plVar19;
        if (plVar19 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)StringLiteral_1183)) goto LAB_033c090c;
        }
        FUN_033b4f38(lVar8,uVar7,plVar19,0,*(int *)(lVar8 + 0x18) - uVar7,0);
        *unaff_x28 = (long)plVar13;
        thunk_FUN_01e10808(unaff_x28,plVar13);
      }
    }
    goto LAB_033c0740;
  }
  if (uVar7 == 0) {
LAB_033c085c:
    uVar20 = thunk_FUN_01dd295c(StringLiteral_8802);
    uVar20 = FUN_033d6e4c(uVar20,0);
    thunk_FUN_01dd295c(StringLiteral_1159);
    uVar22 = thunk_FUN_01de27b8();
    FUN_033958dc(uVar22,uVar20,0);
LAB_033c0894:
    uVar20 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar22,uVar20);
  }
  if (1 < (int)uVar7) {
    if (uVar5 != 0) {
      lVar8 = 0;
      lVar9 = 0;
      uVar5 = 0;
      bVar2 = false;
      while( true ) {
        if (unaff_x23 == 0) goto LAB_033bec5c;
        if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar5) break;
        if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
        if (((((uint)in_stack_00000038[3] <= uVar5) || (uVar21 = lVar8 + 1, uVar14 <= uVar21)) ||
            ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar21)) ||
           ((in_stack_00000038[3] & 0xffffffffU) <= uVar21)) break;
        lVar16 = unaff_x24[lVar9 + 4];
        lVar23 = unaff_x24[lVar8 + 5];
        lVar15 = in_stack_00000038[lVar9 + 4];
        uVar20 = *(undefined8 *)(unaff_x23 + lVar9 * 8 + 0x20);
        uVar22 = *(undefined8 *)(unaff_x23 + 0x28 + lVar8 * 8);
        lVar9 = in_stack_00000038[lVar8 + 5];
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar6 = FUN_033c0e28(lVar16,uVar20,lVar15,lVar23,uVar22,lVar9);
        if (iVar6 == 0) {
          bVar2 = true;
        }
        else if (iVar6 == 2) {
          uVar5 = (int)lVar8 + 1;
          bVar2 = false;
        }
        if ((ulong)uVar7 - 2 == lVar8) {
          plVar13 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          if (!bVar2) goto LAB_033bfae0;
          uVar20 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar20 = FUN_033d6e4c(uVar20,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar22 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar22,uVar20,0);
          goto LAB_033c0894;
        }
        lVar9 = (long)(int)uVar5;
        lVar8 = lVar8 + 1;
        uVar14 = unaff_x24[3] & 0xffffffff;
        if ((uint)unaff_x24[3] <= uVar5) break;
      }
    }
    goto LAB_033bfa24;
  }
  uVar5 = 0;
LAB_033bfae0:
  if (unaff_x25 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_033bfa24;
    plVar19 = (long *)(unaff_x23 + (long)(int)uVar5 * 8 + 0x20);
    lVar8 = *plVar19;
    if (lVar8 == 0) goto LAB_033bec5c;
    lVar8 = FUN_033b5440(lVar8,0);
    lVar9 = *unaff_x28;
    if ((lVar9 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_033bfa24;
    lVar15 = in_stack_00000038[(long)(int)uVar5 + 4];
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar15,0,0);
    lVar15 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar8 == 0) {
      lVar16 = 0;
    }
    else {
      uVar20 = *(undefined8 *)StringLiteral_151;
      lVar16 = thunk_FUN_01de26bc(lVar8,uVar20);
      if (lVar16 == 0) goto LAB_033bfb98;
    }
    uVar20 = *(undefined8 *)(lVar9 + 0x18);
    FUN_033d8040(lVar15,0);
    *(long *)(lVar15 + 0x10) = lVar16;
    thunk_FUN_01e10808((long *)(lVar15 + 0x10),lVar16);
    *(int *)(lVar15 + 0x18) = (int)uVar20;
    *(byte *)(lVar15 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar15;
    thunk_FUN_01e10808(in_stack_00000010,lVar15);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar5) goto LAB_033bfa24;
    lVar8 = *plVar19;
    lVar9 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar8,lVar9);
    plVar13 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar5) goto LAB_033bfa24;
  plVar10 = unaff_x24 + (long)(int)uVar5 + 4;
  plVar19 = (long *)*plVar10;
  if (((plVar19 == (long *)0x0) ||
      (lVar8 = (**(code **)(*plVar19 + 0x3b8))(plVar19,*(undefined8 *)(*plVar19 + 0x3c0)),
      lVar8 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar6 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar8 + 0x18) == iVar6) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_033bfa24;
    lVar9 = in_stack_00000038[(long)(int)uVar5 + 4];
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar21 = FUN_033ab18c(lVar9,0,0);
    if ((uVar21 & 1) != 0) {
      plVar13 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar8 + 0x18))
      ;
      uVar7 = *(int *)(lVar8 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar13,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_033bfa24;
      lVar9 = in_stack_00000038[(long)(int)uVar5 + 4];
      lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar8 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar8 + 0x20) = 1;
      lVar8 = thunk_FUN_033b4750(lVar9,lVar8,0);
      if (plVar13 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
      plVar19 = plVar13 + (long)(int)uVar7 + 4;
      *plVar19 = lVar8;
      thunk_FUN_01e10808(plVar19,lVar8);
      if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
      lVar8 = *unaff_x28;
      if (lVar8 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_033bfa24;
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) goto LAB_033bec5c;
      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar19 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)StringLiteral_1183)) goto LAB_033c090c;
      FUN_033b49e8(plVar19,*(undefined8 *)(lVar8 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar6 < *(int *)(lVar8 + 0x18)) {
      plVar13 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar9 = *unaff_x28;
      if (lVar9 != 0) {
        uVar21 = 0;
        plVar19 = plVar13 + 4;
        do {
          if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar21) {
            uVar7 = *(uint *)(lVar8 + 0x18);
            if ((int)(uVar7 - 1) <= (int)uVar21) goto LAB_033c0618;
            goto LAB_033c05a4;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar21) goto LAB_033bfa24;
          if (plVar13 == (long *)0x0) break;
          lVar9 = *(long *)(lVar9 + uVar21 * 8 + 0x20);
          if ((lVar9 != 0) &&
             (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar13 + 3) <= uVar21) goto LAB_033bfa24;
          *plVar19 = lVar9;
          thunk_FUN_01e10808(plVar19,lVar9);
          lVar9 = *unaff_x28;
          uVar21 = uVar21 + 1;
          plVar19 = plVar19 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_033bec5c;
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar5) goto LAB_033bfa24;
    plVar13 = (long *)*plVar10;
    if (plVar13 == (long *)0x0) goto LAB_033bec5c;
    uVar7 = (**(code **)(*plVar13 + 600))(plVar13,*(undefined8 *)(*plVar13 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar13 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar8 + 0x18))
      ;
      uVar7 = *(int *)(lVar8 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar13,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_033bfa24;
      lVar9 = in_stack_00000038[(long)(int)uVar5 + 4];
      lVar8 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar8 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar8 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar8 = thunk_FUN_033b4750(lVar9,lVar8,0);
      if (plVar13 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar8 != 0) &&
         (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
      plVar19 = plVar13 + (long)(int)uVar7 + 4;
      *plVar19 = lVar8;
      thunk_FUN_01e10808(plVar19,lVar8);
      if (*(uint *)(plVar13 + 3) <= uVar7) goto LAB_033bfa24;
      lVar8 = *unaff_x28;
      if (lVar8 == 0) goto LAB_033bec5c;
      plVar19 = (long *)*plVar19;
      if (plVar19 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar19 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar8,uVar7,plVar19,0,*(int *)(lVar8 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar13;
      thunk_FUN_01e10808(unaff_x28,plVar13);
    }
  }
  goto OVRPlugin__TriggerVibrationAction;
  while( true ) {
    plVar11 = *(long **)(lVar8 + 0x20 + uVar21 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar9 != 0) &&
       (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar13 + 3) <= (uint)uVar21) goto LAB_033bfa24;
    *plVar19 = lVar9;
    thunk_FUN_01e10808(plVar19,lVar9);
    uVar7 = *(uint *)(lVar8 + 0x18);
    uVar21 = uVar21 + 1;
    plVar19 = plVar19 + 1;
    if ((int)(uVar7 - 1) <= (int)uVar21) break;
LAB_033c000c:
    if (uVar7 <= (uint)uVar21) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
  lVar9 = in_stack_00000038[4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = FUN_033ab18c(lVar9,0,0);
  uVar7 = (uint)uVar21;
  if ((uVar14 & 1) == 0) {
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_033bfa24;
    plVar19 = *(long **)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
    if ((plVar19 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar19 + 0x1f8))(plVar19,*(undefined8 *)(*plVar19 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
    goto LAB_033c07f0;
    uVar5 = *(uint *)(plVar13 + 3);
  }
  else {
    if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
    lVar8 = in_stack_00000038[4];
    uVar20 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar8 = thunk_FUN_033b4750(lVar8,uVar20,0);
    if (plVar13 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
    goto LAB_033c07f0;
    uVar5 = *(uint *)(plVar13 + 3);
  }
  if (uVar5 <= uVar7) goto LAB_033bfa24;
  plVar13[(long)(int)uVar7 + 4] = lVar8;
  thunk_FUN_01e10808(plVar13 + (long)(int)uVar7 + 4,lVar8);
LAB_033c0730:
  *unaff_x28 = (long)plVar13;
  thunk_FUN_01e10808(unaff_x28,plVar13);
LAB_033c0740:
  if ((int)unaff_x24[3] != 0) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    plVar11 = *(long **)(lVar8 + 0x20 + uVar21 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar9 != 0) &&
       (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar13 + 3) <= (uint)uVar21) goto LAB_033bfa24;
    *plVar19 = lVar9;
    thunk_FUN_01e10808(plVar19,lVar9);
    uVar7 = *(uint *)(lVar8 + 0x18);
    uVar21 = uVar21 + 1;
    plVar19 = plVar19 + 1;
    if ((int)(uVar7 - 1) <= (int)uVar21) break;
LAB_033c05a4:
    if (uVar7 <= (uint)uVar21) goto LAB_033bfa24;
  }
LAB_033c0618:
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_033bfa24;
  lVar9 = in_stack_00000038[(long)(int)uVar5 + 4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar14 = FUN_033ab18c(lVar9,0,0);
  uVar7 = (uint)uVar21;
  if ((uVar14 & 1) == 0) {
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_033bfa24;
    plVar19 = *(long **)(lVar8 + (long)(int)uVar7 * 8 + 0x20);
    if ((plVar19 == (long *)0x0) ||
       (lVar8 = (**(code **)(*plVar19 + 0x1f8))(plVar19,*(undefined8 *)(*plVar19 + 0x200)),
       plVar13 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
    goto LAB_033c07f0;
    uVar18 = *(uint *)(plVar13 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000038 + 3) <= uVar5) goto LAB_033bfa24;
    lVar8 = in_stack_00000038[(long)(int)uVar5 + 4];
    uVar20 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar8 = thunk_FUN_033b4750(lVar8,uVar20,0);
    if (plVar13 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_01de26bc(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar9 == 0))
    goto LAB_033c07f0;
    uVar18 = *(uint *)(plVar13 + 3);
  }
  if (uVar18 <= uVar7) goto LAB_033bfa24;
  plVar13[(long)(int)uVar7 + 4] = lVar8;
  thunk_FUN_01e10808(plVar13 + (long)(int)uVar7 + 4,lVar8);
FUN_033c07b0:
  *unaff_x28 = (long)plVar13;
  thunk_FUN_01e10808(unaff_x28,plVar13);
OVRPlugin__TriggerVibrationAction:
  if (uVar5 < *(uint *)(unaff_x24 + 3)) {
LAB_033c07cc:
    return *plVar10;
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


