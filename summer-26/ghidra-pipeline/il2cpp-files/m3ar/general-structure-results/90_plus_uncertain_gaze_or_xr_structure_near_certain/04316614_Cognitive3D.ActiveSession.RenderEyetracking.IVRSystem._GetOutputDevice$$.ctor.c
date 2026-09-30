/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetOutputDevice$$.ctor
ENTRY_POINT: 04316614
PROGRAM: m3ar-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetOutputDevice___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  puVar2 = PTR_DAT_08f73808;
  puVar1 = PTR_DAT_08f688d8;
  if ((DAT_0953adfa & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f688d8);
    FUN_0403162c(PTR_DAT_08f73808);
    FUN_0403162c(PTR_DAT_08f68738);
    DAT_0953adfa = 1;
  }
  plVar9 = *(long **)(param_1 + 0x68);
  uVar4 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
  FUN_05329970(uVar4,param_1,*(undefined8 *)puVar2,0);
  puVar1 = PTR_DAT_08f68738;
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f68738) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto FUN_043166dc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)PTR_DAT_08f68738,7);
FUN_043166dc:
    (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
    plVar9 = *(long **)(param_1 + 0x68);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04316740;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar9,*(long *)puVar1,0);
LAB_04316740:
      uVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      FUN_04316768(param_1,uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


