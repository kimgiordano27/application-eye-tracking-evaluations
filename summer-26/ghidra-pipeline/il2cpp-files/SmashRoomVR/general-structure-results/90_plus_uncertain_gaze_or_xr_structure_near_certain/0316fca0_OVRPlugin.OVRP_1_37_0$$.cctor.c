/*
FUNCTION_NAME: OVRPlugin.OVRP_1_37_0$$.cctor
ENTRY_POINT: 0316fca0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_37_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  FUN_024e93e0();
  puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_76__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
  lVar6 = *(long *)(unaff_x19 + 0x88);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if ((long)*(int *)(lVar6 + 0x18) <= (long)uVar5) {
        return;
      }
      uVar3 = FUN_01b47fd0(*(undefined8 *)puVar2,*(undefined4 *)(unaff_x19 + 0x80));
      if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_0316fd9c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      *(undefined8 *)(lVar6 + uVar5 * 8 + 0x20) = uVar3;
      thunk_FUN_01b4f09c();
      if (0 < *(int *)(unaff_x19 + 0x80)) {
        uVar7 = 0;
        do {
          lVar6 = *(long *)(unaff_x19 + 0x88);
          if (lVar6 == 0) goto LAB_0316fd80;
          if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_0316fd9c;
          lVar6 = *(long *)(lVar6 + uVar5 * 8 + 0x20);
          if (DAT_03fed256 == '\0') {
            thunk_FUN_01ad9084(puVar1);
            DAT_03fed256 = '\x01';
          }
          if (lVar6 == 0) goto LAB_0316fd80;
          if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_0316fd9c;
          puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
          uVar3 = *puVar4;
          lVar6 = lVar6 + uVar7 * 0x10;
          uVar7 = uVar7 + 1;
          *(undefined8 *)(lVar6 + 0x28) = puVar4[1];
          *(undefined8 *)(lVar6 + 0x20) = uVar3;
        } while ((long)uVar7 < (long)*(int *)(unaff_x19 + 0x80));
      }
      lVar6 = *(long *)(unaff_x19 + 0x88);
      uVar5 = uVar5 + 1;
    } while (lVar6 != 0);
  }
LAB_0316fd80:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


