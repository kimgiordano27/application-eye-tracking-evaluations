/*
FUNCTION_NAME: FUN_023f1040
ENTRY_POINT: 023f1040
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023f1040(undefined8 *param_1,float param_2,float param_3,float param_4,long param_5,
                 uint param_6)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  double dVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double __x;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float local_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 uStack_a8;
  
  if ((DAT_03782202 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>__ctor__
                      );
    thunk_FUN_00d48444(Method_SmackAJack_ClownHidden__);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_Interpreter_LessThanInstruction_Create__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_InteractorUnityEventWrapper_HandleProcessed__);
    thunk_FUN_00d48444(StringLiteral_517);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueNotNullAsync>d__110>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<HmdOffset>__);
    thunk_FUN_00d48444(StringLiteral_3064);
    thunk_FUN_00d48444(StringLiteral_9728);
    thunk_FUN_00d48444(
                      Method_RotationalVelocitySoundSpawner_<SoundOffCorourtine>d__19_System_Collections_IEnumerator_Reset__
                      );
    DAT_03782202 = 1;
  }
  puVar10 = Method_UnityEngine_GameObject_AddComponent<HmdOffset>__;
  param_4 = param_4 * DAT_028aa044;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  if ((int)param_6 < 3) {
    local_f0 = param_2 * DAT_0293fa44;
  }
  else {
    fVar23 = DAT_028aa3a0;
    local_f0 = param_2;
    if (param_6 != 4) goto LAB_023f1178;
  }
  param_6 = 4;
  fVar23 = DAT_028aa3c0;
LAB_023f1178:
  uVar2 = param_6 << 1 | 1;
  iVar7 = param_6 * 9;
  FUN_013421d4(&local_b0,uVar2,2,1,*(undefined8 *)StringLiteral_3064);
  FUN_013421d4(&local_c0,iVar7,2,1,*(undefined8 *)puVar10);
  puVar10 = 
  Method_RotationalVelocitySoundSpawner_<SoundOffCorourtine>d__19_System_Collections_IEnumerator_Reset__
  ;
  if (param_5 != 0) {
    uVar3 = param_6 * 2;
    lVar15 = FUN_023ef608(param_5);
    puVar17 = *(undefined4 **)(*(long *)puVar10 + 0xb8);
    uVar24 = puVar17[1];
    uVar26 = puVar17[2];
    uVar21 = FUN_022743a0(*puVar17,0);
    puVar11 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
    puVar10 = System_Threading_Timer_TimerComparer_TypeInfo;
    fVar9 = DAT_028aaa70;
    uVar8 = _LAB_028aa0b8;
    uVar16 = _LAB_028aa0b0;
    fVar33 = 0.0;
    fVar28 = local_f0 * 0.0;
    puVar17 = (undefined4 *)(local_b0 + (ulong)(uVar3 & 0xfffe) * 0x24);
    fVar38 = param_3 * 0.0 + fVar28;
    fVar29 = -3.4028235e+38;
    fVar35 = 3.4028235e+38;
    *puVar17 = uVar21;
    puVar17[1] = uVar24;
    puVar17[2] = uVar26;
    *(undefined8 *)(puVar17 + 5) = uVar8;
    *(undefined8 *)(puVar17 + 3) = uVar16;
    *(undefined8 *)(puVar17 + 7) = 0;
    iVar20 = 0;
    uVar18 = 0;
    iVar19 = 8;
    fVar1 = ABS(fVar38);
    fVar36 = fVar29;
    fVar31 = 0.0;
    fVar39 = fVar35;
    do {
      uVar18 = uVar18 + 1;
      if (DAT_037818f7 == '\0') {
        thunk_FUN_00d48444(puVar10);
        DAT_037818f7 = '\x01';
      }
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      __x = (double)(param_4 + fVar23 + (fVar9 / (float)(int)param_6) * (float)(int)uVar18);
      dVar22 = cos(__x);
      if (DAT_037818fd == '\0') {
        thunk_FUN_00d48444(puVar10);
        DAT_037818fd = '\x01';
      }
      fVar34 = (float)dVar22;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      dVar22 = sin(__x);
      fVar37 = (float)dVar22;
      iVar4 = 0;
      if (uVar3 != 0) {
        iVar4 = (iVar20 + 2) / (int)uVar3;
      }
      fVar30 = local_f0 * fVar34;
      fVar32 = local_f0 * fVar37;
      iVar4 = (iVar20 + 2) - iVar4 * uVar3;
      fVar25 = fVar32;
      fVar27 = fVar28;
      uVar21 = FUN_022743a0(fVar30,0);
      puVar17 = (undefined4 *)(local_b0 + (long)iVar4 * 0x24);
      *puVar17 = uVar21;
      puVar17[1] = fVar25;
      puVar17[2] = fVar27;
      puVar17[3] = fVar34;
      puVar17[4] = fVar37;
      *(undefined8 *)(puVar17 + 5) = 0;
      *(undefined8 *)(puVar17 + 7) = 0;
      fVar25 = fVar32;
      fVar27 = fVar28;
      uVar21 = FUN_022743a0(fVar30,0);
      uVar5 = (ushort)iVar20 | 1;
      puVar17 = (undefined4 *)(local_b0 + (long)(iVar4 + 1) * 0x24);
      *puVar17 = uVar21;
      puVar17[1] = fVar25;
      puVar17[2] = fVar27;
      *(undefined8 *)(puVar17 + 7) = 0;
      *(undefined8 *)(puVar17 + 5) = uVar8;
      *(undefined8 *)(puVar17 + 3) = uVar16;
      uVar6 = (undefined2)(iVar4 + 1);
      *(undefined2 *)(local_c0 + (long)(iVar19 + -8) * 2) = uVar6;
      *(ushort *)(local_c0 + (long)(iVar19 + -7) * 2) = uVar5;
      *(short *)(local_c0 + (long)(iVar19 + -6) * 2) = (short)uVar3;
      *(short *)(local_c0 + (long)(iVar19 + -5) * 2) = (short)iVar4;
      *(ushort *)(local_c0 + (long)(iVar19 + -4) * 2) = (ushort)iVar20;
      *(ushort *)(local_c0 + (long)(iVar19 + -3) * 2) = uVar5;
      *(undefined2 *)(local_c0 + (long)(iVar19 + -2) * 2) = uVar6;
      *(short *)(local_c0 + (long)(iVar19 + -1) * 2) = (short)iVar4;
      *(ushort *)(local_c0 + (long)iVar19 * 2) = uVar5;
      if (DAT_03774d75 == '\0') {
        thunk_FUN_00d48444(puVar11);
        DAT_03774d75 = '\x01';
      }
      fVar30 = fVar30 + fVar34 * param_3;
      fVar34 = fVar30;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        bVar13 = (uint)ABS(fVar30) < 0x7f800001;
        if (fVar39 < fVar30 || !bVar13) {
          fVar34 = fVar39;
        }
        if (DAT_03774d75 == '\0') {
          thunk_FUN_00d48444(puVar11);
          DAT_03774d75 = '\x01';
        }
      }
      else {
        bVar13 = (uint)ABS(fVar30) < 0x7f800001;
        if (fVar39 < fVar30 || !bVar13) {
          fVar34 = fVar39;
        }
      }
      fVar39 = fVar34;
      fVar32 = fVar32 + fVar37 * param_3;
      fVar34 = fVar32;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        bVar14 = (uint)ABS(fVar32) < 0x7f800001;
        if (fVar35 < fVar32 || !bVar14) {
          fVar34 = fVar35;
        }
        if (DAT_03774d75 == '\0') {
          thunk_FUN_00d48444(puVar11);
          DAT_03774d75 = '\x01';
        }
      }
      else {
        bVar14 = (uint)ABS(fVar32) < 0x7f800001;
        if (fVar35 < fVar32 || !bVar14) {
          fVar34 = fVar35;
        }
      }
      fVar35 = fVar34;
      fVar34 = fVar38;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        if (fVar33 < fVar38 || 0x7f800000 < (uint)fVar1) {
          fVar34 = fVar33;
        }
        if (DAT_03774d75 == '\0') {
          thunk_FUN_00d48444(puVar11);
          DAT_03774d75 = '\x01';
        }
      }
      else if (fVar33 < fVar38 || 0x7f800000 < (uint)fVar1) {
        fVar34 = fVar33;
      }
      fVar33 = fVar34;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        if (!(bool)(fVar36 <= fVar30 & bVar13)) {
          fVar30 = fVar36;
        }
        if (DAT_03774d75 == '\0') {
          thunk_FUN_00d48444(puVar11);
          DAT_03774d75 = '\x01';
        }
      }
      else if (!(bool)(fVar36 <= fVar30 & bVar13)) {
        fVar30 = fVar36;
      }
      fVar36 = fVar30;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        if (!(bool)(fVar29 <= fVar32 & bVar14)) {
          fVar32 = fVar29;
        }
        if (DAT_03774d75 == '\0') {
          thunk_FUN_00d48444(puVar11);
          DAT_03774d75 = '\x01';
        }
      }
      else if (!(bool)(fVar29 <= fVar32 & bVar14)) {
        fVar32 = fVar29;
      }
      fVar29 = fVar32;
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      puVar12 = Method_SmackAJack_ClownHidden__;
      iVar19 = iVar19 + 9;
      fVar34 = fVar38;
      if (fVar38 < fVar31 || 0x7f800000 < (uint)fVar1) {
        fVar34 = fVar31;
      }
      iVar20 = iVar20 + 2;
      fVar31 = fVar34;
    } while (param_6 != uVar18);
    if (*(int *)(*(long *)Method_SmackAJack_ClownHidden__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (lVar15 != 0) {
      FUN_0266d128(lVar15,uVar2,**(undefined8 **)(*(long *)puVar12 + 0xb8),0);
      FUN_01121c9c(lVar15,local_b0,uStack_a8,0,0,uVar2,0,0,
                   *(undefined8 *)
                    Method_Oculus_Interaction_InteractorUnityEventWrapper_HandleProcessed__);
      FUN_011210ec(lVar15,local_c0,uStack_b8,0,0,0,0,
                   *(undefined8 *)
                    Method_System_Linq_Expressions_Interpreter_LessThanInstruction_Create__);
      uVar16 = FUN_00da4fb8(*(undefined8 *)
                             Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_ProxyFlex<ConsoleLine,_ProxyConsoleLine>__ctor__
                            ,uVar2);
      *(undefined8 *)(param_5 + 0x90) = uVar16;
      FUN_013439ac(local_b0,uStack_a8,uVar16,uVar2,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<WriteValueNotNullAsync>d__110>__
                  );
      uVar16 = FUN_00da4fb8(*(undefined8 *)StringLiteral_9728,iVar7);
      *(undefined8 *)(param_5 + 0x98) = uVar16;
      FUN_013439ac(local_c0,uStack_b8,uVar16,iVar7,*(undefined8 *)StringLiteral_517);
      uStack_d0 = 0;
      local_c8 = 0;
      local_d8 = 0;
      FUN_022743a0(fVar39,fVar35,fVar33,0);
      FUN_02687c40(&local_d8,0);
      FUN_022743a0(fVar36,fVar29,fVar34,0);
      FUN_02687ce8(&local_d8,0);
      param_1[2] = local_c8;
      param_1[1] = uStack_d0;
      *param_1 = local_d8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


