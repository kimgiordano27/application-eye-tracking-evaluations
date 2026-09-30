/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 09f9f9ac
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  
  if ((DAT_0b33b978 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac20c90);
    FUN_04947ee4(PTR_DAT_0ac20cc0);
    FUN_04947ee4(PTR_DAT_0acd3fc0);
    DAT_0b33b978 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac20c90) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_09f9fa54;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_04980e68(param_2,*(long *)PTR_DAT_0ac20c90,0);
LAB_09f9fa54:
    iVar3 = (*(code *)*puVar5)(param_2,puVar5[1]);
    puVar2 = PTR_DAT_0acd3fc0;
    puVar1 = PTR_DAT_0ac20cc0;
    if (*(long *)(param_1 + 0x10) != 0) {
      if ((iVar3 * 4 <= *(int *)(*(long *)(param_1 + 0x10) + 0x18)) && (0 < iVar3)) {
        iVar12 = 0;
        do {
          lVar8 = *param_2;
          lVar7 = *(long *)puVar1;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_09f9fae0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(param_2,lVar7,0);
LAB_09f9fae0:
          pcVar9 = (code *)*puVar5;
          uVar6 = puVar5[1];
          iVar4 = iVar12;
          while( true ) {
            iVar4 = (*pcVar9)(param_2,iVar4,uVar6);
            if (iVar12 <= iVar4) break;
            lVar8 = *param_2;
            lVar7 = *(long *)puVar1;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_09f9fb48;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_04980e68(param_2,lVar7,0);
LAB_09f9fb48:
            pcVar9 = (code *)*puVar5;
            uVar6 = puVar5[1];
          }
          if (iVar4 != iVar12) {
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_09f9f430(param_1,iVar4 << 2,iVar12 << 2);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar3);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


