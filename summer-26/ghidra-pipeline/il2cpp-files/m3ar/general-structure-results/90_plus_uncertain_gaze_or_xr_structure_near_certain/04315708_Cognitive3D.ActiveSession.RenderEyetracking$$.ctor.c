/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking$$.ctor
ENTRY_POINT: 04315708
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


void Cognitive3D_ActiveSession_RenderEyetracking___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 *unaff_x22;
  
  FUN_0403162c();
  FUN_0403162c(PTR_DAT_08f73750);
                    /* try { // try from 04315718 to 0441571f has its CatchHandler @ 04315930 */
                    /* try { // try from 04315720 to 04415923 has its CatchHandler @ 04315514 */
  FUN_0403162c(PTR_DAT_08f729a8);
  FUN_0403162c(PTR_DAT_08f68738);
  FUN_0403162c(PTR_DAT_08f737a8);
  FUN_0403162c(PTR_DAT_08f737b0);
  *(undefined1 *)(unaff_x20 + 0xdeb) = 1;
  plVar7 = *(long **)(unaff_x19 + 0x20);
  uVar2 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_05329970();
  puVar1 = PTR_DAT_08f73750;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f68738) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
          goto LAB_043157dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f68738,8);
LAB_043157dc:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    plVar7 = *(long **)(unaff_x19 + 0x30);
    uVar2 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_05329970();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f729a8) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_04315868;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f729a8,1);
LAB_04315868:
                    /* WARNING: Could not recover jumptable at 0x04315880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


