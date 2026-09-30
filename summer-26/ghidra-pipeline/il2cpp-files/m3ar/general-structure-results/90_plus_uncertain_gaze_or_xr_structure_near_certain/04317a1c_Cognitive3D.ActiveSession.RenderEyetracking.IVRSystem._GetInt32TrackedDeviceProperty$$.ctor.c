/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetInt32TrackedDeviceProperty$$.ctor
ENTRY_POINT: 04317a1c
PROGRAM: m3ar-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetInt32TrackedDeviceProperty___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_x9;
  long in_x10;
  int *piVar5;
  long unaff_x19;
  long lVar6;
  undefined8 *unaff_x24;
  uint unaff_w26;
  
  piVar5 = (int *)(in_x10 + 8);
  do {
                    /* try { // try from 04317a24 to 04417a9f has its CatchHandler @ 04317a24
                       catch() { ... } // from try @ 04317a24 with catch @ 04317a24
                       catch() { ... } // from try @ 04317cf8 with catch @ 04317a24
                       catch() { ... } // from try @ 04317ed0 with catch @ 04317a24
                       catch() { ... } // from try @ 04317f64 with catch @ 04317a24
                       catch() { ... } // from try @ 04317fd8 with catch @ 04317a24 */
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 9) * 0x10 + 0x138);
      goto LAB_04317a60;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_0406ae20();
LAB_04317a60:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_04317b84();
    uVar1 = uVar1 & 1;
  }
  if ((uVar1 & unaff_w26) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_0852f904(0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar3 = FUN_074c70a4();
      if (((uVar3 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) != '\0')) goto LAB_04317a94;
    }
    lVar6 = FUN_08584ab0();
    if (lVar6 != 0) {
      FUN_08588638(lVar6,0,0);
      return;
    }
  }
  else {
LAB_04317a94:
    if (*(long *)(unaff_x19 + 0x20) != 0) {
                    /* try { // try from 04317aa0 to 04417aab has its CatchHandler @ 04317f24 */
      lVar6 = *(long *)(unaff_x19 + 0x28);
      uVar4 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24);
      if (lVar6 != 0) {
        FUN_04308fec(lVar6,uVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


