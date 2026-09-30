/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilityFlags
ENTRY_POINT: 03155550
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__GetPassthroughCapabilityFlags(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar6 = thunk_FUN_01afa9e0(uVar9,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
  uVar6 = thunk_FUN_01afa9e0(uVar9,*unaff_x22);
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x28),uVar6);
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    lVar7 = FUN_038fe800(*(long *)(unaff_x19 + 0x38),0);
    plVar10 = (long *)(unaff_x19 + 0xa0);
    *plVar10 = lVar7;
    thunk_FUN_01b4f09c(plVar10,lVar7);
    puVar5 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(char *)(unaff_x19 + 0xa8) == '\0') {
      puVar1 = (undefined4 *)(unaff_x19 + 0x40);
      puVar2 = (undefined4 *)(unaff_x19 + 0x44);
      puVar3 = (undefined4 *)(unaff_x19 + 0x48);
      puVar4 = (undefined4 *)(unaff_x19 + 0x4c);
    }
    else {
      puVar1 = (undefined4 *)(unaff_x19 + 0x50);
      puVar2 = (undefined4 *)(unaff_x19 + 0x54);
      puVar3 = (undefined4 *)(unaff_x19 + 0x58);
      puVar4 = (undefined4 *)(unaff_x19 + 0x5c);
    }
    if (*plVar10 != 0) {
      FUN_038ff380(*puVar1,*puVar2,*puVar3,*puVar4,*plVar10,0);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03922f24(uVar6,0,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      uVar6 = FUN_0391c27c();
      *(undefined8 *)(unaff_x19 + 0x68) = uVar6;
      thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x68),uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


