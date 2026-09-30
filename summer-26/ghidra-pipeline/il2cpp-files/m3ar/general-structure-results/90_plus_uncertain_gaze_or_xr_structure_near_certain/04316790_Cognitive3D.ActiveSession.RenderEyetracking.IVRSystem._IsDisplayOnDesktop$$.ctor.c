/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._IsDisplayOnDesktop$$.ctor
ENTRY_POINT: 04316790
PROGRAM: m3ar-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__IsDisplayOnDesktop___ctor(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w20;
  long *plVar6;
  long unaff_x21;
  long lVar7;
  
  *(undefined1 *)(unaff_x21 + 0xdfd) = 1;
  if (unaff_w20 == 0x10) {
    plVar6 = *(long **)(unaff_x19 + 0x68);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar3 = *plVar6;
    lVar7 = *(long *)PTR_DAT_08f73810;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_04316804;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar3 = FUN_0406ae20(plVar6);
LAB_04316804:
    lVar3 = Crosstales_Common_Util_BaseHelper__FormatSecondsToHRF(*(undefined8 *)(lVar3 + 8),lVar7);
    uVar2 = (**(code **)(lVar3 + 8))(plVar6,lVar3);
    iVar1 = FUN_042f2ebc(uVar2,0);
    if (iVar1 != 0) {
      *(int *)(unaff_x19 + 0x48) = iVar1;
      FUN_04316948();
      return;
    }
  }
  return;
}


