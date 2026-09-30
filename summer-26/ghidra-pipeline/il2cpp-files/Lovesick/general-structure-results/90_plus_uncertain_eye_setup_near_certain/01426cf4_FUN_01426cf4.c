/*
FUNCTION_NAME: FUN_01426cf4
ENTRY_POINT: 01426cf4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01426cf4(long param_1,long param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined1 local_90 [16];
  int local_7c;
  undefined8 local_78;
  
  if ((DAT_037769a4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(
                      Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                      );
    thunk_FUN_00d48444(System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef798);
    thunk_FUN_00d48444(float___var);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5018);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_TMPro_SetPropertyUtility_SetStruct<bool>__);
    thunk_FUN_00d48444(StringLiteral_6199);
    thunk_FUN_00d48444(StringLiteral_207);
    thunk_FUN_00d48444(OVRPlugin_Vector2f___TypeInfo);
    thunk_FUN_00d48444(System_Nullable<T>_var);
    DAT_037769a4 = 1;
  }
  puVar5 = StringLiteral_6199;
  puVar4 = StringLiteral_302;
  puVar3 = Method_TMPro_SetPropertyUtility_SetStruct<bool>__;
  puVar2 = System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
  local_78 = 0;
  local_7c = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar17 = ZEXT816(0);
  if (param_2 == 0) goto LAB_01427078;
  iVar8 = *(int *)(param_2 + 0x118);
  if (iVar8 != param_3) {
    if (iVar8 == 0) {
      auVar17 = ZEXT816(0);
      if (*(long *)(param_2 + 0x120) == 0) goto LAB_01427078;
      if (*(long *)(*(long *)(param_2 + 0x120) + 0x18) != 0) {
        *(int *)(param_2 + 0x118) = param_3;
        goto LAB_01426ea8;
      }
    }
    local_a8 = *(undefined8 *)
                System_Func<ProbeVolumeSceneData_SerializablePVProfile,_string>_TypeInfo;
    uStack_a0 = 0xffffffffffffffff;
    local_98 = iVar8;
    uVar9 = FUN_017a7f78(&local_a8,0);
    local_c0 = *(undefined8 *)puVar2;
    uStack_b8 = 0xffffffffffffffff;
    local_b0 = param_3;
    uVar10 = FUN_017a7f78(&local_c0,0);
    uVar9 = FUN_0160073c(*(undefined8 *)puVar3,uVar9,*(undefined8 *)puVar5,uVar10,0);
    lVar13 = *(long *)puVar4;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar13);
    }
    FUN_026610e4(uVar9,0);
    param_3 = *(int *)(param_2 + 0x118);
  }
LAB_01426ea8:
  *(int *)(param_1 + 8) = param_3;
  auVar17 = FUN_0266d17c(*(undefined8 *)(param_2 + 0x1c0),0);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar17;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar9 = FUN_0266f3a8((undefined1 (*) [16])(param_1 + 0x20),0,0);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  puVar5 = StringLiteral_207;
  puVar3 = System_Nullable<T>_var;
  puVar2 = PTR_DAT_033ea8a0;
  if (*(int *)(param_1 + 4) < 4) {
LAB_01427098:
    uVar7 = *(undefined4 *)(param_1 + 8);
    if (*(int *)(*(long *)
                  Method_UnityEngine_TextCore_Text_TextProcessingStack<TextFontWeight>_SetDefault__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01422658(uVar7,param_4,(long)&local_78 + 4,&local_78);
    FUN_01422ddc(param_1,local_78._4_4_,local_78 & 0xffffffff,param_4);
    puVar4 = float___var;
    puVar3 = PTR_DAT_033f5018;
    puVar2 = PTR_DAT_033ef798;
    if (*(char *)(param_2 + 0x1b8) != '\0') {
      lVar13 = param_1 + 0x50;
      uVar7 = FUN_01344a5c(lVar13,*(undefined8 *)PTR_DAT_033f5018);
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_013421d4(&local_a8,uVar7,2,1,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x48) = uStack_a0;
      *(undefined8 *)(param_1 + 0x40) = local_a8;
      uVar9 = *(undefined8 *)(param_2 + 0x1ac);
      fVar16 = *(float *)(param_2 + 0x1b4);
      iVar8 = FUN_01344a5c(lVar13,*(undefined8 *)puVar3);
      puVar2 = 
      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__;
      if (0 < iVar8) {
        lVar15 = 0;
        uVar14 = 0;
        do {
          DigitalOpus_MB_Core_MatAndTransformToMerged__get_obUVRectIfTilingSame
                    (lVar13,uVar14 & 0xffffffff,&local_a8,*(undefined8 *)puVar2);
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar15);
          *puVar1 = CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)local_a8 >> 0x20),
                             (float)uVar9 + (float)local_a8);
          *(float *)(puVar1 + 1) = fVar16 + (float)uStack_a0;
          uVar14 = uVar14 + 1;
          iVar8 = FUN_01344a5c(lVar13,*(undefined8 *)puVar3);
          lVar15 = lVar15 + 0xc;
        } while ((long)uVar14 < (long)iVar8);
      }
      auVar17 = FUN_01127a60(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                             *(undefined8 *)puVar4);
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar17;
    }
    uVar9 = *(undefined8 *)(param_2 + 0x188);
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined8 *)(param_1 + 0x130) = uVar9;
    return;
  }
  local_7c = 0;
  lVar15 = *(long *)OVRPlugin_Vector2f___TypeInfo;
  lVar13 = *(long *)(param_2 + 0x1c0);
  iVar8 = local_7c;
  while (local_7c = iVar8, auVar17 = local_90, lVar13 != 0) {
    iVar6 = FUN_02664f30(lVar13,0);
    if (iVar6 <= iVar8) {
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(lVar15,0);
      goto LAB_01427098;
    }
    auVar17 = local_90;
    if (*(long *)(param_2 + 0x1c0) == 0) break;
    auVar18 = FUN_02664f6c(*(long *)(param_2 + 0x1c0),local_7c,0);
    plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,5);
    auVar17 = local_90;
    if (plVar11 == (long *)0x0) break;
    if (lVar15 != 0) {
      lVar13 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar13 == 0) goto LAB_014271f8;
    }
    uVar12 = *(uint *)(plVar11 + 3);
    if (uVar12 == 0) {
LAB_014271f4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    plVar11[4] = lVar15;
    lVar13 = *(long *)puVar5;
    if (lVar13 != 0) {
      lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar13 == 0) goto LAB_014271f8;
      uVar12 = *(uint *)(plVar11 + 3);
    }
    if (uVar12 < 2) goto LAB_014271f4;
    plVar11[5] = *(long *)puVar5;
    lVar13 = FUN_0176eb1c(&local_7c,0);
    if (lVar13 != 0) {
      lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar15 == 0) goto LAB_014271f8;
    }
    uVar12 = *(uint *)(plVar11 + 3);
    if (uVar12 < 3) goto LAB_014271f4;
    plVar11[6] = lVar13;
    lVar13 = *(long *)puVar3;
    if (lVar13 != 0) {
      lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar13 == 0) goto LAB_014271f8;
      uVar12 = *(uint *)(plVar11 + 3);
    }
    if (uVar12 < 4) goto LAB_014271f4;
    plVar11[7] = *(long *)puVar3;
    local_90 = auVar18;
    lVar13 = FUN_026ae974(local_90,0);
    if (lVar13 != 0) {
      lVar15 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar15 == 0) {
LAB_014271f8:
        uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar9,0);
      }
    }
    if (*(uint *)(plVar11 + 3) < 5) goto LAB_014271f4;
    plVar11[8] = lVar13;
    lVar15 = FUN_01600844(plVar11,0);
    iVar8 = local_7c + 1;
    lVar13 = *(long *)(param_2 + 0x1c0);
  }
LAB_01427078:
  local_90 = auVar17;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


