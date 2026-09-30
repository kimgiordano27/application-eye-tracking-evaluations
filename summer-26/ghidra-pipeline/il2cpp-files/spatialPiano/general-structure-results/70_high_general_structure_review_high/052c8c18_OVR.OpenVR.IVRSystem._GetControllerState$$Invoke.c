/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerState$$Invoke
ENTRY_POINT: 052c8c18
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


uint OVR_OpenVR_IVRSystem__GetControllerState__Invoke(undefined1 param_1 [16])

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  unaff_x19[1] = param_1._8_8_;
  *unaff_x19 = param_1._0_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
  *(undefined8 *)((long)unaff_x19 + 0xc) = in_stack_00000010;
  uVar2 = FUN_052c8a8c();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo)
        {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_052c8c98;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02f421d0(plVar6,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,4);
LAB_052c8c98:
    uVar1 = (*(code *)*puVar3)(plVar6);
  }
  return uVar1 & 1;
}


