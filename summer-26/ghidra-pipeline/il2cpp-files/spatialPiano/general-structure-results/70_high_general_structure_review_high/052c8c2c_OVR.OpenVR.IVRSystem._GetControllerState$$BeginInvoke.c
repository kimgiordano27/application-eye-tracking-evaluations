/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerState$$BeginInvoke
ENTRY_POINT: 052c8c2c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


uint OVR_OpenVR_IVRSystem__GetControllerState__BeginInvoke(ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *plVar6;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo)
        {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_052c8c98;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02f421d0(plVar6,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,4);
LAB_052c8c98:
    uVar1 = (*(code *)*puVar2)(plVar6);
  }
  return uVar1 & 1;
}


