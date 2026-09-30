/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.OpenVRInterop$$GetInitToken
ENTRY_POINT: 04315504
PROGRAM: m3ar-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_OpenVRInterop__GetInitToken(long param_1)

{
  undefined *puVar1;
  int in_w8;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x27;
  
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
    param_1 = *unaff_x27;
  }
  puVar1 = PTR_DAT_08f688d8;
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
                    /* try { // try from 04315514 to 04415703 has its CatchHandler @ 04315514
                       catch() { ... } // from try @ 04315514 with catch @ 04315514
                       catch() { ... } // from try @ 04315720 with catch @ 04315514
                       catch() { ... } // from try @ 04315928 with catch @ 04315514
                       catch() { ... } // from try @ 04315954 with catch @ 04315514
                       catch() { ... } // from try @ 04315980 with catch @ 04315514 */
  lVar6 = puVar2[1];
  if (lVar6 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar2 = *(undefined8 **)(*unaff_x27 + 0xb8);
    }
    uVar7 = *puVar2;
    lVar6 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f73740);
    FUN_0533c120(lVar6,uVar7,*(undefined8 *)PTR_DAT_08f737b8,0);
    *(long *)(*(long *)(*unaff_x27 + 0xb8) + 8) = lVar6;
  }
  *(long *)(unaff_x19 + 0x40) = lVar6;
  FUN_075273c0();
  uVar7 = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x23;
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x24;
  *(long **)(unaff_x19 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
  thunk_FUN_0406deb8(uVar7);
  FUN_05329970();
  puVar1 = PTR_DAT_08f73750;
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f68738) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar4 + 7) * 0x10 + 0x138);
          goto LAB_04315620;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
LAB_04315620:
    (*(code *)*puVar2)();
    plVar5 = *(long **)(unaff_x19 + 0x30);
    uVar7 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_05329970();
    if (plVar5 != (long *)0x0) {
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f729a8) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_043156a8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f729a8,0);
LAB_043156a8:
                    /* WARNING: Could not recover jumptable at 0x043156cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar5,uVar7,puVar2[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


