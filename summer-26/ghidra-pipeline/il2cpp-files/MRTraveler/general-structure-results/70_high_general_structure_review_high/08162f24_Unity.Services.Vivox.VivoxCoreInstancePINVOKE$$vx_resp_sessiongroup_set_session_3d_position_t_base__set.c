/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_session_3d_position_t_base__set
ENTRY_POINT: 08162f24
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_session_3d_position_t_base__set
               (int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 in_stack_00000008;
  
  if ((DAT_09428fad & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f04ce0);
    FUN_03c8f898(PTR_DAT_08f04ce8);
    FUN_03c8f898(PTR_DAT_08f04788);
    FUN_03c8f898(PTR_DAT_08f04cf0);
    FUN_03c8f898(PTR_DAT_08f04a00);
    FUN_03c8f898(PTR_DAT_08e83800);
    FUN_03c8f898(PTR_DAT_08f04cf8);
    FUN_03c8f898(PTR_DAT_08f04d00);
    FUN_03c8f898(PTR_DAT_08f04d08);
    FUN_03c8f898(PTR_DAT_08f04d10);
    FUN_03c8f898(PTR_DAT_08f04d18);
    FUN_03c8f898(PTR_DAT_08f04d20);
    FUN_03c8f898(PTR_DAT_08f04d28);
    FUN_03c8f898(PTR_DAT_08f04d30);
    FUN_03c8f898(PTR_DAT_08f04d38);
    FUN_03c8f898(PTR_DAT_08f04d40);
    FUN_03c8f898(PTR_DAT_08f04d48);
    DAT_09428fad = 1;
  }
  puVar3 = PTR_DAT_08f04788;
  in_stack_00000008 = 0;
  if (*param_1 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar14 = *(long *)(param_1 + 8);
    if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) < 1)) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar7 = thunk_FUN_03cf5234();
      uVar16 = thunk_FUN_03ce5214(PTR_DAT_08f04d50);
      FUN_0705a2f8(uVar7,uVar16,0);
      uVar16 = thunk_FUN_03ce5214(PTR_DAT_08f04d58);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7,uVar16);
    }
    lVar13 = *(long *)(param_1 + 0xc);
    lVar6 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04d08);
    FUN_05212530(lVar6,*(undefined4 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_08f04d00);
    puVar5 = PTR_DAT_08f04d38;
    puVar4 = PTR_DAT_08f04cf8;
    lVar14 = *(long *)(param_1 + 8);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
      uVar17 = 0;
      uVar9 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
      do {
        if (uVar9 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar1 = *(undefined4 *)(lVar14 + 0x20 + uVar17 * 4);
        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)puVar5);
        FUN_08169474(uVar7,uVar1,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar4;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          puVar8 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar8 = uVar7;
          thunk_FUN_03d233cc(puVar8,uVar7);
        }
        else {
          FUN_05212cf4(lVar6,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = (ulong)*(uint *)(lVar14 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar14 + 0x18));
    }
    uVar16 = *(undefined8 *)(param_1 + 10);
    uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04d10);
    FUN_08179484(uVar7,uVar16,lVar6,0,0,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar15 = *(long **)(lVar13 + 0x10);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar14 = *plVar15;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08e83800) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_081631c8;
        }
        uVar17 = uVar17 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar17 != 0);
    }
    puVar8 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e83800,0);
LAB_081631c8:
    plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
    uVar16 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04cf0);
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar14 = *plVar15;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08f04a00) {
          lVar14 = lVar14 + (long)(*piVar12 + 0xe) * 0x10 + 0x138;
          goto LAB_08163248;
        }
        uVar17 = uVar17 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar17 != 0);
    }
    lVar14 = FUN_03cf1348(plVar15,*(long *)PTR_DAT_08f04a00,0xe);
LAB_08163248:
    FUN_04d6ed0c(uVar16,plVar15,*(undefined8 *)(lVar14 + 8),0);
    lVar14 = FUN_048bd7d8(lVar13,*(undefined8 *)PTR_DAT_08f04d48,uVar16,uVar7,
                          *(undefined8 *)PTR_DAT_08f04d40);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar14,*(undefined8 *)PTR_DAT_08f04d30);
    uVar17 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04d28);
    if ((uVar17 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = in_stack_00000008;
      thunk_FUN_03d233cc(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_041834ac(param_1 + 2,&stack0x00000008,param_1,*(undefined8 *)PTR_DAT_08f04ce0);
      return;
    }
  }
  lVar14 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04d20);
  if (lVar14 != 0) {
    uVar7 = *(undefined8 *)(lVar14 + 0x20);
    *param_1 = -2;
    puVar4 = PTR_DAT_08f04ce8;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(param_1 + 2,uVar7,*(undefined8 *)puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


