/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller$$ToggleVisibility
ENTRY_POINT: 072899d8
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__ToggleVisibility(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  long *unaff_x19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  undefined1 auVar6 [16];
  
  plVar5 = *(long **)(unaff_x20 + 0xd80);
  lVar1 = thunk_FUN_04096bb4(*(undefined8 *)
                              (in_x9 + (ulong)*(ushort *)(*param_1 + 0x50) * 0x10 + 0x140));
  lVar1 = (**(code **)(lVar1 + 8))();
  *(long *)(unaff_x21 + 0x10) = lVar1;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x10),lVar1);
  lVar2 = thunk_FUN_04096bb4(*(undefined8 *)
                              (*unaff_x19 + (ulong)*(ushort *)(*plVar5 + 0x50) * 0x10 + 0x140));
  lVar2 = (**(code **)(lVar2 + 8))();
  *(long *)(unaff_x21 + 0x18) = lVar2;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x18),lVar2);
  auVar6 = FUN_07289bfc();
  lVar4 = auVar6._8_8_;
  lVar3 = auVar6._0_8_;
  *(long *)(unaff_x21 + 0x20) = lVar3;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x20),lVar3);
  *(long *)(unaff_x21 + 0x28) = lVar4;
  thunk_FUN_040ec700((long *)(unaff_x21 + 0x28),lVar4);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = lVar1;
    thunk_FUN_040ec700(lVar1 + 0x10,lVar1);
    *(long *)(lVar1 + 0x18) = lVar1;
    thunk_FUN_040ec700(lVar1 + 0x18,lVar1);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    thunk_FUN_040ec700((undefined8 *)(lVar1 + 0x20),0);
    if (lVar2 != 0) {
      *(long *)(lVar2 + 0x10) = lVar2;
      thunk_FUN_040ec700(lVar2 + 0x10,lVar2);
      *(long *)(lVar2 + 0x18) = lVar2;
      thunk_FUN_040ec700(lVar2 + 0x18,lVar2);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x20),0);
      *(undefined8 *)(lVar2 + 0x28) = 0;
      thunk_FUN_040ec700((undefined8 *)(lVar2 + 0x28),0);
      *(undefined2 *)(lVar2 + 0x34) = 0;
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x20) = lVar3;
        thunk_FUN_040ec700(lVar3 + 0x20,lVar3);
        *(long *)(lVar3 + 0x28) = lVar4;
        thunk_FUN_040ec700((long *)(lVar3 + 0x28),lVar4);
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
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x20) = lVar4;
          thunk_FUN_040ec700(lVar4 + 0x20,lVar4);
          *(long *)(lVar4 + 0x28) = lVar3;
          thunk_FUN_040ec700((long *)(lVar4 + 0x28),lVar3);
          *(undefined8 *)(lVar4 + 0x30) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x30),0);
          *(undefined8 *)(lVar4 + 0x38) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x38),0);
          *(undefined8 *)(lVar4 + 0x40) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x40),0);
          *(undefined8 *)(lVar4 + 0x48) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x48),0);
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined4 *)(lVar4 + 0x58) = 0;
          thunk_FUN_040ec700((undefined8 *)(lVar4 + 0x50),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


