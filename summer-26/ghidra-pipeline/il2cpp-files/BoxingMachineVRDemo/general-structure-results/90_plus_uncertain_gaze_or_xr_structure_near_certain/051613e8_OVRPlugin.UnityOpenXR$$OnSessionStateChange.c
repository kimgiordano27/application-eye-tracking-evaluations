/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 051613e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_UnityOpenXR__OnSessionStateChange(long param_1)

{
  byte bVar1;
  bool in_ZR;
  long lVar2;
  undefined8 *puVar3;
  uint in_w9;
  undefined8 unaff_x19;
  
  puVar3 = (undefined8 *)PTR_DAT_06782470;
  if (!in_ZR) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782440 + 0x130);
    if ((in_w9 < bVar1) ||
       (puVar3 = (undefined8 *)PTR_DAT_067824b8,
       *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782440)) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06782430 + 0x130);
      if ((in_w9 < bVar1) ||
         (puVar3 = (undefined8 *)PTR_DAT_06782498,
         *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782430))
      {
        bVar1 = *(byte *)(*(long *)PTR_DAT_06782488 + 0x130);
        if ((in_w9 < bVar1) ||
           (puVar3 = (undefined8 *)PTR_DAT_06782490,
           *(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06782488)
           ) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_06782458 + 0x130);
          puVar3 = (undefined8 *)PTR_DAT_06782438;
          if ((bVar1 <= in_w9) &&
             (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)PTR_DAT_06782458)) {
            lVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782460);
            FUN_0515fe98();
            return lVar2;
          }
        }
      }
    }
  }
  lVar2 = thunk_FUN_02d9d534(*puVar3);
  FUN_0504920c(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = unaff_x19;
  thunk_FUN_02dd37b4();
  return lVar2;
}


