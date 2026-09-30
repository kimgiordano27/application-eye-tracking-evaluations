/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetBoolTrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 04317774
PROGRAM: m3ar-libil2cpp.so
SCORE: 133
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetBoolTrackedDeviceProperty__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_x9;
  ulong uVar14;
  int *in_x10;
  int *piVar15;
  long unaff_x19;
  bool bVar16;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_0406ae20();
      goto LAB_043177a0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_043177a0:
  uVar7 = (*(code *)*puVar6)();
  puVar3 = PTR_DAT_08f73868;
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_04317b80;
  plVar8 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_08f73868);
  puVar2 = PTR_DAT_08f73278;
  if (plVar8 == (long *)0x0) goto LAB_04317b80;
  lVar12 = *plVar8;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f73278) {
        puVar6 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_0431782c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f73278,0);
LAB_0431782c:
  plVar8 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
  if (plVar8 == (long *)0x0) goto LAB_04317b80;
                    /* try { // try from 04317840 to 04417843 has its CatchHandler @ 043178fc */
  lVar12 = *plVar8;
                    /* try { // try from 04317844 to 04417847 has its CatchHandler @ 043178f8 */
                    /* try { // try from 04317848 to 0441784b has its CatchHandler @ 043178f0 */
                    /* try { // try from 0431784c to 0441784f has its CatchHandler @ 043178e0 */
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f73260) {
        puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_04317898;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f73260,1);
LAB_04317898:
  uVar9 = (*(code *)*puVar6)(plVar8,uVar7,puVar6[1]);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_04317b80;
  plVar8 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3);
  if (plVar8 == (long *)0x0) {
LAB_043178f8:
    bVar16 = true;
  }
  else {
    bVar4 = *(byte *)(*(long *)PTR_DAT_08f73870 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar4 * 8 + -8) != *(long *)PTR_DAT_08f73870))
    goto LAB_043178f8;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_04317b80;
    uVar1 = *(int *)((long)plVar8 + 0x3c) - 1;
    iVar5 = FUN_04349d0c(*(long *)(unaff_x19 + 0x48),0);
    bVar16 = (int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) <= iVar5;
  }
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar8 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3),
     plVar8 == (long *)0x0)) goto LAB_04317b80;
  lVar13 = *plVar8;
  lVar12 = *(long *)puVar2;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar12) {
        puVar6 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
        goto LAB_04317964;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar8,lVar12,1);
LAB_04317964:
  uVar10 = (*(code *)*puVar6)(plVar8,puVar6[1]);
  if ((*(long *)(unaff_x19 + 0x20) == 0) ||
     (plVar8 = (long *)FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3),
     plVar8 == (long *)0x0)) goto LAB_04317b80;
  lVar13 = *plVar8;
  lVar12 = *(long *)puVar2;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == lVar12) {
        puVar6 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_043179dc;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined8 *)FUN_0406ae20(plVar8,lVar12,0);
LAB_043179dc:
  uVar11 = (*(code *)*puVar6)(plVar8,puVar6[1]);
  uVar14 = FUN_0437181c(uVar11,uVar7,0);
  if ((uVar14 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    plVar8 = *(long **)(unaff_x19 + 0x40);
    if (plVar8 == (long *)0x0) goto LAB_04317b80;
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_08f69238) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar15 + 9) * 0x10 + 0x138);
          goto LAB_04317a60;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f69238,9);
LAB_04317a60:
    uVar14 = (*(code *)*puVar6)(plVar8,uVar10,puVar6[1]);
    if ((uVar14 & 1) == 0) {
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
    uVar14 = FUN_0852f904(0);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08f65f48 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar14 = FUN_074c70a4(uVar7,uVar9,0);
      if (((uVar14 & 1) != 0) && (*(char *)(unaff_x19 + 0x30) != '\0')) goto LAB_04317a94;
    }
    lVar12 = FUN_08584ab0();
    if (lVar12 != 0) {
      FUN_08588638(lVar12,0,0);
      return;
    }
  }
  else {
LAB_04317a94:
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      lVar12 = *(long *)(unaff_x19 + 0x28);
      uVar7 = FUN_054b8ffc(*(long *)(unaff_x19 + 0x20),*(undefined8 *)puVar3);
      if (lVar12 != 0) {
        FUN_04308fec(lVar12,uVar7);
        return;
      }
    }
  }
LAB_04317b80:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


