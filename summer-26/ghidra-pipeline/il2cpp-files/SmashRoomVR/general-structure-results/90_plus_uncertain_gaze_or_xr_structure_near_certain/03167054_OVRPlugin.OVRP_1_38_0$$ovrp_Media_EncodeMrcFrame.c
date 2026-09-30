/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrame
ENTRY_POINT: 03167054
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrame(undefined1 param_1 [16])

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000008 = param_1._8_8_;
  uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000020 = 0;
  uStack0000000000000010 = uStack0000000000000000;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uStack0000000000000018 = uStack0000000000000008;
  uVar2 = FUN_0316583c();
  if ((uVar2 & 1) != 0) {
    fVar8 = *unaff_x20;
    fVar7 = unaff_x20[1];
    fVar9 = unaff_x20[2];
    if (*(int *)(*(long *)PTR_DAT_03d80700 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar4 = (float)FUN_03164e98();
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 10);
    fVar6 = unaff_x20[7];
    fVar5 = *(float *)(unaff_x21 + 0x28);
    fVar7 = SQRT((fVar9 - unaff_s8) * (fVar9 - unaff_s8) +
                 (fVar8 - fVar4) * (fVar8 - fVar4) + (fVar7 - unaff_s9) * (fVar7 - unaff_s9));
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar8 = -fVar7;
    uVar2 = FUN_03922f24(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (fVar5 <= ABS(fVar7 + fVar6)) {
        if (unaff_x20[7] <= fVar8) {
          return;
        }
      }
      else {
        iVar1 = (**(code **)(*unaff_x21 + 0x548))();
        if (iVar1 < 1) {
          return;
        }
      }
    }
    unaff_x20[7] = fVar8;
    *(undefined8 *)(unaff_x20 + 0x14) = uStack0000000000000020;
    *(undefined8 *)(unaff_x20 + 0xe) = uStack0000000000000008;
    *(undefined8 *)(unaff_x20 + 0xc) = uStack0000000000000000;
    *(undefined8 *)(unaff_x20 + 0x12) = uStack0000000000000018;
    *(undefined8 *)(unaff_x20 + 0x10) = uStack0000000000000010;
    thunk_FUN_01b4f09c(unaff_x20 + 0xc,0);
    *(long *)(unaff_x20 + 10) = unaff_x19;
    thunk_FUN_01b4f09c(unaff_x20 + 10);
    return;
  }
  return;
}


