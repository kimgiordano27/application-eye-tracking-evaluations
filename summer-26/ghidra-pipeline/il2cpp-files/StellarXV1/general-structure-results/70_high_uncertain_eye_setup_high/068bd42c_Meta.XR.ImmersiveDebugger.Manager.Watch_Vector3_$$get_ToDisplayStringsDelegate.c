/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 068bd42c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__get_ToDisplayStringsDelegate(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  uVar2 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uStack000000000000000c = *(undefined4 *)(unaff_x21 + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x0000000c);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000008);
    lVar3 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_068bd518;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_068bd518:
    uVar1 = (*(code *)*puVar4)();
  }
  return uVar1 & 1;
}


