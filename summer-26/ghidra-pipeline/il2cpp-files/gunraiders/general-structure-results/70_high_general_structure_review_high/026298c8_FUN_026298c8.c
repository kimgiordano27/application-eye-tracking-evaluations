/*
FUNCTION_NAME: FUN_026298c8
ENTRY_POINT: 026298c8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void FUN_026298c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeMediaServices_TypeInfo;
  if ((DAT_04530490 & 1) == 0) {
    FUN_01c5d288(
                VoxelBusters_EssentialKit_AddressBookCore_Android_NativeRequestContactsPermissionListener_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeRequestGalleryAccessListener_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_BillingServicesCore_Android_NativeRestorePurchasesListener_TypeInfo
                );
    FUN_01c5d288(
                VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeSaveAssetToGalleryListener_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeMediaServices_TypeInfo);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeScheduleNotificationListener_TypeInfo
                );
    FUN_01c5d288(VoxelBusters_EssentialKit_SharingServicesCore_Android_NativeShareSheet_TypeInfo);
    FUN_01c5d288(PTR_DAT_04231958);
    DAT_04530490 = 1;
  }
  lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03f2fde0(lVar3,0);
  puVar1 = 
  VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeSaveAssetToGalleryListener_TypeInfo;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) =
         *(undefined8 *)
          VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeScheduleNotificationListener_TypeInfo
    ;
    *(long *)(param_1 + 0x18) = lVar3;
    lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03f41794(lVar3,0);
    puVar1 = 
    VoxelBusters_EssentialKit_BillingServicesCore_Android_NativeRestorePurchasesListener_TypeInfo;
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)
               VoxelBusters_EssentialKit_SharingServicesCore_Android_NativeShareSheet_TypeInfo;
      *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      *(long *)(param_1 + 0x20) = lVar3;
      puVar2 = 
      VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_TypeInfo
      ;
      lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_02625f74(lVar3,*(undefined8 *)puVar2);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)PTR_DAT_04231958;
        *(undefined4 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x10) = uVar4;
        *(long *)(param_1 + 0x28) = lVar3;
        FUN_03f428e4(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


