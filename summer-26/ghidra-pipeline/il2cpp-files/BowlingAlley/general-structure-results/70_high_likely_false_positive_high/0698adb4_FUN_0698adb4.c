/*
FUNCTION_NAME: FUN_0698adb4
ENTRY_POINT: 0698adb4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_0698adb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long *plVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  
  if ((DAT_076e1d49 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<LivestreamingVideoStats>__ctor__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>__ctor__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<NetSyncConnection>__ctor__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
    thunk_FUN_032e1da0(
                      Method_System_Collections_Generic_Dictionary<string,_SelectionButton>_TryGetValue__
                      );
    DAT_076e1d49 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    FUN_068b32f8(lVar5,0);
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    FUN_0497b48c(lVar5,*(undefined8 *)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_050f8c98(*(long *)(param_1 + 0x20),
                 *(undefined8 *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_049bd0f8(*(long *)(param_1 + 0x30),
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_SelectionButton>_TryGetValue__
                  );
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_06965780(*(long *)(param_1 + 0x28),0);
        puVar4 = Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__;
        puVar3 = Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__;
        puVar2 = Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__;
        puVar1 = Method_Oculus_Platform_Message<LivestreamingVideoStats>__ctor__;
        if (*(long *)(param_1 + 0x38) != 0) {
          FUN_03d0aee8(&local_78,*(long *)(param_1 + 0x38),
                       *(undefined8 *)Method_Oculus_Platform_Message<NetSyncConnection>__ctor__);
          uStack_58 = uStack_70;
          local_60 = local_78;
          local_50 = local_68;
          while (uVar6 = System_Collections_Generic_ArraySortHelper<KeyValuePair<Rect,_object>>__Swap
                                   (&local_60,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
            if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            FUN_068b32f8(local_50,0);
          }
          FUN_052d3d34(&local_60,*(undefined8 *)puVar1);
          if (*(long *)(param_1 + 0x38) != 0) {
            FUN_03d0aa14(*(long *)(param_1 + 0x38),*(undefined8 *)puVar3);
            *(undefined4 *)(param_1 + 100) = 0xffffffff;
            *(undefined8 *)(param_1 + 0x10) = 0;
            thunk_FUN_0333a630((long *)(param_1 + 0x10),0);
            *(undefined8 *)(param_1 + 0x18) = 0;
            thunk_FUN_0333a630((long *)(param_1 + 0x18),0);
            *(undefined1 *)(param_1 + 0x51) = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
            thunk_FUN_0333a630((undefined8 *)(param_1 + 0x58),0);
            *(undefined8 *)(param_1 + 0x40) = 0;
            thunk_FUN_0333a630((undefined8 *)(param_1 + 0x40),0);
            plVar9 = *(long **)(param_1 + 0x48);
            if (plVar9 != (long *)0x0) {
              lVar5 = *plVar9;
              uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar6 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
                    puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 6) * 0x10 + 0x138);
                    goto LAB_0698aff8;
                  }
                  uVar6 = uVar6 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar6 != 0);
              }
              puVar7 = (undefined8 *)FUN_032937ac(plVar9,*(long *)puVar4,6);
LAB_0698aff8:
              (*(code *)*puVar7)(plVar9,param_1,puVar7[1]);
            }
            *(undefined8 *)(param_1 + 0x48) = 0;
            thunk_FUN_0333a630((undefined8 *)(param_1 + 0x48),0);
            *(undefined1 *)(param_1 + 0x50) = 0;
            *(undefined2 *)(param_1 + 0x60) = 0x100;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


