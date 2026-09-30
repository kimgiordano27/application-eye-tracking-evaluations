/*
FUNCTION_NAME: FUN_06148fdc
ENTRY_POINT: 06148fdc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 82
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_3;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_06148fdc(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  
  if ((bRam0000000006e956bd & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a3ac90);
    FUN_02e3ca1c(PTR_DAT_06a662d0);
    FUN_02e3ca1c(UnityEngine_Rendering_BatchBufferTarget_TypeInfo);
    FUN_02e3ca1c(System_Linq_Expressions_AssignBinaryExpression_TypeInfo);
    FUN_02e3ca1c(UnityEngine_UIElements_BaseTreeViewController_TypeInfo);
    FUN_02e3ca1c(UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a79868);
    FUN_02e3ca1c(Oculus_Platform_Request<PurchaseList>_TypeInfo);
    bRam0000000006e956bd = 1;
  }
  puVar3 = PTR_DAT_06a79868;
  uVar7 = FUN_062645f8(param_3,0);
  if (((((uVar7 & 1) == 0) || (param_3[0x7b] == 0)) ||
      (((char)param_3[0x5e] != '\0' &&
       ((*(char *)((long)param_3 + 0x2f2) != '\0' && ((char)param_3[0x18] != '\0')))))) ||
     (uVar7 = FUN_0612ed0c(param_3), (uVar7 & 1) != 0)) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_06109228(param_4,0,0);
    return;
  }
  if (*(char *)((long)param_3 + 0x38c) == '\0') {
    lVar10 = FUN_06264d40(param_3,0);
  }
  else {
    lVar10 = param_3[0x51];
  }
  if ((*(int *)((long)param_3 + 0x1b4) == 0 && (char)param_3[0x38] != '\0') ||
     (*(int *)((long)param_3 + 0x1b4) == 1)) {
    bVar5 = (**(code **)(*param_3 + 0x7a8))(param_3,*(undefined8 *)(*param_3 + 0x7b0));
  }
  else if ((*(char *)((long)param_3 + 0x2e1) == '\0') || (*(char *)((long)param_3 + 0x3bc) == '\0'))
  {
    if (param_3[0x65] == 0) goto LAB_0614939c;
    bVar5 = FUN_061939cc(param_3[0x65],0);
  }
  else {
    bVar5 = *(char *)((long)param_3 + 0x99) != '\0';
  }
  if ((*(int *)((long)param_3 + 0x1b4) == 0 && (char)param_3[0x38] != '\0') ||
     (*(int *)((long)param_3 + 0x1b4) == 1)) {
    uVar11 = FUN_061359fc(param_3);
  }
  else {
    if (param_3[0x66] == 0) goto LAB_0614939c;
    uVar11 = FUN_04acf55c(param_3[0x66],
                          *(undefined8 *)Oculus_Platform_Request<PurchaseList>_TypeInfo);
  }
  FUN_060ba3e8(&local_9c,lVar10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_06108af0(local_9c,uStack_98,local_94,param_4,0);
  FUN_06108c44(uStack_90,local_8c,uStack_88,local_84,param_4,0);
  FUN_06108a0c(param_4,bVar5 & 1,0);
  FUN_06108e7c(uVar11,param_4,0);
  FUN_06108dec(param_4,*(undefined4 *)((long)param_3 + 0x2d4),0);
  UnityEngine_Android_Permission__RequestUserPermissions(param_4,0,0);
  lVar10 = *(long *)(param_4 + 0xd8);
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    FUN_061493a0(param_3);
    if (param_3[0x7b] != 0) {
      iVar1 = *(int *)(param_3[0x7b] + 0x18);
      if (0 < iVar1) {
        iVar6 = FUN_03fef0b4(lVar10,*(undefined8 *)UnityEngine_Rendering_BatchBufferTarget_TypeInfo)
        ;
        uVar11 = uStack_88;
        if (iVar6 < iVar1) {
          FUN_03fef0cc(lVar10,iVar1,
                       *(undefined8 *)UnityEngine_Rendering_BatchCullingViewType_TypeInfo);
          uVar11 = uStack_88;
        }
        puVar4 = UnityEngine_UIElements_BaseTreeViewController_TypeInfo;
        puVar3 = PTR_DAT_06a3ac90;
        iVar6 = 0;
        do {
          if (param_3[0x7b] == 0) goto LAB_0614939c;
          FUN_040e5aac(param_3[0x7b],iVar6,*(undefined8 *)puVar4);
          uVar12 = FUN_05d965fc(0);
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar9 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_0614939c;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar8 + 0x20) = uVar12;
            *(undefined4 *)(lVar8 + 0x24) = param_2;
            *(undefined4 *)(lVar8 + 0x28) = uVar11;
          }
          else {
            FUN_03fef5ac(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      return;
    }
  }
LAB_0614939c:
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


