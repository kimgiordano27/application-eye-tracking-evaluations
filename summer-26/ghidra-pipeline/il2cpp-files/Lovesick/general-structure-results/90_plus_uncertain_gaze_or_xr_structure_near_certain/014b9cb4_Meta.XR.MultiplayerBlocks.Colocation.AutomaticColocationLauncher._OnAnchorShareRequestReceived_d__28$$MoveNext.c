/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$MoveNext
ENTRY_POINT: 014b9cb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__MoveNext
          (ulong param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Convert_ThrowUInt64OverflowException__);
    thunk_FUN_00d48444(StringLiteral_13948);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Count<Renderer>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    *(undefined1 *)(unaff_x21 + 0xda4) = 1;
  }
  puVar2 = Method_System_Linq_Enumerable_Count<Renderer>__;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  in_stack_00000008 = 0;
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x308))(param_2,*(undefined8 *)(*param_2 + 0x310));
    uVar3 = FUN_01600424(uVar3,*(undefined8 *)puVar1);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      uVar4 = FUN_0129eff4(lVar5,uVar3,&stack0x00000008,
                           *(undefined8 *)Method_System_Convert_ThrowUInt64OverflowException__);
      if ((uVar4 & 1) == 0) {
        in_stack_00000008 = FUN_0178c5cc(param_2);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar5);
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_014b9ddc;
        FUN_01299e64(lVar5,uVar3,in_stack_00000008,*(undefined8 *)StringLiteral_13948);
      }
      return in_stack_00000008;
    }
  }
LAB_014b9ddc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


