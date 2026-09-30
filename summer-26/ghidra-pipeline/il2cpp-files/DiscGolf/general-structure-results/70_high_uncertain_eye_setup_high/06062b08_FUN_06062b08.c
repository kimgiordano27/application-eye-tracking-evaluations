/*
FUNCTION_NAME: FUN_06062b08
ENTRY_POINT: 06062b08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06062b08(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  short sVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar2 = PTR_DAT_069fb990;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_06dc4d14 & 1) == 0) {
    FUN_02d965b8(Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc4d14 = 1;
  }
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uVar5 = FUN_060629a4();
  lVar9 = *(long *)puVar2;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar9);
  }
  uVar6 = FUN_06350670(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    lVar9 = FUN_060629a4();
    if (lVar9 != 0) {
      lVar9 = FUN_035ab08c(lVar9,*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_get_Task__);
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar10);
      }
      uVar6 = FUN_06350670(lVar9,0,0);
      if ((uVar6 & 1) != 0) {
        thunk_FUN_02dfd288(PTR_DAT_06a0efe0);
        uVar5 = thunk_FUN_02dd3144();
        uVar7 = thunk_FUN_02dfd288(
                                  Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironmentId>__
                                  );
        uVar8 = 0x1d;
        goto LAB_06062d90;
      }
      if ((param_2 != 0) && (lVar9 != 0)) {
        uStack_178 = *(undefined8 *)(param_2 + 0x20);
        local_180 = *(undefined8 *)(param_2 + 0x18);
        uStack_168 = *(undefined8 *)(param_2 + 0x30);
        uStack_170 = *(undefined8 *)(param_2 + 0x28);
        uStack_158 = *(undefined8 *)(param_2 + 0x40);
        local_160 = *(undefined8 *)(param_2 + 0x38);
        uStack_148 = *(undefined8 *)(param_2 + 0x50);
        uStack_150 = *(undefined8 *)(param_2 + 0x48);
        uStack_1b8 = *(undefined8 *)(param_2 + 0x60);
        local_1c0 = *(undefined8 *)(param_2 + 0x58);
        uStack_1a8 = *(undefined8 *)(param_2 + 0x70);
        uStack_1b0 = *(undefined8 *)(param_2 + 0x68);
        uStack_198 = *(undefined8 *)(param_2 + 0x80);
        local_1a0 = *(undefined8 *)(param_2 + 0x78);
        uStack_188 = *(undefined8 *)(param_2 + 0x90);
        uStack_190 = *(undefined8 *)(param_2 + 0x88);
        FUN_05eda424(lVar9,&local_180,&local_1c0,0);
        if (*(int *)(param_2 + 0x10) == 2) {
          FUN_06063370();
        }
        else if (*(int *)(param_2 + 0x10) == 1) {
          FUN_06063304();
        }
        else {
          FUN_060633dc();
        }
        if (*(int *)(param_2 + 0x10) != 0) {
          uStack_f8 = *(undefined8 *)(param_2 + 0x60);
          local_100 = *(undefined8 *)(param_2 + 0x58);
          uStack_e8 = *(undefined8 *)(param_2 + 0x70);
          uStack_f0 = *(undefined8 *)(param_2 + 0x68);
          uStack_d8 = *(undefined8 *)(param_2 + 0x80);
          local_e0 = *(undefined8 *)(param_2 + 0x78);
          uStack_c8 = *(undefined8 *)(param_2 + 0x90);
          uStack_d0 = *(undefined8 *)(param_2 + 0x88);
          sVar3 = FUN_05efbc70(&local_100,0);
          if (sVar3 == 0) {
            FUN_05ed9470(&local_200,lVar9,0);
            uStack_138 = uStack_1f8;
            local_140 = local_200;
            uStack_128 = uStack_1e8;
            uStack_130 = uStack_1f0;
            uStack_118 = uStack_1d8;
            local_120 = local_1e0;
            uStack_108 = uStack_1c8;
            uStack_110 = uStack_1d0;
            uVar4 = FUN_05efbc70(&local_140,0);
            uStack_78 = *(undefined8 *)(param_2 + 0x20);
            local_80 = *(undefined8 *)(param_2 + 0x18);
            uStack_68 = *(undefined8 *)(param_2 + 0x30);
            uStack_70 = *(undefined8 *)(param_2 + 0x28);
            uStack_58 = *(undefined8 *)(param_2 + 0x40);
            local_60 = *(undefined8 *)(param_2 + 0x38);
            uStack_48 = *(undefined8 *)(param_2 + 0x50);
            uStack_50 = *(undefined8 *)(param_2 + 0x48);
            FUN_05efbf38(&local_c0,&local_80,uVar4,0);
            *(undefined8 *)(param_2 + 0x20) = uStack_b8;
            *(undefined8 *)(param_2 + 0x18) = local_c0;
            *(undefined8 *)(param_2 + 0x30) = uStack_a8;
            *(undefined8 *)(param_2 + 0x28) = uStack_b0;
            *(undefined8 *)(param_2 + 0x40) = uStack_98;
            *(undefined8 *)(param_2 + 0x38) = local_a0;
            *(undefined8 *)(param_2 + 0x50) = uStack_88;
            *(undefined8 *)(param_2 + 0x48) = uStack_90;
          }
        }
        if (*(long *)(lVar1 + 0x28) == local_38) {
          return;
        }
        goto LAB_06062dbc;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  else {
    thunk_FUN_02dfd288(PTR_DAT_06a0efe0);
    uVar5 = thunk_FUN_02dd3144();
    uVar7 = thunk_FUN_02dfd288(
                              Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IDiagnosticsFactory>__
                              );
    uVar8 = 0x1a;
LAB_06062d90:
    FUN_060598c8(uVar5,uVar7,uVar8);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      uVar7 = thunk_FUN_02dfd288(
                                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterServiceComponent<IEnvironments>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar7);
    }
  }
LAB_06062dbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


