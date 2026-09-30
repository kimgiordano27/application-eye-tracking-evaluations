/*
FUNCTION_NAME: OVRPlugin$$SetLogCallback2
ENTRY_POINT: 0367d3d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetLogCallback2(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_66__;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar4 = *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_66__;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_59__;
  lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar3;
    }
    uVar9 = **(undefined8 **)(lVar4 + 0xb8);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_61__
                              );
    FUN_02e6c748(lVar8,uVar9,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_64__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar5 = lVar8;
    thunk_FUN_01f51358(plVar5,lVar8);
  }
  FUN_02300e64(uVar7,lVar8,*(undefined8 *)puVar2);
  if (unaff_x19 != 0) {
    FUN_030f2dc0();
    uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
      lVar4 = *(long *)puVar3;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar4 = *(long *)puVar3;
      }
      if (*(long *)(*(long *)(lVar4 + 0xb8) + 0x10) == 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *(long *)puVar3;
        }
        uVar9 = **(undefined8 **)(lVar4 + 0xb8);
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_60__
                                  );
        FUN_02e6c0a0(uVar7,uVar9,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_65__,0);
        puVar6 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
        *puVar6 = uVar7;
        thunk_FUN_01f51358(puVar6,uVar7);
      }
      FUN_0230b6f4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


