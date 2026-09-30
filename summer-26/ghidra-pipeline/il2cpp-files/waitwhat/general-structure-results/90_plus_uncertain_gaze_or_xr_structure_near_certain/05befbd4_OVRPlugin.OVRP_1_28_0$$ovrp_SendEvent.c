/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 05befbd4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(long param_1)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  uint uVar9;
  ulong unaff_x21;
  uint unaff_w22;
  long *plVar10;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar11;
  float fVar12;
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
    *(uint *)(unaff_x23 + 0x10) = unaff_w22;
    *(int *)(unaff_x23 + 0x14) = (int)unaff_x21;
    *(long *)(unaff_x23 + 0x18) = unaff_x24;
    *(undefined8 *)(unaff_x23 + 0x20) = unaff_x25;
    if (param_1 == 0) break;
    lVar5 = *(long *)(param_1 + 0x10);
    lVar7 = *unaff_x29;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar9 = *(uint *)(param_1 + 0x18);
    if (uVar9 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar9 + 1;
      *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20) = unaff_x23;
    }
    else {
      FUN_042e4a64(param_1,unaff_x23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    do {
      unaff_x21 = unaff_x21 + 1;
      if (unaff_x21 == 0x18) {
        FUN_05bf02a4();
        lVar5 = *(long *)(unaff_x19 + 0x58);
        *(undefined1 *)(unaff_x19 + 0x81) = 1;
        if (lVar5 != 0) {
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        goto LAB_05befc8c;
      }
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar5 = *unaff_x27;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 == 0) goto LAB_05befc8c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_05befc90;
      unaff_w22 = *(uint *)(lVar5 + unaff_x21 * 4 + 0x20);
    } while ((unaff_w22 == 0xffffffff) ||
            (uVar9 = (uint)unaff_x21,
            (*(uint *)(unaff_x19 + 0x50) >> (ulong)(uVar9 & 0x1f) & 1) == 0));
    plVar10 = *(long **)(unaff_x19 + 0x38);
    if (plVar10 == (long *)0x0) break;
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_05bef9f0;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar10,*unaff_x26,9);
LAB_05bef9f0:
    (*(code *)*puVar2)(plVar10,unaff_w22,&stack0x00000050,puVar2[1]);
    uVar6 = FUN_05befca0();
    if ((uVar6 & 1) == 0) {
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      lVar5 = FUN_05befd48();
      plVar10 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = lVar5;
      if (plVar10 == (long *)0x0) break;
      if ((lVar5 != 0) &&
         (lVar7 = thunk_FUN_031c3cac(lVar5,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
        uVar3 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar3,0);
      }
      if (*(uint *)(plVar10 + 3) <= unaff_w22) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      plVar10[(long)(int)unaff_w22 + 4] = lVar5;
    }
    uStack000000000000000c = unaff_w22;
    uVar3 = thunk_FUN_031c39fc(*unaff_x28,(long)&stack0x00000008 + 4);
    uStack0000000000000008 = uVar9;
    uVar4 = thunk_FUN_031c39fc(*unaff_x28,&stack0x00000008);
    FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar3,uVar4,0);
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    fVar11 = (float)FUN_05beff08(*(long *)(unaff_x19 + 0x40),unaff_w22);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    fVar1 = fVar11;
    if (unaff_w22 != 0) {
      fVar1 = unaff_s10;
    }
    plVar10 = *(long **)(unaff_x19 + 0x38);
    fVar12 = -fVar11;
    if (4 < uVar9 - 0x13) {
      fVar12 = fVar1;
    }
    if (plVar10 == (long *)0x0) break;
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_05befb5c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(plVar10,*unaff_x26,9);
LAB_05befb5c:
    (*(code *)*puVar2)(plVar10,unaff_x21 & 0xffffffff,&stack0x00000030,puVar2[1]);
    unaff_x24 = in_stack_00000078;
    if (in_stack_00000078 == 0) break;
    FUN_069d3a80(in_stack_00000078,0);
    unaff_x25 = FUN_05befff8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar11,
                             fVar12);
    unaff_x23 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_07116ca8);
    FUN_05971910(unaff_x23,0);
    param_1 = *(long *)(unaff_x19 + 0x68);
  }
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


