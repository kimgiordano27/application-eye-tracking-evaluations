/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetAppAsymmetricFov
ENTRY_POINT: 05befa60
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


void OVRPlugin_OVRP_1_21_0__ovrp_GetAppAsymmetricFov(long param_1)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  int iVar12;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long *plVar13;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar14;
  float fVar15;
  float unaff_s10;
  int iStack0000000000000008;
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
  
  do {
    if (param_1 == 0) {
      uVar3 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar3,0);
    }
    do {
      if (*(uint *)(unaff_x24 + 3) <= unaff_w22) {
LAB_05befc90:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      unaff_x24[(long)(int)unaff_w22 + 4] = unaff_x23;
      do {
        uStack000000000000000c = unaff_w22;
        uVar3 = thunk_FUN_031c39fc(*unaff_x28,(long)&stack0x00000008 + 4);
        iVar12 = (int)unaff_x21;
        iStack0000000000000008 = iVar12;
        uVar4 = thunk_FUN_031c39fc(*unaff_x28,&stack0x00000008);
        FUN_057c02e8(*(undefined8 *)PTR_DAT_07116ce8,uVar3,uVar4,0);
        if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_05befc8c;
        fVar14 = (float)FUN_05beff08(*(long *)(unaff_x19 + 0x40),unaff_w22);
        if (*(int *)(*unaff_x27 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        fVar2 = fVar14;
        if (unaff_w22 != 0) {
          fVar2 = unaff_s10;
        }
        plVar13 = *(long **)(unaff_x19 + 0x38);
        fVar15 = -fVar14;
        if (4 < iVar12 - 0x13U) {
          fVar15 = fVar2;
        }
        if (plVar13 == (long *)0x0) goto LAB_05befc8c;
        lVar8 = *plVar13;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
              goto LAB_05befb5c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x26,9);
LAB_05befb5c:
        (*(code *)*puVar5)(plVar13,unaff_x21 & 0xffffffff,&stack0x00000030,puVar5[1]);
        lVar8 = in_stack_00000078;
        if (in_stack_00000078 == 0) goto LAB_05befc8c;
        FUN_069d3a80(in_stack_00000078,0);
        uVar3 = FUN_05befff8(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                             uStack0000000000000030,uStack0000000000000034,in_stack_00000038,fVar14,
                             fVar15);
        lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)PTR_DAT_07116ca8);
        FUN_05971910(lVar6,0);
        lVar7 = *(long *)(unaff_x19 + 0x68);
        *(uint *)(lVar6 + 0x10) = unaff_w22;
        *(int *)(lVar6 + 0x14) = iVar12;
        *(long *)(lVar6 + 0x18) = lVar8;
        *(undefined8 *)(lVar6 + 0x20) = uVar3;
        if (lVar7 == 0) goto LAB_05befc8c;
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar10 = *unaff_x29;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_05befc8c;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
        }
        else {
          FUN_042e4a64(lVar7,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        do {
          unaff_x21 = unaff_x21 + 1;
          if (unaff_x21 == 0x18) {
            FUN_05bf02a4();
            lVar8 = *(long *)(unaff_x19 + 0x58);
            *(undefined1 *)(unaff_x19 + 0x81) = 1;
            if (lVar8 != 0) {
              (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
              return;
            }
            goto LAB_05befc8c;
          }
          lVar8 = *unaff_x27;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_031e5338();
            lVar8 = *unaff_x27;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
          if (lVar8 == 0) goto LAB_05befc8c;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x21) goto LAB_05befc90;
          unaff_w22 = *(uint *)(lVar8 + unaff_x21 * 4 + 0x20);
        } while ((unaff_w22 == 0xffffffff) ||
                ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)unaff_x21 & 0x1f) & 1) == 0));
        plVar13 = *(long **)(unaff_x19 + 0x38);
        if (plVar13 == (long *)0x0) goto LAB_05befc8c;
        lVar8 = *plVar13;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
              goto LAB_05bef9f0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_031c0d08(plVar13,*unaff_x26,9);
LAB_05bef9f0:
        (*(code *)*puVar5)(plVar13,unaff_w22,&stack0x00000050,puVar5[1]);
        uVar9 = FUN_05befca0();
      } while ((uVar9 & 1) != 0);
      in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_00000018 = in_stack_00000058;
      uStack0000000000000024 = uStack0000000000000064;
      uStack0000000000000020 = uStack0000000000000060;
      unaff_x23 = FUN_05befd48();
      unaff_x24 = *(long **)(unaff_x19 + 0x78);
      in_stack_00000078 = unaff_x23;
      if (unaff_x24 == (long *)0x0) {
LAB_05befc8c:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    } while (unaff_x23 == 0);
    param_1 = thunk_FUN_031c3cac(unaff_x23,*(undefined8 *)(*unaff_x24 + 0x40));
  } while( true );
}


