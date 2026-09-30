/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSurfacePositionDebugger>b__83_1
ENTRY_POINT: 04a78de0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSurfacePositionDebugger>b__83_1
               (ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x20;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_02b76218(param_3);
  }
  lVar4 = *unaff_x22;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04a78e40;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04a78e40:
  (*(code *)*puVar3)();
  FUN_04a7b2a0();
  FUN_04a79df0();
  iVar1 = *(int *)(unaff_x20 + 0x20);
  if (0 < iVar1) {
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / iVar1;
    }
    if (3 < iVar2) {
      FUN_04a7b0a0();
      return;
    }
  }
  return;
}


