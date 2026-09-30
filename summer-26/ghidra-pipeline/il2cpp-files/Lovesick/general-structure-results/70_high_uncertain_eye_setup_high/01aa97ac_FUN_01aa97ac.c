/*
FUNCTION_NAME: FUN_01aa97ac
ENTRY_POINT: 01aa97ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01aa97ac(long *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  ulong local_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  float local_d8;
  ulong local_d0;
  float local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  float local_a8;
  
  puVar1 = System_Data_DataColumnCollection_TypeInfo;
  if ((DAT_0377ce3d & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5227);
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_122_0_TypeInfo);
    DAT_0377ce3d = 1;
  }
  lVar7 = *(long *)puVar1;
  local_a8 = 0.0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_c8 = 0.0;
  local_d0 = 0;
  local_d8 = 0.0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_140 = 0;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x1b4) == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  uVar8 = FUN_0269e56c(0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xa3) != '\0') {
    lVar7 = param_1[5];
    FUN_01aa05d8(auStack_160);
    FUN_01aaac28(lVar7,auStack_160,1);
    lVar7 = param_1[4];
    FUN_01aa05d8(auStack_180);
    FUN_01aaac28(lVar7,auStack_180,1);
    lVar7 = param_1[6];
    FUN_01aa05d8(auStack_1a0);
    FUN_01aaac28(lVar7,auStack_1a0,1);
    return;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377a363 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377a363 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  puVar2 = OVRPlugin_OVRP_1_122_0_TypeInfo;
  if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_01aaac24;
  uVar8 = FUN_01affc04(**(long **)(lVar7 + 0xb8),0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar9 = FUN_01aaac90();
  if (DAT_0377cea4 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377cea4 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar7 == 0) goto LAB_01aaac24;
  FUN_01b81f24(&local_1c0,lVar7,0,0);
  uVar34 = local_1b8;
  uVar16 = local_1bc;
  uVar32 = local_1c0;
  if (param_1[0x11] == 0) goto LAB_01aaac24;
  FUN_0269f994(local_1b4,local_1b0,local_1ac,local_1a8,param_1[0x11],0);
  if (DAT_0377a363 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377a363 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_01aaac24;
  fVar28 = *(float *)(**(long **)(lVar7 + 0xb8) + 0x50);
  if (DAT_0377a363 == '\0') {
    thunk_FUN_00d48444(puVar1);
    lVar7 = *(long *)puVar1;
    DAT_0377a363 = '\x01';
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_01aaac24;
  fVar30 = *(float *)(**(long **)(lVar7 + 0xb8) + 0x54);
  if (DAT_0377a363 == '\0') {
    thunk_FUN_00d48444(puVar1);
    lVar7 = *(long *)puVar1;
    DAT_0377a363 = '\x01';
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  if (**(long **)(lVar7 + 0xb8) == 0) goto LAB_01aaac24;
  fVar30 = fVar30 * DAT_028aa4f0;
  fVar21 = *(float *)(**(long **)(lVar7 + 0xb8) + 0x58) * DAT_028aa044;
  fVar24 = DAT_028aa044;
  FUN_02698b6c(fVar28 * DAT_028aa4f0,fVar30,fVar21,0);
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if ((param_2 & 1) != 0) {
    if ((uVar9 & 1) == 0) {
      if (param_1[5] == 0) goto LAB_01aaac24;
      FUN_0269f994(param_1[5],0);
      lVar7 = param_1[5];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_0377a363 == '\0') {
        thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
        DAT_0377a363 = '\x01';
      }
      lVar10 = *(long *)puVar1;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar1;
      }
      lVar10 = **(long **)(lVar10 + 0xb8);
      if ((lVar10 == 0) || (lVar7 == 0)) goto LAB_01aaac24;
      fVar30 = *(float *)(lVar10 + 0x60);
      fVar21 = *(float *)(lVar10 + 100);
      FUN_0269f750(*(undefined4 *)(lVar10 + 0x5c),fVar30,fVar21,lVar7,0);
LAB_01aa9e00:
      if (param_1[5] == 0) goto LAB_01aaac24;
      lVar7 = param_1[4];
      FUN_0269f6b0(param_1[5],0);
      if (lVar7 == 0) goto LAB_01aaac24;
      FUN_0269f750(lVar7,0);
      if (param_1[5] == 0) goto LAB_01aaac24;
      lVar7 = param_1[6];
      FUN_0269f6b0(param_1[5],0);
      if (lVar7 == 0) goto LAB_01aaac24;
      FUN_0269f750(lVar7,0);
      if (param_1[5] == 0) goto LAB_01aaac24;
      lVar7 = param_1[4];
      FUN_0269f910(param_1[5],0);
      if (lVar7 == 0) goto LAB_01aaac24;
      FUN_0269f994(lVar7,0);
      if (param_1[5] == 0) goto LAB_01aaac24;
      lVar7 = param_1[6];
      uVar8 = FUN_0269f910(param_1[5],0);
      if (lVar7 == 0) goto LAB_01aaac24;
    }
    else {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      local_b0 = **(ulong **)(*(long *)puVar3 + 0xb8);
      local_a8 = *(float *)(*(ulong **)(*(long *)puVar3 + 0xb8) + 1);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      uStack_b8 = (*(ulong **)
                    (*(long *)
                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
                    0xb8))[1];
      local_c0 = **(ulong **)
                   (*(long *)
                     Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
                   0xb8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01aa0670(2,4,2,0xffffffff,&local_b0);
      if ((uVar9 & 1) != 0) {
        if (param_1[5] == 0) goto LAB_01aaac24;
        fVar30 = (float)(local_b0 >> 0x20);
        fVar21 = local_a8;
        FUN_0269f750(local_b0 & 0xffffffff,local_b0 >> 0x20,local_a8,param_1[5],0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01aa099c(2,5,2,0xffffffff,&local_c0);
      if ((uVar9 & 1) != 0) {
        if (param_1[5] == 0) goto LAB_01aaac24;
        fVar24 = (float)(uStack_b8 >> 0x20);
        fVar21 = (float)uStack_b8;
        fVar30 = (float)(local_c0 >> 0x20);
        FUN_0269f994(local_c0 & 0xffffffff,local_c0 >> 0x20,uStack_b8 & 0xffffffff,uStack_b8 >> 0x20
                     ,param_1[5],0);
      }
      if ((uVar8 & 1) != 0) goto LAB_01aa9e00;
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar12 = *(ulong **)(*(long *)puVar3 + 0xb8);
      local_d0 = *puVar12;
      local_c8 = *(float *)(puVar12 + 1);
      local_e0 = *puVar12;
      local_d8 = *(float *)(puVar12 + 1);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      puVar12 = *(ulong **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      uStack_e8 = puVar12[1];
      local_f0 = *puVar12;
      uStack_f8 = puVar12[1];
      local_100 = *puVar12;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa0670(0,4,0,0xffffffff,&local_d0);
      if ((uVar8 & 1) != 0) {
        if (param_1[4] == 0) goto LAB_01aaac24;
        fVar30 = (float)(local_d0 >> 0x20);
        fVar21 = local_c8;
        FUN_0269f750(local_d0 & 0xffffffff,local_d0 >> 0x20,local_c8,param_1[4],0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa0670(1,4,1,0xffffffff,&local_e0);
      if ((uVar8 & 1) != 0) {
        if (param_1[6] == 0) goto LAB_01aaac24;
        fVar30 = (float)(local_e0 >> 0x20);
        fVar21 = local_d8;
        FUN_0269f750(local_e0 & 0xffffffff,local_e0 >> 0x20,local_d8,param_1[6],0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa099c(0,5,0,0xffffffff,&local_f0);
      if ((uVar8 & 1) != 0) {
        if (param_1[4] == 0) goto LAB_01aaac24;
        fVar24 = (float)(uStack_e8 >> 0x20);
        fVar21 = (float)uStack_e8;
        fVar30 = (float)(local_f0 >> 0x20);
        FUN_0269f994(local_f0 & 0xffffffff,local_f0 >> 0x20,uStack_e8 & 0xffffffff,uStack_e8 >> 0x20
                     ,param_1[4],0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa099c(1,5,1,0xffffffff,&local_100);
      if ((uVar8 & 1) == 0) goto LAB_01aa9e90;
      lVar7 = param_1[6];
      if (lVar7 == 0) goto LAB_01aaac24;
      uVar8 = local_100 & 0xffffffff;
      fVar24 = uStack_f8._4_4_;
      fVar30 = local_100._4_4_;
      fVar21 = (float)uStack_f8;
    }
    FUN_0269f994(uVar8,lVar7,0);
  }
LAB_01aa9e90:
  if ((param_3 & 1) != 0) {
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar1;
    }
    puVar4 = StringLiteral_5227;
    if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x118) == 2) {
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar12 = *(ulong **)(*(long *)puVar3 + 0xb8);
      local_110 = *puVar12;
      local_108 = (undefined4)puVar12[1];
      local_120 = *puVar12;
      local_118 = (undefined4)puVar12[1];
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      puVar12 = *(ulong **)
                 (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                 + 0xb8);
      uStack_128 = puVar12[1];
      local_130 = *puVar12;
      uStack_138 = puVar12[1];
      local_140 = *puVar12;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa0670(4,4,3,0xffffffff,&local_110);
      if ((uVar8 & 1) != 0) {
        if (param_1[7] == 0) goto LAB_01aaac24;
        FUN_0269f750(local_110 & 0xffffffff,local_110._4_4_,local_108,param_1[7],0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa0670(5,4,4,0xffffffff,&local_120);
      if ((uVar8 & 1) != 0) {
        if (param_1[8] == 0) goto LAB_01aaac24;
        FUN_0269f750(local_120 & 0xffffffff,local_120._4_4_,local_118,param_1[8],0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa099c(4,5,3,0xffffffff,&local_130);
      if ((uVar8 & 1) != 0) {
        if (param_1[7] == 0) goto LAB_01aaac24;
        FUN_0269f994(local_130 & 0xffffffff,local_130._4_4_,uStack_128 & 0xffffffff,uStack_128._4_4_
                     ,param_1[7],0);
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01aa099c(5,5,4,0xffffffff,&local_140);
      if ((uVar8 & 1) != 0) {
        lVar7 = param_1[8];
        if (lVar7 == 0) goto LAB_01aaac24;
        puVar12 = &local_140;
        goto LAB_01aaa740;
      }
    }
    else {
      if (*(int *)(*(long *)StringLiteral_5227 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_01af5e60(1,0);
      iVar6 = FUN_01af5e60(2,0);
      puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
      if (uVar5 == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar5 = 0x20;
        uVar8 = FUN_01af5b5c(0x20,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar5 = FUN_01af5b5c(1,0);
          uVar5 = uVar5 & 1;
        }
      }
      if (iVar6 == 0) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iVar6 = 0x40;
        uVar8 = FUN_01af5b5c(0x40,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar8 = FUN_01af5b5c(2,0);
          iVar6 = 2;
          if ((uVar8 & 1) == 0) {
            iVar6 = 0;
          }
        }
      }
      lVar7 = param_1[7];
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01af5f5c(uVar5,0);
      if (lVar7 == 0) goto LAB_01aaac24;
      FUN_0269f750(lVar7,0);
      lVar7 = param_1[8];
      FUN_01af5f5c(iVar6,0);
      if (lVar7 == 0) goto LAB_01aaac24;
      FUN_0269f750(lVar7,0);
      lVar7 = param_1[7];
      FUN_01af6928(uVar5,0);
      if (lVar7 == 0) goto LAB_01aaac24;
      FUN_0269f994(lVar7,0);
      lVar7 = param_1[8];
      FUN_01af6928(iVar6,0);
      if (lVar7 == 0) goto LAB_01aaac24;
      FUN_0269f994(lVar7,0);
      iVar6 = FUN_01af5d70(0,0);
      if (iVar6 == 1) {
        lVar7 = param_1[3];
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01af5f5c(0x20,0);
        if (lVar7 == 0) goto LAB_01aaac24;
        FUN_026a0e4c(lVar7,0);
        if (param_1[7] == 0) goto LAB_01aaac24;
        lVar7 = param_1[0xc];
        FUN_026a0f08(param_1[7],0);
        if (lVar7 == 0) goto LAB_01aaac24;
        FUN_0269f750(lVar7,0);
        if (param_1[7] == 0) goto LAB_01aaac24;
        lVar7 = param_1[0xc];
        FUN_0269f910(param_1[7],0);
        fVar14 = (float)FUN_02698858(0);
        fVar28 = fVar24;
        fVar18 = fVar30;
        fVar22 = fVar21;
        fVar15 = (float)FUN_01af6928(0x20,0);
        if (lVar7 == 0) goto LAB_01aaac24;
        FUN_0269f994((fVar30 * fVar22 + fVar24 * fVar15 + fVar14 * fVar28) - fVar21 * fVar18,
                     (fVar21 * fVar15 + fVar24 * fVar18 + fVar30 * fVar28) - fVar14 * fVar22,
                     (fVar14 * fVar18 + fVar24 * fVar22 + fVar21 * fVar28) - fVar30 * fVar15,
                     ((fVar24 * fVar28 - fVar14 * fVar15) - fVar30 * fVar18) - fVar21 * fVar22,lVar7
                     ,0);
        lVar7 = param_1[9];
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar7 == 0) goto LAB_01aaac24;
        puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_0269f750(*puVar13,puVar13[1],puVar13[2],lVar7,0);
        lVar7 = param_1[9];
      }
      else {
        if (iVar6 == 2) {
          lVar7 = param_1[9];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01af5f5c(1,0);
          if (lVar7 == 0) goto LAB_01aaac24;
          FUN_0269f750(lVar7,0);
          lVar7 = param_1[9];
          uVar8 = FUN_01af6928(1,0);
          if (lVar7 == 0) goto LAB_01aaac24;
        }
        else {
          lVar7 = param_1[9];
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          if (lVar7 == 0) goto LAB_01aaac24;
          puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          FUN_0269f750(*puVar13,puVar13[1],puVar13[2],lVar7,0);
          lVar7 = param_1[9];
          if (DAT_03774f00 == '\0') {
            thunk_FUN_00d48444(
                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                              );
            DAT_03774f00 = '\x01';
          }
          if (lVar7 == 0) goto LAB_01aaac24;
          uVar8 = (ulong)**(uint **)(*(long *)puVar2 + 0xb8);
        }
        FUN_0269f994(uVar8,lVar7,0);
        lVar7 = param_1[0xc];
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar7 == 0) goto LAB_01aaac24;
        puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_0269f750(*puVar13,puVar13[1],puVar13[2],lVar7,0);
        lVar7 = param_1[0xc];
      }
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar7 == 0) goto LAB_01aaac24;
      puVar13 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      fVar28 = (float)puVar13[1];
      fVar30 = (float)puVar13[2];
      fVar24 = (float)puVar13[3];
      FUN_0269f994(*puVar13,fVar28,fVar30,fVar24,lVar7,0);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      iVar6 = FUN_01af5d70(1,0);
      if (iVar6 == 1) {
        lVar7 = param_1[3];
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01af5f5c(0x40,0);
        if (lVar7 == 0) goto LAB_01aaac24;
        FUN_026a0e4c(lVar7,0);
        if (param_1[8] == 0) goto LAB_01aaac24;
        lVar7 = param_1[0xe];
        FUN_026a0f08(param_1[8],0);
        if (lVar7 == 0) goto LAB_01aaac24;
        FUN_0269f750(lVar7,0);
        if (param_1[8] == 0) goto LAB_01aaac24;
        lVar7 = param_1[0xe];
        FUN_0269f910(param_1[8],0);
        fVar14 = (float)FUN_02698858(0);
        fVar21 = fVar24;
        fVar18 = fVar28;
        fVar22 = fVar30;
        fVar15 = (float)FUN_01af6928(0x40,0);
        if (lVar7 == 0) goto LAB_01aaac24;
        FUN_0269f994((fVar28 * fVar22 + fVar24 * fVar15 + fVar14 * fVar21) - fVar30 * fVar18,
                     (fVar30 * fVar15 + fVar24 * fVar18 + fVar28 * fVar21) - fVar14 * fVar22,
                     (fVar14 * fVar18 + fVar24 * fVar22 + fVar30 * fVar21) - fVar28 * fVar15,
                     ((fVar24 * fVar21 - fVar14 * fVar15) - fVar28 * fVar18) - fVar30 * fVar22,lVar7
                     ,0);
        lVar7 = param_1[10];
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar7 == 0) goto LAB_01aaac24;
        puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_0269f750(*puVar13,puVar13[1],puVar13[2],lVar7,0);
        lVar7 = param_1[10];
      }
      else {
        if (iVar6 == 2) {
          lVar7 = param_1[10];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01af5f5c(2,0);
          if (lVar7 == 0) goto LAB_01aaac24;
          FUN_0269f750(lVar7,0);
          lVar7 = param_1[10];
          uVar8 = FUN_01af6928(2,0);
          if (lVar7 == 0) goto LAB_01aaac24;
        }
        else {
          lVar7 = param_1[10];
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          if (lVar7 == 0) goto LAB_01aaac24;
          puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          FUN_0269f750(*puVar13,puVar13[1],puVar13[2],lVar7,0);
          lVar7 = param_1[10];
          if (DAT_03774f00 == '\0') {
            thunk_FUN_00d48444(
                              Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                              );
            DAT_03774f00 = '\x01';
          }
          if (lVar7 == 0) goto LAB_01aaac24;
          uVar8 = (ulong)**(uint **)(*(long *)puVar2 + 0xb8);
        }
        FUN_0269f994(uVar8,lVar7,0);
        lVar7 = param_1[0xe];
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        if (lVar7 == 0) goto LAB_01aaac24;
        puVar13 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_0269f750(*puVar13,puVar13[1],puVar13[2],lVar7,0);
        lVar7 = param_1[0xe];
      }
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar7 == 0) goto LAB_01aaac24;
      puVar12 = *(ulong **)(*(long *)puVar2 + 0xb8);
LAB_01aaa740:
      FUN_0269f994(*puVar12,*puVar12 >> 0x20,puVar12[1] & 0xffffffff,puVar12[1] >> 0x20,lVar7,0);
    }
    if (param_1[0x11] == 0) goto LAB_01aaac24;
    FUN_0269f750(uVar32,uVar16,uVar34,param_1[0x11],0);
    FUN_01aa05d8(&local_1c0);
    uVar27 = local_1a8;
    uVar31 = local_1ac;
    uVar26 = local_1b0;
    uVar29 = local_1b4;
    uVar33 = local_1b8;
    uVar34 = local_1bc;
    uVar32 = local_1c0;
    FUN_01aa05d8(&local_1c0);
    uVar25 = local_1ac;
    uVar23 = local_1b8;
    uVar19 = local_1bc;
    uVar16 = local_1c0;
    lVar7 = *(long *)puVar1;
    local_1c4 = local_1b0;
    local_1c8 = local_1b4;
    local_1cc = local_1a8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar1;
    }
    if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x118) == 2) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01b01d78(&local_1c0,4,0);
      uVar27 = local_1a8;
      uVar31 = local_1ac;
      uVar26 = local_1b0;
      uVar29 = local_1b4;
      uVar33 = local_1b8;
      uVar34 = local_1bc;
      uVar32 = local_1c0;
      FUN_01b01d78(&local_1c0,5,0);
      if (param_1[0xf] == 0) goto LAB_01aaac24;
      lVar7 = param_1[3];
      local_1c8 = local_1b4;
      local_1cc = local_1a8;
      FUN_0269f578(param_1[0xf],0);
      if (lVar7 == 0) goto LAB_01aaac24;
      uVar16 = FUN_026a0f08(lVar7,0);
      if (param_1[0x10] == 0) goto LAB_01aaac24;
      lVar7 = param_1[3];
      uVar25 = uVar23;
      uVar20 = uVar19;
      FUN_0269f578(param_1[0x10],0);
      if (lVar7 == 0) goto LAB_01aaac24;
      uVar17 = FUN_026a0f08(lVar7,0);
      if (param_1[3] == 0) goto LAB_01aaac24;
      local_1c4 = local_1b0;
      FUN_0269f810(param_1[3],0);
      FUN_02698858(0);
      if (param_1[0xf] == 0) goto LAB_01aaac24;
      FUN_0269f810(param_1[0xf],0);
      if (param_1[3] == 0) goto LAB_01aaac24;
      FUN_0269f810(param_1[3],0);
      FUN_02698858(0);
      if (param_1[0x10] == 0) goto LAB_01aaac24;
      FUN_0269f810(param_1[0x10],0);
      FUN_01b01c70(uVar16,uVar19,uVar23,uVar17,uVar20,uVar25,0);
      uVar25 = local_1ac;
      uVar16 = local_1c0;
      uVar19 = local_1bc;
      uVar23 = local_1b8;
    }
    if (param_1[0x10] == 0) goto LAB_01aaac24;
    FUN_0269f750(uVar16,uVar19,uVar23,param_1[0x10],0);
    if (param_1[0x10] == 0) goto LAB_01aaac24;
    FUN_0269f994(local_1c8,local_1c4,uVar25,local_1cc,param_1[0x10],0);
    if (param_1[0xf] == 0) goto LAB_01aaac24;
    FUN_0269f750(uVar32,uVar34,uVar33,param_1[0xf],0);
    if (param_1[0xf] == 0) goto LAB_01aaac24;
    FUN_0269f994(uVar29,uVar26,uVar31,uVar27,param_1[0xf],0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377a363 == '\0') {
    thunk_FUN_00d48444(System_Data_DataColumnCollection_TypeInfo);
    DAT_0377a363 = '\x01';
  }
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar1;
  }
  if (**(long **)(lVar7 + 0xb8) != 0) {
    if (*(char *)(**(long **)(lVar7 + 0xb8) + 0x116) != '\0') {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar7 = FUN_01b05384(0);
      if (lVar7 != 0) {
        if (param_1[5] == 0) goto LAB_01aaac24;
        uVar11 = FUN_0268fd10(param_1[5],0);
        FUN_0289faa0(lVar7,uVar11,0,0);
        FUN_0289faa0(lVar7,param_1[7],1,0);
        FUN_0289faa0(lVar7,param_1[8],2,0);
      }
    }
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
    return;
  }
LAB_01aaac24:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


