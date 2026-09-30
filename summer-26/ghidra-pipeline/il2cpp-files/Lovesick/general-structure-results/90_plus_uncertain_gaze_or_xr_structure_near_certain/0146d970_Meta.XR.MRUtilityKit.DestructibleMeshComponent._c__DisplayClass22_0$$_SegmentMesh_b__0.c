/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleMeshComponent.<>c__DisplayClass22_0$$<SegmentMesh>b__0
ENTRY_POINT: 0146d970
PROGRAM: Lovesick-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_DestructibleMeshComponent_<>c__DisplayClass22_0__<SegmentMesh>b__0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_12470);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                    );
  thunk_FUN_00d48444(
                    Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                    );
  *(undefined1 *)(unaff_x21 + 0xaee) = 1;
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x19 == 0) goto LAB_0146dd88;
  uVar5 = FUN_0267dbbc();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar4 = StringLiteral_7349;
  puVar1 = CollisionSound_<SoundPlayBuffer>d__14_TypeInfo;
  uVar6 = FUN_02681b9c(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    lVar9 = *(long *)(unaff_x20 + 0x10);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4);
    if ((lVar9 == 0) ||
       (plVar7 = (long *)FUN_0146a764(lVar9,*(undefined8 *)puVar1,uVar5,0), plVar7 == (long *)0x0))
    goto LAB_0146dd88;
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) goto LAB_0146dd8c;
    puVar8 = (undefined4 *)thunk_FUN_00d624a0();
    uVar10 = *puVar8;
    uVar11 = puVar8[1];
    uVar12 = puVar8[2];
    uVar13 = puVar8[3];
  }
  else {
    uVar10 = *(undefined4 *)(unaff_x20 + 0x50);
    uVar11 = *(undefined4 *)(unaff_x20 + 0x54);
    uVar12 = *(undefined4 *)(unaff_x20 + 0x58);
    uVar13 = *(undefined4 *)(unaff_x20 + 0x5c);
  }
  FUN_0267da4c(uVar10,uVar11,uVar12,uVar13);
  uVar5 = FUN_0267dbbc();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar3 = OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo;
  puVar1 = System_Runtime_InteropServices_InAttribute_TypeInfo;
  uVar6 = FUN_02681b9c(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    lVar9 = *(long *)(unaff_x20 + 0x10);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1);
    if ((lVar9 == 0) ||
       (plVar7 = (long *)FUN_0146a764(lVar9,*(undefined8 *)puVar3,uVar5,0), plVar7 == (long *)0x0))
    goto LAB_0146dd88;
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146dd8c;
    puVar8 = (undefined4 *)thunk_FUN_00d624a0();
    uVar10 = *puVar8;
  }
  else {
    uVar10 = *(undefined4 *)(unaff_x20 + 0x60);
  }
  FUN_0267f168(uVar10);
  uVar5 = FUN_0267dbbc();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar6 = FUN_02681b9c(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    lVar9 = *(long *)(unaff_x20 + 0x10);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar1);
    if (lVar9 == 0) goto LAB_0146dd88;
    plVar7 = (long *)FUN_0146a764(lVar9,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                                  ,uVar5,0);
    if (plVar7 == (long *)0x0) goto LAB_0146dd88;
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar1 + 0x40)) goto LAB_0146dd8c;
    puVar8 = (undefined4 *)thunk_FUN_00d624a0();
    FUN_0267f168(*puVar8);
  }
  uVar5 = FUN_0267dbbc();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  FUN_02681b9c(uVar5,0,0);
  FUN_0267f168(*(undefined4 *)(unaff_x20 + 0x68));
  uVar5 = FUN_0267dbbc();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhsubq_u32__;
  uVar6 = FUN_02681b9c(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    FUN_0267e350();
    lVar9 = *(long *)(unaff_x20 + 0x10);
    uVar5 = thunk_FUN_00d61fa0(*(undefined8 *)puVar4);
    if ((lVar9 == 0) ||
       (plVar7 = (long *)FUN_0146a764(lVar9,*(undefined8 *)puVar2,uVar5,0), plVar7 == (long *)0x0))
    {
LAB_0146dd88:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
LAB_0146dd8c:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar8 = (undefined4 *)thunk_FUN_00d624a0();
    uVar13 = *puVar8;
    uVar10 = puVar8[1];
    uVar11 = puVar8[2];
    uVar12 = puVar8[3];
  }
  else {
    FUN_0267e30c();
    uVar13 = 0x3f800000;
    uVar10 = uVar13;
    uVar11 = uVar13;
    uVar12 = uVar13;
  }
  FUN_0267da4c(uVar13,uVar10,uVar11,uVar12);
  return;
}


