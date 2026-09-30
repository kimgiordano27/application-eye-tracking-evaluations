/*
FUNCTION_NAME: FUN_07d81e60
ENTRY_POINT: 07d81e60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_07d81e60(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar9;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  int iVar27;
  long *plVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  uint *puVar34;
  undefined1 auVar35 [16];
  ulong in_stack_fffffffffffffe60;
  uint local_14c;
  undefined4 local_138;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_dc [4];
  undefined1 local_d8 [16];
  undefined8 uStack_c8;
  int local_bc;
  long local_b8;
  undefined1 local_ac [4];
  char local_a8 [4];
  uint local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  plVar14 = param_1;
  if ((DAT_08999bb8 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486be8);
    FUN_03a8a718(PTR_DAT_084b2268);
    FUN_03a8a718(UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt16_TypeInfo);
    FUN_03a8a718(RootMotion_FinalIK_GenericPoser_Map_TypeInfo);
    FUN_03a8a718(System_Text_RegularExpressions_GroupCollection_Enumerator_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_HighDefinition_HDAdditionalCameraData_<>c_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_HighDefinition_HDAdditionalCameraData_NonObliqueProjectionGetter_TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_EasingFunction_PropertyBag_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488610);
    FUN_03a8a718(PTR_DAT_08486738);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_<>c_TypeInfo);
    FUN_03a8a718(UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo);
    FUN_03a8a718(Unity_Services_CloudSave_Internal_Models_GetUploadUrl400OneOf_<>c_TypeInfo);
    FUN_03a8a718(Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1_TypeInfo);
    FUN_03a8a718(
                UnityEngine_Rendering_HighDefinition_HDAdditionalLightData_CustomViewCallback_TypeInfo
                );
    plVar14 = (long *)FUN_03a8a718(
                                  UnityEngine_Rendering_HighDefinition_HDAdditionalReflectionData_<>c_TypeInfo
                                  );
    DAT_08999bb8 = 1;
  }
  local_a4 = 0;
  local_a8[0] = '\0';
  local_ac[0] = 0;
  local_b8 = 0;
  local_bc = 0;
  local_d8._8_8_ = 0;
  uStack_c8 = 0;
  local_d8._0_8_ = 0;
  local_dc[0] = '\0';
  local_e8 = 0;
  if (DAT_08999ba5 == '\0') {
    plVar14 = (long *)FUN_03a8a718(System_IO_FileStream_WriteDelegate_TypeInfo);
    DAT_08999ba5 = '\x01';
  }
  if (param_2 == 0) goto LAB_07d830ac;
  plVar26 = *(long **)(param_2 + 0x58);
  cVar2 = *(char *)(*(long *)(*(long *)System_IO_FileStream_WriteDelegate_TypeInfo + 0xb8) + 8);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0x1589) = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  puVar5 = Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1_TypeInfo;
  *(undefined4 *)((long)param_1 + 300) = *(undefined4 *)(param_2 + 0x50);
  FUN_07d96f34(param_1 + 0x26,0);
  if ((*(byte *)((long)param_1 + 300) & 1) == 0) {
    uVar13 = *(undefined4 *)(param_2 + 0x9c);
  }
  else {
    uVar13 = 700;
  }
  uVar20 = *(undefined8 *)puVar5;
  *(undefined4 *)((long)param_1 + 0x13c) = uVar13;
  FUN_05912044(param_1 + 0x28,uVar13,uVar20);
  plVar32 = param_1 + 0xd;
  *plVar32 = *(long *)(param_2 + 0x48);
  plVar14 = (long *)thunk_FUN_03afed3c(plVar32);
  puVar5 = Unity_Services_CloudSave_Internal_Models_GetUploadUrl400OneOf_<>c_TypeInfo;
  if (*(long *)(param_2 + 0x48) == 0) goto LAB_07d830ac;
  plVar28 = param_1 + 0xe;
  *plVar28 = *(long *)(*(long *)(param_2 + 0x48) + 0x28);
  thunk_FUN_03afed3c(plVar28);
  *(undefined4 *)(param_1 + 0xf) = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  FUN_07d5fe58((int)param_1[0x1b],&local_120,0,param_1[0xd],0,param_1[0xe],0);
  uStack_98 = uStack_118;
  local_a0 = local_120;
  uStack_88 = uStack_108;
  uStack_90 = local_110;
  uStack_78 = uStack_f8;
  local_80 = local_100;
  local_70 = local_f0;
  FUN_05912634(param_1 + 0x10,&local_a0,*(undefined8 *)puVar5);
  plVar14 = (long *)0x0;
  if (param_1[0x33d] == 0) goto LAB_07d830ac;
  FUN_05ec700c(param_1[0x33d],*(undefined8 *)PTR_DAT_084b2268);
  FUN_07d5fed0(param_1[0xe],param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
  *(undefined1 *)(param_1 + 0x2b1) = 1;
  if (*(int *)(param_2 + 100) == 1) {
    FUN_07d830b4(param_1,param_2);
    if (param_1[0x33f] != 0) {
      plVar15 = (long *)param_1[0x340];
      plVar14 = (long *)0x0;
      if (plVar15 == (long *)0x0) goto LAB_07d830ac;
      plVar15 = (long *)(**(code **)(*plVar15 + 0x158))(plVar15,*(undefined8 *)(*plVar15 + 0x160));
      plVar23 = (long *)*plVar32;
      plVar14 = plVar15;
      if (plVar23 == (long *)0x0) goto LAB_07d830ac;
      plVar14 = (long *)(**(code **)(*plVar23 + 0x158))(plVar23,*(undefined8 *)(*plVar23 + 0x160));
      auVar35._8_8_ = local_d8._8_8_;
      auVar35._0_8_ = local_d8._0_8_;
      if ((int)plVar15 != (int)plVar14) {
        if (plVar26 == (long *)0x0) goto LAB_07d830ac;
        if ((char)plVar26[7] == '\0') {
LAB_07d821ac:
          if (param_1[0x340] == 0) goto LAB_07d830ac;
          param_1[0x341] = *(long *)(param_1[0x340] + 0x28);
          thunk_FUN_03afed3c(param_1 + 0x341);
        }
        else {
          plVar15 = (long *)*plVar28;
          plVar14 = (long *)0x0;
          local_d8 = auVar35;
          if (plVar15 == (long *)0x0) goto LAB_07d830ac;
          plVar15 = (long *)(**(code **)(*plVar15 + 0x158))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x160));
          auVar4._8_8_ = local_d8._8_8_;
          auVar4._0_8_ = local_d8._0_8_;
          plVar14 = plVar15;
          if (param_1[0x340] == 0) goto LAB_07d830ac;
          plVar23 = *(long **)(param_1[0x340] + 0x28);
          plVar14 = (long *)0x0;
          local_d8 = auVar4;
          if (plVar23 == (long *)0x0) goto LAB_07d830ac;
          plVar14 = (long *)(**(code **)(*plVar23 + 0x158))
                                      (plVar23,*(undefined8 *)(*plVar23 + 0x160));
          if ((int)plVar15 == (int)plVar14) goto LAB_07d821ac;
          if (cVar2 != '\0') {
            return 0;
          }
          if (param_1[0x340] == 0) goto LAB_07d830ac;
          lVar24 = param_1[0xe];
          uVar20 = *(undefined8 *)(param_1[0x340] + 0x28);
          if (*(int *)(*(long *)UnityEngine_UIElements_EasingFunction_PropertyBag_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar24 = FUN_07d5f4d0(lVar24,uVar20,0);
          param_1[0x341] = lVar24;
          thunk_FUN_03afed3c(param_1 + 0x341,lVar24);
        }
        plVar14 = (long *)FUN_07d5fed0(param_1[0x341],param_1[0x340],param_1 + 0x2b8,param_1[0x33d],
                                       0);
        lVar24 = param_1[0x2b8];
        uVar8 = (uint)plVar14;
        *(uint *)(param_1 + 0x342) = uVar8;
        if (lVar24 == 0) goto LAB_07d830ac;
        if (*(uint *)(lVar24 + 0x18) <= uVar8) {
LAB_07d830b0:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        *(undefined4 *)(lVar24 + (long)(int)uVar8 * 0x38 + 0x54) = 0;
      }
    }
  }
  puVar5 = Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_<>c_TypeInfo;
  lVar24 = *(long *)Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_<>c_TypeInfo;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar24 = *(long *)puVar5;
  }
  lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 0x10);
  plVar14 = (long *)0x0;
  if (lVar24 == 0) {
LAB_07d830ac:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0(plVar14);
  }
  plVar15 = (long *)FUN_04ec264c(lVar24,0x6c696761,
                                 *(undefined8 *)RootMotion_FinalIK_GenericPoser_Map_TypeInfo);
  uVar8 = (uint)plVar15;
  plVar14 = plVar15;
  if (param_3 == 0) goto LAB_07d830ac;
  uVar22 = *(uint *)(param_3 + 0x18);
  plVar14 = (long *)0x1;
  if ((int)uVar22 < 1) {
    return 1;
  }
  lVar24 = param_3 + 0x20;
  uVar30 = 0;
LAB_07d82274:
  if (uVar22 <= uVar30) goto LAB_07d830b0;
  puVar34 = (uint *)(lVar24 + (long)(int)uVar30 * 0x10 + 4);
  uVar22 = *puVar34;
  if (uVar22 == 0) {
    return 1;
  }
  local_138 = (undefined4)param_1[0xf];
  if ((*(char *)(param_2 + 0x81) != '\0') && (uVar22 == 0x3c)) {
    plVar14 = (long *)FUN_07d74ca8(param_1,param_3,uVar30 + 1,&local_a4,param_2,0,local_a8);
    if (((ulong)plVar14 & 1) == 0) {
      if (local_a8[0] == '\0') {
        return 0;
      }
      local_138 = (undefined4)param_1[0xf];
      goto LAB_07d822fc;
    }
    if (uVar30 < *(uint *)(param_3 + 0x18)) {
      uVar30 = local_a4;
      if ((char)param_1[0x2b1] == '\x02') goto LAB_07d82c80;
      goto LAB_07d82ed8;
    }
    goto LAB_07d830b0;
  }
LAB_07d822fc:
  lVar29 = *plVar32;
  lVar31 = *plVar28;
  if ((char)param_1[0x2b1] != '\x01') goto LAB_07d823c4;
  uVar1 = *(uint *)((long)param_1 + 300);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 >> 5 & 1) != 0) goto LAB_07d82324;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      plVar14 = (long *)FUN_066bbbdc(uVar22,0);
      if (((ulong)plVar14 & 1) != 0) {
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        plVar14 = (long *)FUN_066bc07c(uVar22,0);
        goto LAB_07d823c0;
      }
    }
  }
  else {
LAB_07d82324:
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar14 = (long *)FUN_066bbc7c(uVar22,0);
    if (((ulong)plVar14 & 1) != 0) {
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      plVar14 = (long *)FUN_066bbf04(uVar22,0);
LAB_07d823c0:
      uVar22 = (uint)plVar14 & 0xffff;
    }
  }
LAB_07d823c4:
  if (cVar2 != '\0') {
    if (*plVar32 == 0) goto LAB_07d830ac;
    if (*(long *)(*plVar32 + 0x130) == 0) {
      return 0;
    }
  }
  uVar1 = uVar30 + 1;
  if ((int)uVar1 < (int)*(uint *)(param_3 + 0x18)) {
    if (*(uint *)(param_3 + 0x18) <= uVar1) goto LAB_07d830b0;
    iVar12 = *(int *)(lVar24 + (long)(int)uVar1 * 0x10 + 4);
  }
  else {
    iVar12 = 0;
  }
  local_14c = uVar22;
  if (*(char *)(param_2 + 0x80) == '\0') {
LAB_07d824b8:
    lVar21 = FUN_07d8337c(param_1,param_2,uVar22,param_1[0xd],*(undefined4 *)((long)param_1 + 300),
                          *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1);
    if (lVar21 == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
      plVar14 = (long *)0x0;
      if (plVar26 == (long *)0x0) goto LAB_07d830ac;
      local_14c = *(uint *)((long)plVar26 + 0x3c);
      bVar6 = *(uint *)(param_3 + 0x18) <= uVar30;
      if (local_14c == 0) {
        if (bVar6) goto LAB_07d830b0;
        local_14c = 0x25a1;
      }
      else if (bVar6) goto LAB_07d830b0;
      *puVar34 = local_14c;
      lVar21 = FUN_07d83fc4(local_14c,param_1[0xd],1,*(undefined4 *)((long)param_1 + 300),
                            *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
      if (lVar21 == 0) {
        plVar14 = (long *)0x0;
        if (*plVar32 == 0) goto LAB_07d830ac;
        uVar9 = FUN_07d616fc(*plVar32,0);
        if (*(char *)((long)param_1 + 0xf4) == '\0') {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *(undefined4 *)(param_2 + 0x7c);
        }
        plVar14 = (long *)(**(code **)(*plVar26 + 0x198))
                                    (plVar26,uVar9 & 1,uVar13,*(undefined8 *)(*plVar26 + 0x1a0));
        lVar21 = *plVar32;
        if (lVar21 == 0) goto LAB_07d830ac;
        uVar9 = FUN_07d616fc(lVar21,0);
        if (*(char *)((long)param_1 + 0xf4) == '\0') {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *(undefined4 *)(param_2 + 0x7c);
        }
        uVar20 = (**(code **)(*plVar26 + 0x198))
                           (plVar26,uVar9 & 1,uVar13,*(undefined8 *)(*plVar26 + 0x1a0));
        uVar16 = FUN_07d86bc8(plVar26,0);
        in_stack_fffffffffffffe60 =
             CONCAT71((int7)(in_stack_fffffffffffffe60 >> 8),(char)plVar15) & 0xffffffffffffff01;
        lVar21 = FUN_07d84674(local_14c,lVar21,uVar20,uVar16,1,*(undefined4 *)((long)param_1 + 300),
                              *(undefined4 *)((long)param_1 + 0x13c),local_ac,
                              in_stack_fffffffffffffe60,0);
        if (lVar21 == 0) {
          lVar21 = plVar26[4];
          if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar18 = FUN_07c9c218(lVar21,0,0);
          if ((uVar18 & 1) != 0) {
            lVar21 = FUN_07d83fc4(local_14c,plVar26[4],1,*(undefined4 *)((long)param_1 + 300),
                                  *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
            if (lVar21 != 0) goto LAB_07d82708;
          }
          if (*(uint *)(param_3 + 0x18) <= uVar30) goto LAB_07d830b0;
          local_14c = 0x20;
          *puVar34 = 0x20;
          lVar21 = FUN_07d83fc4(0x20,param_1[0xd],1,*(undefined4 *)((long)param_1 + 300),
                                *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
          if (lVar21 == 0) {
            if (*(uint *)(param_3 + 0x18) <= uVar30) goto LAB_07d830b0;
            local_14c = 3;
            *puVar34 = 3;
            lVar21 = FUN_07d83fc4(3,param_1[0xd],1,*(undefined4 *)((long)param_1 + 300),
                                  *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
          }
        }
      }
LAB_07d82708:
      if ((char)plVar26[0x12] == '\0') {
        if (lVar21 == 0) {
          plVar14 = (long *)0x0;
          goto LAB_07d830ac;
        }
      }
      else {
        if (uVar22 >> 0x10 == 0) {
          local_a0 = CONCAT44(local_a0._4_4_,uVar22);
          plVar23 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x50),&local_a0);
          plVar14 = plVar23;
          if (*(long *)(param_2 + 0x48) == 0) goto LAB_07d830ac;
          plVar14 = (long *)thunk_FUN_07ca227c(*(long *)(param_2 + 0x48),0);
          if (lVar21 == 0) goto LAB_07d830ac;
          uVar13 = FUN_07d85990(lVar21,0);
          local_120 = CONCAT44(local_120._4_4_,uVar13);
          uVar20 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x50),&local_120);
          puVar25 = (undefined8 *)
                    UnityEngine_Rendering_HighDefinition_HDAdditionalReflectionData_<>c_TypeInfo;
        }
        else {
          local_a0 = CONCAT44(local_a0._4_4_,uVar22);
          plVar23 = (long *)thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x50),&local_a0);
          plVar14 = plVar23;
          if (*(long *)(param_2 + 0x48) == 0) goto LAB_07d830ac;
          plVar14 = (long *)thunk_FUN_07ca227c(*(long *)(param_2 + 0x48),0);
          if (lVar21 == 0) goto LAB_07d830ac;
          uVar13 = FUN_07d85990(lVar21,0);
          local_120 = CONCAT44(local_120._4_4_,uVar13);
          uVar20 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x50),&local_120);
          puVar25 = (undefined8 *)
                    UnityEngine_Rendering_HighDefinition_HDAdditionalLightData_CustomViewCallback_TypeInfo
          ;
        }
        uVar20 = FUN_065ce798(*puVar25,plVar23,plVar14,uVar20,0);
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(uVar20,0);
      }
    }
  }
  else {
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar14 = (long *)FUN_07d900a8(uVar22,0);
    if ((((ulong)plVar14 & 1) == 0) || (iVar12 == 0xfe0e)) {
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      plVar14 = (long *)FUN_07d90028(uVar22,0);
      if ((((ulong)plVar14 & 1) == 0) || (iVar12 != 0xfe0f)) goto LAB_07d824b8;
    }
    if (plVar26 == (long *)0x0) goto LAB_07d830ac;
    lVar21 = plVar26[9];
    if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) < 1)) goto LAB_07d824b8;
    in_stack_fffffffffffffe60 = 0;
    lVar21 = FUN_07d849b0(uVar22,param_1[0xd],lVar21,1,*(undefined4 *)((long)param_1 + 300),
                          *(undefined4 *)((long)param_1 + 0x13c),local_ac,uVar8 & 1,0);
    if (lVar21 == 0) goto LAB_07d824b8;
  }
  cVar7 = FUN_07d88978(lVar21,0);
  if (cVar7 != '\x01') {
    cVar7 = FUN_07d88978(lVar21,0);
    if (cVar7 != '\x02') goto LAB_07d82ccc;
    goto LAB_07d82c14;
  }
  lVar17 = FUN_07d8466c(lVar21,0);
  if (cVar2 == '\0') {
    plVar14 = (long *)0x0;
    if (lVar17 == 0) goto LAB_07d830ac;
    plVar14 = (long *)FUN_07d86864(lVar17,0);
    if (*plVar32 == 0) goto LAB_07d830ac;
    iVar10 = FUN_07d86864(*plVar32,0);
    if ((int)plVar14 == iVar10) goto LAB_07d828a4;
LAB_07d82904:
    plVar14 = (long *)FUN_07d8466c(lVar21,0);
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
      *plVar32 = 0;
    }
    else {
      lVar17 = *(long *)System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt16_TypeInfo;
      bVar3 = *(byte *)(lVar17 + 0x130);
      if (*(byte *)(*plVar14 + 0x130) < bVar3) {
        plVar23 = (long *)0x0;
      }
      else {
        plVar23 = plVar14;
        if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
          plVar23 = (long *)0x0;
        }
      }
      *plVar32 = (long)plVar23;
      if (*(byte *)(*plVar14 + 0x130) < bVar3) {
        plVar14 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar17) {
        plVar14 = (long *)0x0;
      }
    }
    thunk_FUN_03afed3c(plVar32,plVar14);
    bVar6 = true;
  }
  else {
    lVar33 = *plVar32;
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar18 = FUN_07c9e200(lVar17,lVar33,0);
    if ((uVar18 & 1) == 0) goto LAB_07d82904;
LAB_07d828a4:
    bVar6 = false;
  }
  if ((0xffffffef < iVar12 - 0xfe10U) || (0xffffff0f < iVar12 - 0xe01f0U)) {
    plVar14 = (long *)0x0;
    if (*plVar32 == 0) goto LAB_07d830ac;
    uVar18 = FUN_07d699dc(*plVar32,local_14c,iVar12,&local_bc,0);
    if ((uVar18 & 1) == 0) {
      if (cVar2 != '\0') {
        return 0;
      }
      plVar14 = (long *)0x0;
      if (*plVar32 == 0) goto LAB_07d830ac;
      plVar14 = (long *)FUN_07d66e18(*plVar32,local_14c,iVar12,0);
      local_bc = (int)plVar14;
      if (*plVar32 == 0) goto LAB_07d830ac;
      FUN_07d69930(*plVar32,local_14c,iVar12,(ulong)plVar14 & 0xffffffff,0);
    }
    if (local_bc != 0) {
      plVar14 = (long *)0x0;
      if (*plVar32 == 0) goto LAB_07d830ac;
      FUN_07d69a88(*plVar32,local_bc,&uStack_c8,0);
    }
    if (*(uint *)(param_3 + 0x18) <= uVar1) goto LAB_07d830b0;
    *(undefined4 *)(lVar24 + (long)(int)uVar1 * 0x10 + 4) = 0x1a;
    uVar30 = uVar1;
  }
  if (((ulong)plVar15 & 1) != 0) {
    plVar14 = (long *)0x0;
    if (*plVar32 != 0) {
      lVar17 = FUN_07d61740(*plVar32,0);
      plVar14 = (long *)0x0;
      if (lVar17 != 0) {
        lVar17 = *(long *)(lVar17 + 0x38);
        plVar14 = (long *)FUN_07d85970(lVar21,0);
        if (lVar17 != 0) {
          uVar18 = FUN_06036020(lVar17,(ulong)plVar14 & 0xffffffff,&local_b8,
                                *(undefined8 *)UnityEngine_EventSystems_EventTrigger_Entry_TypeInfo)
          ;
          if ((uVar18 & 1) != 0) {
            if (local_b8 == 0) {
              return 1;
            }
            iVar12 = 0;
            while (iVar12 < *(int *)(local_b8 + 0x18)) {
              auVar35 = FUN_04da8998(local_b8,iVar12,
                                     *(undefined8 *)
                                      UnityEngine_Rendering_HighDefinition_HDAdditionalCameraData_NonObliqueProjectionGetter_TypeInfo
                                    );
              local_d8 = auVar35;
              lVar17 = FUN_07d580f8(local_d8,0);
              plVar14 = (long *)0x0;
              if (lVar17 == 0) goto LAB_07d830ac;
              uVar18 = *(ulong *)(lVar17 + 0x18);
              iVar10 = FUN_07d58108(local_d8,0);
              iVar27 = (int)uVar18;
              if (1 < iVar27) {
                lVar17 = 0;
                do {
                  uVar22 = uVar30 + 1 + (int)lVar17;
                  if (*(uint *)(param_3 + 0x18) <= uVar22) goto LAB_07d830b0;
                  plVar14 = (long *)0x0;
                  if (*plVar32 == 0) goto LAB_07d830ac;
                  iVar11 = FUN_07d66cf0(*plVar32,*(undefined4 *)
                                                  (lVar24 + (long)(int)uVar22 * 0x10 + 4),local_dc,0
                                       );
                  if (local_dc[0] == '\0') {
                    return 0;
                  }
                  lVar33 = FUN_07d580f8(local_d8,0);
                  plVar14 = (long *)0x0;
                  if (lVar33 == 0) goto LAB_07d830ac;
                  if (*(uint *)(lVar33 + 0x18) <= (int)lVar17 + 1U) goto LAB_07d830b0;
                  if (iVar11 != *(int *)(lVar33 + lVar17 * 4 + 0x24)) goto LAB_07d82bdc;
                  lVar17 = lVar17 + 1;
                } while (iVar27 + -1 != (int)lVar17);
              }
              if (iVar10 != 0) {
                if (cVar2 != '\0') {
                  return 0;
                }
                plVar14 = (long *)0x0;
                if (*plVar32 == 0) goto LAB_07d830ac;
                uVar19 = FUN_07d69a88(*plVar32,iVar10,&local_e8,0);
                if ((uVar19 & 1) != 0) {
                  if (iVar27 < 1) goto LAB_07d83018;
                  uVar19 = 0;
                  goto LAB_07d82fd4;
                }
              }
LAB_07d82bdc:
              iVar12 = iVar12 + 1;
              if (local_b8 == 0) {
                plVar14 = (long *)0x0;
                goto LAB_07d830ac;
              }
            }
          }
          goto LAB_07d82bfc;
        }
      }
    }
    goto LAB_07d830ac;
  }
  goto LAB_07d82bfc;
LAB_07d82fd4:
  do {
    if (uVar19 == 0) {
      if (*(uint *)(param_3 + 0x18) <= uVar30) goto LAB_07d830b0;
      *(int *)(lVar24 + (long)(int)uVar30 * 0x10 + 0xc) = iVar27;
    }
    else {
      uVar22 = uVar30 + (int)uVar19;
      if (*(uint *)(param_3 + 0x18) <= uVar22) goto LAB_07d830b0;
      *(undefined4 *)(lVar24 + (long)(int)uVar22 * 0x10 + 4) = 0x1a;
    }
    uVar19 = uVar19 + 1;
  } while ((uVar18 & 0xffffffff) != uVar19);
LAB_07d83018:
  uVar30 = (uVar30 + iVar27) - 1;
LAB_07d82bfc:
  cVar7 = FUN_07d88978(lVar21,0);
  if (cVar7 == '\x02') {
LAB_07d82c14:
    plVar14 = (long *)FUN_07d8466c(lVar21,0);
    if (plVar14 == (long *)0x0) goto LAB_07d830ac;
    bVar3 = *(byte *)(*(long *)
                       Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo +
                     0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo))
    goto LAB_07d830ac;
    plVar14 = (long *)FUN_07d600d0(plVar14[5],plVar14,param_1 + 0x2b8,param_1[0x33d],0);
    *(int *)(param_1 + 0xf) = (int)plVar14;
LAB_07d82c80:
    *(undefined1 *)(param_1 + 0x2b1) = 1;
  }
  else {
    if (bVar6) {
      plVar14 = (long *)0x0;
      if (*plVar32 == 0) goto LAB_07d830ac;
      plVar14 = (long *)FUN_07d86864(*plVar32,0);
      if (*(long *)(param_2 + 0x48) == 0) goto LAB_07d830ac;
      plVar23 = (long *)FUN_07d86864(*(long *)(param_2 + 0x48),0);
      if ((int)plVar14 == (int)plVar23) {
        bVar6 = true;
      }
      else {
        plVar14 = plVar23;
        if (cVar2 == '\0') {
          if (plVar26 == (long *)0x0) goto LAB_07d830ac;
          if ((char)plVar26[7] == '\0') goto LAB_07d82f00;
          if (*plVar32 == 0) goto LAB_07d830ac;
          uVar20 = *(undefined8 *)(*plVar32 + 0x28);
          lVar17 = *plVar28;
          if (*(int *)(*(long *)UnityEngine_UIElements_EasingFunction_PropertyBag_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          lVar17 = FUN_07d5f4d0(lVar17,uVar20,0);
        }
        else {
          if (plVar26 == (long *)0x0) goto LAB_07d830ac;
          if ((char)plVar26[7] != '\0') {
            return 0;
          }
LAB_07d82f00:
          if (*plVar32 == 0) goto LAB_07d830ac;
          lVar17 = *(long *)(*plVar32 + 0x28);
        }
        param_1[0xe] = lVar17;
        thunk_FUN_03afed3c(plVar28);
        uVar13 = FUN_07d5fed0(param_1[0xe],param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
        bVar6 = true;
        *(undefined4 *)(param_1 + 0xf) = uVar13;
      }
    }
    else {
LAB_07d82ccc:
      bVar6 = false;
    }
    lVar17 = FUN_07d88988(lVar21,0);
    plVar14 = (long *)0x0;
    if (lVar17 == 0) goto LAB_07d830ac;
    iVar12 = FUN_07d5379c(lVar17,0);
    if (0 < iVar12) {
      if (cVar2 != '\0') {
        return 0;
      }
      lVar17 = *plVar32;
      lVar33 = *plVar28;
      lVar21 = FUN_07d88988(lVar21,0);
      plVar14 = (long *)0x0;
      if (lVar21 == 0) goto LAB_07d830ac;
      uVar13 = FUN_07d5379c(lVar21,0);
      if (*(int *)(*(long *)UnityEngine_UIElements_EasingFunction_PropertyBag_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4(*(long *)UnityEngine_UIElements_EasingFunction_PropertyBag_TypeInfo);
      }
      lVar21 = FUN_07d5fb88(lVar17,lVar33,uVar13,0);
      param_1[0xe] = lVar21;
      thunk_FUN_03afed3c(plVar28,lVar21);
      uVar13 = FUN_07d5fed0(param_1[0xe],param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
      bVar6 = true;
      *(undefined4 *)(param_1 + 0xf) = uVar13;
    }
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    plVar14 = (long *)FUN_066b9610(local_14c,0);
    lVar21 = param_1[0x2b8];
    if ((((ulong)plVar14 & 1) == 0) && (local_14c != 0x200b)) {
      if (*(char *)(param_2 + 0xa0) == '\0') {
LAB_07d82e44:
        if (lVar21 == 0) goto LAB_07d830ac;
      }
      else {
        if (lVar21 == 0) goto LAB_07d830ac;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xf)) goto LAB_07d830b0;
        if (0x3ffe < *(int *)(lVar21 + (long)(int)*(uint *)(param_1 + 0xf) * 0x38 + 0x54)) {
          lVar21 = param_1[0xe];
          uVar20 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488610);
          FUN_07c65a98(uVar20,lVar21,0);
          plVar14 = (long *)FUN_07d5fed0(uVar20,param_1[0xd],param_1 + 0x2b8,param_1[0x33d],0);
          lVar21 = param_1[0x2b8];
          *(int *)(param_1 + 0xf) = (int)plVar14;
          goto LAB_07d82e44;
        }
      }
      if (*(uint *)(lVar21 + 0x18) <= *(uint *)(param_1 + 0xf)) goto LAB_07d830b0;
      lVar17 = lVar21 + (long)(int)*(uint *)(param_1 + 0xf) * 0x38;
      *(int *)(lVar17 + 0x54) = *(int *)(lVar17 + 0x54) + 1;
    }
    else if (lVar21 == 0) goto LAB_07d830ac;
    uVar22 = *(uint *)(param_1 + 0xf);
    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_07d830b0;
    *(bool *)(lVar21 + 0x20 + (long)(int)uVar22 * 0x38 + 0x20) = bVar6;
    if (!bVar6) goto LAB_07d82ecc;
    plVar14 = (long *)(lVar21 + 0x20 + (long)(int)uVar22 * 0x38 + 0x28);
    *plVar14 = lVar31;
    thunk_FUN_03afed3c(plVar14,lVar31);
    *plVar32 = lVar29;
    thunk_FUN_03afed3c(plVar32);
    *plVar28 = lVar31;
    plVar14 = (long *)thunk_FUN_03afed3c(plVar28,lVar31);
  }
  *(undefined4 *)(param_1 + 0xf) = local_138;
LAB_07d82ecc:
  *(int *)(param_1 + 0x1d) = (int)param_1[0x1d] + 1;
LAB_07d82ed8:
  uVar22 = *(uint *)(param_3 + 0x18);
  uVar30 = uVar30 + 1;
  if ((int)uVar22 <= (int)uVar30) {
    return 1;
  }
  goto LAB_07d82274;
}


