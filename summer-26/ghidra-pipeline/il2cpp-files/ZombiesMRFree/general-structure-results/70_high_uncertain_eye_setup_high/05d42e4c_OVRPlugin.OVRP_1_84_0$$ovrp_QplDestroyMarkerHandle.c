/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplDestroyMarkerHandle
ENTRY_POINT: 05d42e4c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplDestroyMarkerHandle(void)

{
  uint uVar1;
  uint uVar2;
  uint in_w8;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long *plVar7;
  
  do {
    plVar7 = (long *)(unaff_x19 + (long)(int)in_w8 * 8 + 0x20);
    lVar3 = *plVar7;
    if (lVar3 == 0) {
LAB_05d42f28:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar3 = FUN_02fe9340(*unaff_x22,*(undefined4 *)(lVar3 + 0x18));
    if (*(uint *)(unaff_x19 + 0x18) <= in_w8) break;
    lVar4 = *plVar7;
    if (lVar4 == 0) goto LAB_05d42f28;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) goto LAB_05d42f24;
        if (unaff_x20 == 0) goto LAB_05d42f28;
        lVar6 = (long)(int)uVar5;
        uVar2 = *(uint *)(lVar4 + lVar6 * 4 + 0x20);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_05d42f24;
        if (lVar3 == 0) goto LAB_05d42f28;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_05d42f24;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar3 + lVar6 * 4 + 0x20) =
             *(undefined4 *)(unaff_x20 + (long)(int)uVar2 * 4 + 0x20);
      } while ((int)uVar5 < (int)uVar1);
    }
    if (unaff_x21 == 0) goto LAB_05d42f28;
    if (*(uint *)(unaff_x21 + 0x18) <= in_w8) break;
    *(long *)(unaff_x21 + (long)(int)in_w8 * 8 + 0x20) = lVar3;
    thunk_FUN_03048534();
    in_w8 = in_w8 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)in_w8) {
      return;
    }
  } while (in_w8 < *(uint *)(unaff_x19 + 0x18));
LAB_05d42f24:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


