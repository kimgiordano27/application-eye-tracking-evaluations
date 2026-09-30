/*
FUNCTION_NAME: FUN_059a53d0
ENTRY_POINT: 059a53d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_15;telemetry_or_network_hits_10;frame_or_lifecycle_behavior
*/


void FUN_059a53d0(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int local_6c;
  undefined8 local_68;
  
  if ((DAT_06bc1b7d & 1) == 0) {
    FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingStartResult>_get_Data__);
    FUN_02f08768(PTR_DAT_067cbf80);
    FUN_02f08768(PTR_DAT_067cbf70);
    FUN_02f08768(PTR_DAT_067cbfa0);
    FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingStatus>__ctor__);
    FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingVideoStats>__ctor__);
    FUN_02f08768(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>__ctor__);
    FUN_02f08768(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncConnection>__ctor__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<UIVertex>_Add__);
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__);
    FUN_02f08768(Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__);
    DAT_06bc1b7d = 1;
  }
  local_68 = *(undefined8 *)(param_1 + 0x260);
  iVar6 = FUN_0624b854(&local_68,0);
  puVar4 = Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__;
  puVar3 = Method_Oculus_Platform_Message<MicrophoneAvailabilityState>__ctor__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__;
  if (-1 < iVar6 + -1) {
    do {
      local_68 = *(undefined8 *)(param_1 + 0x260);
      iVar6 = iVar6 + -1;
      uVar7 = thunk_FUN_0624cacc(&local_68,iVar6,0);
      if (*(long *)(param_1 + 0x2d8) == 0) goto LAB_059a5998;
      uVar8 = FUN_03abf644(*(long *)(param_1 + 0x2d8),iVar6,*(undefined8 *)puVar3);
      FUN_06296de0(uVar7,uVar8,0);
      if (*(long *)(param_1 + 0x2e0) == 0) goto LAB_059a5998;
      uVar8 = FUN_03abf644(*(long *)(param_1 + 0x2e0),iVar6,*(undefined8 *)puVar4);
      FUN_06296de0(uVar7,uVar8,0);
      local_68 = *(undefined8 *)(param_1 + 0x260);
      FUN_0624be58(&local_68,uVar7,0);
      if (*(long *)(param_1 + 0x2d8) == 0) goto LAB_059a5998;
      FUN_03ac0f78(*(long *)(param_1 + 0x2d8),iVar6,*(undefined8 *)puVar2);
    } while (0 < iVar6);
  }
  local_68 = *(undefined8 *)(param_1 + 0x260);
  FUN_0624c378(&local_68,0);
  lVar12 = *(long *)(param_1 + 0x2d8);
  if (lVar12 == 0) {
LAB_059a5998:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  iVar6 = *(int *)(lVar12 + 0x18);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (0 < iVar6) {
    Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar12 + 0x10),0,iVar6,0);
  }
  puVar5 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
  puVar4 = Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__;
  puVar3 = PTR_DAT_067cbf80;
  puVar2 = PTR_DAT_067c9cb8;
  if (0 < param_2) {
    iVar6 = 0;
    do {
      plVar9 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbf70);
      FUN_059890fc(plVar9,0);
      local_6c = iVar6;
      uVar7 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_6c);
      uVar7 = FUN_04f65e2c(*(undefined8 *)
                            Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>__ctor__
                           ,uVar7,0);
      if (plVar9 == (long *)0x0) goto LAB_059a5998;
      FUN_0623f514(plVar9,uVar7,0);
      (**(code **)(*plVar9 + 0x248))(plVar9,1,*(undefined8 *)(*plVar9 + 0x250));
      FUN_0636f0c8(plVar9,0,0);
      FUN_0623f468(plVar9,0,0);
      FUN_05987b50(plVar9,0,0);
      FUN_0624193c(plVar9,*(undefined8 *)
                           Method_Oculus_Platform_Message<NetSyncSetSessionPropertyResult>__ctor__,0
                  );
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_Oculus_Platform_Message<LivestreamingStartResult>_get_Data__
                                );
      FUN_0476105c(uVar7,param_1,
                   *(undefined8 *)Method_Oculus_Platform_Message<NetSyncConnection>__ctor__,0);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_System_Collections_Generic_List<UIVertex>_Add__);
      FUN_059e6e44(uVar8,uVar7,0);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_04d8cf5c(uVar7,param_1,
                   *(undefined8 *)Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__,0);
      uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
      FUN_04d8cf5c(uVar10,param_1,
                   *(undefined8 *)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__,0);
      uVar11 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbfa0);
      FUN_059e3888(uVar11,uVar7,uVar10,0,0);
      lVar12 = *(long *)(param_1 + 0x2d8);
      if (lVar12 == 0) goto LAB_059a5998;
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar14 = *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>__ctor__;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_059a5998;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
      }
      else {
        FUN_03abf904(lVar12,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      lVar12 = *(long *)(param_1 + 0x2e0);
      if (lVar12 == 0) goto LAB_059a5998;
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar14 = *(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_059a5998;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
      }
      else {
        FUN_03abf904(lVar12,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      FUN_06296d34(plVar9,uVar8,0);
      FUN_06296d34(plVar9,uVar11,0);
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_0623f858(lVar12,0);
      if (lVar12 == 0) goto LAB_059a5998;
      FUN_0623f514(lVar12,*(undefined8 *)puVar4,0);
      FUN_0623f468(lVar12,1,0);
      FUN_0624193c(lVar12,*(undefined8 *)puVar4,0);
      FUN_06247510(plVar9,lVar12,0);
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_0623f858(lVar12,0);
      if (lVar12 == 0) goto LAB_059a5998;
      FUN_0623f514(lVar12,*(undefined8 *)puVar5,0);
      FUN_0623f468(lVar12,1,0);
      FUN_0624193c(lVar12,*(undefined8 *)puVar5,0);
      FUN_06247510(plVar9,lVar12,0);
      local_68 = *(undefined8 *)(param_1 + 0x260);
      FUN_0624b7dc(&local_68,plVar9,0);
      iVar6 = iVar6 + 1;
    } while (param_2 != iVar6);
  }
  FUN_059a5ba4(param_1,*(undefined4 *)(param_1 + 0x2d4));
  return;
}


