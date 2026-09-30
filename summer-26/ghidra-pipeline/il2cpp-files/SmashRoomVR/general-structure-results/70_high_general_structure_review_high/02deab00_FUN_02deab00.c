/*
FUNCTION_NAME: FUN_02deab00
ENTRY_POINT: 02deab00
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_17;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_02deab00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int local_44;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fefff0 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_375);
    thunk_FUN_01ad9084(StringLiteral_376);
    thunk_FUN_01ad9084(StringLiteral_377);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                      );
    thunk_FUN_01ad9084(StringLiteral_378);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_4255);
    thunk_FUN_01ad9084(StringLiteral_4256);
    thunk_FUN_01ad9084(StringLiteral_379);
    DAT_03fefff0 = 1;
  }
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_0391f968(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    uVar3 = thunk_FUN_02ee6388(param_6,*(undefined8 *)(param_5 + 0x30),0);
    if ((uVar3 & 1) == 0) {
      lVar10 = thunk_FUN_01afaadc(*(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fedc(lVar10,0);
      if ((lVar10 == 0) || (lVar5 = FUN_0391fab4(lVar10,0), lVar5 == 0)) goto LAB_02deafac;
      FUN_039294c8(lVar5,*(undefined8 *)(param_5 + 0x20),0);
      lVar5 = FUN_0391fab4(lVar10,0);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      if (lVar5 == 0) goto LAB_02deafac;
      puVar7 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      FUN_039282dc(*puVar7,puVar7[1],puVar7[2],lVar5,0);
      lVar5 = FUN_0391fab4(lVar10,0);
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      if (lVar5 == 0) goto LAB_02deafac;
      lVar8 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar8 + 0xc),*(undefined4 *)(lVar8 + 0x10),
                   *(undefined4 *)(lVar8 + 0x14),lVar5,0);
      lVar5 = FUN_0391fab4(lVar10,0);
      if (lVar5 == 0) goto LAB_02deafac;
      FUN_0392316c(lVar5,*(undefined8 *)StringLiteral_4256,0);
      plVar4 = (long *)FUN_01ed7044(lVar10,*(undefined8 *)StringLiteral_377);
      uVar9 = *(undefined8 *)StringLiteral_375;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                          );
      }
      uVar9 = FUN_0304eec0(uVar9,0);
      plVar6 = (long *)FUN_0391a6e8(uVar9,*(undefined8 *)StringLiteral_4255,0);
      if (plVar4 == (long *)0x0) goto LAB_02deafac;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else if (*plVar6 != *(long *)StringLiteral_376) {
        plVar6 = (long *)0x0;
      }
      FUN_03b1bbc8(plVar4,plVar6,0);
      (**(code **)(*plVar4 + 0x2a8))
                (param_1,param_2,param_3,param_4,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
      FUN_03b1c094(plVar4,2,0);
      FUN_03b1c104(plVar4,0,0);
      FUN_03b1c174(plVar4,1,0);
      (**(code **)(*plVar4 + 0x5e8))(plVar4,param_6,*(undefined8 *)(*plVar4 + 0x5f0));
      lVar10 = FUN_01ed712c(lVar10,*(undefined8 *)
                                    Field_<PrivateImplementationDetails>_5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
                           );
      if (DAT_03fed258 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed258 = '\x01';
      }
      if (lVar10 == 0) goto LAB_02deafac;
      lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
      FUN_039293f4(*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                   *(undefined4 *)(lVar5 + 0x14),lVar10,0);
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar7 = *(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      FUN_03929060(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar10,0);
      *(undefined4 *)(param_5 + 0x38) = 1;
    }
    else {
      lVar10 = *(long *)(param_5 + 0x20);
      if (lVar10 == 0) {
LAB_02deafac:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      iVar2 = FUN_0392a654(lVar10,0);
      lVar10 = FUN_0392a9fc(lVar10,iVar2 + -1,0);
      if ((lVar10 == 0) || (lVar10 = FUN_0391c2b8(lVar10,0), lVar10 == 0)) goto LAB_02deafac;
      plVar4 = (long *)FUN_01ed712c(lVar10,*(undefined8 *)StringLiteral_378);
      local_44 = *(int *)(param_5 + 0x38) + 1;
      *(int *)(param_5 + 0x38) = local_44;
      uVar9 = thunk_FUN_01afa70c(*(undefined8 *)
                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                 ,&local_44);
      uVar9 = FUN_02ee7120(*(undefined8 *)StringLiteral_379,uVar9,param_6,0);
      if (plVar4 == (long *)0x0) goto LAB_02deafac;
      (**(code **)(*plVar4 + 0x5e8))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x5f0));
    }
    *(undefined8 *)(param_5 + 0x30) = param_6;
    thunk_FUN_01b4f09c((undefined8 *)(param_5 + 0x30),param_6);
    FUN_02deb068(param_5);
  }
  return;
}


