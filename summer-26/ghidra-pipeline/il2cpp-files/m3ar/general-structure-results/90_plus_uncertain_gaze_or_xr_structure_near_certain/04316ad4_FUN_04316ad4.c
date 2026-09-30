/*
FUNCTION_NAME: FUN_04316ad4
ENTRY_POINT: 04316ad4
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void FUN_04316ad4(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_0953adfe & 1) == 0) {
                    /* try { // try from 04316aec to 04416aef has its CatchHandler @ 04316fa4 */
                    /* try { // try from 04316af4 to 04416aff has its CatchHandler @ 04316f5c */
    FUN_0403162c(PTR_DAT_08f68738);
    DAT_0953adfe = 1;
  }
  puVar1 = PTR_DAT_08f68738;
                    /* try { // try from 04316b00 to 04416b0b has its CatchHandler @ 04316f58 */
  plVar6 = *(long **)(param_1 + 0x68);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f68738) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_04316b60;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)PTR_DAT_08f68738,2);
LAB_04316b60:
    uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar4 & 1) != 0) {
      return;
    }
    plVar6 = *(long **)(param_1 + 0x68);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto 
            Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose___ctor
            ;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar1,4);

      Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose___ctor
      :
                    /* WARNING: Could not recover jumptable at 0x04316be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,2,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


