/*
FUNCTION_NAME: FUN_00eb8a3c
ENTRY_POINT: 00eb8a3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2
*/


void FUN_00eb8a3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_50;
  long *local_48;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377516d & 1) == 0) {
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB2_TexturePackerRegular_ProbeResult_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_302);
                    /* try { // try from 00eb8a84 to 00fb8a93 has its CatchHandler @ 00eb8fb0 */
    thunk_FUN_00d48444(PTR_DAT_033ea940);
    thunk_FUN_00d48444(PTR_DAT_033f5520);
    thunk_FUN_00d48444(StringLiteral_6982);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_11347);
                    /* try { // try from 00eb8ac0 to 00fb8ac3 has its CatchHandler @ 00eb8fa4 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TMP_Character>_Clear__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_0377516d = 1;
  }
  puVar2 = Method_System_Collections_Generic_List<TMP_Character>_Clear__;
  local_50 = 0;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_0112fd4c(uVar10,*(undefined8 *)puVar2);
  if ((lVar4 != 0) &&
     (FUN_010e58e8(lVar4,&local_48,*(undefined8 *)StringLiteral_6982), plVar8 = local_48,
     local_48 != (long *)0x0)) {
                    /* try { // try from 00eb8b64 to 00fb8b6b has its CatchHandler @ 00eb8ee4 */
    (**(code **)(*local_48 + 0x1a8))(local_48,param_2,*(undefined8 *)(*local_48 + 0x1b0));
    FUN_00eb6084(plVar8);
                    /* try { // try from 00eb8b78 to 00fb8bc3 has its CatchHandler @ 00eb8efc */
    lVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                      (lVar4,0);
    lVar5 = FUN_00eb8380(param_1);
    if ((lVar5 != 0) &&
       (uVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                           (lVar5,0), lVar4 != 0)) {
      FUN_0269fea8(lVar4,uVar10,0);
      puVar2 = DigitalOpus_MB_Core_MB2_TexturePackerRegular_ProbeResult_TypeInfo;
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_00ac8228(*(long *)(param_1 + 0x28),plVar8,
                     *(undefined8 *)
                      Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__);
        FUN_010c2e94(plVar8,&local_48,*(undefined8 *)puVar2);
        uVar6 = FUN_0268b5e4(local_48,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (local_48 != (long *)0x0) {
          uVar10 = (**(code **)(*local_48 + 0x358))(local_48,*(undefined8 *)(*local_48 + 0x360));
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar4);
          }
          uVar6 = FUN_0268b4e0(uVar10,0,0);
          if ((uVar6 & 1) != 0) {
            uVar7 = FUN_0268b6ac(local_48,0);
            plVar8 = (long *)thunk_FUN_00d93c64(local_48,0);
            puVar3 = StringLiteral_302;
            puVar2 = 
            Method_Meta_WitAi_Json_WitResponseArray_<GetEnumerator>d__14_System_Collections_IEnumerator_Reset__
            ;
            puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
            if (plVar8 == (long *)0x0) goto LAB_00eb8d74;
            uVar9 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
            uVar7 = FUN_0160073c(*(undefined8 *)puVar2,uVar7,*(undefined8 *)puVar1,uVar9,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar3);
            }
            FUN_026610e4(uVar7,0);
          }
          if (*(long *)(param_1 + 0x30) != 0) {
            uVar6 = FUN_0129eff4(*(long *)(param_1 + 0x30),uVar10,&local_50,
                                 *(undefined8 *)PTR_DAT_033f5520);
            if ((uVar6 & 1) == 0) {
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_11347);
              if (lVar4 == 0) goto LAB_00eb8d74;
              FUN_0267d6d8(lVar4,uVar10,0);
              local_50 = lVar4;
              if (*(long *)(param_1 + 0x30) == 0) goto LAB_00eb8d74;
              FUN_0129a054(*(long *)(param_1 + 0x30),uVar10,lVar4,*(undefined8 *)PTR_DAT_033ea940);
            }
            if (local_50 != 0) {
              FUN_0267f088(local_50,*(undefined8 *)
                                     Method_Meta_Voice_Net_WebSockets_NativeWebSocketWrapper_RaiseClose__
                           ,*(undefined4 *)(param_1 + 0x18),0);
              (**(code **)(*local_48 + 0x348))(local_48,local_50,*(undefined8 *)(*local_48 + 0x350))
              ;
              return;
            }
          }
        }
      }
    }
  }
LAB_00eb8d74:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


