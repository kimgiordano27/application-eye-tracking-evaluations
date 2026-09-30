/*
FUNCTION_NAME: OVRPlugin$$GetHandNodePoseStateLatency
ENTRY_POINT: 03382d14
PROGRAM: gunraiders-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetHandNodePoseStateLatency(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  int in_w9;
  long *unaff_x20;
  undefined4 unaff_w21;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while( true ) {
    if (in_w9 == 0) {
      thunk_FUN_01c1d1e8(param_1);
    }
    uVar1 = FUN_032ea0d4(unaff_x20,0,0);
    if ((uVar1 & 1) == 0) break;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar2 = (**(code **)(*unaff_x20 + 0x6b8))
                      (unaff_x20,unaff_w21,*(undefined8 *)(*unaff_x20 + 0x6c0));
    lVar3 = *unaff_x26;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar3);
      lVar3 = *unaff_x26;
    }
    lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x20);
    if (lVar4 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(lVar3);
        lVar3 = *unaff_x26;
      }
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      lVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                  System_Linq_Expressions_Interpreter_LoadLocalFromClosureInstruction_TypeInfo
                                );
      FUN_02b67c90(lVar4,uVar5,*unaff_x28,0);
      *(long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20) = lVar4;
    }
    FUN_02358a2c(uVar2,lVar4,*unaff_x29);
    FUN_0230a718();
    unaff_x20 = (long *)(**(code **)(*unaff_x20 + 0x858))
                                  (unaff_x20,*(undefined8 *)(*unaff_x20 + 0x860));
    param_1 = *unaff_x25;
    in_w9 = *(int *)(param_1 + 0xe0);
  }
  return;
}


