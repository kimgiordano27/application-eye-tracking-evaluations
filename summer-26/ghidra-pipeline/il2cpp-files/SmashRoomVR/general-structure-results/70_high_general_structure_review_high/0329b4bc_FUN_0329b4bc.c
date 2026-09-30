/*
FUNCTION_NAME: FUN_0329b4bc
ENTRY_POINT: 0329b4bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_0329b4bc(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long param_5)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((DAT_03ff57d3 & 1) == 0) {
    thunk_FUN_01ad9084(Method_TMPro_TMP_Text_<>c_<_ctor>b__622_0__);
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d86250);
    DAT_03ff57d3 = 1;
  }
  fVar5 = (float)FUN_03925ca4(0);
  puVar1 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__;
  if (fVar5 <= *(float *)(param_5 + 0x24)) {
    return;
  }
  fVar5 = (float)FUN_03925ca4(0);
  fVar7 = *(float *)(param_5 + 0x20);
  *(float *)(param_5 + 0x24) = fVar5 + fVar7;
  lVar3 = FUN_01e8a9f8(param_5,*(undefined8 *)puVar1);
  if ((lVar3 != 0) && (lVar3 = FUN_038fe800(lVar3,0), lVar3 != 0)) {
    fVar5 = (float)FUN_038ff260(lVar3,0);
    bVar2 = DAT_00b55084 <=
            (param_4 + -1.0) * (param_4 + -1.0) +
            param_3 * param_3 + fVar5 * fVar5 + (fVar7 + -1.0) * (fVar7 + -1.0);
    uVar6 = 0x3f800000;
    if (bVar2) {
      uVar6 = 0;
    }
    uVar8 = 0;
    if (bVar2) {
      uVar8 = 0x3f800000;
    }
    FUN_038ff380(uVar6,uVar8,0,0x3f800000,lVar3,0);
    lVar3 = FUN_01e8a9f8(param_5,*(undefined8 *)Method_TMPro_TMP_Text_<>c_<_ctor>b__622_0__);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_03922f24(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2e04(*(undefined8 *)PTR_DAT_03d86250,0);
      return;
    }
    if (lVar3 != 0) {
      FUN_038ea890(lVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


