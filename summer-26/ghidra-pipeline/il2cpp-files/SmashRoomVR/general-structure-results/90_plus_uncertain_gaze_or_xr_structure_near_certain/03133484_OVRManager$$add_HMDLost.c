/*
FUNCTION_NAME: OVRManager$$add_HMDLost
ENTRY_POINT: 03133484
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void OVRManager__add_HMDLost(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  int iVar6;
  long unaff_x22;
  long in_stack_00000000;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  *(undefined1 *)(unaff_x22 + 0xea8) = 1;
  puVar2 = StringLiteral_414;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (unaff_x20 != 0) {
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      iVar6 = 0;
      do {
        FUN_02b93dc0();
        lVar4 = in_stack_00000000;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_03922f24(lVar4,0,0);
        if ((uVar3 & 1) == 0) {
          if (lVar4 == 0) goto LAB_031335e0;
          lVar4 = FUN_01ed770c(lVar4,*(undefined8 *)puVar2);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          uVar3 = FUN_03922f24(lVar4,0,0);
          if ((uVar3 & 1) == 0) {
            if (lVar4 == 0) goto LAB_031335e0;
            uVar5 = FUN_03afadb8(lVar4,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)puVar1);
            }
            uVar3 = FUN_0391f968(uVar5);
            if ((uVar3 & 1) == 0) {
              FUN_02b93dc0();
              memcpy(unaff_x19,&stack0x00000000,0x50);
              return;
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_x20 + 0x18));
    }
    unaff_x19[7] = 0;
    unaff_x19[6] = 0;
    unaff_x19[9] = 0;
    unaff_x19[8] = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    unaff_x19[5] = 0;
    unaff_x19[4] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    return;
  }
LAB_031335e0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


