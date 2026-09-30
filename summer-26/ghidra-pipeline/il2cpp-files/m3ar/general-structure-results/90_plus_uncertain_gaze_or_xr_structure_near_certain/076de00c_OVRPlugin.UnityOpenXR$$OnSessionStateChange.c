/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 076de00c
PROGRAM: m3ar-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_UnityOpenXR__OnSessionStateChange(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined4 extraout_s0;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 unaff_d9;
  undefined4 uVar19;
  undefined8 unaff_d10;
  float unaff_s11;
  float unaff_s12;
  float fVar20;
  float fVar21;
  undefined8 unaff_d13;
  float fVar22;
  undefined8 in_stack_00000000;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  float in_stack_00000048;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x23 + 0xe17) = 1;
  puVar3 = PTR_DAT_08f65580;
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
                    /* try { // try from 076de02c to 077de05b has its CatchHandler @ 076ddd2c */
    thunk_FUN_0408f364();
  }
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076ddf8c with catch @ 076de030
                        */
  fVar15 = (float)((ulong)unaff_d13 >> 0x20);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076ddf7c with catch @ 076de034
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076ddfac with catch @ 076de038
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076ddffc with catch @ 076de03c
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076ddf58 with catch @ 076de040
                        */
  fVar20 = *(float *)(unaff_x20 + 0x2c);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076ddf3c with catch @ 076de044
                        */
  if (DAT_09539e90 == '\0') {
                    /* try { // try from 076de05c to 077de073 has its CatchHandler @ 076de270 */
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e90 = '\x01';
  }
  fVar20 = SQRT((float)unaff_d13 * (float)unaff_d13 + fVar15 * fVar15 + unaff_s12 * unaff_s12) /
           fVar20;
                    /* try { // try from 076de074 to 077de20b has its CatchHandler @ 076ddd2c */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  iVar8 = (int)fVar20;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  bVar2 = false;
  unaff_x19[2] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0x7f800000;
  if (iVar8 < 2) {
    iVar8 = 1;
  }
  if ((float)(int)fVar20 == INFINITY) {
    iVar8 = 1;
  }
  fVar15 = (float)in_stack_00000000 / (float)iVar8;
  fVar21 = (float)unaff_d9 * fVar15;
  fVar22 = (float)((ulong)unaff_d9 >> 0x20) * fVar15;
  fVar20 = fVar15;
  if (fVar15 <= *(float *)(unaff_x20 + 0x28)) {
    fVar20 = *(float *)(unaff_x20 + 0x28);
  }
  fVar16 = unaff_s11 + in_stack_00000010 * fVar15 * 0.5;
  uVar7 = CONCAT44((float)((ulong)unaff_d10 >> 0x20) + fVar22 * 0.5,(float)unaff_d10 + fVar21 * 0.5)
  ;
  do {
    uVar5 = FUN_084f21e0(uVar7,uVar7 >> 0x20,fVar16,fVar15 + SQRT(fVar20 * fVar20 + fVar20 * fVar20)
                         ,&stack0x00000040,*(undefined4 *)(unaff_x20 + 0x34),0);
    fVar12 = in_stack_00000048;
    uVar6 = in_stack_00000040;
    fVar9 = (float)(uVar7 >> 0x20);
    if ((uVar5 & 1) != 0) {
      if (DAT_09539e19 == '\0') {
        FUN_0403162c(puVar3);
        DAT_09539e19 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      fVar11 = (float)uVar6 - (float)uVar7;
      fVar14 = (float)((ulong)uVar6 >> 0x20) - fVar9;
      fVar12 = SQRT((fVar12 - fVar16) * (fVar12 - fVar16) + fVar11 * fVar11 + fVar14 * fVar14);
      if (*(float *)(unaff_x19 + 3) <= fVar12) break;
      *(float *)(unaff_x19 + 3) = fVar12;
      cVar1 = *(char *)(unaff_x24 + 0xe16);
      *unaff_x19 = in_stack_00000040;
      *(float *)(unaff_x19 + 1) = in_stack_00000048;
      if (cVar1 == '\0') {
        FUN_0403162c();
        *(undefined1 *)(unaff_x24 + 0xe16) = 1;
      }
      bVar2 = true;
      uVar10 = *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *(undefined8 *)((long)unaff_x19 + 0xc) = *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *(undefined4 *)((long)unaff_x19 + 0x14) = uVar10;
    }
    uVar7 = CONCAT44(fVar22 + fVar9,fVar21 + (float)uVar7);
    fVar16 = in_stack_00000010 * fVar15 + fVar16;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (bVar2) {
    uVar17 = *(undefined4 *)unaff_x19;
    uVar18 = *(undefined4 *)((long)unaff_x19 + 4);
    uVar19 = *(undefined4 *)(unaff_x19 + 1);
    uVar10 = uVar18;
    uVar13 = uVar19;
    uVar6 = FUN_076de290(uVar17,uVar18,uVar19);
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    in_stack_00000030 = unaff_x21[2];
    uVar7 = FUN_076de3d0(uVar17,uVar18,uVar19,extraout_s0,uVar10,uVar13,in_stack_00000000,uVar6,
                         &stack0x00000020);
    if ((uVar7 & 1) != 0) {
      uVar4 = FUN_076de5c8(uVar17,uVar18,uVar19);
      goto LAB_076de25c;
    }
  }
  uVar4 = 0;
LAB_076de25c:
  return uVar4 & 1;
}


