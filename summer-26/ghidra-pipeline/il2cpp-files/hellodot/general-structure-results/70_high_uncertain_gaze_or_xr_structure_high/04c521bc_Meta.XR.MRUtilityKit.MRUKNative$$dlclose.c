/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNative$$dlclose
ENTRY_POINT: 04c521bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKNative__dlclose(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  undefined8 uVar5;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  lVar1 = thunk_FUN_02cea894();
  FUN_04c2c1d8(lVar1,0);
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_065e6a08;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x10) = uVar5;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x28) = *unaff_x25;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    if (unaff_x19 != (long *)0x0) {
      lVar1 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 5) * 0x10 + 0x138);
            goto Meta_XR_MRUtilityKit_MRUKNative__FreeDllHandle;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c();
Meta_XR_MRUtilityKit_MRUKNative__FreeDllHandle:
                    /* WARNING: Could not recover jumptable at 0x04c52260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


