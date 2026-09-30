/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 07ca15c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  uint uVar11;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar12;
  long unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float unaff_s10;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  while( true ) {
    uVar4 = thunk_FUN_0448520c(*param_1);
    FUN_07ca2304(uVar4,unaff_w22,unaff_x21 & 0xffffffff,unaff_x24,unaff_x25,0);
    lVar5 = *(long *)(unaff_x19 + 0x68);
    if (lVar5 == 0) break;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar9 = *unaff_x29;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) break;
    uVar11 = *(uint *)(lVar5 + 0x18);
    if (uVar11 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar11 + 1;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar11 * 8 + 0x20);
      *puVar7 = uVar4;
      thunk_FUN_044bb4b4(puVar7,uVar4);
    }
    else {
      FUN_05bade44(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_07ca1bb0();
        lVar5 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        goto LAB_07ca16ac;
      }
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar5 = *unaff_x27;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_07ca16ac;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_07ca16b0;
      unaff_w22 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            (uVar11 = (uint)unaff_x21,
            (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar11 & 0x1f) & 1) == 0));
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 == (long *)0x0) break;
    lVar5 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_07ca13dc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar12,*unaff_x26,9);
LAB_07ca13dc:
    (*(code *)*puVar7)(plVar12,unaff_w22,&stack0x00000050,puVar7[1]);
    uVar8 = FUN_07ca16c0();
    if ((uVar8 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar5 = FUN_07ca1788();
      plVar12 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar5;
      if (plVar12 == (long *)0x0) break;
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_04485110(lVar5,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar4,0);
      }
      if (*(uint *)(plVar12 + 3) <= unaff_w22) {
LAB_07ca16b0:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar12[(long)(int)unaff_w22 + 4] = lVar5;
      thunk_FUN_044bb4b4(plVar12 + (long)(int)unaff_w22 + 4,lVar5);
    }
    uStack000000000000000c = unaff_w22;
    uVar4 = thunk_FUN_04484e3c(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = uVar11;
    uVar3 = thunk_FUN_04484e3c(*unaff_x28,&stack0x00000008);
    FUN_078b5afc(*(undefined8 *)PTR_DAT_09f50e88,uVar4,uVar3,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    uVar4 = FUN_07ca36c8(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    plVar12 = *(long **)(unaff_x19 + 0x38);
    fVar2 = (float)uVar4;
    if (unaff_w22 != 0) {
      fVar2 = unaff_s10;
    }
    fVar1 = -(float)uVar4;
    if ((0x108421U >> (ulong)(uVar11 - 5 & 0x1f) & (uint)(uVar11 - 5 < 0x15)) == 0) {
      fVar1 = fVar2;
    }
    if (plVar12 == (long *)0x0) break;
    lVar5 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_07ca1568;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_044822ac(plVar12,*unaff_x26,9);
LAB_07ca1568:
    (*(code *)*puVar7)(plVar12,unaff_x21 & 0xffffffff,&stack0x00000030,puVar7[1]);
    if (in_stack_00000078 == 0) break;
    FUN_095258d0(in_stack_00000078,0);
    unaff_x25 = FUN_07ca1948(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar4,
                             fVar1);
    param_1 = (undefined8 *)PTR_DAT_09f50e48;
    unaff_x24 = in_stack_00000078;
  }
LAB_07ca16ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


