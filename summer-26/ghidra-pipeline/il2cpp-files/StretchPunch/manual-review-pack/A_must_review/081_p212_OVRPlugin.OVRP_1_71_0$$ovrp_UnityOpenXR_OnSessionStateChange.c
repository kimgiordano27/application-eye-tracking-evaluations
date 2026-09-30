/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 033ead30
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x21;
  long in_stack_00000008;
  
  plVar4 = (long *)FUN_01dfff04();
  puVar2 = StringLiteral_1157;
  lVar6 = *(long *)StringLiteral_1157;
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(plVar4);
    }
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(lVar6);
    lVar6 = *(long *)puVar2;
  }
  if (unaff_x21 != (long *)0x0) {
    if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
  }
  uVar5 = FUN_033bdecc();
  if ((uVar5 & 1) == 0) {
    uVar3 = FUN_01d7a358();
    if (in_stack_00000008 != 0) {
      uVar3 = 0;
      while( true ) {
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if ((int)uVar1 <= (int)uVar3) break;
        if ((uVar1 <= uVar3) || (uVar1 <= uVar3 + 1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        plVar4 = *(long **)(in_stack_00000008 + (long)(int)uVar3 * 8 + 0x20);
        lVar6 = *(long *)(in_stack_00000008 + (long)(int)(uVar3 + 1) * 8 + 0x20);
        if (plVar4 == (long *)0x0) {
          if (lVar6 != 0) goto LAB_033eadd0;
        }
        else {
          uVar5 = (**(code **)(*plVar4 + 0x138))(plVar4,lVar6,*(undefined8 *)(*plVar4 + 0x140));
          if ((uVar5 & 1) == 0) goto LAB_033eadd0;
        }
        uVar3 = uVar3 + 2;
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
      }
      uVar3 = 1;
    }
  }
  else {
LAB_033eadd0:
    uVar3 = 0;
  }
  return uVar3 & 1;
}


