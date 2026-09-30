/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Value
ENTRY_POINT: 04cbc9b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Value(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x21;
  
  if (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) == param_2) {
    uVar5 = FUN_059986a8();
    return uVar5;
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8(lVar2);
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04cbca44;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac();
LAB_04cbca44:
  iVar1 = (*(code *)*puVar3)();
  return (ulong)(iVar1 != 0);
}


