/*
FUNCTION_NAME: FUN_053394e4
ENTRY_POINT: 053394e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_053394e4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_0631ec90;
  puVar4 = PTR_DAT_06313c50;
  if ((DAT_066d044b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313c50);
    FUN_02b3c81c(PTR_DAT_06313588);
    FUN_02b3c81c(PTR_DAT_0631ec90);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(EmeraldAI_HealingAbility_<HealAIOverTimeInternal>d__12_TypeInfo);
    FUN_02b3c81c(EmeraldAI_HealingAbility_<StartHeals>d__5_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo);
    FUN_02b3c81c(Unity_Hierarchy_HierarchyNodeTypeHandlerBase_ConstructorScope_TypeInfo);
    FUN_02b3c81c(Unity_Hierarchy_HierarchySearchQueryDescriptor_<>c_TypeInfo);
    FUN_02b3c81c(Unity_Hierarchy_HierarchyViewNodesEnumerable_Predicate_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_Input_Hmd_<>c_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_HoverInteractorsGate_<>c_TypeInfo);
    FUN_02b3c81c(System_Net_HttpWebRequest_NtlmAuthState_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_ICameraHistoryReadAccess_HistoryRequestDelegate_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_IKMapping_BoneMap_TypeInfo);
    DAT_066d044b = 1;
  }
  puVar8 = UnityEngine_Rendering_ICameraHistoryReadAccess_HistoryRequestDelegate_TypeInfo;
  puVar7 = EmeraldAI_HealingAbility_<StartHeals>d__5_TypeInfo;
  puVar6 = EmeraldAI_HealingAbility_<HealAIOverTimeInternal>d__12_TypeInfo;
  puVar2 = PTR_DAT_06313588;
  uVar12 = _UNK_01032c08;
  uVar10 = _DAT_01032c00;
  puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
  *puVar13 = 0x3fd3333333333333;
  puVar13[2] = uVar12;
  puVar13[1] = uVar10;
  puVar3 = PTR_DAT_06313630;
  puVar13[3] = 10000000;
  local_48 = 0;
  FUN_04d5a90c(&local_48,0x76c,1,1,0);
  lVar14 = *(long *)(*(long *)puVar5 + 0xb8);
  iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
  *(undefined8 *)(lVar14 + 0x20) = local_48;
  if (iVar1 == 0) {
    thunk_FUN_02b9ad44();
    lVar14 = *(long *)(*(long *)puVar5 + 0xb8);
  }
  uVar9 = FUN_04d59bbc(lVar14 + 0x20,0);
  uVar12 = _UNK_010330c8;
  uVar10 = _DAT_010330c0;
  lVar14 = *(long *)(*(long *)puVar5 + 0xb8);
  *(undefined8 *)(lVar14 + 0x28) = uVar9;
  uVar9 = *(undefined8 *)puVar2;
  *(undefined8 *)(lVar14 + 0x38) = uVar12;
  *(undefined8 *)(lVar14 + 0x30) = uVar10;
  *(undefined4 *)(lVar14 + 0x48) = 0xa955b;
  *(undefined4 *)(lVar14 + 0x40) = 0;
  *(int *)(lVar14 + 0x44) = *(int *)(lVar14 + 0x14) + -1;
  uVar10 = FUN_02b3c908(uVar9,0xd);
  FUN_04cac0f0(uVar10,*(undefined8 *)puVar6,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x50);
  *puVar13 = uVar10;
  thunk_FUN_02bb0e9c(puVar13,uVar10);
  uVar10 = FUN_02b3c908(*(undefined8 *)puVar2,0xd);
  FUN_04cac0f0(uVar10,*(undefined8 *)puVar7,0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x58);
  *puVar13 = uVar10;
  thunk_FUN_02bb0e9c(puVar13,uVar10);
  local_50 = 0;
  FUN_04d5a90c(&local_50,0x6d9,1,1,0);
  lVar14 = *(long *)puVar5;
  lVar16 = *(long *)(lVar14 + 0xb8);
  lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
  *(undefined8 *)(lVar16 + 0x60) = local_50;
  *(undefined8 *)(lVar16 + 0x68) = *(undefined8 *)(lVar15 + 0x18);
  lVar14 = *(long *)(lVar14 + 0xb8);
  uVar10 = FUN_04d5d9fc(lVar14 + 0x60,*(undefined8 *)(lVar14 + 0x20),0);
  lVar14 = *(long *)puVar5;
  *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x70) = uVar10;
  lVar14 = *(long *)(lVar14 + 0xb8);
  uVar10 = FUN_04d5d9fc(lVar14 + 0x68,*(undefined8 *)(lVar14 + 0x20),0);
  lVar14 = *(long *)puVar5;
  uVar12 = *(undefined8 *)puVar8;
  *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x78) = uVar10;
  *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x80) = uVar12;
  thunk_FUN_02bb0e9c();
  lVar14 = FUN_02b3c908(*(undefined8 *)puVar3,8);
  if (lVar14 != 0) {
    if (*(int *)(lVar14 + 0x18) != 0) {
      *(undefined8 *)(lVar14 + 0x20) =
           *(undefined8 *)Unity_Hierarchy_HierarchyNodeTypeHandlerBase_ConstructorScope_TypeInfo;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x20));
      if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar14 + 0x28) =
             *(undefined8 *)Oculus_Interaction_HoverInteractorsGate_<>c_TypeInfo;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x28));
        if (2 < *(uint *)(lVar14 + 0x18)) {
          *(undefined8 *)(lVar14 + 0x30) =
               *(undefined8 *)RootMotion_FinalIK_IKMapping_BoneMap_TypeInfo;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x30));
          if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar14 + 0x38) =
                 *(undefined8 *)Unity_Hierarchy_HierarchyViewNodesEnumerable_Predicate_TypeInfo;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x38));
            if (4 < *(uint *)(lVar14 + 0x18)) {
              *(undefined8 *)(lVar14 + 0x40) =
                   *(undefined8 *)System_Net_HttpWebRequest_NtlmAuthState_TypeInfo;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x40));
              if (5 < *(uint *)(lVar14 + 0x18)) {
                *(undefined8 *)(lVar14 + 0x48) =
                     *(undefined8 *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x48));
                if (6 < *(uint *)(lVar14 + 0x18)) {
                  *(undefined8 *)(lVar14 + 0x50) =
                       *(undefined8 *)Oculus_Interaction_Input_Hmd_<>c_TypeInfo;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar14 + 0x50));
                  if ((*(uint *)(lVar14 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar14 + 0x58) =
                         *(undefined8 *)Unity_Hierarchy_HierarchySearchQueryDescriptor_<>c_TypeInfo;
                    thunk_FUN_02bb0e9c();
                    plVar11 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x88);
                    *plVar11 = lVar14;
                    thunk_FUN_02bb0e9c(plVar11,lVar14);
                    local_58 = 0;
                    local_60 = 0;
                    FUN_053381f4(&local_60,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x38)
                                 ,0);
                    lVar14 = *(long *)puVar5;
                    local_68 = 0;
                    lVar15 = *(long *)(lVar14 + 0xb8);
                    local_70 = 0;
                    *(undefined8 *)(lVar15 + 0x90) = local_60;
                    *(undefined4 *)(lVar15 + 0x98) = local_58;
                    lVar14 = *(long *)(lVar14 + 0xb8);
                    FUN_053381f4(&local_70,*(undefined4 *)(lVar14 + 0x3c),
                                 *(undefined4 *)(lVar14 + 0x44));
                    lVar14 = *(long *)puVar5;
                    lVar15 = *(long *)(lVar14 + 0xb8);
                    *(undefined8 *)(lVar15 + 0x9c) = local_70;
                    *(undefined4 *)(lVar15 + 0xa4) = local_68;
                    lVar14 = *(long *)(lVar14 + 0xb8);
                    *(undefined4 *)(lVar14 + 0xb0) = 0;
                    *(undefined8 *)(lVar14 + 0xa8) = 0;
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
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


