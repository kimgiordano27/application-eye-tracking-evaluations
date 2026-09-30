/*
FUNCTION_NAME: FUN_027816d8
ENTRY_POINT: 027816d8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_027816d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  if ((DAT_03788658 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(System_Data_SqlTypes_SqlTruncateException_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    thunk_FUN_00d48444(UnityEngine_VFX_VFXEventAttribute_TypeInfo);
    DAT_03788658 = 1;
  }
  if ((param_2 == 0) ||
     (uVar6 = FUN_027f4bdc(param_2,0), puVar1 = System_Data_SqlTypes_SqlTruncateException_TypeInfo,
     (uVar6 & 1) == 0)) {
    return 0;
  }
  uVar4 = FUN_02841c64(*(undefined8 *)(param_2 + 0x168),0);
  FUN_027f52e0(&local_c0,param_2,0);
  local_148 = local_bc;
  local_144 = local_c0;
  local_150 = local_b4;
  local_14c = local_b8;
  local_158 = local_ac;
  local_154 = local_b0;
  local_15c = local_a8;
  local_160 = fStack_9c;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = UnityEngine_VFX_VFXEventAttribute_TypeInfo;
  uVar6 = FUN_027804f0(param_2);
  if ((local_a0 == 0.0) && ((uVar6 & 1) == 0)) {
    if (DAT_03774d77 == '\0') {
      thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
      DAT_03774d77 = '\x01';
    }
    if (((fStack_84 == 0.0) &&
        (fVar12 = fStack_8c -
                  **(float **)
                    (*(long *)Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                    + 0xb8),
        fVar13 = local_88 -
                 (*(float **)
                   (*(long *)Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                   + 0xb8))[1], fVar12 * fVar12 + fVar13 * fVar13 < DAT_028aa020)) &&
       (((uVar4 ^ 1) & 1) != 0)) {
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar1;
      }
      *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x128);
      return 1;
    }
  }
  if ((uVar4 & 1) == 0) {
    if (param_1 == 0) goto UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_fc = local_bc;
    local_d8 = local_98;
    fStack_d4 = fStack_94;
    local_d0 = local_90;
    fStack_cc = fStack_8c;
    local_c8 = local_88;
    fStack_c4 = fStack_84;
    local_100 = local_c0;
    local_f4 = local_b4;
    local_f8 = local_b8;
    local_ec = local_ac;
    local_f0 = local_b0;
    local_e8 = local_a8;
    fStack_e4 = fStack_a4;
    local_e0 = local_a0;
    fStack_dc = fStack_9c;
    uVar8 = FUN_02839bb0(param_1 + 0x148,&local_100,0);
    *(undefined8 *)(param_2 + 0x168) = uVar8;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x168);
  }
  uVar6 = FUN_02841c64(uVar8,0);
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  plVar9 = (long *)FUN_0274aad0(param_2,0);
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
  ;
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
           ) {
          puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_0278198c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_00d59724(plVar9,*(long *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                           ,2);
LAB_0278198c:
    iVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
    ;
    fVar12 = local_98;
    fVar13 = fStack_94;
    fVar14 = local_90;
    fVar15 = fStack_a4;
    if (iVar5 == 1) {
      lVar7 = *(long *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
      ;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(lVar7 + 0xb8);
      local_160 = *(float *)(lVar7 + 0x18);
      local_158 = *(float *)(lVar7 + 0x1c);
      local_15c = *(float *)(lVar7 + 0x20);
      local_150 = *(float *)(lVar7 + 0x24);
      local_144 = local_c0 * local_160;
      fVar15 = fStack_a4 * local_150;
      fVar12 = local_98 * local_158;
      fVar13 = fStack_94 * local_15c;
      local_148 = local_bc * local_158;
      fVar14 = local_90 * local_150;
      local_14c = local_b8 * local_15c;
      local_150 = local_b4 * local_150;
      local_154 = local_b0 * local_160;
      local_158 = local_ac * local_158;
      local_15c = local_a8 * local_15c;
      local_160 = fStack_9c * local_160;
    }
    if (param_1 != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x168);
      plVar9 = (long *)FUN_0274aad0(param_2,0);
      if (plVar9 != (long *)0x0) {
        lVar7 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12a);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_02781aa8;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,2);
LAB_02781aa8:
        iVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar1);
        }
        local_13c = local_148;
        local_140 = local_144;
        fStack_10c = fStack_8c;
        local_108 = local_88;
        fStack_104 = fStack_84;
        local_134 = local_150;
        local_138 = local_14c;
        local_12c = local_158;
        local_130 = local_154;
        local_128 = local_15c;
        local_120 = local_a0;
        fStack_11c = local_160;
        fStack_124 = fVar15;
        local_118 = fVar12;
        fStack_114 = fVar13;
        local_110 = fVar14;
        FUN_028394ec(param_1 + 0x148,uVar8,&local_140,iVar5 == 1,0);
        return 1;
      }
    }
  }
UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


