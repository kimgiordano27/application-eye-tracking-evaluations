/*
FUNCTION_NAME: FUN_0328290c
ENTRY_POINT: 0328290c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_0328290c(long param_1,ulong param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  char local_34 [4];
  
  if ((DAT_03ff56c0 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__);
    thunk_FUN_01ad9084(StringLiteral_2645);
    thunk_FUN_01ad9084(PTR_DAT_03d85528);
    thunk_FUN_01ad9084(PTR_DAT_03d85530);
    thunk_FUN_01ad9084(PTR_DAT_03d850a8);
    thunk_FUN_01ad9084(PTR_DAT_03d850b0);
    thunk_FUN_01ad9084(StringLiteral_2273);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d85538);
    thunk_FUN_01ad9084(PTR_DAT_03d85540);
    thunk_FUN_01ad9084(PTR_DAT_03d854f0);
    thunk_FUN_01ad9084(PTR_DAT_03d85548);
    DAT_03ff56c0 = 1;
  }
  puVar3 = StringLiteral_2273;
  local_34[0] = '\0';
  local_38[0] = 0;
  local_3c[0] = 0;
  local_40[0] = 0;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      cVar4 = FUN_03279ca0();
      if (cVar4 == '\0') {
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      local_60 = param_3[1];
      uStack_58 = param_3[2];
      uVar10 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2645,&local_60);
      uVar10 = FUN_02ee7120(*(undefined8 *)PTR_DAT_03d85538,*(undefined8 *)PTR_DAT_03d85548,uVar10,0
                           );
      uVar6 = FUN_0391c2b8(param_1,0);
      FUN_0327ce00(uVar6,*(undefined8 *)PTR_DAT_03d854f0,uVar10,uVar6);
      return;
    }
    goto LAB_03282d04;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = *param_3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0325ff50(uVar10,3,local_34,local_40,0);
  FUN_0325ff50(*param_3,4,local_38,local_40,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar10 = *param_3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_0325ff50(uVar10,0x3b9ee4c8,local_3c,local_40,0);
  if ((local_34[0] == '\0') || ((local_3c[0] | local_38[0]) == 1)) {
    lVar5 = *(long *)(param_1 + 0x58);
    if (local_38[0] != 0) {
      if (lVar5 == 0) goto LAB_03282d04;
      puVar9 = (undefined8 *)(lVar5 + 0x28);
      bVar1 = true;
      goto LAB_03282b74;
    }
    local_50 = param_3[2];
    uStack_58 = param_3[1];
    local_60 = *param_3;
    if (lVar5 == 0) goto LAB_03282d04;
    uVar10 = 0;
    bVar1 = true;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 == 0) goto LAB_03282d04;
    bVar1 = false;
    puVar9 = (undefined8 *)(lVar5 + 0x20);
LAB_03282b74:
    local_50 = param_3[2];
    uStack_58 = param_3[1];
    local_60 = *param_3;
    uVar10 = *puVar9;
  }
  local_70 = local_50;
  uStack_78 = uStack_58;
  local_80 = local_60;
  lVar5 = FUN_0327cebc(lVar5,&local_80,uVar10);
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar7 = FUN_0391f968(lVar5,0,0);
  if ((uVar7 & 1) != 0) {
    if (lVar5 == 0) goto LAB_03282d04;
    lVar8 = FUN_0391c27c(lVar5,0);
    uVar10 = FUN_0391c27c(param_1,0);
    if (lVar8 == 0) goto LAB_03282d04;
    FUN_039294c8(lVar8,uVar10,0);
    if (!bVar1) {
      uVar10 = FUN_01e8a9f8(lVar5,*(undefined8 *)
                                   Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__4__
                           );
      FUN_03282d08(param_1,uVar10);
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_02b5b3cc(*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)PTR_DAT_03d85528);
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar10 = FUN_02b5b460(*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_03d85530);
      *(undefined8 *)(param_1 + 0x30) = uVar10;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x30),uVar10);
      if (*(long *)(param_1 + 0x58) != 0) {
        cVar4 = FUN_03279ca0();
        if (cVar4 != '\0') {
          uVar10 = FUN_0391c2b8(param_1,0);
          FUN_0327abc0(uVar10,*(undefined8 *)PTR_DAT_03d854f0,*(undefined8 *)PTR_DAT_03d85540,uVar10
                      );
        }
        if (*(long *)(param_1 + 0x58) != 0) {
          FUN_0327a98c();
          return;
        }
      }
    }
  }
LAB_03282d04:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


