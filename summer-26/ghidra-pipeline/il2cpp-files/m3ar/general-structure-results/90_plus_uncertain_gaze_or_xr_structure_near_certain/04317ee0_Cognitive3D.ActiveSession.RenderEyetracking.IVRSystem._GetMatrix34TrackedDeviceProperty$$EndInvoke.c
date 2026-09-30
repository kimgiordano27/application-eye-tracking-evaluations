/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetMatrix34TrackedDeviceProperty$$EndInvoke
ENTRY_POINT: 04317ee0
PROGRAM: m3ar-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetMatrix34TrackedDeviceProperty__EndInvoke
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  
                    /* catch() { ... } // from try @ 04317e64 with catch @ 04317ee0 */
  if (unaff_x20 != (long *)0x0) {
                    /* catch() { ... } // from try @ 04317ec4 with catch @ 04317ee4 */
                    /* catch() { ... } // from try @ 04317e50 with catch @ 04317ee8 */
    lVar7 = *unaff_x20;
                    /* catch() { ... } // from try @ 04317ec0 with catch @ 04317eec */
                    /* catch() { ... } // from try @ 04317ebc with catch @ 04317ef0 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch() { ... } // from try @ 04317e38 with catch @ 04317ef4 */
                    /* catch() { ... } // from try @ 04317eb8 with catch @ 04317ef8 */
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 04317e00 with catch @ 04317efc */
                    /* catch() { ... } // from try @ 04317c98 with catch @ 04317f00 */
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 04317ccc with catch @ 04317f04 */
                    /* catch() { ... } // from try @ 04317eb4 with catch @ 04317f08 */
                    /* catch() { ... } // from try @ 04317ac4 with catch @ 04317f0c */
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f73878) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04317f38;
        }
                    /* catch() { ... } // from try @ 04317cec with catch @ 04317f10 */
        uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 04317c6c with catch @ 04317f14 */
        piVar9 = piVar9 + 4;
                    /* catch() { ... } // from try @ 04317c9c with catch @ 04317f18 */
      } while (uVar8 != 0);
    }
                    /* catch() { ... } // from try @ 04317eb0 with catch @ 04317f1c */
                    /* catch() { ... } // from try @ 04317ac8 with catch @ 04317f20 */
    puVar3 = (undefined8 *)FUN_0406ae20();
LAB_04317f38:
    (*(code *)*puVar3)();
    puVar2 = PTR_DAT_08f73880;
    puVar1 = PTR_DAT_08f73868;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar4 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73868);
      lVar7 = thunk_FUN_0406ddbc(uVar4,*(undefined8 *)puVar2);
      if (lVar7 == 0) {
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_0859e95c(*(long *)(unaff_x19 + 0x38),0);
          return;
        }
        return;
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        puVar3 = *(undefined8 **)(unaff_x19 + 0x48);
        plVar5 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar1);
        if (plVar5 != (long *)0x0) {
          lVar7 = *plVar5;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f73278) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_04317fe8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f73278,1);
LAB_04317fe8:
          (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (puVar3 != (undefined8 *)0x0) {
            FUN_0892ab8c(*puVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


