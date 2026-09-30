/*
FUNCTION_NAME: FUN_01e80d14
ENTRY_POINT: 01e80d14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


void FUN_01e80d14(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  
  if ((DAT_0377fde9 & 1) == 0) {
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(StringLiteral_6908);
    thunk_FUN_00d48444(Method_System_Data_DataRelation_set_Nested__);
    thunk_FUN_00d48444(PTR_DAT_033efc88);
    thunk_FUN_00d48444(StringLiteral_9044);
    thunk_FUN_00d48444(PTR_DAT_033f7180);
    thunk_FUN_00d48444(Method_UnityEngine_IntegratedSubsystem<XRMeshSubsystemDescriptor>__ctor__);
    DAT_0377fde9 = 1;
  }
  puVar2 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  if (param_2 == 0) goto LAB_01e810d8;
  if (*(long *)(param_2 + 0x88) == 0) {
    if (param_4 == 0) goto LAB_01e810d8;
LAB_01e80e48:
    plVar14 = (long *)FUN_01e835d0(param_1,*(undefined8 *)(param_4 + 0x68));
    puVar2 = Method_UnityEngine_IntegratedSubsystem<XRMeshSubsystemDescriptor>__ctor__;
    if (plVar14 == (long *)0x0) {
      plVar14 = *(long **)(param_4 + 0x68);
      if (plVar14 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
        FUN_01fad05c(param_1,*(undefined8 *)puVar2,uVar6,param_4,0);
        return;
      }
      goto LAB_01e810d8;
    }
  }
  else {
    if (param_4 == 0) goto LAB_01e810d8;
    uVar13 = *(undefined8 *)(param_4 + 0x68);
    uVar6 = FUN_01eca598(*(long *)(param_2 + 0x88),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar7 = FUN_01f76298(uVar13,uVar6,0);
    if ((uVar7 & 1) == 0) goto LAB_01e80e48;
    plVar14 = *(long **)(param_2 + 0x88);
    if (plVar14 == (long *)0x0) {
      FUN_01e7c3d0(param_1,0);
      *(undefined8 *)(param_2 + 0x60) = 0;
      goto LAB_01e810d8;
    }
    bVar1 = *(byte *)(*(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__ + 300);
    if ((*(byte *)(*plVar14 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar14);
    }
    FUN_01e7c3d0(param_1,plVar14);
  }
  lVar8 = FUN_01ecb830(plVar14,0);
  if ((lVar8 != 0) && (iVar3 = FUN_01ebc1b0(plVar14,0), iVar3 == 0)) {
    FUN_01fad0ec(param_1,*(undefined8 *)PTR_DAT_033f7180,param_2,0);
    return;
  }
  *(long **)(param_2 + 0x60) = plVar14;
  puVar2 = StringLiteral_6908;
  if (plVar14 == (long *)0x0) goto LAB_01e810d8;
  if ((*(byte *)(plVar14 + 0xe) >> 1 & 1) != 0) {
    FUN_01fad0ec(param_1,*(undefined8 *)PTR_DAT_033efc88,param_2,0);
  }
  FUN_01e813b4(param_1,plVar14,param_2,*(undefined8 *)(param_4 + 0x58),
               *(undefined8 *)(param_4 + 0x60),2);
  lVar15 = plVar14[0x17];
  lVar9 = FUN_01e7fe58(param_1,*(undefined8 *)(param_4 + 0x50),1,1);
  lVar11 = *(long *)puVar2;
  lVar8 = lVar9;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    lVar8 = thunk_FUN_00d32864(lVar11);
    lVar11 = *(long *)puVar2;
  }
  lVar12 = **(long **)(lVar11 + 0xb8);
  if (lVar15 == lVar12) {
    *(long *)(param_2 + 0xb8) = lVar9;
    uVar5 = FUN_01e829e0(lVar8,param_2,param_3,lVar9);
    *(undefined4 *)(param_2 + 0x90) = uVar5;
  }
  else {
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar8 = thunk_FUN_00d32864(lVar11);
      lVar12 = **(long **)(*(long *)puVar2 + 0xb8);
    }
    if (lVar9 != lVar12) {
      plVar10 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                            Method_System_Data_DataRelation_set_Nested__);
      if (plVar10 == (long *)0x0) {
LAB_01e810d8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01ec2dac(plVar10,0);
      lVar8 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
      if (lVar8 == 0) goto LAB_01e810d8;
      FUN_01eb9088(lVar8,lVar15,0);
      lVar8 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
      if (lVar8 == 0) goto LAB_01e810d8;
      FUN_01eb9088(lVar8,lVar9,0);
      lVar8 = FUN_01e82870(param_1,plVar10,0);
      lVar15 = lVar8;
    }
    *(long *)(param_2 + 0xb8) = lVar15;
    iVar3 = FUN_01e829e0(lVar8,param_2,param_3,lVar9);
    if (iVar3 == 1) {
      iVar3 = FUN_01ebc1b0(plVar14,0);
    }
    *(int *)(param_2 + 0x90) = iVar3;
    iVar3 = FUN_01ebc1b0(param_2,0);
    iVar4 = FUN_01ebc1b0(plVar14,0);
    if (iVar3 != iVar4) {
      FUN_01fad0ec(param_1,*(undefined8 *)StringLiteral_9044,param_2,0);
    }
  }
  *(undefined4 *)(param_2 + 0x5c) = 2;
  return;
}


