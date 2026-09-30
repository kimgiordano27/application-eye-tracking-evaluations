/*
FUNCTION_NAME: FUN_01bf8f84
ENTRY_POINT: 01bf8f84
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_21;telemetry_or_network_hits_8
*/


void FUN_01bf8f84(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if ((DAT_03fed333 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<>c__DisplayClass119_0_<HandleUnload>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<>c__DisplayClass54_0_<WaitForCompletion>b__0__
                      );
    DAT_03fed333 = 1;
  }
  if (param_6 != 0) {
    uVar5 = FUN_0391c2b8(param_6,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    puVar4 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    puVar10 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    uVar15 = *puVar10;
    uVar14 = puVar10[1];
    uVar13 = puVar10[2];
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__;
    puVar10 = *(undefined4 **)
               (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
               0xb8);
    uVar12 = *puVar10;
    uVar11 = puVar10[1];
    uVar17 = puVar10[2];
    uVar16 = puVar10[3];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar6 = FUN_01f259b0(uVar15,uVar14,uVar13,uVar12,uVar11,uVar17,uVar16,uVar5,
                         *(undefined8 *)puVar1);
    uVar5 = FUN_039230bc(param_6,0);
    puVar1 = Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<>c__DisplayClass119_0_<HandleUnload>b__0__;
    if (lVar6 != 0) {
      FUN_0392316c(lVar6,uVar5,0);
      lVar7 = FUN_01ed712c(lVar6,*(undefined8 *)puVar1);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x44) = param_1;
        *(undefined4 *)(lVar7 + 0x48) = param_2;
        *(int *)(lVar7 + 0x4c) = (int)param_3;
        uVar8 = FUN_03922f24(lVar7,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f2e04(*(undefined8 *)
                        Method_Meta_WitAi_TTS_Utilities_TTSSpeaker_<>c__DisplayClass54_0_<WaitForCompletion>b__0__
                       ,0);
          return;
        }
        uVar5 = FUN_01bf9d90(param_1,param_2,param_3,param_4,lVar7);
        lVar9 = FUN_01ed712c(lVar6,*(undefined8 *)
                                    Method_System_Collections_Stack_StackEnumerator_get_Current__);
        if (lVar9 != 0) {
          FUN_03900dc8(lVar9,uVar5,0);
          lVar9 = FUN_03900d8c(lVar9,0);
          if (lVar9 != 0) {
            FUN_03904ddc(lVar9,0);
            lVar9 = FUN_0391fab4(lVar6,0);
            if ((param_5 != 0) && (uVar5 = FUN_0391fab4(param_5,0), lVar9 != 0)) {
              FUN_039294c8(lVar9,uVar5,0);
              lVar9 = FUN_0391fab4(lVar6,0);
              if (DAT_03fed257 == '\0') {
                thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                DAT_03fed257 = '\x01';
              }
              if (lVar9 != 0) {
                puVar10 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
                FUN_039282dc(*puVar10,puVar10[1],puVar10[2],lVar9,0);
                lVar6 = FUN_0391fab4(lVar6,0);
                if (DAT_03fed256 == '\0') {
                  thunk_FUN_01ad9084(
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                    );
                  DAT_03fed256 = '\x01';
                }
                if (lVar6 != 0) {
                  puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                  FUN_03929060(*puVar10,puVar10[1],puVar10[2],puVar10[3],lVar6,0);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_03923a90(lVar7,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


