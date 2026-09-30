/*
FUNCTION_NAME: OVRPlugin.Vector3f$$ToString
ENTRY_POINT: 07c9a558
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector3f__ToString
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar6;
  long unaff_x25;
  uint uVar7;
  long unaff_x26;
  undefined4 *puVar8;
  uint *unaff_x28;
  uint *unaff_x29;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float unaff_s15;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  do {
    *unaff_x28 = (uint)param_3;
    *unaff_x29 = (uint)param_4;
    do {
      while( true ) {
        lVar4 = *(long *)(unaff_x19 + 0x158);
        if (lVar4 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
          lVar4 = *(long *)(unaff_x19 + 0xe0);
        }
        else {
          lVar4 = *(long *)(unaff_x19 + 0xd8);
        }
        if (lVar4 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_07c9a864;
        FUN_07c1e698(lVar4,0);
        lVar4 = *(long *)(unaff_x19 + 0x148);
        if (lVar4 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        if (unaff_x21 == 0) goto LAB_07c9a864;
        uVar7 = (uint)unaff_x26;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        lVar5 = unaff_x21 + unaff_x26 * 0x10;
        fVar16 = *(float *)(lVar4 + 0x24);
        fVar20 = *(float *)(lVar4 + 0x28);
        fVar24 = *(float *)(lVar4 + 0x2c);
        uVar11 = FUN_09516694(*(undefined4 *)(lVar4 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
        *(undefined4 *)(lVar5 + 0x20) = uVar11;
        *(float *)(lVar5 + 0x24) = fVar16;
        *(float *)(lVar5 + 0x28) = fVar20;
        *(float *)(lVar5 + 0x2c) = fVar24;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
        lVar4 = *(long *)(unaff_x19 + 0x150);
        if (lVar4 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        unaff_w20 = unaff_w20 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar11;
        *(float *)(lVar4 + 0x24) = fVar16;
        *(float *)(lVar4 + 0x28) = fVar20;
        *(float *)(lVar4 + 0x2c) = fVar24;
        lVar4 = *unaff_x22;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar4 = *unaff_x22;
        }
        if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_07c9a864;
        if (*(int *)(**(long **)(lVar4 + 0xb8) + 0x18) <= (int)unaff_w20) {
          return;
        }
        lVar4 = *(long *)(unaff_x19 + 0x158);
        if (lVar4 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        unaff_x25 = (long)(int)unaff_w20;
        iVar1 = *(int *)(lVar4 + unaff_x25 * 4 + 0x20);
        fVar9 = (float)FUN_07c9ab68();
        if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_07c9a864;
        if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) goto LAB_07c9a860;
        lVar4 = *unaff_x22;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar4 = *unaff_x22;
        }
        plVar3 = *(long **)(lVar4 + 0xb8);
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        uVar7 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
        unaff_x26 = (long)(int)uVar7;
        if (iVar1 != 1) break;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          plVar3 = *(long **)(*unaff_x22 + 0xb8);
        }
        lVar4 = plVar3[3];
        if (lVar4 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        lVar5 = *unaff_x23;
        cVar2 = *(char *)(lVar4 + unaff_x25 + 0x20);
        if (cVar2 != '\0') {
          unaff_s15 = 0.0;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar5 = *unaff_x23;
        }
        lVar4 = *(long *)(lVar5 + 0xb8);
        fVar18 = *(float *)(lVar4 + 0x3c);
        fVar13 = *(float *)(lVar4 + 0x40);
        fVar29 = *(float *)(lVar4 + 0x24);
        fVar28 = *(float *)(lVar4 + 0x28);
        fVar22 = *(float *)(lVar4 + 0x2c);
        fVar14 = *(float *)(lVar4 + 0x44);
        fVar23 = unaff_s15 * fVar22 * -90.0;
        fVar15 = unaff_s15 * fVar28 * -90.0 * in_stack_00000050;
        fVar19 = fVar23 * in_stack_00000050;
        fVar10 = (float)FUN_09516910(unaff_s15 * fVar29 * -90.0 * in_stack_00000050,0);
        fVar27 = (fVar16 * fVar19 + fVar24 * fVar10 + fVar9 * fVar23) - fVar20 * fVar15;
        fVar26 = (fVar20 * fVar10 + fVar24 * fVar15 + fVar16 * fVar23) - fVar9 * fVar19;
        fVar25 = (fVar9 * fVar15 + fVar24 * fVar19 + fVar20 * fVar23) - fVar16 * fVar10;
        fVar16 = ((fVar24 * fVar23 - fVar9 * fVar10) - fVar16 * fVar15) - fVar20 * fVar19;
        fStack0000000000000058 = fVar27;
        fStack000000000000005c = fVar26;
        fStack0000000000000060 = fVar25;
        fStack0000000000000064 = fVar16;
        if (unaff_x21 == 0) goto LAB_07c9a864;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
        fVar20 = (float)FUN_07c9ad28(unaff_x21 + unaff_x26 * 0x10 + 0x20,&stack0x00000058);
        if (unaff_s15 <= fVar20) {
          unaff_s15 = fVar20;
        }
        if (fVar20 < 0.0) {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          puVar6 = (undefined4 *)(lVar4 + 0x20);
          uVar11 = *puVar6;
          puVar8 = (undefined4 *)(lVar4 + 0x24);
          uVar12 = *puVar8;
          unaff_x28 = (uint *)(lVar4 + 0x28);
          uVar17 = *unaff_x28;
          unaff_x29 = (uint *)(lVar4 + 0x2c);
          uVar21 = *unaff_x29;
          goto LAB_07c9a53c;
        }
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          fVar10 = *(float *)(lVar4 + 0x20);
          fVar15 = *(float *)(lVar4 + 0x24);
          fVar19 = *(float *)(lVar4 + 0x28);
          fVar23 = *(float *)(lVar4 + 0x2c);
          fVar24 = fVar15;
          fVar9 = fVar19;
          uVar11 = FUN_09516eb8(0);
          uVar12 = FUN_09516eb8(fVar27,fVar26,fVar25,fVar16,fVar29,fVar28,fVar22,0);
          FUN_09516eb8(0);
          fVar24 = (float)FUN_0770668c(uVar11,fVar24,fVar9,uVar12,fVar26,fVar25,0);
          fVar20 = fVar20 * *(float *)(unaff_x19 + 0xb0);
          fVar16 = fVar20;
          if (1.0 < fVar20) {
            fVar16 = 1.0;
          }
          fVar16 = 1.0 - fVar16;
          if (fVar20 < 0.0) {
            fVar16 = 1.0;
          }
          fVar13 = fVar13 * fVar24 * fVar16;
          fVar20 = fVar13 * in_stack_00000050;
          fVar9 = fVar14 * fVar24 * fVar16 * in_stack_00000050;
          fVar16 = (float)FUN_09516910(fVar18 * fVar24 * fVar16 * in_stack_00000050,0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
          *(float *)(lVar4 + 0x20) =
               (fVar15 * fVar9 + fVar23 * fVar16 + fVar10 * fVar13) - fVar19 * fVar20;
          *(float *)(lVar4 + 0x24) =
               (fVar19 * fVar16 + fVar23 * fVar20 + fVar15 * fVar13) - fVar10 * fVar9;
          *(float *)(lVar4 + 0x28) =
               (fVar10 * fVar20 + fVar23 * fVar9 + fVar19 * fVar13) - fVar15 * fVar16;
          *(float *)(lVar4 + 0x2c) =
               ((fVar23 * fVar13 - fVar10 * fVar16) - fVar15 * fVar20) - fVar19 * fVar9;
        }
      }
    } while (iVar1 != 2);
    if (unaff_x21 == 0) {
LAB_07c9a864:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) {
LAB_07c9a860:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar4 = unaff_x21 + unaff_x26 * 0x10;
    puVar6 = (undefined4 *)(lVar4 + 0x20);
    uVar11 = *puVar6;
    puVar8 = (undefined4 *)(lVar4 + 0x24);
    uVar12 = *puVar8;
    unaff_x28 = (uint *)(lVar4 + 0x28);
    uVar17 = *unaff_x28;
    unaff_x29 = (uint *)(lVar4 + 0x2c);
    uVar21 = *unaff_x29;
LAB_07c9a53c:
    param_4 = (ulong)uVar21;
    param_3 = (ulong)uVar17;
    uVar11 = FUN_09516694(uVar11,0);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar7) goto LAB_07c9a860;
    *puVar6 = uVar11;
    *puVar8 = uVar12;
  } while( true );
}


