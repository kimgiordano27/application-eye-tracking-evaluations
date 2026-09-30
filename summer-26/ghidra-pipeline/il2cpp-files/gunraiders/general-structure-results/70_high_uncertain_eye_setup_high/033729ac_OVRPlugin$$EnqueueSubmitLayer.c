/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 033729ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSubmitLayer(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x27;
  
  unaff_x19[0x15] = unaff_x20;
  uVar5 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe0,0);
  lVar6 = thunk_FUN_01c496e0(*unaff_x27);
  FUN_03313b6c(lVar6,0);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  *(undefined4 *)(lVar6 + 0x18) = 0x27;
  lVar7 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x19 + 0x40));
  if (lVar7 == 0) {
    uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar5,0);
  }
  if (0x12 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0x16] = lVar6;
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_MoveNext__
    ;
    *(long **)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
    puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_Dispose__;
    puVar3 = 
    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_get_Current__
    ;
    puVar1 = 
    Method_System_Collections_Generic_List_Enumerator<BinaryStorageBuffer_Writer_Chunk>_get_Current__
    ;
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_02b65188(uVar5,0,*(undefined8 *)puVar1,0);
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
    FUN_025ec1d8(uVar8,uVar5,*(undefined8 *)puVar3);
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = uVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


