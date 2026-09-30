/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._SetDisplayVisibility$$.ctor
ENTRY_POINT: 04316870
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__SetDisplayVisibility___ctor
               (ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(unaff_x22 + 0x8d8);
  puVar6 = *(undefined8 **)(unaff_x20 + 0x808);
  if ((param_1 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f688d8);
    FUN_0403162c(PTR_DAT_08f73808);
    FUN_0403162c(PTR_DAT_08f68738);
    *(undefined1 *)(unaff_x19 + 0xdfb) = 1;
  }
  plVar5 = *(long **)(param_2 + 0x68);
  uVar1 = thunk_FUN_0406deb8(*puVar7);
  FUN_05329970(uVar1,param_2,*puVar6,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f68738) {
        puVar6 = (undefined8 *)(lVar2 + (long)(*piVar4 + 8) * 0x10 + 0x138);
        goto LAB_04316928;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f68738,8);
LAB_04316928:
                    /* WARNING: Could not recover jumptable at 0x04316940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(plVar5,uVar1,puVar6[1]);
  return;
}


