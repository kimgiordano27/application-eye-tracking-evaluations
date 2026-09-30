/*
FUNCTION_NAME: FUN_01bf87a0
ENTRY_POINT: 01bf87a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_01bf87a0(undefined1 param_1 [16],ulong param_2,ulong param_3,undefined4 param_4,
                 long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint local_80;
  float fStack_7c;
  uint local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  long local_28;
  
  if ((DAT_03fed326 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__5__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__6__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass53_0_<OnStreamBegin>b__0__)
    ;
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass53_0_<OnStreamBegin>b__1__)
    ;
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass62_0_<OnStreamReady>b__0__)
    ;
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass62_0_<OnStreamReady>b__1__)
    ;
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__3__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass79_0_<DownloadToDiskCache>b__0__
                      );
    DAT_03fed326 = 1;
  }
  local_28 = 0;
  uVar2 = FUN_01bf8bfc(param_5,&local_28);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = FUN_0391c27c(param_5,0);
  if (lVar3 == 0) goto LAB_01bf8bf8;
  local_60 = FUN_03928d34(lVar3,0);
  local_5c = (float)param_2;
  local_58 = (undefined4)param_3;
  uVar2 = param_2;
  lVar3 = FUN_0391c27c(param_5,0);
  if (lVar3 == 0) goto LAB_01bf8bf8;
  local_70 = FUN_039274a0(lVar3,0);
  uStack_6c = (undefined4)uVar2;
  local_68 = (undefined4)param_3;
  uStack_64 = param_4;
  lVar3 = FUN_0391c27c(param_5,0);
  if (lVar3 == 0) goto LAB_01bf8bf8;
  local_80 = FUN_03929354(lVar3,0);
  fStack_7c = (float)uVar2;
  local_78 = (uint)param_3;
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_01bf8bf8;
  lVar3 = FUN_01e8a9f8(*(long *)(param_5 + 0x30),
                       *(undefined8 *)
                        Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__);
  if (*(long *)(param_5 + 0x30) == 0) goto LAB_01bf8bf8;
  lVar4 = FUN_01e8a9f8(*(long *)(param_5 + 0x30),
                       *(undefined8 *)
                        Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__5__);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar5 = FUN_03923030(lVar4,0);
  if ((uVar5 & 1) == 0) {
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed258 = '\x01';
    }
    lVar4 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    uVar9 = (ulong)*(uint *)(lVar4 + 0xc);
    uVar5 = (ulong)*(uint *)(lVar4 + 0x10);
    param_3 = (ulong)*(uint *)(lVar4 + 0x14);
  }
  else {
    if (lVar4 == 0) goto LAB_01bf8bf8;
    uVar9 = FUN_03283608(lVar4,0);
    uVar5 = uVar2;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03923030(uVar8,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03923030(lVar3,0);
    if ((uVar6 & 1) != 0) {
      if (lVar3 == 0) goto LAB_01bf8bf8;
      uVar9 = FUN_0327f108(lVar3,0);
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_01bf8bf8;
      uVar5 = uVar2;
      uVar6 = FUN_03284548(*(long *)(param_5 + 0x38),
                           *(undefined8 *)
                            Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass62_0_<OnStreamReady>b__0__
                           ,0);
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_5 + 0x38) == 0) goto LAB_01bf8bf8;
        uVar6 = FUN_03284548(*(long *)(param_5 + 0x38),
                             *(undefined8 *)
                              Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass79_0_<DownloadToDiskCache>b__0__
                             ,0);
        if ((uVar6 & 1) != 0) goto LAB_01bf8a28;
        uVar11 = 0x3f800000;
      }
      else {
LAB_01bf8a28:
        uVar8 = FUN_0391c27c(param_5,0);
        uVar10 = FUN_0327f108(lVar3,0);
        uVar2 = uVar5;
        lVar3 = FUN_0391c27c(param_5,0);
        if (lVar3 == 0) goto LAB_01bf8bf8;
        uVar7 = FUN_03928d34(lVar3,0);
        FUN_01bf8e2c(uVar10,uVar5,uVar2,uVar7,uVar8,&local_60,&local_70,&local_80);
        uVar9 = (ulong)local_80;
        uVar2 = (ulong)(uint)fStack_7c;
        local_5c = fStack_7c * 0.5 + local_5c;
        param_2 = (ulong)(uint)local_5c;
        uVar11 = local_78;
      }
      param_3 = (ulong)uVar11;
      if (*(long *)(param_5 + 0x38) == 0) goto LAB_01bf8bf8;
      uVar6 = FUN_03284548(*(long *)(param_5 + 0x38),
                           *(undefined8 *)
                            Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass53_0_<OnStreamBegin>b__0__
                           ,0);
      uVar5 = uVar2;
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_5 + 0x38) == 0) goto LAB_01bf8bf8;
        uVar2 = FUN_03284548(*(long *)(param_5 + 0x38),
                             *(undefined8 *)
                              Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__3__,0)
        ;
        if ((uVar2 & 1) == 0) {
          if (*(long *)(param_5 + 0x38) == 0) goto LAB_01bf8bf8;
          uVar2 = FUN_03284548(*(long *)(param_5 + 0x38),
                               *(undefined8 *)
                                Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass53_0_<OnStreamBegin>b__1__
                               ,0);
          if ((uVar2 & 1) == 0) goto LAB_01bf8b10;
        }
      }
      param_3 = (ulong)DAT_00b555a8;
    }
  }
LAB_01bf8b10:
  lVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                              Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
  FUN_0391fe00(lVar3,*(undefined8 *)
                      Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass62_0_<OnStreamReady>b__1__,0
              );
  if (lVar3 != 0) {
    lVar4 = FUN_0391fab4(lVar3,0);
    uVar8 = FUN_0391c27c(param_5,0);
    if (lVar4 != 0) {
      FUN_039294c8(lVar4,uVar8,0);
      lVar4 = FUN_0391fab4(lVar3,0);
      if (lVar4 != 0) {
        FUN_039297a8(local_60,param_2,local_58,local_70,uStack_6c,local_68,uStack_64,lVar4,0);
        lVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                    Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__6__
                                  );
        FUN_03081994(lVar4,0);
        if ((local_28 != 0) && (lVar4 != 0)) {
          FUN_01bf8f84(uVar9,uVar5,param_3,lVar4,lVar3,*(undefined8 *)(local_28 + 0x10));
          return;
        }
      }
    }
  }
LAB_01bf8bf8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


