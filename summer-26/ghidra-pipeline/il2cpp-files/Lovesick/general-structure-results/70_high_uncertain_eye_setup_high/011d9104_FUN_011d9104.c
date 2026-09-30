/*
FUNCTION_NAME: FUN_011d9104
ENTRY_POINT: 011d9104
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_011d9104(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined2 local_44 [2];
  
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_BurstManaged__
  ;
                    /* try { // try from 011d911c to 012d912f has its CatchHandler @ 011d9170 */
  if ((DAT_03776408 & 1) == 0) {
                    /* try { // try from 011d9130 to 012d915f has its CatchHandler @ 011d8df8 */
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_LowLevelList<__Il2CppFullySharedGenericType>_set_Capacity__
                      );
    thunk_FUN_00d48444(Newtonsoft_Json_JsonReader_State_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(PTR_DAT_033f2ab8);
                    /* try { // try from 011d9160 to 012d9163 has its CatchHandler @ 011d9164 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 011d9160 with catch @ 011d9164
                       try { // try from 011d9164 to 012d9193 has its CatchHandler @ 011d8df8 */
    thunk_FUN_00d48444(StringLiteral_10395);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 011d911c with catch @ 011d9170
                        */
    thunk_FUN_00d48444(StringLiteral_1639);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 011d906c with catch @ 011d917c
                        */
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastComputeNewTrackedPose_BurstManaged__
                      );
    thunk_FUN_00d48444(System_Xml_XmlUnspecifiedAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Dialogue_DialoguePopup_HideXPrompt__);
    thunk_FUN_00d48444(PTR_DAT_033eb308);
    thunk_FUN_00d48444(Method_System_Xml_Schema_FacetsChecker_FacetsCompiler_ParseFacetValue__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__);
    thunk_FUN_00d48444(StringLiteral_10636);
    thunk_FUN_00d48444(StringLiteral_5758);
    thunk_FUN_00d48444(Method_OVRObjectPool_List<SpatialAnchorCoreBuildingBlock>__);
    DAT_03776408 = 1;
  }
  local_44[0] = 0;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar3 = Method_RCG_Lovesick_Dialogue_DialoguePopup_HideXPrompt__;
  puVar1 = PTR_DAT_033ea8a0;
  if (lVar6 != 0) {
    FUN_027bd6b0(lVar6,0);
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar3;
    plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,1);
    puVar3 = StringLiteral_10636;
    if (plVar7 != (long *)0x0) {
      if ((*(long *)StringLiteral_10636 != 0) &&
         (lVar8 = thunk_FUN_00d6225c(*(long *)StringLiteral_10636,*(undefined8 *)(*plVar7 + 0x40)),
         lVar8 == 0)) {
LAB_011d9454:
        uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,0);
      }
      puVar2 = StringLiteral_10395;
      puVar5 = StringLiteral_1639;
      if ((int)plVar7[3] == 0) {
LAB_011d9450:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar7[4] = *(long *)puVar3;
      FUN_027bcbfc(lVar6,plVar7,0);
      FUN_00ae5d64(lVar6,0xffffffff,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0x88) = lVar6;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      puVar2 = StringLiteral_5758;
      puVar3 = System_Xml_XmlUnspecifiedAttribute_TypeInfo;
      if (lVar6 != 0) {
        FUN_027bdeb4(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar2;
        *(long *)(param_1 + 0x90) = lVar6;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = Method_System_Xml_XmlSqlBinaryReader_ReadNameRef__;
        if (lVar6 != 0) {
          FUN_027bc300(lVar6,0);
          *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar2;
          plVar7 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,1);
          puVar1 = Method_OVRObjectPool_List<SpatialAnchorCoreBuildingBlock>__;
          if (plVar7 != (long *)0x0) {
            if ((*(long *)Method_OVRObjectPool_List<SpatialAnchorCoreBuildingBlock>__ != 0) &&
               (lVar8 = thunk_FUN_00d6225c(*(long *)
                                            Method_OVRObjectPool_List<SpatialAnchorCoreBuildingBlock>__
                                           ,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_011d9454;
            puVar4 = Newtonsoft_Json_JsonReader_State_TypeInfo;
            puVar2 = PTR_DAT_033f2ab8;
            if ((int)plVar7[3] == 0) goto LAB_011d9450;
            plVar7[4] = *(long *)puVar1;
            FUN_027bcbfc(lVar6,plVar7,0);
            local_44[0] = 0x2a;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_016e8b00(local_44,0);
            FUN_00ae5fa0(lVar6,uVar9,*(undefined8 *)puVar2);
            *(long *)(param_1 + 0x98) = lVar6;
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetResult__;
            if (lVar6 != 0) {
              FUN_027bc300(lVar6,0);
              *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar1;
              *(long *)(param_1 + 0xa0) = lVar6;
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
              puVar1 = PTR_DAT_033eb308;
              if (lVar6 != 0) {
                FUN_027bdeb4(lVar6,0);
                *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar1;
                *(long *)(param_1 + 0xa8) = lVar6;
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                puVar3 = Method_System_Xml_Schema_FacetsChecker_FacetsCompiler_ParseFacetValue__;
                puVar1 = 
                Method_System_Collections_Generic_LowLevelList<__Il2CppFullySharedGenericType>_set_Capacity__
                ;
                if (lVar6 != 0) {
                  FUN_027bdeb4(lVar6,0);
                  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)puVar3;
                  *(long *)(param_1 + 0xb0) = lVar6;
                  FUN_011d3eb8(param_1,*(undefined8 *)puVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


