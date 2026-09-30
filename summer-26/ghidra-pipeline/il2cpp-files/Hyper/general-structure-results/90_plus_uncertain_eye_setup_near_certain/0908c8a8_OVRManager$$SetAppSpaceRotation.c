/*
FUNCTION_NAME: OVRManager$$SetAppSpaceRotation
ENTRY_POINT: 0908c8a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpaceRotation
               (undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,long param_5,
               float *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
                    /* try { // try from 0908c8bc to 0918c8cb has its CatchHandler @ 0908d71c */
  if ((DAT_0b33018d & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac788b0);
    FUN_04947ee4(PTR_DAT_0ac788c0);
    DAT_0b33018d = 1;
  }
  puVar3 = PTR_DAT_0ac788c0;
  puVar2 = PTR_DAT_0ac788b0;
  puVar1 = PTR_DAT_0ac0a830;
  plVar11 = *(long **)(param_6 + 4);
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  if (plVar11 != (long *)0x0) {
                    /* try { // try from 0908c918 to 0918c923 has its CatchHandler @ 0908d6f0 */
    fVar19 = 0.0;
                    /* try { // try from 0908c940 to 0918c943 has its CatchHandler @ 0908d588 */
                    /* try { // try from 0908c944 to 0918c94f has its CatchHandler @ 0908d658 */
    iVar10 = 1;
    fVar20 = *param_6;
    fVar21 = param_6[1];
    fVar18 = param_6[2];
    do {
      fVar16 = (float)param_3;
      fVar14 = (float)param_2;
      lVar7 = *plVar11;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 0908c960 to 0918c967 has its CatchHandler @ 0908d654 */
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0908c9a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar11,lVar6,0);
LAB_0908c9a0:
      iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if ((iVar4 <= iVar10) || (param_6[3] < fVar19)) {
        return;
      }
      plVar11 = *(long **)(param_6 + 4);
      if (plVar11 == (long *)0x0) break;
      lVar7 = *plVar11;
      lVar6 = *(long *)puVar2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0908ca18;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar11,lVar6,1);
LAB_0908ca18:
      fVar12 = (float)(*(code *)*puVar5)(plVar11,iVar10,puVar5[1]);
      if (param_5 == 0) break;
      fVar15 = fVar21;
      fVar17 = fVar18;
      uVar8 = FUN_0908cbb4(fVar20,fVar21,fVar18,fVar12,fVar14,fVar16,param_5,&stack0x00000040);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        fVar13 = (float)FUN_0908ce4c(&stack0x00000040);
        if (DAT_0b32413d == '\0') {
          FUN_04947ee4(puVar1);
          DAT_0b32413d = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        in_stack_00000030 = in_stack_00000060;
        in_stack_00000018 = in_stack_00000048;
        in_stack_00000010 = in_stack_00000040;
        in_stack_00000028 = in_stack_00000058;
        in_stack_00000020 = in_stack_00000050;
        uVar8 = FUN_0908cf14(fVar19 + SQRT((fVar18 - fVar17) * (fVar18 - fVar17) +
                                           (fVar20 - fVar13) * (fVar20 - fVar13) +
                                           (fVar21 - fVar15) * (fVar21 - fVar15)),param_4,param_5,
                             &stack0x00000010,param_6);
        if ((uVar8 & 1) != 0) {
          return;
        }
      }
      if (DAT_0b32413d == '\0') {
        FUN_04947ee4(puVar1);
        DAT_0b32413d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      plVar11 = *(long **)(param_6 + 4);
      fVar18 = fVar18 - fVar16;
      param_3 = (ulong)(uint)fVar18;
      iVar10 = iVar10 + 1;
      param_2 = (ulong)(uint)(fVar18 * fVar18);
      fVar19 = fVar19 + SQRT(fVar18 * fVar18 +
                             (fVar20 - fVar12) * (fVar20 - fVar12) +
                             (fVar21 - fVar14) * (fVar21 - fVar14));
      fVar20 = fVar12;
      fVar21 = fVar14;
      fVar18 = fVar16;
    } while (plVar11 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


