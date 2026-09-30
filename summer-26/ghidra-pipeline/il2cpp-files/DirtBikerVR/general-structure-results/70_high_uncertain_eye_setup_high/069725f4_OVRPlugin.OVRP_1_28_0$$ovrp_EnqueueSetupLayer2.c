/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_EnqueueSetupLayer2
ENTRY_POINT: 069725f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06972940) */

void OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000048;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xff8));
  FUN_03a8a718(PTR_DAT_084b7350);
  *(undefined1 *)(unaff_x20 + 0xff) = 1;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = (long *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    plVar8 = (long *)FUN_07cae9b8(*(long *)(unaff_x19 + 0x28),0);
    puVar7 = PTR_DAT_084b7350;
    puVar6 = PTR_DAT_08488568;
    puVar4 = PTR_DAT_08486ff8;
    puVar3 = PTR_DAT_08486738;
    do {
      in_stack_00000048 = plVar8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar13 = *plVar8;
      lVar12 = *(long *)puVar6;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_069726b4;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(plVar8,lVar12,0);
LAB_069726b4:
      uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      plVar8 = in_stack_00000048;
      puVar5 = PTR_DAT_08488550;
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_03ac73c0(in_stack_00000048,*(undefined8 *)PTR_DAT_08488550);
        in_stack_00000038 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_06972834;
        lVar12 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 == 0) goto LAB_0697280c;
        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_069727f4;
      }
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar13 = *in_stack_00000048;
      lVar12 = *(long *)puVar6;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0697271c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_03ac43c4(in_stack_00000048,lVar12,1);
LAB_0697271c:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar10);
      }
      uVar11 = thunk_FUN_07ca227c(plVar10,0);
      uVar14 = thunk_FUN_065cbffc(uVar11,*(undefined8 *)puVar7,0);
      plVar8 = in_stack_00000048;
      if ((uVar14 & 1) == 0) {
        uVar11 = FUN_07c99058(plVar10,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07ca310c(uVar11,0);
        plVar8 = in_stack_00000048;
      }
    } while( true );
  }
  goto LAB_0697293c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_069727f4:
    if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto FUN_06972828;
    }
  }
LAB_0697280c:
  puVar9 = (undefined8 *)FUN_03ac43c4(plVar8,*(long *)puVar5,0);
FUN_06972828:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_06972834:
  puVar6 = PTR_DAT_084b7348;
  puVar4 = PTR_DAT_084b5eb8;
  puVar3 = PTR_DAT_084b5ea0;
  if (((*(long *)(unaff_x19 + 0x20) != 0) &&
      (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xe8), lVar12 != 0)) &&
     (lVar12 = *(long *)(lVar12 + 0x50), lVar12 != 0)) {
    FUN_04de90b8(&stack0x00000020,lVar12,*(undefined8 *)PTR_DAT_084b5ed0);
    while( true ) {
      uVar14 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar4);
      if ((uVar14 & 1) == 0) {
        FUN_061c1960(&stack0x00000020,*(undefined8 *)puVar3);
        return;
      }
      lVar12 = *(long *)(unaff_x19 + 0x38);
      uVar11 = FUN_069729e8();
      if (lVar12 == 0) break;
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar15 = *(long *)puVar6;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) break;
      uVar2 = *(uint *)(lVar12 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
        thunk_FUN_03afed3c();
      }
      else {
        FUN_04de85b0(lVar12,uVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_0697293c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


