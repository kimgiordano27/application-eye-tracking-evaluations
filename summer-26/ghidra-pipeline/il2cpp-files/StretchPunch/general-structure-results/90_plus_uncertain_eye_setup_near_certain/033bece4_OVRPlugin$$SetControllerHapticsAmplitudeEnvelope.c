/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsAmplitudeEnvelope
ENTRY_POINT: 033bece4
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


long OVRPlugin__SetControllerHapticsAmplitudeEnvelope(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  uint unaff_w20;
  uint uVar17;
  long unaff_x21;
  undefined8 uVar18;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar19;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar20;
  long *unaff_x28;
  long lVar21;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x033bece4:
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar7 = (uint)unaff_x21;
  if ((int)uVar6 < (int)uVar7) {
    uVar17 = uVar7 - 1;
    if ((int)uVar6 < (int)uVar17) {
      plVar10 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)unaff_x21 <= uVar6) goto LAB_033bfa24;
        plVar8 = (long *)*plVar10;
        if (plVar8 == (long *)0x0) goto LAB_033bec5c;
        lVar9 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
        puVar3 = StringLiteral_4821;
        lVar15 = *(long *)StringLiteral_4821;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar15);
          lVar15 = *(long *)puVar3;
        }
        if (lVar9 == **(long **)(lVar15 + 0xb8)) {
          uVar7 = *(uint *)(unaff_x27 + 0x18);
          uVar17 = uVar7 - 1;
          unaff_x28 = in_stack_00000058;
          break;
        }
        unaff_x21 = *(long *)(unaff_x27 + 0x18);
        uVar6 = uVar6 + 1;
        plVar10 = plVar10 + 1;
        uVar7 = (uint)unaff_x21;
        uVar17 = uVar7 - 1;
        unaff_x28 = in_stack_00000058;
      } while ((int)uVar6 < (int)uVar17);
    }
    if (uVar6 != uVar17) goto LAB_033bf82c;
    if (uVar7 <= uVar6) goto LAB_033bfa24;
    plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
    plVar10 = (long *)*plVar8;
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    lVar9 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
    puVar3 = StringLiteral_4821;
    lVar15 = *(long *)StringLiteral_4821;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(lVar15);
      lVar15 = *(long *)puVar3;
    }
    if (lVar9 != **(long **)(lVar15 + 0xb8)) goto LAB_033bf040;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar10 = (long *)*plVar8;
    if ((plVar10 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
       lVar9 == 0)) goto LAB_033bec5c;
    uVar11 = FUN_033ac038(lVar9,0);
    if ((uVar11 & 1) == 0) goto LAB_033bf82c;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar10 = (long *)*plVar8;
    uVar18 = *(undefined8 *)StringLiteral_8800;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar18 = FUN_033a87c8(uVar18,0);
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    uVar11 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar18,1,*(undefined8 *)(*plVar10 + 0x210));
    unaff_x22 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    if ((uVar11 & 1) == 0) goto LAB_033bf82c;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar8 = (long *)*plVar8;
    if ((plVar8 == (long *)0x0) ||
       (plVar10 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
       plVar10 == (long *)0x0)) goto LAB_033bec5c;
LAB_033bf87c:
    plStack0000000000000048 =
         (long *)(**(code **)(*plVar10 + 0x418))(plVar10,*(undefined8 *)(*plVar10 + 0x420));
  }
  else {
    if (uVar7 == 0) goto LAB_033bfa24;
    uVar17 = uVar7 - 1;
    lVar9 = (long)(int)uVar17;
    plVar8 = (long *)(unaff_x27 + lVar9 * 8 + 0x20);
    plVar10 = (long *)*plVar8;
    if ((plVar10 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0)),
       lVar15 == 0)) goto LAB_033bec5c;
    uVar11 = FUN_033ac038(lVar15,0);
    if ((int)uVar7 < (int)uVar6) {
      unaff_x24 = in_stack_00000040;
      if ((uVar11 & 1) == 0) goto LAB_033bf82c;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar17) goto LAB_033bfa24;
      plVar10 = (long *)*plVar8;
      uVar18 = *(undefined8 *)StringLiteral_8800;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar18 = FUN_033a87c8(uVar18,0);
      if (plVar10 != (long *)0x0) {
        uVar11 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar18,1,*(undefined8 *)(*plVar10 + 0x210))
        ;
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar11 & 1) == 0) goto LAB_033bf82c;
        if (unaff_x23 != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
          lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
          if (lVar15 != 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
            if (*(uint *)(lVar15 + lVar9 * 4 + 0x20) != uVar17) goto LAB_033bf82c;
LAB_033bf854:
            if (*(uint *)(unaff_x27 + 0x18) <= uVar17) goto LAB_033bfa24;
            plVar8 = (long *)*plVar8;
            if ((plVar8 != (long *)0x0) &&
               (plVar10 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                            (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
               unaff_x24 = in_stack_00000040, plVar10 != (long *)0x0)) goto LAB_033bf87c;
          }
        }
      }
      goto LAB_033bec5c;
    }
    unaff_x24 = in_stack_00000040;
    if ((uVar11 & 1) != 0) {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar17) goto LAB_033bfa24;
      plVar10 = (long *)*plVar8;
      uVar18 = *(undefined8 *)StringLiteral_8800;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar18 = FUN_033a87c8(uVar18,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      uVar11 = (**(code **)(*plVar10 + 0x208))(plVar10,uVar18,1,*(undefined8 *)(*plVar10 + 0x210));
      unaff_x22 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar11 & 1) == 0) {
        plStack0000000000000048 = (long *)0x0;
        goto LAB_033bf044;
      }
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
      lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
      if (*(uint *)(lVar15 + lVar9 * 4 + 0x20) != uVar17) goto LAB_033bf040;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar17) goto LAB_033bfa24;
      plVar10 = (long *)*plVar8;
      if ((plVar10 == (long *)0x0) ||
         (plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x1e0)), unaff_x26 == 0))
      goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar17) goto LAB_033bfa24;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      uVar11 = (**(code **)(*plVar10 + 0x288))
                         (plVar10,*(undefined8 *)(unaff_x26 + lVar9 * 8 + 0x20),
                          *(undefined8 *)(*plVar10 + 0x290));
      if ((uVar11 & 1) == 0) goto LAB_033bf854;
    }
LAB_033bf040:
    plStack0000000000000048 = (long *)0x0;
  }
LAB_033bf044:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar11 = FUN_033ab18c(plStack0000000000000048,0,0);
  if ((uVar11 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_033bec5c;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(unaff_x27 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar7 = 0;
  }
  else {
    uVar17 = 0;
    plVar10 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
    do {
      if (*(uint *)(unaff_x27 + 0x18) <= uVar17) goto LAB_033bfa24;
      lVar9 = (long)(int)uVar17;
      plVar8 = *(long **)(unaff_x27 + lVar9 * 8 + 0x20);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
         plVar8 == (long *)0x0)) goto LAB_033bec5c;
      uVar11 = FUN_033ac048(plVar8,0);
      if ((uVar11 & 1) != 0) {
        plVar8 = (long *)(**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
      }
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
      lVar15 = *plVar10;
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
      if (unaff_x26 == 0) goto LAB_033bec5c;
      uVar7 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
      uVar18 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar11 = FUN_033aa3b4(plVar8,uVar18,0);
      if ((uVar11 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
          lVar15 = *plVar10;
          if (lVar15 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
          lVar16 = *in_stack_00000058;
          if (lVar16 == 0) goto LAB_033bec5c;
          uVar7 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
          if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_033bfa24;
          lVar15 = *unaff_x22;
          lVar16 = *(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(lVar15 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar15 = *unaff_x22;
          }
          if (lVar16 == *(long *)(*(long *)(lVar15 + 0xb8) + 0x18)) goto LAB_033bf488;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
        lVar15 = *plVar10;
        if (lVar15 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
        lVar16 = *in_stack_00000058;
        if (lVar16 == 0) goto LAB_033bec5c;
        uVar7 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
        if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_033bfa24;
        if (*(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20) != 0) {
          uVar18 = *(undefined8 *)StringLiteral_2477;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar18 = FUN_033a87c8(uVar18,0);
          uVar11 = FUN_033aa3b4(plVar8,uVar18,0);
          if ((uVar11 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_033bec5c;
            uVar11 = FUN_033ac7d8(plVar8,0);
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
            lVar15 = *plVar10;
            if (lVar15 == 0) goto LAB_033bec5c;
            if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
               (uVar7 = *(uint *)(lVar15 + lVar9 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7))
            goto LAB_033bfa24;
            uVar18 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar12 = FUN_033aa3b4(uVar18,0,0);
            unaff_x22 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            uVar7 = uVar17;
            if ((uVar11 & 1) == 0) {
              if ((uVar12 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                lVar15 = *plVar10;
                if (lVar15 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
                   (uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                uVar11 = (**(code **)(*plVar8 + 0x288))
                                   (plVar8,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                    *(undefined8 *)(*plVar8 + 0x290));
                if ((uVar11 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                  lVar15 = *plVar10;
                  if (lVar15 == 0) goto LAB_033bec5c;
                  if ((*(uint *)(lVar15 + 0x18) <= uVar17) ||
                     (uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                  lVar15 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar15 == 0) goto LAB_033bec5c;
                  uVar11 = FUN_033ac5f4(lVar15,0);
                  unaff_x24 = in_stack_00000040;
                  unaff_x28 = in_stack_00000058;
                  if ((uVar11 & 1) != 0) {
                    if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar15 = *plVar10;
                      if (lVar15 != 0) {
                        if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                          lVar16 = *in_stack_00000058;
                          if (lVar16 != 0) {
                            uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                              uVar11 = (**(code **)(*plVar8 + 0x858))
                                                 (plVar8,*(undefined8 *)
                                                          (lVar16 + (long)(int)uVar1 * 8 + 0x20),
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
              if ((uVar12 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
              lVar15 = *plVar10;
              if (lVar15 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_033bfa24;
              lVar16 = *in_stack_00000058;
              if (lVar16 == 0) goto LAB_033bec5c;
              uVar1 = *(uint *)(lVar15 + lVar9 * 4 + 0x20);
              if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_033bfa24;
              uVar18 = *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
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
              uVar11 = FUN_033c0b48(uVar18,plVar8);
              unaff_x22 = (long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              ;
joined_r0x033bf484:
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              if ((uVar11 & 1) == 0) break;
            }
          }
        }
      }
LAB_033bf488:
      uVar17 = uVar17 + 1;
      unaff_x24 = in_stack_00000040;
      unaff_x28 = in_stack_00000058;
      uVar7 = uVar6;
    } while (uVar6 != uVar17);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar11 = FUN_033ab18c(plStack0000000000000048,0,0);
  if (((uVar11 & 1) != 0) && (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar9 = *unaff_x28;
    if (lVar9 == 0) goto LAB_033bec5c;
    lVar15 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
    while ((int)uVar7 < *(int *)(lVar9 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar11 = FUN_033ac7d8(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
      uVar18 = *(undefined8 *)(unaff_x26 + lVar15);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_033aa3b4(uVar18,0,0);
      unaff_x22 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar11 & 1) == 0) {
        if ((uVar12 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
          uVar11 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar15),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar11 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
            if (*(long *)(unaff_x26 + lVar15) == 0) goto LAB_033bec5c;
            uVar11 = FUN_033ac5f4(*(long *)(unaff_x26 + lVar15),0);
            if ((uVar11 & 1) != 0) {
              lVar9 = *unaff_x28;
              if (lVar9 != 0) {
                if (uVar7 < *(uint *)(lVar9 + 0x18)) {
                  uVar11 = (**(code **)(*plStack0000000000000048 + 0x858))
                                     (plStack0000000000000048,*(undefined8 *)(lVar9 + lVar15),
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
        lVar9 = *unaff_x28;
        if (lVar9 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_033bfa24;
        uVar18 = *(undefined8 *)(lVar9 + lVar15);
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
        uVar11 = FUN_033c0b48(uVar18,plStack0000000000000048);
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
joined_r0x033bf658:
        if ((uVar11 & 1) == 0) break;
      }
      lVar9 = *unaff_x28;
      uVar7 = uVar7 + 1;
      lVar15 = lVar15 + 8;
      if (lVar9 == 0) goto LAB_033bec5c;
    }
  }
  if (*unaff_x28 != 0) {
    if (uVar7 != *(uint *)(*unaff_x28 + 0x18)) goto LAB_033bf82c;
    if (unaff_x23 != 0) {
      if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= unaff_w20))
      goto LAB_033bfa24;
      lVar9 = (long)(int)unaff_w20;
      *(undefined8 *)(unaff_x23 + lVar9 * 8 + 0x20) =
           *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      thunk_FUN_01e10808();
      if (in_stack_00000038 != (long *)0x0) {
        if ((plStack0000000000000048 == (long *)0x0) ||
           (lVar15 = thunk_FUN_01de26bc(plStack0000000000000048,
                                        *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar15 != 0)) {
          if (unaff_w20 < *(uint *)(in_stack_00000038 + 3)) {
            in_stack_00000038[lVar9 + 4] = (long)plStack0000000000000048;
            thunk_FUN_01e10808(in_stack_00000038 + lVar9 + 4,plStack0000000000000048);
            uVar11 = (ulong)*(uint *)(unaff_x24 + 3);
            if (unaff_x25 < uVar11) {
              lVar15 = *in_stack_00000028;
              uVar12 = unaff_x25;
              do {
                uVar6 = (uint)uVar11;
                if (lVar15 != 0) {
                  lVar16 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*unaff_x24 + 0x40));
                  if (lVar16 == 0) goto LAB_033c07f0;
                  uVar6 = (uint)unaff_x24[3];
                }
                if (uVar6 <= unaff_w20) break;
                unaff_x24[lVar9 + 4] = lVar15;
                unaff_w20 = unaff_w20 + 1;
                thunk_FUN_01e10808(unaff_x24 + lVar9 + 4,lVar15);
                unaff_x22 = (long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                ;
                unaff_x25 = uVar12;
LAB_033bf82c:
                do {
                  do {
                    uVar6 = *(uint *)(unaff_x24 + 3);
                    uVar11 = (ulong)uVar6;
                    uVar12 = unaff_x25 + 1;
                    if ((long)(int)uVar6 <= (long)uVar12) {
                      if (unaff_w20 != 1) {
                        if (unaff_w20 == 0) {
                          uVar18 = thunk_FUN_01dd295c(StringLiteral_8802);
                          uVar18 = FUN_033d6e4c(uVar18,0);
                          thunk_FUN_01dd295c(StringLiteral_1159);
                          uVar20 = thunk_FUN_01de27b8();
                          FUN_033958dc(uVar20,uVar18,0);
                          goto LAB_033c0894;
                        }
                        if ((int)unaff_w20 < 2) {
                          uVar6 = 0;
                          goto LAB_033bfae0;
                        }
                        if (uVar6 == 0) goto LAB_033bfa24;
                        lVar9 = 0;
                        lVar15 = 0;
                        uVar6 = 0;
                        bVar2 = false;
                        plVar10 = unaff_x24;
                        goto LAB_033bf900;
                      }
                      if (in_stack_00000020 != 0) {
                        if (unaff_x23 == 0) goto LAB_033bec5c;
                        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
                        lVar9 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
                        lVar15 = *unaff_x28;
                        if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
                        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                        lVar16 = in_stack_00000038[4];
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_01dc4f30();
                        }
                        bVar4 = FUN_033ab18c(lVar16,0,0);
                        lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
                        if (lVar9 == 0) {
                          lVar19 = 0;
                        }
                        else {
                          uVar18 = *(undefined8 *)StringLiteral_151;
                          lVar19 = thunk_FUN_01de26bc(lVar9,uVar18);
                          if (lVar19 == 0) goto LAB_033bfb98;
                        }
                        uVar18 = *(undefined8 *)(lVar15 + 0x18);
                        FUN_033d8040(lVar16,0);
                        *(long *)(lVar16 + 0x10) = lVar19;
                        thunk_FUN_01e10808((long *)(lVar16 + 0x10),lVar19);
                        *(int *)(lVar16 + 0x18) = (int)uVar18;
                        *(byte *)(lVar16 + 0x1c) = bVar4 & 1;
                        *in_stack_00000010 = lVar16;
                        thunk_FUN_01e10808(in_stack_00000010,lVar16);
                        if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                        uVar18 = *(undefined8 *)(unaff_x23 + 0x20);
                        lVar9 = *unaff_x28;
                        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                          thunk_FUN_01dc4f30();
                        }
                        FUN_033c0ca4(uVar18,lVar9);
                        uVar6 = (uint)in_stack_00000040[3];
                        unaff_x22 = (long *)
                                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        ;
                        unaff_x24 = in_stack_00000040;
                      }
                      if (uVar6 == 0) goto LAB_033bfa24;
                      plVar8 = unaff_x24 + 4;
                      plVar10 = (long *)*plVar8;
                      if (((plVar10 == (long *)0x0) ||
                          (lVar9 = (**(code **)(*plVar10 + 0x3b8))
                                             (plVar10,*(undefined8 *)(*plVar10 + 0x3c0)), lVar9 == 0
                          )) || (*unaff_x28 == 0)) goto LAB_033bec5c;
                      iVar5 = *(int *)(*unaff_x28 + 0x18);
                      if (*(int *)(lVar9 + 0x18) != iVar5) {
                        if (iVar5 < *(int *)(lVar9 + 0x18)) {
                          plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
                          lVar15 = *unaff_x28;
                          if (lVar15 == 0) goto LAB_033bec5c;
                          uVar11 = 0;
                          plVar13 = plVar10 + 4;
                          goto LAB_033bfe14;
                        }
                        if ((int)unaff_x24[3] == 0) goto LAB_033bfa24;
                        plVar10 = (long *)*plVar8;
                        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
                        uVar6 = (**(code **)(*plVar10 + 600))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x260));
                        if ((uVar6 >> 1 & 1) != 0) goto LAB_033c0740;
                        plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                       *(undefined4 *)(lVar9 + 0x18));
                        uVar6 = *(int *)(lVar9 + 0x18) - 1;
                        FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar6,0);
                        if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                        lVar15 = in_stack_00000038[4];
                        lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                        if ((*unaff_x28 == 0) || (lVar9 == 0)) goto LAB_033bec5c;
                        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
                        *(uint *)(lVar9 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
                        lVar9 = thunk_FUN_033b4750(lVar15,lVar9,0);
                        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
                        if ((lVar9 != 0) &&
                           (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                           lVar15 == 0)) goto LAB_033c07f0;
                        if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
                        plVar13 = plVar10 + (long)(int)uVar6 + 4;
                        *plVar13 = lVar9;
                        thunk_FUN_01e10808(plVar13,lVar9);
                        if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
                        lVar9 = *unaff_x28;
                        if (lVar9 == 0) goto LAB_033bec5c;
                        plVar13 = (long *)*plVar13;
                        if (plVar13 != (long *)0x0) {
                          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                          if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
                             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
                              *(long *)StringLiteral_1183)) goto LAB_033c090c;
                        }
                        FUN_033b4f38(lVar9,uVar6,plVar13,0,*(int *)(lVar9 + 0x18) - uVar6,0);
                        *unaff_x28 = (long)plVar10;
                        thunk_FUN_01e10808(unaff_x28,plVar10);
                        unaff_x24 = in_stack_00000040;
                        goto LAB_033c0740;
                      }
                      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                      if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                      lVar15 = in_stack_00000038[4];
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30();
                      }
                      uVar11 = FUN_033ab18c(lVar15,0,0);
                      if ((uVar11 & 1) == 0) goto LAB_033c0740;
                      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                     *(undefined4 *)(lVar9 + 0x18));
                      uVar6 = *(int *)(lVar9 + 0x18) - 1;
                      FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar6,0);
                      if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                      lVar15 = in_stack_00000038[4];
                      lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                      if (lVar9 == 0) goto LAB_033bec5c;
                      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
                      *(undefined4 *)(lVar9 + 0x20) = 1;
                      lVar9 = thunk_FUN_033b4750(lVar15,lVar9,0);
                      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
                      if ((lVar9 != 0) &&
                         (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)),
                         lVar15 == 0)) goto LAB_033c07f0;
                      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
                      plVar13 = plVar10 + (long)(int)uVar6 + 4;
                      *plVar13 = lVar9;
                      thunk_FUN_01e10808(plVar13,lVar9);
                      if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
                      lVar9 = *unaff_x28;
                      if (lVar9 == 0) goto LAB_033bec5c;
                      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_033bfa24;
                      plVar13 = (long *)*plVar13;
                      if (plVar13 == (long *)0x0) goto LAB_033bec5c;
                      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                      if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
                         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
                          *(long *)StringLiteral_1183)) goto LAB_033c090c;
                      FUN_033b49e8(plVar13,*(undefined8 *)(lVar9 + (long)(int)uVar6 * 8 + 0x20),0,0)
                      ;
                      goto LAB_033c0730;
                    }
                    if (uVar11 <= uVar12) goto LAB_033bfa24;
                    in_stack_00000028 = unaff_x24 + unaff_x25 + 5;
                    uVar11 = FUN_03308638(*in_stack_00000028,0,0);
                    unaff_x25 = uVar12;
                  } while ((uVar11 & 1) != 0);
                  if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_033bfa24;
                  plVar10 = (long *)*in_stack_00000028;
                  if ((plVar10 == (long *)0x0) ||
                     (unaff_x27 = (**(code **)(*plVar10 + 0x3b8))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x3c0)),
                     unaff_x27 == 0)) goto LAB_033bec5c;
                  unaff_x21 = *(long *)(unaff_x27 + 0x18);
                  param_1 = *unaff_x28;
                  if (unaff_x21 != 0) {
                    if (param_1 == 0) goto LAB_033bec5c;
                    goto code_r0x033bece4;
                  }
                  if (param_1 == 0) goto LAB_033bec5c;
                  if (*(long *)(param_1 + 0x18) == 0) break;
                  if (*(uint *)(unaff_x24 + 3) <= uVar12) goto LAB_033bfa24;
                  plVar10 = (long *)*in_stack_00000028;
                  if (plVar10 == (long *)0x0) goto LAB_033bec5c;
                  uVar6 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
                } while ((uVar6 >> 1 & 1) == 0);
                if (unaff_x23 == 0) goto LAB_033bec5c;
                if ((*(uint *)(unaff_x23 + 0x18) <= uVar12) ||
                   (*(uint *)(unaff_x23 + 0x18) <= unaff_w20)) break;
                lVar9 = (long)(int)unaff_w20;
                *(undefined8 *)(unaff_x23 + lVar9 * 8 + 0x20) =
                     *(undefined8 *)(unaff_x23 + uVar12 * 8 + 0x20);
                thunk_FUN_01e10808();
                uVar11 = (ulong)*(uint *)(unaff_x24 + 3);
                if (uVar11 <= uVar12) break;
                lVar15 = *in_stack_00000028;
              } while( true );
            }
          }
          goto LAB_033bfa24;
        }
        goto LAB_033c07f0;
      }
    }
  }
  goto LAB_033bec5c;
LAB_033bf900:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar12 = lVar9 + 1, uVar11 <= uVar12)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar12)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar12)) goto LAB_033bfa24;
  lVar19 = plVar10[lVar15 + 4];
  lVar21 = unaff_x24[lVar9 + 5];
  lVar16 = in_stack_00000038[lVar15 + 4];
  uVar18 = *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x23 + 0x28 + lVar9 * 8);
  lVar15 = in_stack_00000038[lVar9 + 5];
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar5 = FUN_033c0e28(lVar19,uVar18,lVar16,lVar21,uVar20,lVar15);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar9 + 1;
    bVar2 = false;
  }
  if ((ulong)unaff_w20 - 2 != lVar9) {
    lVar15 = (long)(int)uVar6;
    lVar9 = lVar9 + 1;
    uVar11 = in_stack_00000040[3] & 0xffffffff;
    plVar10 = in_stack_00000040;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_033bfa24;
    goto LAB_033bf900;
  }
  unaff_x22 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
  ;
  unaff_x24 = in_stack_00000040;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar18 = thunk_FUN_01dd295c(StringLiteral_6016);
    uVar18 = FUN_033d6e4c(uVar18,0);
    thunk_FUN_01dd295c(StringLiteral_5868);
    uVar20 = thunk_FUN_01de27b8();
    FUN_033063d0(uVar20,uVar18,0);
LAB_033c0894:
    uVar18 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar20,uVar18);
  }
LAB_033bfae0:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar10 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar9 = *plVar10;
    if (lVar9 == 0) goto LAB_033bec5c;
    lVar9 = FUN_033b5440(lVar9,0);
    lVar15 = *unaff_x28;
    if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar16 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar16,0,0);
    lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar9 == 0) {
      lVar19 = 0;
    }
    else {
      uVar18 = *(undefined8 *)StringLiteral_151;
      lVar19 = thunk_FUN_01de26bc(lVar9,uVar18);
      if (lVar19 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar9,uVar18);
      }
    }
    uVar18 = *(undefined8 *)(lVar15 + 0x18);
    FUN_033d8040(lVar16,0);
    *(long *)(lVar16 + 0x10) = lVar19;
    thunk_FUN_01e10808((long *)(lVar16 + 0x10),lVar19);
    *(int *)(lVar16 + 0x18) = (int)uVar18;
    *(byte *)(lVar16 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar16;
    thunk_FUN_01e10808(in_stack_00000010,lVar16);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar9 = *plVar10;
    lVar15 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar9,lVar15);
    unaff_x22 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
  plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar10 = (long *)*plVar8;
  if (((plVar10 == (long *)0x0) ||
      (lVar9 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0)),
      lVar9 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar9 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar11 = FUN_033ab18c(lVar15,0,0);
    if ((uVar11 & 1) != 0) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar9 + 0x18))
      ;
      uVar7 = *(int *)(lVar9 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar9 + 0x20) = 1;
      lVar9 = thunk_FUN_033b4750(lVar15,lVar9,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar9 != 0) &&
         (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      plVar13 = plVar10 + (long)(int)uVar7 + 4;
      *plVar13 = lVar9;
      thunk_FUN_01e10808(plVar13,lVar9);
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      lVar9 = *unaff_x28;
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_033bfa24;
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
      FUN_033b49e8(plVar13,*(undefined8 *)(lVar9 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar9 + 0x18)) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_033bec5c;
      uVar11 = 0;
      plVar13 = plVar10 + 4;
      do {
        if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar11) {
          uVar7 = *(uint *)(lVar9 + 0x18);
          if ((int)uVar11 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar11) goto LAB_033bfa24;
              plVar14 = *(long **)(lVar9 + 0x20 + uVar11 * 8);
              if ((plVar14 == (long *)0x0) ||
                 (lVar15 = (**(code **)(*plVar14 + 0x1f8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x200)),
                 plVar10 == (long *)0x0)) goto LAB_033bec5c;
              if ((lVar15 != 0) &&
                 (lVar16 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar16 == 0)
                 ) goto LAB_033c07f0;
              if (*(uint *)(plVar10 + 3) <= (uint)uVar11) goto LAB_033bfa24;
              *plVar13 = lVar15;
              thunk_FUN_01e10808(plVar13,lVar15);
              uVar7 = *(uint *)(lVar9 + 0x18);
              uVar11 = uVar11 + 1;
              plVar13 = plVar13 + 1;
            } while ((int)uVar11 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
          lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar12 = FUN_033ab18c(lVar15,0,0);
          uVar7 = (uint)uVar11;
          if ((uVar12 & 1) == 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_033bfa24;
            plVar13 = *(long **)(lVar9 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar13 == (long *)0x0) ||
               (lVar9 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
               plVar10 == (long *)0x0)) goto LAB_033bec5c;
            if ((lVar9 != 0) &&
               (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
            goto LAB_033c07f0;
            uVar17 = *(uint *)(plVar10 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
            lVar9 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar18 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
            lVar9 = thunk_FUN_033b4750(lVar9,uVar18,0);
            if (plVar10 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar9 != 0) &&
               (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
            goto LAB_033c07f0;
            uVar17 = *(uint *)(plVar10 + 3);
          }
          if (uVar17 <= uVar7) goto LAB_033bfa24;
          plVar10[(long)(int)uVar7 + 4] = lVar9;
          thunk_FUN_01e10808(plVar10 + (long)(int)uVar7 + 4,lVar9);
FUN_033c07b0:
          *unaff_x28 = (long)plVar10;
          thunk_FUN_01e10808(unaff_x28,plVar10);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin__TriggerVibrationAction;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_033bfa24;
        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
        lVar15 = *(long *)(lVar15 + uVar11 * 8 + 0x20);
        if ((lVar15 != 0) &&
           (lVar16 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar16 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar10 + 3) <= uVar11) goto LAB_033bfa24;
        *plVar13 = lVar15;
        thunk_FUN_01e10808(plVar13,lVar15);
        lVar15 = *unaff_x28;
        uVar11 = uVar11 + 1;
        plVar13 = plVar13 + 1;
        if (lVar15 == 0) goto LAB_033bec5c;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
    plVar10 = (long *)*plVar8;
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    uVar7 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar9 + 0x18))
      ;
      uVar7 = *(int *)(lVar9 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar9 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar9 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar9 = thunk_FUN_033b4750(lVar15,lVar9,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar9 != 0) &&
         (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      plVar13 = plVar10 + (long)(int)uVar7 + 4;
      *plVar13 = lVar9;
      thunk_FUN_01e10808(plVar13,lVar9);
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      lVar9 = *unaff_x28;
      if (lVar9 == 0) goto LAB_033bec5c;
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar9,uVar7,plVar13,0,*(int *)(lVar9 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar10;
      thunk_FUN_01e10808(unaff_x28,plVar10);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    lVar15 = *(long *)(lVar15 + uVar11 * 8 + 0x20);
    if ((lVar15 != 0) &&
       (lVar16 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar16 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar10 + 3) <= uVar11) goto LAB_033bfa24;
    *plVar13 = lVar15;
    thunk_FUN_01e10808(plVar13,lVar15);
    lVar15 = *unaff_x28;
    uVar11 = uVar11 + 1;
    plVar13 = plVar13 + 1;
    if (lVar15 == 0) break;
LAB_033bfe14:
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar11) {
      uVar6 = *(uint *)(lVar9 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar11) goto LAB_033c0080;
      goto LAB_033c000c;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_033bfa24;
    if (plVar10 == (long *)0x0) break;
  }
  goto LAB_033bec5c;
  while( true ) {
    plVar14 = *(long **)(lVar9 + 0x20 + uVar11 * 8);
    if ((plVar14 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar14 + 0x1f8))(plVar14,*(undefined8 *)(*plVar14 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar16 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar10 + 0x40)), lVar16 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar10 + 3) <= (uint)uVar11) goto LAB_033bfa24;
    *plVar13 = lVar15;
    thunk_FUN_01e10808(plVar13,lVar15);
    uVar6 = *(uint *)(lVar9 + 0x18);
    uVar11 = uVar11 + 1;
    plVar13 = plVar13 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar11) break;
LAB_033c000c:
    if (uVar6 <= (uint)uVar11) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar15 = in_stack_00000038[4];
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_033ab18c(lVar15,0,0);
      uVar6 = (uint)uVar11;
      if ((uVar12 & 1) == 0) {
        if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar13 = *(long **)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar13 == (long *)0x0) ||
           (lVar9 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
           plVar10 == (long *)0x0)) goto LAB_033bec5c;
        if ((lVar9 != 0) &&
           (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0))
        goto LAB_033c07f0;
        uVar7 = *(uint *)(plVar10 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar9 = in_stack_00000038[4];
        uVar18 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        lVar9 = thunk_FUN_033b4750(lVar9,uVar18,0);
        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar9 != 0) &&
           (lVar15 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar15 == 0)) {
LAB_033c07f0:
          uVar18 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar18,0);
        }
        uVar7 = *(uint *)(plVar10 + 3);
      }
      if (uVar6 < uVar7) {
        plVar10[(long)(int)uVar6 + 4] = lVar9;
        thunk_FUN_01e10808(plVar10 + (long)(int)uVar6 + 4,lVar9);
LAB_033c0730:
        *unaff_x28 = (long)plVar10;
        thunk_FUN_01e10808(unaff_x28,plVar10);
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


