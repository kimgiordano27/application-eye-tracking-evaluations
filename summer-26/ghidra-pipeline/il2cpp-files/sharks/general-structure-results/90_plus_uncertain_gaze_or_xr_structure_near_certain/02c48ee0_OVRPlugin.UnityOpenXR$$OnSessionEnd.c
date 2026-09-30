/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 02c48ee0
PROGRAM: sharks-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int unaff_w19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_02c30798(&stack0x00000008,&stack0x00000048);
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x70) = in_stack_00000018;
    *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000010;
    *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000008;
    thunk_FUN_0188fd20(unaff_x20 + 0x60,0);
    puVar1 = PTR_DAT_0380c818;
    if (unaff_w19 == -1) {
      return;
    }
    lVar2 = *(long *)PTR_DAT_0380c818;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar4 == 0) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar2 = *(long *)puVar1;
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
      lVar4 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802a20);
      FUN_02c4071c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0380c810);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar3 = lVar4;
      thunk_FUN_0188fd20(plVar3,lVar4);
    }
    lVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03802a30);
    FUN_02c12df4(lVar2,0);
    FUN_02c3f5c0(lVar2,lVar4);
    if (unaff_x20 != 0) {
      plVar3 = (long *)(unaff_x20 + 0x78);
      *plVar3 = lVar2;
      thunk_FUN_0188fd20(plVar3,lVar2);
      if (*plVar3 != 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


