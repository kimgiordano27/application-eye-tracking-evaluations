/*
FUNCTION_NAME: FUN_03568d28
ENTRY_POINT: 03568d28
PROGRAM: vrlegs-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_03568d28(long param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,byte param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  puVar2 = OVRVirtualKeyboard_KeyboardPosition_TypeInfo;
  if ((DAT_0412dfb4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
    FUN_01ab69ac(OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__18_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbea58);
    FUN_01ab69ac(HexabodyVR_PlayerController_ObjectCollisionDisabler_<>c_TypeInfo);
    FUN_01ab69ac(OVRPlugin_InsightPassthroughColorMapType_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cecfe0);
    FUN_01ab69ac(PTR_DAT_03cc0590);
    FUN_01ab69ac(HexabodyVR_PlayerController_ObjectCollisionDisabler_<>c__DisplayClass3_0_TypeInfo);
    FUN_01ab69ac(UnityEngine_ObjectDispatcher_<>c_TypeInfo);
    FUN_01ab69ac(
                System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_TypeInfo
                );
    DAT_0412dfb4 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03776fec(0);
  iVar5 = FUN_0377715c(param_1,param_2,0);
  puVar4 = 
  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_TypeInfo;
  puVar3 = UnityEngine_ObjectDispatcher_<>c_TypeInfo;
  puVar1 = PTR_DAT_03cbe438;
  if (iVar5 == 0) {
    lVar7 = FUN_01fe44b4(*(undefined8 *)
                          HexabodyVR_PlayerController_ObjectCollisionDisabler_<>c_TypeInfo);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x30) =
           *(undefined8 *)
            HexabodyVR_PlayerController_ObjectCollisionDisabler_<>c__DisplayClass3_0_TypeInfo;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037774c4(&local_c0,0);
      memcpy(auStack_120,&local_c0,0x60);
      memcpy((void *)(lVar7 + 0x50),auStack_120,0x60);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar7 + 0x58,0);
      if (param_7 == 1) {
        *(long *)(lVar7 + 0x40) = param_1;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar7 + 0x40),param_1);
      }
      *(int *)(lVar7 + 0x48) = param_7;
      *(int *)(lVar7 + 0x108) = param_5;
      *(int *)(lVar7 + 0x10c) = param_6;
      *(int *)(lVar7 + 0x110) = param_3;
      *(uint *)(lVar7 + 0x114) = param_4;
      lVar8 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cecfe0,1);
      plVar10 = (long *)(lVar7 + 0xd8);
      *plVar10 = lVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10,lVar8);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0590);
      FUN_036af33c(uVar6,0,0,1,0,0);
      lVar8 = *plVar10;
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined8 *)(lVar8 + 0x20) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar8 + 0x20),uVar6);
        *(byte *)(lVar7 + 0xe4) = param_8 & 1;
        puVar2 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if ((param_4 >> 4 & 1) == 0) {
          uVar9 = FUN_03597ef4();
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369919c(lVar8,uVar9,0);
          if (lVar8 == 0) goto LAB_0356923c;
          FUN_03699854(lVar8,**(undefined4 **)(*(long *)puVar2 + 0xb8),uVar6,0);
          FUN_0369d118((float)param_5,lVar8,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68),0);
          FUN_0369d118((float)param_6,lVar8,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x6c),0);
          FUN_0369d118((float)(param_3 + 1),lVar8,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0);
          FUN_0369d118(*(undefined4 *)(lVar7 + 0x1a8),lVar8,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30),0);
          FUN_0369d118(*(undefined4 *)(lVar7 + 0x1b0),lVar8,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34),0);
          iVar5 = 1;
        }
        else {
          uVar9 = FUN_03597ff4(0);
          lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369919c(lVar8,uVar9,0);
          if (lVar8 == 0) goto LAB_0356923c;
          FUN_03699854(lVar8,**(undefined4 **)(*(long *)puVar2 + 0xb8),uVar6,0);
          FUN_0369d118((float)param_5,lVar8,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x68),0);
          FUN_0369d118((float)param_6,lVar8,
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x6c),0);
          iVar5 = 0;
        }
        *(long *)(lVar7 + 0x20) = lVar8;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar7 + 0x20),lVar8);
        puVar1 = OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__18_TypeInfo;
        lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                    OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__18_TypeInfo)
        ;
        puVar2 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
        FUN_02215594(lVar8,8,*(undefined8 *)OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
        local_130 = 0;
        uStack_128 = 0;
        FUN_03776ad0(&local_130,0,0,param_5 - iVar5,param_6 - iVar5,0);
        if (lVar8 != 0) {
          local_c0 = local_130;
          uStack_b8 = uStack_128;
          FUN_01b5f01c(lVar8,&local_c0,*(undefined8 *)OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
          *(long *)(lVar7 + 0xf0) = lVar8;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar7 + 0xf0),lVar8);
          uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
          FUN_02215594(uVar6,8,*(undefined8 *)puVar2);
          *(undefined8 *)(lVar7 + 0xe8) = uVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar7 + 0xe8),uVar6);
          FUN_03568878(lVar7);
          return lVar7;
        }
      }
    }
  }
  else if (param_1 != 0) {
    uVar6 = FUN_036d3824(param_1,0);
    uVar6 = FUN_025bdc88(*(undefined8 *)puVar3,uVar6,*(undefined8 *)puVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    FUN_0367b470(uVar6,param_1,0);
    return 0;
  }
LAB_0356923c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


