/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 04a2da18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  long in_x9;
  int *in_x10;
  long unaff_x20;
  
  do {
    if ((bool)in_ZR) {
      puVar3 = (undefined8 *)FUN_02b7654c();
LAB_04a2da44:
      (*(code *)*puVar3)();
      FUN_04a2fef8();
      FUN_04a2ea10();
      iVar1 = *(int *)(unaff_x20 + 0x20);
      if (0 < iVar1) {
        if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x18) / iVar1;
        }
        if (3 < iVar2) {
          FUN_04a2fcf4();
          return;
        }
      }
      return;
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_04a2da44;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


