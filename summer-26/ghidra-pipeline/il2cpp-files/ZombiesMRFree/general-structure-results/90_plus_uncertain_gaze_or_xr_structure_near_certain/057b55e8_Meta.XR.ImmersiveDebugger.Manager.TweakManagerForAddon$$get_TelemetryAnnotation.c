/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 057b55e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManagerForAddon__get_TelemetryAnnotation
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x18) <= (int)(uVar1 + 4)) {
    FUN_057b34c8(param_1,*(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x58));
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x14) = uVar1 + 1;
  if (lVar3 != 0) {
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
      *puVar2 = param_2;
      thunk_FUN_03048534(puVar2,param_2);
      uVar1 = *(uint *)(param_1 + 0x14);
      lVar3 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x14) = uVar1 + 1;
      if (lVar3 == 0) goto LAB_057b5730;
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_3;
        thunk_FUN_03048534(puVar2,param_3);
        uVar1 = *(uint *)(param_1 + 0x14);
        lVar3 = *(long *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x14) = uVar1 + 1;
        if (lVar3 == 0) goto LAB_057b5730;
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *puVar2 = param_4;
          thunk_FUN_03048534(puVar2,param_4);
          uVar1 = *(uint *)(param_1 + 0x14);
          lVar3 = *(long *)(param_1 + 0x20);
          *(uint *)(param_1 + 0x14) = uVar1 + 1;
          if (lVar3 == 0) goto LAB_057b5730;
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
            *puVar2 = param_5;
            thunk_FUN_03048534(puVar2,param_5);
            uVar1 = *(uint *)(param_1 + 0x14);
            lVar3 = *(long *)(param_1 + 0x20);
            *(uint *)(param_1 + 0x14) = uVar1 + 1;
            if (lVar3 == 0) goto LAB_057b5730;
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
              *puVar2 = param_6;
              thunk_FUN_03048534(puVar2,param_6);
              *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
LAB_057b5730:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


