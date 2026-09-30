/*
FUNCTION_NAME: FUN_03570a68
ENTRY_POINT: 03570a68
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_possible_biometrics_hits_2
*/


void FUN_03570a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar10 = UnityEngine_Playables_PlayableBinding_CreateOutputMethod_TypeInfo;
  puVar9 = RootMotion_Demos_PlatformRotator_<SwitchRotation>d__14_TypeInfo;
  puVar8 = Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo;
  puVar7 = Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo;
  puVar6 = Crosstales_Common_Util_PlatformController_<>c_TypeInfo;
  puVar5 = FMODUnity_Platform_PropertyThreadAffinityList_TypeInfo;
  puVar2 = FMODUnity_Platform_PropertyStringList_TypeInfo;
  puVar4 = _Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<>c_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  puVar1 = PTR_DAT_03cc8ba8;
  if ((DAT_0412dfdb & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc8bb0);
    FUN_01ab69ac(PTR_DAT_03cc8ba8);
    FUN_01ab69ac(UnityEngine_Playables_PlayableBinding_CreateOutputMethod_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_Coins_OneTimeCoinTaskDisplay_<>c_TypeInfo);
    FUN_01ab69ac(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_01ab69ac(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
                );
    FUN_01ab69ac(Crosstales_Common_Util_PlatformController_<>c_TypeInfo);
    FUN_01ab69ac(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo);
    FUN_01ab69ac(FMODUnity_Platform_PropertyThreadAffinityList_TypeInfo);
    FUN_01ab69ac(FMODUnity_Platform_PropertyStringList_TypeInfo);
    FUN_01ab69ac(Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1_TypeInfo);
    FUN_01ab69ac(RootMotion_Demos_PlatformRotator_<SwitchRotation>d__14_TypeInfo);
    FUN_01ab69ac(_PlayerGuide_Scripts_PlayerBehaviourTracker_<>c_TypeInfo);
    DAT_0412dfdb = 1;
  }
  uVar11 = FUN_03669658(*(undefined8 *)puVar2,1,0,0,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar5,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar6,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar7,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar8,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)puVar9,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_03669658(*(undefined8 *)_PlayerGuide_Scripts_PlayerBehaviourTracker_<>c_TypeInfo,1,0,
                        0,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x30) = uVar11;
  puVar13 = (undefined8 *)(lVar12 + 0x38);
  *puVar13 = *(undefined8 *)
              Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass59_0_TypeInfo
  ;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  Animancer_AnimancerState__OnSetIsPlaying(uVar11,*(undefined8 *)puVar10);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
  *puVar13 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_03cc8bb0;
  FUN_021e44d8(uVar11,*(undefined8 *)PTR_DAT_03cc8bb0);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
  *puVar13 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
  Animancer_AnimancerState__OnSetIsPlaying(uVar11,*(undefined8 *)puVar10);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
  *puVar13 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,uVar11);
  uVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_021e44d8(uVar11,*(undefined8 *)puVar2);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
  *puVar13 = uVar11;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar13,uVar11);
  return;
}


