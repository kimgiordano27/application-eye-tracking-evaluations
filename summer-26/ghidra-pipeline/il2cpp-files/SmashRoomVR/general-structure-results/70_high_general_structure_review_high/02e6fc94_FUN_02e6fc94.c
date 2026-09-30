/*
FUNCTION_NAME: FUN_02e6fc94
ENTRY_POINT: 02e6fc94
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_02e6fc94(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10
  ;
  if ((DAT_03ff0450 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_5691);
    thunk_FUN_01ad9084(StringLiteral_5692);
    thunk_FUN_01ad9084(StringLiteral_5693);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10
                      );
    DAT_03ff0450 = 1;
  }
  uVar4 = thunk_FUN_01afaadc(*(undefined8 *)puVar1);
  puVar3 = StringLiteral_5692;
  puVar2 = StringLiteral_5691;
  puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_ValidateLocalization__;
  if (param_1 != (long *)0x0) {
    FUN_02200d44(uVar4,param_1,*(undefined8 *)(*param_1 + 0x240),0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_0392f864(uVar4,0);
    lVar5 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar3);
    param_1[0xc] = lVar5;
    thunk_FUN_01b4f09c();
    lVar5 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    param_1[10] = lVar5;
    thunk_FUN_01b4f09c(param_1 + 10,lVar5);
    if ((param_1[0xd] == 0) &&
       (lVar5 = System_Runtime_Serialization_Formatters_Binary_SerStack___ctor(param_1), lVar5 != 0)
       ) {
      lVar5 = System_Runtime_Serialization_Formatters_Binary_SerStack___ctor(param_1);
      if (lVar5 == 0) goto LAB_02e6fe44;
      uVar4 = *(undefined8 *)(lVar5 + 0x40);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar6 = FUN_03923030(uVar4,0);
      if ((uVar6 & 1) != 0) {
        lVar5 = System_Runtime_Serialization_Formatters_Binary_SerStack___ctor(param_1);
        if (lVar5 == 0) goto LAB_02e6fe44;
        FUN_02e64fcc(param_1,*(undefined8 *)(lVar5 + 0x40));
      }
    }
    puVar1 = StringLiteral_5693;
    FUN_02e6fe48(param_1,1);
    lVar5 = FUN_01e8b2d4(param_1,*(undefined8 *)puVar1);
    param_1[0x15] = lVar5;
    thunk_FUN_01b4f09c(param_1 + 0x15,lVar5);
    return;
  }
LAB_02e6fe44:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


