/*
FUNCTION_NAME: FUN_068ab618
ENTRY_POINT: 068ab618
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_068ab618(float param_1,long param_2,undefined8 *param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined4 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  int local_44;
  
  if ((DAT_075590ef & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_17_0_TypeInfo);
    DAT_075590ef = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_17_0_TypeInfo;
  local_44 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_54 = 0;
  uStack_60 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  if (*(char *)(param_2 + 0xc0) == '\0') {
    iVar3 = FUN_068ab868(param_2,*(undefined8 *)(param_2 + 0x2e8),*(undefined8 *)(param_2 + 0x2f8),
                         *(undefined8 *)(param_2 + 0x300),&local_44);
    iVar2 = local_44;
    if (iVar3 < 1) {
      if ((param_4 & 1) == 0) {
        *(undefined1 *)(param_2 + 0x330) = 0;
        return;
      }
      bVar5 = true;
    }
    else {
      if (*(long *)(param_2 + 0x2f0) == 0) goto UnityEngine_Mesh__GetTrianglesNonAllocImpl_Injected;
      FUN_0430d770(&local_cc,*(long *)(param_2 + 0x2f0),local_44,*(undefined8 *)puVar1);
      uStack_68 = uStack_c4;
      local_70 = local_cc;
      uStack_60 = local_bc;
      uStack_4c = uStack_a8;
      uVar11 = uStack_b0;
      uVar6 = FUN_06a6354c(&local_70,0);
      *(undefined4 *)(param_2 + 0x334) = uVar6;
      uVar9 = (undefined4)local_bc;
      *(undefined4 *)(param_2 + 0x338) = uVar9;
      *(undefined4 *)(param_2 + 0x33c) = uVar11;
      uVar6 = FUN_06a63564(&local_70,0);
      *(undefined4 *)(param_2 + 0x344) = uVar6;
      *(undefined4 *)(param_2 + 0x348) = uVar9;
      *(undefined4 *)(param_2 + 0x34c) = uVar11;
      uVar4 = FUN_06a6358c(&local_70,0);
      *(undefined8 *)(param_2 + 0x360) = uVar4;
      if (iVar2 < 1) {
        return;
      }
      if ((param_4 & 1) == 0) {
        return;
      }
      fVar7 = (float)*(undefined8 *)(param_2 + 0x334) - (float)*param_3;
      fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x334) >> 0x20) -
              (float)((ulong)*param_3 >> 0x20);
      fVar10 = *(float *)(param_2 + 0x33c) - *(float *)(param_3 + 1);
      bVar5 = param_1 < fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10;
    }
    *(bool *)param_5 = bVar5;
  }
  else {
    if (*(long *)(param_2 + 0x2f0) == 0) {
UnityEngine_Mesh__GetTrianglesNonAllocImpl_Injected:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_0430d770(&local_cc,*(long *)(param_2 + 0x2f0),0,
                 *(undefined8 *)OVRPlugin_OVRP_1_17_0_TypeInfo);
    uStack_98 = uStack_c4;
    local_a0 = local_cc;
    uStack_90 = local_bc;
    uStack_7c = uStack_a8;
    uVar11 = uStack_b0;
    uVar6 = FUN_06a6354c(&local_a0,0);
    *(undefined4 *)(param_2 + 0x334) = uVar6;
    uVar9 = (undefined4)local_bc;
    *(undefined4 *)(param_2 + 0x338) = uVar9;
    *(undefined4 *)(param_2 + 0x33c) = uVar11;
    uVar6 = FUN_06a63564(&local_a0,0);
    *(undefined4 *)(param_2 + 0x344) = uVar6;
    *(undefined4 *)(param_2 + 0x348) = uVar9;
    *(undefined4 *)(param_2 + 0x34c) = uVar11;
    uVar4 = FUN_06a6358c(&local_a0,0);
    *(undefined8 *)(param_2 + 0x360) = uVar4;
  }
  return;
}


