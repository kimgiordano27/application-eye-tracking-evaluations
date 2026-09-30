/*
FUNCTION_NAME: FUN_05e56570
ENTRY_POINT: 05e56570
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05e56570(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  
  if ((DAT_066dc604 & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__9__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_105__);
    DAT_066dc604 = 1;
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  if ((((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
      (lVar7 = *(long *)(*(long *)(param_2 + 0x10) + 0x90), lVar7 != 0)) &&
     (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    uVar8 = *(ulong *)*(undefined1 (*) [16])(lVar7 + 0x5c);
    uVar11 = *(undefined8 *)(lVar7 + 100);
    auVar1 = *(undefined1 (*) [16])(lVar7 + 0x5c);
    auVar14 = FUN_05c4a894(0);
    if (auVar14 != auVar1) {
      FUN_05f4dbd0(param_2,4,6,&local_d0,&local_e0,0);
      if (DAT_066d7495 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7495 = '\x01';
      }
      puVar2 = PTR_DAT_06312c90;
      if (*(int *)(*(long *)PTR_DAT_06312c90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar6 = (int)uVar8;
      iVar10 = (int)uVar11;
      iVar4 = FUN_04d7c5dc(uVar8 & 0xffffffff,iVar10 + iVar6,0);
      if (DAT_066d7498 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7498 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar9 = (int)(uVar8 >> 0x20);
      iVar12 = (int)((ulong)uVar11 >> 0x20);
      iVar5 = FUN_04d7c48c(iVar9,iVar12 + iVar9,0);
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_105__;
      uVar13 = **(undefined4 **)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__810_105__ + 0xb8);
      local_b4 = FUN_04b73170(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_b0 = 0;
      uStack_ac = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_8c = 0;
      local_c0 = (float)iVar4;
      fStack_bc = (float)iVar5;
      local_b8 = uVar13;
      FUN_03ac7544(&local_d0,0,&local_c0,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__9__
                  );
      if (DAT_066d7495 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7495 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar4 = FUN_04d7c5dc(uVar8 & 0xffffffff,iVar10 + iVar6,0);
      if (DAT_066d7496 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7496 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar5 = FUN_04d7c5dc(iVar9,iVar12 + iVar9,0);
      uVar13 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
      local_b4 = FUN_04b73170(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      local_b0 = (undefined4)DAT_01030548;
      uStack_ac = (undefined4)((ulong)DAT_01030548 >> 0x20);
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_90 = 0;
      uStack_8c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_88 = 0;
      local_c0 = (float)iVar4;
      fStack_bc = (float)iVar5;
      local_b8 = uVar13;
      FUN_03ac7544(&local_d0,1,&local_c0,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__9__
                  );
      if (DAT_066d7497 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7497 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar4 = FUN_04d7c48c(uVar8 & 0xffffffff,iVar10 + iVar6,0);
      if (DAT_066d7496 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7496 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar5 = FUN_04d7c5dc(iVar9,iVar12 + iVar9,0);
      uVar13 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
      local_b4 = FUN_04b73170(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      uVar11 = NEON_fmov(0x3f800000,4);
      local_b0 = (undefined4)uVar11;
      uStack_ac = (undefined4)((ulong)uVar11 >> 0x20);
      uStack_a0 = 0;
      uStack_9c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_90 = 0;
      uStack_8c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      uStack_88 = 0;
      local_c0 = (float)iVar4;
      fStack_bc = (float)iVar5;
      local_b8 = uVar13;
      FUN_03ac7544(&local_d0,2,&local_c0,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__9__
                  );
      if (DAT_066d7497 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7497 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar4 = FUN_04d7c48c(uVar8 & 0xffffffff,iVar10 + iVar6,0);
      if (DAT_066d7498 == '\0') {
        FUN_02b3c81c(PTR_DAT_06312c90);
        DAT_066d7498 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar6 = FUN_04d7c48c(iVar9,iVar12 + iVar9,0);
      uVar13 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
      local_b4 = FUN_04b73170(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      local_b0 = 0x3f800000;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_94 = 0;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_8c = 0;
      local_c0 = (float)iVar4;
      fStack_bc = (float)iVar6;
      local_b8 = uVar13;
      FUN_03ac7544(&local_d0,3,&local_c0,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__9__
                  );
      puVar2 = 
      Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
      ;
      FUN_03ac6fac(&local_e0,0,0,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__8__
                  );
      FUN_03ac6fac(&local_e0,1,1,*(undefined8 *)puVar2);
      FUN_03ac6fac(&local_e0,2,2,*(undefined8 *)puVar2);
      FUN_03ac6fac(&local_e0,3,2,*(undefined8 *)puVar2);
      FUN_03ac6fac(&local_e0,4,3,*(undefined8 *)puVar2);
      FUN_03ac6fac(&local_e0,5,0,*(undefined8 *)puVar2);
      if (*(long *)(param_2 + 0x50) == 0) goto LAB_05e56ad0;
      FUN_05e5d7b0(*(long *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),local_d0,uStack_c8,
                   local_e0,uStack_d8,*(undefined4 *)(lVar7 + 0x58),1,0);
    }
    if (*(long *)(param_2 + 0x50) != 0) {
      FUN_05e5c6bc(*(long *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),0);
      return;
    }
  }
LAB_05e56ad0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


