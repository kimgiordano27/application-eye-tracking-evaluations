/*
FUNCTION_NAME: FUN_01644bd0
ENTRY_POINT: 01644bd0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01644bd0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar4;
  long lVar5;
  undefined *puVar3;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01644bb8 with catch @ 01644bd4
                       catch(type#2 @ 00000000) { ... } // from try @ 01644bcc with catch @ 01644bd4
                        */
  if ((DAT_0377827d & 1) == 0) {
    thunk_FUN_00d48444(System_Action<Task<IPAddress[]>>_TypeInfo);
    DAT_0377827d = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
                    /* try { // try from 01644c0c to 01744c9f has its CatchHandler @ 01644c0c
                       catch() { ... } // from try @ 01644c0c with catch @ 01644c0c
                       catch() { ... } // from try @ 01644cb8 with catch @ 01644c0c
                       catch() { ... } // from try @ 01644ce4 with catch @ 01644c0c
                       catch() { ... } // from try @ 01644d0c with catch @ 01644c0c
                       catch() { ... } // from try @ 01644d4c with catch @ 01644c0c */
  puVar3 = Method_Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>_Dispose__;
  if ((lVar4 != 0) &&
     (lVar5 = *(long *)(param_1 + 0x18),
     puVar3 = 
     Method_System_Collections_Generic_Dictionary_Enumerator<string,_InputControlLayout_ControlItem>_MoveNext__
     , lVar5 != 0)) {
    if (param_2 == 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar1 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar3 = PTR_DAT_033f5650;
                    /* try { // try from 01644ce0 to 01744ce3 has its CatchHandler @ 01644ce8 */
    }
    else {
      if (param_3 != 0) {
        if (*(int *)(*(long *)System_Action<Task<IPAddress[]>>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_015f266c(lVar4,lVar5,param_2,param_3,0);
        return;
      }
                    /* try { // try from 01644ce4 to 01744d07 has its CatchHandler @ 01644c0c */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01644ce0 with catch @ 01644ce8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01644cb0 with catch @ 01644cec
                        */
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01644ca0 with catch @ 01644cf0
                        */
      uVar1 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar3 = StringLiteral_9693;
    }
    uVar2 = thunk_FUN_00d48444(puVar3);
                    /* try { // try from 01644d08 to 01744d0b has its CatchHandler @ 01644d34 */
                    /* try { // try from 01644d0c to 01744d43 has its CatchHandler @ 01644c0c */
    FUN_016ec5b8(uVar1,uVar2,0);
    uVar2 = thunk_FUN_00d48444(FullSerializer_fsPropertyAttribute_var);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar1,uVar2);
  }
  uVar1 = thunk_FUN_00d48444(puVar3);
  uVar1 = FUN_015e2390(uVar1,0);
  thunk_FUN_00d48444(StringLiteral_8609);
  uVar2 = thunk_FUN_00d62348();
  FUN_00ac2be8();
                    /* try { // try from 01644ca0 to 01744ca7 has its CatchHandler @ 01644cf0 */
  FUN_0162cb64(uVar2,uVar1,0);
                    /* try { // try from 01644cb0 to 01744cb7 has its CatchHandler @ 01644cec */
  uVar1 = thunk_FUN_00d48444(FullSerializer_fsPropertyAttribute_var);
                    /* try { // try from 01644cb8 to 01744cdf has its CatchHandler @ 01644c0c */
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar2,uVar1);
}


