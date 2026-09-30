/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.OpenVRInterop$$GetGenericInterface
ENTRY_POINT: 04315568
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


void Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__GetGenericInterface
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x27;
  undefined8 *unaff_x29;
  
  FUN_0533c120(param_2,param_3,*param_1);
  *(undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 8) = unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x25;
  FUN_075273c0();
  uVar2 = *unaff_x29;
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x24;
  *(long **)(unaff_x19 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  thunk_FUN_0406deb8(uVar2);
  FUN_05329970();
  puVar1 = PTR_DAT_08f73750;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f68738) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_04315620;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0406ae20();
LAB_04315620:
    (*(code *)*puVar3)();
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
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_043156a8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f729a8,0);
LAB_043156a8:
                    /* WARNING: Could not recover jumptable at 0x043156cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


