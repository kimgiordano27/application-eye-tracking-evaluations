/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$.cctor
ENTRY_POINT: 051894a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 Meta_XR_ImmersiveDebugger_Telemetry___cctor(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool in_ZR;
  undefined4 uVar4;
  long lVar5;
  int in_w10;
  undefined8 uVar6;
  
  if (in_ZR) {
    uVar4 = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0xfffffffe;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar2 = *(uint *)(lVar5 + 0x18);
    iVar1 = *(int *)(param_1 + 0x18) + in_w10;
    uVar3 = 0;
    if ((int)uVar2 <= iVar1) {
      uVar3 = uVar2;
    }
    uVar3 = iVar1 - uVar3;
    if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    LeanTween__value((undefined8 *)(param_2 + 0x10),0);
    uVar4 = 1;
  }
  return uVar4;
}


