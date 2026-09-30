/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 01b13a58
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor
               (long param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d5a4a0(3);
  }
  if (((int)param_3 < 0) || (*(int *)(param_2 + 0x18) < (int)param_3)) {
    FUN_01d69368(0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar3 = FUN_01468e78(*(long *)(param_1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28));
    if ((int)(*(int *)(param_2 + 0x18) - param_3) < iVar3) {
      FUN_01d68ae8(5,0);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0x20);
      if (0 < (int)uVar2) {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_01b13b60;
        uVar5 = 0;
        puVar6 = (undefined8 *)(lVar4 + 0x30);
        do {
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_01b13b48:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          if (-1 < *(int *)(puVar6 + -2)) {
            if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_01b13b48;
            lVar1 = (long)(int)param_3;
            param_3 = param_3 + 1;
            *(undefined8 *)(param_2 + lVar1 * 8 + 0x20) = *puVar6;
            thunk_FUN_0106e12c();
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 3;
        } while (uVar2 != uVar5);
      }
      return;
    }
  }
LAB_01b13b60:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


