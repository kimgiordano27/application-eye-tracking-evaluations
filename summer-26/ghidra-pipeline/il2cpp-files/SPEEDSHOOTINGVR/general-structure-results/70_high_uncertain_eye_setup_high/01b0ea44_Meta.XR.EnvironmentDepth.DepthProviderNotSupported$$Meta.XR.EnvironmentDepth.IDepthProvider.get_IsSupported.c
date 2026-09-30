/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$Meta.XR.EnvironmentDepth.IDepthProvider.get_IsSupported
ENTRY_POINT: 01b0ea44
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__Meta_XR_EnvironmentDepth_IDepthProvider_get_IsSupported
               (long param_1,long param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d5a4a0(3);
  }
  if (((int)param_3 < 0) || (*(int *)(param_2 + 0x18) < (int)param_3)) {
    FUN_01d69368(0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_01442e4c(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(param_2 + 0x18) - param_3) < iVar3) {
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
            if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_01b0eb1c;
            lVar4 = (long)(int)param_3;
            param_3 = param_3 + 1;
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


