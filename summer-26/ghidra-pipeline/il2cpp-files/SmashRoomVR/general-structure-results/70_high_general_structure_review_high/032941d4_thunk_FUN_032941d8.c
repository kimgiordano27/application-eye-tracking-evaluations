/*
FUNCTION_NAME: thunk_FUN_032941d8
ENTRY_POINT: 032941d4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void thunk_FUN_032941d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if ((DAT_03ff576e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_3836);
    thunk_FUN_01ad9084(PTR_DAT_03d84240);
    thunk_FUN_01ad9084(PTR_DAT_03d85ee8);
    thunk_FUN_01ad9084(PTR_DAT_03d85ef0);
    thunk_FUN_01ad9084(PTR_DAT_03d85ef8);
    DAT_03ff576e = 1;
  }
  puVar1 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    lVar4 = *(long *)
             Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
    ;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      lVar4 = thunk_FUN_01ac7298();
    }
    iVar3 = FUN_0325d594(lVar4,0);
    puVar2 = StringLiteral_3836;
    if (iVar3 == 0) {
      uStack_40 = 0;
      lVar4 = *(long *)StringLiteral_3836;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      puVar7 = *(undefined8 **)(lVar4 + 0xb8);
      uStack_48 = *(undefined8 *)((long)puVar7 + 0x14);
      uStack_2c = (undefined4)((ulong)*(undefined8 *)((long)puVar7 + 0xc) >> 0x20);
      uStack_34 = (undefined4)puVar7[1];
      uStack_30 = (undefined4)((ulong)puVar7[1] >> 0x20);
      uStack_3c = (undefined4)*puVar7;
      uStack_38 = (undefined4)((ulong)*puVar7 >> 0x20);
      uStack_58 = CONCAT44(uStack_34,uStack_38);
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      uStack_50 = CONCAT44(uStack_2c,uStack_30);
      uStack_28 = uStack_48;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      uStack_68 = uStack_48;
      uStack_70 = uStack_50;
      iVar3 = FUN_0325d8c8(&uStack_80,param_1 + 200,0);
      if (iVar3 == 0) {
        FUN_032944f8(param_1,*(undefined4 *)(param_1 + 0x50));
        if (*(char *)(param_1 + 0x108) == '\0') {
          *(undefined1 *)(param_1 + 0x108) = 1;
          uVar6 = FUN_03295320(param_1);
          if ((uVar6 & 1) == 0) {
            FUN_03294068(param_1);
            return;
          }
          FUN_03295a04(param_1);
        }
        uVar5 = *(undefined8 *)(param_1 + 0x128);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_0391f968(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(param_1 + 0x128) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_03293744(param_1,*(undefined8 *)(*(long *)(param_1 + 0x128) + 0x180));
        }
        goto LAB_03294264;
      }
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar3);
      uStack_60 = *(undefined8 *)PTR_DAT_03d84240;
      uStack_58 = 0xffffffffffffffff;
      uVar5 = FUN_030750fc(&uStack_60,0);
      uVar5 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d85ef0,uVar5,0);
    }
    else {
      uStack_50 = CONCAT44(uStack_50._4_4_,iVar3);
      uStack_60 = *(undefined8 *)PTR_DAT_03d84240;
      uStack_58 = 0xffffffffffffffff;
      uVar5 = FUN_030750fc(&uStack_60,0);
      uVar5 = FUN_02ee6c30(*(undefined8 *)PTR_DAT_03d85ef8,uVar5,*(undefined8 *)PTR_DAT_03d85ee8,0);
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        );
    }
    FUN_038f2e04(uVar5,0);
  }
  else {
LAB_03294264:
    FUN_03295a5c(param_1,1);
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  return;
}


