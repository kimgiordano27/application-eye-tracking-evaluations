/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetLayerTexturePtr
ENTRY_POINT: 0534e224
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetLayerTexturePtr(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x21;
  
  uVar5 = *(undefined8 *)(unaff_x21 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar1 = FUN_060f078c(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  plVar6 = *(long **)(unaff_x21 + 0x28);
  uVar5 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
  FUN_05054f60();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar3 = *plVar6;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 10) * 0x10 + 0x138);
        goto LAB_0534e2ec;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02f421d0(plVar6,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,10);
LAB_0534e2ec:
                    /* WARNING: Could not recover jumptable at 0x0534e300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar5,puVar2[1]);
  return;
}


