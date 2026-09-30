/*
FUNCTION_NAME: OVRPlugin$$IsSuccess
ENTRY_POINT: 0367d3c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsSuccess(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  FUN_030f2380();
  puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_66__;
  if (unaff_x20 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar4 = *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_66__;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar3;
    }
    puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_59__;
    lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar3;
      }
      uVar8 = **(undefined8 **)(lVar4 + 0xb8);
      lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_61__
                                );
      FUN_02e6c748(lVar7,uVar8,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_64__,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      *plVar5 = lVar7;
      thunk_FUN_01f51358(plVar5,lVar7);
    }
    uVar6 = FUN_02300e64(uVar6,lVar7,*(undefined8 *)puVar2);
    puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_63__;
    if (param_1 != 0) {
      FUN_030f2dc0(param_1,uVar6,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_62__);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
      lVar4 = *(long *)(param_1 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(param_1,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        lVar4 = *(long *)puVar3;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar3;
        }
        puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_6__;
        lVar7 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (lVar7 == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *(long *)puVar3;
          }
          uVar6 = **(undefined8 **)(lVar4 + 0xb8);
          lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                      Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_60__
                                    );
          FUN_02e6c0a0(lVar7,uVar6,
                       *(undefined8 *)
                        Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_65__,0);
          plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          *plVar5 = lVar7;
          thunk_FUN_01f51358(plVar5,lVar7);
        }
        FUN_0230b6f4(param_1,lVar7,*(undefined8 *)puVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


