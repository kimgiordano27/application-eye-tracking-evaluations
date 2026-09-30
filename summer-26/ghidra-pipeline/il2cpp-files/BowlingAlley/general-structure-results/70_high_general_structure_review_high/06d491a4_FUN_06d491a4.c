/*
FUNCTION_NAME: FUN_06d491a4
ENTRY_POINT: 06d491a4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_3
*/


void FUN_06d491a4(long param_1)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  
  if ((DAT_076e9ac9 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                      );
    thunk_FUN_032e1da0(Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    DAT_076e9ac9 = 1;
  }
  puVar4 = Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__;
  if (*(long *)(param_1 + 0x4010) != 0) {
    iVar5 = FUN_049bd4a8(*(long *)(param_1 + 0x4010),
                         *(undefined8 *)
                          Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                        );
    puVar3 = Method_System_Collections_Generic_Dictionary<string,_float>__ctor__;
    if (*(long *)(param_1 + 0x4010) != 0) {
      FUN_049bd534(*(long *)(param_1 + 0x4010),
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
      if (0 < iVar5) {
        lVar1 = param_1 + 0x10;
        iVar5 = iVar5 + 1;
        do {
          if (*(long *)(param_1 + 0x4010) == 0) goto LAB_06d49290;
          uVar6 = FUN_049bd4a8(*(long *)(param_1 + 0x4010),*(undefined8 *)puVar4);
          cVar2 = *(char *)((uVar6 & 0x3fff) + lVar1);
          if (cVar2 != '\0') {
            *(char *)(lVar1 + (uVar6 & 0x3fff)) = cVar2 + -1;
          }
          uVar6 = uVar6 >> 0xe & 0x3fff;
          cVar2 = *(char *)(uVar6 + lVar1);
          if (cVar2 != '\0') {
            *(char *)(lVar1 + uVar6) = cVar2 + -1;
          }
          if (*(long *)(param_1 + 0x4010) == 0) goto LAB_06d49290;
          FUN_049bd534(*(long *)(param_1 + 0x4010),*(undefined8 *)puVar3);
          iVar5 = iVar5 + -1;
        } while (1 < iVar5);
      }
      return;
    }
  }
LAB_06d49290:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


