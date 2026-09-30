/*
FUNCTION_NAME: FUN_02e18d50
ENTRY_POINT: 02e18d50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02e191cc) */

undefined4 FUN_02e18d50(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 in_x7;
  long lVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  undefined4 uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  char local_35c [4];
  undefined1 auStack_358 [752];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_048317cf & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UI_ExitToMenu_<Start>b__2_0__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_<Definition>b__25_1__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Expose_Include__);
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_Lambda<Action>__);
    DAT_048317cf = 1;
  }
  if ((char)param_1[8] == '\0') {
    memset(auStack_358,0,0x2f0);
    lVar6 = param_1[5];
    local_35c[0] = '\0';
    FUN_035ce230(lVar6,local_35c,0);
    if ((char)param_1[8] == '\0') {
      lVar11 = param_1[0xe];
      if (lVar11 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = 0;
        if (*(int *)(lVar11 + 0x18) != 0) {
          lVar18 = lVar11 + 0x20;
        }
      }
      plVar1 = param_1 + 9;
      if (lVar11 == 0) goto LAB_02e18ea4;
LAB_02e18e9c:
      uVar17 = *(undefined4 *)(lVar11 + 0x18);
      do {
        FUN_02e192b4(param_1,lVar18,uVar17,
                     *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x40));
        if ((char)param_1[8] != '\0') break;
        lVar11 = param_1[10];
        lVar2 = param_1[0xb];
        lVar16 = param_1[6];
        if (DAT_048317e1 == '\0') {
          thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
          DAT_048317e1 = '\x01';
          if (lVar16 == 0) goto LAB_02e18f7c;
LAB_02e18edc:
          uVar7 = FUN_0340ce04(lVar16,0);
          uVar17 = *(undefined4 *)(lVar16 + 0x10);
          lVar16 = param_1[3];
          if (DAT_048317e1 == '\0') {
            thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
            DAT_048317e1 = '\x01';
          }
          if (lVar16 != 0) goto LAB_02e18f14;
LAB_02e18f8c:
          uVar15 = 0;
          lVar16 = param_1[2];
          uVar8 = 0;
          if (lVar16 == 0) goto LAB_02e18f98;
LAB_02e18f4c:
          uVar9 = FUN_0340ce04(lVar16,0);
          uVar13 = *(undefined4 *)(lVar16 + 0x10);
        }
        else {
          if (lVar16 != 0) goto LAB_02e18edc;
LAB_02e18f7c:
          lVar16 = param_1[3];
          uVar7 = 0;
          uVar17 = 0;
          if (lVar16 == 0) goto LAB_02e18f8c;
LAB_02e18f14:
          uVar8 = FUN_0340ce04(lVar16,0);
          uVar15 = *(undefined4 *)(lVar16 + 0x10);
          lVar16 = param_1[2];
          if (DAT_048317e1 == '\0') {
            thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
            DAT_048317e1 = '\x01';
          }
          if (lVar16 != 0) goto LAB_02e18f4c;
LAB_02e18f98:
          uVar9 = 0;
          uVar13 = 0;
        }
        lVar16 = param_1[0xd];
        if (lVar16 == 0) {
          uVar14 = 0;
          lVar16 = 0;
        }
        else {
          uVar14 = *(undefined4 *)(lVar16 + 0x18);
          lVar16 = lVar16 + 0x20;
        }
        uVar4 = FUN_034e7860(auStack_358,lVar11,lVar2,uVar7,uVar17,uVar8,uVar15,in_x7,uVar9,uVar13,
                             lVar16,uVar14,0);
        if ((((uVar4 >> 4 & 1) == 0) || (pcVar12 = (char *)param_1[10], *pcVar12 != '.')) ||
           ((pcVar12[1] != '\0' && ((pcVar12[1] != '.' || (pcVar12[2] != '\0')))))) {
          lVar11 = param_1[4];
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar11 + 0x14) != 0) {
            uVar5 = uVar4;
            if ((*(uint *)(lVar11 + 0x14) & 1) != 0) {
              uVar5 = FUN_034e7ccc(auStack_358,0);
              lVar11 = param_1[4];
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
            }
            if ((*(uint *)(lVar11 + 0x14) & uVar5) != 0) goto LAB_02e19188;
          }
          if ((((uVar4 >> 4 & 1) == 0) || (*(char *)(lVar11 + 0x10) == '\0')) ||
             (uVar10 = (**(code **)(*param_1 + 0x1d8))
                                 (param_1,auStack_358,*(undefined8 *)(*param_1 + 0x1e0)),
             (uVar10 & 1) == 0)) goto LAB_02e19170;
          lVar11 = *plVar1;
          if (lVar11 == 0) {
            lVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_Unity_VisualScripting_Expose_Include__
                                       );
            FUN_02607220(lVar11,*(undefined8 *)
                                 Method_Unity_VisualScripting_Expose_<Definition>b__25_1__);
            *plVar1 = lVar11;
            thunk_FUN_01f51358(plVar1,lVar11);
            lVar11 = *plVar1;
          }
          uVar10 = param_1[6];
          if (DAT_048317e1 == '\0') {
            thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_AddAssign__);
            DAT_048317e1 = '\x01';
            if (uVar10 == 0) goto LAB_02e1910c;
LAB_02e190c8:
            uVar7 = FUN_0340ce04(uVar10,0);
            uVar10 = (ulong)*(uint *)(uVar10 + 0x10);
          }
          else {
            if (uVar10 != 0) goto LAB_02e190c8;
LAB_02e1910c:
            uVar7 = 0;
          }
          auVar19 = FUN_034e7c08(auStack_358,0);
          if (*(int *)(*(long *)
                        Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar7 = FUN_034e5290(uVar7,uVar10,auVar19._0_8_,auVar19._8_8_,0);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar7,uVar7);
          }
          FUN_02607734(lVar11,uVar7,*(undefined8 *)Method_UI_ExitToMenu_<Start>b__2_0__);
LAB_02e19170:
          uVar10 = (**(code **)(*param_1 + 0x1c8))
                             (param_1,auStack_358,*(undefined8 *)(*param_1 + 0x1d0));
          if ((uVar10 & 1) != 0) {
            lVar11 = (**(code **)(*param_1 + 0x1e8))
                               (param_1,auStack_358,*(undefined8 *)(*param_1 + 0x1f0));
            param_1[0xc] = lVar11;
            thunk_FUN_01f51358(param_1 + 0xc);
            uVar17 = 1;
            goto LAB_02e18e1c;
          }
        }
        else {
          if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(char *)(param_1[4] + 0x20) != '\0') goto LAB_02e19170;
        }
LAB_02e19188:
        lVar11 = param_1[0xe];
        if (lVar11 != 0) goto LAB_02e18e9c;
LAB_02e18ea4:
        uVar17 = 0;
      } while( true );
    }
    uVar17 = 0;
LAB_02e18e1c:
    if (local_35c[0] != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(lVar6,0);
    }
  }
  else {
    uVar17 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


