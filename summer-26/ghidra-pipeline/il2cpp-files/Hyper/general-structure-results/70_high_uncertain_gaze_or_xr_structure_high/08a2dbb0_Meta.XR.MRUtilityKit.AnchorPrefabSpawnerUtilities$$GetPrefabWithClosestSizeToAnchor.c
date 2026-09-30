/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities$$GetPrefabWithClosestSizeToAnchor
ENTRY_POINT: 08a2dbb0
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities__GetPrefabWithClosestSizeToAnchor
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x21;
  
  uVar1 = thunk_FUN_04983f60(**(undefined8 **)(param_1 + 0xd30));
  FUN_08cc3ad0();
  *(undefined8 *)(unaff_x21 + 0x28) = uVar1;
  thunk_FUN_049ee3d8();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x22) * 0x10 + 0x138);
        goto LAB_08a2dc44;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_08a2dc44:
                    /* WARNING: Could not recover jumptable at 0x08a2dc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)();
  return;
}


