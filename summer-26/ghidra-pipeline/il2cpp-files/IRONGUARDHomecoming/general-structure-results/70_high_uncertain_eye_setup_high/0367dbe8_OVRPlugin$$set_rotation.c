/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 0367dbe8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__set_rotation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 unaff_w19;
  long lVar10;
  undefined8 *unaff_x20;
  long *plVar11;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_77__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_78__);
  *(undefined1 *)(unaff_x21 + 0xe2c) = 1;
  in_stack_00000008 = 0;
  plVar11 = (long *)*unaff_x20;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_76__) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_0367dc70;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_76__
                        ,5);
LAB_0367dc70:
  puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_78__;
  puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_77__;
  puVar1 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_75__;
  uVar8 = (*(code *)*puVar5)(plVar11,unaff_w19,&stack0x00000008,puVar5[1]);
  if ((uVar8 & 1) == 0) {
    lVar10 = *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_74__;
    lVar7 = *(long *)(lVar10 + 0x38);
    if (lVar7 == 0) {
      FUN_01ecafa0(lVar10);
      lVar7 = *(long *)(lVar10 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar7 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    in_stack_00000008 = **(undefined8 **)(lVar7 + 0xb8);
  }
  uVar4 = in_stack_00000008;
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030f24a8(uVar6,uVar4,*(undefined8 *)puVar2);
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar7,0);
  *(undefined8 *)(lVar7 + 0x10) = uVar6;
  thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x10),uVar6);
  return lVar7;
}


