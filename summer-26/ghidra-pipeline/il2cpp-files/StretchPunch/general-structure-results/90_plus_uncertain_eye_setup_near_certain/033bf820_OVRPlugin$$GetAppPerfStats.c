/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 033bf820
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


long OVRPlugin__GetAppPerfStats(void)

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
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x23;
  long *unaff_x24;
  long lVar20;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar21;
  long *unaff_x28;
  long lVar22;
  long *in_stack_00000010;
  long in_stack_00000020;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
  plVar11 = (long *)
            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
LAB_033bf82c:
  do {
    uVar6 = *(uint *)(unaff_x24 + 3);
    uVar13 = (ulong)uVar6;
                    /* catch() { ... } // from try @ 033bf81c with catch @ 033bf830 */
    uVar10 = unaff_x25 + 1;
    if ((long)(int)uVar6 <= (long)uVar10) goto LAB_033bf8b4;
    if (uVar13 <= uVar10) goto LAB_033bfa24;
    plVar18 = unaff_x24 + unaff_x25 + 5;
    uVar13 = FUN_03308638(*plVar18,0,0);
    unaff_x25 = uVar10;
  } while ((uVar13 & 1) != 0);
  if (*(uint *)(unaff_x24 + 3) <= uVar10) goto LAB_033bfa24;
  plVar8 = (long *)*plVar18;
  if ((plVar8 == (long *)0x0) ||
     (lVar15 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0)), lVar15 == 0)
     ) goto LAB_033bec5c;
  uVar13 = *(ulong *)(lVar15 + 0x18);
  lVar14 = *unaff_x28;
  if (uVar13 == 0) {
    if (lVar14 == 0) goto LAB_033bec5c;
    if (*(long *)(lVar14 + 0x18) != 0) {
      if (*(uint *)(unaff_x24 + 3) <= uVar10) goto LAB_033bfa24;
      plVar8 = (long *)*plVar18;
      if (plVar8 == (long *)0x0) goto LAB_033bec5c;
      uVar6 = (**(code **)(*plVar8 + 600))(plVar8,*(undefined8 *)(*plVar8 + 0x260));
      if ((uVar6 >> 1 & 1) == 0) goto LAB_033bf82c;
    }
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if ((*(uint *)(unaff_x23 + 0x18) <= uVar10) ||
       (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_033bfa24;
    *(undefined8 *)(unaff_x23 + (long)(int)in_stack_00000030 * 8 + 0x20) =
         *(undefined8 *)(unaff_x23 + uVar10 * 8 + 0x20);
    thunk_FUN_01e10808();
    uVar6 = *(uint *)(unaff_x24 + 3);
    if (uVar6 <= uVar10) goto LAB_033bfa24;
    lVar15 = *plVar18;
    goto joined_r0x033bedec;
  }
  if (lVar14 == 0) goto LAB_033bec5c;
  uVar6 = *(uint *)(lVar14 + 0x18);
  iVar5 = (int)uVar13;
  if ((int)uVar6 < iVar5) {
    uVar7 = iVar5 - 1;
    if ((int)uVar6 < (int)uVar7) {
      plVar8 = (long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
      do {
        if ((uint)uVar13 <= uVar6) goto LAB_033bfa24;
        plVar12 = (long *)*plVar8;
        if (plVar12 == (long *)0x0) goto LAB_033bec5c;
        lVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
        puVar3 = StringLiteral_4821;
        lVar17 = *(long *)StringLiteral_4821;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar17);
          lVar17 = *(long *)puVar3;
        }
        if (lVar14 == **(long **)(lVar17 + 0xb8)) {
          uVar13 = (ulong)*(uint *)(lVar15 + 0x18);
          uVar7 = *(uint *)(lVar15 + 0x18) - 1;
          unaff_x28 = in_stack_00000058;
          break;
        }
        uVar13 = *(ulong *)(lVar15 + 0x18);
        uVar6 = uVar6 + 1;
        plVar8 = plVar8 + 1;
        uVar7 = (int)uVar13 - 1;
        unaff_x28 = in_stack_00000058;
      } while ((int)uVar6 < (int)uVar7);
    }
    if (uVar6 != uVar7) goto LAB_033bf82c;
    if ((uint)uVar13 <= uVar6) goto LAB_033bfa24;
    plVar12 = (long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
    plVar8 = (long *)*plVar12;
    if (plVar8 == (long *)0x0) goto LAB_033bec5c;
    lVar14 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
    puVar3 = StringLiteral_4821;
    lVar17 = *(long *)StringLiteral_4821;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(lVar17);
      lVar17 = *(long *)puVar3;
    }
    if (lVar14 != **(long **)(lVar17 + 0xb8)) goto LAB_033bf040;
    if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar8 = (long *)*plVar12;
    if ((plVar8 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
       lVar14 == 0)) goto LAB_033bec5c;
    uVar13 = FUN_033ac038(lVar14,0);
    if ((uVar13 & 1) == 0) goto LAB_033bf82c;
    if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar8 = (long *)*plVar12;
    uVar19 = *(undefined8 *)StringLiteral_8800;
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar19 = FUN_033a87c8(uVar19,0);
    if (plVar8 == (long *)0x0) goto LAB_033bec5c;
    uVar13 = (**(code **)(*plVar8 + 0x208))(plVar8,uVar19,1,*(undefined8 *)(*plVar8 + 0x210));
    plVar11 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    if ((uVar13 & 1) == 0) goto LAB_033bf82c;
    if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar12 = (long *)*plVar12;
    if ((plVar12 == (long *)0x0) ||
       (plVar8 = (long *)(**(code **)(*plVar12 + 0x1d8))(plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
       plVar8 == (long *)0x0)) goto LAB_033bec5c;
LAB_033bf87c:
    plStack0000000000000048 =
         (long *)(**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
  }
  else {
    if (iVar5 == 0) goto LAB_033bfa24;
    uVar7 = iVar5 - 1;
    lVar14 = (long)(int)uVar7;
    plVar12 = (long *)(lVar15 + lVar14 * 8 + 0x20);
    plVar8 = (long *)*plVar12;
    if ((plVar8 == (long *)0x0) ||
       (lVar17 = (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
       lVar17 == 0)) goto LAB_033bec5c;
    uVar13 = FUN_033ac038(lVar17,0);
    if (iVar5 < (int)uVar6) {
      unaff_x24 = in_stack_00000040;
      if ((uVar13 & 1) != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar8 = (long *)*plVar12;
        uVar19 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*plVar11 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar19 = FUN_033a87c8(uVar19,0);
        if (plVar8 == (long *)0x0) goto LAB_033bec5c;
        uVar13 = (**(code **)(*plVar8 + 0x208))(plVar8,uVar19,1,*(undefined8 *)(*plVar8 + 0x210));
        plVar11 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar13 & 1) != 0) {
          if (unaff_x23 == 0) goto LAB_033bec5c;
          if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
          lVar17 = *(long *)(unaff_x23 + uVar10 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_033bfa24;
          if (*(uint *)(lVar17 + lVar14 * 4 + 0x20) == uVar7) {
LAB_033bf854:
                    /* try { // try from 033bf854 to 034bf85b has its CatchHandler @ 033bf85c */
                    /* catch() { ... } // from try @ 033bf83c with catch @ 033bf85c
                       catch() { ... } // from try @ 033bf854 with catch @ 033bf85c */
            if (uVar7 < *(uint *)(lVar15 + 0x18)) {
              plVar12 = (long *)*plVar12;
              if ((plVar12 != (long *)0x0) &&
                 (plVar8 = (long *)(**(code **)(*plVar12 + 0x1d8))
                                             (plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
                 unaff_x24 = in_stack_00000040, plVar8 != (long *)0x0)) goto LAB_033bf87c;
              goto LAB_033bec5c;
            }
            goto LAB_033bfa24;
          }
        }
      }
      goto LAB_033bf82c;
    }
    unaff_x24 = in_stack_00000040;
    if ((uVar13 & 1) != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
      plVar8 = (long *)*plVar12;
      uVar19 = *(undefined8 *)StringLiteral_8800;
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar19 = FUN_033a87c8(uVar19,0);
      if (plVar8 == (long *)0x0) goto LAB_033bec5c;
      uVar13 = (**(code **)(*plVar8 + 0x208))(plVar8,uVar19,1,*(undefined8 *)(*plVar8 + 0x210));
      plVar11 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar13 & 1) == 0) {
        plStack0000000000000048 = (long *)0x0;
                    /* try { // try from 033bf848 to 034bf853 has its CatchHandler @ 033bf550 */
        goto LAB_033bf044;
      }
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
      lVar17 = *(long *)(unaff_x23 + uVar10 * 8 + 0x20);
      if (lVar17 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_033bfa24;
      if (*(uint *)(lVar17 + lVar14 * 4 + 0x20) == uVar7) {
        if (uVar7 < *(uint *)(lVar15 + 0x18)) {
          plVar8 = (long *)*plVar12;
          if ((plVar8 != (long *)0x0) &&
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)), unaff_x26 != 0))
          {
            if (uVar7 < *(uint *)(unaff_x26 + 0x18)) {
              if (plVar8 != (long *)0x0) {
                uVar13 = (**(code **)(*plVar8 + 0x288))
                                   (plVar8,*(undefined8 *)(unaff_x26 + lVar14 * 8 + 0x20),
                                    *(undefined8 *)(*plVar8 + 0x290));
                if ((uVar13 & 1) == 0) goto LAB_033bf854;
                goto LAB_033bf040;
              }
              goto LAB_033bec5c;
            }
            goto LAB_033bfa24;
          }
          goto LAB_033bec5c;
        }
        goto LAB_033bfa24;
      }
    }
LAB_033bf040:
    plStack0000000000000048 = (long *)0x0;
  }
LAB_033bf044:
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar13 = FUN_033ab18c(plStack0000000000000048,0,0);
  if ((uVar13 & 1) == 0) {
    if (*unaff_x28 == 0) goto LAB_033bec5c;
    uVar6 = *(uint *)(*unaff_x28 + 0x18);
  }
  else {
    uVar6 = *(int *)(lVar15 + 0x18) - 1;
  }
  if ((int)uVar6 < 1) {
    uVar7 = 0;
  }
  else {
    uVar16 = 0;
    plVar8 = (long *)(unaff_x23 + uVar10 * 8 + 0x20);
    do {
      if (*(uint *)(lVar15 + 0x18) <= uVar16) goto LAB_033bfa24;
      lVar14 = (long)(int)uVar16;
      plVar12 = *(long **)(lVar15 + lVar14 * 8 + 0x20);
      if ((plVar12 == (long *)0x0) ||
         (plVar12 = (long *)(**(code **)(*plVar12 + 0x1d8))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x1e0)),
         plVar12 == (long *)0x0)) goto LAB_033bec5c;
      uVar13 = FUN_033ac048(plVar12,0);
      if ((uVar13 & 1) != 0) {
        plVar12 = (long *)(**(code **)(*plVar12 + 0x418))(plVar12,*(undefined8 *)(*plVar12 + 0x420))
        ;
      }
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
      lVar17 = *plVar8;
      if (lVar17 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_033bfa24;
      if (unaff_x26 == 0) goto LAB_033bec5c;
      uVar7 = *(uint *)(lVar17 + lVar14 * 4 + 0x20);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
      uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar13 = FUN_033aa3b4(plVar12,uVar19,0);
      if ((uVar13 & 1) == 0) {
        if ((in_stack_00000050 >> 0x12 & 1) != 0) {
          if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
          lVar17 = *plVar8;
          if (lVar17 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_033bfa24;
          lVar20 = *in_stack_00000058;
          if (lVar20 == 0) goto LAB_033bec5c;
          uVar7 = *(uint *)(lVar17 + lVar14 * 4 + 0x20);
          if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_033bfa24;
          lVar17 = *plVar11;
          lVar20 = *(long *)(lVar20 + (long)(int)uVar7 * 8 + 0x20);
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
            lVar17 = *plVar11;
          }
          if (lVar20 == *(long *)(*(long *)(lVar17 + 0xb8) + 0x18)) goto LAB_033bf488;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
        lVar17 = *plVar8;
        if (lVar17 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_033bfa24;
        lVar20 = *in_stack_00000058;
        if (lVar20 == 0) goto LAB_033bec5c;
        uVar7 = *(uint *)(lVar17 + lVar14 * 4 + 0x20);
        if (*(uint *)(lVar20 + 0x18) <= uVar7) goto LAB_033bfa24;
        if (*(long *)(lVar20 + (long)(int)uVar7 * 8 + 0x20) != 0) {
          uVar19 = *(undefined8 *)StringLiteral_2477;
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar19 = FUN_033a87c8(uVar19,0);
          uVar13 = FUN_033aa3b4(plVar12,uVar19,0);
          if ((uVar13 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_033bec5c;
            uVar13 = FUN_033ac7d8(plVar12,0);
            if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
            lVar17 = *plVar8;
            if (lVar17 == 0) goto LAB_033bec5c;
            if ((*(uint *)(lVar17 + 0x18) <= uVar16) ||
               (uVar7 = *(uint *)(lVar17 + lVar14 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7)
               ) goto LAB_033bfa24;
            uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar9 = FUN_033aa3b4(uVar19,0,0);
            plVar11 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            uVar7 = uVar16;
            if ((uVar13 & 1) == 0) {
              if ((uVar9 & 1) == 0) {
                if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
                lVar17 = *plVar8;
                if (lVar17 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar17 + 0x18) <= uVar16) ||
                   (uVar1 = *(uint *)(lVar17 + lVar14 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                uVar13 = (**(code **)(*plVar12 + 0x288))
                                   (plVar12,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20)
                                    ,*(undefined8 *)(*plVar12 + 0x290));
                if ((uVar13 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
                  lVar17 = *plVar8;
                  if (lVar17 == 0) goto LAB_033bec5c;
                  if ((*(uint *)(lVar17 + 0x18) <= uVar16) ||
                     (uVar1 = *(uint *)(lVar17 + lVar14 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                  lVar17 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                  if (lVar17 == 0) goto LAB_033bec5c;
                  uVar13 = FUN_033ac5f4(lVar17,0);
                  unaff_x24 = in_stack_00000040;
                  unaff_x28 = in_stack_00000058;
                  if ((uVar13 & 1) != 0) {
                    if (uVar10 < *(uint *)(unaff_x23 + 0x18)) {
                      lVar17 = *plVar8;
                      if (lVar17 != 0) {
                        if (uVar16 < *(uint *)(lVar17 + 0x18)) {
                          lVar20 = *in_stack_00000058;
                          if (lVar20 != 0) {
                            uVar1 = *(uint *)(lVar17 + lVar14 * 4 + 0x20);
                            if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                              uVar13 = (**(code **)(*plVar12 + 0x858))
                                                 (plVar12,*(undefined8 *)
                                                           (lVar20 + (long)(int)uVar1 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar12 + 0x860));
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
              if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_033bfa24;
              lVar17 = *plVar8;
              if (lVar17 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_033bfa24;
              lVar20 = *in_stack_00000058;
              if (lVar20 == 0) goto LAB_033bec5c;
              uVar1 = *(uint *)(lVar17 + lVar14 * 4 + 0x20);
              if (*(uint *)(lVar20 + 0x18) <= uVar1) goto LAB_033bfa24;
              uVar19 = *(undefined8 *)(lVar20 + (long)(int)uVar1 * 8 + 0x20);
              if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
              if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7df0c(plVar12);
              }
              uVar13 = FUN_033c0b48(uVar19,plVar12);
              plVar11 = (long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              ;
joined_r0x033bf484:
              unaff_x24 = in_stack_00000040;
              unaff_x28 = in_stack_00000058;
              if ((uVar13 & 1) == 0) break;
            }
          }
        }
      }
LAB_033bf488:
      uVar16 = uVar16 + 1;
      unaff_x24 = in_stack_00000040;
      unaff_x28 = in_stack_00000058;
      uVar7 = uVar6;
    } while (uVar6 != uVar16);
  }
  if (*(int *)(*plVar11 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar13 = FUN_033ab18c(plStack0000000000000048,0,0);
  if (((uVar13 & 1) != 0) && (uVar7 == *(int *)(lVar15 + 0x18) - 1U)) {
    lVar15 = *unaff_x28;
    if (lVar15 == 0) goto LAB_033bec5c;
    lVar14 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
    while ((int)uVar7 < *(int *)(lVar15 + 0x18)) {
      if ((plStack0000000000000048 == (long *)0x0) ||
         (uVar13 = FUN_033ac7d8(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
      uVar19 = *(undefined8 *)(unaff_x26 + lVar14);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar9 = FUN_033aa3b4(uVar19,0,0);
      plVar11 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar13 & 1) == 0) {
        if ((uVar9 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
          uVar13 = (**(code **)(*plStack0000000000000048 + 0x288))
                             (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar14),
                              *(undefined8 *)(*plStack0000000000000048 + 0x290));
          if ((uVar13 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
            if (*(long *)(unaff_x26 + lVar14) == 0) goto LAB_033bec5c;
            uVar13 = FUN_033ac5f4(*(long *)(unaff_x26 + lVar14),0);
            if ((uVar13 & 1) != 0) {
              lVar15 = *unaff_x28;
              if (lVar15 != 0) {
                if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                  uVar13 = (**(code **)(*plStack0000000000000048 + 0x858))
                                     (plStack0000000000000048,*(undefined8 *)(lVar15 + lVar14),
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
        if ((uVar9 & 1) != 0) break;
        lVar15 = *unaff_x28;
        if (lVar15 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
        uVar19 = *(undefined8 *)(lVar15 + lVar14);
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
        uVar13 = FUN_033c0b48(uVar19,plStack0000000000000048);
        plVar11 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
joined_r0x033bf658:
        if ((uVar13 & 1) == 0) break;
      }
      lVar15 = *unaff_x28;
      uVar7 = uVar7 + 1;
      lVar14 = lVar14 + 8;
      if (lVar15 == 0) goto LAB_033bec5c;
    }
  }
  if (*unaff_x28 == 0) goto LAB_033bec5c;
  if (uVar7 != *(uint *)(*unaff_x28 + 0x18)) goto LAB_033bf82c;
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((*(uint *)(unaff_x23 + 0x18) <= uVar10) || (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030))
  goto LAB_033bfa24;
  *(undefined8 *)(unaff_x23 + (long)(int)in_stack_00000030 * 8 + 0x20) =
       *(undefined8 *)(unaff_x23 + uVar10 * 8 + 0x20);
  thunk_FUN_01e10808();
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if ((plStack0000000000000048 != (long *)0x0) &&
     (lVar15 = thunk_FUN_01de26bc(plStack0000000000000048,*(undefined8 *)(*in_stack_00000038 + 0x40)
                                 ), lVar15 == 0)) goto LAB_033c07f0;
  if (*(uint *)(in_stack_00000038 + 3) <= in_stack_00000030) goto LAB_033bfa24;
  in_stack_00000038[(long)(int)in_stack_00000030 + 4] = (long)plStack0000000000000048;
  thunk_FUN_01e10808(in_stack_00000038 + (long)(int)in_stack_00000030 + 4,plStack0000000000000048);
  uVar6 = *(uint *)(unaff_x24 + 3);
  if (uVar6 <= uVar10) goto LAB_033bfa24;
  lVar15 = *plVar18;
joined_r0x033bedec:
  if (lVar15 != 0) {
    lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*unaff_x24 + 0x40));
    if (lVar14 == 0) goto LAB_033c07f0;
    uVar6 = (uint)unaff_x24[3];
  }
  lVar14 = (long)(int)in_stack_00000030;
  if (uVar6 <= in_stack_00000030) goto LAB_033bfa24;
  unaff_x24[lVar14 + 4] = lVar15;
  in_stack_00000030 = in_stack_00000030 + 1;
  thunk_FUN_01e10808(unaff_x24 + lVar14 + 4,lVar15);
  plVar11 = (long *)
            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  goto LAB_033bf82c;
LAB_033bf8b4:
  if (in_stack_00000030 != 1) {
    if (in_stack_00000030 == 0) {
      uVar19 = thunk_FUN_01dd295c(StringLiteral_8802);
      uVar19 = FUN_033d6e4c(uVar19,0);
      thunk_FUN_01dd295c(StringLiteral_1159);
      uVar21 = thunk_FUN_01de27b8();
      FUN_033958dc(uVar21,uVar19,0);
LAB_033c0894:
      uVar19 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar21,uVar19);
    }
    if (1 < (int)in_stack_00000030) {
      if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 033bf92c with catch @ 033bf8d8
                       catch() { ... } // from try @ 033bf9d8 with catch @ 033bf8d8
                       catch() { ... } // from try @ 033bfa2c with catch @ 033bf8d8 */
        lVar15 = 0;
        lVar14 = 0;
        uVar6 = 0;
                    /* try { // try from 033bf8f0 to 034bf8fb has its CatchHandler @ 033bf9e4 */
        bVar2 = false;
                    /* try { // try from 033bf8fc to 034bf90b has its CatchHandler @ 033bf9e0 */
        plVar11 = unaff_x24;
        while( true ) {
          if (unaff_x23 == 0) goto LAB_033bec5c;
          if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) break;
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                    /* try { // try from 033bf928 to 034bf92b has its CatchHandler @ 033bf9e8 */
                    /* try { // try from 033bf92c to 034bf967 has its CatchHandler @ 033bf8d8 */
          if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar10 = lVar15 + 1, uVar13 <= uVar10)) ||
              ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar10)) ||
             ((in_stack_00000038[3] & 0xffffffffU) <= uVar10)) break;
          lVar20 = plVar11[lVar14 + 4];
          lVar22 = unaff_x24[lVar15 + 5];
                    /* try { // try from 033bf968 to 034bf997 has its CatchHandler @ 033bf9dc */
          lVar17 = in_stack_00000038[lVar14 + 4];
          uVar19 = *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20);
          uVar21 = *(undefined8 *)(unaff_x23 + 0x28 + lVar15 * 8);
          lVar14 = in_stack_00000038[lVar15 + 5];
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          iVar5 = FUN_033c0e28(lVar20,uVar19,lVar17,lVar22,uVar21,lVar14);
          if (iVar5 == 0) {
            bVar2 = true;
          }
          else if (iVar5 == 2) {
            uVar6 = (int)lVar15 + 1;
            bVar2 = false;
          }
          if ((ulong)in_stack_00000030 - 2 == lVar15) {
            plVar11 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            unaff_x24 = in_stack_00000040;
            unaff_x28 = in_stack_00000058;
            if (!bVar2) goto LAB_033bfae0;
            uVar19 = thunk_FUN_01dd295c(StringLiteral_6016);
            uVar19 = FUN_033d6e4c(uVar19,0);
            thunk_FUN_01dd295c(StringLiteral_5868);
            uVar21 = thunk_FUN_01de27b8();
            FUN_033063d0(uVar21,uVar19,0);
            goto LAB_033c0894;
          }
          lVar14 = (long)(int)uVar6;
          lVar15 = lVar15 + 1;
          uVar13 = in_stack_00000040[3] & 0xffffffff;
          plVar11 = in_stack_00000040;
          if ((uint)in_stack_00000040[3] <= uVar6) break;
        }
      }
      goto LAB_033bfa24;
    }
    uVar6 = 0;
LAB_033bfae0:
    if (in_stack_00000020 != 0) {
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
      plVar18 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
      lVar15 = *plVar18;
      if (lVar15 == 0) goto LAB_033bec5c;
      lVar15 = FUN_033b5440(lVar15,0);
      lVar14 = *unaff_x28;
      if ((lVar14 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar17 = in_stack_00000038[(long)(int)uVar6 + 4];
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      bVar4 = FUN_033ab18c(lVar17,0,0);
      lVar17 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
      if (lVar15 == 0) {
        lVar20 = 0;
      }
      else {
        uVar19 = *(undefined8 *)StringLiteral_151;
        lVar20 = thunk_FUN_01de26bc(lVar15,uVar19);
        if (lVar20 == 0) goto LAB_033bfb98;
      }
      uVar19 = *(undefined8 *)(lVar14 + 0x18);
      FUN_033d8040(lVar17,0);
      *(long *)(lVar17 + 0x10) = lVar20;
      thunk_FUN_01e10808((long *)(lVar17 + 0x10),lVar20);
      *(int *)(lVar17 + 0x18) = (int)uVar19;
      *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
      *in_stack_00000010 = lVar17;
      thunk_FUN_01e10808(in_stack_00000010,lVar17);
      if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
      lVar15 = *plVar18;
      lVar14 = *unaff_x28;
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033c0ca4(lVar15,lVar14);
      plVar11 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      unaff_x24 = in_stack_00000040;
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
    plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
    plVar18 = (long *)*plVar8;
    if (((plVar18 == (long *)0x0) ||
        (lVar15 = (**(code **)(*plVar18 + 0x3b8))(plVar18,*(undefined8 *)(*plVar18 + 0x3c0)),
        lVar15 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
    iVar5 = *(int *)(*unaff_x28 + 0x18);
    if (*(int *)(lVar15 + 0x18) == iVar5) {
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar10 = FUN_033ab18c(lVar14,0,0);
      if ((uVar10 & 1) != 0) {
        plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar15 + 0x18));
        uVar7 = *(int *)(lVar15 + 0x18) - 1;
        FUN_033b4f38(*unaff_x28,0,plVar11,0,uVar7,0);
        if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
        lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
        lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if (lVar15 == 0) goto LAB_033bec5c;
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
        *(undefined4 *)(lVar15 + 0x20) = 1;
        lVar15 = thunk_FUN_033b4750(lVar14,lVar15,0);
        if (plVar11 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar15 != 0) &&
           (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_033bfa24;
        plVar18 = plVar11 + (long)(int)uVar7 + 4;
        *plVar18 = lVar15;
        thunk_FUN_01e10808(plVar18,lVar15);
        if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_033bfa24;
        lVar15 = *unaff_x28;
        if (lVar15 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) goto LAB_033bec5c;
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
        FUN_033b49e8(plVar18,*(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20),0,0);
        goto FUN_033c07b0;
      }
    }
    else {
      if (iVar5 < *(int *)(lVar15 + 0x18)) {
        plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
        lVar14 = *unaff_x28;
        if (lVar14 != 0) {
          uVar10 = 0;
          plVar18 = plVar11 + 4;
          do {
            if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar10) {
              uVar7 = *(uint *)(lVar15 + 0x18);
              if ((int)(uVar7 - 1) <= (int)uVar10) goto LAB_033c0618;
              goto LAB_033c05a4;
            }
            if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_033bfa24;
            if (plVar11 == (long *)0x0) break;
            lVar14 = *(long *)(lVar14 + uVar10 * 8 + 0x20);
            if ((lVar14 != 0) &&
               (lVar17 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
            goto LAB_033c07f0;
            if (*(uint *)(plVar11 + 3) <= uVar10) goto LAB_033bfa24;
            *plVar18 = lVar14;
            thunk_FUN_01e10808(plVar18,lVar14);
            lVar14 = *unaff_x28;
            uVar10 = uVar10 + 1;
            plVar18 = plVar18 + 1;
          } while (lVar14 != 0);
        }
        goto LAB_033bec5c;
      }
      if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
      plVar11 = (long *)*plVar8;
      if (plVar11 == (long *)0x0) goto LAB_033bec5c;
      uVar7 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
      if ((uVar7 >> 1 & 1) == 0) {
        plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar15 + 0x18));
        uVar7 = *(int *)(lVar15 + 0x18) - 1;
        FUN_033b4f38(*unaff_x28,0,plVar11,0,uVar7,0);
        if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
        if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
        lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
        lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_033bec5c;
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
        *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
        lVar15 = thunk_FUN_033b4750(lVar14,lVar15,0);
        if (plVar11 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar15 != 0) &&
           (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_033bfa24;
        plVar18 = plVar11 + (long)(int)uVar7 + 4;
        *plVar18 = lVar15;
        thunk_FUN_01e10808(plVar18,lVar15);
        if (*(uint *)(plVar11 + 3) <= uVar7) goto LAB_033bfa24;
        lVar15 = *unaff_x28;
        if (lVar15 == 0) goto LAB_033bec5c;
        plVar18 = (long *)*plVar18;
        if (plVar18 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)StringLiteral_1183)) goto LAB_033c090c;
        }
        FUN_033b4f38(lVar15,uVar7,plVar18,0,*(int *)(lVar15 + 0x18) - uVar7,0);
        *unaff_x28 = (long)plVar11;
        thunk_FUN_01e10808(unaff_x28,plVar11);
        unaff_x24 = in_stack_00000040;
      }
    }
    goto OVRPlugin__TriggerVibrationAction;
  }
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
    if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
    lVar15 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
    lVar14 = *unaff_x28;
    if ((lVar14 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
    lVar17 = in_stack_00000038[4];
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar17,0,0);
    lVar17 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar15 == 0) {
      lVar20 = 0;
    }
    else {
      uVar19 = *(undefined8 *)StringLiteral_151;
      lVar20 = thunk_FUN_01de26bc(lVar15,uVar19);
      if (lVar20 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar15,uVar19);
      }
    }
    uVar19 = *(undefined8 *)(lVar14 + 0x18);
    FUN_033d8040(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar20;
    thunk_FUN_01e10808((long *)(lVar17 + 0x10),lVar20);
    *(int *)(lVar17 + 0x18) = (int)uVar19;
    *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar17;
    thunk_FUN_01e10808(in_stack_00000010,lVar17);
    if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
    uVar19 = *(undefined8 *)(unaff_x23 + 0x20);
    lVar15 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(uVar19,lVar15);
    uVar6 = (uint)in_stack_00000040[3];
    plVar11 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    unaff_x24 = in_stack_00000040;
  }
  if (uVar6 == 0) goto LAB_033bfa24;
  plVar8 = unaff_x24 + 4;
  plVar18 = (long *)*plVar8;
  if (((plVar18 == (long *)0x0) ||
      (lVar15 = (**(code **)(*plVar18 + 0x3b8))(plVar18,*(undefined8 *)(*plVar18 + 0x3c0)),
      lVar15 == 0)) || (*unaff_x28 == 0)) {
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar15 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
    lVar14 = in_stack_00000038[4];
    if (*(int *)(*plVar11 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar10 = FUN_033ab18c(lVar14,0,0);
    if ((uVar10 & 1) != 0) {
      plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar15 + 0x18)
                                    );
      uVar6 = *(int *)(lVar15 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar11,0,uVar6,0);
      if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
      lVar14 = in_stack_00000038[4];
      lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar15 + 0x20) = 1;
      lVar15 = thunk_FUN_033b4750(lVar14,lVar15,0);
      if (plVar11 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar15 != 0) &&
         (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0)) {
LAB_033c07f0:
        uVar19 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar19,0);
      }
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
      plVar18 = plVar11 + (long)(int)uVar6 + 4;
      *plVar18 = lVar15;
      thunk_FUN_01e10808(plVar18,lVar15);
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) goto LAB_033bec5c;
      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar18);
      }
      FUN_033b49e8(plVar18,*(undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20),0,0);
      goto LAB_033c0730;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar15 + 0x18)) {
      plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar14 = *unaff_x28;
      if (lVar14 != 0) {
        uVar10 = 0;
        plVar18 = plVar11 + 4;
        do {
          if ((long)(int)*(uint *)(lVar14 + 0x18) <= (long)uVar10) {
            uVar6 = *(uint *)(lVar15 + 0x18);
            if ((int)(uVar6 - 1) <= (int)uVar10) goto LAB_033c0080;
            goto LAB_033c000c;
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_033bfa24;
          if (plVar11 == (long *)0x0) break;
          lVar14 = *(long *)(lVar14 + uVar10 * 8 + 0x20);
          if ((lVar14 != 0) &&
             (lVar17 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar11 + 3) <= uVar10) goto LAB_033bfa24;
          *plVar18 = lVar14;
          thunk_FUN_01e10808(plVar18,lVar14);
          lVar14 = *unaff_x28;
          uVar10 = uVar10 + 1;
          plVar18 = plVar18 + 1;
        } while (lVar14 != 0);
      }
      goto LAB_033bec5c;
    }
    if ((int)unaff_x24[3] == 0) goto LAB_033bfa24;
    plVar11 = (long *)*plVar8;
    if (plVar11 == (long *)0x0) goto LAB_033bec5c;
    uVar6 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
    if ((uVar6 >> 1 & 1) == 0) {
      plVar11 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar15 + 0x18)
                                    );
      uVar6 = *(int *)(lVar15 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar11,0,uVar6,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
      lVar14 = in_stack_00000038[4];
      lVar15 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar15 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar15 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar15 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
      lVar15 = thunk_FUN_033b4750(lVar14,lVar15,0);
      if (plVar11 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar15 != 0) &&
         (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
      plVar18 = plVar11 + (long)(int)uVar6 + 4;
      *plVar18 = lVar15;
      thunk_FUN_01e10808(plVar18,lVar15);
      if (*(uint *)(plVar11 + 3) <= uVar6) goto LAB_033bfa24;
      lVar15 = *unaff_x28;
      if (lVar15 == 0) goto LAB_033bec5c;
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar15,uVar6,plVar18,0,*(int *)(lVar15 + 0x18) - uVar6,0);
      *unaff_x28 = (long)plVar11;
      thunk_FUN_01e10808(unaff_x28,plVar11);
      unaff_x24 = in_stack_00000040;
    }
  }
  goto LAB_033c0740;
  while( true ) {
    plVar12 = *(long **)(lVar15 + 0x20 + uVar10 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar14 != 0) &&
       (lVar17 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar11 + 3) <= (uint)uVar10) goto LAB_033bfa24;
    *plVar18 = lVar14;
    thunk_FUN_01e10808(plVar18,lVar14);
    uVar7 = *(uint *)(lVar15 + 0x18);
    uVar10 = uVar10 + 1;
    plVar18 = plVar18 + 1;
    if ((int)(uVar7 - 1) <= (int)uVar10) break;
LAB_033c05a4:
    if (uVar7 <= (uint)uVar10) goto LAB_033bfa24;
  }
LAB_033c0618:
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
  lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar13 = FUN_033ab18c(lVar14,0,0);
  uVar7 = (uint)uVar10;
  if ((uVar13 & 1) == 0) {
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
    plVar18 = *(long **)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
    if ((plVar18 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
    goto LAB_033c07f0;
    uVar16 = *(uint *)(plVar11 + 3);
  }
  else {
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
    uVar19 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar15 = thunk_FUN_033b4750(lVar15,uVar19,0);
    if (plVar11 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
    goto LAB_033c07f0;
    uVar16 = *(uint *)(plVar11 + 3);
  }
  if (uVar16 <= uVar7) goto LAB_033bfa24;
  plVar11[(long)(int)uVar7 + 4] = lVar15;
  thunk_FUN_01e10808(plVar11 + (long)(int)uVar7 + 4,lVar15);
FUN_033c07b0:
  *unaff_x28 = (long)plVar11;
  thunk_FUN_01e10808(unaff_x28,plVar11);
  unaff_x24 = in_stack_00000040;
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    plVar12 = *(long **)(lVar15 + 0x20 + uVar10 * 8);
    if ((plVar12 == (long *)0x0) ||
       (lVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar14 != 0) &&
       (lVar17 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar11 + 3) <= (uint)uVar10) goto LAB_033bfa24;
    *plVar18 = lVar14;
    thunk_FUN_01e10808(plVar18,lVar14);
    uVar6 = *(uint *)(lVar15 + 0x18);
    uVar10 = uVar10 + 1;
    plVar18 = plVar18 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar10) break;
LAB_033c000c:
    if (uVar6 <= (uint)uVar10) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
  lVar14 = in_stack_00000038[4];
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar13 = FUN_033ab18c(lVar14,0,0);
  uVar6 = (uint)uVar10;
  if ((uVar13 & 1) == 0) {
    if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar18 = *(long **)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
    if ((plVar18 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
       plVar11 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
    goto LAB_033c07f0;
    uVar7 = *(uint *)(plVar11 + 3);
  }
  else {
    if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
    lVar15 = in_stack_00000038[4];
    uVar19 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
    lVar15 = thunk_FUN_033b4750(lVar15,uVar19,0);
    if (plVar11 == (long *)0x0) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar14 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
    goto LAB_033c07f0;
    uVar7 = *(uint *)(plVar11 + 3);
  }
  if (uVar7 <= uVar6) goto LAB_033bfa24;
  plVar11[(long)(int)uVar6 + 4] = lVar15;
  thunk_FUN_01e10808(plVar11 + (long)(int)uVar6 + 4,lVar15);
LAB_033c0730:
  *unaff_x28 = (long)plVar11;
  thunk_FUN_01e10808(unaff_x28,plVar11);
  unaff_x24 = in_stack_00000040;
LAB_033c0740:
  if ((int)unaff_x24[3] != 0) {
LAB_033c07cc:
    return *plVar8;
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


