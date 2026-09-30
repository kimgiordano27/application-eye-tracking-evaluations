/*
FUNCTION_NAME: FUN_056908e0
ENTRY_POINT: 056908e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_056908e0(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar6;
  
  if ((DAT_06b7f8d8 & 1) == 0) {
    FUN_02d6084c(Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06782678);
    FUN_02d6084c(PTR_DAT_06790d00);
    FUN_02d6084c(System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo);
    DAT_06b7f8d8 = 1;
  }
  if (param_5 == 0) goto LAB_05690bb4;
  lVar7 = *(long *)(param_5 + 0x68);
  if (lVar7 == 0) {
    return;
  }
  if (param_4 == 0) goto LAB_05690bb4;
  *(undefined1 *)(param_4 + 0x68) = 1;
  puVar6 = PTR_DAT_0675e258;
  uVar8 = *(undefined8 *)(lVar7 + 0x18);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar2 = Oculus_Platform_Request<AvatarEditorResult>_TypeInfo;
  uVar3 = FUN_0501fa14(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar7 = FUN_0567f8cc(param_3,0);
    if (lVar7 == 0) goto LAB_05690bb4;
    if (*(int *)(lVar7 + 0x20) - 1U < 2) {
      if (*(long *)(param_5 + 0x68) == 0) goto LAB_05690bb4;
      uVar8 = *(undefined8 *)(*(long *)(param_5 + 0x68) + 0x18);
      if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_0501fa14(uVar8,param_3,0);
      if ((uVar3 & 1) != 0) {
        thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
        uVar8 = thunk_FUN_02d9d534();
        puVar6 = System_Tuple<Vector3,_Vector3>_TypeInfo;
        goto LAB_05690bf4;
      }
    }
    if (*(long *)(param_5 + 0x68) == 0) goto LAB_05690bb4;
    param_3 = *(undefined8 *)(*(long *)(param_5 + 0x68) + 0x18);
  }
  uVar8 = *(undefined8 *)PTR_DAT_06782678;
  if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar8 = FUN_05015c2c(uVar8,0);
  uVar3 = FUN_0501ed54(param_3,uVar8,0);
  if ((uVar3 & 1) != 0) {
    uVar8 = *(undefined8 *)PTR_DAT_06790d00;
    if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    param_3 = FUN_05015c2c(uVar8,0);
  }
  puVar6 = System_Threading_Tasks_TaskCompletionSource<int>_TypeInfo;
  if (*(long *)(param_5 + 0x68) == 0) goto LAB_05690bb4;
  uVar8 = FUN_056a6704(*(long *)(param_5 + 0x68),0);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
  }
  uVar8 = FUN_05684d30(param_3,uVar8,0,0);
  lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
  FUN_056a6898(lVar7,param_4,uVar8,0);
  if ((lVar7 == 0) || (lVar4 = *(long *)(lVar7 + 0x48), lVar4 == 0)) goto LAB_05690bb4;
  iVar1 = *(int *)(lVar4 + 0x20);
  if ((1 < iVar1 - 1U) && (iVar1 != 6)) {
    if (iVar1 == 3) {
      lVar4 = FUN_05680718(lVar4,0);
      if (lVar4 == 0) goto LAB_05690bb4;
      if (*(int *)(lVar4 + 0x20) == 6) {
        lVar4 = *(long *)(lVar7 + 0x48);
        if (lVar4 == 0) goto LAB_05690bb4;
        goto LAB_05690b28;
      }
    }
    thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
    uVar8 = thunk_FUN_02d9d534();
    puVar6 = System_Tuple<Vector3,_float>_TypeInfo;
LAB_05690bf4:
    uVar5 = thunk_FUN_02dc61f4(puVar6);
    FUN_05007004(uVar8,uVar5,0);
    uVar5 = thunk_FUN_02dc61f4(
                              System_Tuple<OVRGLTFAnimatinonNode_ThumbstickDirection,_OVRGLTFAnimatinonNode_ThumbstickDirection>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar8,uVar5);
  }
LAB_05690b28:
  uVar3 = FUN_05680aa4(lVar4,0);
  if ((uVar3 & 1) != 0) {
    uVar8 = FUN_0568a368(param_1,param_3,0,param_6);
    *(undefined8 *)(lVar7 + 0x40) = uVar8;
    thunk_FUN_02dd37b4();
  }
  FUN_056a6a60(lVar7,1,0);
  *(undefined1 *)(lVar7 + 0x50) = 0;
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05690b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x308))(param_2,lVar7,*(undefined8 *)(*param_2 + 0x310));
    return;
  }
LAB_05690bb4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


