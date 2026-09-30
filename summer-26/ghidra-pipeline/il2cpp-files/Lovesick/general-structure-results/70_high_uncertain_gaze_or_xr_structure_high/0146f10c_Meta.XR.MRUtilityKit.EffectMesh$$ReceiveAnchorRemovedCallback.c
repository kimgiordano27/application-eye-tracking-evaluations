/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ReceiveAnchorRemovedCallback
ENTRY_POINT: 0146f10c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 84
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__ReceiveAnchorRemovedCallback(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(long *)(*param_1 + 0x40) != *(long *)(*unaff_x22 + 0x40)) goto LAB_0146f430;
  puVar3 = (undefined4 *)thunk_FUN_00d624a0();
  FUN_0267da4c(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
  uVar4 = FUN_0267dbbc();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x23);
  }
  puVar1 = Method_System_IO_Enumeration_FileSystemEnumerableFactory_<>c_<UserEntries>b__5_0__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
  uVar5 = FUN_02681b9c(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0xbc);
    in_stack_00000010 = *(undefined8 *)(unaff_x20 + 0xb4);
    lVar7 = *(long *)(unaff_x20 + 0x10);
    uVar4 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000010);
    if ((lVar7 == 0) ||
       (plVar6 = (long *)FUN_0146a764(lVar7,*(undefined8 *)puVar1,uVar4,0),
       puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo, plVar6 == (long *)0x0))
    goto LAB_0146f42c;
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x22 + 0x40)) goto LAB_0146f430;
    puVar3 = (undefined4 *)thunk_FUN_00d624a0();
    FUN_0267da4c(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x20 + 0xc4);
    lVar7 = *(long *)(unaff_x20 + 0x10);
    uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
    if ((lVar7 == 0) ||
       (plVar6 = (long *)FUN_0146a764(lVar7,*(undefined8 *)puVar2,uVar4,0), plVar6 == (long *)0x0))
    goto LAB_0146f42c;
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146f430;
    puVar3 = (undefined4 *)thunk_FUN_00d624a0();
    uVar8 = *puVar3;
  }
  else {
    FUN_0267da4c(*(undefined4 *)(unaff_x20 + 0x78),*(undefined4 *)(unaff_x20 + 0x7c),
                 *(undefined4 *)(unaff_x20 + 0x80),*(undefined4 *)(unaff_x20 + 0x84));
    FUN_0267f168(*(undefined4 *)(unaff_x20 + 0x8c));
    uVar8 = *(undefined4 *)(unaff_x20 + 0x88);
  }
  FUN_0267f168(uVar8);
  uVar4 = FUN_0267dbbc();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x23);
  }
  FUN_02681b9c(uVar4,0,0);
  FUN_0267f168(*(undefined4 *)(unaff_x20 + 0x90));
  uVar4 = FUN_0267dbbc();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x23);
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
  uVar5 = FUN_02681b9c(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    FUN_0267e350();
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0xd0);
    in_stack_00000010 = *(undefined8 *)(unaff_x20 + 200);
    lVar7 = *(long *)(unaff_x20 + 0x10);
    uVar4 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000010);
    if ((lVar7 == 0) ||
       (plVar6 = (long *)FUN_0146a764(lVar7,*(undefined8 *)puVar2,uVar4,0), plVar6 == (long *)0x0))
    {
LAB_0146f42c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x22 + 0x40)) {
LAB_0146f430:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar3 = (undefined4 *)thunk_FUN_00d624a0();
    uVar9 = *puVar3;
    uVar8 = puVar3[1];
    uVar10 = puVar3[2];
    uVar11 = puVar3[3];
  }
  else {
    FUN_0267e30c();
    uVar9 = 0x3f800000;
    uVar8 = uVar9;
    uVar10 = uVar9;
    uVar11 = uVar9;
  }
  FUN_0267da4c(uVar9,uVar8,uVar10,uVar11);
  return;
}


