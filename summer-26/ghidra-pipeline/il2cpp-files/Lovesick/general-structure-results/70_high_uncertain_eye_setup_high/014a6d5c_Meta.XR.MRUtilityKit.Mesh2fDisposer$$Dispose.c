/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Mesh2fDisposer$$Dispose
ENTRY_POINT: 014a6d5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Mesh2fDisposer__Dispose(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x21;
  long *plVar5;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12a);
  plVar5 = *(long **)(unaff_x21 + 0x768);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 0xc) * 0x10 + 0x138);
        goto LAB_014a6dac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_014a6dac:
  uVar2 = (*(code *)*puVar1)();
  **(undefined8 **)(*plVar5 + 0xb8) = uVar2;
  return;
}


