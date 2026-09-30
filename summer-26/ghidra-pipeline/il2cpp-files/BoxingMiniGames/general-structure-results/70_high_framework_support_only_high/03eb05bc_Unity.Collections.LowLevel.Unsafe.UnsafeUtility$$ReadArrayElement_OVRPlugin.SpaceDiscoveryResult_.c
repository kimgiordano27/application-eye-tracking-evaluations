/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03eb05bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  long unaff_x24;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  thunk_FUN_0367fe20();
  FUN_0554a400();
  thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f5050);
  FUN_05d84434();
  (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x68))();
  if (unaff_x24 != 0) {
    FUN_06958e64();
    puVar1 = PTR_DAT_079fed70;
    lVar3 = *(long *)PTR_DAT_079fed70;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar3 = *(long *)puVar1;
    }
    if (*unaff_x22 != 0) {
      in_stack_00000008 = *unaff_x20;
      in_stack_00000010 = *(undefined8 *)(*unaff_x22 + 0x18);
      puVar4 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x90);
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      (*(code *)puVar4[2])(*puVar4,puVar4,0,&stack0x00000008,&stack0x00000028);
      uVar2 = in_stack_00000028;
      if (*(int *)(*(long *)PTR_DAT_079fd0e8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_05e7b464(&stack0x00000008,&stack0x00000020,uVar5,uVar2,0,0);
      if (*unaff_x20 != 0) {
        (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0xa8))();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


