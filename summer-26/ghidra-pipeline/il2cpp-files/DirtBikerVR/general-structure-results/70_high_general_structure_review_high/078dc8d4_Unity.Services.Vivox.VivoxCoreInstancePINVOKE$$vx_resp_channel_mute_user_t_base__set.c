/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_channel_mute_user_t_base__set
ENTRY_POINT: 078dc8d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_channel_mute_user_t_base__set
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  undefined4 *unaff_x19;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(in_x10[4] + 2) * 0x10 + 0x138);
      goto LAB_078dc914;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_078dc914:
  plVar4 = (long *)(*(code *)*puVar3)();
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Rendering_RenderGraphModule_RenderGraphResourcePool_ResourceLogInfo<object>_TypeInfo
                            );
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo) {
        lVar6 = lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138;
        goto LAB_078dc994;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar6 = FUN_03ac43c4(plVar4,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,2);
LAB_078dc994:
  FUN_0496d698(uVar5,plVar4,*(undefined8 *)(lVar6 + 8),0);
  lVar6 = FUN_0481b0a4();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar6,*(undefined8 *)
                           Unity_Services_CloudSave_Internal_Response<GetKeysResponse>_TypeInfo);
  uVar8 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Response<GetItemsResponse>_TypeInfo);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff7630(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar6 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Response<FileList>_TypeInfo);
    puVar2 = Oculus_Platform_Request<UserProof>_TypeInfo;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *unaff_x24;
    uVar5 = *(undefined8 *)(lVar6 + 0x20);
    iVar1 = *(int *)(lVar7 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar7);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar2);
  }
  return;
}


