/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSurfacePositionDebugger
ENTRY_POINT: 01494564
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSurfacePositionDebugger
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_014945ac;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724();
LAB_014945ac:
  (*(code *)*puVar1)();
  plVar6 = *(long **)(unaff_x19 + 0x18);
  lVar2 = thunk_FUN_00d62348(*unaff_x23);
  if ((lVar2 == 0) || (FUN_016f27fc(), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto LAB_0149463c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_00d59724(plVar6,*unaff_x22,7);
LAB_0149463c:
                    /* WARNING: Could not recover jumptable at 0x01494658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,lVar2,puVar1[1]);
  return;
}


