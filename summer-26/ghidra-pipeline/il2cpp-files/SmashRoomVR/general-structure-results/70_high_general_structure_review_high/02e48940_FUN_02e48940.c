/*
FUNCTION_NAME: FUN_02e48940
ENTRY_POINT: 02e48940
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_02e48940(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float local_34;
  undefined8 local_28;
  
  if ((DAT_03ff02c3 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff02c3 = 1;
  }
  local_28 = 0;
  local_34 = 0.0;
  FUN_02e48828(param_1,(long)&local_28 + 4,&local_28,&local_34);
  if ((*(char *)(param_1 + 0x76) != '\0') || (local_28._4_4_ <= (float)local_28)) {
    if ((*(char *)(param_1 + 0x78) != '\0') || ((float)local_28 <= local_28._4_4_)) {
      if ((*(char *)(param_1 + 0x76) == '\0') || ((float)local_28 - local_34 <= local_28._4_4_)) {
        if ((*(char *)(param_1 + 0x78) != '\0') && ((float)local_28 + local_34 < local_28._4_4_)) {
          *(undefined1 *)(param_1 + 0x78) = 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x76) = 0;
      }
      goto LAB_02e48b28;
    }
    *(undefined1 *)(param_1 + 0x78) = 1;
    if (DAT_03fed51b == '\0') {
      thunk_FUN_01ad9084(
                        Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                        );
      DAT_03fed51b = '\x01';
    }
    puVar1 = 
    Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
    ;
    uVar4 = **(undefined8 **)
              (*(long *)
                Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
              + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_02e48b28;
    if (DAT_03fed51b == '\0') {
      thunk_FUN_01ad9084(
                        Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                        );
      DAT_03fed51b = '\x01';
    }
    lVar3 = *(long *)puVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
  }
  else {
    *(undefined1 *)(param_1 + 0x76) = 1;
    if (DAT_03fed51b == '\0') {
      thunk_FUN_01ad9084(
                        Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                        );
      DAT_03fed51b = '\x01';
    }
    puVar1 = 
    Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
    ;
    uVar4 = **(undefined8 **)
              (*(long *)
                Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
              + 0xb8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(uVar4,0);
    if ((uVar2 & 1) == 0) goto LAB_02e48b28;
    if (DAT_03fed51b == '\0') {
      thunk_FUN_01ad9084(
                        Field_<PrivateImplementationDetails>_B5D565C4D932EDF37E8039156FB4F9391D01A5EA20FCD322DB107B5FB01AF5F3
                        );
      DAT_03fed51b = '\x01';
    }
    lVar3 = *(long *)puVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
  }
  lVar5 = **(long **)(lVar3 + 0xb8);
  lVar3 = FUN_0391c27c(param_1,0);
  if ((lVar3 == 0) || (FUN_03928d34(lVar3,0), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  FUN_02df26c0(lVar5,uVar4,0);
LAB_02e48b28:
  *(undefined1 *)(param_1 + 0x77) = *(undefined1 *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_1 + 0x76);
  return;
}


