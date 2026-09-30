/*
FUNCTION_NAME: FUN_03125128
ENTRY_POINT: 03125128
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


void FUN_03125128(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_03ff1def & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_64B3E7D737AFF47D4C3BBD81D2D06D697DDD8EB60F29E13E4425D19D8BBCA1F7
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_2D28E0C827135BA57297EC1D6D2FE798FCC03D22F2E7E7121E34F92B2F70A715
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_DCEC33FCEDA5E34B6F14DC5F3DC5CB4804258F1277077DA81E0F7B9388F62D4A
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1def = 1;
  }
  plVar8 = (long *)(param_1 + 0x20);
  if (*plVar8 == 0) {
    uVar2 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                  Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar3 = FUN_0391f968(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_DCEC33FCEDA5E34B6F14DC5F3DC5CB4804258F1277077DA81E0F7B9388F62D4A
                                );
      FUN_02b591b0(lVar4,*(undefined8 *)
                          Field_<PrivateImplementationDetails>_2D28E0C827135BA57297EC1D6D2FE798FCC03D22F2E7E7121E34F92B2F70A715
                  );
      if (lVar4 != 0) {
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar7 = *(long *)
                 Field_<PrivateImplementationDetails>_64B3E7D737AFF47D4C3BBD81D2D06D697DDD8EB60F29E13E4425D19D8BBCA1F7
        ;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar5 = uVar2;
            thunk_FUN_01b4f09c(puVar5,uVar2);
          }
          else {
            FUN_02b599e4(lVar4,uVar2,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *plVar8 = lVar4;
          thunk_FUN_01b4f09c(plVar8,lVar4);
          goto LAB_03125278;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
LAB_03125278:
  FUN_03120f88(param_1);
  return;
}


