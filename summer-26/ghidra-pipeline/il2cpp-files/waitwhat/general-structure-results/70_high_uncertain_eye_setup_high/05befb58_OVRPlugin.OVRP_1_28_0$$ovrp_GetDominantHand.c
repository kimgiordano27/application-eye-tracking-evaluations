/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 05befb58
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand(long param_1)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  uint uVar11;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar12;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float unaff_s8;
  float unaff_s9;
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
  
code_r0x05befb58:
  puVar2 = (undefined8 *)(param_1 + 0x138);
  while( true ) {
    (*(code *)*puVar2)(unaff_x24,unaff_x21 & 0xffffffff,&stack0x00000030,puVar2[1]);
    lVar7 = in_stack_00000078;
    if (in_stack_00000078 == 0) break;
    FUN_069d3a80(in_stack_00000078,0);
    uVar4 = FUN_05befff8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                         uStack0000000000000030,uStack0000000000000034,in_stack_00000038,unaff_s8,
                         unaff_s9);
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07116ca8);
    FUN_05971910(lVar5,0);
    lVar6 = *(long *)(unaff_x19 + 0x68);
    *(uint *)(lVar5 + 0x10) = unaff_w22;
    *(int *)(lVar5 + 0x14) = (int)unaff_x21;
    *(long *)(lVar5 + 0x18) = lVar7;
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    if (lVar6 == 0) break;
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar9 = *unaff_x29;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar11 = *(uint *)(lVar6 + 0x18);
    if (uVar11 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar11 + 1;
      *(long *)(lVar7 + (long)(int)uVar11 * 8 + 0x20) = lVar5;
    }
    else {
      FUN_042e4a64(lVar6,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_05bf02a4();
        lVar7 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
          return;
        }
        goto LAB_05befc8c;
      }
      lVar7 = *unaff_x27;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar7 = *unaff_x27;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_05befc8c;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x21) goto LAB_05befc90;
      unaff_w22 = *(uint *)(lVar7 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            (uVar11 = (uint)unaff_x21,
            (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar11 & 0x1f) & 1) == 0));
    plVar12 = *(long **)(unaff_x19 + 0x38);
    if (plVar12 == (long *)0x0) break;
    lVar7 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_05bef9f0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar12,*unaff_x26,9);
LAB_05bef9f0:
    (*(code *)*puVar2)(plVar12,unaff_w22,&stack0x00000050,puVar2[1]);
    uVar8 = FUN_05befca0();
    if ((uVar8 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar7 = FUN_05befd48();
      plVar12 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar7;
      if (plVar12 == (long *)0x0) break;
      if ((lVar7 != 0) &&
         (lVar5 = thunk_FUN_031c3cac(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar5 == 0)) {
        uVar4 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar4,0);
      }
      if (*(uint *)(plVar12 + 3) <= unaff_w22) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      plVar12[(long)(int)unaff_w22 + 4] = lVar7;
    }
    uStack000000000000000c = unaff_w22;
    uVar4 = thunk_FUN_031c39fc(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = uVar11;
    uVar3 = thunk_FUN_031c39fc(*unaff_x28,&stack0x00000008);
    FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar4,uVar3,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    unaff_s8 = (float)FUN_05beff08(*(long *)(unaff_x19 + 0x40),unaff_w22);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar1 = unaff_s8;
    if (unaff_w22 != 0) {
      fVar1 = unaff_s10;
    }
    unaff_x24 = *(long **)(unaff_x19 + 0x38);
    unaff_s9 = -unaff_s8;
    if (4 < uVar11 - 0x13) {
      unaff_s9 = fVar1;
    }
    if (unaff_x24 == (long *)0x0) break;
    param_1 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          param_1 = param_1 + (long)(*piVar10 + 9) * 0x10;
          goto code_r0x05befb58;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(unaff_x24,*unaff_x26,9);
  }
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


