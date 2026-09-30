/*
FUNCTION_NAME: Unity.Services.Leaderboards.Internal.Models.GetLeaderboardPlayerScore400OneOf$$DeserializeIntoActualObject
ENTRY_POINT: 0342c560
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Leaderboards_Internal_Models_GetLeaderboardPlayerScore400OneOf__DeserializeIntoActualObject
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long unaff_x20;
  ulong uVar18;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  FUN_01ab69ac(UnityEngine_PropertyName_TypeInfo);
                    /* try { // try from 0342c570 to 0352c577 has its CatchHandler @ 0342c680 */
  FUN_01ab69ac(Mono_CSharp_PropertyPattern_TypeInfo);
  FUN_01ab69ac(Mono_CSharp_PropertyPatternMember_TypeInfo);
                    /* try { // try from 0342c584 to 0352c58f has its CatchHandler @ 0342c67c */
  FUN_01ab69ac(Mono_CSharp_PropertySpec_TypeInfo);
  FUN_01ab69ac(Unity_Services_CloudSave_Models_Data_Player_ProtectedReadAccessClassOptions_TypeInfo)
  ;
  FUN_01ab69ac(ExitGames_Client_Photon_Protocol_TypeInfo);
                    /* try { // try from 0342c5ac to 0352c5c3 has its CatchHandler @ 0342c684 */
  *(undefined1 *)(unaff_x20 + 0x639) = 1;
  puVar9 = ExitGames_Client_Photon_Protocol_TypeInfo;
  puVar7 = Mono_CSharp_PropertyExpr_TypeInfo;
  puVar4 = System_ComponentModel_PropertyDescriptorCollection_TypeInfo;
  puVar3 = Unity_Properties_Internal_PropertyBagStore_TypeInfo;
  puVar6 = UnityEngine_EventSystems_OVRPhysicsRaycaster_TypeInfo;
                    /* try { // try from 0342c5d4 to 0352c5e3 has its CatchHandler @ 0342c678 */
  uVar14 = thunk_FUN_01a89e68(*unaff_x22);
  Animancer_AnimancerState__OnSetIsPlaying(uVar14,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar14;
                    /* try { // try from 0342c5f8 to 0352c5ff has its CatchHandler @ 0342c674 */
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x120,uVar14);
  uVar14 = thunk_FUN_01a89e68(*unaff_x22);
  Animancer_AnimancerState__OnSetIsPlaying(uVar14,*unaff_x25);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x128,uVar14);
                    /* try { // try from 0342c624 to 0352c633 has its CatchHandler @ 0342c670 */
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)System_ComponentModel_PropertyDescriptor_TypeInfo);
                    /* try { // try from 0342c634 to 0352c69f has its CatchHandler @ 0342c1dc */
  Animancer_AnimancerState__OnSetIsPlaying
            (uVar14,*(undefined8 *)System_Linq_Expressions_Interpreter_PropertyByRefUpdater_TypeInfo
            );
  *(undefined8 *)(unaff_x19 + 0x140) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((long *)(unaff_x19 + 0x140),uVar14);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)System_Data_PropertyCollection_TypeInfo);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c55c with catch @ 0342c66c
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c624 with catch @ 0342c670
                        */
  Animancer_AnimancerState__OnSetIsPlaying(uVar14,*unaff_x26);
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c5f8 with catch @ 0342c674
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c5d4 with catch @ 0342c678
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c584 with catch @ 0342c67c
                        */
  *(undefined8 *)(unaff_x19 + 0x160) = uVar14;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c570 with catch @ 0342c680
                        */
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x160,uVar14);
  puVar2 = PTR_DAT_03cbdce0;
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c5ac with catch @ 0342c684
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0342c4d4 with catch @ 0342c688
                        */
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbdce0);
                    /* try { // try from 0342c6a0 to 0352c6a3 has its CatchHandler @ 0342c6cc */
                    /* try { // try from 0342c6a4 to 0352c6db has its CatchHandler @ 0342c1dc */
  FUN_033a2014(uVar14,*(undefined8 *)
                       Unity_Services_CloudSave_Models_Data_Player_ProtectedReadAccessClassOptions_TypeInfo
               ,0);
  *(undefined8 *)(unaff_x19 + 0x170) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x170,uVar14);
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)Mono_CSharp_PropertyBasedMember_TypeInfo);
                    /* catch() { ... } // from try @ 0342c6a0 with catch @ 0342c6cc */
                    /* try { // try from 0342c6dc to 0352c6e3 has its CatchHandler @ 0342c6f8 */
  FUN_0219a4f0(uVar14,*(undefined8 *)Mono_CSharp_PropertyBase_TypeInfo);
                    /* try { // try from 0342c6e4 to 0352c6ef has its CatchHandler @ 0342c1dc */
  *(undefined8 *)(unaff_x19 + 0x178) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x178,uVar14);
                    /* try { // try from 0342c6f0 to 0352c6f7 has its CatchHandler @ 0342c6f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342c6dc with catch @ 0342c6f8
                       catch(type#2 @ 00000000) { ... } // from try @ 0342c6f0 with catch @ 0342c6f8
                        */
  if (*(int *)(*(long *)PTR_DAT_03cbdcd8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar8 = UnityEngine_PropertyName_TypeInfo;
  puVar5 = PTR_DAT_03cc8538;
  FUN_033c8e14();
  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
  FUN_033a2014(uVar14,*(undefined8 *)puVar9,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x19 + 0x38),uVar14);
  *(undefined4 *)(unaff_x19 + 0x10) = unaff_w21;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar7,0);
  **(undefined4 **)(*(long *)puVar3 + 0xb8) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)Mono_CSharp_PropertyPatternMember_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)Unity_Properties_PropertyMember_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)Mono_CSharp_PropertyPattern_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)System_Linq_Expressions_PropertyExpression_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)Mono_CSharp_PropertySpec_TypeInfo,0);
  *(undefined4 *)(unaff_x19 + 0xe4) = uVar11;
  uVar11 = FUN_03691af8(*(undefined8 *)System_Reflection_PropertyInfo_TypeInfo,0);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar16);
    lVar16 = *(long *)puVar6;
  }
  *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x10) = uVar11;
  puVar2 = PTR_DAT_03cd9310;
  uVar11 = FUN_03691af8(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14) = uVar11;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  bVar10 = FUN_03403ba8(0);
  *(byte *)(unaff_x19 + 0xe0) = bVar10 & 1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar4 = PTR_DAT_03cc3470;
  puVar3 = PTR_DAT_03cbf288;
  puVar2 = PTR_DAT_03cbe888;
  iVar12 = FUN_03417f74(0);
  iVar1 = iVar12 + 1;
  iVar13 = iVar1;
  if (*(char *)(unaff_x19 + 0xe0) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar13 = FUN_0276c214(iVar1,iVar12,0);
  }
  uVar14 = FUN_01ab6a94(*(undefined8 *)puVar2,iVar13);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x118);
  uVar14 = FUN_01ab6a94(*(undefined8 *)puVar2,iVar1);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x110);
  uVar14 = FUN_01ab6a94(*(undefined8 *)puVar2,iVar1);
  *(undefined8 *)(unaff_x19 + 0x158) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x158);
  uVar14 = FUN_01ab6a94(*(undefined8 *)puVar4,iVar13);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x130);
  uVar14 = FUN_01ab6a94(*(undefined8 *)puVar3,iVar1);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x148);
  uVar14 = FUN_01ab6a94(*(undefined8 *)puVar4,iVar13);
  lVar16 = *(long *)puVar6;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar16);
    lVar16 = *(long *)puVar6;
  }
  puVar15 = (undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x18);
  *puVar15 = uVar14;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar15,uVar14);
  uVar18 = 0;
  while( true ) {
    lVar16 = *(long *)puVar6;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar16 = *(long *)puVar6;
    }
    puVar15 = *(undefined8 **)(lVar16 + 0xb8);
    lVar17 = puVar15[3];
    if (lVar17 == 0) break;
    if ((long)*(int *)(lVar17 + 0x18) <= (long)uVar18) {
      if (*(char *)(unaff_x19 + 0xe0) != '\0') {
        return;
      }
      uVar14 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc8b40,iVar12);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar14;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x138);
      if (*(long *)(unaff_x19 + 0x160) != 0) {
        FUN_022158dc(*(long *)(unaff_x19 + 0x160),iVar12,
                     *(undefined8 *)System_ComponentModel_PropertyChangingEventArgs_TypeInfo);
        lVar16 = *(long *)(unaff_x19 + 0x140);
        if (lVar16 != 0) {
          FUN_022158dc(lVar16,iVar12,
                       *(undefined8 *)System_ComponentModel_PropertyChangedEventArgs_TypeInfo);
          return;
        }
      }
      break;
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      puVar15 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
      lVar17 = puVar15[3];
    }
    if (lVar17 == 0) break;
    if (*(uint *)(lVar17 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar14 = *puVar15;
    lVar17 = lVar17 + uVar18 * 0x10;
    uVar18 = uVar18 + 1;
    *(undefined8 *)(lVar17 + 0x28) = puVar15[1];
    *(undefined8 *)(lVar17 + 0x20) = uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


