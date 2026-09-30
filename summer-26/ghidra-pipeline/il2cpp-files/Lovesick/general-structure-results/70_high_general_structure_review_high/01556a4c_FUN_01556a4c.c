/*
FUNCTION_NAME: FUN_01556a4c
ENTRY_POINT: 01556a4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_2;telemetry_or_network_hits_10
*/


void FUN_01556a4c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  char local_4c [4];
  long local_48;
  
  puVar2 = Method_Obi_ObiNativeList<Edge>__ctor__;
  if ((DAT_03777b84 & 1) == 0) {
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Edge>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_RBTree<DataRow>_CopyTo__);
    thunk_FUN_00d48444(
                      Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_OnRawResponse__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Item__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__);
    DAT_03777b84 = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<IColliderWorldImpl>_Add__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_0153ad4c(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = FUN_0153b754(0);
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x58);
    lVar3 = FUN_0153b754(0);
    puVar1 = 
    Method_Meta_Voice_NLPRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults,_WitResponseNode>_OnRawResponse__
    ;
    puVar2 = Method_System_Collections_Generic_List<IXRSelectInteractable>_get_Item__;
    if ((lVar3 != 0) && (lVar5 != 0)) {
      if (0 < *(int *)(lVar5 + 0x18)) {
        lVar3 = *(long *)(lVar3 + 0x50);
        iVar6 = 0;
        do {
          if (lVar3 == 0) goto LAB_01556bb4;
          FUN_0132138c(lVar3,iVar6,local_4c,*(undefined8 *)puVar1);
          if (local_4c[0] != '\0') {
            lVar7 = *(long *)(param_1 + 0x30);
            FUN_0132138c(lVar5,iVar6,&local_48,*(undefined8 *)puVar2);
            if ((local_48 == 0) || (uVar4 = FUN_0153a7ac(local_48,0), lVar7 == 0))
            goto LAB_01556bb4;
            FUN_0153fea4(lVar7,uVar4,0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar5 + 0x18));
      }
      return;
    }
  }
LAB_01556bb4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


