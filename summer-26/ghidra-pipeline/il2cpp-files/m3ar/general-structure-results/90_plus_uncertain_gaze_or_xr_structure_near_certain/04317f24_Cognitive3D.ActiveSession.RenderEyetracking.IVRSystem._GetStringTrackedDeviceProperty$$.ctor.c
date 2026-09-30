/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetStringTrackedDeviceProperty$$.ctor
ENTRY_POINT: 04317f24
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetStringTrackedDeviceProperty___ctor
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 04317aa0 with catch @ 04317f24 */
  puVar3 = (undefined8 *)FUN_0406ae20();
                    /* catch() { ... } // from try @ 04317eac with catch @ 04317f28 */
  (*(code *)*puVar3)();
  puVar2 = PTR_DAT_08f73880;
  puVar1 = PTR_DAT_08f73868;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* try { // try from 04317f4c to 04417f63 has its CatchHandler @ 04317fd0 */
    uVar4 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73868);
                    /* try { // try from 04317f64 to 04417fbf has its CatchHandler @ 04317a24 */
    lVar5 = thunk_FUN_0406ddbc(uVar4,*(undefined8 *)puVar2);
    if (lVar5 == 0) {
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_0859e95c(*(long *)(unaff_x19 + 0x38),0);
        return;
      }
      return;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      puVar3 = *(undefined8 **)(unaff_x19 + 0x48);
      plVar6 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar1);
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f73278) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_04317fe8;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f73278,1);
LAB_04317fe8:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_0892ab8c(*puVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


