/*
FUNCTION_NAME: OVRPlugin$$get_eyeDepth
ENTRY_POINT: 0367ed74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_eyeDepth(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_92__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_93__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_47__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_91__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_94__);
  *(undefined1 *)(unaff_x20 + 0xe35) = 1;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uVar5 = FUN_0406f8e8();
  if ((uVar5 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x48);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar6 + 0x18) != 0) {
      FUN_03223034(lVar6,*(undefined8 *)
                          Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_91__);
      puVar4 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_89__;
      puVar3 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_47__;
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      do {
        uVar7 = FUN_02cbf038(&stack0x00000020,*(undefined8 *)puVar4);
        uVar5 = in_stack_00000030;
        if ((uVar7 & 1) == 0) {
          FUN_02cbf034(&stack0x00000020,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_88__);
          if (*(char *)(unaff_x19 + 0x50) == '\0') {
            FUN_03666ff4(0x48506f7365446574,0);
          }
          *(undefined1 *)(unaff_x19 + 0x50) = 1;
          return 1;
        }
        if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar10 = *(long **)(unaff_x19 + 0x38);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *plVar10;
        uVar1 = *(undefined4 *)(in_stack_00000038 + 0x10);
        uVar2 = *(undefined4 *)(in_stack_00000038 + 0x14);
        uVar11 = *(undefined8 *)(in_stack_00000038 + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0367ee88;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,1);
LAB_0367ee88:
        uVar5 = (*(code *)*puVar8)(plVar10,uVar5 & 0xffffffff,uVar2,uVar1,uVar11,puVar8[1]);
        if ((uVar5 & 1) == 0) {
          *(undefined1 *)(unaff_x19 + 0x50) = 0;
          FUN_02cbf034(&stack0x00000020,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_88__);
          return 0;
        }
      } while( true );
    }
  }
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  return 0;
}


