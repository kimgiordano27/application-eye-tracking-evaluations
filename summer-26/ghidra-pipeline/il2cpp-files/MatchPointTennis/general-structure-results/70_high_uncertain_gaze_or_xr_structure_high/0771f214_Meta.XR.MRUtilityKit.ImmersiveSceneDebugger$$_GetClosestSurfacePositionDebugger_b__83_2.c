/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSurfacePositionDebugger>b__83_2
ENTRY_POINT: 0771f214
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSurfacePositionDebugger>b__83_2(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  
  puVar1 = PTR_DAT_09f30860;
  if ((*(byte *)(unaff_x19 + 0x167) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30868);
    FUN_04447ba8(PTR_DAT_09f30860);
    *(undefined1 *)(unaff_x19 + 0x167) = 1;
  }
  plVar7 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (plVar7 == (long *)0x0) {
    uVar2 = FUN_0771f07c();
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
    thunk_FUN_044bb4b4(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar2);
    plVar7 = (long *)**(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09f30868) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_0771f2dc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac(plVar7,*(long *)PTR_DAT_09f30868,1);
LAB_0771f2dc:
                    /* WARNING: Could not recover jumptable at 0x0771f2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return;
}


