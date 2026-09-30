/*
FUNCTION_NAME: FUN_03515244
ENTRY_POINT: 03515244
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_7;telemetry_or_network_hits_9
*/


long * FUN_03515244(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_3c;
  long local_38;
  
  puVar2 = Method_System_Collections_Generic_List<Unconsumed>_get_Count__;
  if ((DAT_045376b2 & 1) == 0) {
    FUN_01c5d288(Method_Oculus_Platform_Message<MatchmakingStats>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<MatchmakingStats>_get_Data__);
    FUN_01c5d288(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>__ctor__);
    FUN_01c5d288(PTR_DAT_04231d00);
    FUN_01c5d288(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__);
    FUN_01c5d288(Method_Oculus_Platform_Message<NetSyncConnection>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Unconsumed>_get_Count__);
    FUN_01c5d288(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    FUN_01c5d288(PTR_DAT_0422fd68);
    FUN_01c5d288(Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
    FUN_01c5d288(PTR_DAT_04236ef0);
    FUN_01c5d288(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__);
    DAT_045376b2 = 1;
  }
  local_3c = 0;
  local_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar3 = FUN_039e7114(param_2,&local_38,0);
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)FUN_03904c08(*(undefined8 *)(param_1 + 0x30),0);
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_Oculus_Platform_Message<MatchmakingStats>_get_Data__);
    FUN_0280e438(uVar4,param_1,
                 *(undefined8 *)Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__,0);
    FUN_022d68cc(plVar5,uVar4,
                 *(undefined8 *)Method_Oculus_Platform_Message<MatchmakingStats>__ctor__);
    uVar3 = FUN_03514fb8(param_1,3);
    puVar2 = Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__;
    if ((uVar3 & 1) != 0) {
      lVar7 = *(long *)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar7 = *(long *)puVar2;
      }
      lVar6 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar6 == 0) {
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar7 = *(long *)puVar2;
        }
        uVar4 = **(undefined8 **)(lVar7 + 0xb8);
        lVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                    Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__
                                  );
        FUN_02b6841c(lVar6,uVar4,
                     *(undefined8 *)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__,0);
        *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar6;
      }
      uVar4 = FUN_0234eea4(plVar5,lVar6,
                           *(undefined8 *)
                            Method_Oculus_Platform_Message<MicrophoneAvailabilityState>__ctor__);
      lVar7 = FUN_02355b80(uVar4,*(undefined8 *)PTR_DAT_04231d00);
      uVar4 = FUN_03153af8(*(undefined8 *)PTR_DAT_04236ef0,lVar7,0);
      uVar3 = FUN_03514fb8(param_1,3);
      if ((uVar3 & 1) != 0) {
        lVar6 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,5);
        if (lVar6 != 0) {
          if ((*(int *)(lVar6 + 0x18) == 0) ||
             (*(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_1 + 0x30),
             *(int *)(lVar6 + 0x18) == 1)) {
LAB_035157b8:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4ac();
          }
          *(undefined8 *)(lVar6 + 0x28) =
               *(undefined8 *)
                Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
          if (lVar7 != 0) {
            local_3c = (undefined4)*(undefined8 *)(lVar7 + 0x18);
            uVar8 = FUN_032cf308(&local_3c,0);
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (((uVar1 < 3) || (*(undefined8 *)(lVar6 + 0x30) = uVar8, uVar1 == 3)) ||
               (*(undefined8 *)(lVar6 + 0x38) =
                     *(undefined8 *)
                      Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__,
               uVar1 < 5)) goto LAB_035157b8;
            *(undefined8 *)(lVar6 + 0x40) = uVar4;
            uVar4 = FUN_031533cc(lVar6,0);
            if (*(long *)(param_1 + 0x10) != 0) {
              FUN_0350d01c(*(long *)(param_1 + 0x10),3,uVar4);
              return plVar5;
            }
          }
        }
        goto LAB_035157b4;
      }
    }
  }
  else {
    if (local_38 == 0) {
LAB_035157b4:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar4 = FUN_039e7708(local_38,0);
    if (((int)uVar4 == 0x17) || (uVar3 = FUN_035150a4(uVar4,param_2,&local_38), (uVar3 & 1) != 0)) {
      plVar5 = (long *)FUN_01c5d2fc(*(undefined8 *)
                                     Method_Oculus_Platform_Message<NetSyncConnection>__ctor__,1);
      lVar7 = local_38;
      if (plVar5 == (long *)0x0) goto LAB_035157b4;
      if ((local_38 != 0) &&
         (lVar6 = thunk_FUN_01c495e4(local_38,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar4,0);
      }
      if ((int)plVar5[3] == 0) goto LAB_035157b8;
      plVar5[4] = lVar7;
    }
    else {
      FUN_03514ffc(param_1,0x41a);
      plVar5 = (long *)0x0;
    }
  }
  return plVar5;
}


