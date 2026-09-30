/*
FUNCTION_NAME: FUN_033be904
ENTRY_POINT: 033be904
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_033be904(undefined8 param_1,uint param_2,long param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,long *param_8)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  long lVar30;
  long *local_78;
  
  if ((DAT_044a6991 & 1) == 0) {
    FUN_01d7d918(StringLiteral_8798);
    FUN_01d7d918(StringLiteral_4821);
    FUN_01d7d918(StringLiteral_8523);
    FUN_01d7d918(StringLiteral_8799);
    FUN_01d7d918(StringLiteral_151);
    FUN_01d7d918(StringLiteral_8768);
    FUN_01d7d918(StringLiteral_887);
    FUN_01d7d918(StringLiteral_8800);
    FUN_01d7d918(StringLiteral_1183);
    FUN_01d7d918(StringLiteral_2477);
    FUN_01d7d918(StringLiteral_1157);
    FUN_01d7d918(StringLiteral_1291);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    DAT_044a6991 = 1;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    uVar25 = thunk_FUN_01dd295c(StringLiteral_8801);
    uVar25 = FUN_033d6e4c(uVar25,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar18 = thunk_FUN_01de27b8();
    uVar29 = thunk_FUN_01dd295c(StringLiteral_1240);
    FUN_03287130(uVar18,uVar25,uVar29,0);
LAB_033c0894:
    uVar25 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar18,uVar25);
  }
  lVar9 = FUN_033b5440(param_3,0);
  if (lVar9 == 0) {
    *param_8 = 0;
    thunk_FUN_01e10808(param_8,0);
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar25 = *(undefined8 *)StringLiteral_8768;
  plVar10 = (long *)thunk_FUN_01de26bc(lVar9,uVar25);
  puVar4 = StringLiteral_8799;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c(lVar9,uVar25);
  }
  *param_8 = 0;
  thunk_FUN_01e10808(param_8,0);
  lVar9 = FUN_01d7d9bc(*(undefined8 *)puVar4,(int)plVar10[3]);
  lVar19 = plVar10[3];
  if (0 < (int)lVar19) {
    uVar8 = 0;
    do {
      if ((uint)lVar19 <= uVar8) goto LAB_033bfa24;
      plVar14 = plVar10 + (long)(int)uVar8 + 4;
      plVar11 = (long *)*plVar14;
      if (((plVar11 == (long *)0x0) ||
          (lVar19 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0)),
          lVar19 == 0)) || (*param_4 == 0)) goto LAB_033bec5c;
      iVar1 = *(int *)(*param_4 + 0x18);
      iVar7 = *(int *)(lVar19 + 0x18);
      if (*(int *)(lVar19 + 0x18) <= iVar1) {
        iVar7 = iVar1;
      }
      lVar12 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,iVar7);
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_033bfa24;
      plVar11 = (long *)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
      *plVar11 = lVar12;
      thunk_FUN_01e10808(plVar11,lVar12);
      if (param_7 == 0) {
        if (*param_4 == 0) goto LAB_033bec5c;
        lVar19 = *(long *)(*param_4 + 0x18);
        if (0 < lVar19 << 0x20) {
          uVar6 = *(uint *)(lVar9 + 0x18);
          uVar13 = 0;
          do {
            if (uVar6 <= uVar8) goto LAB_033bfa24;
            lVar12 = *plVar11;
            if (lVar12 == 0) goto LAB_033bec5c;
            if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_033bfa24;
            *(int *)(lVar12 + uVar13 * 4 + 0x20) = (int)uVar13;
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)lVar19);
        }
      }
      else {
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_033bfa24;
        lVar12 = *plVar11;
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar13 = FUN_033c0910(lVar12,lVar19,param_7);
        if ((uVar13 & 1) == 0) {
          if (*(uint *)(plVar10 + 3) <= uVar8) goto LAB_033bfa24;
          *plVar14 = 0;
          thunk_FUN_01e10808(plVar14,0);
        }
      }
      lVar19 = plVar10[3];
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)lVar19);
  }
  puVar4 = StringLiteral_1291;
  plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_1291);
  if (*param_4 != 0) {
    plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)puVar4,*(undefined4 *)(*param_4 + 0x18));
    lVar19 = *param_4;
    if (lVar19 != 0) {
      uVar13 = 0;
      plVar26 = plVar14 + 4;
      do {
        if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
          if ((int)plVar10[3] < 1) goto LAB_033c085c;
          uVar13 = 0;
          uVar8 = 0;
          uVar20 = plVar10[3] & 0xffffffff;
          plVar26 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          goto LAB_033bec84;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_033bfa24;
        lVar12 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
        if (lVar12 != 0) {
          lVar19 = thunk_FUN_01dfff04(lVar12,0);
          if (plVar14 == (long *)0x0) break;
          if ((lVar19 != 0) &&
             (lVar12 = thunk_FUN_01de26bc(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_033bfa24;
          *plVar26 = lVar19;
          thunk_FUN_01e10808(plVar26,lVar19);
          lVar19 = *param_4;
        }
        uVar13 = uVar13 + 1;
        plVar26 = plVar26 + 1;
      } while (lVar19 != 0);
    }
  }
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
LAB_033bec84:
  if (uVar20 <= uVar13) goto LAB_033bfa24;
  plVar28 = plVar10 + uVar13 + 4;
  uVar20 = FUN_03308638(*plVar28,0,0);
  if ((uVar20 & 1) != 0) goto LAB_033bf82c;
  if (*(uint *)(plVar10 + 3) <= uVar13) goto LAB_033bfa24;
  plVar15 = (long *)*plVar28;
  if ((plVar15 == (long *)0x0) ||
     (lVar19 = (**(code **)(*plVar15 + 0x3b8))(plVar15,*(undefined8 *)(*plVar15 + 0x3c0)),
     lVar19 == 0)) goto LAB_033bec5c;
  uVar20 = *(ulong *)(lVar19 + 0x18);
  lVar12 = *param_4;
  if (uVar20 == 0) {
    if (lVar12 == 0) goto LAB_033bec5c;
    if (*(long *)(lVar12 + 0x18) != 0) {
      if (*(uint *)(plVar10 + 3) <= uVar13) goto LAB_033bfa24;
      plVar15 = (long *)*plVar28;
      if (plVar15 == (long *)0x0) goto LAB_033bec5c;
      uVar6 = (**(code **)(*plVar15 + 600))(plVar15,*(undefined8 *)(*plVar15 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_033bf82c;
    }
    if (lVar9 == 0) goto LAB_033bec5c;
    if ((*(uint *)(lVar9 + 0x18) <= uVar13) || (*(uint *)(lVar9 + 0x18) <= uVar8))
    goto LAB_033bfa24;
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) =
         *(undefined8 *)(lVar9 + uVar13 * 8 + 0x20);
    thunk_FUN_01e10808();
    uVar6 = *(uint *)(plVar10 + 3);
    if (uVar6 <= uVar13) goto LAB_033bfa24;
    lVar19 = *plVar28;
joined_r0x033bedec:
    if (lVar19 != 0) {
      lVar12 = thunk_FUN_01de26bc(lVar19,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar12 == 0) goto LAB_033c07f0;
      uVar6 = (uint)plVar10[3];
    }
    lVar12 = (long)(int)uVar8;
    if (uVar6 <= uVar8) goto LAB_033bfa24;
    plVar10[lVar12 + 4] = lVar19;
    uVar8 = uVar8 + 1;
    thunk_FUN_01e10808(plVar10 + lVar12 + 4,lVar19);
    plVar26 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    goto LAB_033bf82c;
  }
  if (lVar12 == 0) goto LAB_033bec5c;
  uVar6 = *(uint *)(lVar12 + 0x18);
  iVar7 = (int)uVar20;
  if ((int)uVar6 < iVar7) {
    uVar24 = iVar7 - 1;
    if ((int)uVar6 < (int)uVar24) {
      plVar15 = (long *)(lVar19 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar20 <= uVar6) goto LAB_033bfa24;
        plVar16 = (long *)*plVar15;
        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
        lVar12 = (**(code **)(*plVar16 + 0x1f8))(plVar16,*(undefined8 *)(*plVar16 + 0x200));
        puVar4 = StringLiteral_4821;
        lVar21 = *(long *)StringLiteral_4821;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar21);
          lVar21 = *(long *)puVar4;
        }
        if (lVar12 == **(long **)(lVar21 + 0xb8)) {
          uVar20 = (ulong)*(uint *)(lVar19 + 0x18);
          uVar24 = *(uint *)(lVar19 + 0x18) - 1;
          break;
        }
        uVar20 = *(ulong *)(lVar19 + 0x18);
        uVar6 = uVar6 + 1;
        plVar15 = plVar15 + 1;
        uVar24 = (int)uVar20 - 1;
      } while ((int)uVar6 < (int)uVar24);
    }
    if (uVar6 == uVar24) {
      if ((uint)uVar20 <= uVar6) goto LAB_033bfa24;
      plVar16 = (long *)(lVar19 + (long)(int)uVar6 * 8 + 0x20);
      plVar15 = (long *)*plVar16;
      if (plVar15 == (long *)0x0) goto LAB_033bec5c;
      lVar12 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200));
      puVar4 = StringLiteral_4821;
      lVar21 = *(long *)StringLiteral_4821;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar21);
        lVar21 = *(long *)puVar4;
      }
      if (lVar12 != **(long **)(lVar21 + 0xb8)) goto LAB_033bf040;
      if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_033bfa24;
      plVar15 = (long *)*plVar16;
      if ((plVar15 == (long *)0x0) ||
         (lVar12 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
         lVar12 == 0)) goto LAB_033bec5c;
      uVar20 = FUN_033ac038(lVar12,0);
      if ((uVar20 & 1) != 0) {
        if (*(uint *)(lVar19 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar15 = (long *)*plVar16;
        uVar25 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*plVar26 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar25 = FUN_033a87c8(uVar25,0);
        if (plVar15 == (long *)0x0) goto LAB_033bec5c;
        uVar20 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar25,1,*(undefined8 *)(*plVar15 + 0x210))
        ;
        plVar26 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar20 & 1) != 0) {
          if (uVar6 < *(uint *)(lVar19 + 0x18)) {
            plVar16 = (long *)*plVar16;
            if (plVar16 != (long *)0x0) {
              plVar15 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
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
  uVar24 = iVar7 - 1;
  lVar12 = (long)(int)uVar24;
  plVar16 = (long *)(lVar19 + lVar12 * 8 + 0x20);
  plVar15 = (long *)*plVar16;
  if ((plVar15 == (long *)0x0) ||
     (lVar21 = (**(code **)(*plVar15 + 0x1d8))(plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
     lVar21 == 0)) goto LAB_033bec5c;
  uVar20 = FUN_033ac038(lVar21,0);
  if (iVar7 < (int)uVar6) {
    if ((uVar20 & 1) != 0) {
      if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_033bfa24;
      plVar15 = (long *)*plVar16;
      uVar25 = *(undefined8 *)StringLiteral_8800;
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar25 = FUN_033a87c8(uVar25,0);
      if (plVar15 == (long *)0x0) goto LAB_033bec5c;
      uVar20 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar25,1,*(undefined8 *)(*plVar15 + 0x210));
      plVar26 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar20 & 1) != 0) {
        if (lVar9 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
        lVar21 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_033bfa24;
        if (*(uint *)(lVar21 + lVar12 * 4 + 0x20) == uVar24) {
LAB_033bf854:
          if (uVar24 < *(uint *)(lVar19 + 0x18)) {
            plVar16 = (long *)*plVar16;
            if (plVar16 != (long *)0x0) {
              plVar15 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0));
joined_r0x033bf814:
              if (plVar15 != (long *)0x0) {
                local_78 = (long *)(**(code **)(*plVar15 + 0x418))
                                             (plVar15,*(undefined8 *)(*plVar15 + 0x420));
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
  if ((uVar20 & 1) == 0) {
LAB_033bf040:
    local_78 = (long *)0x0;
  }
  else {
    if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_033bfa24;
    plVar15 = (long *)*plVar16;
    uVar25 = *(undefined8 *)StringLiteral_8800;
    if (*(int *)(*plVar26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar25 = FUN_033a87c8(uVar25,0);
    if (plVar15 == (long *)0x0) goto LAB_033bec5c;
    uVar20 = (**(code **)(*plVar15 + 0x208))(plVar15,uVar25,1,*(undefined8 *)(*plVar15 + 0x210));
    plVar26 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    if ((uVar20 & 1) != 0) {
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
      lVar21 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
      if (lVar21 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar21 + 0x18) <= uVar24) goto LAB_033bfa24;
      if (*(uint *)(lVar21 + lVar12 * 4 + 0x20) != uVar24) goto LAB_033bf040;
      if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_033bfa24;
      plVar15 = (long *)*plVar16;
      if ((plVar15 == (long *)0x0) ||
         (plVar15 = (long *)(**(code **)(*plVar15 + 0x1d8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1e0)),
         plVar14 == (long *)0x0)) goto LAB_033bec5c;
      if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_033bfa24;
      if (plVar15 == (long *)0x0) goto LAB_033bec5c;
      uVar20 = (**(code **)(*plVar15 + 0x288))
                         (plVar15,plVar14[lVar12 + 4],*(undefined8 *)(*plVar15 + 0x290));
      if ((uVar20 & 1) == 0) goto LAB_033bf854;
      goto LAB_033bf040;
    }
    local_78 = (long *)0x0;
  }
LAB_033bf044:
  if (*(int *)(*plVar26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar20 = FUN_033ab18c(local_78,0,0);
  if ((uVar20 & 1) == 0) {
    if (*param_4 == 0) goto LAB_033bec5c;
    uVar6 = *(uint *)(*param_4 + 0x18);
  }
  else {
    uVar6 = *(int *)(lVar19 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar24 = 0;
  }
  else {
    uVar23 = 0;
    plVar15 = (long *)(lVar9 + uVar13 * 8 + 0x20);
    do {
      if (*(uint *)(lVar19 + 0x18) <= uVar23) goto LAB_033bfa24;
      lVar12 = (long)(int)uVar23;
      plVar16 = *(long **)(lVar19 + lVar12 * 8 + 0x20);
      if ((plVar16 == (long *)0x0) ||
         (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
         plVar16 == (long *)0x0)) goto LAB_033bec5c;
      uVar20 = FUN_033ac048(plVar16,0);
      if ((uVar20 & 1) != 0) {
        plVar16 = (long *)(**(code **)(*plVar16 + 0x418))(plVar16,*(undefined8 *)(*plVar16 + 0x420))
        ;
      }
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
      lVar21 = *plVar15;
      if (lVar21 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_033bfa24;
      if (plVar14 == (long *)0x0) goto LAB_033bec5c;
      uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
      if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_033bfa24;
      lVar21 = plVar14[(long)(int)uVar24 + 4];
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar20 = FUN_033aa3b4(plVar16,lVar21,0);
      if ((uVar20 & 1) == 0) {
        if ((param_2 >> 0x12 & 1) != 0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
          lVar21 = *plVar15;
          if (lVar21 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_033bfa24;
          lVar22 = *param_4;
          if (lVar22 == 0) goto LAB_033bec5c;
          uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
          if (*(uint *)(lVar22 + 0x18) <= uVar24) goto LAB_033bfa24;
          lVar21 = *plVar26;
          lVar22 = *(long *)(lVar22 + (long)(int)uVar24 * 8 + 0x20);
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar21 = *plVar26;
          }
          if (lVar22 == *(long *)(*(long *)(lVar21 + 0xb8) + 0x18)) goto LAB_033bf488;
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
        lVar21 = *plVar15;
        if (lVar21 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_033bfa24;
        lVar22 = *param_4;
        if (lVar22 == 0) goto LAB_033bec5c;
        uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
        if (*(uint *)(lVar22 + 0x18) <= uVar24) goto LAB_033bfa24;
        if (*(long *)(lVar22 + (long)(int)uVar24 * 8 + 0x20) != 0) {
          uVar25 = *(undefined8 *)StringLiteral_2477;
          if (*(int *)(*plVar26 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar25 = FUN_033a87c8(uVar25,0);
          uVar20 = FUN_033aa3b4(plVar16,uVar25,0);
          if ((uVar20 & 1) == 0) {
            if (plVar16 == (long *)0x0) goto LAB_033bec5c;
            uVar20 = FUN_033ac7d8(plVar16,0);
            if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
            lVar21 = *plVar15;
            if (lVar21 == 0) goto LAB_033bec5c;
            if ((*(uint *)(lVar21 + 0x18) <= uVar23) ||
               (uVar24 = *(uint *)(lVar21 + lVar12 * 4 + 0x20), *(uint *)(plVar14 + 3) <= uVar24))
            goto LAB_033bfa24;
            lVar21 = plVar14[(long)(int)uVar24 + 4];
            if (*(int *)(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar17 = FUN_033aa3b4(lVar21,0,0);
            plVar26 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            uVar24 = uVar23;
            if ((uVar20 & 1) == 0) {
              if ((uVar17 & 1) == 0) {
                if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
                lVar21 = *plVar15;
                if (lVar21 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar21 + 0x18) <= uVar23) ||
                   (uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20), *(uint *)(plVar14 + 3) <= uVar2))
                goto LAB_033bfa24;
                uVar20 = (**(code **)(*plVar16 + 0x288))
                                   (plVar16,plVar14[(long)(int)uVar2 + 4],
                                    *(undefined8 *)(*plVar16 + 0x290));
                if ((uVar20 & 1) == 0) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
                  lVar21 = *plVar15;
                  if (lVar21 == 0) goto LAB_033bec5c;
                  if ((*(uint *)(lVar21 + 0x18) <= uVar23) ||
                     (uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20), *(uint *)(plVar14 + 3) <= uVar2
                     )) goto LAB_033bfa24;
                  if (plVar14[(long)(int)uVar2 + 4] == 0) goto LAB_033bec5c;
                  uVar20 = FUN_033ac5f4(plVar14[(long)(int)uVar2 + 4],0);
                  if ((uVar20 & 1) != 0) {
                    if (uVar13 < *(uint *)(lVar9 + 0x18)) {
                      lVar21 = *plVar15;
                      if (lVar21 != 0) {
                        if (uVar23 < *(uint *)(lVar21 + 0x18)) {
                          lVar22 = *param_4;
                          if (lVar22 != 0) {
                            uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
                            if (uVar2 < *(uint *)(lVar22 + 0x18)) {
                              uVar20 = (**(code **)(*plVar16 + 0x858))
                                                 (plVar16,*(undefined8 *)
                                                           (lVar22 + (long)(int)uVar2 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar16 + 0x860));
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
              if ((uVar17 & 1) != 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_033bfa24;
              lVar21 = *plVar15;
              if (lVar21 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_033bfa24;
              lVar22 = *param_4;
              if (lVar22 == 0) goto LAB_033bec5c;
              uVar2 = *(uint *)(lVar21 + lVar12 * 4 + 0x20);
              if (*(uint *)(lVar22 + 0x18) <= uVar2) goto LAB_033bfa24;
              uVar25 = *(undefined8 *)(lVar22 + (long)(int)uVar2 * 8 + 0x20);
              if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              bVar5 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
              if ((*(byte *)(*plVar16 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(plVar16);
              }
              uVar20 = FUN_033c0b48(uVar25,plVar16);
              plVar26 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              ;
joined_r0x033bf484:
              if ((uVar20 & 1) == 0) break;
            }
          }
        }
      }
LAB_033bf488:
      uVar23 = uVar23 + 1;
      uVar24 = uVar6;
    } while (uVar6 != uVar23);
  }
  if (*(int *)(*plVar26 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar20 = FUN_033ab18c(local_78,0,0);
  if (((uVar20 & 1) != 0) && (uVar24 == *(int *)(lVar19 + 0x18) - 1U)) {
    lVar19 = *param_4;
    if (lVar19 == 0) goto LAB_033bec5c;
    lVar12 = (-(ulong)(uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar24 << 3) + 0x20;
    while ((int)uVar24 < *(int *)(lVar19 + 0x18)) {
      if ((local_78 == (long *)0x0) || (uVar20 = FUN_033ac7d8(local_78,0), plVar14 == (long *)0x0))
      goto LAB_033bec5c;
      if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_033bfa24;
      uVar25 = *(undefined8 *)((long)plVar14 + lVar12);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar17 = FUN_033aa3b4(uVar25,0,0);
      plVar26 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar20 & 1) == 0) {
        if ((uVar17 & 1) == 0) {
          if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_033bfa24;
          uVar20 = (**(code **)(*local_78 + 0x288))
                             (local_78,*(undefined8 *)((long)plVar14 + lVar12),
                              *(undefined8 *)(*local_78 + 0x290));
          if ((uVar20 & 1) == 0) {
            if (*(uint *)(plVar14 + 3) <= uVar24) goto LAB_033bfa24;
            if (*(long *)((long)plVar14 + lVar12) == 0) goto LAB_033bec5c;
            uVar20 = FUN_033ac5f4(*(long *)((long)plVar14 + lVar12),0);
            if ((uVar20 & 1) != 0) {
              lVar19 = *param_4;
              if (lVar19 != 0) {
                if (uVar24 < *(uint *)(lVar19 + 0x18)) {
                  uVar20 = (**(code **)(*local_78 + 0x858))
                                     (local_78,*(undefined8 *)(lVar19 + lVar12),
                                      *(undefined8 *)(*local_78 + 0x860));
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
        if ((uVar17 & 1) != 0) break;
        lVar19 = *param_4;
        if (lVar19 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar19 + 0x18) <= uVar24) goto LAB_033bfa24;
        uVar25 = *(undefined8 *)(lVar19 + lVar12);
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        bVar5 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
        if ((*(byte *)(*local_78 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*local_78 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(local_78);
        }
        uVar20 = FUN_033c0b48(uVar25,local_78);
        plVar26 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
joined_r0x033bf658:
        if ((uVar20 & 1) == 0) break;
      }
      lVar19 = *param_4;
      uVar24 = uVar24 + 1;
      lVar12 = lVar12 + 8;
      if (lVar19 == 0) goto LAB_033bec5c;
    }
  }
  if (*param_4 == 0) goto LAB_033bec5c;
  if (uVar24 == *(uint *)(*param_4 + 0x18)) {
    if (lVar9 != 0) {
      if ((uVar13 < *(uint *)(lVar9 + 0x18)) && (uVar8 < *(uint *)(lVar9 + 0x18))) {
        *(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20) =
             *(undefined8 *)(lVar9 + uVar13 * 8 + 0x20);
        thunk_FUN_01e10808();
        if (plVar11 != (long *)0x0) {
          if ((local_78 == (long *)0x0) ||
             (lVar19 = thunk_FUN_01de26bc(local_78,*(undefined8 *)(*plVar11 + 0x40)), lVar19 != 0))
          {
            if (uVar8 < *(uint *)(plVar11 + 3)) {
              plVar11[(long)(int)uVar8 + 4] = (long)local_78;
              thunk_FUN_01e10808(plVar11 + (long)(int)uVar8 + 4,local_78);
              uVar6 = *(uint *)(plVar10 + 3);
              if (uVar13 < uVar6) {
                lVar19 = *plVar28;
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
  uVar6 = *(uint *)(plVar10 + 3);
  uVar20 = (ulong)uVar6;
  uVar13 = uVar13 + 1;
  if ((long)(int)uVar6 <= (long)uVar13) goto LAB_033bf8b4;
  goto LAB_033bec84;
LAB_033bf8b4:
  if (uVar8 == 1) {
    if (param_7 != 0) {
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_033bec5c;
      lVar19 = FUN_033b5440(*(long *)(lVar9 + 0x20),0);
      lVar12 = *param_4;
      if ((lVar12 == 0) || (plVar11 == (long *)0x0)) goto LAB_033bec5c;
      if ((int)plVar11[3] == 0) goto LAB_033bfa24;
      lVar21 = plVar11[4];
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      bVar5 = FUN_033ab18c(lVar21,0,0);
      lVar21 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
      if (lVar19 == 0) {
        lVar22 = 0;
      }
      else {
        uVar25 = *(undefined8 *)StringLiteral_151;
        lVar22 = thunk_FUN_01de26bc(lVar19,uVar25);
        if (lVar22 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(lVar19,uVar25);
        }
      }
      uVar25 = *(undefined8 *)(lVar12 + 0x18);
      FUN_033d8040(lVar21,0);
      *(long *)(lVar21 + 0x10) = lVar22;
      thunk_FUN_01e10808((long *)(lVar21 + 0x10),lVar22);
      *(int *)(lVar21 + 0x18) = (int)uVar25;
      *(byte *)(lVar21 + 0x1c) = bVar5 & 1;
      *param_8 = lVar21;
      thunk_FUN_01e10808(param_8,lVar21);
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
      uVar25 = *(undefined8 *)(lVar9 + 0x20);
      lVar9 = *param_4;
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033c0ca4(uVar25,lVar9);
      uVar6 = (uint)plVar10[3];
      plVar26 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
    }
    if (uVar6 == 0) goto LAB_033bfa24;
    plVar28 = plVar10 + 4;
    plVar14 = (long *)*plVar28;
    if (((plVar14 == (long *)0x0) ||
        (lVar9 = (**(code **)(*plVar14 + 0x3b8))(plVar14,*(undefined8 *)(*plVar14 + 0x3c0)),
        lVar9 == 0)) || (*param_4 == 0)) goto LAB_033bec5c;
    iVar7 = *(int *)(*param_4 + 0x18);
    if (*(int *)(lVar9 + 0x18) == iVar7) {
      if (plVar11 == (long *)0x0) goto LAB_033bec5c;
      if ((int)plVar11[3] == 0) goto LAB_033bfa24;
      lVar19 = plVar11[4];
      if (*(int *)(*plVar26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar13 = FUN_033ab18c(lVar19,0,0);
      if ((uVar13 & 1) != 0) {
        plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar9 + 0x18));
        uVar8 = *(int *)(lVar9 + 0x18) - 1;
        FUN_033b4f38(*param_4,0,plVar14,0,uVar8,0);
        if ((int)plVar11[3] == 0) goto LAB_033bfa24;
        lVar19 = plVar11[4];
        lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if (lVar9 == 0) goto LAB_033bec5c;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
        *(undefined4 *)(lVar9 + 0x20) = 1;
        lVar9 = thunk_FUN_033b4750(lVar19,lVar9,0);
        if (plVar14 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar9 != 0) &&
           (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
        plVar11 = plVar14 + (long)(int)uVar8 + 4;
        *plVar11 = lVar9;
        thunk_FUN_01e10808(plVar11,lVar9);
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
        lVar9 = *param_4;
        if (lVar9 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_033bfa24;
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_033bec5c;
        bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(plVar11);
        }
        FUN_033b49e8(plVar11,*(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20),0,0);
        goto LAB_033c0730;
      }
    }
    else {
      if (iVar7 < *(int *)(lVar9 + 0x18)) {
        plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
        lVar19 = *param_4;
        if (lVar19 != 0) {
          uVar13 = 0;
          plVar26 = plVar14 + 4;
          do {
            if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
              uVar8 = *(uint *)(lVar9 + 0x18);
              if ((int)(uVar8 - 1) <= (int)uVar13) goto LAB_033c0080;
              goto LAB_033c000c;
            }
            if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_033bfa24;
            if (plVar14 == (long *)0x0) break;
            lVar19 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
            if ((lVar19 != 0) &&
               (lVar12 = thunk_FUN_01de26bc(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
            goto LAB_033c07f0;
            if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_033bfa24;
            *plVar26 = lVar19;
            thunk_FUN_01e10808(plVar26,lVar19);
            lVar19 = *param_4;
            uVar13 = uVar13 + 1;
            plVar26 = plVar26 + 1;
          } while (lVar19 != 0);
        }
        goto LAB_033bec5c;
      }
      if ((int)plVar10[3] == 0) goto LAB_033bfa24;
      plVar14 = (long *)*plVar28;
      if (plVar14 == (long *)0x0) goto LAB_033bec5c;
      uVar8 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
      if ((uVar8 >> 1 & 1) == 0) {
        plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar9 + 0x18));
        uVar8 = *(int *)(lVar9 + 0x18) - 1;
        FUN_033b4f38(*param_4,0,plVar14,0,uVar8,0);
        if (plVar11 == (long *)0x0) goto LAB_033bec5c;
        if ((int)plVar11[3] == 0) goto LAB_033bfa24;
        lVar19 = plVar11[4];
        lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if ((*param_4 == 0) || (lVar9 == 0)) goto LAB_033bec5c;
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
        *(uint *)(lVar9 + 0x20) = *(int *)(*param_4 + 0x18) - uVar8;
        lVar9 = thunk_FUN_033b4750(lVar19,lVar9,0);
        if (plVar14 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar9 != 0) &&
           (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
        plVar11 = plVar14 + (long)(int)uVar8 + 4;
        *plVar11 = lVar9;
        thunk_FUN_01e10808(plVar11,lVar9);
        if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
        lVar9 = *param_4;
        if (lVar9 == 0) goto LAB_033bec5c;
        plVar11 = (long *)*plVar11;
        if (plVar11 != (long *)0x0) {
          bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
          if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)StringLiteral_1183)) goto LAB_033c090c;
        }
        FUN_033b4f38(lVar9,uVar8,plVar11,0,*(int *)(lVar9 + 0x18) - uVar8,0);
        *param_4 = (long)plVar14;
        thunk_FUN_01e10808(param_4,plVar14);
      }
    }
    goto LAB_033c0740;
  }
  if (uVar8 == 0) {
LAB_033c085c:
    uVar25 = thunk_FUN_01dd295c(StringLiteral_8802);
    uVar25 = FUN_033d6e4c(uVar25,0);
    thunk_FUN_01dd295c(StringLiteral_1159);
    uVar18 = thunk_FUN_01de27b8();
    FUN_033958dc(uVar18,uVar25,0);
    goto LAB_033c0894;
  }
  if (1 < (int)uVar8) {
    if (uVar6 != 0) {
      lVar19 = 0;
      lVar12 = 0;
      uVar6 = 0;
      bVar3 = false;
      while( true ) {
        if (lVar9 == 0) goto LAB_033bec5c;
        if ((uint)*(ulong *)(lVar9 + 0x18) <= uVar6) break;
        if (plVar11 == (long *)0x0) goto LAB_033bec5c;
        if (((((uint)plVar11[3] <= uVar6) || (uVar13 = lVar19 + 1, uVar20 <= uVar13)) ||
            ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) <= uVar13)) ||
           ((plVar11[3] & 0xffffffffU) <= uVar13)) break;
        lVar22 = plVar10[lVar12 + 4];
        lVar30 = plVar10[lVar19 + 5];
        lVar21 = plVar11[lVar12 + 4];
        uVar25 = *(undefined8 *)(lVar9 + lVar12 * 8 + 0x20);
        uVar29 = *(undefined8 *)(lVar9 + 0x28 + lVar19 * 8);
        lVar27 = plVar11[lVar19 + 5];
        lVar12 = *param_4;
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar7 = FUN_033c0e28(lVar22,uVar25,lVar21,lVar30,uVar29,lVar27,plVar14,lVar12);
        if (iVar7 == 0) {
          bVar3 = true;
        }
        else if (iVar7 == 2) {
          uVar6 = (int)lVar19 + 1;
          bVar3 = false;
        }
        if ((ulong)uVar8 - 2 == lVar19) {
          plVar26 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          if (!bVar3) goto LAB_033bfae0;
          uVar25 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar25 = FUN_033d6e4c(uVar25,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar18 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar18,uVar25,0);
          goto LAB_033c0894;
        }
        lVar12 = (long)(int)uVar6;
        lVar19 = lVar19 + 1;
        uVar20 = plVar10[3] & 0xffffffff;
        if ((uint)plVar10[3] <= uVar6) break;
      }
    }
    goto LAB_033bfa24;
  }
  uVar6 = 0;
LAB_033bfae0:
  if (param_7 != 0) {
    if (lVar9 == 0) goto LAB_033bec5c;
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar14 = (long *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
    lVar19 = *plVar14;
    if (lVar19 == 0) goto LAB_033bec5c;
    lVar19 = FUN_033b5440(lVar19,0);
    lVar12 = *param_4;
    if ((lVar12 == 0) || (plVar11 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
    lVar21 = plVar11[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar5 = FUN_033ab18c(lVar21,0,0);
    lVar21 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar19 == 0) {
      lVar22 = 0;
    }
    else {
      uVar25 = *(undefined8 *)StringLiteral_151;
      lVar22 = thunk_FUN_01de26bc(lVar19,uVar25);
      if (lVar22 == 0) goto LAB_033bfb98;
    }
    uVar25 = *(undefined8 *)(lVar12 + 0x18);
    FUN_033d8040(lVar21,0);
    *(long *)(lVar21 + 0x10) = lVar22;
    thunk_FUN_01e10808((long *)(lVar21 + 0x10),lVar22);
    *(int *)(lVar21 + 0x18) = (int)uVar25;
    *(byte *)(lVar21 + 0x1c) = bVar5 & 1;
    *param_8 = lVar21;
    thunk_FUN_01e10808(param_8,lVar21);
    if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar9 = *plVar14;
    lVar19 = *param_4;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar9,lVar19);
    plVar26 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
  plVar28 = plVar10 + (long)(int)uVar6 + 4;
  plVar14 = (long *)*plVar28;
  if (((plVar14 == (long *)0x0) ||
      (lVar9 = (**(code **)(*plVar14 + 0x3b8))(plVar14,*(undefined8 *)(*plVar14 + 0x3c0)),
      lVar9 == 0)) || (*param_4 == 0)) goto LAB_033bec5c;
  iVar7 = *(int *)(*param_4 + 0x18);
  if (*(int *)(lVar9 + 0x18) == iVar7) {
    if (plVar11 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
    lVar19 = plVar11[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar13 = FUN_033ab18c(lVar19,0,0);
    if ((uVar13 & 1) != 0) {
      plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar9 + 0x18))
      ;
      uVar8 = *(int *)(lVar9 + 0x18) - 1;
      FUN_033b4f38(*param_4,0,plVar14,0,uVar8,0);
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
      lVar19 = plVar11[(long)(int)uVar6 + 4];
      lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar9 + 0x20) = 1;
      lVar9 = thunk_FUN_033b4750(lVar19,lVar9,0);
      if (plVar14 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar9 != 0) &&
         (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
      plVar11 = plVar14 + (long)(int)uVar8 + 4;
      *plVar11 = lVar9;
      thunk_FUN_01e10808(plVar11,lVar9);
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
      lVar9 = *param_4;
      if (lVar9 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_033bfa24;
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) goto LAB_033bec5c;
      bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) !=
          *(long *)StringLiteral_1183)) goto LAB_033c090c;
      FUN_033b49e8(plVar11,*(undefined8 *)(lVar9 + (long)(int)uVar8 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar7 < *(int *)(lVar9 + 0x18)) {
      plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar19 = *param_4;
      if (lVar19 != 0) {
        uVar13 = 0;
        plVar26 = plVar14 + 4;
        do {
          if ((long)(int)*(uint *)(lVar19 + 0x18) <= (long)uVar13) {
            uVar8 = *(uint *)(lVar9 + 0x18);
            if ((int)(uVar8 - 1) <= (int)uVar13) goto LAB_033c0618;
            goto LAB_033c05a4;
          }
          if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_033bfa24;
          if (plVar14 == (long *)0x0) break;
          lVar19 = *(long *)(lVar19 + uVar13 * 8 + 0x20);
          if ((lVar19 != 0) &&
             (lVar12 = thunk_FUN_01de26bc(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_033bfa24;
          *plVar26 = lVar19;
          thunk_FUN_01e10808(plVar26,lVar19);
          lVar19 = *param_4;
          uVar13 = uVar13 + 1;
          plVar26 = plVar26 + 1;
        } while (lVar19 != 0);
      }
      goto LAB_033bec5c;
    }
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
    plVar14 = (long *)*plVar28;
    if (plVar14 == (long *)0x0) goto LAB_033bec5c;
    uVar8 = (**(code **)(*plVar14 + 600))(plVar14,*(undefined8 *)(*plVar14 + 0x260));
    if ((uVar8 >> 1 & 1) == 0) {
      plVar14 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar9 + 0x18))
      ;
      uVar8 = *(int *)(lVar9 + 0x18) - 1;
      FUN_033b4f38(*param_4,0,plVar14,0,uVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
      lVar19 = plVar11[(long)(int)uVar6 + 4];
      lVar9 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*param_4 == 0) || (lVar9 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar9 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar9 + 0x20) = *(int *)(*param_4 + 0x18) - uVar8;
      lVar9 = thunk_FUN_033b4750(lVar19,lVar9,0);
      if (plVar14 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar9 != 0) &&
         (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
      plVar11 = plVar14 + (long)(int)uVar8 + 4;
      *plVar11 = lVar9;
      thunk_FUN_01e10808(plVar11,lVar9);
      if (*(uint *)(plVar14 + 3) <= uVar8) goto LAB_033bfa24;
      lVar9 = *param_4;
      if (lVar9 == 0) goto LAB_033bec5c;
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) {
        bVar5 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar9,uVar8,plVar11,0,*(int *)(lVar9 + 0x18) - uVar8,0);
      *param_4 = (long)plVar14;
      thunk_FUN_01e10808(param_4,plVar14);
    }
  }
  goto OVRPlugin__TriggerVibrationAction;
  while( true ) {
    plVar15 = *(long **)(lVar9 + 0x20 + uVar13 * 8);
    if ((plVar15 == (long *)0x0) ||
       (lVar19 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar19 != 0) &&
       (lVar12 = thunk_FUN_01de26bc(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar14 + 3) <= (uint)uVar13) goto LAB_033bfa24;
    *plVar26 = lVar19;
    thunk_FUN_01e10808(plVar26,lVar19);
    uVar8 = *(uint *)(lVar9 + 0x18);
    uVar13 = uVar13 + 1;
    plVar26 = plVar26 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar13) break;
LAB_033c000c:
    if (uVar8 <= (uint)uVar13) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (plVar11 == (long *)0x0) goto LAB_033bec5c;
  if ((int)plVar11[3] == 0) goto LAB_033bfa24;
  lVar19 = plVar11[4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar20 = FUN_033ab18c(lVar19,0,0);
  uVar8 = (uint)uVar13;
  if ((uVar20 & 1) == 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_033bfa24;
    plVar11 = *(long **)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar11 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
    goto LAB_033c07f0;
    uVar6 = *(uint *)(plVar14 + 3);
  }
  else {
    if ((int)plVar11[3] == 0) goto LAB_033bfa24;
    lVar9 = plVar11[4];
    uVar25 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar9 = thunk_FUN_033b4750(lVar9,uVar25,0);
    if (plVar14 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
    goto LAB_033c07f0;
    uVar6 = *(uint *)(plVar14 + 3);
  }
  if (uVar6 <= uVar8) goto LAB_033bfa24;
  plVar14[(long)(int)uVar8 + 4] = lVar9;
  thunk_FUN_01e10808(plVar14 + (long)(int)uVar8 + 4,lVar9);
LAB_033c0730:
  *param_4 = (long)plVar14;
  thunk_FUN_01e10808(param_4,plVar14);
LAB_033c0740:
  if ((int)plVar10[3] != 0) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    plVar15 = *(long **)(lVar9 + 0x20 + uVar13 * 8);
    if ((plVar15 == (long *)0x0) ||
       (lVar19 = (**(code **)(*plVar15 + 0x1f8))(plVar15,*(undefined8 *)(*plVar15 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar19 != 0) &&
       (lVar12 = thunk_FUN_01de26bc(lVar19,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar14 + 3) <= (uint)uVar13) goto LAB_033bfa24;
    *plVar26 = lVar19;
    thunk_FUN_01e10808(plVar26,lVar19);
    uVar8 = *(uint *)(lVar9 + 0x18);
    uVar13 = uVar13 + 1;
    plVar26 = plVar26 + 1;
    if ((int)(uVar8 - 1) <= (int)uVar13) break;
LAB_033c05a4:
    if (uVar8 <= (uint)uVar13) goto LAB_033bfa24;
  }
LAB_033c0618:
  if (plVar11 == (long *)0x0) goto LAB_033bec5c;
  if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
  lVar19 = plVar11[(long)(int)uVar6 + 4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar20 = FUN_033ab18c(lVar19,0,0);
  uVar8 = (uint)uVar13;
  if ((uVar20 & 1) == 0) {
    if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_033bfa24;
    plVar11 = *(long **)(lVar9 + (long)(int)uVar8 * 8 + 0x20);
    if ((plVar11 == (long *)0x0) ||
       (lVar9 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar14 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0))
    goto LAB_033c07f0;
    uVar24 = *(uint *)(plVar14 + 3);
  }
  else {
    if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
    lVar9 = plVar11[(long)(int)uVar6 + 4];
    uVar25 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar9 = thunk_FUN_033b4750(lVar9,uVar25,0);
    if (plVar14 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar9 != 0) &&
       (lVar19 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar14 + 0x40)), lVar19 == 0)) {
LAB_033c07f0:
      uVar25 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar25,0);
    }
    uVar24 = *(uint *)(plVar14 + 3);
  }
  if (uVar24 <= uVar8) goto LAB_033bfa24;
  plVar14[(long)(int)uVar8 + 4] = lVar9;
  thunk_FUN_01e10808(plVar14 + (long)(int)uVar8 + 4,lVar9);
FUN_033c07b0:
  *param_4 = (long)plVar14;
  thunk_FUN_01e10808(param_4,plVar14);
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(plVar10 + 3)) {
LAB_033c07cc:
    return *plVar28;
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


