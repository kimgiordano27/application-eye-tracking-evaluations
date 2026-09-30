/*
FUNCTION_NAME: OVRPlugin.OVRP_1_45_0$$ovrp_Media_SetAvailableQueueIndexVulkan
ENTRY_POINT: 05d3f64c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_45_0__ovrp_Media_SetAvailableQueueIndexVulkan
               (ulong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  uint *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined4 *unaff_x27;
  undefined4 *unaff_x28;
  undefined4 *unaff_x29;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s15;
  float in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  
FUN_05d3f7ec:
  do {
    uVar9 = FUN_068eca84(param_1,0);
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x26) {
LAB_05d3fb10:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *unaff_x24 = uVar9;
    *unaff_x27 = param_2;
    *unaff_x28 = param_3;
    *unaff_x29 = param_4;
    do {
      while( true ) {
        lVar4 = *(long *)(unaff_x19 + 0x158);
        if (lVar4 == 0) goto LAB_05d3fb14;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
          lVar4 = *(long *)(unaff_x19 + 0xe0);
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0xd8);
        }
        if (lVar4 == 0) goto LAB_05d3fb14;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_05d3fb14;
        FUN_05cc45d8(lVar4,0);
        lVar4 = *(long *)(unaff_x19 + 0x148);
        if (lVar4 == 0) goto LAB_05d3fb14;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        if (unaff_x20 == 0) goto LAB_05d3fb14;
        uVar9 = (uint)unaff_x26;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        lVar5 = unaff_x20 + unaff_x26 * 0x10;
        uVar14 = *(undefined4 *)(lVar4 + 0x24);
        uVar17 = *(undefined4 *)(lVar4 + 0x28);
        uVar20 = *(undefined4 *)(lVar4 + 0x2c);
        uVar10 = FUN_068eca84(*(undefined4 *)(lVar4 + 0x20),0);
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
        *(undefined4 *)(lVar5 + 0x20) = uVar10;
        *(undefined4 *)(lVar5 + 0x24) = uVar14;
        *(undefined4 *)(lVar5 + 0x28) = uVar17;
        *(undefined4 *)(lVar5 + 0x2c) = uVar20;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
        lVar4 = *(long *)(unaff_x19 + 0x150);
        if (lVar4 == 0) goto LAB_05d3fb14;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        unaff_w21 = unaff_w21 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar10;
        *(undefined4 *)(lVar4 + 0x24) = uVar14;
        *(undefined4 *)(lVar4 + 0x28) = uVar17;
        *(undefined4 *)(lVar4 + 0x2c) = uVar20;
        lVar4 = *unaff_x22;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar4 = *unaff_x22;
        }
        plVar3 = *(long **)(lVar4 + 0xb8);
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_05d3fb14;
        if (*(int *)(lVar5 + 0x18) <= (int)unaff_w21) {
          return;
        }
        lVar6 = *(long *)(unaff_x19 + 0x158);
        if (lVar6 == 0) goto LAB_05d3fb14;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        lVar7 = *(long *)(unaff_x19 + 0x140);
        if (lVar7 == 0) goto LAB_05d3fb14;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_05d3fb14;
        if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        unaff_x25 = (long)(int)unaff_w21;
        lVar7 = lVar7 + unaff_x25 * 0x10;
        iVar1 = *(int *)(lVar6 + unaff_x25 * 4 + 0x20);
        fVar26 = *(float *)(lVar7 + 0x20);
        fVar24 = *(float *)(lVar7 + 0x24);
        fVar21 = *(float *)(lVar7 + 0x28);
        fVar22 = *(float *)(lVar7 + 0x2c);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar4 = *unaff_x22;
          plVar3 = *(long **)(lVar4 + 0xb8);
          lVar5 = *plVar3;
          if (lVar5 == 0) goto LAB_05d3fb14;
        }
        if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        uVar9 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
        unaff_x26 = (long)(int)uVar9;
        if (iVar1 != 1) break;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          plVar3 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar4 = plVar3[3];
        if (lVar4 == 0) goto LAB_05d3fb14;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w21) goto LAB_05d3fb10;
        lVar5 = *unaff_x23;
        cVar2 = *(char *)(lVar4 + unaff_x25 + 0x20);
        if (cVar2 != '\0') {
          unaff_s15 = 0.0;
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar5 = *unaff_x23;
        }
        lVar4 = *(long *)(lVar5 + 0xb8);
        fVar15 = *(float *)(lVar4 + 0x3c);
        fVar11 = *(float *)(lVar4 + 0x40);
        fVar29 = *(float *)(lVar4 + 0x24);
        fVar28 = *(float *)(lVar4 + 0x28);
        fVar18 = *(float *)(lVar4 + 0x2c);
        fVar12 = *(float *)(lVar4 + 0x44);
        fVar19 = unaff_s15 * fVar18 * -90.0;
        fVar13 = unaff_s15 * fVar28 * -90.0 * in_stack_00000058;
        fVar16 = fVar19 * in_stack_00000058;
        fVar8 = (float)FUN_068ecdd4(unaff_s15 * fVar29 * -90.0 * in_stack_00000058,0);
        fVar27 = (fVar24 * fVar16 + fVar22 * fVar8 + fVar26 * fVar19) - fVar21 * fVar13;
        fVar25 = (fVar21 * fVar8 + fVar22 * fVar13 + fVar24 * fVar19) - fVar26 * fVar16;
        fVar23 = (fVar26 * fVar13 + fVar22 * fVar16 + fVar21 * fVar19) - fVar24 * fVar8;
        fVar21 = ((fVar22 * fVar19 - fVar26 * fVar8) - fVar24 * fVar13) - fVar21 * fVar16;
        fStack0000000000000060 = fVar27;
        fStack0000000000000064 = fVar25;
        fStack0000000000000068 = fVar23;
        fStack000000000000006c = fVar21;
        if (unaff_x20 == 0) goto LAB_05d3fb14;
        if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
        fVar22 = (float)FUN_05d3fe18(unaff_x20 + unaff_x26 * 0x10 + 0x20,&stack0x00000060);
        if (unaff_s15 <= fVar22) {
          unaff_s15 = fVar22;
        }
        if (fVar22 < 0.0) {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          unaff_x24 = (uint *)(lVar4 + 0x20);
          param_1 = (ulong)*unaff_x24;
          unaff_x27 = (undefined4 *)(lVar4 + 0x24);
          param_2 = *unaff_x27;
          unaff_x28 = (undefined4 *)(lVar4 + 0x28);
          param_3 = *unaff_x28;
          unaff_x29 = (undefined4 *)(lVar4 + 0x2c);
          param_4 = *unaff_x29;
          goto FUN_05d3f7ec;
        }
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
          lVar4 = unaff_x20 + unaff_x26 * 0x10;
          fVar8 = *(float *)(lVar4 + 0x20);
          fVar13 = *(float *)(lVar4 + 0x24);
          fVar16 = *(float *)(lVar4 + 0x28);
          fVar19 = *(float *)(lVar4 + 0x2c);
          fVar24 = fVar13;
          fVar26 = fVar16;
          uVar10 = FUN_068ed2ec(0);
          uVar14 = FUN_068ed2ec(fVar27,fVar25,fVar23,fVar21,fVar29,fVar28,fVar18,0);
          FUN_068ed2ec(0);
          fVar24 = (float)FUN_031e4528(uVar10,fVar24,fVar26,uVar14,fVar25,fVar23,0);
          fVar22 = fVar22 * *(float *)(unaff_x19 + 0xb0);
          fVar21 = fVar22;
          if (1.0 < fVar22) {
            fVar21 = 1.0;
          }
          fVar21 = 1.0 - fVar21;
          if (fVar22 < 0.0) {
            fVar21 = 1.0;
          }
          fVar11 = fVar11 * fVar24 * fVar21;
          fVar22 = fVar11 * in_stack_00000058;
          fVar26 = fVar12 * fVar24 * fVar21 * in_stack_00000058;
          fVar21 = (float)FUN_068ecdd4(fVar15 * fVar24 * fVar21 * in_stack_00000058,0);
          if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
          *(float *)(lVar4 + 0x20) =
               (fVar13 * fVar26 + fVar19 * fVar21 + fVar8 * fVar11) - fVar16 * fVar22;
          *(float *)(lVar4 + 0x24) =
               (fVar16 * fVar21 + fVar19 * fVar22 + fVar13 * fVar11) - fVar8 * fVar26;
          *(float *)(lVar4 + 0x28) =
               (fVar8 * fVar22 + fVar19 * fVar26 + fVar16 * fVar11) - fVar13 * fVar21;
          *(float *)(lVar4 + 0x2c) =
               ((fVar19 * fVar11 - fVar8 * fVar21) - fVar13 * fVar22) - fVar16 * fVar26;
        }
      }
    } while (iVar1 != 2);
    if (unaff_x20 == 0) {
LAB_05d3fb14:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= uVar9) goto LAB_05d3fb10;
    lVar4 = unaff_x20 + unaff_x26 * 0x10;
    unaff_x24 = (uint *)(lVar4 + 0x20);
    param_1 = (ulong)*unaff_x24;
    unaff_x27 = (undefined4 *)(lVar4 + 0x24);
    param_2 = *unaff_x27;
    unaff_x28 = (undefined4 *)(lVar4 + 0x28);
    param_3 = *unaff_x28;
    unaff_x29 = (undefined4 *)(lVar4 + 0x2c);
    param_4 = *unaff_x29;
  } while( true );
}


