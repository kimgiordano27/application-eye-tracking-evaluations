/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_account_channel_get_acl_t
ENTRY_POINT: 078dc858
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_account_channel_get_acl_t(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *unaff_x24;
  undefined8 in_stack_00000018;
  
  lVar9 = *(long *)(unaff_x19 + 8);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_078d988c(lVar9);
  uVar3 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 10),0);
                    /* try { // try from 078dc874 to 079dc8eb has its CatchHandler @ 078dd094 */
  if ((uVar3 & 1) != 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar4 = thunk_FUN_03ac74bc();
    uVar10 = thunk_FUN_03af1434(Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo);
    uVar6 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
    FUN_066b7574(uVar4,uVar10,uVar6,0);
    uVar10 = thunk_FUN_03af1434(
                               Unity_Services_CloudSave_Internal_Response<QueryIndexResponse>_TypeInfo
                               );
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,uVar10);
  }
  uVar10 = *(undefined8 *)(unaff_x19 + 10);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                              Unity_Services_CloudSave_Internal_Response<byte[]>_TypeInfo);
  FUN_078dcc0c(uVar4,uVar10,0);
  plVar11 = *(long **)(lVar9 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar11;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_084963c0) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_078dc914;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_084963c0,2);
LAB_078dc914:
  plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
  uVar10 = thunk_FUN_03ac74bc(*(undefined8 *)
                               UnityEngine_Rendering_RenderGraphModule_RenderGraphResourcePool_ResourceLogInfo<object>_TypeInfo
                             );
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar7 = *plVar11;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo) {
        lVar7 = lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138;
        goto LAB_078dc994;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  lVar7 = FUN_03ac43c4(plVar11,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,2);
LAB_078dc994:
  FUN_0496d698(uVar10,plVar11,*(undefined8 *)(lVar7 + 8),0);
  lVar9 = FUN_0481b0a4(lVar9,uVar10,uVar4,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Response<MemoryStream>_TypeInfo);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar9,*(undefined8 *)
                           Unity_Services_CloudSave_Internal_Response<GetKeysResponse>_TypeInfo);
  uVar3 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Response<GetItemsResponse>_TypeInfo);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff7630(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar9 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Response<FileList>_TypeInfo);
    puVar2 = Oculus_Platform_Request<UserProof>_TypeInfo;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *unaff_x24;
    uVar4 = *(undefined8 *)(lVar9 + 0x20);
    iVar1 = *(int *)(lVar7 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar7);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


