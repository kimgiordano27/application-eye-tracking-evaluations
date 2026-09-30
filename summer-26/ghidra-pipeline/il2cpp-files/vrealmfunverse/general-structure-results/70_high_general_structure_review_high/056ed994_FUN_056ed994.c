/*
FUNCTION_NAME: FUN_056ed994
ENTRY_POINT: 056ed994
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_3;telemetry_or_network_hits_4
*/


long FUN_056ed994(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int local_180 [22];
  int local_128 [22];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_70 [16];
  
                    /* try { // try from 056ed9b4 to 057ed9b7 has its CatchHandler @ 056eda98 */
  if ((DAT_066d21d9 & 1) == 0) {
    FUN_02b3c81c(
                Method_System_Collections_Generic_KeyValuePair<BodyPart,_SimpleRagDolllTarget[]>_get_Key__
                );
                    /* try { // try from 056ed9d0 to 057ed9db has its CatchHandler @ 056eda88 */
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_get_Interactable__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Key__);
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__)
    ;
                    /* try { // try from 056ed9f8 to 057eda1b has its CatchHandler @ 056eda94 */
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<InternedString,_string>_get_Key__);
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__);
    FUN_02b3c81c(Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__);
                    /* try { // try from 056eda2c to 057eda4f has its CatchHandler @ 056eda90 */
    FUN_02b3c81c(
                Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Key__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
                );
    DAT_066d21d9 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80 = 0;
                    /* try { // try from 056eda50 to 057eda63 has its CatchHandler @ 056ed884 */
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (param_1 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar8 = thunk_FUN_02b79644();
    uVar11 = thunk_FUN_02ba3594(PTR_DAT_0631f458);
    FUN_04cee07c(uVar8,uVar11,0);
                    /* try { // try from 056edbf4 to 057edbfb has its CatchHandler @ 056edc98 */
                    /* try { // try from 056edbfc to 057edc8f has its CatchHandler @ 056edb24 */
    uVar11 = thunk_FUN_02ba3594(
                               Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar8,uVar11);
  }
                    /* try { // try from 056eda64 to 057eda67 has its CatchHandler @ 056eda9c */
                    /* try { // try from 056eda68 to 057eda6f has its CatchHandler @ 056edaa0 */
  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                              Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Key__
                            );
                    /* try { // try from 056eda70 to 057eda73 has its CatchHandler @ 056eda98 */
                    /* try { // try from 056eda74 to 057eda77 has its CatchHandler @ 056eda8c */
  FUN_056edd48();
  puVar6 = 
  Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Value__
  ;
  puVar5 = 
  Method_System_Collections_Generic_KeyValuePair<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_get_Key__
  ;
  puVar4 = Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Value__;
  puVar3 = Method_System_Collections_Generic_KeyValuePair<InternedString,_string>_get_Key__;
  puVar2 = Method_System_Collections_Generic_KeyValuePair<InternedString,_object>_get_Value__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection<TerrainTileCoord,_Terrain>_GetEnumerator__
  ;
                    /* try { // try from 056eda78 to 057eda7b has its CatchHandler @ 056eda84 */
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* catch() { ... } // from try @ 056ed95c with catch @ 056eda7c
                       try { // try from 056eda7c to 057edab7 has its CatchHandler @ 056ed884 */
                    /* catch() { ... } // from try @ 056ed960 with catch @ 056eda80 */
                    /* catch() { ... } // from try @ 056eda78 with catch @ 056eda84 */
                    /* catch() { ... } // from try @ 056ed9d0 with catch @ 056eda88 */
                    /* catch() { ... } // from try @ 056eda74 with catch @ 056eda8c */
                    /* catch() { ... } // from try @ 056eda2c with catch @ 056eda90 */
                    /* catch() { ... } // from try @ 056ed9f8 with catch @ 056eda94 */
                    /* catch() { ... } // from try @ 056ed9b4 with catch @ 056eda98
                       catch() { ... } // from try @ 056eda70 with catch @ 056eda98 */
                    /* catch() { ... } // from try @ 056eda64 with catch @ 056eda9c */
                    /* catch() { ... } // from try @ 056ed8f4 with catch @ 056edaa0
                       catch() { ... } // from try @ 056eda68 with catch @ 056edaa0 */
  uVar8 = FUN_056edde4(lVar7,param_1);
                    /* try { // try from 056edab8 to 057edacf has its CatchHandler @ 056edb10 */
  uVar11 = *(undefined8 *)puVar3;
  *(undefined4 *)(lVar7 + 0xf4) = 0x3d4ccccd;
  uVar8 = FUN_056edf58(uVar8,uVar11);
                    /* try { // try from 056edad0 to 057edaff has its CatchHandler @ 056ed884 */
  uVar8 = FUN_056edf58(uVar8,*(undefined8 *)puVar6);
  uVar8 = FUN_056edf58(uVar8,*(undefined8 *)puVar2);
  uVar8 = FUN_056edf58(uVar8,*(undefined8 *)puVar5);
  FUN_056edf58(uVar8,*(undefined8 *)puVar4);
  FUN_056ef5f0();
                    /* try { // try from 056edb00 to 057edb0f has its CatchHandler @ 056edb10 */
  *(uint *)(lVar7 + 0x168) = *(uint *)(lVar7 + 0x168) | 0x200;
  uVar8 = FUN_0570716c(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),0);
                    /* catch() { ... } // from try @ 056edab8 with catch @ 056edb10
                       catch() { ... } // from try @ 056edb00 with catch @ 056edb10 */
  uVar9 = FUN_04c08b4c(uVar8,*(undefined8 *)puVar1,0);
                    /* try { // try from 056edb14 to 057edb17 has its CatchHandler @ 056edb20 */
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 056edb18 to 057edb23 has its CatchHandler @ 056ed884 */
                    /* catch() { ... } // from try @ 056edb14 with catch @ 056edb20 */
                    /* try { // try from 056edb24 to 057edbf3 has its CatchHandler @ 056edb24
                       catch() { ... } // from try @ 056edb24 with catch @ 056edb24
                       catch() { ... } // from try @ 056edbfc with catch @ 056edb24
                       catch() { ... } // from try @ 056edc94 with catch @ 056edb24
                       catch() { ... } // from try @ 056edd28 with catch @ 056edb24
                       catch() { ... } // from try @ 056edd84 with catch @ 056edb24
                       catch() { ... } // from try @ 056eddb8 with catch @ 056edb24 */
    uVar8 = *(undefined8 *)
             Method_System_Collections_Generic_KeyValuePair<InternedString,_Type>_get_Key__;
    FUN_056ef5f0(lVar7);
    *(undefined8 *)(lVar7 + 0xc0) = uVar8;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0xc0),uVar8);
  }
  if (param_2 < 0) {
    return lVar7;
  }
  local_70 = FUN_056de9f0(param_1);
  puVar1 = PTR_DAT_06312310;
  iVar12 = local_70._12_4_;
  if (param_2 < iVar12) {
    FUN_03cca840(local_128,local_70,param_2,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_get_Interactable__
                );
    memcpy(&local_d0,local_128,0x58);
    uVar9 = FUN_056f85e4(&local_d0,0);
    if ((uVar9 & 1) == 0) {
      FUN_056ee100(lVar7,param_2);
      return lVar7;
    }
                    /* try { // try from 056edcb0 to 057edce7 has its CatchHandler @ 056edd78 */
    uVar8 = thunk_FUN_02ba3594(
                              Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_get_Interactable__
                              );
    thunk_FUN_03cca840(local_128,local_70,param_2,uVar8);
    memcpy(local_180,local_128,0x58);
    uVar8 = thunk_FUN_02ba3594(
                              Method_Meta_XR_ImmersiveDebugger_Hierarchy_ItemWithChildren<object,_SceneItem,_Scene>__ctor__
                              );
    uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar8,local_180);
    uVar11 = thunk_FUN_02ba3594(
                               Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Value__
                               );
                    /* try { // try from 056edd04 to 057edd07 has its CatchHandler @ 056edd70 */
    uVar8 = FUN_04c0af28(uVar11,uVar8,param_1,0);
                    /* try { // try from 056edd14 to 057edd27 has its CatchHandler @ 056edd6c */
    thunk_FUN_02ba3594(PTR_DAT_0631cb60);
    uVar10 = thunk_FUN_02b79644();
                    /* try { // try from 056edd28 to 057edd4b has its CatchHandler @ 056edb24 */
    FUN_04d7b3f4(uVar10,uVar8,0);
  }
  else {
    local_128[0] = param_2;
    uVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),local_128);
    thunk_FUN_02ba3594(
                      Method_System_Collections_Generic_KeyValuePair<BodyPart,_SimpleRagDolllTarget[]>_get_Key__
                      );
    local_180[0] = iVar12;
    uVar11 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                       (*(undefined8 *)(puVar1 + 0x48),local_180);
    uVar10 = thunk_FUN_02ba3594(
                               Method_Oculus_Interaction_Interactor<GrabInteractor,_GrabInteractable>_get_SelectedInteractable__
                               );
    uVar8 = FUN_04c0af6c(uVar10,uVar8,param_1,uVar11,0);
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar10 = thunk_FUN_02b79644();
    uVar11 = thunk_FUN_02ba3594(
                               Method_System_Collections_Generic_KeyValuePair<LocomotionProvider,_LocomotionMediator_LocomotionProviderData>_get_Key__
                               );
                    /* try { // try from 056edc90 to 057edc93 has its CatchHandler @ 056edc98 */
                    /* try { // try from 056edc94 to 057edcaf has its CatchHandler @ 056edb24 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 056edbf4 with catch @ 056edc98
                       catch(type#1 @ 05fbf508) { ... } // from try @ 056edc90 with catch @ 056edc98
                        */
    FUN_04cf1968(uVar10,uVar8,uVar11,0);
  }
  uVar8 = thunk_FUN_02ba3594(
                            Method_System_Collections_Generic_KeyValuePair<LabelTarget,_LabelInfo>_get_Value__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar10,uVar8);
}


