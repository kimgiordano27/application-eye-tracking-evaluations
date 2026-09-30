/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_aux_render_audio_start_t$$Dispose
ENTRY_POINT: 0794dac8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_req_aux_render_audio_start_t__Dispose(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xf00));
  *(undefined1 *)(unaff_x20 + 0xe62) = 1;
  puVar3 = UnityEngine_Android_AndroidUIModeNight_TypeInfo;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x16);
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x18);
      unaff_x19[0x18] = 0;
      unaff_x19[0x19] = 0;
      *unaff_x19 = -1;
      goto LAB_0794dd24;
    }
    lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                UnityEngine_InputSystem_Controls_AnyKeyControl_TypeInfo);
    FUN_0794c964(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(unaff_x19 + 8);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(unaff_x19 + 10);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(unaff_x19 + 0xc);
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0xe);
    thunk_FUN_03afed3c();
    iVar1 = unaff_x19[0x10];
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(unaff_x19 + 0x12);
    *(int *)(lVar4 + 0x30) = iVar1;
    thunk_FUN_03afed3c();
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(unaff_x19 + 0x14);
    thunk_FUN_03afed3c();
    puVar2 = PTR_DAT_0848acd8;
    if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    if (DAT_08975f9e == '\0') {
      FUN_03a8a718(PTR_DAT_0848acd8);
      DAT_08975f9e = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_AnimationState_TypeInfo);
    FUN_04957830(uVar8,lVar4,*(undefined8 *)Unity_Netcode_AnticipationSystem_TypeInfo,0);
    if (*(int *)(*(long *)PTR_DAT_08491378 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_067b2f84(0);
    if (DAT_08987e61 == '\0') {
      FUN_03a8a718(UnityEngine_Rendering_HighDefinition_AOVRequestDataCollection_TypeInfo);
      DAT_08987e61 = '\x01';
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = System_Array__BinarySearch<DataBindingManager_BindingRequest>
                      (lVar5,uVar8,uVar6,0,
                       *(undefined8 *)
                        (*(long *)(*(long *)
                                    UnityEngine_Rendering_HighDefinition_AOVRequestDataCollection_TypeInfo
                                  + 0xb8) + 8),*(undefined8 *)UnityEngine_Animator_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar4,*(undefined8 *)UnityEngine_AnimatorControllerParameter_TypeInfo);
    uVar7 = FUN_0587c6c4(&stack0x00000028,*(undefined8 *)UnityEngine_UI_AnimationTriggers_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000028;
      thunk_FUN_03afed3c(unaff_x19 + 0x16,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fe2618(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  lVar4 = FUN_0587c704(&stack0x00000028,*(undefined8 *)UnityEngine_Timeline_AnimationTrack_TypeInfo)
  ;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 = FUN_058b71ec(lVar4,*(undefined8 *)UnityEngine_AnimatorClipInfo_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)
                        UnityEngine_Animations_AnimationMotionXToDeltaPlayable_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0x18,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03fe2618(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_0794dd24:
  uVar8 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)UnityEngine_Animations_AnimationMixerPlayable_TypeInfo);
  puVar2 = UnityEngine_Animations_AnimationLayerMixerPlayable_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar8,*(undefined8 *)puVar2);
  return;
}


