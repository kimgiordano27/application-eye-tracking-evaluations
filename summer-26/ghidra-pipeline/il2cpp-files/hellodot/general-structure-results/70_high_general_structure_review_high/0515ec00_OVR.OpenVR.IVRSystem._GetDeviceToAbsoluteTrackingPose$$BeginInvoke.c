/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 0515ec00
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__BeginInvoke(void)

{
  float fVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  undefined4 in_stack_00000028;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06607100);
  *(undefined1 *)(unaff_x20 + 0xfa4) = 1;
  puVar2 = PTR_DAT_06607100;
  _fStack0000000000000010 = 0;
  _fStack0000000000000018 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
                    /* try { // try from 0515ec20 to 0525ec47 has its CatchHandler @ 0515ed4c */
  plVar12 = *(long **)(unaff_x19 + 0x28);
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
                    /* try { // try from 0515ec48 to 0525ecf3 has its CatchHandler @ 0515e970 */
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06606168) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0515ec84;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_06606168,0);
LAB_0515ec84:
    (*(code *)*puVar7)(plVar12,&stack0x00000010,puVar7[1]);
    fVar16 = (float)in_stack_00000020;
    fVar20 = (float)(in_stack_00000020 >> 0x20);
    fVar13 = (float)FUN_05ee9dbc(uStack000000000000001c,in_stack_00000020 & 0xffffffff,
                                 in_stack_00000020 >> 0x20,in_stack_00000028,0);
    fVar16 = fVar16 * DAT_013de5cc;
    fVar19 = DAT_013de5cc;
    FUN_05eea474(fVar13 * DAT_013de5cc,fVar16,fVar20 * DAT_013de5cc,0);
    uVar17 = 0;
    fVar16 = fVar16 * DAT_013dde8c;
    uVar15 = FUN_05ee9d24(0,fVar16,0,0);
    lVar8 = *(long *)puVar2;
                    /* try { // try from 0515ecf4 to 0525ecfb has its CatchHandler @ 0515ed4c */
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar8 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_065d65c0;
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 != (long *)0x0) {
      pfVar10 = *(float **)(lVar8 + 0xb8);
      lVar8 = *plVar12;
      fVar13 = *pfVar10;
      fVar20 = pfVar10[1];
      fVar21 = pfVar10[2];
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_065d65c0) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
            goto LAB_0515ed70;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065d65c0,4);
LAB_0515ed70:
      fVar14 = (float)(*(code *)*puVar7)(plVar12,puVar7[1]);
      plVar12 = *(long **)(unaff_x19 + 0x38);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0515ede8;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)puVar2,0);
LAB_0515ede8:
        iVar6 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        fVar3 = fStack0000000000000010;
        fVar4 = fStack0000000000000014;
        fVar5 = fStack0000000000000018;
        fVar1 = -(fVar13 * fVar14);
        if (iVar6 != 0) {
          fVar1 = fVar13 * fVar14;
        }
        uVar18 = uVar17;
        fVar13 = fVar16;
        fVar20 = (float)FUN_05eea23c(uVar15,fVar16,uVar17,fVar19,fVar1,fVar20 * fVar14,
                                     fVar21 * fVar14,0);
        lVar8 = FUN_05ef2cb4();
        if (lVar8 != 0) {
          FUN_05f0278c(fVar3 + fVar20,fVar4 + fVar13,fVar5 + (float)uVar18,uVar15,fVar16,uVar17,
                       fVar19,lVar8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


