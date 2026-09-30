/*
FUNCTION_NAME: FUN_02533fb0
ENTRY_POINT: 02533fb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_02533fb0(long param_1,float *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((DAT_03782b04 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<KeyValuePair<Edge,_List<Edge>>,_bool>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_474);
    thunk_FUN_00d48444(Method_TempoTarget_<>c__DisplayClass15_0_<HideEffects>b__0__);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ece78);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_STMWaveData>_get_Item__)
    ;
    DAT_03782b04 = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  fVar23 = param_2[3];
  fVar22 = param_2[4];
  fVar21 = param_2[5];
  fVar20 = param_2[6];
  if (DAT_037750c4 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037750c4 = '\x01';
  }
  puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar7 = *(long *)(*(long *)
                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                   + 0xb8);
  fVar18 = fVar22;
  fVar19 = fVar21;
  fVar9 = (float)FUN_02699088(fVar23,fVar22,fVar21,fVar20,*(undefined4 *)(lVar7 + 0x18),
                              *(undefined4 *)(lVar7 + 0x1c),*(undefined4 *)(lVar7 + 0x20),0);
  if (DAT_03777c7d == '\0') {
    thunk_FUN_00d48444(System_Func<Assembly[]>_TypeInfo);
    DAT_03777c7d = '\x01';
  }
  fVar10 = fVar19 * fVar19 + fVar9 * fVar9 + fVar18 * fVar18;
  if (**(float **)(*(long *)System_Func<Assembly[]>_TypeInfo + 0xb8) <= fVar10) {
    fVar22 = fVar21 * fVar19 + fVar23 * fVar9 + fVar22 * fVar18;
    fVar21 = (fVar9 * fVar22) / fVar10;
    fVar23 = (fVar18 * fVar22) / fVar10;
    fVar10 = (fVar19 * fVar22) / fVar10;
  }
  else {
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    pfVar8 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar21 = *pfVar8;
    fVar23 = pfVar8[1];
    fVar10 = pfVar8[2];
  }
  if (DAT_037757b2 == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_037757b2 = '\x01';
  }
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  fVar22 = SQRT(fVar20 * fVar20 + fVar10 * fVar10 + fVar21 * fVar21 + fVar23 * fVar23);
  if (fVar22 <= DAT_028aa038) {
    if (DAT_037757b3 == '\0') {
      thunk_FUN_00d48444(Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__);
      DAT_037757b3 = '\x01';
    }
    pfVar8 = *(float **)
              (*(long *)Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__ + 0xb8);
    fVar21 = *pfVar8;
    fVar23 = pfVar8[1];
    fVar10 = pfVar8[2];
    fVar20 = pfVar8[3];
  }
  else {
    fVar21 = fVar21 / fVar22;
    fVar23 = fVar23 / fVar22;
    fVar10 = fVar10 / fVar22;
    fVar20 = fVar20 / fVar22;
  }
  fVar22 = param_2[3];
  fVar24 = param_2[4];
  fVar18 = param_2[5];
  fVar19 = param_2[6];
  fVar9 = (fVar23 * fVar18 + (fVar21 * fVar19 - fVar22 * fVar20)) - fVar10 * fVar24;
  uVar13 = (ulong)(uint)((fVar10 * fVar22 + (fVar23 * fVar19 - fVar24 * fVar20)) - fVar21 * fVar18);
  uVar16 = (ulong)(uint)((fVar21 * fVar24 + (fVar10 * fVar19 - fVar18 * fVar20)) - fVar23 * fVar22);
  fVar20 = ((fVar19 * -fVar20 - fVar21 * fVar22) - fVar23 * fVar24) - fVar10 * fVar18;
  if (DAT_03775438 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775438 = '\x01';
  }
  lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
  uVar12 = uVar13;
  uVar15 = uVar16;
  fVar21 = (float)FUN_02699088(fVar9,uVar13,uVar16,fVar20,*(undefined4 *)(lVar7 + 0x3c),
                               *(undefined4 *)(lVar7 + 0x40),*(undefined4 *)(lVar7 + 0x44),0);
  if (DAT_03775377 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775377 = '\x01';
  }
  lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
  fVar20 = (float)FUN_02699088(fVar9,uVar13,uVar16,fVar20,*(undefined4 *)(lVar7 + 0x48),
                               *(undefined4 *)(lVar7 + 0x4c),*(undefined4 *)(lVar7 + 0x50),0);
  if (param_1 != 0) {
    lVar7 = *(long *)PTR_DAT_033ece78;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    uVar14 = uVar13;
    uVar17 = uVar16;
    uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
        if (param_3 == 0) goto LAB_02534480;
        goto LAB_02534390;
      }
    }
    if (param_3 != 0) {
LAB_02534390:
      puVar5 = StringLiteral_474;
      puVar4 = Method_TempoTarget_<>c__DisplayClass15_0_<HideEffects>b__0__;
      puVar3 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
      puVar2 = System_Func<KeyValuePair<Edge,_List<Edge>>,_bool>_TypeInfo;
      FUN_01323390(param_3,&local_a0,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_STMWaveData>_get_Item__);
      while (uVar6 = FUN_012b894c(&local_a0,*(undefined8 *)puVar5), (uVar6 & 1) != 0) {
        uVar11 = FUN_00bd0b24(&local_a0,*(undefined8 *)puVar4);
        fVar23 = param_2[4];
        fVar18 = param_2[5];
        fVar22 = (float)FUN_02699088(param_2[3],fVar23,fVar18,param_2[6],uVar11,uVar14,uVar17,0);
        fVar19 = (float)uVar16 * (fVar18 + param_2[2]);
        uVar17 = (ulong)(uint)fVar19;
        uVar14 = (ulong)(uint)(fVar19 + fVar20 * (fVar22 + *param_2) +
                                        (float)uVar13 * (fVar23 + param_2[1]));
        FUN_00bbed00((float)uVar15 * (fVar18 + param_2[2]) +
                     fVar21 * (fVar22 + *param_2) + (float)uVar12 * (fVar23 + param_2[1]),param_1,
                     *(undefined8 *)puVar3);
      }
      FUN_012b8948(&local_a0,*(undefined8 *)puVar2);
      return;
    }
  }
LAB_02534480:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


