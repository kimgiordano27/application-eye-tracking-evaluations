/*
FUNCTION_NAME: Unity.Jobs.LowLevel.Unsafe.JobsUtility$$ScheduleParallelForTransform_Injected
ENTRY_POINT: 03568f5c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Jobs_LowLevel_Unsafe_JobsUtility__ScheduleParallelForTransform_Injected(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  byte unaff_w24;
  long *plVar6;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  lVar3 = FUN_01ab6a94(**(undefined8 **)(param_1 + 0xfe0),1);
  plVar6 = (long *)(unaff_x21 + 0xd8);
  *plVar6 = lVar3;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar3);
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc0590);
  FUN_036af33c(uVar4,0,0,1,0,0);
  lVar3 = *plVar6;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar3 + 0x20),uVar4);
    *(byte *)(unaff_x21 + 0xe4) = unaff_w24 & 1;
    puVar1 = OVRPlugin_InsightPassthroughColorMapType_TypeInfo;
    if (*(int *)(*(long *)OVRPlugin_InsightPassthroughColorMapType_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if ((unaff_w23 >> 4 & 1) == 0) {
      uVar5 = FUN_03597ef4();
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
      FUN_0369919c(lVar3,uVar5,0);
      if (lVar3 == 0) goto LAB_0356923c;
      FUN_03699854(lVar3,**(undefined4 **)(*(long *)puVar1 + 0xb8),uVar4,0);
      FUN_0369d118((float)unaff_w20,lVar3,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68),
                   0);
      FUN_0369d118((float)unaff_w19,lVar3,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c),
                   0);
      FUN_0369d118((float)(unaff_w22 + 1),lVar3,
                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x54),0);
      FUN_0369d118(*(undefined4 *)(unaff_x21 + 0x1a8),lVar3,
                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30),0);
      FUN_0369d118(*(undefined4 *)(unaff_x21 + 0x1b0),lVar3,
                   *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34),0);
    }
    else {
      uVar5 = FUN_03597ff4(0);
      lVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbea58);
      FUN_0369919c(lVar3,uVar5,0);
      if (lVar3 == 0) goto LAB_0356923c;
      FUN_03699854(lVar3,**(undefined4 **)(*(long *)puVar1 + 0xb8),uVar4,0);
      FUN_0369d118((float)unaff_w20,lVar3,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68),
                   0);
      FUN_0369d118((float)unaff_w19,lVar3,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x6c),
                   0);
    }
    *(long *)(unaff_x21 + 0x20) = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(unaff_x21 + 0x20),lVar3);
    puVar2 = OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__18_TypeInfo;
    lVar3 = thunk_FUN_01a89e68(*(undefined8 *)
                                OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__18_TypeInfo);
    puVar1 = OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo;
    FUN_02215594(lVar3,8,*(undefined8 *)OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
    FUN_03776ad0();
    if (lVar3 != 0) {
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      FUN_01b5f01c(lVar3,&stack0x00000070,
                   *(undefined8 *)OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
      *(long *)(unaff_x21 + 0xf0) = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x21 + 0xf0),lVar3);
      uVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02215594(uVar4,8,*(undefined8 *)puVar1);
      *(undefined8 *)(unaff_x21 + 0xe8) = uVar4;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x21 + 0xe8),uVar4);
      FUN_03568878();
      return;
    }
  }
LAB_0356923c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


