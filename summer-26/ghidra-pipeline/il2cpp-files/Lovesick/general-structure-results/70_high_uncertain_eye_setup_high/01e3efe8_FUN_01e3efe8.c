/*
FUNCTION_NAME: FUN_01e3efe8
ENTRY_POINT: 01e3efe8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01e3efe8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uVar7;
  
  puVar5 = (undefined8 *)StringLiteral_11439;
  puVar2 = Method_Newtonsoft_Json_JsonTextReader_set_ArrayPool__;
  puVar1 = Method_System_Collections_Generic_List<Guid>_Clear__;
                    /* catch() { ... } // from try @ 01e3efa4 with catch @ 01e3f028
                       try { // try from 01e3f028 to 01f3f04f has its CatchHandler @ 01e3eb28 */
                    /* catch() { ... } // from try @ 01e3ecf0 with catch @ 01e3f030 */
  if ((DAT_0377fc1c & 1) == 0) {
                    /* catch() { ... } // from try @ 01e3ec8c with catch @ 01e3f034 */
                    /* catch() { ... } // from try @ 01e3ec30 with catch @ 01e3f038 */
    thunk_FUN_00d48444(PTR_DAT_033f74c0);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_14__);
                    /* try { // try from 01e3f050 to 01f3f053 has its CatchHandler @ 01e3f0e0 */
    thunk_FUN_00d48444(StringLiteral_11439);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Guid>_Clear__);
                    /* try { // try from 01e3f064 to 01f3f0cb has its CatchHandler @ 01e3f0e8 */
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonTextReader_set_ArrayPool__);
    thunk_FUN_00d48444(PTR_DAT_033f24b0);
    DAT_0377fc1c = 1;
  }
  FUN_01f30588(param_1,*(undefined8 *)puVar1,0);
  uVar3 = thunk_FUN_015fe514(param_2,*puVar5,0);
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)puVar2;
  }
  FUN_01f30588(param_1,*puVar5,0);
  if (param_3 == 0) {
    puVar5 = (undefined8 *)PTR_DAT_033f24b0;
    if (param_4 != 0) goto LAB_01e3f104;
    uVar4 = *(uint *)(param_1 + 0x50);
    lVar6 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar4 + 1;
    if (lVar6 == 0) goto LAB_01e3f228;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto System_Xml_XsdCachingReader__get_QuoteChar;
    uVar7 = 0x20;
  }
  else {
                    /* try { // try from 01e3f0cc to 01f3f0d7 has its CatchHandler @ 01e3eb28 */
    FUN_01f30588(param_1,*(undefined8 *)PTR_DAT_033f74c0,0);
                    /* try { // try from 01e3f0d8 to 01f3f0df has its CatchHandler @ 01e3f0e8 */
                    /* catch() { ... } // from try @ 01e3f050 with catch @ 01e3f0e0 */
    FUN_01f30588(param_1,param_3,0);
                    /* catch() { ... } // from try @ 01e3efb4 with catch @ 01e3f0e8
                       catch() { ... } // from try @ 01e3f064 with catch @ 01e3f0e8
                       catch() { ... } // from try @ 01e3f0d8 with catch @ 01e3f0e8 */
    puVar5 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_14__;
    if (param_4 != 0) {
LAB_01e3f104:
      FUN_01f30588(param_1,*puVar5,0);
      FUN_01f30588(param_1,param_4,0);
    }
    uVar4 = *(uint *)(param_1 + 0x50);
    lVar6 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar4 + 1;
    if (lVar6 == 0) goto LAB_01e3f228;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto System_Xml_XsdCachingReader__get_QuoteChar;
    uVar7 = 0x22;
  }
  *(undefined1 *)(lVar6 + (int)uVar4 + 0x20) = uVar7;
  if (param_5 != 0) {
    uVar4 = *(uint *)(param_1 + 0x50);
    lVar6 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar4 + 1;
    if (lVar6 == 0) goto LAB_01e3f228;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto System_Xml_XsdCachingReader__get_QuoteChar;
    *(undefined1 *)(lVar6 + (int)uVar4 + 0x20) = 0x5b;
    FUN_01f30588(param_1,param_5,0);
    uVar4 = *(uint *)(param_1 + 0x50);
    lVar6 = *(long *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x50) = uVar4 + 1;
    if (lVar6 == 0) goto LAB_01e3f228;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto System_Xml_XsdCachingReader__get_QuoteChar;
    *(undefined1 *)(lVar6 + (int)uVar4 + 0x20) = 0x5d;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  lVar6 = *(long *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x50) = uVar4 + 1;
  if (lVar6 != 0) {
    if (uVar4 < *(uint *)(lVar6 + 0x18)) {
      *(undefined1 *)(lVar6 + (int)uVar4 + 0x20) = 0x3e;
      return;
    }
System_Xml_XsdCachingReader__get_QuoteChar:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_01e3f228:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


