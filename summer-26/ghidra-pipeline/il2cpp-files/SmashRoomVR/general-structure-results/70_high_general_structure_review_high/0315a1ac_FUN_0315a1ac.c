/*
FUNCTION_NAME: FUN_0315a1ac
ENTRY_POINT: 0315a1ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_11;telemetry_or_network_hits_4
*/


void FUN_0315a1ac(long param_1,undefined4 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff2025 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d80500);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff2025 = 1;
  }
  puVar2 = Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_0391c27c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  lVar4 = FUN_01f25880(uVar6,uVar3,*(undefined8 *)puVar2);
  if (lVar4 != 0) {
    lVar4 = FUN_01ed712c(lVar4,*(undefined8 *)PTR_DAT_03d80500);
    uVar7 = 0x3f800000;
    if ((param_3 & 1) == 0) {
      uVar7 = 0;
    }
    if (lVar4 != 0) {
      FUN_0315a340(0,0,uVar7,0x3f800000,lVar4,param_2,param_3 & 1,param_1);
      lVar4 = FUN_0391c27c(lVar4,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      if (lVar4 != 0) {
        puVar5 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        FUN_03929060(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar4,0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar5 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_039282dc(*puVar5,puVar5[1],puVar5[2],lVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


