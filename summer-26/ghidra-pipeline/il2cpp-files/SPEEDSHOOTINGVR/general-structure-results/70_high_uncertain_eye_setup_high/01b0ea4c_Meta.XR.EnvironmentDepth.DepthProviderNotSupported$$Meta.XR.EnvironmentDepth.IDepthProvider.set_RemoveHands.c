/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.set_RemoveHands
ENTRY_POINT: 01b0ea4c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_set_RemoveHands
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint unaff_w19;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d5a4a0(3);
  }
  if (((int)unaff_w19 < 0) || (*(int *)(param_2 + 0x18) < (int)unaff_w19)) {
    FUN_01d69368(0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_01442e4c(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(param_2 + 0x18) - unaff_w19) < iVar3) {
      FUN_01d68ae8(5,0);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar1) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_01b0eb34;
        uVar2 = *(uint *)(lVar4 + 0x18);
        uVar5 = 0;
        puVar6 = (undefined4 *)(lVar4 + 0x2c);
        do {
          if (uVar2 <= uVar5) {
LAB_01b0eb1c:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if (-1 < (int)puVar6[-3]) {
            if (*(uint *)(param_2 + 0x18) <= unaff_w19) goto LAB_01b0eb1c;
            lVar4 = (long)(int)unaff_w19;
            unaff_w19 = unaff_w19 + 1;
            *(undefined4 *)(param_2 + lVar4 * 4 + 0x20) = *puVar6;
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (uVar1 != uVar5);
      }
      return;
    }
  }
LAB_01b0eb34:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


