/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_session_archive_message_t$$Dispose
ENTRY_POINT: 084d485c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 Unity_Services_Vivox_vx_evt_session_archive_message_t__Dispose(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double in_stack_00000018;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_09280710);
  *(undefined1 *)(unaff_x20 + 0x2ae) = 1;
  puVar3 = PTR_DAT_09280710;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar8 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 084d48a8 to 085d48ab has its CatchHandler @ 084d4af4 */
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09280988) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_084d48d4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
                    /* try { // try from 084d48bc to 085d48c3 has its CatchHandler @ 084d4af0 */
  puVar5 = (undefined8 *)FUN_03d8f370();
LAB_084d48d4:
  uVar6 = (*(code *)*puVar5)();
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c(lVar8);
    lVar8 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_091a1008;
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x48) == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c(lVar8);
      lVar8 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09280978);
    FUN_054c0cbc(uVar7,uVar11,*(undefined8 *)PTR_DAT_09280990,0);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
    *puVar5 = uVar7;
    thunk_FUN_03d1023c(puVar5,uVar7);
  }
  uVar7 = FUN_04f1427c();
  dVar13 = (double)FUN_07797d84(uVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  dVar14 = modf(dVar13,&stack0x00000018);
  if (0.0 <= dVar13) {
    if (dVar14 != 0.5) {
      dVar13 = (double)(long)(dVar13 + 0.5);
      goto LAB_084d4a08;
    }
    dVar14 = 1.0;
  }
  else {
    if (dVar14 != -0.5) {
      dVar13 = (double)(long)(dVar13 + -0.5);
      goto LAB_084d4a08;
    }
    dVar14 = -1.0;
  }
  dVar13 = in_stack_00000018;
  if (((long)in_stack_00000018 & 1U) != 0) {
    dVar13 = in_stack_00000018 + dVar14;
  }
LAB_084d4a08:
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar8 = *(long *)puVar3;
  }
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x50) == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar8 + 0xb8);
    uVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09280980);
    FUN_054c1108(uVar7,uVar11,*(undefined8 *)PTR_DAT_09280998,0);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
    *puVar5 = uVar7;
    thunk_FUN_03d1023c(puVar5,uVar7);
  }
  uVar7 = FUN_04f14864();
  uVar7 = FUN_07798130(uVar7,0);
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    lVar8 = *(long *)puVar3;
  }
  puVar4 = PTR_DAT_09280950;
  puVar2 = PTR_DAT_09280948;
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x58) == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar8 = *(long *)puVar3;
    }
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    uVar11 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_09280970);
    FUN_054c0f50(uVar11,uVar12,*(undefined8 *)PTR_DAT_092809a0,0);
    puVar5 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
    *puVar5 = uVar11;
    thunk_FUN_03d1023c(puVar5,uVar11);
  }
  iVar1 = -0x80000000;
  if (dVar13 != INFINITY) {
    iVar1 = (int)dVar13;
  }
  uVar11 = FUN_04f14570((int)dVar13);
  uVar11 = FUN_04f03f6c(uVar11,*(undefined8 *)puVar4);
  uVar12 = thunk_FUN_03d2ef40(*(undefined8 *)puVar2);
  FUN_084d44a0(uVar7,uVar12,uVar6,iVar1,uVar11);
  return uVar12;
}


