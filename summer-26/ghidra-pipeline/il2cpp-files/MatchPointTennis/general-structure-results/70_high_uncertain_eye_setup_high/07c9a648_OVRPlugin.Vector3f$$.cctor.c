/*
FUNCTION_NAME: OVRPlugin.Vector3f$$.cctor
ENTRY_POINT: 07c9a648
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector3f___cctor
               (long param_1,undefined4 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint in_w9;
  long lVar7;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 *puVar8;
  long unaff_x25;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s15;
  float in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  
  while( true ) {
    fVar15 = (float)param_4;
    fVar32 = (float)param_3;
    fVar16 = (float)param_5;
    if (in_w9 <= unaff_w20) break;
    param_1 = param_1 + unaff_x25 * 0x10;
    unaff_w20 = unaff_w20 + 1;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(float *)(param_1 + 0x24) = fVar32;
    *(float *)(param_1 + 0x28) = fVar15;
    *(float *)(param_1 + 0x2c) = fVar16;
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
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    unaff_x25 = (long)(int)unaff_w20;
    iVar1 = *(int *)(lVar4 + unaff_x25 * 4 + 0x20);
    fVar12 = (float)FUN_07c9ab68();
    if (*(long *)(unaff_x19 + 0xd0) == 0) goto LAB_07c9a864;
    if (*(uint *)(*(long *)(unaff_x19 + 0xd0) + 0x18) <= unaff_w20) break;
    lVar4 = *unaff_x22;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar4 = *unaff_x22;
    }
    plVar6 = *(long **)(lVar4 + 0xb8);
    lVar7 = *plVar6;
    if (lVar7 == 0) goto LAB_07c9a864;
    if (*(uint *)(lVar7 + 0x18) <= unaff_w20) break;
    uVar3 = *(uint *)(lVar7 + unaff_x25 * 4 + 0x20);
    lVar7 = (long)(int)uVar3;
    if (iVar1 == 1) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        plVar6 = *(long **)(*unaff_x22 + 0xb8);
      }
      lVar4 = plVar6[3];
      if (lVar4 == 0) goto LAB_07c9a864;
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
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
      fVar22 = *(float *)(lVar4 + 0x3c);
      fVar18 = *(float *)(lVar4 + 0x40);
      fVar31 = *(float *)(lVar4 + 0x24);
      fVar30 = *(float *)(lVar4 + 0x28);
      fVar25 = *(float *)(lVar4 + 0x2c);
      fVar19 = *(float *)(lVar4 + 0x44);
      fVar26 = unaff_s15 * fVar25 * -90.0;
      fVar20 = unaff_s15 * fVar30 * -90.0 * in_stack_00000050;
      fVar23 = fVar26 * in_stack_00000050;
      fVar14 = (float)FUN_09516910(unaff_s15 * fVar31 * -90.0 * in_stack_00000050,0);
      fVar29 = (fVar32 * fVar23 + fVar16 * fVar14 + fVar12 * fVar26) - fVar15 * fVar20;
      fVar28 = (fVar15 * fVar14 + fVar16 * fVar20 + fVar32 * fVar26) - fVar12 * fVar23;
      fVar27 = (fVar12 * fVar20 + fVar16 * fVar23 + fVar15 * fVar26) - fVar32 * fVar14;
      fVar32 = ((fVar16 * fVar26 - fVar12 * fVar14) - fVar32 * fVar20) - fVar15 * fVar23;
      fStack0000000000000058 = fVar29;
      fStack000000000000005c = fVar28;
      fStack0000000000000060 = fVar27;
      fStack0000000000000064 = fVar32;
      if (unaff_x21 == 0) goto LAB_07c9a864;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      fVar15 = (float)FUN_07c9ad28(unaff_x21 + lVar7 * 0x10 + 0x20,&stack0x00000058);
      if (unaff_s15 <= fVar15) {
        unaff_s15 = fVar15;
      }
      if (fVar15 < 0.0) {
        if (uVar3 < *(uint *)(unaff_x21 + 0x18)) {
          lVar4 = unaff_x21 + lVar7 * 0x10;
          puVar8 = (undefined4 *)(lVar4 + 0x20);
          uVar13 = *puVar8;
          puVar9 = (undefined4 *)(lVar4 + 0x24);
          uVar17 = *puVar9;
          puVar10 = (undefined4 *)(lVar4 + 0x28);
          uVar21 = *puVar10;
          puVar11 = (undefined4 *)(lVar4 + 0x2c);
          uVar24 = *puVar11;
          goto LAB_07c9a53c;
        }
        break;
      }
      if (cVar2 != '\0') {
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
        lVar4 = unaff_x21 + lVar7 * 0x10;
        fVar14 = *(float *)(lVar4 + 0x20);
        fVar20 = *(float *)(lVar4 + 0x24);
        fVar23 = *(float *)(lVar4 + 0x28);
        fVar26 = *(float *)(lVar4 + 0x2c);
        fVar16 = fVar20;
        fVar12 = fVar23;
        uVar13 = FUN_09516eb8(0);
        uVar17 = FUN_09516eb8(fVar29,fVar28,fVar27,fVar32,fVar31,fVar30,fVar25,0);
        FUN_09516eb8(0);
        fVar16 = (float)FUN_0770668c(uVar13,fVar16,fVar12,uVar17,fVar28,fVar27,0);
        fVar15 = fVar15 * *(float *)(unaff_x19 + 0xb0);
        fVar32 = fVar15;
        if (1.0 < fVar15) {
          fVar32 = 1.0;
        }
        fVar32 = 1.0 - fVar32;
        if (fVar15 < 0.0) {
          fVar32 = 1.0;
        }
        fVar18 = fVar18 * fVar16 * fVar32;
        fVar15 = fVar18 * in_stack_00000050;
        fVar12 = fVar19 * fVar16 * fVar32 * in_stack_00000050;
        fVar32 = (float)FUN_09516910(fVar22 * fVar16 * fVar32 * in_stack_00000050,0);
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
        *(float *)(lVar4 + 0x20) =
             (fVar20 * fVar12 + fVar26 * fVar32 + fVar14 * fVar18) - fVar23 * fVar15;
        *(float *)(lVar4 + 0x24) =
             (fVar23 * fVar32 + fVar26 * fVar15 + fVar20 * fVar18) - fVar14 * fVar12;
        *(float *)(lVar4 + 0x28) =
             (fVar14 * fVar15 + fVar26 * fVar12 + fVar23 * fVar18) - fVar20 * fVar32;
        *(float *)(lVar4 + 0x2c) =
             ((fVar26 * fVar18 - fVar14 * fVar32) - fVar20 * fVar15) - fVar23 * fVar12;
      }
    }
    else if (iVar1 == 2) {
      if (unaff_x21 == 0) goto LAB_07c9a864;
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      lVar4 = unaff_x21 + lVar7 * 0x10;
      puVar8 = (undefined4 *)(lVar4 + 0x20);
      uVar13 = *puVar8;
      puVar9 = (undefined4 *)(lVar4 + 0x24);
      uVar17 = *puVar9;
      puVar10 = (undefined4 *)(lVar4 + 0x28);
      uVar21 = *puVar10;
      puVar11 = (undefined4 *)(lVar4 + 0x2c);
      uVar24 = *puVar11;
LAB_07c9a53c:
      uVar13 = FUN_09516694(uVar13,0);
      if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
      *puVar8 = uVar13;
      *puVar9 = uVar17;
      *puVar10 = uVar21;
      *puVar11 = uVar24;
    }
    lVar4 = *(long *)(unaff_x19 + 0x158);
    if (lVar4 == 0) {
LAB_07c9a864:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    if (*(int *)(lVar4 + unaff_x25 * 4 + 0x20) == 0) {
      lVar4 = *(long *)(unaff_x19 + 0xe0);
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0xd8);
    }
    if (lVar4 == 0) goto LAB_07c9a864;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
    if (lVar4 == 0) goto LAB_07c9a864;
    FUN_07c1e698(lVar4,0);
    lVar4 = *(long *)(unaff_x19 + 0x148);
    if (lVar4 == 0) goto LAB_07c9a864;
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) break;
    if (unaff_x21 == 0) goto LAB_07c9a864;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    lVar4 = lVar4 + unaff_x25 * 0x10;
    lVar7 = unaff_x21 + lVar7 * 0x10;
    param_3 = (ulong)*(uint *)(lVar4 + 0x24);
    param_4 = (ulong)*(uint *)(lVar4 + 0x28);
    param_5 = (ulong)*(uint *)(lVar4 + 0x2c);
    param_2 = FUN_09516694(*(undefined4 *)(lVar4 + 0x20),0);
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    *(undefined4 *)(lVar7 + 0x20) = param_2;
    *(int *)(lVar7 + 0x24) = (int)param_3;
    *(int *)(lVar7 + 0x28) = (int)param_4;
    *(int *)(lVar7 + 0x2c) = (int)param_5;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar3) break;
    param_1 = *(long *)(unaff_x19 + 0x150);
    if (param_1 == 0) goto LAB_07c9a864;
    in_w9 = *(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


