/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 039c6c44
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x21;
  
  if ((*(byte *)(param_1 + 300) <= *(byte *)(*unaff_x19 + 300)) &&
     (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)*(byte *)(param_1 + 300) * 8 + -8) == param_1))
  {
    uVar5 = FUN_036990a0();
    return uVar5;
  }
  lVar2 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x60);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_015c2790(lVar2);
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_039c6cec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80();
LAB_039c6cec:
  iVar1 = (*(code *)*puVar3)();
  return (ulong)(iVar1 == 1);
}


