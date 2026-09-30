/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$.ctor
ENTRY_POINT: 07289a20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long in_x9;
  long unaff_x21;
  long unaff_x23;
  undefined1 auVar4 [16];
  
  lVar1 = thunk_FUN_04096bb4(*(undefined8 *)(in_x9 + param_1 * 0x10 + 0x140));
  lVar1 = (**(code **)(lVar1 + 8))();
  *(long *)(unaff_x21 + 0x18) = lVar1;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x18),lVar1);
  auVar4 = FUN_07289bfc();
  lVar3 = auVar4._8_8_;
  lVar2 = auVar4._0_8_;
  *(long *)(unaff_x21 + 0x20) = lVar2;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x20),lVar2);
  *(long *)(unaff_x21 + 0x28) = lVar3;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x28),lVar3);
  if (unaff_x23 != 0) {
    *(long *)(unaff_x23 + 0x10) = unaff_x23;
    thunk_FUN_040ec700(unaff_x23 + 0x10);
    *(long *)(unaff_x23 + 0x18) = unaff_x23;
    thunk_FUN_040ec700(unaff_x23 + 0x18);
    *(undefined8 *)(unaff_x23 + 0x20) = 0;
    thunk_FUN_040ec700((undefined8 *)(unaff_x23 + 0x20),0);
    if (lVar1 != 0) {
      *(long *)(lVar1 + 0x10) = lVar1;
      thunk_FUN_040ec700(lVar1 + 0x10,lVar1);
      *(long *)(lVar1 + 0x18) = lVar1;
      thunk_FUN_040ec700(lVar1 + 0x18,lVar1);
      *(undefined8 *)(lVar1 + 0x20) = 0;
      thunk_FUN_040ec700((undefined8 *)(lVar1 + 0x20),0);
      *(undefined8 *)(lVar1 + 0x28) = 0;
      thunk_FUN_040ec700((undefined8 *)(lVar1 + 0x28),0);
      *(undefined2 *)(lVar1 + 0x34) = 0;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x20) = lVar2;
        thunk_FUN_040ec700(lVar2 + 0x20,lVar2);
        *(long *)(lVar2 + 0x28) = lVar3;
        thunk_FUN_040ec700((long *)(lVar2 + 0x28),lVar3);
        *(undefined8 *)(lVar2 + 0x30) = 0;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x30),0);
        *(undefined8 *)(lVar2 + 0x38) = 0;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x38),0);
        *(undefined8 *)(lVar2 + 0x40) = 0;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x40),0);
        *(undefined8 *)(lVar2 + 0x48) = 0;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x48),0);
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined4 *)(lVar2 + 0x58) = 0;
        thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x50),0);
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x20) = lVar3;
          thunk_FUN_040ec700(lVar3 + 0x20,lVar3);
          *(long *)(lVar3 + 0x28) = lVar2;
          thunk_FUN_040ec700((long *)(lVar3 + 0x28),lVar2);
          *(undefined8 *)(lVar3 + 0x30) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x30),0);
          *(undefined8 *)(lVar3 + 0x38) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x38),0);
          *(undefined8 *)(lVar3 + 0x40) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x40),0);
          *(undefined8 *)(lVar3 + 0x48) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x48),0);
          *(undefined8 *)(lVar3 + 0x50) = 0;
          *(undefined4 *)(lVar3 + 0x58) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar3 + 0x50),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


