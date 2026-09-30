/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionEnd
ENTRY_POINT: 06af2e74
PROGRAM: Waifu-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_13;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06af3288) */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionEnd(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fStack000000000000000c;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  FUN_0335b6c8(param_1 + 0x498,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cc4b8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cc7a8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c2e90,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083c33e0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083cc870,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee720,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ee728,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x19 + 0x4c5) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if ((*(long *)(unaff_x20 + 0x20) == 0) ||
     (plVar7 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x58), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_083c2e90) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_06af2f84;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083c2e90,0);
LAB_06af2f84:
  plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
  fVar2 = DAT_012eda00;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  fStack000000000000000c = DAT_012ed948;
  do {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cc870) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06af300c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083cc870,0);
LAB_06af300c:
    uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_06af321c;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083c33e0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06af3068;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083c33e0,0);
LAB_06af3068:
    auVar16 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if (auVar16._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    plVar8 = *(long **)(unaff_x20 + 0x30);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar4 = *plVar8;
    uVar1 = *(undefined4 *)(auVar16._0_8_ + 0x10);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cc4b8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_06af30d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c(plVar8,DAT_083cc4b8,4);
LAB_06af30d8:
    uVar5 = (*(code *)*puVar3)(plVar8,uVar1,&stack0x00000010,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar5 = in_stack_00000010 >> 0x20;
      uVar12 = in_stack_00000018 & 0xffffffff;
      uVar10 = FUN_07a17248(in_stack_00000010 & 0xffffffff,uVar5,uVar12,*(long *)(unaff_x20 + 0x38),
                            0);
      fVar9 = auVar16._12_4_;
      if (auVar16._8_4_ <= fVar9) {
        fVar15 = 1.0;
        fVar9 = 0.0;
LAB_06af318c:
        fVar14 = 0.0;
        fVar11 = 1.0;
      }
      else {
        if (fVar9 <= 0.0) {
          fVar9 = 1.0;
          fVar15 = 0.0;
          goto LAB_06af318c;
        }
        fVar9 = (auVar16._8_4_ / fVar9) * 0.5;
        fVar11 = fVar9;
        if (1.0 < fVar9) {
          fVar11 = 1.0;
        }
        if (fVar9 < 0.0) {
          fVar11 = 0.0;
        }
        fVar9 = fVar11 * 0.0 + 1.0;
        fVar15 = fStack000000000000000c - fVar11 * fStack000000000000000c;
        fVar14 = fVar2 - fVar11 * fVar2;
        fVar11 = fVar9;
      }
      fVar13 = *(float *)(unaff_x20 + 0x40);
      if (*(int *)(DAT_083ca498 + 0xe0) == 0) {
        FUN_033b9870();
      }
      lVar4 = *(long *)(DAT_083ca498 + 0xb8);
      *(float *)(lVar4 + 0x18) = fVar11;
      *(float *)(lVar4 + 0x1c) = fVar13 * 0.5;
      *(float *)(lVar4 + 0xc) = fVar9;
      *(float *)(lVar4 + 0x10) = fVar15;
      *(float *)(lVar4 + 0x14) = fVar14;
      OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata__FixJointPairEndPositionHand
                (uVar10,uVar5,uVar12,0,0);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06af3238;
    }
  }
LAB_06af321c:
  puVar3 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083cc7a8,0);
LAB_06af3238:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return;
}


