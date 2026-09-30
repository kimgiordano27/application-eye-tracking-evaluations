/*
FUNCTION_NAME: Unity.Jobs.LowLevel.Unsafe.JobsUtility$$ScheduleParallelFor
ENTRY_POINT: 03568d58
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


long Unity_Jobs_LowLevel_Unsafe_JobsUtility__ScheduleParallelFor
               (ulong param_1,long param_2,undefined4 param_3,int param_4,uint param_5,int param_6,
               int param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte unaff_w24;
  long *plVar9;
  long *unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x28 + 0xfb4) = 1;
  }
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_03776fec(0);
  iVar4 = FUN_0377715c(param_2,param_3,0);
  puVar3 = 
  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TopLevelAssemblyTypeResolver_TypeInfo;
  puVar2 = UnityEngine_ObjectDispatcher_<>c_TypeInfo;
  puVar1 = PTR_DAT_03cbe438;
  if (iVar4 == 0) {
    lVar6 = FUN_01fe44b4(*(undefined8 *)
                          HexabodyVR_PlayerController_ObjectCollisionDisabler_<>c_TypeInfo);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x30) =
           *(undefined8 *)
            HexabodyVR_PlayerController_ObjectCollisionDisabler_<>c__DisplayClass3_0_TypeInfo;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_037774c4(&stack0x00000070,0);
      memcpy(&stack0x00000010,&stack0x00000070,0x60);
      memcpy((void *)(lVar6 + 0x50),&stack0x00000010,0x60);
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x58,0);
      if (param_8 == 1) {
        *(long *)(lVar6 + 0x40) = param_2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar6 + 0x40),param_2);
      }
      *(int *)(lVar6 + 0x48) = param_8;
      *(int *)(lVar6 + 0x108) = param_6;
      *(int *)(lVar6 + 0x10c) = param_7;
      *(int *)(lVar6 + 0x110) = param_4;
      *(uint *)(lVar6 + 0x114) = param_5;
      lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cecfe0,1);
      plVar9 = (long *)(lVar6 + 0xd8);
      *plVar9 = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9,lVar7);
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0590);
      FUN_036af33c(uVar5,0,0,1,0,0);
      lVar7 = *plVar9;
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        *(undefined8 *)(lVar7 + 0x20) = uVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar7 + 0x20),uVar5);
        *(byte *)(lVar6 + 0xe4) = unaff_w24 & 1;
        puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
        if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        if ((param_5 >> 4 & 1) == 0) {
          uVar8 = FUN_03597ef4();
          lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369919c(lVar7,uVar8,0);
          if (lVar7 == 0) goto LAB_0356923c;
          FUN_03699854(lVar7,**(undefined4 **)(*(long *)puVar1 + 0xb8),uVar5,0);
          FUN_0369d118((float)param_6,lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68),0);
          FUN_0369d118((float)param_7,lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c),0);
          FUN_0369d118((float)(param_4 + 1),lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54),0);
          FUN_0369d118(*(undefined4 *)(lVar6 + 0x1a8),lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),0);
          FUN_0369d118(*(undefined4 *)(lVar6 + 0x1b0),lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34),0);
        }
        else {
          uVar8 = FUN_03597ff4(0);
          lVar7 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
          FUN_0369919c(lVar7,uVar8,0);
          if (lVar7 == 0) goto LAB_0356923c;
          FUN_03699854(lVar7,**(undefined4 **)(*(long *)puVar1 + 0xb8),uVar5,0);
          FUN_0369d118((float)param_6,lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68),0);
          FUN_0369d118((float)param_7,lVar7,
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c),0);
        }
        *(long *)(lVar6 + 0x20) = lVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((long *)(lVar6 + 0x20),lVar7);
        puVar2 = OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__18_TypeInfo;
        lVar7 = thunk_FUN_01a89e68(*(undefined8 *)
                                    OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__18_TypeInfo)
        ;
        puVar1 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
        FUN_02215594(lVar7,8,*(undefined8 *)OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
        FUN_03776ad0();
        if (lVar7 != 0) {
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          FUN_01b5f01c(lVar7,&stack0x00000070,
                       *(undefined8 *)OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
          *(long *)(lVar6 + 0xf0) = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar6 + 0xf0),lVar7);
          uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
          FUN_02215594(uVar5,8,*(undefined8 *)puVar1);
          *(undefined8 *)(lVar6 + 0xe8) = uVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar6 + 0xe8),uVar5);
          FUN_03568878(lVar6);
          return lVar6;
        }
      }
    }
  }
  else if (param_2 != 0) {
    uVar5 = FUN_036d3824(param_2,0);
    uVar5 = FUN_025bdc88(*(undefined8 *)puVar2,uVar5,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)puVar1);
    }
    FUN_0367b470(uVar5,param_2,0);
    return 0;
  }
LAB_0356923c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


