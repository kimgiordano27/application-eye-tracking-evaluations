/*
FUNCTION_NAME: FUN_030e6c54
ENTRY_POINT: 030e6c54
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable
*/


uint FUN_030e6c54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_1 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar2 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_AddressBookCore_RequestContactsAccessInternalCallback_TypeInfo
                              );
    FUN_0323fc78(uVar2,uVar3,0);
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      lVar1 = FUN_030e59c8(param_1);
      if (lVar1 != 0) {
        uVar5 = 0;
        uVar4 = 0;
        do {
          if ((long)*(int *)(lVar1 + 0x18) <= (long)uVar5) {
            return uVar4;
          }
          lVar1 = FUN_030e59c8(param_1);
          if (lVar1 == 0) break;
          if (*(uint *)(lVar1 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          lVar1 = lVar1 + uVar5;
          uVar5 = uVar5 + 1;
          uVar4 = (uint)*(byte *)(lVar1 + 0x20) | uVar4 << 8;
          lVar1 = FUN_030e59c8(param_1);
        } while (lVar1 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    thunk_FUN_01c273e8(PTR_DAT_0423a628);
    uVar2 = thunk_FUN_01c496e0();
    uVar3 = thunk_FUN_01c273e8(
                              VoxelBusters_EssentialKit_MediaServicesCore_RequestGalleryAccessInternalCallback_TypeInfo
                              );
    FUN_032baa68(uVar2,uVar3,0);
  }
  uVar3 = thunk_FUN_01c273e8(
                            VoxelBusters_EssentialKit_NotificationServicesCore_RequestPermissionInternalCallback_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar3);
}


