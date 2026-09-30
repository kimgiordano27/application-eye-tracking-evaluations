/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 05fee450
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDUnmounted
               (ulong param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,undefined8 param_5
               ,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  uint *unaff_x19;
  long unaff_x22;
  int iVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
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
  
                    /* try { // try from 05fee450 to 060ee453 has its CatchHandler @ 05fee45c */
                    /* try { // try from 05fee454 to 060ee45f has its CatchHandler @ 05fee0f4 */
  if ((param_1 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05fee450 with catch @ 05fee45c
                        */
    FUN_031f20f4(PTR_DAT_075f6b70);
    FUN_031f20f4(PTR_DAT_075f6b78);
    *(undefined1 *)(unaff_x22 + 0x842) = 1;
  }
  puVar3 = PTR_DAT_075f6b78;
  puVar2 = PTR_DAT_075f6b70;
  puVar1 = PTR_DAT_0759b370;
  in_stack_00000060 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  plVar14 = *(long **)(unaff_x19 + 4);
  if (plVar14 != (long *)0x0) {
    fVar23 = 0.0;
    iVar13 = 1;
    uVar24 = (ulong)*unaff_x19;
    uVar25 = (ulong)unaff_x19[1];
    uVar22 = (ulong)unaff_x19[2];
    do {
      lVar9 = *plVar14;
      lVar8 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            uVar10 = param_3;
            uVar20 = param_4;
            goto LAB_05fee518;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar14,lVar8,0);
      uVar10 = param_3;
      uVar20 = param_4;
LAB_05fee518:
      iVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      if ((iVar4 <= iVar13) || ((float)unaff_x19[3] < fVar23)) {
        return;
      }
      plVar14 = *(long **)(unaff_x19 + 4);
      if (plVar14 == (long *)0x0) break;
      lVar9 = *plVar14;
      lVar8 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_05fee590;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_0322c1e8(plVar14,lVar8,1);
LAB_05fee590:
      uVar11 = (*(code *)*puVar5)(plVar14,iVar13,puVar5[1]);
      if (param_6 == 0) break;
      uVar7 = uVar25;
      uVar21 = uVar22;
      uVar6 = FUN_05fee724(uVar24,uVar25,uVar22,uVar11,uVar10,uVar20,param_6,&stack0x00000040);
      fVar18 = (float)uVar21;
      fVar16 = (float)uVar7;
      if ((uVar6 & 1) != 0) {
        fVar17 = (float)uVar25;
        fVar19 = (float)uVar22;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        fVar15 = (float)FUN_05fee9b8(&stack0x00000040);
        if (DAT_07a3fba1 == '\0') {
          FUN_031f20f4(puVar1);
          DAT_07a3fba1 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        fVar15 = (float)uVar24 - fVar15;
        uVar25 = uVar25 & 0xffffffff;
        uVar22 = uVar22 & 0xffffffff;
        fVar17 = fVar17 - fVar16;
        fVar19 = fVar19 - fVar18;
        in_stack_00000018 = in_stack_00000048;
        in_stack_00000010 = in_stack_00000040;
        in_stack_00000028 = in_stack_00000058;
        in_stack_00000020 = in_stack_00000050;
        in_stack_00000030 = in_stack_00000060;
        uVar7 = FUN_05feea80(fVar23 + SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar17 * fVar17),
                             param_5,param_6,&stack0x00000010);
        if ((uVar7 & 1) != 0) {
          return;
        }
      }
      if (DAT_07a3fba1 == '\0') {
        FUN_031f20f4(puVar1);
        DAT_07a3fba1 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      fVar16 = (float)uVar24 - (float)uVar11;
      fVar18 = (float)uVar25 - (float)uVar10;
      fVar17 = (float)uVar22 - (float)uVar20;
      fVar18 = fVar18 * fVar18;
      param_3 = (ulong)(uint)fVar18;
      plVar14 = *(long **)(unaff_x19 + 4);
      fVar17 = fVar17 * fVar17;
      param_4 = (ulong)(uint)fVar17;
      fVar23 = fVar23 + SQRT(fVar17 + fVar16 * fVar16 + fVar18);
      iVar13 = iVar13 + 1;
      uVar24 = uVar11;
      uVar25 = uVar10;
      uVar22 = uVar20;
    } while (plVar14 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


