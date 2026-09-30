/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache$$ConsumeStartupLogs
ENTRY_POINT: 028ceca8
PROGRAM: sharks-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache__ConsumeStartupLogs(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long in_stack_00000000;
  long in_stack_00000008;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0185daa4();
  }
  if (**(long **)(param_1 + 0xb8) != 0) {
    uVar3 = FUN_024c5210(**(long **)(param_1 + 0xb8),*unaff_x19,unaff_x19[1],
                         *(undefined8 *)PTR_DAT_037faae0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
    if (lVar4 != 0) {
      lVar5 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *unaff_x19;
      uVar2 = unaff_x19[1];
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      uVar3 = FUN_02171fa4(lVar4,uVar1,uVar2,&stack0x00000008,
                           *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x120));
      lVar4 = in_stack_00000008;
      if ((uVar3 & 1) != 0) {
        if (in_stack_00000008 == 0) goto LAB_028cee58;
        uVar1 = *unaff_x19;
        uVar2 = unaff_x19[1];
        if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        (**(code **)(lVar4 + 0x18))
                  (*(undefined8 *)(lVar4 + 0x40),uVar1,uVar2,*(undefined8 *)(lVar4 + 0x28));
      }
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0185daa4();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
      if (lVar4 != 0) {
        uVar3 = FUN_02171fa4(lVar4,*unaff_x19,unaff_x19[1]);
        if ((uVar3 & 1) != 0) {
          if (in_stack_00000000 == 0) goto LAB_028cee58;
          (**(code **)(in_stack_00000000 + 0x18))
                    (*(undefined8 *)(in_stack_00000000 + 0x40),*unaff_x19,unaff_x19[1],
                     *(undefined8 *)(in_stack_00000000 + 0x28));
        }
        return 1;
      }
    }
  }
LAB_028cee58:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


