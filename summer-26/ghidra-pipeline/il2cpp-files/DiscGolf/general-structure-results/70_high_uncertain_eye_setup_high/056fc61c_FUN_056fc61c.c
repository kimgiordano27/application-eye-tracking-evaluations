/*
FUNCTION_NAME: FUN_056fc61c
ENTRY_POINT: 056fc61c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_056fc61c(long *param_1,void *param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long local_1f0 [2];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c0 [80];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_06dbeb93 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a00f70);
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
    FUN_02d965b8(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
    FUN_02d965b8(PTR_DAT_06a12468);
    FUN_02d965b8(System_Threading_WaitHandle___TypeInfo);
    FUN_02d965b8(Microsoft_CSharp_RuntimeBinder_Semantics_Operators_OperatorInfo___TypeInfo);
    FUN_02d965b8(Unity_Services_CloudSave_Internal_Http_HttpException<T>_var);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo);
    FUN_02d965b8(System_Data_DataError_ColumnError___TypeInfo);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarEntity_PrimitiveRenderData___TypeInfo);
    FUN_02d965b8(System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMap___TypeInfo);
    DAT_06dbeb93 = 1;
  }
  puVar4 = PTR_DAT_06a12468;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar10 = thunk_FUN_02dd3144();
    uVar11 = thunk_FUN_02dfd288(PTR_DAT_06a0e6b0);
    FUN_0544bf54(uVar10,uVar11,0);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      uVar11 = thunk_FUN_02dfd288(Oculus_Avatar2_OvrAvatarEntity_SkeletonJoint___TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar10,uVar11);
    }
    goto LAB_056fcaa0;
  }
  lVar12 = *param_1;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo) {
        puVar9 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
        goto LAB_056fc778;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_02dd004c(param_1,*(long *)OVRPlugin_VirtualKeyboardModelAnimationState___TypeInfo,3);
LAB_056fc778:
  puVar7 = Oculus_Avatar2_OvrAvatarEntity_PrimitiveRenderData___TypeInfo;
  puVar6 = Microsoft_CSharp_RuntimeBinder_Semantics_Operators_OperatorInfo___TypeInfo;
  puVar5 = Unity_Services_CloudSave_Internal_Http_HttpException<T>_var;
  (*(code *)*puVar9)(param_1,puVar9[1]);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_057cce3c(&local_170,0x9b83c86,0,0xffffffffffffffff,0);
  local_90 = local_160;
  uStack_98 = uStack_168;
  local_a0 = local_170;
  FUN_057cdb5c(&local_f0,*(undefined8 *)((long)param_2 + 8),&local_a0,*(undefined8 *)puVar5,0);
  local_90 = local_e0;
  uStack_98 = uStack_e8;
  local_a0 = local_f0;
  FUN_057cdbf8(&local_108,&local_a0,*(undefined8 *)puVar7,(long)*(int *)((long)param_2 + 4),0);
  local_90 = CONCAT44(uStack_f4,local_f8);
  uStack_98 = uStack_100;
  local_a0 = local_108;
  FUN_057cdbf8(&local_120,&local_a0,*(undefined8 *)puVar6,(long)*(int *)((long)param_2 + 0x10),0);
  auVar3._8_8_ = local_d0._8_8_;
  auVar3._0_8_ = local_d0._0_8_;
  iVar1 = *(int *)((long)param_2 + 0x18);
  uStack_78 = uStack_118;
  local_80 = local_120;
  local_70 = local_110;
  if (iVar1 == 1) {
    lVar12 = (long)*(int *)((long)param_2 + 0x28);
    puVar9 = (undefined8 *)System_Data_DataError_ColumnError___TypeInfo;
LAB_056fc8e0:
    FUN_057cdbf8(&local_170,&local_80,*puVar9,lVar12,0);
  }
  else {
    if (iVar1 == 3) {
      lVar12 = 1;
      puVar9 = (undefined8 *)Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo;
      goto LAB_056fc8e0;
    }
    if (iVar1 == 2) {
      lVar12 = *(long *)((long)param_2 + 0x30);
      local_1f0[0] = 0;
      if (lVar12 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_056fcaa0;
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
        local_d0 = auVar3;
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        goto LAB_056fcaa0;
      }
      local_1f0[0] = (long)*(int *)(lVar12 + 0x20);
      FUN_057cddcc(&local_170,&local_80,
                   *(undefined8 *)
                    System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMap___TypeInfo,local_1f0,
                   *(undefined4 *)((long)param_2 + 0x38),0);
    }
  }
  puVar5 = System_Threading_WaitHandle___TypeInfo;
  puVar4 = PTR_DAT_06a00f70;
  memcpy(&local_170,param_2,0x50);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = MS_Internal_Xml_XPath_Operator_Op___TypeInfo;
  memcpy(auStack_1c0,&local_170,0x50);
  uVar8 = FUN_0577ece4(auStack_1c0,&local_88,0);
  uVar10 = local_88;
  uStack_e8 = uStack_78;
  local_f0 = local_80;
  local_e0 = local_70;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar5 = OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo;
  uStack_1d8 = uStack_e8;
  local_1e0 = local_f0;
  local_1d0 = local_e0;
  FUN_056fa1b8(&local_1e0,uVar10,uVar8);
  FUN_057da854(&local_108,uVar8,local_88,0);
  uStack_b8 = uStack_100;
  local_c0 = local_108;
  local_b0 = local_f8;
  local_d0 = FUN_057daad8(&local_c0,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0336f238(local_d0,param_1,*(undefined8 *)puVar5);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_056fcaa0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


