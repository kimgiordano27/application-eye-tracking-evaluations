/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JToken$$Newtonsoft.Json.IJsonLineInfo.HasLineInfo
ENTRY_POINT: 032bb1d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


int Newtonsoft_Json_Linq_JToken__Newtonsoft_Json_IJsonLineInfo_HasLineInfo(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  uint unaff_w23;
  uint uVar5;
  uint uVar6;
  ulong unaff_x24;
  undefined2 uStack000000000000000c;
  
LAB_032bb17c:
  do {
                    /* try { // try from 032bb1d0 to 033bb1ef has its CatchHandler @ 032bb3a8 */
    FUN_0315aa9c();
    uVar5 = (uint)unaff_x24;
    if ((int)unaff_w21 <= (int)uVar5) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
                    /* try { // try from 032bb208 to 033bb20f has its CatchHandler @ 032bb39c */
      FUN_019b5f60();
      uVar2 = FUN_03295560(0);
                    /* try { // try from 032bb214 to 033bb21f has its CatchHandler @ 032bb3a4 */
      uStack000000000000000c = (undefined2)unaff_w23;
      uVar3 = thunk_FUN_01c273e8(PTR_DAT_042303d0);
      uVar3 = thunk_FUN_01c49334(uVar3,&stack0x0000000c);
      uVar1 = thunk_FUN_01c273e8(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                                );
      uVar2 = FUN_03153804(uVar2,uVar1,uVar3,0);
      thunk_FUN_01c273e8(PTR_DAT_0423a628);
      uVar3 = thunk_FUN_01c496e0();
      FUN_032baa68(uVar3,uVar2);
      uVar2 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<int,_OVRPointerEventData>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar3,uVar2);
    }
    if (unaff_w21 <= uVar5) {
LAB_032bb1f8:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    unaff_x24 = (long)(int)uVar5 + 1;
    uVar4 = (uint)*(ushort *)(unaff_x22 + (long)(int)uVar5 * 2);
    uVar6 = (uint)unaff_x24;
    if (uVar4 == unaff_w23) {
      return uVar6 - unaff_w19;
    }
    if (uVar4 == 0x5c) {
      if ((int)unaff_w21 <= (int)uVar6) {
        thunk_FUN_01c273e8(PTR_DAT_0423a628);
        uVar2 = thunk_FUN_01c496e0();
        uVar3 = thunk_FUN_01c273e8(BrushController_<FadeSphere>d__9_TypeInfo);
        FUN_032baa68(uVar2,uVar3);
        uVar3 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_Dictionary<int,_OVRPointerEventData>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar2,uVar3);
      }
      if (unaff_w21 <= uVar6) goto LAB_032bb1f8;
      if (unaff_x20 == 0) goto LAB_032bb28c;
      unaff_x24 = (ulong)(uVar5 + 2);
      goto LAB_032bb17c;
    }
    if (unaff_x20 == 0) {
LAB_032bb28c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  } while( true );
}


