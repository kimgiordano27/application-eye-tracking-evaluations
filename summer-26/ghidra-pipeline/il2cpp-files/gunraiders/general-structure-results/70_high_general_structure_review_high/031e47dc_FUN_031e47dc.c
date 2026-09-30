/*
FUNCTION_NAME: FUN_031e47dc
ENTRY_POINT: 031e47dc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_5
*/


void FUN_031e47dc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_04532640 & 1) == 0) {
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeReportProgressListener_OnSuccessDelegate_TypeInfo
                );
    DAT_04532640 = 1;
  }
  if ((0 < param_4) && (0 < param_2)) {
    if (param_3 != 0) {
      lVar2 = thunk_FUN_01c496e0(*(undefined8 *)
                                  VoxelBusters_EssentialKit_GameServicesCore_Android_NativeReportProgressListener_OnSuccessDelegate_TypeInfo
                                );
      FUN_03313b6c(lVar2,0);
      *(long *)(lVar2 + 0x10) = param_4;
      *(long *)(lVar2 + 0x18) = param_3;
      *(undefined4 *)(lVar2 + 0x20) = 4;
      FUN_031e430c(param_1,lVar2,param_2,param_4);
      return;
    }
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar4 = thunk_FUN_01c496e0();
    uVar5 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_BillingServicesCore_Android_NativeRestorePurchasesListener_OnFailureDelegate_TypeInfo
                              );
    FUN_0323fc78(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnSuccessDelegate_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar4,uVar5);
  }
  puVar1 = 
  VoxelBusters_EssentialKit_AddressBookCore_Android_NativeRequestContactsPermissionListener_OnSuccessDelegate_TypeInfo
  ;
  if (0 < param_2) {
    puVar1 = 
    VoxelBusters_EssentialKit_AddressBookCore_Android_NativeRequestContactsPermissionListener_OnFailureDelegate_TypeInfo
    ;
  }
  uVar4 = thunk_FUN_01c273e8(puVar1);
  uVar5 = thunk_FUN_01c273e8(
                            VoxelBusters_EssentialKit_MediaServicesCore_Android_NativeRequestGalleryAccessListener_OnCompleteDelegate_TypeInfo
                            );
  uVar5 = FUN_03313b64(uVar5,0);
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar3 = thunk_FUN_01c496e0();
  FUN_03243400(uVar3,uVar4,uVar5,0);
  uVar4 = thunk_FUN_01c273e8(
                            VoxelBusters_EssentialKit_NotificationServicesCore_Android_NativeRequestNotificationPermissionsListener_OnSuccessDelegate_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar4);
}


