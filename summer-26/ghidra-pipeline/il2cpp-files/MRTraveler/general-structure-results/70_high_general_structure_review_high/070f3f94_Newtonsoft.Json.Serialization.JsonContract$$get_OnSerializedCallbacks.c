/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 070f3f94
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks
          (long param_1,long param_2,undefined4 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = PTR_DAT_08ea2b48;
  if ((DAT_0941c0d9 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08ea2b48);
    DAT_0941c0d9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar2 = FUN_070f6804(param_1,0);
  if ((uVar2 & 1) != 0) {
    if ((param_2 == 0) || (plVar3 = *(long **)(param_2 + 0x78), plVar3 == (long *)0x0)) {
LAB_070f4124:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    if (lVar4 == 0) {
      return 0;
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar2 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar2) goto Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks;
        lVar5 = FUN_0709a744(param_2,*(undefined4 *)(lVar4 + 0x20 + uVar2 * 4),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)puVar1);
        }
        uVar6 = FUN_070f62b8(param_1,lVar5,0);
        if ((uVar6 & 1) != 0) {
LAB_070f40e8:
          if (lVar5 != 0) {
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(lVar5 + 0x10) + -1;
            if ((uint)uVar2 < *(uint *)(lVar4 + 0x18)) {
              *param_3 = *(undefined4 *)(lVar4 + 0x20 + uVar2 * 4);
              return 1;
            }
Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          goto LAB_070f4124;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2)
        goto Newtonsoft_Json_Serialization_JsonContract__get_OnErrorCallbacks;
        lVar5 = FUN_0709a884(param_2,*(undefined4 *)(lVar4 + 0x20 + uVar2 * 4),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*(long *)puVar1);
        }
        uVar6 = FUN_070f62b8(param_1,lVar5,0);
        if ((uVar6 & 1) != 0) goto LAB_070f40e8;
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  return 0;
}


