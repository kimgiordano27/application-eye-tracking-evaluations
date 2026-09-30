/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$Start
ENTRY_POINT: 0146a3ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__Start(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar9 = 0x40a00000;
  if (!in_ZR) {
    uVar9 = 0xbf800000;
  }
  if (unaff_x19 != 0) {
    FUN_0267f168(uVar9);
    puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    uVar4 = FUN_0267dbbc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar3 = StringLiteral_7349;
    puVar1 = PTR_DAT_033f45c0;
    uVar5 = FUN_02681b9c(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(unaff_x20 + 0x10);
      uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3);
      if ((lVar8 == 0) ||
         (plVar6 = (long *)FUN_0146a764(lVar8,*(undefined8 *)puVar1,uVar4), plVar6 == (long *)0x0))
      goto thunk_FUN_00da518c;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_0146a760;
      puVar7 = (undefined4 *)thunk_FUN_00d624a0();
      uVar9 = *puVar7;
      uVar10 = puVar7[1];
      uVar11 = puVar7[2];
      uVar12 = puVar7[3];
    }
    else {
      uVar9 = *(undefined4 *)(unaff_x20 + 0x60);
      uVar10 = *(undefined4 *)(unaff_x20 + 100);
      uVar11 = *(undefined4 *)(unaff_x20 + 0x68);
      uVar12 = *(undefined4 *)(unaff_x20 + 0x6c);
    }
    FUN_0267da4c(uVar9,uVar10,uVar11,uVar12);
    uVar4 = FUN_0267dbbc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar5 = FUN_02681b9c(uVar4,0,0);
    puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(unaff_x20 + 0x10);
      uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)System_Runtime_InteropServices_InAttribute_TypeInfo)
      ;
      if ((lVar8 == 0) ||
         (plVar6 = (long *)FUN_0146a764(lVar8,*(undefined8 *)
                                               OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo
                                        ,uVar4), plVar6 == (long *)0x0)) goto thunk_FUN_00da518c;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146a760;
      puVar7 = (undefined4 *)thunk_FUN_00d624a0();
      FUN_0267f168(*puVar7);
      FUN_0267f168(*(undefined4 *)(unaff_x20 + 0xa4));
    }
    if (*(int *)(unaff_x20 + 0x18) == 5) {
      uVar4 = FUN_0267dbbc();
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      puVar1 = StringLiteral_38;
      uVar5 = FUN_02681b9c(uVar4,0,0);
      if ((uVar5 & 1) == 0) {
        lVar8 = *(long *)(unaff_x20 + 0x10);
        uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3);
        if ((lVar8 == 0) ||
           (plVar6 = (long *)FUN_0146a764(lVar8,*(undefined8 *)puVar1,uVar4), plVar6 == (long *)0x0)
           ) goto thunk_FUN_00da518c;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) goto LAB_0146a760;
        puVar7 = (undefined4 *)thunk_FUN_00d624a0();
        uVar9 = *puVar7;
        uVar10 = puVar7[1];
        uVar11 = puVar7[2];
        uVar12 = puVar7[3];
      }
      else {
        uVar9 = *(undefined4 *)(unaff_x20 + 0x70);
        uVar10 = *(undefined4 *)(unaff_x20 + 0x74);
        uVar11 = *(undefined4 *)(unaff_x20 + 0x78);
        uVar12 = *(undefined4 *)(unaff_x20 + 0x7c);
      }
      FUN_0267da4c(uVar9,uVar10,uVar11,uVar12);
      FUN_0267f168(0x3f800000);
    }
    uVar4 = FUN_0267dbbc();
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    puVar2 = System_Threading_Tasks_TaskToApm_<>c__DisplayClass3_0_TypeInfo;
    uVar5 = FUN_02681b9c(uVar4,0,0);
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(unaff_x20 + 0x10);
      uVar4 = thunk_FUN_00d61fa0(*(undefined8 *)puVar3);
      if ((lVar8 == 0) ||
         (plVar6 = (long *)FUN_0146a764(lVar8,*(undefined8 *)puVar2,uVar4), plVar6 == (long *)0x0))
      goto thunk_FUN_00da518c;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
LAB_0146a760:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c();
      }
      puVar7 = (undefined4 *)thunk_FUN_00d624a0();
      uVar9 = *puVar7;
      uVar10 = puVar7[1];
      uVar11 = puVar7[2];
      uVar12 = puVar7[3];
    }
    else {
      uVar9 = *(undefined4 *)(unaff_x20 + 0x80);
      uVar10 = *(undefined4 *)(unaff_x20 + 0x84);
      uVar11 = *(undefined4 *)(unaff_x20 + 0x88);
      uVar12 = *(undefined4 *)(unaff_x20 + 0x8c);
    }
    FUN_0267da4c(uVar9,uVar10,uVar11,uVar12);
    return;
  }
thunk_FUN_00da518c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


