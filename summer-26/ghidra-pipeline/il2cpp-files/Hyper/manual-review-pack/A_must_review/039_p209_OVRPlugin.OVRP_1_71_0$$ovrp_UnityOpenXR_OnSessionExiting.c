/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionExiting
ENTRY_POINT: 090c6c54
PROGRAM: Hyper-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionExiting(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *in_x10;
  int *piVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  uVar1 = (**(code **)(param_1 + (long)(*in_x10 + 0x12) * 0x10 + 0x138))();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_0ac401c0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_0a188688(&stack0x00000000 + 4,0);
    uVar3 = 0;
    unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *unaff_x19 = in_stack_00000000._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  }
  else {
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x78) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    plVar6 = *(long **)(*(long *)(unaff_x20 + 0x78) + 0x18);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac76120) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto FUN_090c6d20;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac76120,2);
FUN_090c6d20:
      (*(code *)*puVar2)(&stack0x00000000 + 4,plVar6);
      unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *unaff_x19 = in_stack_00000000._4_8_;
      *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    }
    uVar3 = 1;
  }
  return uVar3;
}


