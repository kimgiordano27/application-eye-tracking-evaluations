/*
FUNCTION_NAME: Newtonsoft.Json.Bson.BsonBinaryWriter$$WriteUtf8Bytes
ENTRY_POINT: 017e3738
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


long Newtonsoft_Json_Bson_BsonBinaryWriter__WriteUtf8Bytes(void)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong unaff_x19;
  undefined4 unaff_w24;
  undefined8 in_stack_00000008;
  
  puVar1 = StringLiteral_9395;
  if (in_ZR || in_NG != in_OV) {
                    /* try { // try from 017e3858 to 018e388f has its CatchHandler @ 017e37e4 */
    thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar5 = thunk_FUN_00d48444(System_Collections_Generic_List<DebugData>_TypeInfo);
    FUN_0176c578(uVar4,uVar5,0);
    uVar5 = thunk_FUN_00d48444(OVRTask<OVRPlugin_Result>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar5);
  }
  in_stack_00000008 = 0;
  FUN_017887b4(&stack0x00000008,0,0,0,0,unaff_w24,0);
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_HashSet<__Il2CppFullySharedGenericType>_IsSupersetOf__;
  if (lVar2 != 0) {
    FUN_017e38a0();
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 != 0) {
      FUN_017dea30(lVar3,lVar2,*(undefined8 *)StringLiteral_7381,0);
      if ((unaff_x19 & 1) == 0) {
        FUN_017e397c(lVar3,0);
      }
      else {
        FUN_017e3954();
      }
                    /* try { // try from 017e37e4 to 018e381f has its CatchHandler @ 017e37e4
                       catch() { ... } // from try @ 017e37e4 with catch @ 017e37e4
                       catch() { ... } // from try @ 017e3858 with catch @ 017e37e4
                       catch() { ... } // from try @ 017e3894 with catch @ 017e37e4
                       catch() { ... } // from try @ 017e38f4 with catch @ 017e37e4 */
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


