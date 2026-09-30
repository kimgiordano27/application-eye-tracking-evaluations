/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_sessiongroup_set_session_3d_position_t
ENTRY_POINT: 08163024
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_sessiongroup_set_session_3d_position_t
               (void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  long lVar12;
  long unaff_x21;
  long *plVar13;
  undefined8 uVar14;
  long *unaff_x24;
  long lVar15;
  ulong uVar16;
  undefined8 in_stack_00000008;
  
  if (*(int *)(unaff_x21 + 0x18) < 1) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar6 = thunk_FUN_03cf5234();
    uVar14 = thunk_FUN_03ce5214(PTR_DAT_08f04d50);
    FUN_0705a2f8(uVar6,uVar14,0);
    uVar14 = thunk_FUN_03ce5214(PTR_DAT_08f04d58);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar6,uVar14);
  }
  lVar12 = *(long *)(unaff_x19 + 0xc);
  lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04d08);
  FUN_05212530(lVar5,*(undefined4 *)(unaff_x21 + 0x18),*(undefined8 *)PTR_DAT_08f04d00);
  puVar4 = PTR_DAT_08f04d38;
  puVar3 = PTR_DAT_08f04cf8;
  lVar15 = *(long *)(unaff_x19 + 8);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
    uVar16 = 0;
    uVar8 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar1 = *(undefined4 *)(lVar15 + 0x20 + uVar16 * 4);
      uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar4);
      FUN_08169474(uVar6,uVar1,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar9 = *(long *)(lVar5 + 0x10);
      lVar10 = *(long *)puVar3;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar2 + 1;
        puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
        *puVar7 = uVar6;
        thunk_FUN_03d233cc(puVar7,uVar6);
      }
      else {
        FUN_05212cf4(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar8 = (ulong)*(uint *)(lVar15 + 0x18);
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < (long)(int)*(uint *)(lVar15 + 0x18));
  }
  uVar14 = *(undefined8 *)(unaff_x19 + 10);
  uVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04d10);
  FUN_08179484(uVar6,uVar14,lVar5,0,0,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar13 = *(long **)(lVar12 + 0x10);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *plVar13;
  uVar16 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar16 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e83800) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_081631c8;
      }
      uVar16 = uVar16 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)FUN_03cf1348(plVar13,*(long *)PTR_DAT_08e83800,0);
LAB_081631c8:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  uVar14 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04cf0);
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *plVar13;
  uVar16 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar16 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08f04a00) {
        lVar5 = lVar5 + (long)(*piVar11 + 0xe) * 0x10 + 0x138;
        goto LAB_08163248;
      }
      uVar16 = uVar16 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar16 != 0);
  }
  lVar5 = FUN_03cf1348(plVar13,*(long *)PTR_DAT_08f04a00,0xe);
LAB_08163248:
  FUN_04d6ed0c(uVar14,plVar13,*(undefined8 *)(lVar5 + 8),0);
  lVar5 = FUN_048bd7d8(lVar12,*(undefined8 *)PTR_DAT_08f04d48,uVar14,uVar6,
                       *(undefined8 *)PTR_DAT_08f04d40);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_05c0b91c(lVar5,*(undefined8 *)PTR_DAT_08f04d30);
  uVar16 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04d28);
  if ((uVar16 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_041834ac(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    lVar5 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04d20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    *unaff_x19 = 0xfffffffe;
    puVar3 = PTR_DAT_08f04ce8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
  }
  return;
}


