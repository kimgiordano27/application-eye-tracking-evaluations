/*
FUNCTION_NAME: FUN_06a3639c
ENTRY_POINT: 06a3639c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_9
*/


void FUN_06a3639c(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar3 = Method_System_Nullable<Vector2>_get_Value__;
  if ((DAT_076e2b33 & 1) == 0) {
    thunk_FUN_032e1da0(Method_System_Nullable<Vector2>_get_Value__);
    DAT_076e2b33 = 1;
  }
  iVar1 = *param_2;
  iVar2 = param_2[2];
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  iVar4 = FUN_06a35a9c(param_1);
  if (iVar2 + iVar1 <= iVar4) {
    iVar1 = param_2[1];
    iVar2 = param_2[3];
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    iVar4 = FUN_06a35af0(param_1);
    if (iVar2 + iVar1 <= iVar4) {
      if (((int)*(undefined8 *)(param_2 + 2) < (int)*(undefined8 *)(param_2 + 4)) ||
         ((int)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) <
          (int)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20))) {
        uVar8 = thunk_FUN_032e1da0(PTR_DAT_07279560);
        uVar8 = FUN_032d5d3c(uVar8,4);
        puVar3 = PTR_DAT_07279558;
        local_60 = CONCAT44(local_60._4_4_,(int)*(undefined8 *)(param_2 + 4));
        uVar9 = thunk_FUN_032e1da0(PTR_DAT_07279558);
        uVar9 = thunk_FUN_032a52d0(uVar9,&local_60);
        FUN_02d9d3f0(uVar8);
        FUN_02da1a84(uVar8,uVar9);
        FUN_02da1ab8(uVar8,0,uVar9);
        local_90 = CONCAT44(local_90._4_4_,param_2[5]);
        uVar9 = thunk_FUN_032e1da0(puVar3);
        uVar9 = thunk_FUN_032a52d0(uVar9,&local_90);
        FUN_02d9d3f0(uVar8);
        FUN_02da1a84(uVar8,uVar9);
        FUN_02da1ab8(uVar8,1,uVar9);
        local_94 = (undefined4)*(undefined8 *)(param_2 + 2);
        uVar9 = thunk_FUN_032e1da0(puVar3);
        uVar9 = thunk_FUN_032a52d0(uVar9,&local_94);
        FUN_02d9d3f0(uVar8);
        FUN_02da1a84(uVar8,uVar9);
        FUN_02da1ab8(uVar8,2,uVar9);
        local_98 = param_2[3];
        uVar9 = thunk_FUN_032e1da0(puVar3);
        uVar9 = thunk_FUN_032a52d0(uVar9,&local_98);
        FUN_02d9d3f0(uVar8);
        FUN_02da1a84(uVar8,uVar9);
        FUN_02da1ab8(uVar8,3,uVar9);
        uVar9 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<LaunchBlockFlowResult>__ctor__);
        uVar8 = FUN_057ab6a4(uVar9,uVar8,0);
        thunk_FUN_032e1da0(PTR_DAT_0727dd28);
        uVar9 = thunk_FUN_032a56a0();
        FUN_0589fe50(uVar9,uVar8,0);
        uVar8 = thunk_FUN_032e1da0(
                                  Method_Oculus_Platform_Request<LaunchFriendRequestFlowResult>__ctor__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar9,uVar8);
      }
      iVar1 = param_2[6];
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      plVar5 = (long *)param_1[1];
      if (plVar5 != (long *)0x0) {
        local_70 = param_1[4];
        uStack_88 = param_1[1];
        local_90 = *param_1;
        uStack_78 = param_1[3];
        uStack_80 = param_1[2];
        local_60 = local_90;
        uStack_58 = uStack_88;
        uStack_50 = uStack_80;
        uStack_48 = uStack_78;
        local_40 = local_70;
        uVar6 = (**(code **)(*plVar5 + 0x218))
                          (plVar5,&local_60,iVar1,*(undefined8 *)(*plVar5 + 0x220));
        if ((uVar6 & 1) != 0) {
          return;
        }
      }
      thunk_FUN_032e1da0(PTR_DAT_0727dd40);
      uVar7 = thunk_FUN_032a56a0();
      uVar8 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<LaunchUnblockFlowResult>__ctor__);
      uVar9 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<DestinationList>__ctor__);
      FUN_05897d8c(uVar7,uVar8,uVar9,0);
      goto LAB_06a366b4;
    }
  }
  thunk_FUN_032e1da0(PTR_DAT_0727dd28);
  uVar7 = thunk_FUN_032a56a0();
  uVar8 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<DestinationList>__ctor__);
  uVar9 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__);
  FUN_0589b56c(uVar7,uVar8,uVar9,0);
LAB_06a366b4:
  uVar8 = thunk_FUN_032e1da0(Method_Oculus_Platform_Request<LaunchFriendRequestFlowResult>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar7,uVar8);
}


