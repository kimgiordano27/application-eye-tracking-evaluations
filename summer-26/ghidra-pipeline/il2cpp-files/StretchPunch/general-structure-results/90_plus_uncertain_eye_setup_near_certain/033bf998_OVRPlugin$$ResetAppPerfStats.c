/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 033bf998
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


long OVRPlugin__ResetAppPerfStats(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x19;
  undefined8 *puVar14;
  undefined8 unaff_x20;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x23;
  undefined8 unaff_x25;
  long *plVar18;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  uint unaff_w29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  
  while( true ) {
                    /* try { // try from 033bf99c to 034bf9d3 has its CatchHandler @ 033bf9d8 */
    iVar4 = FUN_033c0e28(param_1,param_2,unaff_x20,unaff_x28,unaff_x27,unaff_x25);
    puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    if (iVar4 == 0) {
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bf8fc with catch @ 033bf9e0
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bf8f0 with catch @ 033bf9e4
                        */
      in_stack_00000018._4_4_ = 1;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bf928 with catch @ 033bf9e8
                       catch(type#1 @ 03fad958) { ... } // from try @ 033bf9d4 with catch @ 033bf9e8
                        */
    }
    else if (iVar4 == 2) {
                    /* try { // try from 033bf9d4 to 034bf9d7 has its CatchHandler @ 033bf9e8 */
      unaff_w29 = (int)unaff_x19 + 1;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bf99c with catch @ 033bf9d8
                       try { // try from 033bf9d8 to 034bf9ff has its CatchHandler @ 033bf8d8 */
      in_stack_00000018._4_4_ = 0;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 033bf968 with catch @ 033bf9dc
                        */
    }
                    /* try { // try from 033bfa00 to 034bfa03 has its CatchHandler @ 033bfa14 */
    if (in_stack_00000030 == unaff_x19) break;
    lVar13 = (long)(int)unaff_w29;
                    /* catch() { ... } // from try @ 033bfa00 with catch @ 033bfa14 */
    lVar6 = unaff_x19 + 1;
                    /* try { // try from 033bfa20 to 034bfa2b has its CatchHandler @ 033bfa40 */
    if ((uint)*(ulong *)(in_stack_00000040 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if ((uint)*(ulong *)(unaff_x23 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    if (in_stack_00000038 == 0) goto LAB_033bec5c;
    if (((((uint)*(ulong *)(in_stack_00000038 + 0x18) <= unaff_w29) ||
         (uVar9 = unaff_x19 + 2, (*(ulong *)(in_stack_00000040 + 0x18) & 0xffffffff) <= uVar9)) ||
        ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
       ((*(ulong *)(in_stack_00000038 + 0x18) & 0xffffffff) <= uVar9)) goto LAB_033bfa24;
    param_1 = *(undefined8 *)(in_stack_00000040 + lVar13 * 8 + 0x20);
    unaff_x28 = *(undefined8 *)(in_stack_00000028 + lVar6 * 8);
    unaff_x20 = *(undefined8 *)(in_stack_00000038 + lVar13 * 8 + 0x20);
    param_2 = *(undefined8 *)(unaff_x23 + lVar13 * 8 + 0x20);
    unaff_x27 = *(undefined8 *)(in_stack_00000048 + lVar6 * 8);
    unaff_x25 = *(undefined8 *)(in_stack_00000050 + lVar6 * 8);
    unaff_x19 = lVar6;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
  }
  if ((in_stack_00000018._4_4_ & 1) != 0) {
    uVar16 = thunk_FUN_01dd295c(StringLiteral_6016);
    uVar16 = FUN_033d6e4c(uVar16,0);
    thunk_FUN_01dd295c(StringLiteral_5868);
    uVar17 = thunk_FUN_01de27b8();
    FUN_033063d0(uVar17,uVar16,0);
    uVar16 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar17,uVar16);
  }
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    plVar15 = (long *)(unaff_x23 + (long)(int)unaff_w29 * 8 + 0x20);
    lVar6 = *plVar15;
    if (lVar6 == 0) goto LAB_033bec5c;
    lVar6 = FUN_033b5440(lVar6,0);
    lVar13 = *in_stack_00000058;
    if ((lVar13 == 0) || (in_stack_00000038 == 0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    uVar16 = *(undefined8 *)(in_stack_00000038 + (long)(int)unaff_w29 * 8 + 0x20);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar3 = FUN_033ab18c(uVar16,0,0);
    lVar7 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar6 == 0) {
      lVar8 = 0;
    }
    else {
      uVar16 = *(undefined8 *)StringLiteral_151;
      lVar8 = thunk_FUN_01de26bc(lVar6,uVar16);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar6,uVar16);
      }
    }
    uVar16 = *(undefined8 *)(lVar13 + 0x18);
    FUN_033d8040(lVar7,0);
    *(long *)(lVar7 + 0x10) = lVar8;
    thunk_FUN_01e10808((long *)(lVar7 + 0x10),lVar8);
    *(int *)(lVar7 + 0x18) = (int)uVar16;
    *(byte *)(lVar7 + 0x1c) = bVar3 & 1;
    *in_stack_00000010 = lVar7;
    thunk_FUN_01e10808(in_stack_00000010,lVar7);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w29) goto LAB_033bfa24;
    lVar6 = *plVar15;
    lVar13 = *in_stack_00000058;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar6,lVar13);
  }
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  lVar6 = (long)(int)unaff_w29;
  if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
    plVar18 = (long *)(in_stack_00000040 + lVar6 * 8 + 0x20);
    plVar15 = (long *)*plVar18;
    if (((plVar15 == (long *)0x0) ||
        (lVar13 = (**(code **)(*plVar15 + 0x3b8))(plVar15,*(undefined8 *)(*plVar15 + 0x3c0)),
        lVar13 == 0)) || (*in_stack_00000058 == 0)) goto LAB_033bec5c;
    iVar4 = *(int *)(*in_stack_00000058 + 0x18);
    if (*(int *)(lVar13 + 0x18) == iVar4) {
      if (in_stack_00000038 == 0) goto LAB_033bec5c;
      if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
        puVar14 = (undefined8 *)(in_stack_00000038 + lVar6 * 8 + 0x20);
        uVar16 = *puVar14;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar9 = FUN_033ab18c(uVar16,0,0);
        if ((uVar9 & 1) == 0) goto OVRPlugin__TriggerVibrationAction;
        plVar15 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar13 + 0x18));
        uVar5 = *(int *)(lVar13 + 0x18) - 1;
        FUN_033b4f38(*in_stack_00000058,0,plVar15,0,uVar5,0);
        if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
          uVar16 = *puVar14;
          lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
          if (lVar6 == 0) goto LAB_033bec5c;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(undefined4 *)(lVar6 + 0x20) = 1;
            lVar6 = thunk_FUN_033b4750(uVar16,lVar6,0);
            if (plVar15 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar6 != 0) &&
               (lVar13 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
            goto LAB_033c07f0;
            if (uVar5 < *(uint *)(plVar15 + 3)) {
              plVar10 = plVar15 + (long)(int)uVar5 + 4;
              *plVar10 = lVar6;
              thunk_FUN_01e10808(plVar10,lVar6);
              if (uVar5 < *(uint *)(plVar15 + 3)) {
                lVar6 = *in_stack_00000058;
                if (lVar6 == 0) goto LAB_033bec5c;
                if (uVar5 < *(uint *)(lVar6 + 0x18)) {
                  plVar10 = (long *)*plVar10;
                  if (plVar10 == (long *)0x0) goto LAB_033bec5c;
                  bVar3 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                  if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
                    FUN_01d7df0c(plVar10);
                  }
                  FUN_033b49e8(plVar10,*(undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20),0,0);
                  goto FUN_033c07b0;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (iVar4 < *(int *)(lVar13 + 0x18)) {
        plVar15 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
        lVar7 = *in_stack_00000058;
        if (lVar7 == 0) goto LAB_033bec5c;
        uVar9 = 0;
        plVar10 = plVar15 + 4;
        goto LAB_033c03a0;
      }
      if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
        plVar15 = (long *)*plVar18;
        if (plVar15 == (long *)0x0) goto LAB_033bec5c;
        uVar5 = (**(code **)(*plVar15 + 600))(plVar15,*(undefined8 *)(*plVar15 + 0x260));
        if ((uVar5 >> 1 & 1) != 0) goto OVRPlugin__TriggerVibrationAction;
        plVar15 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar13 + 0x18));
        uVar5 = *(int *)(lVar13 + 0x18) - 1;
        FUN_033b4f38(*in_stack_00000058,0,plVar15,0,uVar5,0);
        if (in_stack_00000038 == 0) goto LAB_033bec5c;
        if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
          uVar16 = *(undefined8 *)(in_stack_00000038 + lVar6 * 8 + 0x20);
          lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
          if ((*in_stack_00000058 == 0) || (lVar6 == 0)) goto LAB_033bec5c;
          if (*(int *)(lVar6 + 0x18) != 0) {
            *(uint *)(lVar6 + 0x20) = *(int *)(*in_stack_00000058 + 0x18) - uVar5;
            lVar6 = thunk_FUN_033b4750(uVar16,lVar6,0);
            if (plVar15 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar6 != 0) &&
               (lVar13 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
            goto LAB_033c07f0;
            if (uVar5 < *(uint *)(plVar15 + 3)) {
              plVar10 = plVar15 + (long)(int)uVar5 + 4;
              *plVar10 = lVar6;
              thunk_FUN_01e10808(plVar10,lVar6);
              if (uVar5 < *(uint *)(plVar15 + 3)) {
                lVar6 = *in_stack_00000058;
                if (lVar6 == 0) goto LAB_033bec5c;
                plVar10 = (long *)*plVar10;
                if (plVar10 != (long *)0x0) {
                  bVar3 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                  if ((*(byte *)(*plVar10 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)StringLiteral_1183)) goto LAB_033c090c;
                }
                FUN_033b4f38(lVar6,uVar5,plVar10,0,*(int *)(lVar6 + 0x18) - uVar5,0);
                *in_stack_00000058 = (long)plVar15;
                thunk_FUN_01e10808(in_stack_00000058,plVar15);
                goto OVRPlugin__TriggerVibrationAction;
              }
            }
          }
        }
      }
    }
  }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
  while( true ) {
    lVar7 = *(long *)(lVar7 + uVar9 * 8 + 0x20);
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar15 + 3) <= uVar9) goto LAB_033bfa24;
    *plVar10 = lVar7;
    thunk_FUN_01e10808(plVar10,lVar7);
    lVar7 = *in_stack_00000058;
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
    if (lVar7 == 0) break;
LAB_033c03a0:
    if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar9) {
      uVar5 = *(uint *)(lVar13 + 0x18);
      if ((int)(uVar5 - 1) <= (int)uVar9) goto LAB_033c0618;
      goto LAB_033c05a4;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_033bfa24;
    if (plVar15 == (long *)0x0) break;
  }
  goto LAB_033bec5c;
  while( true ) {
    plVar11 = *(long **)(lVar13 + 0x20 + uVar9 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar15 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar7 != 0) &&
       (lVar8 = thunk_FUN_01de26bc(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar15 + 3) <= (uint)uVar9) goto LAB_033bfa24;
    *plVar10 = lVar7;
    thunk_FUN_01e10808(plVar10,lVar7);
    uVar5 = *(uint *)(lVar13 + 0x18);
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
    if ((int)(uVar5 - 1) <= (int)uVar9) break;
LAB_033c05a4:
    if (uVar5 <= (uint)uVar9) goto LAB_033bfa24;
  }
LAB_033c0618:
  if (in_stack_00000038 != 0) {
    if (unaff_w29 < *(uint *)(in_stack_00000038 + 0x18)) {
      puVar14 = (undefined8 *)(in_stack_00000038 + lVar6 * 8 + 0x20);
      uVar16 = *puVar14;
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar12 = FUN_033ab18c(uVar16,0,0);
      uVar5 = (uint)uVar9;
      if ((uVar12 & 1) == 0) {
        if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_033bfa24;
        plVar10 = *(long **)(lVar13 + (long)(int)uVar5 * 8 + 0x20);
        if ((plVar10 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
           plVar15 == (long *)0x0)) goto LAB_033bec5c;
        if ((lVar6 != 0) &&
           (lVar13 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
        goto LAB_033c07f0;
        uVar1 = *(uint *)(plVar15 + 3);
      }
      else {
        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w29) goto LAB_033bfa24;
        uVar17 = *puVar14;
        uVar16 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        lVar6 = thunk_FUN_033b4750(uVar17,uVar16,0);
        if (plVar15 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar6 != 0) &&
           (lVar13 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0)) {
LAB_033c07f0:
          uVar16 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar16,0);
        }
        uVar1 = *(uint *)(plVar15 + 3);
      }
      if (uVar5 < uVar1) {
        plVar15[(long)(int)uVar5 + 4] = lVar6;
        thunk_FUN_01e10808(plVar15 + (long)(int)uVar5 + 4,lVar6);
FUN_033c07b0:
        *in_stack_00000058 = (long)plVar15;
        thunk_FUN_01e10808(in_stack_00000058,plVar15);
OVRPlugin__TriggerVibrationAction:
        if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
          return *plVar18;
        }
      }
    }
    goto LAB_033bfa24;
  }
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


