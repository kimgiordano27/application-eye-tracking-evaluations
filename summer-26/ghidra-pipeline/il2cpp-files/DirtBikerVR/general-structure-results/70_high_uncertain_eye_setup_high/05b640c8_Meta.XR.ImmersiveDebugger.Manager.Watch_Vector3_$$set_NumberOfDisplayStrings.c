/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_NumberOfDisplayStrings
ENTRY_POINT: 05b640c8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_NumberOfDisplayStrings(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x25;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05b6410c;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_05b6410c:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uStack000000000000000c = *(undefined4 *)(unaff_x21 + 4);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x0000000c);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090();
    }
    thunk_FUN_03ac70f4(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10),&stack0x00000008);
    lVar4 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05b641ec;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4();
LAB_05b641ec:
    uVar1 = (*(code *)*puVar2)();
  }
  return uVar1 & 1;
}


