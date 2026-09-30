/*
FUNCTION_NAME: FUN_02784cb8
ENTRY_POINT: 02784cb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_02784cb8(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  void *__src;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  double dVar23;
  undefined1 auVar24 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined4 uVar30;
  ulong uVar31;
  double dVar32;
  undefined1 auStack_6c0 [200];
  double local_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 local_530;
  undefined8 local_528;
  undefined1 auStack_520 [200];
  undefined1 auStack_458 [32];
  undefined4 local_438;
  float local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined8 local_3f4;
  undefined8 uStack_3ec;
  undefined8 local_3e4;
  undefined8 uStack_3dc;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  undefined4 local_3c4;
  undefined8 local_3a0;
  undefined4 local_390;
  float local_38c;
  float local_388;
  float local_384;
  undefined4 local_370;
  float local_36c;
  float local_368;
  float local_364;
  undefined8 local_33c;
  undefined8 uStack_334;
  undefined8 local_2d8;
  undefined1 auStack_2c8 [100];
  undefined1 auStack_264 [8];
  undefined1 auStack_25c [8];
  undefined1 auStack_254 [8];
  undefined1 auStack_24c [76];
  undefined8 local_200;
  undefined8 local_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1c8 [100];
  undefined1 local_164 [8];
  undefined1 auStack_15c [8];
  undefined8 local_154;
  undefined8 auStack_14c [9];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  if ((DAT_03788670 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788670 = 1;
  }
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  memset(auStack_1c8,0,200);
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0.0;
  local_1f8 = 0;
  local_200 = 0;
  memset(auStack_2c8,0,200);
  memset(&local_390,0,200);
  memset(auStack_458,0,200);
  if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
  uVar21 = FUN_02748ec4(*(long *)(param_5 + 0x160),0);
  local_200 = CONCAT44(param_2,uVar21);
  local_1f8 = CONCAT44(param_4,param_3);
  fVar22 = (float)FUN_026884c4(&local_200,0);
  fVar1 = DAT_028ab0b0;
  if (fVar22 <= DAT_028ab0b0) {
    return;
  }
  if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
  uVar21 = FUN_02748ec4(*(long *)(param_5 + 0x160),0);
  local_200 = CONCAT44(param_2,uVar21);
  local_1f8 = CONCAT44(param_4,param_3);
  fVar22 = (float)FUN_026884d4(&local_200,0);
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
  ;
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
  ;
  if (fVar22 <= fVar1) {
    return;
  }
  if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
  __src = (void *)FUN_02749858(*(long *)(param_5 + 0x160),0);
  memmove(&local_f0,__src,0x58);
  fVar22 = (float)FUN_028050b4(&local_f0,0);
  fVar1 = DAT_028aa020;
  param_3 = param_3 * param_3;
  fVar27 = param_4 * param_4;
  if (DAT_028aa020 <= fVar27 + param_3 + fVar22 * fVar22 + param_2 * param_2) {
    memset(&local_390,0,200);
    if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
    local_390 = FUN_0274c234(*(long *)(param_5 + 0x160),0);
    local_38c = fVar27;
    local_388 = param_3;
    local_384 = param_4;
    local_370 = FUN_028050b4(&local_f0,0);
    local_36c = fVar27;
    local_368 = param_3;
    local_364 = param_4;
    if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
    local_2d8 = FUN_02826878(*(undefined8 *)(param_5 + 0x10),
                             *(undefined8 *)(*(long *)(param_5 + 0x160) + 0x170),0);
    if ((*(long *)(param_5 + 0x160) == 0) ||
       (plVar11 = (long *)FUN_0274aad0(*(long *)(param_5 + 0x160),0), plVar11 == (long *)0x0))
    goto LAB_02785aec;
    lVar17 = *plVar11;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_02784f48;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,2);
LAB_02784f48:
    iVar5 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (iVar5 == 1) {
      lVar17 = *(long *)puVar3;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar17 = *(long *)puVar3;
      }
      auVar24 = *(undefined1 (*) [16])(*(long *)(lVar17 + 0xb8) + 0x18);
    }
    else {
      auVar24 = NEON_fmov(0x3f800000,4);
    }
    uStack_334 = auVar24._8_8_;
    local_33c = auVar24._0_8_;
    memcpy(auStack_2c8,&local_390,200);
    FUN_02826bb8(*(undefined8 *)(param_5 + 0x160),auStack_264,auStack_24c,auStack_25c,auStack_254,0)
    ;
    FUN_02826e54(*(undefined8 *)(param_5 + 0x160),auStack_2c8,0);
    memcpy(auStack_520,auStack_2c8,200);
    FUN_027839fc(param_5,auStack_520);
  }
  puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  iVar5 = FUN_02805844(&local_f0,0);
  iVar6 = FUN_028058e4(&local_f0,0);
  iVar7 = FUN_02805894(&local_f0,0);
  iVar8 = FUN_028057f4(&local_f0,0);
  uVar19 = (ulong)(uint)(float)iVar7;
  uVar31 = (ulong)(uint)(float)iVar8;
  local_100 = CONCAT44((float)iVar6,(float)iVar5);
  local_f8 = CONCAT44((float)iVar8,(float)iVar7);
  memset(auStack_1c8,0,200);
  FUN_02826bb8(*(undefined8 *)(param_5 + 0x160),local_164,auStack_14c,auStack_15c,&local_154,0);
  FUN_02805108(&local_5f8,&local_f0,0);
  uStack_1e8 = uStack_5f0;
  local_1f0 = local_5f8;
  uStack_1d8 = uStack_5e0;
  local_1e0 = uStack_5e8;
  uVar13 = FUN_0281c6a4(&local_1f0,0);
  uVar16 = uStack_5e8;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
    uVar16 = uStack_5e8;
  }
  uVar14 = FUN_02681b9c(uVar13,0,0);
  if ((uVar14 & 1) == 0) {
    uVar13 = FUN_0281c728(&local_1f0,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar14 = FUN_02681b9c(uVar13,0,0);
    if ((uVar14 & 1) == 0) {
      uVar13 = FUN_0281c830(&local_1f0,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar14 = FUN_02681b9c(uVar13,0,0);
      if ((uVar14 & 1) == 0) {
        uVar13 = FUN_0281c7ac(&local_1f0,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        uVar14 = FUN_02681b9c(uVar13,0,0);
        if ((uVar14 & 1) == 0) {
          return;
        }
      }
    }
  }
  memset(auStack_458,0,200);
  uVar13 = FUN_0281c6a4(&local_1f0,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar14 = FUN_02681b9c(uVar13,0,0);
  if ((uVar14 & 1) != 0) {
    if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
    FUN_0274c234(*(long *)(param_5 + 0x160),0);
    local_530 = 0;
    local_528 = 0;
    uVar13 = extraout_var;
    FUN_0268834c(ZEXT816(0),0,0x3f800000,0x3f800000,&local_530,0);
    uVar15 = FUN_0281c6a4(&local_1f0,0);
    uVar21 = FUN_02805610(&local_f0,0);
    if ((*(long *)(param_5 + 0x160) == 0) ||
       (plVar11 = (long *)FUN_0274aad0(*(long *)(param_5 + 0x160),0), plVar11 == (long *)0x0))
    goto LAB_02785aec;
    lVar18 = *plVar11;
    lVar17 = *(long *)puVar4;
    uVar14 = (ulong)*(ushort *)(lVar18 + 0x12a);
    uVar29 = extraout_d0;
    if (uVar14 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) goto LAB_02785468;
        uVar14 = uVar14 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar14 != 0);
    }
LAB_02785458:
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,lVar17,2);
    goto LAB_02785478;
  }
  uVar13 = FUN_0281c728(&local_1f0,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar14 = FUN_02681b9c(uVar13,0,0);
  if ((uVar14 & 1) == 0) {
    uVar13 = FUN_0281c7ac(&local_1f0,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar14 = FUN_02681b9c(uVar13,0,0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
      FUN_0274c234(*(long *)(param_5 + 0x160),0);
      local_530 = 0;
      local_528 = 0;
      uVar13 = extraout_var_01;
      FUN_0268834c(ZEXT816(0),0,0x3f800000,0x3f800000,&local_530,0);
      uVar15 = FUN_0281c7ac(&local_1f0,0);
      uVar21 = FUN_02805610(&local_f0,0);
      if ((*(long *)(param_5 + 0x160) == 0) ||
         (plVar11 = (long *)FUN_0274aad0(*(long *)(param_5 + 0x160),0), plVar11 == (long *)0x0))
      goto LAB_02785aec;
      lVar18 = *plVar11;
      lVar17 = *(long *)puVar4;
      uVar14 = (ulong)*(ushort *)(lVar18 + 0x12a);
      uVar29 = extraout_d0_01;
      if (uVar14 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar17) goto LAB_02785468;
          uVar14 = uVar14 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar14 != 0);
      }
      goto LAB_02785458;
    }
    uVar13 = FUN_0281c830(&local_1f0,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar14 = FUN_02681b9c(uVar13,0,0);
    if ((uVar14 & 1) == 0) {
      uVar21 = 0x3f800000;
      goto LAB_027856a8;
    }
    if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
    FUN_0274c234(*(long *)(param_5 + 0x160),0);
    local_530 = 0;
    local_528 = 0;
    uVar13 = extraout_var_02;
    FUN_0268834c(ZEXT816(0),0,0x3f800000,0x3f800000,&local_530,0);
    uVar15 = FUN_0281c830(&local_1f0,0);
    uVar21 = FUN_02805610(&local_f0,0);
    if ((*(long *)(param_5 + 0x160) == 0) ||
       (plVar11 = (long *)FUN_0274aad0(*(long *)(param_5 + 0x160),0), plVar11 == (long *)0x0))
    goto LAB_02785aec;
    lVar17 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar14 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 2) * 0x10 + 0x138);
          goto LAB_02785aa4;
        }
        uVar14 = uVar14 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar14 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,2);
LAB_02785aa4:
    uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    auVar26._8_8_ = uVar13;
    auVar26._0_8_ = extraout_d0_02;
    FUN_02828a0c(&local_5f8,auVar26,uVar16,uVar19,uVar31,(undefined4)local_530,local_530._4_4_,
                 (undefined4)local_528,local_528._4_4_,uVar15,uVar21,uVar9,0);
    goto LAB_027854bc;
  }
  if (*(long *)(param_5 + 0x160) == 0) goto LAB_02785aec;
  FUN_0274c234(*(long *)(param_5 + 0x160),0);
  local_530 = 0;
  local_528 = 0;
  uVar13 = extraout_var_00;
  FUN_0268834c(ZEXT816(0),0,0x3f800000,0x3f800000,&local_530,0);
  uVar15 = FUN_0281c728(&local_1f0,0);
  uVar21 = FUN_02805610(&local_f0,0);
  if ((*(long *)(param_5 + 0x160) == 0) ||
     (plVar11 = (long *)FUN_0274aad0(*(long *)(param_5 + 0x160),0),
     puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__,
     plVar11 == (long *)0x0)) goto LAB_02785aec;
  lVar17 = *plVar11;
  uVar14 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar14 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 2) * 0x10 + 0x138);
        goto LAB_027855d8;
      }
      uVar14 = uVar14 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar14 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar4,2);
LAB_027855d8:
  uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar10 = FUN_02828b2c(auStack_1c8,0);
  auVar25._8_8_ = uVar13;
  auVar25._0_8_ = extraout_d0_00;
  FUN_0282822c(&local_5f8,auVar25,uVar16,uVar19,uVar31,(undefined4)local_530,local_530._4_4_,
               (undefined4)local_528,local_528._4_4_,uVar15,uVar21,uVar9,uVar10 & 1,&local_100,0);
  memcpy(auStack_458,&local_5f8,200);
  uVar13 = *(undefined8 *)(param_5 + 0x160);
  uVar16 = FUN_0281c728(&local_1f0,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  uVar21 = FUN_027a7ad0(uVar13,uVar16,0);
LAB_027856a8:
  uVar13 = local_f8;
  uVar16 = local_100;
  uVar9 = (undefined4)uVar19;
  uVar30 = (undefined4)uVar31;
  uStack_3ec = local_164._8_8_;
  local_3f4 = local_164;
  uStack_3dc = auStack_14c[0];
  local_3e4 = local_154;
  if (DAT_037757b3 == '\0') {
    thunk_FUN_00d48444(Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__);
    DAT_037757b3 = '\x01';
  }
  uVar15 = **(undefined8 **)
             (*(long *)Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__ + 0xb8);
  uVar29 = (*(undefined8 **)
             (*(long *)Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__ + 0xb8))[1];
  fVar22 = (float)uVar16 - (float)uVar15;
  fVar27 = (float)((ulong)uVar16 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
  fVar28 = (float)uVar13 - (float)uVar29;
  local_434 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar29 >> 0x20);
  local_434 = local_434 * local_434;
  if (fVar1 <= local_434 + fVar28 * fVar28 + fVar22 * fVar22 + fVar27 * fVar27) {
    fVar1 = (float)local_100;
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774fe0 = '\x01';
    }
    puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar32 = (double)fVar1;
    dVar23 = modf(dVar32,&local_5f8);
    if (0.0 <= fVar1) {
      if (dVar23 == 0.5) {
        dVar23 = local_5f8 + 1.0;
        goto LAB_027857b4;
      }
      dVar32 = (double)(long)(dVar32 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = local_5f8 + -1.0;
LAB_027857b4:
      dVar32 = local_5f8;
      if (((long)local_5f8 & 1U) != 0) {
        dVar32 = dVar23;
      }
    }
    else {
      dVar32 = (double)(long)(dVar32 + -0.5);
    }
    fVar1 = local_100._4_4_;
    local_3d4 = -0x80000000;
    if (dVar32 != INFINITY) {
      local_3d4 = (int)dVar32;
    }
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774fe0 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar32 = (double)fVar1;
    dVar23 = modf(dVar32,&local_5f8);
    if (0.0 <= fVar1) {
      if (dVar23 == 0.5) {
        dVar23 = local_5f8 + 1.0;
        goto LAB_02785864;
      }
      dVar32 = (double)(long)(dVar32 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = local_5f8 + -1.0;
LAB_02785864:
      dVar32 = local_5f8;
      if (((long)local_5f8 & 1U) != 0) {
        dVar32 = dVar23;
      }
    }
    else {
      dVar32 = (double)(long)(dVar32 + -0.5);
    }
    fVar1 = (float)local_f8;
    local_3d0 = -0x80000000;
    if (dVar32 != INFINITY) {
      local_3d0 = (int)dVar32;
    }
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774fe0 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar32 = (double)fVar1;
    dVar23 = modf(dVar32,&local_5f8);
    if (0.0 <= fVar1) {
      if (dVar23 == 0.5) {
        dVar23 = local_5f8 + 1.0;
        goto LAB_02785914;
      }
      dVar32 = (double)(long)(dVar32 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = local_5f8 + -1.0;
LAB_02785914:
      dVar32 = local_5f8;
      if (((long)local_5f8 & 1U) != 0) {
        dVar32 = dVar23;
      }
    }
    else {
      dVar32 = (double)(long)(dVar32 + -0.5);
    }
    fVar1 = local_f8._4_4_;
    local_3cc = -0x80000000;
    if (dVar32 != INFINITY) {
      local_3cc = (int)dVar32;
    }
    if (DAT_03774fe0 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03774fe0 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    dVar32 = (double)fVar1;
    dVar23 = modf(dVar32,&local_5f8);
    if (0.0 <= fVar1) {
      if (dVar23 == 0.5) {
        dVar23 = local_5f8 + 1.0;
        goto LAB_027859c4;
      }
      local_5f8 = (double)(long)(dVar32 + 0.5);
    }
    else if (dVar23 == -0.5) {
      dVar23 = local_5f8 + -1.0;
LAB_027859c4:
      if (((long)local_5f8 & 1U) != 0) {
        local_5f8 = dVar23;
      }
    }
    else {
      local_5f8 = (double)(long)(dVar32 + -0.5);
    }
    local_434 = 0.0;
    local_3c8 = -0x80000000;
    if (local_5f8 != INFINITY) {
      local_3c8 = (int)local_5f8;
    }
  }
  local_438 = FUN_028055bc(&local_f0,0);
  local_430 = uVar9;
  local_42c = uVar30;
  if (*(long *)(param_5 + 0x160) != 0) {
    local_3a0 = FUN_02826878(*(undefined8 *)(param_5 + 0x10),
                             *(undefined8 *)(*(long *)(param_5 + 0x160) + 0x198),0);
    local_3c4 = uVar21;
    FUN_02826e54(*(undefined8 *)(param_5 + 0x160),auStack_458,0);
    memcpy(auStack_6c0,auStack_458,200);
    FUN_027839fc(param_5,auStack_6c0);
    return;
  }
LAB_02785aec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_02785468:
  puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 2) * 0x10 + 0x138);
LAB_02785478:
  uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
  auVar24._8_8_ = uVar13;
  auVar24._0_8_ = uVar29;
  FUN_028280bc(&local_5f8,auVar24,uVar16,uVar19,uVar31,(undefined4)local_530,local_530._4_4_,
               (undefined4)local_528,local_528._4_4_,uVar15,uVar21,uVar9,0);
LAB_027854bc:
  uVar21 = 0x3f800000;
  memcpy(auStack_458,&local_5f8,200);
  goto LAB_027856a8;
}


