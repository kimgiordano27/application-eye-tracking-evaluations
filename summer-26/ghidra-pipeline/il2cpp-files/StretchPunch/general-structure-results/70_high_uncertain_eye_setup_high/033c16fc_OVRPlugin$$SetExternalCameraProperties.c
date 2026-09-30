/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 033c16fc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetExternalCameraProperties(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long unaff_x19;
  uint unaff_w20;
  uint uVar11;
  long *unaff_x21;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *in_stack_00000010;
  uint uStack000000000000001c;
  
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  uStack000000000000001c = 0;
  uVar12 = 0;
  uVar17 = 0;
  do {
    if (unaff_x19 == 0) {
LAB_033c1980:
      if (uVar12 == unaff_w20) {
LAB_033c1988:
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar7 = FUN_033ab18c(in_stack_00000010,0,0);
        uVar12 = unaff_w20;
        if ((uVar7 & 1) == 0) {
LAB_033c1b60:
          uVar10 = *(uint *)(unaff_x21 + 3);
          if (uVar10 <= uVar17) goto LAB_033c1e60;
          lVar6 = unaff_x21[uVar17 + 4];
          if (lVar6 != 0) {
            lVar14 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
            if (lVar14 == 0) {
              uVar15 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar15,0);
            }
            uVar10 = (uint)unaff_x21[3];
          }
          if (uVar10 <= uStack000000000000001c) goto LAB_033c1e60;
          unaff_x21[(long)(int)uStack000000000000001c + 4] = lVar6;
          uVar10 = uStack000000000000001c + 1;
          thunk_FUN_01e10808(unaff_x21 + (long)(int)uStack000000000000001c + 4,lVar6);
          uStack000000000000001c = uVar10;
        }
        else {
          if (*(uint *)(unaff_x21 + 3) <= uVar17) goto LAB_033c1e60;
          plVar16 = unaff_x21 + uVar17 + 4;
          plVar5 = (long *)*plVar16;
          if ((plVar5 == (long *)0x0) ||
             (lVar6 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
             lVar6 == 0)) goto LAB_033c1e64;
          uVar7 = FUN_033ac7d8(lVar6,0);
          if ((uVar7 & 1) == 0) {
            if (*(uint *)(unaff_x21 + 3) <= uVar17) goto LAB_033c1e60;
            plVar16 = (long *)*plVar16;
            if ((plVar16 == (long *)0x0) ||
               (plVar5 = (long *)(**(code **)(*plVar16 + 0x228))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
               plVar5 == (long *)0x0)) goto LAB_033c1e64;
            uVar7 = (**(code **)(*plVar5 + 0x288))
                              (plVar5,in_stack_00000010,*(undefined8 *)(*plVar5 + 0x290));
joined_r0x033c1b5c:
            if ((uVar7 & 1) != 0) goto LAB_033c1b60;
          }
          else {
            if (in_stack_00000010 == (long *)0x0) goto LAB_033c1e64;
            plVar5 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                       (in_stack_00000010,
                                        *(undefined8 *)(*in_stack_00000010 + 0x310));
            if (plVar5 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
              if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)StringLiteral_1157)) {
                plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x308))
                                           (in_stack_00000010,
                                            *(undefined8 *)(*in_stack_00000010 + 0x310));
                if (uVar17 < *(uint *)(unaff_x21 + 3)) {
                  plVar16 = (long *)*plVar16;
                  if ((plVar16 != (long *)0x0) &&
                     (plVar5 = (long *)(**(code **)(*plVar16 + 0x228))
                                                 (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
                     plVar5 != (long *)0x0)) {
                    plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                               (plVar5,*(undefined8 *)(*plVar5 + 0x310));
                    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                    }
                    lVar6 = *(long *)StringLiteral_1157;
                    if (plVar9 != (long *)0x0) {
                      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 +
                                   -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(plVar9);
                      }
                    }
                    if (plVar5 != (long *)0x0) {
                      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 +
                                   -8) != lVar6)) {
LAB_033c1e68:
                    /* WARNING: Subroutine does not return */
                        FUN_01d7df0c(plVar5);
                      }
                    }
                    uVar7 = FUN_033c1f44(plVar9,plVar5);
                    goto joined_r0x033c1b5c;
                  }
                  goto LAB_033c1e64;
                }
                goto LAB_033c1e60;
              }
            }
          }
        }
      }
    }
    else {
      if ((param_1 & 0xffffffff) <= uVar17) goto LAB_033c1e60;
      plVar5 = (long *)unaff_x21[uVar17 + 4];
      if ((plVar5 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
         lVar6 == 0)) goto LAB_033c1e64;
      uVar10 = (uint)*(undefined8 *)(lVar6 + 0x18);
      if (unaff_w20 == uVar10) {
        if ((int)unaff_w20 < 1) {
          uVar12 = 0;
          goto LAB_033c1980;
        }
        if (uVar10 != 0) {
          lVar14 = 0;
          uVar10 = 1;
          while( true ) {
            plVar5 = *(long **)(lVar6 + lVar14 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_033c1e64;
            uVar12 = uVar10 - 1;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0))
            ;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto LAB_033c1e60;
            plVar16 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
            lVar14 = *plVar16;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            uVar7 = FUN_033aa3b4(plVar5,lVar14,0);
            if ((uVar7 & 1) == 0) {
              uVar15 = *(undefined8 *)StringLiteral_2477;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01dc4f30();
              }
              uVar15 = FUN_033a87c8(uVar15,0);
              uVar7 = FUN_033aa3b4(plVar5,uVar15,0);
              if ((uVar7 & 1) == 0) {
                if (plVar5 == (long *)0x0) goto LAB_033c1e64;
                uVar7 = FUN_033ac7d8(plVar5,0);
                if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto LAB_033c1e60;
                plVar9 = (long *)*plVar16;
                if ((uVar7 & 1) == 0) {
                  uVar7 = (**(code **)(*plVar5 + 0x288))
                                    (plVar5,plVar9,*(undefined8 *)(*plVar5 + 0x290));
                }
                else {
                  if (plVar9 == (long *)0x0) goto LAB_033c1e64;
                  plVar9 = (long *)(**(code **)(*plVar9 + 0x308))
                                             (plVar9,*(undefined8 *)(*plVar9 + 0x310));
                  if (plVar9 == (long *)0x0) goto LAB_033c1980;
                  bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)StringLiteral_1157)) goto LAB_033c1980;
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto LAB_033c1e60;
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_033c1e64;
                  plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                              (plVar16,*(undefined8 *)(*plVar16 + 0x310));
                  plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                             (plVar5,*(undefined8 *)(*plVar5 + 0x310));
                  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                    thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
                  }
                  lVar14 = *(long *)StringLiteral_1157;
                  if (plVar16 != (long *)0x0) {
                    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                                 -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01d7df0c(plVar16);
                    }
                  }
                  if (plVar5 != (long *)0x0) {
                    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                                 -8) != lVar14)) goto LAB_033c1e68;
                  }
                  uVar7 = FUN_033c1f44(plVar16,plVar5);
                }
                if ((uVar7 & 1) == 0) goto LAB_033c1980;
              }
            }
            if (unaff_w20 == uVar10) break;
            lVar14 = (long)(int)uVar10;
            bVar3 = *(uint *)(lVar6 + 0x18) <= uVar10;
            uVar10 = uVar10 + 1;
            if (bVar3) goto LAB_033c1e60;
          }
          goto LAB_033c1988;
        }
        goto LAB_033c1e60;
      }
    }
    uVar10 = *(uint *)(unaff_x21 + 3);
    param_1 = (ulong)uVar10;
    uVar17 = uVar17 + 1;
  } while ((long)uVar17 < (long)(int)uVar10);
  if (uStack000000000000001c == 0) {
    lVar6 = 0;
  }
  else {
    if (uStack000000000000001c == 1) {
      if (uVar10 == 0) {
LAB_033c1e60:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
    }
    else {
      lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,unaff_w20);
      if (0 < (int)unaff_w20) {
        if (lVar6 == 0) {
LAB_033c1e64:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        uVar12 = *(uint *)(lVar6 + 0x18);
        uVar17 = 0;
        do {
          if (uVar12 <= uVar17) goto LAB_033c1e60;
          *(int *)(lVar6 + 0x20 + uVar17 * 4) = (int)uVar17;
          uVar17 = uVar17 + 1;
        } while (unaff_w20 != uVar17);
      }
      if ((int)uStack000000000000001c < 2) {
        uVar12 = 0;
      }
      else {
        bVar3 = false;
        uVar10 = 1;
        uVar11 = 0;
        do {
          if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_033c1e60;
          plVar16 = unaff_x21 + (long)(int)uVar11 + 4;
          plVar5 = (long *)*plVar16;
          if (plVar5 == (long *)0x0) goto LAB_033c1e64;
          uVar15 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_033c1e60;
          plVar9 = unaff_x21 + (long)(int)uVar10 + 4;
          plVar5 = (long *)*plVar9;
          if (plVar5 == (long *)0x0) goto LAB_033c1e64;
          uVar8 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
          }
          iVar4 = FUN_033c2168(uVar15,uVar8,in_stack_00000010);
          if ((unaff_x19 != 0) && (iVar4 == 0)) {
            if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_033c1e60;
            plVar5 = (long *)*plVar16;
            if (plVar5 == (long *)0x0) goto LAB_033c1e64;
            uVar15 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
            if (*(uint *)(unaff_x21 + 3) <= uVar10) goto LAB_033c1e60;
            plVar5 = (long *)*plVar9;
            if (plVar5 == (long *)0x0) goto LAB_033c1e64;
            uVar8 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
            }
            iVar4 = FUN_033c2504(uVar15,lVar6,0,uVar8,lVar6,0);
          }
          if (iVar4 == 0) {
            if ((*(uint *)(unaff_x21 + 3) <= uVar11) || (*(uint *)(unaff_x21 + 3) <= uVar10))
            goto LAB_033c1e60;
            lVar14 = *plVar16;
            lVar13 = *plVar9;
            if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
              thunk_FUN_01dc4f30();
            }
            iVar4 = FUN_033c2954(lVar14,lVar13);
            bVar3 = (bool)(bVar3 | iVar4 == 0);
          }
          uVar12 = uVar10;
          if (iVar4 != 2) {
            uVar12 = uVar11;
          }
          uVar10 = uVar10 + 1;
          bVar3 = (bool)(bVar3 & iVar4 != 2);
          uVar11 = uVar12;
        } while (uStack000000000000001c != uVar10);
        if (bVar3) {
          uVar15 = thunk_FUN_01dd295c(StringLiteral_6016);
          uVar15 = FUN_033d6e4c(uVar15,0);
          thunk_FUN_01dd295c(StringLiteral_5868);
          uVar8 = thunk_FUN_01de27b8();
          FUN_033063d0(uVar8,uVar15,0);
          uVar15 = thunk_FUN_01dd295c(StringLiteral_8812);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar8,uVar15);
        }
      }
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_033c1e60;
      unaff_x21 = unaff_x21 + (int)uVar12;
    }
    lVar6 = unaff_x21[4];
  }
  return lVar6;
}


