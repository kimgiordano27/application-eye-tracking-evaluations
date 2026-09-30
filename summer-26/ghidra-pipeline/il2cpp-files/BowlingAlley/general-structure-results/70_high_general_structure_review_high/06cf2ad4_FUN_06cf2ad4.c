/*
FUNCTION_NAME: FUN_06cf2ad4
ENTRY_POINT: 06cf2ad4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_06cf2ad4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ushort local_84 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterTax__;
  if ((DAT_076e97e1 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Firebase_Crashlytics_FirebaseCrashlyticsFrame_get_symbol__);
    thunk_FUN_032e1da0(
                      Method_Firebase_Crashlytics_FirebaseCrashlyticsInternal_IsCrashlyticsCollectionEnabled__
                      );
    thunk_FUN_032e1da0(Method_Firebase_Crashlytics_FirebaseCrashlyticsInternal_Log__);
    thunk_FUN_032e1da0(Method_Firebase_Crashlytics_FirebaseCrashlyticsInternal_LogException__);
    thunk_FUN_032e1da0(Method_Firebase_Analytics_FirebaseAnalytics_get_ParameterTax__);
    DAT_076e97e1 = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  iVar5 = FUN_04621ab0(param_2 + 0x20,*(undefined8 *)puVar1);
  puVar4 = Method_Firebase_Crashlytics_FirebaseCrashlyticsInternal_LogException__;
  if (iVar5 < 1) {
    return;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_84[0] = 0;
  if (param_1 != 0) {
    uVar6 = FUN_04623ae0(param_2 + 0x10,
                         *(undefined8 *)
                          Method_Firebase_Crashlytics_FirebaseCrashlyticsInternal_LogException__);
    uVar7 = FUN_04621ab0(param_2 + 0x20,*(undefined8 *)puVar1);
    puVar3 = Method_Firebase_Crashlytics_FirebaseCrashlyticsInternal_Log__;
    puVar2 = 
    Method_Firebase_Crashlytics_FirebaseCrashlyticsInternal_IsCrashlyticsCollectionEnabled__;
    if (param_3 != 0) {
      uVar13 = *(undefined8 *)(param_3 + 0x110);
      if (*(int *)(*(long *)Method_Firebase_Crashlytics_FirebaseCrashlyticsFrame_get_symbol__ + 0xe0
                  ) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06cf1d08((undefined8 *)(param_1 + 0x108),uVar6,uVar7,uVar13,&local_70,&local_80,local_84,
                   param_4);
      uVar13 = FUN_03ae28c4(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                            *(undefined8 *)puVar3);
      uVar13 = FUN_0596f538(uVar13,0);
      uVar9 = FUN_03ae28c4(local_70,uStack_68,*(undefined8 *)puVar3);
      uVar9 = FUN_0596f538(uVar9,0);
      uVar8 = FUN_04623ae0(&local_70,*(undefined8 *)puVar4);
      uVar10 = FUN_03ae28b0(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                            *(undefined8 *)puVar2);
      uVar10 = FUN_0596f538(uVar10,0);
      uVar11 = FUN_03ae28b0(local_80,uStack_78,*(undefined8 *)puVar2);
      uVar11 = FUN_0596f538(uVar11,0);
      uVar6 = FUN_04621ab0(&local_80,*(undefined8 *)puVar1);
      local_b0 = (ulong)uVar8;
      local_98 = CONCAT44((uint)local_84[0] - *(int *)(param_2 + 0x30),uVar6);
      local_c0 = uVar13;
      uStack_b8 = uVar9;
      uStack_a8 = uVar10;
      uStack_a0 = uVar11;
      if (*(long *)(param_3 + 0x138) != 0) {
        FUN_06cdbc50(*(long *)(param_3 + 0x138),&local_c0,0);
        if (*(long *)(param_2 + 8) != 0) {
          *(undefined8 *)(*(long *)(param_2 + 8) + 0x50) = *(undefined8 *)(param_1 + 0x108);
          thunk_FUN_0333a630();
          lVar12 = *(long *)(param_2 + 8);
          uVar6 = FUN_04621ab0(&local_80,*(undefined8 *)puVar1);
          if (lVar12 != 0) {
            *(undefined4 *)(lVar12 + 0x5c) = uVar6;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


