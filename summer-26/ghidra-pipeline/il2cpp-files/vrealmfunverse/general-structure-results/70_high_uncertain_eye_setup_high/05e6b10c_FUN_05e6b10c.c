/*
FUNCTION_NAME: FUN_05e6b10c
ENTRY_POINT: 05e6b10c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
FUN_05e6b10c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
            long param_5,long param_6)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 local_150;
  undefined8 uStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  float local_104;
  float fStack_100;
  undefined8 local_fc;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d0;
  float local_c4;
  float fStack_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  float local_84;
  float fStack_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((DAT_066dc683 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06320a88);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_14__);
    DAT_066dc683 = 1;
  }
  local_68 = 0;
  local_70 = 0;
  if ((param_6 == 0) || (uVar3 = FUN_05e2d6e0(param_6,0), (uVar3 & 1) == 0)) {
    return 0;
  }
  if (*(long *)(param_6 + 0x88) == 0) goto LAB_05e6b428;
  uVar3 = FUN_05e66d68(*(undefined8 *)(*(long *)(param_6 + 0x88) + 0x110));
  FUN_05e2da3c(&local_b0,param_6,0,0);
  puVar1 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
  ;
  uStack_148 = uStack_a0;
  local_150 = local_a8;
  local_70 = local_7c;
  local_68 = local_74;
  if (*(int *)(*(long *)
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass37_0_<AddOcclusionContextDataRow>b__0__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_05e69c80(param_6);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_05e6ba08(param_6);
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__810_14__;
    if ((uVar4 & 1) != 0) goto LAB_05e6b224;
    if ((uVar3 & 1) == 0) {
      lVar9 = *(long *)(param_6 + 0x88);
      if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__810_14__ + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x110) = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x128);
        return 1;
      }
      goto LAB_05e6b428;
    }
  }
  else {
LAB_05e6b224:
    if ((uVar3 & 1) == 0) {
      if ((param_5 == 0) || (*(long *)(param_5 + 0x148) == 0)) goto LAB_05e6b428;
      lVar9 = *(long *)(param_6 + 0x88);
      local_f0 = local_b0;
      fStack_ec = fStack_ac;
      uStack_e0 = uStack_a0;
      local_e8 = local_a8;
      local_d0 = local_90;
      local_c4 = local_84;
      fStack_c0 = fStack_80;
      local_bc = local_70;
      local_b4 = local_68;
      uVar5 = FUN_05e7d3b4(*(long *)(param_5 + 0x148),&local_f0,0);
      if (lVar9 == 0) goto LAB_05e6b428;
      *(undefined8 *)(lVar9 + 0x110) = uVar5;
    }
  }
  if (*(long *)(param_6 + 0x88) != 0) {
    uVar3 = FUN_05e66d68(*(undefined8 *)(*(long *)(param_6 + 0x88) + 0x110));
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    plVar6 = (long *)FUN_05ded3a4(param_6,0);
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06320a88) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_05e6b30c;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06320a88,2);
LAB_05e6b30c:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      auVar11._8_8_ = local_8c;
      auVar11._0_8_ = local_98;
      if (iVar2 == 1) {
        fStack_138 = (float)local_8c;
        fStack_134 = (float)((ulong)local_8c >> 0x20);
        local_140 = (float)local_98;
        fStack_13c = (float)((ulong)local_98 >> 0x20);
        fVar10 = (float)FUN_05ded3b8(param_6,0);
        local_b0 = local_b0 * fVar10;
        local_84 = local_84 * param_3;
        fVar12 = (float)local_8c;
        fStack_ac = fStack_ac * fVar12;
        fStack_80 = fStack_80 * param_4;
        local_150._0_4_ = (float)local_a8;
        local_150._4_4_ = (float)((ulong)local_a8 >> 0x20);
        uStack_148._0_4_ = (float)uStack_a0;
        uStack_148._4_4_ = (float)((ulong)uStack_a0 >> 0x20);
        uStack_148 = CONCAT44(uStack_148._4_4_ * fVar12,(float)uStack_148 * fVar10);
        local_150 = CONCAT44(local_150._4_4_ * param_4,(float)local_150 * param_3);
        auVar11._4_4_ = fStack_13c * param_4;
        auVar11._0_4_ = local_140 * param_3;
        auVar11._8_4_ = fStack_138 * fVar10;
        auVar11._12_4_ = fStack_134 * fVar12;
      }
      if (((param_5 != 0) && (*(long *)(param_6 + 0x88) != 0)) && (*(long *)(param_5 + 0x148) != 0))
      {
        local_118 = auVar11._0_8_;
        auVar11 = NEON_ext(auVar11,auVar11,8,1);
        uStack_120 = uStack_148;
        local_128 = local_150;
        local_110 = local_90;
        local_10c = auVar11._0_8_;
        local_fc = local_70;
        local_f4 = local_68;
        local_130 = local_b0;
        fStack_12c = fStack_ac;
        local_104 = local_84;
        fStack_100 = fStack_80;
        FUN_05e7d054(*(long *)(param_5 + 0x148),*(undefined8 *)(*(long *)(param_6 + 0x88) + 0x110),
                     &local_130,0);
        return 1;
      }
    }
  }
LAB_05e6b428:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


