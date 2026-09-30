/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPoint
ENTRY_POINT: 07ca14d0
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


void OVRPlugin_Qpl__MarkerPoint(undefined8 param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar12;
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
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = (int)unaff_x21 - 5;
    plVar12 = *(long **)(unaff_x19 + 0x38);
    fVar3 = (float)param_1;
    if (unaff_w22 != 0) {
      fVar3 = unaff_s10;
    }
    fVar2 = -(float)param_1;
    if ((0x108421U >> (ulong)(uVar1 & 0x1f) & (uint)(uVar1 < 0x15)) == 0) {
      fVar2 = fVar3;
    }
    if (plVar12 == (long *)0x0) break;
    lVar7 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_07ca1568;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar12,*unaff_x26,9);
LAB_07ca1568:
    (*(code *)*puVar4)(plVar12,unaff_x21 & 0xffffffff,&stack0x00000030,puVar4[1]);
    if (in_stack_00000078 == 0) break;
    FUN_095258d0(in_stack_00000078,0);
    uVar5 = FUN_07ca1948(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,param_1,
                         fVar2);
    lVar7 = in_stack_00000078;
    uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f50e48);
    FUN_07ca2304(uVar6,unaff_w22,unaff_x21 & 0xffffffff,lVar7,uVar5,0);
    lVar7 = *(long *)(unaff_x19 + 0x68);
    if (lVar7 == 0) break;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *unaff_x29;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = uVar6;
      thunk_FUN_044bb4b4(puVar4,uVar6);
    }
    else {
      FUN_05bade44(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x1a) {
        FUN_07ca1bb0();
        lVar7 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          return;
        }
        goto LAB_07ca16ac;
      }
      lVar7 = *unaff_x27;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *unaff_x27;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_07ca16ac;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_07ca16b0;
      unaff_w22 = *(uint *)(lVar7 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 == (long *)0x0) break;
    lVar7 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_07ca13dc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar12,*unaff_x26,9);
LAB_07ca13dc:
    (*(code *)*puVar4)(plVar12,unaff_w22,&stack0x00000050,puVar4[1]);
    uVar9 = FUN_07ca16c0();
    if ((uVar9 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar7 = FUN_07ca1788();
      plVar12 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar7;
      if (plVar12 == (long *)0x0) break;
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar8 == 0)) {
        uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
        FUN_04447d10(uVar5,0);
      }
      if (*(uint *)(plVar12 + 3) <= unaff_w22) {
LAB_07ca16b0:
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar12[(long)(int)unaff_w22 + 4] = lVar7;
      thunk_FUN_044bb4b4(plVar12 + (long)(int)unaff_w22 + 4,lVar7);
    }
    uStack000000000000000c = unaff_w22;
    uVar5 = thunk_FUN_04484e3c(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = (uint)unaff_x21;
    uVar6 = thunk_FUN_04484e3c(*unaff_x28,&stack0x00000008);
    FUN_078b5afc(*(undefined8 *)PTR_DAT_09f50e88,uVar5,uVar6,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    param_1 = FUN_07ca36c8(*(long *)(unaff_x19 + 0x40),unaff_w22,0);
  }
LAB_07ca16ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


