/*
FUNCTION_NAME: FUN_024f7380
ENTRY_POINT: 024f7380
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_024f7380(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar3 = Method_System_Xml_Schema_XdrBuilder_XDR_EndAttributeType__;
  if ((DAT_03782856 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Edge>_set_Item__);
    thunk_FUN_00d48444(Method_BandhouseFeedbackManager_<>c_<SetFeedbackShaderData>b__26_0__);
    thunk_FUN_00d48444(PaperCyclone_<>c__DisplayClass5_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_XDR_EndAttributeType__);
    thunk_FUN_00d48444(OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo);
                    /* try { // try from 024f73e8 to 025f7a73 has its CatchHandler @ 024f73e8
                       catch() { ... } // from try @ 024f73e8 with catch @ 024f73e8
                       catch() { ... } // from try @ 024f7c18 with catch @ 024f73e8
                       catch() { ... } // from try @ 024f7dec with catch @ 024f73e8
                       catch() { ... } // from try @ 024f7df4 with catch @ 024f73e8
                       catch() { ... } // from try @ 024f7dfc with catch @ 024f73e8
                       catch() { ... } // from try @ 024f7e50 with catch @ 024f73e8
                       catch() { ... } // from try @ 024f7e80 with catch @ 024f73e8 */
    thunk_FUN_00d48444(Method_MoveCharacterOnTeleportPadUsed_<GetPoses>b__10_1__);
    DAT_03782856 = 1;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar4 = Method_BandhouseFeedbackManager_<>c_<SetFeedbackShaderData>b__26_0__;
  puVar1 = PaperCyclone_<>c__DisplayClass5_0_TypeInfo;
  if (lVar5 != 0) {
    FUN_01320e50(lVar5,*(undefined8 *)PaperCyclone_<>c__DisplayClass5_0_TypeInfo);
    *(long *)(param_1 + 0x10) = lVar5;
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar2 = Method_System_Collections_Generic_List<Edge>_set_Item__;
    if (lVar5 != 0) {
      FUN_012dd38c(lVar5,*(undefined8 *)Method_System_Collections_Generic_List<Edge>_set_Item__);
      *(long *)(param_1 + 0x18) = lVar5;
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      if (lVar5 != 0) {
        FUN_01320e50(lVar5,*(undefined8 *)puVar1);
        *(long *)(param_1 + 0x20) = lVar5;
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        puVar3 = Method_MoveCharacterOnTeleportPadUsed_<GetPoses>b__10_1__;
        if (lVar5 != 0) {
          FUN_012dd38c(lVar5,*(undefined8 *)puVar2);
          *(long *)(param_1 + 0x28) = lVar5;
          FUN_017b46ec(param_1,0);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          if (lVar5 != 0) {
            FUN_0285a508(lVar5,param_1,*(undefined8 *)OVRPlugin_GetBoneSkeleton3Delegate___TypeInfo,
                         0);
            FUN_02859620(lVar5,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


