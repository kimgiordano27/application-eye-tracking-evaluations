/*
FUNCTION_NAME: Meta.XR.Acoustics.ProgressCallback$$BeginInvoke
ENTRY_POINT: 076c00fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Acoustics_ProgressCallback__BeginInvoke(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x27;
  uint unaff_w28;
  undefined8 *unaff_x29;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  char cStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  char cStack0000000000000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  char cStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  char in_stack_000000b0;
  undefined8 in_stack_000000c0;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long *in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long *in_stack_00000150;
  
  if ((int)param_2[3] < 0) {
LAB_076c0178:
    lVar4 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (lVar4 != 0) {
      if ((in_stack_00000150 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*in_stack_00000150 + 0x178))
                                     (in_stack_00000150,*(undefined8 *)(*in_stack_00000150 + 0x180))
         , plVar5 == (long *)0x0)) goto LAB_076c066c;
      (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      lVar4 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_076c0200;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_044822ac();
LAB_076c0200:
      (*(code *)*puVar6)();
      if ((in_stack_00000150 == (long *)0x0) ||
         (plVar5 = (long *)(**(code **)(*in_stack_00000150 + 0x178))
                                     (in_stack_00000150,*(undefined8 *)(*in_stack_00000150 + 0x180))
         , plVar5 == (long *)0x0)) goto LAB_076c066c;
      (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
      lVar4 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_076c028c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_044822ac();
LAB_076c028c:
      (*(code *)*puVar6)();
      uVar3 = in_stack_000000a8;
      uVar2 = in_stack_000000a0;
      if (((in_stack_00000150 == (long *)0x0) ||
          (lVar4 = (**(code **)(*in_stack_00000150 + 0x178))
                             (in_stack_00000150,*(undefined8 *)(*in_stack_00000150 + 0x180)),
          lVar4 == 0)) || (in_stack_00000150 == (long *)0x0)) goto LAB_076c066c;
      uVar1 = *(undefined4 *)(lVar4 + 0x10);
      plVar5 = (long *)(**(code **)(*in_stack_00000150 + 0x178))
                                 (in_stack_00000150,*(undefined8 *)(*in_stack_00000150 + 0x180));
      if (((plVar5 == (long *)0x0) ||
          (lVar4 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
          lVar4 == 0)) || (in_stack_00000150 == (long *)0x0)) goto LAB_076c066c;
      FUN_076c10f4(&stack0x00000018,uVar3,uVar2,uVar1,*(undefined4 *)(lVar4 + 0x18),
                   (int)in_stack_00000150[4],param_1 + 0x20,0xc,&stack0x000000b0);
      in_stack_00000088 = in_stack_00000020;
      _cStack0000000000000080 = in_stack_00000018;
      uVar2 = _cStack0000000000000080;
      cStack0000000000000080 = (char)in_stack_00000018;
      in_stack_00000090 = in_stack_00000028;
      if (cStack0000000000000080 == '\0') goto LAB_076c0600;
      _cStack0000000000000080 = uVar2;
      auVar10 = FUN_0613d160(&stack0x00000080,*(undefined8 *)PTR_DAT_09f2aca0);
      uVar8 = (ulong)unaff_w28;
      unaff_w28 = unaff_w28 + 1;
      *(undefined1 (*) [16])(in_stack_00000118 + uVar8 * 0x10) = auVar10;
    }
    if (in_stack_00000138 != (long *)0x0) {
      lVar4 = *(long *)(unaff_x22 + 0x20);
      if (lVar4 == 0) goto LAB_076c066c;
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      _cStack0000000000000060 = 0;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      if (-1 < (int)in_stack_00000138[3]) {
        FUN_076c0c88(&stack0x00000018,in_stack_00000130,(int)in_stack_00000138[5],
                     (int)in_stack_00000138[4],in_stack_00000128._4_4_,lVar4 + 0x20,0xc,
                     *(undefined1 *)((long)in_stack_00000138 + 0x24),0);
        in_stack_00000068 = in_stack_00000020;
        _cStack0000000000000060 = in_stack_00000018;
        uVar2 = _cStack0000000000000060;
        cStack0000000000000060 = (char)in_stack_00000018;
        in_stack_00000070 = in_stack_00000028;
        if (cStack0000000000000060 == '\0') goto LAB_076c0600;
        _cStack0000000000000060 = uVar2;
        auVar10 = FUN_0613d160(&stack0x00000060,*(undefined8 *)PTR_DAT_09f2aca0);
        *(undefined1 (*) [16])(in_stack_00000118 + (ulong)unaff_w28 * 0x10) = auVar10;
        if (in_stack_00000138 == (long *)0x0) goto LAB_076c066c;
        unaff_w28 = unaff_w28 + 1;
      }
      lVar7 = (**(code **)(*in_stack_00000138 + 0x178))
                        (in_stack_00000138,*(undefined8 *)(*in_stack_00000138 + 0x180));
      if (lVar7 != 0) {
        if ((in_stack_00000138 == (long *)0x0) ||
           (plVar5 = (long *)(**(code **)(*in_stack_00000138 + 0x178))
                                       (in_stack_00000138,
                                        *(undefined8 *)(*in_stack_00000138 + 0x180)),
           plVar5 == (long *)0x0)) {
LAB_076c066c:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_076c0484;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac();
LAB_076c0484:
        (*(code *)*puVar6)();
        if ((in_stack_00000138 == (long *)0x0) ||
           (plVar5 = (long *)(**(code **)(*in_stack_00000138 + 0x178))
                                       (in_stack_00000138,
                                        *(undefined8 *)(*in_stack_00000138 + 0x180)),
           plVar5 == (long *)0x0)) goto LAB_076c066c;
        (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
        lVar7 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_076c0510;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac();
LAB_076c0510:
        (*(code *)*puVar6)();
        uVar3 = in_stack_00000058;
        uVar2 = in_stack_00000050;
        if (((in_stack_00000138 == (long *)0x0) ||
            (lVar7 = (**(code **)(*in_stack_00000138 + 0x178))
                               (in_stack_00000138,*(undefined8 *)(*in_stack_00000138 + 0x180)),
            lVar7 == 0)) || (in_stack_00000138 == (long *)0x0)) goto LAB_076c066c;
        uVar1 = *(undefined4 *)(lVar7 + 0x10);
        plVar5 = (long *)(**(code **)(*in_stack_00000138 + 0x178))
                                   (in_stack_00000138,*(undefined8 *)(*in_stack_00000138 + 0x180));
        if (((plVar5 == (long *)0x0) ||
            (lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180)),
            lVar7 == 0)) || (in_stack_00000138 == (long *)0x0)) goto LAB_076c066c;
        FUN_076c10f4(&stack0x00000018,uVar3,uVar2,uVar1,*(undefined4 *)(lVar7 + 0x18),
                     (int)in_stack_00000138[4],lVar4 + 0x20,0xc,&stack0x00000060);
        in_stack_00000038 = in_stack_00000020;
        _cStack0000000000000030 = in_stack_00000018;
        uVar2 = _cStack0000000000000030;
        cStack0000000000000030 = (char)in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        if (cStack0000000000000030 == '\0') goto LAB_076c0600;
        _cStack0000000000000030 = uVar2;
        auVar10 = FUN_0613d160(&stack0x00000030,*(undefined8 *)PTR_DAT_09f2aca0);
        *(undefined1 (*) [16])(in_stack_00000118 + (ulong)unaff_w28 * 0x10) = auVar10;
      }
    }
    if (1 < unaff_w21) {
      FUN_094b28ac(in_stack_00000118,in_stack_00000120,0);
    }
    FUN_05f9df64(&stack0x00000118,*(undefined8 *)PTR_DAT_09f2ac78);
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    FUN_0613d148();
  }
  else {
    FUN_076c0c88(&stack0x00000018,in_stack_00000148,(int)param_2[5],(int)param_2[4],
                 in_stack_00000140._4_4_,param_1 + 0x20,0xc,*(undefined1 *)((long)param_2 + 0x24),0)
    ;
    unaff_x29[1] = in_stack_00000020;
    *unaff_x29 = in_stack_00000018;
    in_stack_000000c0 = in_stack_00000028;
    if (in_stack_000000b0 != '\0') {
      auVar10 = FUN_0613d160(&stack0x000000b0,*(undefined8 *)PTR_DAT_09f2aca0);
      *(undefined1 (*) [16])(in_stack_00000118 + (ulong)unaff_w28 * 0x10) = auVar10;
      if (in_stack_00000150 == (long *)0x0) goto LAB_076c066c;
      unaff_w28 = unaff_w28 + 1;
      param_2 = in_stack_00000150;
      goto LAB_076c0178;
    }
LAB_076c0600:
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}


