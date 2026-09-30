/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_GetSuggestedGpuPerformanceLevel
ENTRY_POINT: 03173408
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_GetSuggestedGpuPerformanceLevel(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar5;
  undefined8 *unaff_x23;
  
  FUN_03081994();
  *(undefined8 *)(param_1 + 0x10) = unaff_x21;
  thunk_FUN_01b4f09c();
  *(long *)(unaff_x19 + 0x28) = param_1;
  thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x28),param_1);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x10);
  lVar1 = thunk_FUN_01afaadc(*unaff_x23);
  FUN_03081994(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  thunk_FUN_01b4f09c((undefined8 *)(lVar1 + 0x10),uVar5);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  thunk_FUN_01b4f09c((long *)(unaff_x19 + 0x30),lVar1);
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  lVar1 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03d80b18) {
        puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_031734c0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ae9f78();
LAB_031734c0:
  uVar5 = (*(code *)*puVar2)();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38),uVar5);
  return;
}


