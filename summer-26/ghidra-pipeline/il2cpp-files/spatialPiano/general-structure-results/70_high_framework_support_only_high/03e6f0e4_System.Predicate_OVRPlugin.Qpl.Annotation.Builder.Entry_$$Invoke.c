/*
FUNCTION_NAME: System.Predicate<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Invoke
ENTRY_POINT: 03e6f0e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Predicate<OVRPlugin_Qpl_Annotation_Builder_Entry>__Invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  long in_stack_00000010;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02f41e9c();
  }
  uVar3 = FUN_047fcd2c();
  lVar5 = in_stack_00000010;
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02f41e9c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02f41e9c();
    }
    uVar3 = FUN_03e6ebf0();
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      lVar5 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
      if (lVar5 == 0) {
LAB_03e6f374:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar4 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *unaff_x20;
      uVar2 = unaff_x20[1];
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02f41e9c();
      }
      uVar3 = FUN_047fcd2c(lVar5,uVar1,uVar2,&stack0x00000008,
                           *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0xf8));
      lVar5 = in_stack_00000008;
      if ((uVar3 & 1) == 0) {
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar5 = *(long *)(unaff_x21 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_03e6f374;
        lVar4 = *(long *)(unaff_x21 + 0x20);
        uVar1 = *unaff_x20;
        uVar2 = unaff_x20[1];
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_02f41e9c();
        }
        FUN_047f4d84(lVar5,uVar1,uVar2,unaff_w19,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x168));
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02f41e9c();
        }
        FUN_03e6ee74();
      }
      else {
        if (in_stack_00000008 == 0) goto LAB_03e6f374;
        uVar1 = *unaff_x20;
        uVar2 = unaff_x20[1];
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_02f41e9c();
        }
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),uVar1,uVar2,unaff_w19,*(undefined8 *)(lVar5 + 0x28)
                  );
      }
    }
  }
  else {
    if (in_stack_00000010 == 0) goto LAB_03e6f374;
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02f41e9c();
    }
    FUN_0431a93c(lVar5,unaff_w19,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x158));
  }
  return;
}


