/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$SetFoveationLevel
ENTRY_POINT: 085cca30
PROGRAM: cac-libil2cpp.so
SCORE: 97
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;ui_interaction;foveation_rendering;frame_behavior;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_4;strong_foveation_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x085cce4c) */
/* WARNING: Removing unreachable block (ram,0x085ccf44) */
/* WARNING: Removing unreachable block (ram,0x085cd0b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_XR_Oculus_Utils__SetFoveationLevel(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  long *in_stack_00000060;
  
  FUN_03f13384(*(undefined8 *)(param_1 + 0xae8));
  *(undefined1 *)(unaff_x23 + 0x19b) = 1;
  puVar5 = PTR_DAT_0911ce60;
  puVar4 = PTR_DAT_09111828;
  puVar3 = PTR_DAT_09111820;
  in_stack_00000050 = 0;
  in_stack_00000058 = (undefined8 *)0x0;
  in_stack_00000060 = (long *)0x0;
  in_stack_00000040 = (long *)0x0;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  if (unaff_x20 != 0) {
    FUN_056b1374(&stack0x00000018);
    in_stack_00000060 = in_stack_00000028;
    in_stack_00000058 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x00000050;
    while (uVar6 = FUN_072070ec(&stack0x00000050,*(undefined8 *)puVar4), plVar10 = in_stack_00000060
          , (uVar6 & 1) != 0) {
      if (in_stack_00000060 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      uVar6 = FUN_074cf96c(in_stack_00000060,0);
      if ((uVar6 & 1) == 0) {
        uVar7 = thunk_FUN_03f786f8(PTR_DAT_09198b00);
        uVar7 = FUN_0731d5f8(uVar7,plVar10,0);
        thunk_FUN_03f786f8(PTR_DAT_0910e988);
        uVar8 = thunk_FUN_03f4e68c();
        FUN_07419a00(uVar8,uVar7,0);
        uVar7 = thunk_FUN_03f786f8(PTR_DAT_09198b08);
                    /* WARNING: Subroutine does not return */
        FUN_03f134f0(uVar8,uVar7);
      }
    }
    FUN_072070e8(&stack0x00000050,*(undefined8 *)puVar3);
    if (unaff_x22 != (long *)0x0) {
      lVar13 = *unaff_x22;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_085ccb74;
          }
          uVar6 = uVar6 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f4b594();
LAB_085ccb74:
      plVar10 = (long *)(*(code *)*puVar9)();
      puVar4 = PTR_DAT_09198ae8;
      puVar3 = PTR_DAT_09120570;
      do {
        in_stack_00000048 = plVar10;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        lVar13 = *plVar10;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar6 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0910d218) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_085ccc08;
            }
            uVar6 = uVar6 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f4b594(plVar10,*(long *)PTR_DAT_0910d218,0);
LAB_085ccc08:
        uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        plVar10 = in_stack_00000048;
        if ((uVar6 & 1) == 0) {
          if (in_stack_00000048 == (long *)0x0) {
            return;
          }
          lVar13 = *in_stack_00000048;
          uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar6 == 0) goto LAB_085cd060;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_085cd048;
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        lVar13 = *in_stack_00000048;
        uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar6 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0911ce68) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_085ccc74;
            }
            uVar6 = uVar6 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar6 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f4b594(in_stack_00000048,*(long *)PTR_DAT_0911ce68,0);
LAB_085ccc74:
        lVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        uVar6 = FUN_074d0670(lVar13,0);
        if ((uVar6 & 1) == 0) {
          uVar7 = thunk_FUN_03f786f8(PTR_DAT_09198b10);
          uVar7 = FUN_0731d5f8(uVar7,lVar13,0);
          thunk_FUN_03f786f8(PTR_DAT_0910e988);
          uVar8 = thunk_FUN_03f4e68c();
          FUN_07419a00(uVar8,uVar7,0);
          uVar7 = thunk_FUN_03f786f8(PTR_DAT_09198b08);
                    /* WARNING: Subroutine does not return */
          FUN_03f134f0(uVar8,uVar7);
        }
        lVar11 = *(long *)puVar4;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
          lVar11 = *(long *)puVar4;
        }
        lVar11 = **(long **)(lVar11 + 0xb8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        iVar1 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_074d9400(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
          lVar11 = **(long **)(*(long *)puVar4 + 0xb8);
        }
        FUN_085cc680(lVar13,lVar11,unaff_w19);
        if (**(long **)(*(long *)puVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        FUN_056b1374(&stack0x00000018,**(long **)(*(long *)puVar4 + 0xb8),
                     *(undefined8 *)PTR_DAT_09120590);
        in_stack_00000040 = in_stack_00000028;
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000018 = 0;
        in_stack_00000020 = &stack0x00000030;
Unity_XR_Oculus_InputFocus__add_InputFocusLost:
        uVar6 = FUN_072070ec(&stack0x00000030,*(undefined8 *)puVar3);
        plVar10 = in_stack_00000040;
        if ((uVar6 & 1) != 0) {
          if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          plVar12 = (long *)(**(code **)(*in_stack_00000040 + 0x268))
                                      (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x270)
                                      );
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          lVar13 = (**(code **)(*plVar12 + 0x938))(plVar12,*(undefined8 *)(*plVar12 + 0x940));
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f1362c();
          }
          if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
            uVar6 = 0;
            uVar14 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            do {
              if (uVar14 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_03f13634();
              }
              uVar14 = FUN_056b0c6c();
              if ((uVar14 & 1) != 0) {
                if (unaff_x21 != 0) {
                  lVar13 = *(long *)(unaff_x21 + 0x10);
                  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                  if (lVar13 != 0) {
                    uVar2 = *(uint *)(unaff_x21 + 0x18);
                    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
                      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                      puVar9 = (undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20);
                      *puVar9 = plVar10;
                      thunk_FUN_03f86000(puVar9,plVar10);
                    }
                    else {
                      FUN_056b08d0();
                    }
                    break;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f1362c();
              }
              uVar14 = (ulong)*(uint *)(lVar13 + 0x18);
              uVar6 = uVar6 + 1;
            } while ((long)uVar6 < (long)(int)*(uint *)(lVar13 + 0x18));
          }
          goto Unity_XR_Oculus_InputFocus__add_InputFocusLost;
        }
        FUN_072070e8(&stack0x00000030,*(undefined8 *)PTR_DAT_09120568);
        plVar10 = in_stack_00000048;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar15 = piVar15 + 4;
    if (uVar6 == 0) break;
LAB_085cd048:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0910bb38) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_085cd07c;
    }
  }
LAB_085cd060:
  puVar9 = (undefined8 *)FUN_03f4b594(in_stack_00000048,*(long *)PTR_DAT_0910bb38,0);
LAB_085cd07c:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
  return;
}


