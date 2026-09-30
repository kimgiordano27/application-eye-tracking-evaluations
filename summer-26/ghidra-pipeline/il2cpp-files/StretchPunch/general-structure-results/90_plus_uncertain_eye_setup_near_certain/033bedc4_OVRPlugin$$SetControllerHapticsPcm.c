/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 033bedc4
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


long OVRPlugin__SetControllerHapticsPcm(long param_1)

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
  ulong uVar13;
  long *unaff_x19;
  long lVar14;
  uint uVar15;
  uint uVar16;
  ulong unaff_x20;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_x23;
  long *unaff_x24;
  long lVar21;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar22;
  long *unaff_x28;
  long lVar23;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *plStack0000000000000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x033bedc4:
  lVar14 = (long)(int)unaff_x20;
  *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  thunk_FUN_01e10808();
  uVar12 = (ulong)*(uint *)(unaff_x24 + 3);
  if (unaff_x25 < uVar12) {
    lVar20 = *unaff_x19;
joined_r0x033bedec:
    uVar6 = (uint)uVar12;
    if (lVar20 != 0) {
      lVar17 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*unaff_x24 + 0x40));
      if (lVar17 == 0) goto LAB_033c07f0;
      uVar6 = (uint)unaff_x24[3];
    }
    if ((uint)unaff_x20 < uVar6) {
      unaff_x24[lVar14 + 4] = lVar20;
      uVar6 = (uint)unaff_x20 + 1;
      unaff_x20 = (ulong)uVar6;
      thunk_FUN_01e10808(unaff_x24 + lVar14 + 4,lVar20);
      plVar10 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      uVar12 = unaff_x25;
LAB_033bf82c:
      do {
        uVar7 = *(uint *)(unaff_x24 + 3);
        uVar13 = (ulong)uVar7;
        unaff_x25 = uVar12 + 1;
        if ((long)(int)uVar7 <= (long)unaff_x25) {
          if (uVar6 != 1) {
            if (uVar6 == 0) {
              uVar19 = thunk_FUN_01dd295c(StringLiteral_8802);
              uVar19 = FUN_033d6e4c(uVar19,0);
              thunk_FUN_01dd295c(StringLiteral_1159);
              uVar22 = thunk_FUN_01de27b8();
              FUN_033958dc(uVar22,uVar19,0);
              goto LAB_033c0894;
            }
            if ((int)uVar6 < 2) {
              uVar6 = 0;
              goto LAB_033bfae0;
            }
            if (uVar7 == 0) goto LAB_033bfa24;
            lVar14 = 0;
            lVar20 = 0;
            uVar6 = 0;
            bVar2 = false;
            plVar10 = unaff_x24;
            goto LAB_033bf900;
          }
          if (in_stack_00000020 != 0) {
            if (unaff_x23 == 0) goto LAB_033bec5c;
            if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
            if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
            lVar14 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
            lVar20 = *unaff_x28;
            if ((lVar20 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
            if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
            lVar17 = in_stack_00000038[4];
            if (*(int *)(*plVar10 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            bVar4 = FUN_033ab18c(lVar17,0,0);
            lVar17 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
            if (lVar14 == 0) {
              lVar21 = 0;
            }
            else {
              uVar19 = *(undefined8 *)StringLiteral_151;
              lVar21 = thunk_FUN_01de26bc(lVar14,uVar19);
              if (lVar21 == 0) goto LAB_033bfb98;
            }
            uVar19 = *(undefined8 *)(lVar20 + 0x18);
            FUN_033d8040(lVar17,0);
            *(long *)(lVar17 + 0x10) = lVar21;
            thunk_FUN_01e10808((long *)(lVar17 + 0x10),lVar21);
            *(int *)(lVar17 + 0x18) = (int)uVar19;
            *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
            *in_stack_00000010 = lVar17;
            thunk_FUN_01e10808(in_stack_00000010,lVar17);
            if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
            uVar19 = *(undefined8 *)(unaff_x23 + 0x20);
            lVar14 = *unaff_x28;
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            FUN_033c0ca4(uVar19,lVar14);
            uVar7 = (uint)in_stack_00000040[3];
            plVar10 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            unaff_x24 = in_stack_00000040;
          }
          if (uVar7 == 0) goto LAB_033bfa24;
          plVar8 = unaff_x24 + 4;
          plVar18 = (long *)*plVar8;
          if (((plVar18 == (long *)0x0) ||
              (lVar14 = (**(code **)(*plVar18 + 0x3b8))(plVar18,*(undefined8 *)(*plVar18 + 0x3c0)),
              lVar14 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
          iVar5 = *(int *)(*unaff_x28 + 0x18);
          if (*(int *)(lVar14 + 0x18) == iVar5) {
            if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
            if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
            lVar20 = in_stack_00000038[4];
            if (*(int *)(*plVar10 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar12 = FUN_033ab18c(lVar20,0,0);
            if ((uVar12 & 1) == 0) goto LAB_033c0740;
            plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                           *(undefined4 *)(lVar14 + 0x18));
            uVar6 = *(int *)(lVar14 + 0x18) - 1;
            FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar6,0);
            if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
            lVar20 = in_stack_00000038[4];
            lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
            if (lVar14 == 0) goto LAB_033bec5c;
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
            *(undefined4 *)(lVar14 + 0x20) = 1;
            lVar14 = thunk_FUN_033b4750(lVar20,lVar14,0);
            if (plVar10 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar14 != 0) &&
               (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0))
            goto LAB_033c07f0;
            if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
            plVar18 = plVar10 + (long)(int)uVar6 + 4;
            *plVar18 = lVar14;
            thunk_FUN_01e10808(plVar18,lVar14);
            if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
            lVar14 = *unaff_x28;
            if (lVar14 == 0) goto LAB_033bec5c;
            if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_033bfa24;
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) goto LAB_033bec5c;
            bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
            if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)StringLiteral_1183)) goto LAB_033c090c;
            FUN_033b49e8(plVar18,*(undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20),0,0);
            goto LAB_033c0730;
          }
          if (iVar5 < *(int *)(lVar14 + 0x18)) {
            plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
            lVar20 = *unaff_x28;
            if (lVar20 == 0) goto LAB_033bec5c;
            uVar12 = 0;
            plVar18 = plVar10 + 4;
            goto LAB_033bfe14;
          }
          if ((int)unaff_x24[3] == 0) goto LAB_033bfa24;
          plVar10 = (long *)*plVar8;
          if (plVar10 == (long *)0x0) goto LAB_033bec5c;
          uVar6 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
          if ((uVar6 >> 1 & 1) != 0) goto LAB_033c0740;
          plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                         *(undefined4 *)(lVar14 + 0x18));
          uVar6 = *(int *)(lVar14 + 0x18) - 1;
          FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar6,0);
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
          lVar20 = in_stack_00000038[4];
          lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
          if ((*unaff_x28 == 0) || (lVar14 == 0)) goto LAB_033bec5c;
          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
          *(uint *)(lVar14 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar6;
          lVar14 = thunk_FUN_033b4750(lVar20,lVar14,0);
          if (plVar10 == (long *)0x0) goto LAB_033bec5c;
          if ((lVar14 != 0) &&
             (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0))
          goto LAB_033c07f0;
          if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
          plVar18 = plVar10 + (long)(int)uVar6 + 4;
          *plVar18 = lVar14;
          thunk_FUN_01e10808(plVar18,lVar14);
          if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_033bfa24;
          lVar14 = *unaff_x28;
          if (lVar14 == 0) goto LAB_033bec5c;
          plVar18 = (long *)*plVar18;
          if (plVar18 != (long *)0x0) {
            bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
            if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)StringLiteral_1183)) goto LAB_033c090c;
          }
          FUN_033b4f38(lVar14,uVar6,plVar18,0,*(int *)(lVar14 + 0x18) - uVar6,0);
          *unaff_x28 = (long)plVar10;
          thunk_FUN_01e10808(unaff_x28,plVar10);
          unaff_x24 = in_stack_00000040;
          goto LAB_033c0740;
        }
        if (uVar13 <= unaff_x25) goto LAB_033bfa24;
        unaff_x19 = unaff_x24 + uVar12 + 5;
        uVar13 = FUN_03308638(*unaff_x19,0,0);
        uVar12 = unaff_x25;
      } while ((uVar13 & 1) != 0);
      if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_033bfa24;
      plVar18 = (long *)*unaff_x19;
      if ((plVar18 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar18 + 0x3b8))(plVar18,*(undefined8 *)(*plVar18 + 0x3c0)),
         lVar14 == 0)) goto LAB_033bec5c;
      uVar13 = *(ulong *)(lVar14 + 0x18);
      lVar20 = *unaff_x28;
      if (uVar13 == 0) {
        if (lVar20 == 0) goto LAB_033bec5c;
        if (*(long *)(lVar20 + 0x18) != 0) {
          if (*(uint *)(unaff_x24 + 3) <= unaff_x25) goto LAB_033bfa24;
          plVar18 = (long *)*unaff_x19;
          if (plVar18 == (long *)0x0) goto LAB_033bec5c;
          uVar7 = (**(code **)(*plVar18 + 600))(plVar18,*(undefined8 *)(*plVar18 + 0x260));
          if ((uVar7 >> 1 & 1) == 0) goto LAB_033bf82c;
        }
        if (unaff_x23 == 0) goto LAB_033bec5c;
        if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= uVar6))
        goto LAB_033bfa24;
        param_1 = unaff_x23 + unaff_x25 * 8;
        goto code_r0x033bedc4;
      }
      if (lVar20 == 0) goto LAB_033bec5c;
      uVar7 = *(uint *)(lVar20 + 0x18);
      iVar5 = (int)uVar13;
      if ((int)uVar7 < iVar5) {
        uVar16 = iVar5 - 1;
        if ((int)uVar7 < (int)uVar16) {
          plVar18 = (long *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
          do {
            if ((uint)uVar13 <= uVar7) goto LAB_033bfa24;
            plVar8 = (long *)*plVar18;
            if (plVar8 == (long *)0x0) goto LAB_033bec5c;
            lVar20 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
            puVar3 = StringLiteral_4821;
            lVar17 = *(long *)StringLiteral_4821;
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(lVar17);
              lVar17 = *(long *)puVar3;
            }
            if (lVar20 == **(long **)(lVar17 + 0xb8)) {
              uVar13 = (ulong)*(uint *)(lVar14 + 0x18);
              uVar16 = *(uint *)(lVar14 + 0x18) - 1;
              unaff_x28 = in_stack_00000058;
              break;
            }
            uVar13 = *(ulong *)(lVar14 + 0x18);
            uVar7 = uVar7 + 1;
            plVar18 = plVar18 + 1;
            uVar16 = (int)uVar13 - 1;
            unaff_x28 = in_stack_00000058;
          } while ((int)uVar7 < (int)uVar16);
        }
        if (uVar7 != uVar16) goto LAB_033bf82c;
        if ((uint)uVar13 <= uVar7) goto LAB_033bfa24;
        plVar8 = (long *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
        plVar18 = (long *)*plVar8;
        if (plVar18 == (long *)0x0) goto LAB_033bec5c;
        lVar20 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
        puVar3 = StringLiteral_4821;
        lVar17 = *(long *)StringLiteral_4821;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(lVar17);
          lVar17 = *(long *)puVar3;
        }
        if (lVar20 != **(long **)(lVar17 + 0xb8)) goto LAB_033bf040;
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar18 = (long *)*plVar8;
        if ((plVar18 == (long *)0x0) ||
           (lVar20 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
           lVar20 == 0)) goto LAB_033bec5c;
        uVar13 = FUN_033ac038(lVar20,0);
        if ((uVar13 & 1) == 0) goto LAB_033bf82c;
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar18 = (long *)*plVar8;
        uVar19 = *(undefined8 *)StringLiteral_8800;
        if (*(int *)(*plVar10 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar19 = FUN_033a87c8(uVar19,0);
        if (plVar18 == (long *)0x0) goto LAB_033bec5c;
        uVar13 = (**(code **)(*plVar18 + 0x208))(plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210))
        ;
        plVar10 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
        if ((uVar13 & 1) == 0) goto LAB_033bf82c;
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
        plVar8 = (long *)*plVar8;
        if ((plVar8 == (long *)0x0) ||
           (plVar18 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
           plVar18 == (long *)0x0)) goto LAB_033bec5c;
LAB_033bf87c:
        plStack0000000000000048 =
             (long *)(**(code **)(*plVar18 + 0x418))(plVar18,*(undefined8 *)(*plVar18 + 0x420));
      }
      else {
        if (iVar5 == 0) goto LAB_033bfa24;
        uVar16 = iVar5 - 1;
        lVar20 = (long)(int)uVar16;
        plVar8 = (long *)(lVar14 + lVar20 * 8 + 0x20);
        plVar18 = (long *)*plVar8;
        if ((plVar18 == (long *)0x0) ||
           (lVar17 = (**(code **)(*plVar18 + 0x1d8))(plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
           lVar17 == 0)) goto LAB_033bec5c;
        uVar13 = FUN_033ac038(lVar17,0);
        if (iVar5 < (int)uVar7) {
          unaff_x24 = in_stack_00000040;
          if ((uVar13 & 1) != 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_033bfa24;
            plVar18 = (long *)*plVar8;
            uVar19 = *(undefined8 *)StringLiteral_8800;
            if (*(int *)(*plVar10 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar19 = FUN_033a87c8(uVar19,0);
            if (plVar18 == (long *)0x0) goto LAB_033bec5c;
            uVar13 = (**(code **)(*plVar18 + 0x208))
                               (plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210));
            plVar10 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
            if ((uVar13 & 1) != 0) {
              if (unaff_x23 == 0) goto LAB_033bec5c;
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
              lVar17 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
              if (lVar17 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_033bfa24;
              if (*(uint *)(lVar17 + lVar20 * 4 + 0x20) == uVar16) {
LAB_033bf854:
                if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                  plVar8 = (long *)*plVar8;
                  if ((plVar8 != (long *)0x0) &&
                     (plVar18 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                  (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                     unaff_x24 = in_stack_00000040, plVar18 != (long *)0x0)) goto LAB_033bf87c;
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
          if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_033bfa24;
          plVar18 = (long *)*plVar8;
          uVar19 = *(undefined8 *)StringLiteral_8800;
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar19 = FUN_033a87c8(uVar19,0);
          if (plVar18 == (long *)0x0) goto LAB_033bec5c;
          uVar13 = (**(code **)(*plVar18 + 0x208))
                             (plVar18,uVar19,1,*(undefined8 *)(*plVar18 + 0x210));
          plVar10 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          if ((uVar13 & 1) == 0) {
            plStack0000000000000048 = (long *)0x0;
            goto LAB_033bf044;
          }
          if (unaff_x23 == 0) goto LAB_033bec5c;
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
          lVar17 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
          if (lVar17 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_033bfa24;
          if (*(uint *)(lVar17 + lVar20 * 4 + 0x20) == uVar16) {
            if (uVar16 < *(uint *)(lVar14 + 0x18)) {
              plVar18 = (long *)*plVar8;
              if ((plVar18 != (long *)0x0) &&
                 (plVar18 = (long *)(**(code **)(*plVar18 + 0x1d8))
                                              (plVar18,*(undefined8 *)(*plVar18 + 0x1e0)),
                 unaff_x26 != 0)) {
                if (uVar16 < *(uint *)(unaff_x26 + 0x18)) {
                  if (plVar18 != (long *)0x0) {
                    uVar13 = (**(code **)(*plVar18 + 0x288))
                                       (plVar18,*(undefined8 *)(unaff_x26 + lVar20 * 8 + 0x20),
                                        *(undefined8 *)(*plVar18 + 0x290));
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
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar13 = FUN_033ab18c(plStack0000000000000048,0,0);
      if ((uVar13 & 1) == 0) {
        if (*unaff_x28 == 0) goto LAB_033bec5c;
        uVar7 = *(uint *)(*unaff_x28 + 0x18);
      }
      else {
        uVar7 = *(int *)(lVar14 + 0x18) - 1;
      }
      if ((int)uVar7 < 1) {
        uVar16 = 0;
      }
      else {
        uVar15 = 0;
        plVar18 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        do {
          if (*(uint *)(lVar14 + 0x18) <= uVar15) goto LAB_033bfa24;
          lVar20 = (long)(int)uVar15;
          plVar8 = *(long **)(lVar14 + lVar20 * 8 + 0x20);
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
             plVar8 == (long *)0x0)) goto LAB_033bec5c;
          uVar13 = FUN_033ac048(plVar8,0);
          if ((uVar13 & 1) != 0) {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420))
            ;
          }
          if (unaff_x23 == 0) goto LAB_033bec5c;
          if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
          lVar17 = *plVar18;
          if (lVar17 == 0) goto LAB_033bec5c;
          if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_033bfa24;
          if (unaff_x26 == 0) goto LAB_033bec5c;
          uVar16 = *(uint *)(lVar17 + lVar20 * 4 + 0x20);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_033bfa24;
          uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar16 * 8 + 0x20);
          if (*(int *)(*plVar10 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar13 = FUN_033aa3b4(plVar8,uVar19,0);
          if ((uVar13 & 1) == 0) {
            if ((in_stack_00000050 >> 0x12 & 1) != 0) {
              if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
              lVar17 = *plVar18;
              if (lVar17 == 0) goto LAB_033bec5c;
              if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_033bfa24;
              lVar21 = *in_stack_00000058;
              if (lVar21 == 0) goto LAB_033bec5c;
              uVar16 = *(uint *)(lVar17 + lVar20 * 4 + 0x20);
              if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_033bfa24;
              lVar17 = *plVar10;
              lVar21 = *(long *)(lVar21 + (long)(int)uVar16 * 8 + 0x20);
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
                lVar17 = *plVar10;
              }
              if (lVar21 == *(long *)(*(long *)(lVar17 + 0xb8) + 0x18)) goto LAB_033bf488;
            }
            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
            lVar17 = *plVar18;
            if (lVar17 == 0) goto LAB_033bec5c;
            if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_033bfa24;
            lVar21 = *in_stack_00000058;
            if (lVar21 == 0) goto LAB_033bec5c;
            uVar16 = *(uint *)(lVar17 + lVar20 * 4 + 0x20);
            if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_033bfa24;
            if (*(long *)(lVar21 + (long)(int)uVar16 * 8 + 0x20) != 0) {
              uVar19 = *(undefined8 *)StringLiteral_2477;
              if (*(int *)(*plVar10 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar19 = FUN_033a87c8(uVar19,0);
              uVar13 = FUN_033aa3b4(plVar8,uVar19,0);
              if ((uVar13 & 1) == 0) {
                if (plVar8 == (long *)0x0) goto LAB_033bec5c;
                uVar13 = FUN_033ac7d8(plVar8,0);
                if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                lVar17 = *plVar18;
                if (lVar17 == 0) goto LAB_033bec5c;
                if ((*(uint *)(lVar17 + 0x18) <= uVar15) ||
                   (uVar16 = *(uint *)(lVar17 + lVar20 * 4 + 0x20),
                   *(uint *)(unaff_x26 + 0x18) <= uVar16)) goto LAB_033bfa24;
                uVar19 = *(undefined8 *)(unaff_x26 + (long)(int)uVar16 * 8 + 0x20);
                if (*(int *)(*(long *)
                              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                            + 0xe0) == 0) {
                  thunk_FUN_01dc4f30();
                }
                uVar9 = FUN_033aa3b4(uVar19,0,0);
                plVar10 = (long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                ;
                uVar16 = uVar15;
                if ((uVar13 & 1) == 0) {
                  if ((uVar9 & 1) == 0) {
                    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                    lVar17 = *plVar18;
                    if (lVar17 == 0) goto LAB_033bec5c;
                    if ((*(uint *)(lVar17 + 0x18) <= uVar15) ||
                       (uVar1 = *(uint *)(lVar17 + lVar20 * 4 + 0x20),
                       *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                    uVar13 = (**(code **)(*plVar8 + 0x288))
                                       (plVar8,*(undefined8 *)
                                                (unaff_x26 + (long)(int)uVar1 * 8 + 0x20),
                                        *(undefined8 *)(*plVar8 + 0x290));
                    if ((uVar13 & 1) == 0) {
                      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                      lVar17 = *plVar18;
                      if (lVar17 == 0) goto LAB_033bec5c;
                      if ((*(uint *)(lVar17 + 0x18) <= uVar15) ||
                         (uVar1 = *(uint *)(lVar17 + lVar20 * 4 + 0x20),
                         *(uint *)(unaff_x26 + 0x18) <= uVar1)) goto LAB_033bfa24;
                      lVar17 = *(long *)(unaff_x26 + (long)(int)uVar1 * 8 + 0x20);
                      if (lVar17 == 0) goto LAB_033bec5c;
                      uVar13 = FUN_033ac5f4(lVar17,0);
                      unaff_x24 = in_stack_00000040;
                      unaff_x28 = in_stack_00000058;
                      if ((uVar13 & 1) != 0) {
                        if (unaff_x25 < *(uint *)(unaff_x23 + 0x18)) {
                          lVar17 = *plVar18;
                          if (lVar17 != 0) {
                            if (uVar15 < *(uint *)(lVar17 + 0x18)) {
                              lVar21 = *in_stack_00000058;
                              if (lVar21 != 0) {
                                uVar1 = *(uint *)(lVar17 + lVar20 * 4 + 0x20);
                                if (uVar1 < *(uint *)(lVar21 + 0x18)) {
                                  uVar13 = (**(code **)(*plVar8 + 0x858))
                                                     (plVar8,*(undefined8 *)
                                                              (lVar21 + (long)(int)uVar1 * 8 + 0x20)
                                                      ,*(undefined8 *)(*plVar8 + 0x860));
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
                  lVar17 = *plVar18;
                  if (lVar17 == 0) goto LAB_033bec5c;
                  if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_033bfa24;
                  lVar21 = *in_stack_00000058;
                  if (lVar21 == 0) goto LAB_033bec5c;
                  uVar1 = *(uint *)(lVar17 + lVar20 * 4 + 0x20);
                  if (*(uint *)(lVar21 + 0x18) <= uVar1) goto LAB_033bfa24;
                  uVar19 = *(undefined8 *)(lVar21 + (long)(int)uVar1 * 8 + 0x20);
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
                  uVar13 = FUN_033c0b48(uVar19,plVar8);
                  plVar10 = (long *)
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
          uVar15 = uVar15 + 1;
          unaff_x24 = in_stack_00000040;
          unaff_x28 = in_stack_00000058;
          uVar16 = uVar7;
        } while (uVar7 != uVar15);
      }
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar13 = FUN_033ab18c(plStack0000000000000048,0,0);
      if (((uVar13 & 1) != 0) && (uVar16 == *(int *)(lVar14 + 0x18) - 1U)) {
        lVar14 = *unaff_x28;
        if (lVar14 == 0) goto LAB_033bec5c;
        lVar20 = (-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar16 << 3) + 0x20;
        while ((int)uVar16 < *(int *)(lVar14 + 0x18)) {
          if ((plStack0000000000000048 == (long *)0x0) ||
             (uVar13 = FUN_033ac7d8(plStack0000000000000048,0), unaff_x26 == 0)) goto LAB_033bec5c;
          if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_033bfa24;
          uVar19 = *(undefined8 *)(unaff_x26 + lVar20);
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar9 = FUN_033aa3b4(uVar19,0,0);
          plVar10 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
          ;
          if ((uVar13 & 1) == 0) {
            if ((uVar9 & 1) == 0) {
              if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_033bfa24;
              uVar13 = (**(code **)(*plStack0000000000000048 + 0x288))
                                 (plStack0000000000000048,*(undefined8 *)(unaff_x26 + lVar20),
                                  *(undefined8 *)(*plStack0000000000000048 + 0x290));
              if ((uVar13 & 1) == 0) {
                if (*(uint *)(unaff_x26 + 0x18) <= uVar16) goto LAB_033bfa24;
                if (*(long *)(unaff_x26 + lVar20) == 0) goto LAB_033bec5c;
                uVar13 = FUN_033ac5f4(*(long *)(unaff_x26 + lVar20),0);
                if ((uVar13 & 1) != 0) {
                  lVar14 = *unaff_x28;
                  if (lVar14 != 0) {
                    if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                      uVar13 = (**(code **)(*plStack0000000000000048 + 0x858))
                                         (plStack0000000000000048,*(undefined8 *)(lVar14 + lVar20),
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
            lVar14 = *unaff_x28;
            if (lVar14 == 0) goto LAB_033bec5c;
            if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_033bfa24;
            uVar19 = *(undefined8 *)(lVar14 + lVar20);
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
            plVar10 = (long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
            ;
joined_r0x033bf658:
            if ((uVar13 & 1) == 0) break;
          }
          lVar14 = *unaff_x28;
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 8;
          if (lVar14 == 0) goto LAB_033bec5c;
        }
      }
      if (*unaff_x28 == 0) goto LAB_033bec5c;
      if (uVar16 == *(uint *)(*unaff_x28 + 0x18)) goto LAB_033bf688;
      goto LAB_033bf82c;
    }
  }
  goto LAB_033bfa24;
LAB_033bf900:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar12 = lVar14 + 1, uVar13 <= uVar12)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar12)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar12)) goto LAB_033bfa24;
  lVar21 = plVar10[lVar20 + 4];
  lVar23 = unaff_x24[lVar14 + 5];
  lVar17 = in_stack_00000038[lVar20 + 4];
  uVar19 = *(undefined8 *)(unaff_x23 + lVar20 * 8 + 0x20);
  uVar22 = *(undefined8 *)(unaff_x23 + 0x28 + lVar14 * 8);
  lVar20 = in_stack_00000038[lVar14 + 5];
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar5 = FUN_033c0e28(lVar21,uVar19,lVar17,lVar23,uVar22,lVar20);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar14 + 1;
    bVar2 = false;
  }
  if (unaff_x20 - 2 != lVar14) {
    lVar20 = (long)(int)uVar6;
    lVar14 = lVar14 + 1;
    uVar13 = in_stack_00000040[3] & 0xffffffff;
    plVar10 = in_stack_00000040;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_033bfa24;
    goto LAB_033bf900;
  }
  plVar10 = (long *)
            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  unaff_x24 = in_stack_00000040;
  unaff_x28 = in_stack_00000058;
  if (bVar2) {
    uVar19 = thunk_FUN_01dd295c(StringLiteral_6016);
    uVar19 = FUN_033d6e4c(uVar19,0);
    thunk_FUN_01dd295c(StringLiteral_5868);
    uVar22 = thunk_FUN_01de27b8();
    FUN_033063d0(uVar22,uVar19,0);
LAB_033c0894:
    uVar19 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar22,uVar19);
  }
LAB_033bfae0:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar18 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar14 = *plVar18;
    if (lVar14 == 0) goto LAB_033bec5c;
    lVar14 = FUN_033b5440(lVar14,0);
    lVar20 = *unaff_x28;
    if ((lVar20 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar17 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar17,0,0);
    lVar17 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar14 == 0) {
      lVar21 = 0;
    }
    else {
      uVar19 = *(undefined8 *)StringLiteral_151;
      lVar21 = thunk_FUN_01de26bc(lVar14,uVar19);
      if (lVar21 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar14,uVar19);
      }
    }
    uVar19 = *(undefined8 *)(lVar20 + 0x18);
    FUN_033d8040(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar21;
    thunk_FUN_01e10808((long *)(lVar17 + 0x10),lVar21);
    *(int *)(lVar17 + 0x18) = (int)uVar19;
    *(byte *)(lVar17 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar17;
    thunk_FUN_01e10808(in_stack_00000010,lVar17);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar14 = *plVar18;
    lVar20 = *unaff_x28;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar14,lVar20);
    plVar10 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
    unaff_x24 = in_stack_00000040;
  }
  if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
  plVar8 = unaff_x24 + (long)(int)uVar6 + 4;
  plVar18 = (long *)*plVar8;
  if (((plVar18 == (long *)0x0) ||
      (lVar14 = (**(code **)(*plVar18 + 0x3b8))(plVar18,*(undefined8 *)(*plVar18 + 0x3c0)),
      lVar14 == 0)) || (*unaff_x28 == 0)) goto LAB_033bec5c;
  iVar5 = *(int *)(*unaff_x28 + 0x18);
  if (*(int *)(lVar14 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar20 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar12 = FUN_033ab18c(lVar20,0,0);
    if ((uVar12 & 1) != 0) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar14 + 0x18)
                                    );
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar20 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar14 + 0x20) = 1;
      lVar14 = thunk_FUN_033b4750(lVar20,lVar14,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      plVar18 = plVar10 + (long)(int)uVar7 + 4;
      *plVar18 = lVar14;
      thunk_FUN_01e10808(plVar18,lVar14);
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
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
      FUN_033b49e8(plVar18,*(undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar14 + 0x18)) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar20 = *unaff_x28;
      if (lVar20 == 0) goto LAB_033bec5c;
      uVar12 = 0;
      plVar18 = plVar10 + 4;
      do {
        if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar12) {
          uVar7 = *(uint *)(lVar14 + 0x18);
          if ((int)uVar12 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar12) goto LAB_033bfa24;
              plVar11 = *(long **)(lVar14 + 0x20 + uVar12 * 8);
              if ((plVar11 == (long *)0x0) ||
                 (lVar20 = (**(code **)(*plVar11 + 0x1f8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x200)),
                 plVar10 == (long *)0x0)) goto LAB_033bec5c;
              if ((lVar20 != 0) &&
                 (lVar17 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar10 + 0x40)), lVar17 == 0)
                 ) goto LAB_033c07f0;
              if (*(uint *)(plVar10 + 3) <= (uint)uVar12) goto LAB_033bfa24;
              *plVar18 = lVar20;
              thunk_FUN_01e10808(plVar18,lVar20);
              uVar7 = *(uint *)(lVar14 + 0x18);
              uVar12 = uVar12 + 1;
              plVar18 = plVar18 + 1;
            } while ((int)uVar12 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
          lVar20 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar13 = FUN_033ab18c(lVar20,0,0);
          uVar7 = (uint)uVar12;
          if ((uVar13 & 1) == 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
            plVar18 = *(long **)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar18 == (long *)0x0) ||
               (lVar14 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
               plVar10 == (long *)0x0)) goto LAB_033bec5c;
            if ((lVar14 != 0) &&
               (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0))
            goto LAB_033c07f0;
            uVar16 = *(uint *)(plVar10 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
            lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar19 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
            lVar14 = thunk_FUN_033b4750(lVar14,uVar19,0);
            if (plVar10 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar14 != 0) &&
               (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0))
            goto LAB_033c07f0;
            uVar16 = *(uint *)(plVar10 + 3);
          }
          if (uVar16 <= uVar7) goto LAB_033bfa24;
          plVar10[(long)(int)uVar7 + 4] = lVar14;
          thunk_FUN_01e10808(plVar10 + (long)(int)uVar7 + 4,lVar14);
FUN_033c07b0:
          *unaff_x28 = (long)plVar10;
          thunk_FUN_01e10808(unaff_x28,plVar10);
          unaff_x24 = in_stack_00000040;
          goto OVRPlugin__TriggerVibrationAction;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_033bfa24;
        if (plVar10 == (long *)0x0) goto LAB_033bec5c;
        lVar20 = *(long *)(lVar20 + uVar12 * 8 + 0x20);
        if ((lVar20 != 0) &&
           (lVar17 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar10 + 0x40)), lVar17 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar10 + 3) <= uVar12) goto LAB_033bfa24;
        *plVar18 = lVar20;
        thunk_FUN_01e10808(plVar18,lVar20);
        lVar20 = *unaff_x28;
        uVar12 = uVar12 + 1;
        plVar18 = plVar18 + 1;
        if (lVar20 == 0) goto LAB_033bec5c;
      } while( true );
    }
    if (*(uint *)(unaff_x24 + 3) <= uVar6) goto LAB_033bfa24;
    plVar10 = (long *)*plVar8;
    if (plVar10 == (long *)0x0) goto LAB_033bec5c;
    uVar7 = (**(code **)(*plVar10 + 600))(plVar10,*(undefined8 *)(*plVar10 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar10 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar14 + 0x18)
                                    );
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_033b4f38(*unaff_x28,0,plVar10,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar20 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*unaff_x28 == 0) || (lVar14 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar14 + 0x20) = *(int *)(*unaff_x28 + 0x18) - uVar7;
      lVar14 = thunk_FUN_033b4750(lVar20,lVar14,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      plVar18 = plVar10 + (long)(int)uVar7 + 4;
      *plVar18 = lVar14;
      thunk_FUN_01e10808(plVar18,lVar14);
      if (*(uint *)(plVar10 + 3) <= uVar7) goto LAB_033bfa24;
      lVar14 = *unaff_x28;
      if (lVar14 == 0) goto LAB_033bec5c;
      plVar18 = (long *)*plVar18;
      if (plVar18 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar14,uVar7,plVar18,0,*(int *)(lVar14 + 0x18) - uVar7,0);
      *unaff_x28 = (long)plVar10;
      thunk_FUN_01e10808(unaff_x28,plVar10);
      unaff_x24 = in_stack_00000040;
    }
  }
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(unaff_x24 + 3)) goto LAB_033c07cc;
  goto LAB_033bfa24;
LAB_033bf688:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) || (*(uint *)(unaff_x23 + 0x18) <= uVar6))
  goto LAB_033bfa24;
  lVar14 = (long)(int)uVar6;
  *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01e10808();
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if ((plStack0000000000000048 != (long *)0x0) &&
     (lVar20 = thunk_FUN_01de26bc(plStack0000000000000048,*(undefined8 *)(*in_stack_00000038 + 0x40)
                                 ), lVar20 == 0)) goto LAB_033c07f0;
  if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
  in_stack_00000038[lVar14 + 4] = (long)plStack0000000000000048;
  thunk_FUN_01e10808(in_stack_00000038 + lVar14 + 4,plStack0000000000000048);
  uVar12 = (ulong)*(uint *)(unaff_x24 + 3);
  if (uVar12 <= unaff_x25) goto LAB_033bfa24;
  lVar20 = *unaff_x19;
  goto joined_r0x033bedec;
  while( true ) {
    lVar20 = *(long *)(lVar20 + uVar12 * 8 + 0x20);
    if ((lVar20 != 0) &&
       (lVar17 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar10 + 0x40)), lVar17 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar10 + 3) <= uVar12) goto LAB_033bfa24;
    *plVar18 = lVar20;
    thunk_FUN_01e10808(plVar18,lVar20);
    lVar20 = *unaff_x28;
    uVar12 = uVar12 + 1;
    plVar18 = plVar18 + 1;
    if (lVar20 == 0) break;
LAB_033bfe14:
    if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar12) {
      uVar6 = *(uint *)(lVar14 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar12) goto LAB_033c0080;
      goto LAB_033c000c;
    }
    if (*(uint *)(lVar20 + 0x18) <= uVar12) goto LAB_033bfa24;
    if (plVar10 == (long *)0x0) break;
  }
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
  while( true ) {
    plVar11 = *(long **)(lVar14 + 0x20 + uVar12 * 8);
    if ((plVar11 == (long *)0x0) ||
       (lVar20 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200)),
       plVar10 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar20 != 0) &&
       (lVar17 = thunk_FUN_01de26bc(lVar20,*(undefined8 *)(*plVar10 + 0x40)), lVar17 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar10 + 3) <= (uint)uVar12) goto LAB_033bfa24;
    *plVar18 = lVar20;
    thunk_FUN_01e10808(plVar18,lVar20);
    uVar6 = *(uint *)(lVar14 + 0x18);
    uVar12 = uVar12 + 1;
    plVar18 = plVar18 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar12) break;
LAB_033c000c:
    if (uVar6 <= (uint)uVar12) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if ((int)in_stack_00000038[3] != 0) {
    lVar20 = in_stack_00000038[4];
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar13 = FUN_033ab18c(lVar20,0,0);
    uVar6 = (uint)uVar12;
    if ((uVar13 & 1) == 0) {
      if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_033bfa24;
      plVar18 = *(long **)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
      if ((plVar18 == (long *)0x0) ||
         (lVar14 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200)),
         plVar10 == (long *)0x0)) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0))
      goto LAB_033c07f0;
      uVar7 = *(uint *)(plVar10 + 3);
    }
    else {
      if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
      lVar14 = in_stack_00000038[4];
      uVar19 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      lVar14 = thunk_FUN_033b4750(lVar14,uVar19,0);
      if (plVar10 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar20 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar10 + 0x40)), lVar20 == 0)) {
LAB_033c07f0:
        uVar19 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar19,0);
      }
      uVar7 = *(uint *)(plVar10 + 3);
    }
    if (uVar6 < uVar7) {
      plVar10[(long)(int)uVar6 + 4] = lVar14;
      thunk_FUN_01e10808(plVar10 + (long)(int)uVar6 + 4,lVar14);
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


