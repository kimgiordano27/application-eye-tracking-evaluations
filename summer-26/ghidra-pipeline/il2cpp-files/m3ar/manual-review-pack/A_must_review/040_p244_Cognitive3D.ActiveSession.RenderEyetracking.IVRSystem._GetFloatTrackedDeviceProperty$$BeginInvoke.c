/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetFloatTrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 04317918
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetFloatTrackedDeviceProperty__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  
                    /* try { // try from 04317918 to 0441792f has its CatchHandler @ 0431799c */
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 04317930 to 0441798b has its CatchHandler @ 04317330 */
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_04317964;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(param_2,param_3,1);
LAB_04317964:
  uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar4 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24), plVar4 == (long *)0x0))
  goto LAB_04317b80;
                    /* try { // try from 0431798c to 0441799b has its CatchHandler @ 0431799c */
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* catch() { ... } // from try @ 04317918 with catch @ 0431799c
                       catch() { ... } // from try @ 0431798c with catch @ 0431799c */
  if (uVar6 != 0) {
                    /* try { // try from 043179a0 to 044179a3 has its CatchHandler @ 043179ac */
                    /* try { // try from 043179a4 to 044179af has its CatchHandler @ 04317330 */
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 043179a0 with catch @ 043179ac */
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_043179dc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_0406ae20(plVar4,*unaff_x25,0);
LAB_043179dc:
  (*(code *)*puVar2)(plVar4,puVar2[1]);
  uVar6 = FUN_0437181c();
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    plVar4 = *(long **)(unaff_x19 + 0x40);
    if (plVar4 == (long *)0x0) goto LAB_04317b80;
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_04317a60;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08f69238,9);
LAB_04317a60:
    uVar6 = (*(code *)*puVar2)(plVar4,uVar3,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_04317b84();
      uVar1 = uVar1 & 1;
    }
  }
  if ((uVar1 & unaff_w26) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar6 = FUN_0852f904(0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar6 = FUN_074c70a4();
      if (((uVar6 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) != '\0')) goto LAB_04317a94;
    }
    lVar5 = FUN_08584ab0();
    if (lVar5 != 0) {
      FUN_08588638(lVar5,0,0);
      return;
    }
  }
  else {
LAB_04317a94:
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      uVar3 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24);
      if (lVar5 != 0) {
        FUN_04308fec(lVar5,uVar3);
        return;
      }
    }
  }
LAB_04317b80:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


