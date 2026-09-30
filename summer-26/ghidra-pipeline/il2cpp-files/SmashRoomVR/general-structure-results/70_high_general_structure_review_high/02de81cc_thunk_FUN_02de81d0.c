/*
FUNCTION_NAME: thunk_FUN_02de81d0
ENTRY_POINT: 02de81cc
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


void thunk_FUN_02de81d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = StringLiteral_3990;
  if ((DAT_03feffd6 & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__);
    thunk_FUN_01ad9084(StringLiteral_3990);
    thunk_FUN_01ad9084(StringLiteral_3966);
    thunk_FUN_01ad9084(StringLiteral_4241);
    thunk_FUN_01ad9084(StringLiteral_4242);
    thunk_FUN_01ad9084(StringLiteral_4243);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_F83B332BE4E6A5A4B1C56AAF6DB52657DA495E149870057D8590AB9D7A6167AD
                      );
    DAT_03feffd6 = 1;
  }
  lVar2 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar1);
  plVar6 = (long *)(param_1 + 0x30);
  *plVar6 = lVar2;
  thunk_FUN_01b4f09c(plVar6,lVar2);
  puVar1 = StringLiteral_4242;
  if (*plVar6 != 0) {
    lVar2 = *(long *)(*plVar6 + 0x188);
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Field_<PrivateImplementationDetails>_E17B8359E685992B0DE6242AAA24FCB7404173CBB7FF8646FF7D658139F41B5F
                              );
    FUN_02200c24(uVar3,param_1,*(undefined8 *)puVar1,0);
    if (lVar2 != 0) {
      FUN_02224644(lVar2,uVar3,
                   *(undefined8 *)
                    Field_<PrivateImplementationDetails>_F83B332BE4E6A5A4B1C56AAF6DB52657DA495E149870057D8590AB9D7A6167AD
                  );
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*plVar6 != 0) {
        uVar3 = *(undefined8 *)(*plVar6 + 0x1f8);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar3,0);
        if ((uVar4 & 1) == 0) {
          lVar2 = *plVar6;
          if ((lVar2 == 0) || (lVar5 = FUN_0391c2b8(lVar2,0), lVar5 == 0)) goto LAB_02de83f4;
          uVar3 = FUN_01ed7044(lVar5,*(undefined8 *)StringLiteral_4241);
          *(undefined8 *)(lVar2 + 0x1f8) = uVar3;
          thunk_FUN_01b4f09c(lVar2 + 0x1f8);
        }
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_03923030(uVar3,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        lVar2 = *(long *)(param_1 + 0x20);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x1b0) = *(undefined8 *)(param_1 + 0x30);
          thunk_FUN_01b4f09c(lVar2 + 0x1b0);
          uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                      Method_System_Threading_ReaderWriterLockSlim_TimeoutTracker__ctor__
                                    );
          FUN_02fd7524(uVar3,param_1,*(undefined8 *)StringLiteral_4243,0);
          if (*(int *)(*(long *)StringLiteral_3966 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_02dcd994(param_1,uVar3,0);
          return;
        }
      }
    }
  }
LAB_02de83f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


