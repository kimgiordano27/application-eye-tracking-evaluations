/*
FUNCTION_NAME: FUN_016c48b4
ENTRY_POINT: 016c48b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_016c48b4(long param_1,long param_2,long param_3,uint param_4,int param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016c476c with catch @ 016c48b4
                        */
  puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 016c4748 with catch @ 016c48b8
                        */
                    /* try { // try from 016c48d0 to 017c48d3 has its CatchHandler @ 016c4960 */
                    /* try { // try from 016c48e4 to 017c494b has its CatchHandler @ 016c4968 */
  if ((DAT_037786d5 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f4038);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetEdgeRingIterative>b__11_0__
                      );
    DAT_037786d5 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03777b33 == '\0') {
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    DAT_03777b33 = '\x01';
  }
  puVar1 = 
  Method_UnityEngine_ProBuilder_MeshOperations_ElementSelection_<>c_<GetEdgeRingIterative>b__11_0__;
  lVar2 = *(long *)puVar3;
                    /* try { // try from 016c494c to 017c4957 has its CatchHandler @ 016c46dc */
                    /* try { // try from 016c4958 to 017c495f has its CatchHandler @ 016c4968 */
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
                    /* catch() { ... } // from try @ 016c48d0 with catch @ 016c4960 */
    lVar2 = *(long *)puVar3;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 016c48e4 with catch @ 016c4968
                       catch(type#2 @ 00000000) { ... } // from try @ 016c4958 with catch @ 016c4968
                        */
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_016cbc70(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar3 = Method_UnityEngine_Component_TryGetComponent<SongManager>__;
  }
  else {
    if (param_3 != 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        uVar4 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar5 = thunk_FUN_00d48444(
                                  Method_System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_get_Count__
                                  );
        FUN_016f2f28(uVar4,uVar5,0);
      }
      else {
        if (0 < param_5) {
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f4038);
          if (lVar2 != 0) {
            FUN_016d6128(lVar2,param_2,3,1,1,0x1000,0x8000000,0);
            FUN_016c4718(param_1,lVar2,param_3,param_4 & 1,param_5,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        thunk_FUN_00d48444(StringLiteral_8570);
        uVar4 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        uVar5 = thunk_FUN_00d48444(UnityEngine_Events_UnityAction<DialogueValue>_TypeInfo);
        uVar6 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_91__);
        FUN_016efd4c(uVar4,uVar5,uVar6,0);
      }
      goto LAB_016c4ae4;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar3 = UnityEngine_Vector3Int_TypeInfo;
  }
  uVar5 = thunk_FUN_00d48444(puVar3);
  FUN_016ec5b8(uVar4,uVar5,0);
LAB_016c4ae4:
  uVar5 = thunk_FUN_00d48444(PTR_DAT_033f5e28);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar4,uVar5);
}


