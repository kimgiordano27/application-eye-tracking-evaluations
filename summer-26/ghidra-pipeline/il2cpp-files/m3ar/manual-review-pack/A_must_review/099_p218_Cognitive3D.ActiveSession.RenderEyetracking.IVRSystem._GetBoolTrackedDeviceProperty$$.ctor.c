/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetBoolTrackedDeviceProperty$$.ctor
ENTRY_POINT: 043176d4
PROGRAM: m3ar-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetBoolTrackedDeviceProperty___ctor
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long *plVar15;
  bool bVar16;
  
                    /* try { // try from 043176d8 to 044176df has its CatchHandler @ 043178ac */
  if ((*(byte *)(unaff_x20 + 0xe07) & 1) == 0) {
                    /* try { // try from 043176e0 to 044176eb has its CatchHandler @ 043178a8 */
    FUN_0403162c(PTR_DAT_08f658d0);
    FUN_0403162c(PTR_DAT_08f65f48);
                    /* try { // try from 043176f8 to 044176ff has its CatchHandler @ 043178a4 */
    FUN_0403162c(PTR_DAT_08f73260);
    FUN_0403162c(PTR_DAT_08f73278);
    FUN_0403162c(PTR_DAT_08f69238);
                    /* try { // try from 04317720 to 0441773f has its CatchHandler @ 04317884 */
    FUN_0403162c(PTR_DAT_08f69220);
    FUN_0403162c(PTR_DAT_08f73868);
    FUN_0403162c(PTR_DAT_08f73870);
    *(undefined1 *)(unaff_x20 + 0xe07) = 1;
  }
  plVar15 = *(long **)(unaff_x19 + 0x38);
  if (plVar15 == (long *)0x0) goto LAB_04317b80;
                    /* try { // try from 04317750 to 0441775b has its CatchHandler @ 0431789c */
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f69220) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_043177a0;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f69220,0);
LAB_043177a0:
  uVar7 = (*(code *)*puVar6)(plVar15,0,puVar6[1]);
  puVar3 = PTR_DAT_08f73868;
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_04317b80;
  plVar15 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73868);
  puVar2 = PTR_DAT_08f73278;
  if (plVar15 == (long *)0x0) goto LAB_04317b80;
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f73278) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_0431782c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f73278,0);
LAB_0431782c:
  plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
  if (plVar15 == (long *)0x0) goto LAB_04317b80;
  lVar11 = *plVar15;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f73260) {
        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_04317898;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f73260,1);
LAB_04317898:
  uVar8 = (*(code *)*puVar6)(plVar15,uVar7,puVar6[1]);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_04317b80;
  plVar15 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3);
  if (plVar15 == (long *)0x0) {
LAB_043178f8:
    bVar16 = true;
  }
  else {
    bVar4 = *(byte *)(*(long *)PTR_DAT_08f73870 + 0x130);
    if ((*(byte *)(*plVar15 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_08f73870))
    goto LAB_043178f8;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_04317b80;
    uVar1 = *(int *)((long)plVar15 + 0x3c) - 1;
    iVar5 = FUN_04349d0c(*(long *)(unaff_x19 + 0x48),0);
    bVar16 = (int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) <= iVar5;
  }
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar15 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3),
     plVar15 == (long *)0x0)) goto LAB_04317b80;
  lVar12 = *plVar15;
  lVar11 = *(long *)puVar2;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar11) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
        goto LAB_04317964;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar15,lVar11,1);
LAB_04317964:
  uVar9 = (*(code *)*puVar6)(plVar15,puVar6[1]);
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar15 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3),
     plVar15 == (long *)0x0)) goto LAB_04317b80;
  lVar12 = *plVar15;
  lVar11 = *(long *)puVar2;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar11) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_043179dc;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar15,lVar11,0);
LAB_043179dc:
  uVar10 = (*(code *)*puVar6)(plVar15,puVar6[1]);
  uVar13 = FUN_0437181c(uVar10,uVar7,0);
  if ((uVar13 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    plVar15 = *(long **)(unaff_x19 + 0x40);
    if (plVar15 == (long *)0x0) goto LAB_04317b80;
    lVar11 = *plVar15;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 9) * 0x10 + 0x138);
          goto LAB_04317a60;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar15,*(long *)PTR_DAT_08f69238,9);
LAB_04317a60:
    uVar13 = (*(code *)*puVar6)(plVar15,uVar9,puVar6[1]);
    if ((uVar13 & 1) == 0) {
      bVar4 = 1;
    }
    else {
      bVar4 = FUN_04317b84();
      bVar4 = bVar4 & 1;
    }
  }
  if ((bVar4 & bVar16) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar13 = FUN_0852f904(0);
    if ((uVar13 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar13 = FUN_074c70a4(uVar7,uVar8,0);
      if (((uVar13 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) != '\0')) goto LAB_04317a94;
    }
    lVar11 = FUN_08584ab0();
    if (lVar11 != 0) {
      FUN_08588638(lVar11,0,0);
      return;
    }
  }
  else {
LAB_04317a94:
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar11 = *(long *)(unaff_x19 + 0x28);
      uVar7 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3);
      if (lVar11 != 0) {
        FUN_04308fec(lVar11,uVar7);
        return;
      }
    }
  }
LAB_04317b80:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


