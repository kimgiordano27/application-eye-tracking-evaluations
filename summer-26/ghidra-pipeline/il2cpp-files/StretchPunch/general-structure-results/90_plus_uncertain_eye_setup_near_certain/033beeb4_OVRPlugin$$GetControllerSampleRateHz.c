/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 033beeb4
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


long OVRPlugin__GetControllerSampleRateHz(long param_1)

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
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *unaff_x20;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
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
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x033beeb4:
  if ((uint)unaff_x24 < *(uint *)(param_1 + 0x18)) {
    uVar9 = unaff_x25;
    if (*(uint *)(param_1 + unaff_x24 * 4 + 0x20) == (uint)unaff_x24) goto LAB_033bf854;
LAB_033bf82c:
    do {
      uVar6 = *(uint *)(in_stack_00000040 + 3);
      uVar12 = (ulong)uVar6;
      unaff_x25 = uVar9 + 1;
      if ((long)(int)uVar6 <= (long)unaff_x25) {
        if (in_stack_00000030 != 1) {
          if (in_stack_00000030 == 0) {
            uVar18 = thunk_FUN_01dd295c(StringLiteral_8802);
            uVar18 = FUN_033d6e4c(uVar18,0);
            thunk_FUN_01dd295c(StringLiteral_1159);
            uVar20 = thunk_FUN_01de27b8();
            FUN_033958dc(uVar20,uVar18,0);
            goto LAB_033c0894;
          }
          if ((int)in_stack_00000030 < 2) {
            uVar6 = 0;
            goto LAB_033bfae0;
          }
          if (uVar6 == 0) goto LAB_033bfa24;
          lVar14 = 0;
          lVar13 = 0;
          uVar6 = 0;
          bVar2 = false;
          goto LAB_033bf900;
        }
        if (in_stack_00000020 != 0) {
          if (unaff_x23 == 0) goto LAB_033bec5c;
          if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
          if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
          lVar14 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
          lVar13 = *unaff_x28;
          if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
          lVar16 = in_stack_00000038[4];
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          bVar4 = FUN_033ab18c(lVar16,0,0);
          lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
          if (lVar14 == 0) {
            lVar19 = 0;
          }
          else {
            uVar18 = *(undefined8 *)StringLiteral_151;
            lVar19 = thunk_FUN_01de26bc(lVar14,uVar18);
            if (lVar19 == 0) goto LAB_033bfb98;
          }
          uVar18 = *(undefined8 *)(lVar13 + 0x18);
          FUN_033d8040(lVar16,0);
          *(long *)(lVar16 + 0x10) = lVar19;
          thunk_FUN_01e10808((long *)(lVar16 + 0x10),lVar19);
          *(int *)(lVar16 + 0x18) = (int)uVar18;
          *(byte *)(lVar16 + 0x1c) = bVar4 & 1;
          *in_stack_00000010 = lVar16;
          thunk_FUN_01e10808(in_stack_00000010,lVar16);
          if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
          uVar18 = *(undefined8 *)(unaff_x23 + 0x20);
          lVar14 = *unaff_x28;
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_033c0ca4(uVar18,lVar14);
          uVar6 = (uint)in_stack_00000040[3];
          unaff_x22 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
        }
        if (uVar6 == 0) goto LAB_033bfa24;
        plVar8 = in_stack_00000040 + 4;
        plVar17 = (long *)*plVar8;
        if (((plVar17 == (long *)0x0) ||
            (lVar14 = (**(code **)(*plVar17 + 0x3b8))(plVar17,*(undefined8 *)(*plVar17 + 0x3c0)),
            lVar14 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
        iVar5 = *(int *)(*unaff_x28 + 0x18);
        if (*(int *)(lVar14 + 0x18) == iVar5) {
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
          lVar13 = in_stack_00000038[4];
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033ab18c(lVar13,0,0);
          if ((uVar9 & 1) == 0) goto LAB_033c0740;
          plVar17 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                         *(undefined4 *)(lVar14 + 0x18));
          uVar6 = *(int *)(lVar14 + 0x18) - 1;
          FUN_033b4f38(*unaff_x28,0,plVar17,0,uVar6,0);
          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
          lVar13 = in_stack_00000038[4];
          lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
          if (lVar14 == 0) goto LAB_033bec5c;
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
          *(undefined4 *)(lVar14 + 0x20) = 1;
          lVar14 = thunk_FUN_033b4750(lVar13,lVar14,0);
          if (plVar17 == (long *)0x0) goto LAB_033bec5c;
          if ((lVar14 != 0) &&
             (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_033bfa24;
          plVar10 = plVar17 + (long)(int)uVar6 + 4;
          *plVar10 = lVar14;
          thunk_FUN_01e10808(plVar10,lVar14);
          if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_033bfa24;
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_033bfa24;
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_033bec5c;
          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)StringLiteral_1183)) goto LAB_033c090c;
          FUN_033b49e8(plVar10,*(undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20),0,0);
          goto LAB_033c0730;
        }
        if (iVar5 < *(int *)(lVar14 + 0x18)) {
          plVar17 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
          lVar13 = *unaff_x28;
          if (lVar13 == 0) goto LAB_033bec5c;
          uVar9 = 0;
          plVar10 = plVar17 + 4;
          goto LAB_033bfe14;
        }
        if ((int)in_stack_00000040[3] == 0) goto LAB_033bfa24;
        plVar17 = (long *)*plVar8;
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        uVar6 = (**(code **)(*plVar17 + 600))(plVar17,*(undefined8 *)(*plVar17 + 0x260));
        if ((uVar6 >> 1 & 1) != 0) goto LAB_033c0740;
        plVar17 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                       *(undefined4 *)(lVar14 + 0x18));
        uVar6 = *(int *)(lVar14 + 0x18) - 1;
        FUN_033b4f38(*unaff_x28,0,plVar17,0,uVar6,0);
        if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar13 = in_stack_00000038[4];
        lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        if ((*unaff_x28 == 0) || (lVar14 == 0)) goto LAB_033bec5c;
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
        *(uint *)(lVar14 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
        lVar14 = thunk_FUN_033b4750(lVar13,lVar14,0);
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_033bfa24;
        plVar10 = plVar17 + (long)(int)uVar6 + 4;
        *plVar10 = lVar14;
        thunk_FUN_01e10808(plVar10,lVar14);
        if (*(uint *)(plVar17 + 3) <= uVar6) goto LAB_033bfa24;
        lVar14 = *unaff_x28;
        if (lVar14 == 0) goto LAB_033bec5c;
        plVar10 = (long *)*plVar10;
        if (plVar10 != (long *)0x0) {
          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
          if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)StringLiteral_1183)) goto LAB_033c090c;
        }
        FUN_033b4f38(lVar14,uVar6,plVar10,0,*(int *)(lVar14 + 0x18) - uVar6,0);
        *unaff_x28 = (long)plVar17;
        thunk_FUN_01e10808(unaff_x28,plVar17);
        goto LAB_033c0740;
      }
      if (uVar12 <= unaff_x25) goto LAB_033bfa24;
      in_stack_00000028 = in_stack_00000040 + uVar9 + 5;
      uVar12 = FUN_03308638(*in_stack_00000028,0,0);
      uVar9 = unaff_x25;
    } while ((uVar12 & 1) != 0);
    if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_033bfa24;
    plVar17 = (long *)*in_stack_00000028;
    if ((plVar17 == (long *)0x0) ||
       (unaff_x27 = (**(code **)(*plVar17 + 0x3b8))(plVar17,*(undefined8 *)(*plVar17 + 0x3c0)),
       unaff_x27 == 0)) goto LAB_033bec5c;
    uVar12 = *(ulong *)(unaff_x27 + 0x18);
    lVar14 = *unaff_x28;
    if (uVar12 == 0) {
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(long *)(lVar14 + 0x18) != 0) {
        if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_033bfa24;
        plVar17 = (long *)*in_stack_00000028;
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        uVar6 = (**(code **)(*plVar17 + 600))(plVar17,*(undefined8 *)(*plVar17 + 0x260));
        if ((uVar6 >> 1 & 1) == 0) goto LAB_033bf82c;
      }
      if (unaff_x23 == 0) goto LAB_033bec5c;
      if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
         (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_033bfa24;
      lVar14 = (long)(int)in_stack_00000030;
      *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) =
           *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      thunk_FUN_01e10808();
      uVar6 = *(uint *)(in_stack_00000040 + 3);
      if (uVar6 <= unaff_x25) goto LAB_033bfa24;
      lVar13 = *in_stack_00000028;
joined_r0x033bedec:
      if (lVar13 != 0) {
        lVar16 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*in_stack_00000040 + 0x40));
        if (lVar16 == 0) goto LAB_033c07f0;
        uVar6 = (uint)in_stack_00000040[3];
      }
      if (uVar6 <= in_stack_00000030) goto LAB_033bfa24;
      in_stack_00000040[lVar14 + 4] = lVar13;
      in_stack_00000030 = in_stack_00000030 + 1;
      thunk_FUN_01e10808(in_stack_00000040 + lVar14 + 4,lVar13);
      unaff_x22 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      uVar9 = unaff_x25;
      goto LAB_033bf82c;
    }
    if (lVar14 == 0) goto LAB_033bec5c;
    uVar6 = *(uint *)(lVar14 + 0x18);
    iVar5 = (int)uVar12;
    if ((int)uVar6 < iVar5) {
      uVar7 = iVar5 - 1;
      if ((int)uVar6 < (int)uVar7) {
        plVar17 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
        do {
          if ((uint)uVar12 <= uVar6) goto LAB_033bfa24;
          plVar8 = (long *)*plVar17;
          if (plVar8 == (long *)0x0) goto LAB_033bec5c;
          lVar14 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
          puVar3 = StringLiteral_4821;
          lVar13 = *(long *)StringLiteral_4821;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(lVar13);
            lVar13 = *(long *)puVar3;
          }
          if (lVar14 == **(long **)(lVar13 + 0xb8)) {
            uVar12 = (ulong)*(uint *)(unaff_x27 + 0x18);
            uVar7 = *(uint *)(unaff_x27 + 0x18) - 1;
            unaff_x28 = in_stack_00000058;
            break;
          }
          uVar12 = *(ulong *)(unaff_x27 + 0x18);
          uVar6 = uVar6 + 1;
          plVar17 = plVar17 + 1;
          uVar7 = (int)uVar12 - 1;
          unaff_x28 = in_stack_00000058;
        } while ((int)uVar6 < (int)uVar7);
      }
      if (uVar6 != uVar7) goto LAB_033bf82c;
      if ((uint)uVar12 <= uVar6) goto LAB_033bfa24;
      plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
      plVar17 = (long *)*plVar8;
      if (plVar17 == (long *)0x0) goto LAB_033bec5c;
      lVar14 = (**(code **)(*plVar17 + 0x1f8))(plVar17,*(undefined8 *)(*plVar17 + 0x200));
      puVar3 = StringLiteral_4821;
      lVar13 = *(long *)StringLiteral_4821;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar13);
        lVar13 = *(long *)puVar3;
      }
      if (lVar14 == **(long **)(lVar13 + 0xb8)) {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar17 = (long *)*plVar8;
        if ((plVar17 == (long *)0x0) ||
           (lVar14 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0)),
           lVar14 == 0)) goto LAB_033bec5c;
        uVar12 = FUN_033ac038(lVar14,0);
        if ((uVar12 & 1) == 0) goto LAB_033bf82c;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar17 = (long *)*plVar8;
        uVar18 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar18 = FUN_033a87c8(uVar18,0);
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        uVar12 = (**(code **)(*plVar17 + 0x208))(plVar17,uVar18,1,*(undefined8 *)(*plVar17 + 0x210))
        ;
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar12 & 1) == 0) goto LAB_033bf82c;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar8 = (long *)*plVar8;
        if ((plVar8 == (long *)0x0) ||
           (plVar17 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
           plVar17 == (long *)0x0)) goto LAB_033bec5c;
LAB_033bf87c:
        plStack0000000000000048 =
             (long *)(**(code **)(*plVar17 + 0x418))(plVar17,*(undefined8 *)(*plVar17 + 0x420));
        goto LAB_033bf044;
      }
    }
    else {
      if (iVar5 == 0) goto LAB_033bfa24;
      uVar7 = iVar5 - 1;
      unaff_x24 = (long)(int)uVar7;
      unaff_x20 = (long *)(unaff_x27 + unaff_x24 * 8 + 0x20);
      plVar17 = (long *)*unaff_x20;
      if ((plVar17 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0)),
         lVar14 == 0)) goto LAB_033bec5c;
      uVar12 = FUN_033ac038(lVar14,0);
      if (iVar5 < (int)uVar6) {
        if ((uVar12 & 1) == 0) goto LAB_033bf82c;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar17 = (long *)*unaff_x20;
        uVar18 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar18 = FUN_033a87c8(uVar18,0);
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        uVar12 = (**(code **)(*plVar17 + 0x208))(plVar17,uVar18,1,*(undefined8 *)(*plVar17 + 0x210))
        ;
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar12 & 1) != 0) goto code_r0x033bee90;
        goto LAB_033bf82c;
      }
      if ((uVar12 & 1) != 0) {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar17 = (long *)*unaff_x20;
        uVar18 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar18 = FUN_033a87c8(uVar18,0);
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        uVar9 = (**(code **)(*plVar17 + 0x208))(plVar17,uVar18,1,*(undefined8 *)(*plVar17 + 0x210));
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar9 & 1) == 0) {
          plStack0000000000000048 = (long *)0x0;
          goto LAB_033bf044;
        }
        if (unaff_x23 == 0) goto LAB_033bec5c;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
        lVar14 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        if (lVar14 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
        if (*(uint *)(lVar14 + unaff_x24 * 4 + 0x20) != uVar7) goto LAB_033bf040;
        if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar17 = (long *)*unaff_x20;
        if ((plVar17 == (long *)0x0) ||
           (plVar17 = (long *)(**(code **)(*plVar17 + 0x1d8))
                                        (plVar17,*(undefined8 *)(*plVar17 + 0x1e0)), unaff_x26 == 0)
           ) goto LAB_033bec5c;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        uVar9 = (**(code **)(*plVar17 + 0x288))
                          (plVar17,*(undefined8 *)(unaff_x26 + unaff_x24 * 8 + 0x20),
                           *(undefined8 *)(*plVar17 + 0x290));
        if ((uVar9 & 1) == 0) {
LAB_033bf854:
          if ((uint)unaff_x24 < *(uint *)(unaff_x27 + 0x18)) {
            plVar17 = (long *)*unaff_x20;
            if ((plVar17 != (long *)0x0) &&
               (plVar17 = (long *)(**(code **)(*plVar17 + 0x1d8))
                                            (plVar17,*(undefined8 *)(*plVar17 + 0x1e0)),
               plVar17 != (long *)0x0)) goto LAB_033bf87c;
            goto LAB_033bec5c;
          }
          goto LAB_033bfa24;
        }
      }
    }
LAB_033bf040:
    plStack0000000000000048 = (long *)0x0;
LAB_033bf044:
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033ab18c(plStack0000000000000048,0,0);
    if ((uVar9 & 1) == 0) {
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
      uVar15 = 0;
      plVar17 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
      do {
        if (*(uint *)(unaff_x27 + 0x18) <= uVar15) goto LAB_033bfa24;
        lVar14 = (long)(int)uVar15;
        plVar8 = *(long **)(unaff_x27 + lVar14 * 8 + 0x20);
        if ((plVar8 == (long *)0x0) ||
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0))
           , plVar8 == (long *)0x0)) goto LAB_033bec5c;
        uVar9 = FUN_033ac048(plVar8,0);
        if ((uVar9 & 1) != 0) {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
        }
        if (unaff_x23 == 0) goto LAB_033bec5c;
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
        lVar13 = *plVar17;
        if (lVar13 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
        if (unaff_x26 == 0) goto LAB_033bec5c;
        uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
        if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
        uVar18 = *(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar9 = FUN_033aa3b4(plVar8,uVar18,0);
        if ((uVar9 & 1) == 0) {
          if ((in_stack_00000050 >> 0x12 & 1) != 0) {
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
            lVar13 = *plVar17;
            if (lVar13 == 0) goto LAB_033bec5c;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
            lVar16 = *in_stack_00000058;
            if (lVar16 == 0) goto LAB_033bec5c;
            uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
            if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_033bfa24;
            lVar13 = *unaff_x22;
            lVar16 = *(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
              lVar13 = *unaff_x22;
            }
            if (lVar16 == *(long *)(*(long *)(lVar13 + 0xb8) + 0x18)) goto LAB_033bf488;
          }
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
          lVar13 = *plVar17;
          if (lVar13 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
          lVar16 = *in_stack_00000058;
          if (lVar16 == 0) goto LAB_033bec5c;
          uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
          if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_033bfa24;
          if (*(long *)(lVar16 + (long)(int)uVar7 * 8 + 0x20) != 0) {
            uVar18 = *(undefined8 *)StringLiteral_2477;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar18 = FUN_033a87c8(uVar18,0);
            uVar9 = FUN_033aa3b4(plVar8,uVar18,0);
            if ((uVar9 & 1) == 0) {
              if (plVar8 == (long *)0x0) goto LAB_033bec5c;
              uVar9 = FUN_033ac7d8(plVar8,0);
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
              lVar13 = *plVar17;
              if (lVar13 == 0) goto LAB_033bec5c;
              if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                 (uVar7 = *(uint *)(lVar13 + lVar14 * 4 + 0x20),
                 *(uint *)(unaff_x26 + 0x18) <= uVar7)) goto LAB_033bfa24;
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
              uVar7 = uVar15;
              if ((uVar9 & 1) == 0) {
                if ((uVar12 & 1) == 0) {
                  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                  lVar13 = *plVar17;
                  if (lVar13 == 0) goto LAB_033bec5c;
                  if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                     (uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20),
                     *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                  uVar9 = (**(code **)(*plVar8 + 0x288))
                                    (plVar8,*(undefined8 *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20)
                                     ,*(undefined8 *)(*plVar8 + 0x290));
                  if ((uVar9 & 1) == 0) {
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                    lVar13 = *plVar17;
                    if (lVar13 == 0) goto LAB_033bec5c;
                    if ((*(uint *)(lVar13 + 0x18) <= uVar15) ||
                       (uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                    lVar13 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                    if (lVar13 == 0) goto LAB_033bec5c;
                    uVar9 = FUN_033ac5f4(lVar13,0);
                    unaff_x28 = in_stack_00000058;
                    if ((uVar9 & 1) != 0) {
                      if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                        lVar13 = *plVar17;
                        if (lVar13 != 0) {
                          if (uVar15 < *(uint *)(lVar13 + 0x18)) {
                            lVar16 = *in_stack_00000058;
                            if (lVar16 != 0) {
                              uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
                              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                uVar9 = (**(code **)(*plVar8 + 0x858))
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
                unaff_x28 = in_stack_00000058;
                if ((uVar12 & 1) != 0) break;
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                lVar13 = *plVar17;
                if (lVar13 == 0) goto LAB_033bec5c;
                if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_033bfa24;
                lVar16 = *in_stack_00000058;
                if (lVar16 == 0) goto LAB_033bec5c;
                uVar1 = *(uint *)(lVar13 + lVar14 * 4 + 0x20);
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
                uVar9 = FUN_033c0b48(uVar18,plVar8);
                unaff_x22 = (long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                ;
joined_r0x033bf484:
                unaff_x28 = in_stack_00000058;
                if ((uVar9 & 1) == 0) break;
              }
            }
          }
        }
LAB_033bf488:
        uVar15 = uVar15 + 1;
        unaff_x28 = in_stack_00000058;
        uVar7 = uVar6;
      } while (uVar6 != uVar15);
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033ab18c(plStack0000000000000048,0,0);
    if (((uVar9 & 1) != 0) && (uVar7 == *(int *)(unaff_x27 + 0x18) - 1U)) {
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_033bec5c;
      lVar13 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3) + 0x20;
      while ((int)uVar7 < *(int *)(lVar14 + 0x18)) {
        if ((plStack0000000000000048 == (long *)0x0) ||
           (uVar9 = FUN_033ac7d8(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_033bec5c;
        if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
        uVar18 = *(undefined8 *)(unaff_x26 + lVar13);
        if (*(int *)(*(long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar12 = FUN_033aa3b4(uVar18,0,0);
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar9 & 1) == 0) {
          if ((uVar12 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
            uVar9 = (**(code **)(*plStack0000000000000048 + 0x288))
                              (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar13),
                               *(undefined8 *)(*plStack0000000000000048 + 0x290));
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
              if (*(long *)(unaff_x26 + lVar13) == 0) goto LAB_033bec5c;
              uVar9 = FUN_033ac5f4(*(long *)(unaff_x26 + lVar13),0);
              if ((uVar9 & 1) != 0) {
                lVar14 = *unaff_x28;
                if (lVar14 != 0) {
                  if (uVar7 < *(uint *)(lVar14 + 0x18)) {
                    uVar9 = (**(code **)(*plStack0000000000000048 + 0x858))
                                      (plStack0000000000000048,*(undefined8 *)(lVar14 + lVar13),
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
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
          uVar18 = *(undefined8 *)(lVar14 + lVar13);
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
          uVar9 = FUN_033c0b48(uVar18,plStack0000000000000048);
          unaff_x22 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
joined_r0x033bf658:
          if ((uVar9 & 1) == 0) break;
        }
        lVar14 = *unaff_x28;
        uVar7 = uVar7 + 1;
        lVar13 = lVar13 + 8;
        if (lVar14 == 0) goto LAB_033bec5c;
      }
    }
    if (*unaff_x28 == 0) goto LAB_033bec5c;
    uVar9 = unaff_x25;
    if (uVar7 == *(uint *)(*unaff_x28 + 0x18)) {
      if (unaff_x23 != 0) {
        if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) &&
           (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))) {
          lVar14 = (long)(int)in_stack_00000030;
          *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) =
               *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
          thunk_FUN_01e10808();
          if (in_stack_00000038 != (long *)0x0) {
            if ((plStack0000000000000048 == (long *)0x0) ||
               (lVar13 = thunk_FUN_01de26bc(plStack0000000000000048,
                                            *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar13 != 0
               )) {
              if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
                in_stack_00000038[lVar14 + 4] = (long)plStack0000000000000048;
                thunk_FUN_01e10808(in_stack_00000038 + lVar14 + 4,plStack0000000000000048);
                uVar6 = *(uint *)(in_stack_00000040 + 3);
                if (unaff_x25 < uVar6) {
                  lVar13 = *in_stack_00000028;
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
    goto LAB_033bf82c;
  }
  goto LAB_033bfa24;
LAB_033bf900:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar14 + 1, uVar12 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_033bfa24;
  lVar19 = in_stack_00000040[lVar13 + 4];
  lVar21 = in_stack_00000040[lVar14 + 5];
  lVar16 = in_stack_00000038[lVar13 + 4];
  uVar18 = *(undefined8 *)(unaff_x23 + lVar13 * 8 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x23 + 0x28 + lVar14 * 8);
  lVar13 = in_stack_00000038[lVar14 + 5];
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar5 = FUN_033c0e28(lVar19,uVar18,lVar16,lVar21,uVar20,lVar13);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar14 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar14) {
    lVar13 = (long)(int)uVar6;
    lVar14 = lVar14 + 1;
    uVar12 = in_stack_00000040[3] & 0xffffffff;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_033bfa24;
    goto LAB_033bf900;
  }
  unaff_x22 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
  ;
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
    plVar17 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar14 = *plVar17;
    if (lVar14 == 0) goto LAB_033bec5c;
    lVar14 = FUN_033b5440(lVar14,0);
    lVar13 = *unaff_x28;
    if ((lVar13 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar16 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar16,0,0);
    lVar16 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar14 == 0) {
      lVar19 = 0;
    }
    else {
      uVar18 = *(undefined8 *)StringLiteral_151;
      lVar19 = thunk_FUN_01de26bc(lVar14,uVar18);
      if (lVar19 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar14,uVar18);
      }
    }
    uVar18 = *(undefined8 *)(lVar13 + 0x18);
    FUN_033d8040(lVar16,0);
    *(long *)(lVar16 + 0x10) = lVar19;
    thunk_FUN_01e10808((long *)(lVar16 + 0x10),lVar19);
    *(int *)(lVar16 + 0x18) = (int)uVar18;
    *(byte *)(lVar16 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar16;
    thunk_FUN_01e10808(in_stack_00000010,lVar16);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar14 = *plVar17;
    lVar13 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar14,lVar13);
    unaff_x22 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_033bfa24;
  plVar8 = in_stack_00000040 + (long)(int)uVar6 + 4;
  plVar17 = (long *)*plVar8;
  if (((plVar17 == (long *)0x0) ||
      (lVar14 = (**(code **)(*plVar17 + 0x3b8))(plVar17,*(undefined8 *)(*plVar17 + 0x3c0)),
      lVar14 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar14 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033ab18c(lVar13,0,0);
    if ((uVar9 & 1) != 0) {
      plVar17 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar14 + 0x18)
                                    );
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar17,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar14 + 0x20) = 1;
      lVar14 = thunk_FUN_033b4750(lVar13,lVar14,0);
      if (plVar17 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_033bfa24;
      plVar10 = plVar17 + (long)(int)uVar7 + 4;
      *plVar10 = lVar14;
      thunk_FUN_01e10808(plVar10,lVar14);
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_033bfa24;
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar10);
      }
      FUN_033b49e8(plVar10,*(undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar14 + 0x18)) {
      plVar17 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar13 = *unaff_x28;
      if (lVar13 == 0) goto LAB_033bec5c;
      uVar9 = 0;
      plVar10 = plVar17 + 4;
      do {
        if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar14 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_033bfa24;
              plVar11 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
              if ((plVar11 == (long *)0x0) ||
                 (lVar13 = (**(code **)(*plVar11 + 0x1f8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x200)),
                 plVar17 == (long *)0x0)) goto LAB_033bec5c;
              if ((lVar13 != 0) &&
                 (lVar16 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0)
                 ) goto LAB_033c07f0;
              if (*(uint *)(plVar17 + 3) <= (uint)uVar9) goto LAB_033bfa24;
              *plVar10 = lVar13;
              thunk_FUN_01e10808(plVar10,lVar13);
              uVar7 = *(uint *)(lVar14 + 0x18);
              uVar9 = uVar9 + 1;
              plVar10 = plVar10 + 1;
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
          uVar12 = FUN_033ab18c(lVar13,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar12 & 1) == 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
            plVar10 = *(long **)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar10 == (long *)0x0) ||
               (lVar14 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
               plVar17 == (long *)0x0)) goto LAB_033bec5c;
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
            goto LAB_033c07f0;
            uVar15 = *(uint *)(plVar17 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
            lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar18 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
            lVar14 = thunk_FUN_033b4750(lVar14,uVar18,0);
            if (plVar17 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar14 != 0) &&
               (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
            goto LAB_033c07f0;
            uVar15 = *(uint *)(plVar17 + 3);
          }
          if (uVar15 <= uVar7) goto LAB_033bfa24;
          plVar17[(long)(int)uVar7 + 4] = lVar14;
          thunk_FUN_01e10808(plVar17 + (long)(int)uVar7 + 4,lVar14);
FUN_033c07b0:
          *unaff_x28 = (long)plVar17;
          thunk_FUN_01e10808(unaff_x28,plVar17);
          goto OVRPlugin__TriggerVibrationAction;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_033bfa24;
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        lVar13 = *(long *)(lVar13 + uVar9 * 8 + 0x20);
        if ((lVar13 != 0) &&
           (lVar16 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar17 + 3) <= uVar9) goto LAB_033bfa24;
        *plVar10 = lVar13;
        thunk_FUN_01e10808(plVar10,lVar13);
        lVar13 = *unaff_x28;
        uVar9 = uVar9 + 1;
        plVar10 = plVar10 + 1;
        if (lVar13 == 0) goto LAB_033bec5c;
      } while( true );
    }
    if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_033bfa24;
    plVar17 = (long *)*plVar8;
    if (plVar17 == (long *)0x0) goto LAB_033bec5c;
    uVar7 = (**(code **)(*plVar17 + 600))(plVar17,*(undefined8 *)(*plVar17 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar17 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar14 + 0x18)
                                    );
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar17,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar13 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar14 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar14 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar14 = thunk_FUN_033b4750(lVar13,lVar14,0);
      if (plVar17 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_033bfa24;
      plVar10 = plVar17 + (long)(int)uVar7 + 4;
      *plVar10 = lVar14;
      thunk_FUN_01e10808(plVar10,lVar14);
      if (*(uint *)(plVar17 + 3) <= uVar7) goto LAB_033bfa24;
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_033bec5c;
      plVar10 = (long *)*plVar10;
      if (plVar10 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar14,uVar7,plVar10,0,*(int *)(lVar14 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar17;
      thunk_FUN_01e10808(unaff_x28,plVar17);
    }
  }
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(in_stack_00000040 + 3)) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    lVar13 = *(long *)(lVar13 + uVar9 * 8 + 0x20);
    if ((lVar13 != 0) &&
       (lVar16 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar17 + 3) <= uVar9) goto LAB_033bfa24;
    *plVar10 = lVar13;
    thunk_FUN_01e10808(plVar10,lVar13);
    lVar13 = *unaff_x28;
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
    if (lVar13 == 0) break;
LAB_033bfe14:
    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar14 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_033c0080;
      goto LAB_033c000c;
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_033bfa24;
    if (plVar17 == (long *)0x0) break;
  }
  goto LAB_033bec5c;
code_r0x033bee90:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
  param_1 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
  if (param_1 == 0) goto LAB_033bec5c;
  goto code_r0x033beeb4;
  while( true ) {
    plVar11 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar13 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar17 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar13 != 0) &&
       (lVar16 = thunk_FUN_01de26bc(lVar13,*(undefined8 *)(*plVar17 + 0x40)), lVar16 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar17 + 3) <= (uint)uVar9) goto LAB_033bfa24;
    *plVar10 = lVar13;
    thunk_FUN_01e10808(plVar10,lVar13);
    uVar6 = *(uint *)(lVar14 + 0x18);
    uVar9 = uVar9 + 1;
    plVar10 = plVar10 + 1;
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
      uVar12 = FUN_033ab18c(lVar13,0,0);
      uVar6 = (uint)uVar9;
      if ((uVar12 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar10 = *(long **)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar10 == (long *)0x0) ||
           (lVar14 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200)),
           plVar17 == (long *)0x0)) goto LAB_033bec5c;
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0))
        goto LAB_033c07f0;
        uVar7 = *(uint *)(plVar17 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar14 = in_stack_00000038[4];
        uVar18 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        lVar14 = thunk_FUN_033b4750(lVar14,uVar18,0);
        if (plVar17 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar14 != 0) &&
           (lVar13 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar17 + 0x40)), lVar13 == 0)) {
LAB_033c07f0:
          uVar18 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar18,0);
        }
        uVar7 = *(uint *)(plVar17 + 3);
      }
      if (uVar6 < uVar7) {
        plVar17[(long)(int)uVar6 + 4] = lVar14;
        thunk_FUN_01e10808(plVar17 + (long)(int)uVar6 + 4,lVar14);
LAB_033c0730:
        *unaff_x28 = (long)plVar17;
        thunk_FUN_01e10808(unaff_x28,plVar17);
LAB_033c0740:
        if ((int)in_stack_00000040[3] != 0) {
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


