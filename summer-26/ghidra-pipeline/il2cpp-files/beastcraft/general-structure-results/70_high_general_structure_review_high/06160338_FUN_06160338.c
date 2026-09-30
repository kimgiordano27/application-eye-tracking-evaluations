/*
FUNCTION_NAME: FUN_06160338
ENTRY_POINT: 06160338
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_06160338(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam0000000006e95784 & 1) == 0) {
    FUN_02e3ca1c(MemoryPack_Compression_BrotliCompressor_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Bson_BsonArray_TypeInfo);
    FUN_02e3ca1c(Newtonsoft_Json_Bson_BsonObject_TypeInfo);
    FUN_02e3ca1c(Oculus_Platform_Request<LeaderboardList>_TypeInfo);
    bRam0000000006e95784 = 1;
  }
  if (param_2 != 0) {
    lVar4 = *(long *)(param_1 + 0x100);
    uVar2 = FUN_060d1d88(param_2,0);
    if (lVar4 != 0) {
      FUN_052c2970(lVar4,uVar2,*(undefined8 *)Newtonsoft_Json_Bson_BsonArray_TypeInfo);
      *(undefined1 *)(param_1 + 0x110) = 1;
      plVar3 = (long *)FUN_060d1d88(param_2,0);
      if (plVar3 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)Oculus_Platform_Request<LeaderboardList>_TypeInfo + 0x130);
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)Oculus_Platform_Request<LeaderboardList>_TypeInfo)) {
          if (*(long *)(param_1 + 0x188) == 0)
          goto UnityEngine_AsyncOperation__InvokeCompletionEvent;
          FUN_052c2970(*(long *)(param_1 + 0x188),plVar3,
                       *(undefined8 *)MemoryPack_Compression_BrotliCompressor_TypeInfo);
        }
      }
      if (*(long *)(param_1 + 0x100) != 0) {
        if (*(int *)(*(long *)(param_1 + 0x100) + 0x20) == 1) {
          uVar2 = FUN_060d1d88(param_2,0);
          *(undefined8 *)(param_1 + 0x108) = uVar2;
          thunk_FUN_02ee2be8(param_1 + 0x108,uVar2);
        }
        uVar2 = FUN_060d1d88(param_2,0);
        FUN_0615f8fc(param_1,uVar2);
        return;
      }
    }
  }
UnityEngine_AsyncOperation__InvokeCompletionEvent:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


