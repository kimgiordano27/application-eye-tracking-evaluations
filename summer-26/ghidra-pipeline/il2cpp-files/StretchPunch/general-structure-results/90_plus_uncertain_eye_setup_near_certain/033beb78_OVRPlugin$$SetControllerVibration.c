/*
FUNCTION_NAME: OVRPlugin$$SetControllerVibration
ENTRY_POINT: 033beb78
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


long OVRPlugin__SetControllerVibration(ulong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint in_w9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long lVar24;
  long *plVar25;
  long *unaff_x27;
  undefined8 uVar26;
  long *unaff_x28;
  long lVar27;
  long *in_stack_00000010;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  
  do {
    *(int *)(in_x11 + param_1 * 4 + 0x20) = (int)param_1;
    param_1 = param_1 + 1;
    if (in_x10 <= (long)param_1) {
      do {
        while( true ) {
          puVar4 = StringLiteral_1291;
          uVar8 = (int)unaff_x19 + 1;
          if ((int)(uint)unaff_x24[3] <= (int)uVar8) {
            plVar9 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291);
            if (*unaff_x28 == 0) goto LAB_033bec5c;
            plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar4,*(undefined4 *)(*unaff_x28 + 0x18))
            ;
            lVar16 = *unaff_x28;
            if (lVar16 == 0) goto LAB_033bec5c;
            uVar20 = 0;
            plVar23 = plVar10 + 4;
            goto LAB_033bebe0;
          }
          if ((uint)unaff_x24[3] <= uVar8) goto LAB_033bfa24;
          unaff_x19 = (long)(int)uVar8;
          plVar10 = unaff_x24 + unaff_x19 + 4;
          plVar9 = (long *)*plVar10;
          if (((plVar9 == (long *)0x0) ||
              (lVar16 = (**(code **)(*plVar9 + 0x3b8))(plVar9,*(undefined8 *)(*plVar9 + 0x3c0)),
              lVar16 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
          iVar1 = *(int *)(*unaff_x28 + 0x18);
          iVar7 = *(int *)(lVar16 + 0x18);
          if (*(int *)(lVar16 + 0x18) <= iVar1) {
            iVar7 = iVar1;
          }
          lVar11 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,iVar7);
          if (unaff_x23 == 0) goto LAB_033bec5c;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_033bfa24;
          unaff_x27 = (long *)(unaff_x23 + unaff_x19 * 8 + 0x20);
          *unaff_x27 = lVar11;
          thunk_FUN_01e10808(unaff_x27,lVar11);
          if (unaff_x25 == 0) break;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar8) goto LAB_033bfa24;
          lVar11 = *unaff_x27;
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar20 = FUN_033c0910(lVar11,lVar16);
          if ((uVar20 & 1) == 0) {
            if (*(uint *)(unaff_x24 + 3) <= uVar8) goto LAB_033bfa24;
            *plVar10 = 0;
            thunk_FUN_01e10808(plVar10,0);
          }
        }
        if (*unaff_x28 == 0) goto LAB_033bec5c;
        lVar16 = *(long *)(*unaff_x28 + 0x18);
      } while (lVar16 << 0x20 < 1);
      in_w9 = *(uint *)(unaff_x23 + 0x18);
      param_1 = 0;
      in_x10 = (long)(int)lVar16;
    }
    if (in_w9 <= (uint)unaff_x19) break;
    in_x11 = *unaff_x27;
    if (in_x11 == 0) goto LAB_033bec5c;
  } while (param_1 < *(uint *)(in_x11 + 0x18));
  goto LAB_033bfa24;
LAB_033bec84:
  if (uVar17 <= uVar20) goto LAB_033bfa24;
  plVar25 = unaff_x24 + uVar20 + 4;
  uVar17 = FUN_03308638(*plVar25,0,0);
  if ((uVar17 & 1) != 0) goto LAB_033bf82c;
  if (*(uint *)(unaff_x24 + 3) <= uVar20) goto LAB_033bfa24;
  plVar12 = (long *)*plVar25;
  if ((plVar12 == (long *)0x0) ||
     (lVar16 = (**(code **)(*plVar12 + 0x3b8))(plVar12,*(undefined8 *)(*plVar12 + 0x3c0)),
     lVar16 == 0)) goto LAB_033bec5c;
  uVar17 = *(ulong *)(lVar16 + 0x18);
  lVar11 = *unaff_x28;
  if (uVar17 == 0) {
    if (lVar11 == 0) goto LAB_033bec5c;
    if (*(long *)(lVar11 + 0x18) != 0) {
      if (*(uint *)(unaff_x24 + 3) <= uVar20) goto LAB_033bfa24;
      plVar12 = (long *)*plVar25;
      if (plVar12 == (long *)0x0) goto LAB_033bec5c;
      uVar6 = (**(code **)(*plVar12 + 600))(plVar12,*(undefined8 *)(*plVar12 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_033bf82c;
    }
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar20) || (*(uint *)(unaff_x23 + 0x18) <= uVar8))
    goto LAB_033bfa24;
    *(undefined8 *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20) =
         *(undefined8 *)(unaff_x23 + uVar20 * 8 + 0x20);
    thunk_FUN_01e10808();
    uVar6 = *(uint *)(unaff_x24 + 3);
    if (uVar6 <= uVar20) goto LAB_033bfa24;
    lVar16 = *plVar25;
joined_r0x033bedec:
    if (lVar16 != 0) {
      lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar11 == 0) goto LAB_033c07f0;
      uVar6 = (uint)unaff_x24[3];
    }
    lVar11 = (long)(int)uVar8;
    if (uVar6 <= uVar8) goto LAB_033bfa24;
    unaff_x24[lVar11 + 4] = lVar16;
    uVar8 = uVar8 + 1;
    thunk_FUN_01e10808(unaff_x24 + lVar11 + 4,lVar16);
    plVar23 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    goto LAB_033bf82c;
  }
  if (lVar11 == 0) goto LAB_033bec5c;
  uVar6 = *(uint *)(lVar11 + 0x18);
  iVar7 = (int)uVar17;
  if ((int)uVar6 < iVar7) {
    uVar22 = iVar7 - 1;
    if ((int)uVar6 < (int)uVar22) {
      plVar12 = (long *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar17 <= uVar6) goto LAB_033bfa24;
        plVar13 = (long *)*plVar12;
        if (plVar13 == (long *)0x0) goto LAB_033bec5c;
        lVar11 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200));
        puVar4 = StringLiteral_4821;
        lVar18 = *(long *)StringLiteral_4821;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar18);
          lVar18 = *(long *)puVar4;
        }
        if (lVar11 == **(long **)(lVar18 + 0xb8)) {
          uVar17 = (ulong)*(uint *)(lVar16 + 0x18);
          uVar22 = *(uint *)(lVar16 + 0x18) - 1;
          break;
        }
        uVar17 = *(ulong *)(lVar16 + 0x18);
        uVar6 = uVar6 + 1;
        plVar12 = plVar12 + 1;
        uVar22 = (int)uVar17 - 1;
      } while ((int)uVar6 < (int)uVar22);
    }
    if (uVar6 == uVar22) {
      if ((uint)uVar17 <= uVar6) goto LAB_033bfa24;
      plVar13 = (long *)(lVar16 + (long)(int)uVar6 * 8 + 0x20);
      plVar12 = (long *)*plVar13;
      if (plVar12 == (long *)0x0) goto LAB_033bec5c;
      lVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
      puVar4 = StringLiteral_4821;
      lVar18 = *(long *)StringLiteral_4821;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar18);
        lVar18 = *(long *)puVar4;
      }
      if (lVar11 != **(long **)(lVar18 + 0xb8)) goto LAB_033bf040;
      if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_033bfa24;
      plVar12 = (long *)*plVar13;
      if ((plVar12 == (long *)0x0) ||
         (lVar11 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
         lVar11 == 0)) goto LAB_033bec5c;
      uVar17 = FUN_033ac038(lVar11,0);
      if ((uVar17 & 1) != 0) {
        if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar12 = (long *)*plVar13;
        uVar15 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*plVar23 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar15 = FUN_033a87c8(uVar15,0);
        if (plVar12 == (long *)0x0) goto LAB_033bec5c;
        uVar17 = (**(code **)(*plVar12 + 0x208))(plVar12,uVar15,1,*(undefined8 *)(*plVar12 + 0x210))
        ;
        plVar23 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar17 & 1) != 0) {
          if (uVar6 < *(uint *)(lVar16 + 0x18)) {
            plVar13 = (long *)*plVar13;
            if (plVar13 != (long *)0x0) {
              plVar12 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
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
  if (iVar7 == 0) goto LAB_033bfa24;
  uVar22 = iVar7 - 1;
  lVar11 = (long)(int)uVar22;
  plVar13 = (long *)(lVar16 + lVar11 * 8 + 0x20);
  plVar12 = (long *)*plVar13;
  if ((plVar12 == (long *)0x0) ||
     (lVar18 = (**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
     lVar18 == 0)) goto LAB_033bec5c;
  uVar17 = FUN_033ac038(lVar18,0);
  if (iVar7 < (int)uVar6) {
    if ((uVar17 & 1) != 0) {
      if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_033bfa24;
      plVar12 = (long *)*plVar13;
      uVar15 = *(undefined8 *)StringLiteral_8800;
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar15 = FUN_033a87c8(uVar15,0);
      if (plVar12 == (long *)0x0) goto LAB_033bec5c;
      uVar17 = (**(code **)(*plVar12 + 0x208))(plVar12,uVar15,1,*(undefined8 *)(*plVar12 + 0x210));
      plVar23 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar17 & 1) != 0) {
        if (unaff_x23 == 0) goto LAB_033bec5c;
        if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
        lVar18 = *(long *)(unaff_x23 + uVar20 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_033bfa24;
        if (*(uint *)(lVar18 + lVar11 * 4 + 0x20) == uVar22) {
LAB_033bf854:
          if (uVar22 < *(uint *)(lVar16 + 0x18)) {
            plVar13 = (long *)*plVar13;
            if (plVar13 != (long *)0x0) {
              plVar12 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                          (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
joined_r0x033bf814:
              if (plVar12 != (long *)0x0) {
                plStack0000000000000048 =
                     (long *)(**(code **)(*plVar12 + 0x418))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x420));
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
  if ((uVar17 & 1) == 0) {
LAB_033bf040:
    plStack0000000000000048 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_033bfa24;
    plVar12 = (long *)*plVar13;
    uVar15 = *(undefined8 *)StringLiteral_8800;
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar15 = FUN_033a87c8(uVar15,0);
    if (plVar12 == (long *)0x0) goto LAB_033bec5c;
    uVar17 = (**(code **)(*plVar12 + 0x208))(plVar12,uVar15,1,*(undefined8 *)(*plVar12 + 0x210));
    plVar23 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    if ((uVar17 & 1) != 0) {
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
      lVar18 = *(long *)(unaff_x23 + uVar20 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar18 + 0x18) <= uVar22) goto LAB_033bfa24;
      if (*(uint *)(lVar18 + lVar11 * 4 + 0x20) != uVar22) goto LAB_033bf040;
      if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_033bfa24;
      plVar12 = (long *)*plVar13;
      if ((plVar12 == (long *)0x0) ||
         (plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
         plVar10 == (long *)0x0)) goto LAB_033bec5c;
      if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_033bfa24;
      if (plVar12 == (long *)0x0) goto LAB_033bec5c;
      uVar17 = (**(code **)(*plVar12 + 0x288))
                         (plVar12,plVar10[lVar11 + 4],*(undefined8 *)(*plVar12 + 0x290));
      if ((uVar17 & 1) == 0) goto LAB_033bf854;
      goto LAB_033bf040;
    }
    plStack0000000000000048 = (long *)0x0;
  }
LAB_033bf044:
  if (*(int *)(*plVar23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar17 = FUN_033ab18c(plStack0000000000000048,0,0);
  if ((uVar17 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_033bec5c;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(lVar16 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar22 = 0;
  }
  else {
    uVar21 = 0;
    plVar12 = (long *)(unaff_x23 + uVar20 * 8 + 0x20);
    do {
      if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_033bfa24;
      lVar11 = (long)(int)uVar21;
      plVar13 = *(long **)(lVar16 + lVar11 * 8 + 0x20);
      if ((plVar13 == (long *)0x0) ||
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x1d8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1e0)),
         plVar13 == (long *)0x0)) goto LAB_033bec5c;
      uVar17 = FUN_033ac048(plVar13,0);
      if ((uVar17 & 1) != 0) {
        plVar13 = (long *)(**(code **)(*plVar13 + 0x418))(plVar13,*(undefined8 *)(*plVar13 + 0x420))
        ;
      }
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
      lVar18 = *plVar12;
      if (lVar18 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_033bfa24;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
      if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_033bfa24;
      lVar18 = plVar10[(long)(int)uVar22 + 4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar17 = FUN_033aa3b4(plVar13,lVar18,0);
      if ((uVar17 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
          lVar18 = *plVar12;
          if (lVar18 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_033bfa24;
          lVar19 = *unaff_x28;
          if (lVar19 == 0) goto LAB_033bec5c;
          uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
          if (*(uint *)(lVar19 + 0x18) <= uVar22) goto LAB_033bfa24;
          lVar18 = *plVar23;
          lVar19 = *(long *)(lVar19 + (long)(int)uVar22 * 8 + 0x20);
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar18 = *plVar23;
          }
          if (lVar19 == *(long *)(*(long *)(lVar18 + 0xb8) + 0x18)) goto LAB_033bf488;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
        lVar18 = *plVar12;
        if (lVar18 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_033bfa24;
        lVar19 = *unaff_x28;
        if (lVar19 == 0) goto LAB_033bec5c;
        uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
        if (*(uint *)(lVar19 + 0x18) <= uVar22) goto LAB_033bfa24;
        if (*(long *)(lVar19 + (long)(int)uVar22 * 8 + 0x20) != 0) {
          uVar15 = *(undefined8 *)StringLiteral_2477;
          if (*(int *)(*plVar23 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar15 = FUN_033a87c8(uVar15,0);
          uVar17 = FUN_033aa3b4(plVar13,uVar15,0);
          if ((uVar17 & 1) == 0) {
            if (plVar13 == (long *)0x0) goto LAB_033bec5c;
            uVar17 = FUN_033ac7d8(plVar13,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
            lVar18 = *plVar12;
            if (lVar18 == 0) goto LAB_033bec5c;
            if ((*(uint *)(lVar18 + 0x18) <= uVar21) ||
               (uVar22 = *(uint *)(lVar18 + lVar11 * 4 + 0x20), *(uint *)(plVar10 + 3) <= uVar22))
            goto LAB_033bfa24;
            lVar18 = plVar10[(long)(int)uVar22 + 4];
            if (*(int *)(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar14 = FUN_033aa3b4(lVar18,0,0);
            plVar23 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            uVar22 = uVar21;
            if ((uVar17 & 1) == 0) {
              if ((uVar14 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
                lVar18 = *plVar12;
                if (lVar18 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar18 + 0x18) <= uVar21) ||
                   (uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20), *(uint *)(plVar10 + 3) <= uVar2))
                goto LAB_033bfa24;
                uVar17 = (**(code **)(*plVar13 + 0x288))
                                   (plVar13,plVar10[(long)(int)uVar2 + 4],
                                    *(undefined8 *)(*plVar13 + 0x290));
                if ((uVar17 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
                  lVar18 = *plVar12;
                  if (lVar18 == 0) goto LAB_033bec5c;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar21) ||
                     (uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20), *(uint *)(plVar10 + 3) <= uVar2
                     )) goto LAB_033bfa24;
                  if (plVar10[(long)(int)uVar2 + 4] == 0) goto LAB_033bec5c;
                  uVar17 = FUN_033ac5f4(plVar10[(long)(int)uVar2 + 4],0);
                  if ((uVar17 & 1) != 0) {
                    if (uVar20 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar18 = *plVar12;
                      if (lVar18 != 0) {
                        if (uVar21 < *(uint *)(lVar18 + 0x18)) {
                          lVar19 = *unaff_x28;
                          if (lVar19 != 0) {
                            uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
                            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
                              uVar17 = (**(code **)(*plVar13 + 0x858))
                                                 (plVar13,*(undefined8 *)
                                                           (lVar19 + (long)(int)uVar2 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar13 + 0x860));
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
              if ((uVar14 & 1) != 0) break;
              if (*(uint *)(unaff_x23 + 0x18) <= uVar20) goto LAB_033bfa24;
              lVar18 = *plVar12;
              if (lVar18 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar18 + 0x18) <= uVar21) goto LAB_033bfa24;
              lVar19 = *unaff_x28;
              if (lVar19 == 0) goto LAB_033bec5c;
              uVar2 = *(uint *)(lVar18 + lVar11 * 4 + 0x20);
              if (*(uint *)(lVar19 + 0x18) <= uVar2) goto LAB_033bfa24;
              uVar15 = *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
              if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              bVar5 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
              if ((*(byte *)(*plVar13 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(plVar13);
              }
              uVar17 = FUN_033c0b48(uVar15,plVar13);
              plVar23 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              ;
joined_r0x033bf484:
              if ((uVar17 & 1) == 0) break;
            }
          }
        }
      }
LAB_033bf488:
      uVar21 = uVar21 + 1;
      uVar22 = uVar6;
    } while (uVar6 != uVar21);
  }
  if (*(int *)(*plVar23 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar17 = FUN_033ab18c(plStack0000000000000048,0,0);
  if (((uVar17 & 1) != 0) && (uVar22 == *(int *)(lVar16 + 0x18) - 1U)) {
    lVar16 = *unaff_x28;
    if (lVar16 == 0) goto LAB_033bec5c;
    lVar11 = (-(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar22 << 3) + 0x20;
    while ((int)uVar22 < *(int *)(lVar16 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar17 = FUN_033ac7d8(plStack0000000000000048,0), plVar10 == (long *)0x0))
      goto LAB_033bec5c;
      if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_033bfa24;
      uVar15 = *(undefined8 *)((long)plVar10 + lVar11);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar14 = FUN_033aa3b4(uVar15,0,0);
      plVar23 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar17 & 1) == 0) {
        if ((uVar14 & 1) == 0) {
          if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_033bfa24;
          uVar17 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)((long)plVar10 + lVar11),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar17 & 1) == 0) {
            if (*(uint *)(plVar10 + 3) <= uVar22) goto LAB_033bfa24;
            if (*(long *)((long)plVar10 + lVar11) == 0) goto LAB_033bec5c;
            uVar17 = FUN_033ac5f4(*(long *)((long)plVar10 + lVar11),0);
            if ((uVar17 & 1) != 0) {
              lVar16 = *unaff_x28;
              if (lVar16 != 0) {
                if (uVar22 < *(uint *)(lVar16 + 0x18)) {
                  uVar17 = (**(code **)(*plStack0000000000000048 + 0x858))
                                     (plStack0000000000000048,*(undefined8 *)(lVar16 + lVar11),
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
        if ((uVar14 & 1) != 0) break;
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_033bfa24;
        uVar15 = *(undefined8 *)(lVar16 + lVar11);
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        bVar5 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
        if ((*(byte *)(*plStack0000000000000048 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plStack0000000000000048 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plStack0000000000000048);
        }
        uVar17 = FUN_033c0b48(uVar15,plStack0000000000000048);
        plVar23 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
joined_r0x033bf658:
        if ((uVar17 & 1) == 0) break;
      }
      lVar16 = *unaff_x28;
      uVar22 = uVar22 + 1;
      lVar11 = lVar11 + 8;
      if (lVar16 == 0) goto LAB_033bec5c;
    }
  }
  if (*unaff_x28 == 0) goto LAB_033bec5c;
  if (uVar22 == *(uint *)(*unaff_x28 + 0x18)) {
    if (unaff_x23 != 0) {
      if ((uVar20 < *(uint *)(unaff_x23 + 0x18)) && (uVar8 < *(uint *)(unaff_x23 + 0x18))) {
        *(undefined8 *)(unaff_x23 + (long)(int)uVar8 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + uVar20 * 8 + 0x20);
        thunk_FUN_01e10808();
        if (plVar9 != (long *)0x0) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (lVar16 = thunk_FUN_01de26bc(plStack0000000000000048,*(undefined8 *)(*plVar9 + 0x40)),
             lVar16 != 0)) {
            if (uVar8 < *(uint *)(plVar9 + 3)) {
              plVar9[(long)(int)uVar8 + 4] = (long)plStack0000000000000048;
              thunk_FUN_01e10808(plVar9 + (long)(int)uVar8 + 4,plStack0000000000000048);
              uVar6 = *(uint *)(unaff_x24 + 3);
              if (uVar20 < uVar6) {
                lVar16 = *plVar25;
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
  uVar6 = *(uint *)(unaff_x24 + 3);
  uVar17 = (ulong)uVar6;
  uVar20 = uVar20 + 1;
  if ((long)(int)uVar6 <= (long)uVar20) goto LAB_033bf8b4;
  goto LAB_033bec84;
LAB_033bf8b4:
  if (uVar8 == 1) {
    if (unaff_x25 != 0) {
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
      lVar16 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
      lVar11 = *unaff_x28;
      if ((lVar11 == 0) || (plVar9 == (long *)0x0)) goto LAB_033bec5c;
      if ((int)plVar9[3] == 0) goto LAB_033bfa24;
      lVar18 = plVar9[4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      bVar5 = FUN_033ab18c(lVar18,0,0);
      lVar18 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
      if (lVar16 == 0) {
        lVar19 = 0;
      }
      else {
        uVar15 = *(undefined8 *)StringLiteral_151;
        lVar19 = thunk_FUN_01de26bc(lVar16,uVar15);
        if (lVar19 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar16,uVar15);
        }
      }
      uVar15 = *(undefined8 *)(lVar11 + 0x18);
      FUN_033d8040(lVar18,0);
      *(long *)(lVar18 + 0x10) = lVar19;
      thunk_FUN_01e10808((long *)(lVar18 + 0x10),lVar19);
      *(int *)(lVar18 + 0x18) = (int)uVar15;
      *(byte *)(lVar18 + 0x1c) = bVar5 & 1;
      *in_stack_00000010 = lVar18;
      thunk_FUN_01e10808(in_stack_00000010,lVar18);
      if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
      uVar15 = *(undefined8 *)(unaff_x23 + 0x20);
      lVar16 = *unaff_x28;
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033c0ca4(uVar15,lVar16);
      uVar6 = (uint)unaff_x24[3];
      plVar23 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
    }
    if (uVar6 == 0) goto LAB_033bfa24;
    plVar25 = unaff_x24 + 4;
    plVar10 = (long *)*plVar25;
    if (((plVar10 == (long *)0x0) ||
        (lVar16 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0)),
        lVar16 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
    iVar7 = *(int *)(*unaff_x28 + 0x18);
    if (*(int *)(lVar16 + 0x18) == iVar7) {
      if (plVar9 == (long *)0x0) goto LAB_033bec5c;
      if ((int)plVar9[3] == 0) goto LAB_033bfa24;
      lVar11 = plVar9[4];
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar20 = FUN_033ab18c(lVar11,0,0);
      if ((uVar20 & 1) != 0) {
        plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar16 + 0x18));
        uVar8 = *(int *)(lVar16 + 0x18) - 1;
        FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar8,0);
        if ((int)plVar9[3] == 0) goto LAB_033bfa24;
        lVar11 = plVar9[4];
        lVar16 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if (lVar16 == 0) goto LAB_033bec5c;
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_033bfa24;
        *(undefined4 *)(lVar16 + 0x20) = 1;
        lVar16 = thunk_FUN_033b4750(lVar11,lVar16,0);
        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar16 != 0) &&
           (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
        plVar9 = plVar10 + (long)(int)uVar8 + 4;
        *plVar9 = lVar16;
        thunk_FUN_01e10808(plVar9,lVar16);
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_033bfa24;
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_033bec5c;
        bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar9);
        }
        FUN_033b49e8(plVar9,*(undefined8 *)(lVar16 + (long)(int)uVar8 * 8 + 0x20),0,0);
        goto LAB_033c0730;
      }
    }
    else {
      if (iVar7 < *(int *)(lVar16 + 0x18)) {
        plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
        lVar11 = *unaff_x28;
        if (lVar11 != 0) {
          uVar20 = 0;
          plVar23 = plVar10 + 4;
          do {
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar20) {
              uVar8 = *(uint *)(lVar16 + 0x18);
              if ((int)(uVar8 - 1) <= (int)uVar20) goto LAB_033c0080;
              goto LAB_033c000c;
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_033bfa24;
            if (plVar10 == (long *)0x0) break;
            lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x20);
            if ((lVar11 != 0) &&
               (lVar18 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
            goto LAB_033c07f0;
            if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_033bfa24;
            *plVar23 = lVar11;
            thunk_FUN_01e10808(plVar23,lVar11);
            lVar11 = *unaff_x28;
            uVar20 = uVar20 + 1;
            plVar23 = plVar23 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_033bec5c;
      }
      if ((int)unaff_x24[3] == 0) goto LAB_033bfa24;
      plVar10 = (long *)*plVar25;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      uVar8 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
      if ((uVar8 >> 1 & 1) == 0) {
        plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar16 + 0x18));
        uVar8 = *(int *)(lVar16 + 0x18) - 1;
        FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar8,0);
        if (plVar9 == (long *)0x0) goto LAB_033bec5c;
        if ((int)plVar9[3] == 0) goto LAB_033bfa24;
        lVar11 = plVar9[4];
        lVar16 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if ((*unaff_x28 == 0) || (lVar16 == 0)) goto LAB_033bec5c;
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_033bfa24;
        *(uint *)(lVar16 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
        lVar16 = thunk_FUN_033b4750(lVar11,lVar16,0);
        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar16 != 0) &&
           (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
        plVar9 = plVar10 + (long)(int)uVar8 + 4;
        *plVar9 = lVar16;
        thunk_FUN_01e10808(plVar9,lVar16);
        if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
        lVar16 = *unaff_x28;
        if (lVar16 == 0) goto LAB_033bec5c;
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) {
          bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)StringLiteral_1183)) goto LAB_033c090c;
        }
        FUN_033b4f38(lVar16,uVar8,plVar9,0,*(int *)(lVar16 + 0x18) - uVar8,0);
        *unaff_x28 = (long)plVar10;
        thunk_FUN_01e10808(unaff_x28,plVar10);
      }
    }
    goto LAB_033c0740;
  }
  if (uVar8 == 0) {
LAB_033c085c:
    uVar15 = thunk_FUN_01dd295c(StringLiteral_8802);
    uVar15 = FUN_033d6e4c(uVar15,0);
    thunk_FUN_01dd295c(StringLiteral_1159);
    uVar26 = thunk_FUN_01de27b8();
    FUN_033958dc(uVar26,uVar15,0);
LAB_033c0894:
    uVar15 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar26,uVar15);
  }
  if (1 < (int)uVar8) {
    if (uVar6 != 0) {
      lVar16 = 0;
      lVar11 = 0;
      uVar6 = 0;
      bVar3 = false;
      while( true ) {
        if (unaff_x23 == 0) goto LAB_033bec5c;
        if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) break;
        if (plVar9 == (long *)0x0) goto LAB_033bec5c;
        if (((((uint)plVar9[3] <= uVar6) || (uVar20 = lVar16 + 1, uVar17 <= uVar20)) ||
            ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar20)) ||
           ((plVar9[3] & 0xffffffffU) <= uVar20)) break;
        lVar19 = unaff_x24[lVar11 + 4];
        lVar27 = unaff_x24[lVar16 + 5];
        lVar18 = plVar9[lVar11 + 4];
        uVar15 = *(undefined8 *)(unaff_x23 + lVar11 * 8 + 0x20);
        uVar26 = *(undefined8 *)(unaff_x23 + 0x28 + lVar16 * 8);
        lVar24 = plVar9[lVar16 + 5];
        lVar11 = *unaff_x28;
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar7 = FUN_033c0e28(lVar19,uVar15,lVar18,lVar27,uVar26,lVar24,plVar10,lVar11);
        if (iVar7 == 0) {
          bVar3 = true;
        }
        else if (iVar7 == 2) {
          uVar6 = (int)lVar16 + 1;
          bVar3 = false;
        }
        if ((ulong)uVar8 - 2 == lVar16) {
          plVar23 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          if (!bVar3) goto LAB_033bfae0;
          uVar15 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar15 = FUN_033d6e4c(uVar15,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar26 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar26,uVar15,0);
          goto LAB_033c0894;
        }
        lVar11 = (long)(int)uVar6;
        lVar16 = lVar16 + 1;
        uVar17 = unaff_x24[3] & 0xffffffff;
        if ((uint)unaff_x24[3] <= uVar6) break;
      }
    }
    goto LAB_033bfa24;
  }
  uVar6 = 0;
LAB_033bfae0:
  if (unaff_x25 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar10 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar16 = *plVar10;
    if (lVar16 == 0) goto LAB_033bec5c;
    lVar16 = FUN_033b5440(lVar16,0);
    lVar11 = *unaff_x28;
    if ((lVar11 == 0) || (plVar9 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_033bfa24;
    lVar18 = plVar9[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar5 = FUN_033ab18c(lVar18,0,0);
    lVar18 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar16 == 0) {
      lVar19 = 0;
    }
    else {
      uVar15 = *(undefined8 *)StringLiteral_151;
      lVar19 = thunk_FUN_01de26bc(lVar16,uVar15);
      if (lVar19 == 0) goto LAB_033bfb98;
    }
    uVar15 = *(undefined8 *)(lVar11 + 0x18);
    FUN_033d8040(lVar18,0);
    *(long *)(lVar18 + 0x10) = lVar19;
    thunk_FUN_01e10808((long *)(lVar18 + 0x10),lVar19);
    *(int *)(lVar18 + 0x18) = (int)uVar15;
    *(byte *)(lVar18 + 0x1c) = bVar5 & 1;
    *in_stack_00000010 = lVar18;
    thunk_FUN_01e10808(in_stack_00000010,lVar18);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar16 = *plVar10;
    lVar11 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar16,lVar11);
    plVar23 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
  plVar25 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar10 = (long *)*plVar25;
  if (((plVar10 == (long *)0x0) ||
      (lVar16 = (**(code **)(*plVar10 + 0x3b8))(plVar10,*(undefined8 *)(*plVar10 + 0x3c0)),
      lVar16 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar7 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar16 + 0x18) == iVar7) {
    if (plVar9 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_033bfa24;
    lVar11 = plVar9[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar23 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar20 = FUN_033ab18c(lVar11,0,0);
    if ((uVar20 & 1) != 0) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar16 + 0x18)
                                    );
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar8,0);
      if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_033bfa24;
      lVar11 = plVar9[(long)(int)uVar6 + 4];
      lVar16 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar16 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar16 + 0x20) = 1;
      lVar16 = thunk_FUN_033b4750(lVar11,lVar16,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar16 != 0) &&
         (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
      plVar9 = plVar10 + (long)(int)uVar8 + 4;
      *plVar9 = lVar16;
      thunk_FUN_01e10808(plVar9,lVar16);
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
      lVar16 = *unaff_x28;
      if (lVar16 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_033bfa24;
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_033bec5c;
      bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) != *(long *)StringLiteral_1183
         )) goto LAB_033c090c;
      FUN_033b49e8(plVar9,*(undefined8 *)(lVar16 + (long)(int)uVar8 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar7 < *(int *)(lVar16 + 0x18)) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar11 = *unaff_x28;
      if (lVar11 != 0) {
        uVar20 = 0;
        plVar23 = plVar10 + 4;
        do {
          if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar20) {
            uVar8 = *(uint *)(lVar16 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar20) goto LAB_033c0618;
            goto LAB_033c05a4;
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar20) goto LAB_033bfa24;
          if (plVar10 == (long *)0x0) break;
          lVar11 = *(long *)(lVar11 + uVar20 * 8 + 0x20);
          if ((lVar11 != 0) &&
             (lVar18 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_033bfa24;
          *plVar23 = lVar11;
          thunk_FUN_01e10808(plVar23,lVar11);
          lVar11 = *unaff_x28;
          uVar20 = uVar20 + 1;
          plVar23 = plVar23 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_033bec5c;
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
    plVar10 = (long *)*plVar25;
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    uVar8 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar16 + 0x18)
                                    );
      uVar8 = *(int *)(lVar16 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar8,0);
      if (plVar9 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_033bfa24;
      lVar11 = plVar9[(long)(int)uVar6 + 4];
      lVar16 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar16 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar16 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar16 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar8;
      lVar16 = thunk_FUN_033b4750(lVar11,lVar16,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar16 != 0) &&
         (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
      plVar9 = plVar10 + (long)(int)uVar8 + 4;
      *plVar9 = lVar16;
      thunk_FUN_01e10808(plVar9,lVar16);
      if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
      lVar16 = *unaff_x28;
      if (lVar16 == 0) goto LAB_033bec5c;
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar16,uVar8,plVar9,0,*(int *)(lVar16 + 0x18) - uVar8,0);
      *unaff_x28 = (long)plVar10;
      thunk_FUN_01e10808(unaff_x28,plVar10);
    }
  }
  goto OVRPlugin__TriggerVibrationAction;
  while( true ) {
    plVar12 = *(long **)(lVar16 + 0x20 + uVar20 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar11 != 0) &&
       (lVar18 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar10 + 3) <= (uint)uVar20) goto LAB_033bfa24;
    *plVar23 = lVar11;
    thunk_FUN_01e10808(plVar23,lVar11);
    uVar8 = *(uint *)(lVar16 + 0x18);
    uVar20 = uVar20 + 1;
    plVar23 = plVar23 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar20) break;
LAB_033c000c:
    if (uVar8 <= (uint)uVar20) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (plVar9 == (long *)0x0) goto LAB_033bec5c;
  if ((int)plVar9[3] == 0) goto LAB_033bfa24;
  lVar11 = plVar9[4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar17 = FUN_033ab18c(lVar11,0,0);
  uVar8 = (uint)uVar20;
  if ((uVar17 & 1) == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_033bfa24;
    plVar9 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_033c07f0;
    uVar6 = *(uint *)(plVar10 + 3);
  }
  else {
    if ((int)plVar9[3] == 0) goto LAB_033bfa24;
    lVar16 = plVar9[4];
    uVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar16 = thunk_FUN_033b4750(lVar16,uVar15,0);
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_033c07f0;
    uVar6 = *(uint *)(plVar10 + 3);
  }
  if (uVar6 <= uVar8) goto LAB_033bfa24;
  plVar10[(long)(int)uVar8 + 4] = lVar16;
  thunk_FUN_01e10808(plVar10 + (long)(int)uVar8 + 4,lVar16);
LAB_033c0730:
  *unaff_x28 = (long)plVar10;
  thunk_FUN_01e10808(unaff_x28,plVar10);
LAB_033c0740:
  if ((int)unaff_x24[3] != 0) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    uVar20 = uVar20 + 1;
    plVar23 = plVar23 + 1;
    if (lVar16 == 0) break;
LAB_033bebe0:
    if ((long)(int)*(uint *)(lVar16 + 0x18) <= (long)uVar20) {
      if ((int)unaff_x24[3] < 1) goto LAB_033c085c;
      uVar20 = 0;
      uVar8 = 0;
      uVar17 = unaff_x24[3] & 0xffffffff;
      plVar23 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      goto LAB_033bec84;
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_033bfa24;
    lVar11 = *(long *)(lVar16 + uVar20 * 8 + 0x20);
    if (lVar11 != 0) {
      lVar16 = thunk_FUN_01dfff04(lVar11,0);
      if (plVar10 == (long *)0x0) break;
      if ((lVar16 != 0) &&
         (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar10 + 3) <= uVar20) goto LAB_033bfa24;
      *plVar23 = lVar16;
      thunk_FUN_01e10808(plVar23,lVar16);
      lVar16 = *unaff_x28;
    }
  }
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    plVar12 = *(long **)(lVar16 + 0x20 + uVar20 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar11 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar11 != 0) &&
       (lVar18 = thunk_FUN_01de26bc(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar18 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar10 + 3) <= (uint)uVar20) goto LAB_033bfa24;
    *plVar23 = lVar11;
    thunk_FUN_01e10808(plVar23,lVar11);
    uVar8 = *(uint *)(lVar16 + 0x18);
    uVar20 = uVar20 + 1;
    plVar23 = plVar23 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar20) break;
LAB_033c05a4:
    if (uVar8 <= (uint)uVar20) goto LAB_033bfa24;
  }
LAB_033c0618:
  if (plVar9 == (long *)0x0) goto LAB_033bec5c;
  if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_033bfa24;
  lVar11 = plVar9[(long)(int)uVar6 + 4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar17 = FUN_033ab18c(lVar11,0,0);
  uVar8 = (uint)uVar20;
  if ((uVar17 & 1) == 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_033bfa24;
    plVar9 = *(long **)(lVar16 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar16 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
    goto LAB_033c07f0;
    uVar22 = *(uint *)(plVar10 + 3);
  }
  else {
    if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_033bfa24;
    lVar16 = plVar9[(long)(int)uVar6 + 4];
    uVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar16 = thunk_FUN_033b4750(lVar16,uVar15,0);
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar16 != 0) &&
       (lVar11 = thunk_FUN_01de26bc(lVar16,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
LAB_033c07f0:
      uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar15,0);
    }
    uVar22 = *(uint *)(plVar10 + 3);
  }
  if (uVar22 <= uVar8) goto LAB_033bfa24;
  plVar10[(long)(int)uVar8 + 4] = lVar16;
  thunk_FUN_01e10808(plVar10 + (long)(int)uVar8 + 4,lVar16);
FUN_033c07b0:
  *unaff_x28 = (long)plVar10;
  thunk_FUN_01e10808(unaff_x28,plVar10);
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) {
LAB_033c07cc:
    return *plVar25;
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


