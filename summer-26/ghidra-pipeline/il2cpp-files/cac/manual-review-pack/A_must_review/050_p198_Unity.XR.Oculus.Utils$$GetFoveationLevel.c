/*
FUNCTION_NAME: Unity.XR.Oculus.Utils$$GetFoveationLevel
ENTRY_POINT: 085ccb48
PROGRAM: cac-libil2cpp.so
SCORE: 97
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;ui_interaction;foveation_rendering;frame_behavior;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;strong_foveation_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x085cce4c) */
/* WARNING: Removing unreachable block (ram,0x085ccf44) */
/* WARNING: Removing unreachable block (ram,0x085cd0b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Unity_XR_Oculus_Utils__GetFoveationLevel(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long in_x9;
  ulong uVar13;
  int *in_x10;
  int *piVar14;
  undefined4 unaff_w19;
  long unaff_x21;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar5 = (undefined8 *)FUN_03f4b594();
      goto LAB_085ccb74;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_085ccb74:
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_09198ae8;
  puVar3 = PTR_DAT_09120570;
  do {
    in_stack_00000048 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar11 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0910d218) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_085ccc08;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f4b594(plVar6,*(long *)PTR_DAT_0910d218,0);
LAB_085ccc08:
    uVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar6 = in_stack_00000048;
    if ((uVar13 & 1) == 0) {
      if (in_stack_00000048 == (long *)0x0) {
        return;
      }
      lVar11 = *in_stack_00000048;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 == 0) goto LAB_085cd060;
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    lVar11 = *in_stack_00000048;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0911ce68) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_085ccc74;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f4b594(in_stack_00000048,*(long *)PTR_DAT_0911ce68,0);
LAB_085ccc74:
    lVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    uVar13 = FUN_074d0670(lVar11,0);
    if ((uVar13 & 1) == 0) {
      uVar9 = thunk_FUN_03f786f8(PTR_DAT_09198b10);
      uVar9 = FUN_0731d5f8(uVar9,lVar11,0);
      thunk_FUN_03f786f8(PTR_DAT_0910e988);
      uVar10 = thunk_FUN_03f4e68c();
      FUN_07419a00(uVar10,uVar9,0);
      uVar9 = thunk_FUN_03f786f8(PTR_DAT_09198b08);
                    /* WARNING: Subroutine does not return */
      FUN_03f134f0(uVar10,uVar9);
    }
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar7 = *(long *)puVar4;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f1362c();
    }
    iVar1 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_074d9400(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      lVar7 = **(long **)(*(long *)puVar4 + 0xb8);
    }
    FUN_085cc680(lVar11,lVar7,unaff_w19);
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
    uVar13 = FUN_072070ec(&stack0x00000030,*(undefined8 *)puVar3);
    plVar6 = in_stack_00000040;
    if ((uVar13 & 1) != 0) {
      if (in_stack_00000040 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      plVar8 = (long *)(**(code **)(*in_stack_00000040 + 0x268))
                                 (in_stack_00000040,*(undefined8 *)(*in_stack_00000040 + 0x270));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      lVar11 = (**(code **)(*plVar8 + 0x938))(plVar8,*(undefined8 *)(*plVar8 + 0x940));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar13 = 0;
        uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_03f13634();
          }
          uVar12 = FUN_056b0c6c();
          if ((uVar12 & 1) != 0) {
            if (unaff_x21 != 0) {
              lVar11 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar2 = *(uint *)(unaff_x21 + 0x18);
                if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
                  puVar5 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar5 = plVar6;
                  thunk_FUN_03f86000(puVar5,plVar6);
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
          uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      goto Unity_XR_Oculus_InputFocus__add_InputFocusLost;
    }
    FUN_072070e8(&stack0x00000030,*(undefined8 *)PTR_DAT_09120568);
    plVar6 = in_stack_00000048;
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0910bb38) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_085cd07c;
    }
  }
LAB_085cd060:
  puVar5 = (undefined8 *)FUN_03f4b594(in_stack_00000048,*(long *)PTR_DAT_0910bb38,0);
LAB_085cd07c:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
  return;
}


