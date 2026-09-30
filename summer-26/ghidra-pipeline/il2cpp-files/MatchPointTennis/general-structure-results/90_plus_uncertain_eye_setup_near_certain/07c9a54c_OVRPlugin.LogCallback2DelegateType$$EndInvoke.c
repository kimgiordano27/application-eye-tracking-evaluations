/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 07c9a54c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke
               (undefined4 param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  char cVar2;
  undefined1 in_CY;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *unaff_x24;
  long unaff_x25;
  uint uVar6;
  long unaff_x26;
  uint *unaff_x27;
  uint *unaff_x28;
  uint *unaff_x29;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float unaff_s15;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  while (!(bool)in_CY) {
    *unaff_x24 = param_1;
    *unaff_x27 = (uint)param_2;
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
        uVar6 = (uint)unaff_x26;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        lVar5 = unaff_x21 + unaff_x26 * 0x10;
        fVar15 = *(float *)(lVar4 + 0x24);
        fVar19 = *(float *)(lVar4 + 0x28);
        fVar23 = *(float *)(lVar4 + 0x2c);
        uVar9 = FUN_09516694(*(undefined4 *)(lVar4 + 0x20),0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
        *(undefined4 *)(lVar5 + 0x20) = uVar9;
        *(float *)(lVar5 + 0x24) = fVar15;
        *(float *)(lVar5 + 0x28) = fVar19;
        *(float *)(lVar5 + 0x2c) = fVar23;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
        lVar4 = *(long *)(unaff_x19 + 0x150);
        if (lVar4 == 0) goto LAB_07c9a864;
        if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_07c9a860;
        lVar4 = lVar4 + unaff_x25 * 0x10;
        unaff_w20 = unaff_w20 + 1;
        *(undefined4 *)(lVar4 + 0x20) = uVar9;
        *(float *)(lVar4 + 0x24) = fVar15;
        *(float *)(lVar4 + 0x28) = fVar19;
        *(float *)(lVar4 + 0x2c) = fVar23;
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
        fVar7 = (float)FUN_07c9ab68();
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
        uVar6 = *(uint *)(lVar5 + unaff_x25 * 4 + 0x20);
        unaff_x26 = (long)(int)uVar6;
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
        fVar17 = *(float *)(lVar4 + 0x3c);
        fVar12 = *(float *)(lVar4 + 0x40);
        fVar28 = *(float *)(lVar4 + 0x24);
        fVar27 = *(float *)(lVar4 + 0x28);
        fVar21 = *(float *)(lVar4 + 0x2c);
        fVar13 = *(float *)(lVar4 + 0x44);
        fVar22 = unaff_s15 * fVar21 * -90.0;
        fVar14 = unaff_s15 * fVar27 * -90.0 * in_stack_00000050;
        fVar18 = fVar22 * in_stack_00000050;
        fVar8 = (float)FUN_09516910(unaff_s15 * fVar28 * -90.0 * in_stack_00000050,0);
        fVar26 = (fVar15 * fVar18 + fVar23 * fVar8 + fVar7 * fVar22) - fVar19 * fVar14;
        fVar25 = (fVar19 * fVar8 + fVar23 * fVar14 + fVar15 * fVar22) - fVar7 * fVar18;
        fVar24 = (fVar7 * fVar14 + fVar23 * fVar18 + fVar19 * fVar22) - fVar15 * fVar8;
        fVar15 = ((fVar23 * fVar22 - fVar7 * fVar8) - fVar15 * fVar14) - fVar19 * fVar18;
        fStack0000000000000058 = fVar26;
        fStack000000000000005c = fVar25;
        fStack0000000000000060 = fVar24;
        fStack0000000000000064 = fVar15;
        if (unaff_x21 == 0) goto LAB_07c9a864;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
        fVar19 = (float)FUN_07c9ad28(unaff_x21 + unaff_x26 * 0x10 + 0x20,&stack0x00000058);
        if (unaff_s15 <= fVar19) {
          unaff_s15 = fVar19;
        }
        if (fVar19 < 0.0) {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          unaff_x24 = (undefined4 *)(lVar4 + 0x20);
          uVar9 = *unaff_x24;
          unaff_x27 = (uint *)(lVar4 + 0x24);
          uVar11 = *unaff_x27;
          unaff_x28 = (uint *)(lVar4 + 0x28);
          uVar16 = *unaff_x28;
          unaff_x29 = (uint *)(lVar4 + 0x2c);
          uVar20 = *unaff_x29;
          goto LAB_07c9a53c;
        }
        if (cVar2 != '\0') {
          if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
          lVar4 = unaff_x21 + unaff_x26 * 0x10;
          fVar8 = *(float *)(lVar4 + 0x20);
          fVar14 = *(float *)(lVar4 + 0x24);
          fVar18 = *(float *)(lVar4 + 0x28);
          fVar22 = *(float *)(lVar4 + 0x2c);
          fVar23 = fVar14;
          fVar7 = fVar18;
          uVar9 = FUN_09516eb8(0);
          uVar10 = FUN_09516eb8(fVar26,fVar25,fVar24,fVar15,fVar28,fVar27,fVar21,0);
          FUN_09516eb8(0);
          fVar23 = (float)FUN_0770668c(uVar9,fVar23,fVar7,uVar10,fVar25,fVar24,0);
          fVar19 = fVar19 * *(float *)(unaff_x19 + 0xb0);
          fVar15 = fVar19;
          if (1.0 < fVar19) {
            fVar15 = 1.0;
          }
          fVar15 = 1.0 - fVar15;
          if (fVar19 < 0.0) {
            fVar15 = 1.0;
          }
          fVar12 = fVar12 * fVar23 * fVar15;
          fVar19 = fVar12 * in_stack_00000050;
          fVar7 = fVar13 * fVar23 * fVar15 * in_stack_00000050;
          fVar15 = (float)FUN_09516910(fVar17 * fVar23 * fVar15 * in_stack_00000050,0);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar6) goto LAB_07c9a860;
          *(float *)(lVar4 + 0x20) =
               (fVar14 * fVar7 + fVar22 * fVar15 + fVar8 * fVar12) - fVar18 * fVar19;
          *(float *)(lVar4 + 0x24) =
               (fVar18 * fVar15 + fVar22 * fVar19 + fVar14 * fVar12) - fVar8 * fVar7;
          *(float *)(lVar4 + 0x28) =
               (fVar8 * fVar19 + fVar22 * fVar7 + fVar18 * fVar12) - fVar14 * fVar15;
          *(float *)(lVar4 + 0x2c) =
               ((fVar22 * fVar12 - fVar8 * fVar15) - fVar14 * fVar19) - fVar18 * fVar7;
        }
      }
    } while (iVar1 != 2);
    if (unaff_x21 == 0) {
LAB_07c9a864:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(unaff_x21 + 0x18) <= uVar6) break;
    lVar4 = unaff_x21 + unaff_x26 * 0x10;
    unaff_x24 = (undefined4 *)(lVar4 + 0x20);
    uVar9 = *unaff_x24;
    unaff_x27 = (uint *)(lVar4 + 0x24);
    uVar11 = *unaff_x27;
    unaff_x28 = (uint *)(lVar4 + 0x28);
    uVar16 = *unaff_x28;
    unaff_x29 = (uint *)(lVar4 + 0x2c);
    uVar20 = *unaff_x29;
LAB_07c9a53c:
    param_4 = (ulong)uVar20;
    param_3 = (ulong)uVar16;
    param_2 = (ulong)uVar11;
    param_1 = FUN_09516694(uVar9,0);
    in_CY = *(uint *)(unaff_x21 + 0x18) <= uVar6;
  }
LAB_07c9a860:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


