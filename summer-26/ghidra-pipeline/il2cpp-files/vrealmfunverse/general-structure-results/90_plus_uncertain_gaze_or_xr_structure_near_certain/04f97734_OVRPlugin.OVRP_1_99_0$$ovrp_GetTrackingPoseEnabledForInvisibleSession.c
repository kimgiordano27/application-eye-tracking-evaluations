/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 04f97734
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long lVar7;
  
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_04f9777c;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f9777c:
  (*(code *)*puVar1)();
  lVar7 = *(long *)(unaff_x19 + 0x80);
  if ((lVar7 != 0) && (plVar6 = *(long **)(unaff_x19 + 0x90), plVar6 != (long *)0x0)) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)System_Comparison<Event>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_04f977f4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)System_Comparison<Event>_TypeInfo,1);
LAB_04f977f4:
    (*(code *)*puVar1)(plVar6,lVar7 + 0x18,puVar1[1]);
    uVar3 = 0;
    while (lVar7 = *(long *)(unaff_x19 + 0xa0), lVar7 != 0) {
      if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar2 = *(long *)(unaff_x19 + 0x80);
      if ((lVar2 == 0) || (plVar6 = *(long **)(lVar7 + uVar3 * 8 + 0x20), plVar6 == (long *)0x0))
      break;
      lVar7 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x21) {
            puVar1 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_04f97880;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c(plVar6,*unaff_x21,1);
LAB_04f97880:
      (*(code *)*puVar1)(plVar6,lVar2 + 0x30,puVar1[1]);
      uVar3 = uVar3 + 1;
      if (uVar3 == 0x1a) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


