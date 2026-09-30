/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetBoolTrackedDeviceProperty$$EndInvoke
ENTRY_POINT: 04317850
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetBoolTrackedDeviceProperty__EndInvoke
               (long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  long *in_x10;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x24;
  long *unaff_x25;
  bool bVar10;
  
                    /* try { // try from 04317850 to 04417853 has its CatchHandler @ 043178dc */
                    /* try { // try from 04317854 to 04417857 has its CatchHandler @ 043178d8 */
  if (in_x9 != 0) {
                    /* try { // try from 04317858 to 0441785b has its CatchHandler @ 043178ec */
                    /* try { // try from 0431785c to 0441785f has its CatchHandler @ 043178d0 */
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 04317860 to 04417863 has its CatchHandler @ 043178c4 */
                    /* try { // try from 04317864 to 04417867 has its CatchHandler @ 043178c0 */
                    /* try { // try from 04317868 to 0441786b has its CatchHandler @ 043178bc */
      if (*(long *)(piVar9 + -2) == *in_x10) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_04317898;
      }
                    /* try { // try from 0431786c to 0441786f has its CatchHandler @ 043178b0 */
      in_x9 = in_x9 + -1;
                    /* try { // try from 04317870 to 04417873 has its CatchHandler @ 043178a0 */
      piVar9 = piVar9 + 4;
                    /* try { // try from 04317874 to 04417877 has its CatchHandler @ 04317894 */
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20();
LAB_04317898:
  (*(code *)*puVar4)();
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_04317b80;
  plVar5 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24);
  if (plVar5 == (long *)0x0) {
LAB_043178f8:
    bVar10 = true;
  }
  else {
    bVar2 = *(byte *)(*(long *)PTR_DAT_08f73870 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08f73870))
    goto LAB_043178f8;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_04317b80;
    uVar1 = *(int *)((long)plVar5 + 0x3c) - 1;
    iVar3 = FUN_04349d0c(*(long *)(unaff_x19 + 0x48),0);
    bVar10 = (int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) <= iVar3;
  }
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar5 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24), plVar5 == (long *)0x0))
  goto LAB_04317b80;
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_04317964;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x25,1);
LAB_04317964:
  uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar5 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24), plVar5 == (long *)0x0))
  goto LAB_04317b80;
  lVar7 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_043179dc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(plVar5,*unaff_x25,0);
LAB_043179dc:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  uVar8 = FUN_0437181c();
  if ((uVar8 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    plVar5 = *(long **)(unaff_x19 + 0x40);
    if (plVar5 == (long *)0x0) goto LAB_04317b80;
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
          goto LAB_04317a60;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar5,*(long *)PTR_DAT_08f69238,9);
LAB_04317a60:
    uVar8 = (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      bVar2 = 1;
    }
    else {
      bVar2 = FUN_04317b84();
      bVar2 = bVar2 & 1;
    }
  }
  if ((bVar2 & bVar10) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar8 = FUN_0852f904(0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar8 = FUN_074c70a4();
      if (((uVar8 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) != '\0')) goto LAB_04317a94;
    }
    lVar7 = FUN_08584ab0();
    if (lVar7 != 0) {
      FUN_08588638(lVar7,0,0);
      return;
    }
  }
  else {
LAB_04317a94:
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar7 = *(long *)(unaff_x19 + 0x28);
      uVar6 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*unaff_x24);
      if (lVar7 != 0) {
        FUN_04308fec(lVar7,uVar6);
        return;
      }
    }
  }
LAB_04317b80:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


