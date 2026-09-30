/*
FUNCTION_NAME: FUN_00e83bcc
ENTRY_POINT: 00e83bcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00e83bcc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
                    /* catch() { ... } // from try @ 00e83c10 with catch @ 00e83be4 */
  if ((DAT_03774f8e & 1) == 0) {
                    /* try { // try from 00e83bf4 to 00f83c07 has its CatchHandler @ 00e83c44 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__)
    ;
    thunk_FUN_00d48444(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_00d48444(StringLiteral_13673);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03774f8e = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  FUN_00e77478(param_1);
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(long *)(param_1 + 0xa8) != 0) {
    uVar5 = FUN_0268fd4c(*(long *)(param_1 + 0xa8),0);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar7);
    }
    FUN_0268c114(uVar5,0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      uVar5 = FUN_0268fd4c(*(long *)(param_1 + 0xa0),0);
      FUN_0268c114(uVar5,0);
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar5 = FUN_0268fd4c(*(long *)(param_1 + 0xb0),0);
        FUN_0268c114(uVar5,0);
        if (*(long *)(param_1 + 0xc0) != 0) {
          uVar5 = FUN_0268fd4c(*(long *)(param_1 + 0xc0),0);
          FUN_0268c114(uVar5,0);
          puVar4 = StringLiteral_13673;
          puVar3 = Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__;
          puVar2 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
          if (*(long *)(param_1 + 0xb8) != 0) {
            FUN_01323390(*(long *)(param_1 + 0xb8),&local_48,
                         *(undefined8 *)
                          Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                        );
            while( true ) {
              uVar6 = FUN_012b894c(&local_48,*(undefined8 *)puVar2);
              if ((uVar6 & 1) == 0) {
                FUN_012b8948(&local_48,*(undefined8 *)puVar3);
                return;
              }
              lVar7 = FUN_00ac2e08(&local_48,*(undefined8 *)puVar4);
              if (lVar7 == 0) break;
              uVar5 = FUN_0268fd4c(lVar7,0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_0268c114(uVar5,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


