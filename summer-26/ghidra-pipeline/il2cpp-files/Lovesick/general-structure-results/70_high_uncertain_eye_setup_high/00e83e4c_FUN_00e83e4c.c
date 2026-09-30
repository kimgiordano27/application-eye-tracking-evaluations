/*
FUNCTION_NAME: FUN_00e83e4c
ENTRY_POINT: 00e83e4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_00e83e4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_03774f90 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__)
    ;
    thunk_FUN_00d48444(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_00d48444(StringLiteral_13673);
    thunk_FUN_00d48444(
                      Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12098);
    DAT_03774f90 = 1;
  }
  puVar1 = StringLiteral_12098;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x88) != 0)) &&
       (lVar5 = FUN_0268fd4c(*(long *)(lVar4 + 0x88),0), lVar5 != 0)) {
      FUN_0268ace8(lVar5,0,0);
      if ((*(long *)(lVar4 + 0x90) != 0) &&
         (lVar5 = FUN_0268fd4c(*(long *)(lVar4 + 0x90),0), lVar5 != 0)) {
        FUN_0268ace8(lVar5,0,0);
        if ((*(long *)(lVar4 + 0x98) != 0) &&
           (lVar5 = FUN_0268fd4c(*(long *)(lVar4 + 0x98),0), lVar5 != 0)) {
          FUN_0268ace8(lVar5,0,0);
          puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          if (*(long *)(lVar4 + 0xa8) != 0) {
            uVar6 = FUN_0268fd4c(*(long *)(lVar4 + 0xa8),0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar1);
            }
            FUN_0268c114(uVar6,0);
            if (*(long *)(lVar4 + 0xa0) != 0) {
              uVar6 = FUN_0268fd4c(*(long *)(lVar4 + 0xa0),0);
              FUN_0268c114(uVar6,0);
              if (*(long *)(lVar4 + 0xb0) != 0) {
                uVar6 = FUN_0268fd4c(*(long *)(lVar4 + 0xb0),0);
                FUN_0268c114(uVar6,0);
                puVar3 = StringLiteral_13673;
                puVar2 = 
                Method_System_Collections_Generic_Stack<HashSet<ParameterExpression>>_Push__;
                puVar1 = Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__;
                if (*(long *)(lVar4 + 0xb8) != 0) {
                  FUN_01323390(*(long *)(lVar4 + 0xb8),&local_48,
                               *(undefined8 *)
                                Method_Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<>c__DisplayClass24_0_<ShareAnchorsWithUser>b__0__
                              );
                  while( true ) {
                    uVar7 = FUN_012b894c(&local_48,*(undefined8 *)puVar1);
                    if ((uVar7 & 1) == 0) {
                      FUN_012b8948(&local_48,*(undefined8 *)puVar2);
                      return 0;
                    }
                    lVar4 = FUN_00ac2e08(&local_48,*(undefined8 *)puVar3);
                    if (lVar4 == 0) break;
                    *(undefined1 *)(lVar4 + 0x5c) = 1;
                    FUN_00fde460(lVar4,0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      FUN_0268a094(0x3f800000,lVar4,0);
      *(long *)(param_1 + 0x18) = lVar4;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


