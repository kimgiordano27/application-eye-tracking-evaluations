/*
FUNCTION_NAME: FUN_02e1a224
ENTRY_POINT: 02e1a224
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02e1aa0c) */

undefined4 FUN_02e1a224(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined4 uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  ulong auStack_3e0 [6];
  undefined1 auStack_3b0 [8];
  ulong local_3a8;
  undefined1 *local_3a0;
  undefined8 local_398;
  long local_390;
  long local_388;
  ulong local_380;
  char local_374 [4];
  undefined1 *local_370;
  undefined1 *puStack_368;
  undefined1 auStack_360 [752];
  long local_70;
  
  local_390 = tpidr_el0;
  local_70 = *(long *)(local_390 + 0x28);
  if ((DAT_048317d7 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UI_ExitToMenu_<Start>b__2_0__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<Definition>b__25_1__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_Include__);
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_Lambda<Action>__);
    DAT_048317d7 = 1;
  }
  plVar17 = (long *)(param_2 + 0x20);
  lVar16 = *plVar17;
  uVar19 = (ulong)*(uint *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x60) + 0xfc);
  lVar14 = -(uVar19 + 0xf & 0x1fffffff0);
  memset(auStack_360,0,0x2f0);
  local_374[0] = '\0';
  pcVar6 = (char *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(lVar16 + 0xc0) + 0x80) + 0xc0);
  uVar18 = 0;
  if (*pcVar6 == '\0') {
    local_3a8 = uVar19;
    local_3a0 = auStack_3b0 + lVar14;
    memset(auStack_360,0,0x2f0);
    puVar7 = (undefined8 *)
             thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) + 0x60);
    local_398 = *puVar7;
    local_374[0] = '\0';
    FUN_035ce230(local_398,local_374,0);
    pcVar6 = (char *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) +
                                                0xc0);
    if (*pcVar6 == '\0') {
      plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) +
                                                  0x160);
      lVar16 = *plVar8;
      if (lVar16 == 0) {
        local_388 = 0;
      }
      else {
        local_388 = 0;
        if (*(int *)(lVar16 + 0x18) != 0) {
          local_388 = lVar16 + 0x20;
        }
      }
LAB_02e1a410:
      do {
        plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) +
                                                    0x160);
        if (*plVar8 == 0) {
          uVar18 = 0;
        }
        else {
          plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80)
                                                      + 0x160);
          if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar18 = *(undefined4 *)(*plVar8 + 0x18);
        }
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (*(code *)**(undefined8 **)(*(long *)(*plVar17 + 0xc0) + 0x40))(param_1,local_388,uVar18);
        pcVar6 = (char *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) +
                                                    0xc0);
        if (*pcVar6 != '\0') goto LAB_02e1a378;
        puVar7 = (undefined8 *)
                 thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) + 0x100);
        uVar13 = *puVar7;
        uVar1 = puVar7[1];
        plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) +
                                                    0x80);
        lVar16 = *plVar8;
        if (DAT_048317e1 == '\0') {
          thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
          DAT_048317e1 = '\x01';
          if (lVar16 != 0) goto LAB_02e1a4fc;
LAB_02e1a534:
          uVar9 = 0;
          local_380 = 0;
        }
        else {
          if (lVar16 == 0) goto LAB_02e1a534;
LAB_02e1a4fc:
          uVar9 = FUN_0340ce04(lVar16,0);
          local_380 = (ulong)*(uint *)(lVar16 + 0x10);
        }
        puVar10 = (ulong *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80)
                                                      + 0x20);
        uVar19 = *puVar10;
        if (DAT_048317e1 == '\0') {
          thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
          DAT_048317e1 = '\x01';
          if (uVar19 != 0) goto LAB_02e1a56c;
LAB_02e1a5a0:
          uVar11 = 0;
        }
        else {
          if (uVar19 == 0) goto LAB_02e1a5a0;
LAB_02e1a56c:
          uVar11 = FUN_0340ce04(uVar19,0);
          uVar19 = (ulong)*(uint *)(uVar19 + 0x10);
        }
        puVar10 = (ulong *)thunk_FUN_01ee7388(param_1,*(undefined8 *)
                                                       (**(long **)(*plVar17 + 0xc0) + 0x80));
        uVar20 = *puVar10;
        if (DAT_048317e1 == '\0') {
          thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
          DAT_048317e1 = '\x01';
          if (uVar20 != 0) goto LAB_02e1a5d0;
LAB_02e1a604:
          uVar12 = 0;
        }
        else {
          if (uVar20 == 0) goto LAB_02e1a604;
LAB_02e1a5d0:
          uVar12 = FUN_0340ce04(uVar20,0);
          uVar20 = (ulong)*(uint *)(uVar20 + 0x10);
        }
        plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) +
                                                    0x140);
        uVar3 = local_380;
        lVar16 = *plVar8;
        if (lVar16 == 0) {
          uVar15 = 0;
          lVar16 = 0;
        }
        else {
          uVar15 = (ulong)*(uint *)(lVar16 + 0x18);
          lVar16 = lVar16 + 0x20;
        }
        *(ulong *)((long)auStack_3e0 + lVar14 + 0x18) = uVar15;
        *(undefined8 *)((long)auStack_3e0 + lVar14 + 0x20) = 0;
        *(ulong *)((long)auStack_3e0 + lVar14 + 8) = uVar20;
        *(long *)((long)auStack_3e0 + lVar14 + 0x10) = lVar16;
        *(undefined8 *)((long)auStack_3e0 + lVar14) = uVar12;
        uVar4 = FUN_034e7860(auStack_360,uVar13,uVar1,uVar9,uVar3,uVar11,uVar19);
        if ((((uVar4 >> 4 & 1) == 0) ||
            (puVar7 = (undefined8 *)
                      thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) +
                                                 0x100), *(char *)*puVar7 != '.')) ||
           ((plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                  0x80) + 0x100),
            *(char *)(*plVar8 + 1) != '\0' &&
            ((plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                   0x80) + 0x100),
             *(char *)(*plVar8 + 1) != '.' ||
             (plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                   0x80) + 0x100),
             *(char *)(*plVar8 + 2) != '\0')))))) {
          plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80)
                                                      + 0x40);
          if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(*plVar8 + 0x14) != 0) {
            plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                 0x80) + 0x40);
            if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar5 = uVar4;
            if ((*(byte *)(*plVar8 + 0x14) & 1) != 0) {
              uVar5 = FUN_034e7ccc(auStack_360,0);
            }
            plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                 0x80) + 0x40);
            if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if ((*(uint *)(*plVar8 + 0x14) & uVar5) != 0) goto LAB_02e1a410;
          }
          if ((uVar4 >> 4 & 1) != 0) {
            plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                 0x80) + 0x40);
            if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if ((*(char *)(*plVar8 + 0x10) != '\0') &&
               (uVar19 = (**(code **)(*param_1 + 0x1d8))
                                   (param_1,auStack_360,*(undefined8 *)(*param_1 + 0x1e0)),
               (uVar19 & 1) != 0)) {
              plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                   0x80) + 0xe0);
              if (*plVar8 == 0) {
                uVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                             Method_Unity_VisualScripting_Expose_Include__);
                FUN_02607220(uVar13,*(undefined8 *)
                                     Method_Unity_VisualScripting_Expose_<Definition>b__25_1__);
                FUN_01bc5360(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) + 0xe0,uVar13);
              }
              plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                   0x80) + 0xe0);
              lVar16 = *plVar8;
              puVar10 = (ulong *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) +
                                                                     0x80) + 0x80);
              uVar19 = *puVar10;
              if (DAT_048317e1 == '\0') {
                thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
                DAT_048317e1 = '\x01';
                if (uVar19 != 0) goto LAB_02e1a8bc;
LAB_02e1a920:
                uVar13 = 0;
              }
              else {
                if (uVar19 == 0) goto LAB_02e1a920;
LAB_02e1a8bc:
                uVar13 = FUN_0340ce04(uVar19,0);
                uVar19 = (ulong)*(uint *)(uVar19 + 0x10);
              }
              auVar21 = FUN_034e7c08(auStack_360,0);
              if (*(int *)(*(long *)
                            Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                          + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar13 = FUN_034e5290(uVar13,uVar19,auVar21._0_8_,auVar21._8_8_,0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar13,uVar13);
              }
              FUN_02607734(lVar16,uVar13,*(undefined8 *)Method_UI_ExitToMenu_<Start>b__2_0__);
            }
          }
        }
        else {
          plVar8 = (long *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80)
                                                      + 0x40);
          if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(char *)(*plVar8 + 0x20) == '\0') goto LAB_02e1a410;
        }
        uVar19 = (**(code **)(*param_1 + 0x1c8))
                           (param_1,auStack_360,*(undefined8 *)(*param_1 + 0x1d0));
        puVar2 = local_3a0;
      } while ((uVar19 & 1) == 0);
      local_370 = auStack_360;
      puStack_368 = local_3a0;
      lVar14 = *(long *)(*param_1 + 0x1f0);
      (**(code **)(lVar14 + 0x10))(*(undefined8 *)(lVar14 + 8),lVar14,param_1,&local_370,local_3a0);
      FUN_01f08810(param_1,*(long *)(**(long **)(*plVar17 + 0xc0) + 0x80) + 0x120,puVar2,local_3a8);
      uVar18 = 1;
    }
    else {
LAB_02e1a378:
      uVar18 = 0;
    }
    if (local_374[0] != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(local_398,0);
    }
  }
  if (*(long *)(local_390 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}


