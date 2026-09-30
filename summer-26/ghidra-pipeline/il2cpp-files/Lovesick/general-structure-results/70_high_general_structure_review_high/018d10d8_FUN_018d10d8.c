/*
FUNCTION_NAME: FUN_018d10d8
ENTRY_POINT: 018d10d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_10
*/


void FUN_018d10d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_033edfd8;
  if ((DAT_03779a26 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_WitAi_WitRequest_<HandleSend>b__91_0__);
    thunk_FUN_00d48444(StringLiteral_749);
    thunk_FUN_00d48444(Method_Oculus_Platform_Message<SystemVoipState>_get_Data__);
    thunk_FUN_00d48444(PTR_DAT_033edfd8);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_Poly2Tri_AdvancingFront_LocatePoint__);
    thunk_FUN_00d48444(Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<string>__);
    thunk_FUN_00d48444(UnityEngine_ISerializationCallbackReceiver_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Specialized_OrderedDictionary_GetObjectData__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<DirectorControlPlayable>_op_Implicit__
                      );
    DAT_03779a26 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Specialized_OrderedDictionary_GetObjectData__;
  if (lVar3 != 0) {
    FUN_012d239c(lVar3,0,*(undefined8 *)StringLiteral_749,0);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_UnityEngine_ProBuilder_Poly2Tri_AdvancingFront_LocatePoint__;
    puVar1 = Method_Oculus_Platform_Message<SystemVoipState>_get_Data__;
    if (lVar4 != 0) {
      FUN_013c8f44(lVar4,lVar3,*(undefined8 *)UnityEngine_ISerializationCallbackReceiver_TypeInfo);
      **(long **)(*(long *)puVar1 + 0xb8) = lVar4;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_UnityEngine_Playables_ScriptPlayable<DirectorControlPlayable>_op_Implicit__;
      if (lVar3 != 0) {
        FUN_012d239c(lVar3,0,*(undefined8 *)Method_Meta_WitAi_WitRequest_<HandleSend>b__91_0__,0);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          FUN_013c8f44(lVar4,lVar3,
                       *(undefined8 *)
                        Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<string>__);
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
                    /* try { // try from 018d123c to 019d1283 has its CatchHandler @ 018d123c
                       catch() { ... } // from try @ 018d123c with catch @ 018d123c
                       catch() { ... } // from try @ 018d1294 with catch @ 018d123c
                       catch() { ... } // from try @ 018d132c with catch @ 018d123c
                       catch() { ... } // from try @ 018d13b0 with catch @ 018d123c */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


