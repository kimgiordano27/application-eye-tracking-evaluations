/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 031589e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren(void)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  if (in_NG == in_OV) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(unaff_x19 + 0x10);
      if (lVar2 == 0) goto LAB_03158a60;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
LAB_03158a64:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      if (unaff_x20 == 0) {
LAB_03158a60:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20)
                         ,*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x10);
        if (lVar2 != 0) {
          if ((uint)uVar3 < *(uint *)(lVar2 + 0x18)) {
            return *(undefined8 *)(lVar2 + uVar3 * 8 + 0x20);
          }
          goto LAB_03158a64;
        }
        goto LAB_03158a60;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)(unaff_x19 + 0x18));
  }
  return 0;
}


