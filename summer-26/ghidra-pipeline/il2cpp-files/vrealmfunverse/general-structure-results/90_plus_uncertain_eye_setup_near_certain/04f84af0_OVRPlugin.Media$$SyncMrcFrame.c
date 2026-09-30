/*
FUNCTION_NAME: OVRPlugin.Media$$SyncMrcFrame
ENTRY_POINT: 04f84af0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SyncMrcFrame(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  float fVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  ulong uVar22;
  undefined4 in_s3;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  if ((DAT_066c9d11 & 1) == 0) {
    FUN_02b3c81c(System_Func<FocusExitEventArgs>_TypeInfo);
    DAT_066c9d11 = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  uStack000000000000002c = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000034 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar7 = FUN_04332268(*(long *)(param_1 + 0x48),
                         *(undefined8 *)System_Func<FocusExitEventArgs>_TypeInfo);
    lVar13 = *(long *)(param_1 + 0x80);
    uVar8 = FUN_04f8481c(param_1);
    if (lVar13 == 0) goto LAB_04f84dc4;
    puVar14 = (undefined8 *)(lVar13 + 0x98);
    *puVar14 = uVar8;
    thunk_FUN_02bb0e9c(puVar14,uVar8);
    if ((lVar7 == 0) || (lVar13 = *(long *)(param_1 + 0x80), lVar13 == 0)) goto LAB_04f84dc4;
    *(undefined1 *)(lVar13 + 0x10) = *(undefined1 *)(lVar7 + 0x10);
    cVar4 = *(char *)(lVar7 + 0x11);
    *(char *)(lVar13 + 0x11) = cVar4;
    if (cVar4 != '\0') {
      uVar9 = FUN_05c88bf8(param_1,0);
      lVar13 = *(long *)(param_1 + 0x80);
      if ((uVar9 & 1) != 0) {
        if (lVar13 == 0) goto LAB_04f84dc4;
        uVar5 = *(undefined1 *)(lVar7 + 0x12);
        *(undefined1 *)(lVar13 + 0x50) = 1;
        *(undefined1 *)(lVar13 + 0x12) = uVar5;
        lVar10 = *(long *)(lVar13 + 0x60);
        *(undefined1 *)(lVar13 + 0x94) = *(undefined1 *)(lVar7 + 0x70);
        if (lVar10 == 0) goto LAB_04f84dc4;
        uVar15 = *(uint *)(lVar10 + 0x18);
        if (uVar15 != 0) {
          fVar21 = *(float *)(lVar7 + 0x18);
          uVar9 = (ulong)(uint)fVar21;
          fVar17 = *(float *)(lVar7 + 0x1c);
          uVar1 = *(uint *)(lVar7 + 0x14);
          *(undefined1 *)(lVar10 + 0x20) = 1;
          lVar11 = *(long *)(lVar13 + 0x58);
          if (lVar11 == 0) goto LAB_04f84dc4;
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 == 0) goto LAB_04f84f0c;
          *(bool *)(lVar11 + 0x20) = (uVar1 & 0x30) != 0;
          lVar12 = *(long *)(lVar13 + 0x68);
          fVar6 = fVar21;
          if (fVar21 <= fVar17) {
            fVar6 = fVar17;
          }
          uVar22 = (ulong)(uint)fVar6;
          if (lVar12 == 0) goto LAB_04f84dc4;
          uVar3 = *(uint *)(lVar12 + 0x18);
          if ((((((uVar3 == 0) || (*(float *)(lVar12 + 0x20) = fVar6, uVar15 == 1)) ||
                (*(undefined1 *)(lVar10 + 0x21) = 1, uVar2 == 1)) ||
               (((*(byte *)(lVar11 + 0x21) = (byte)(uVar1 >> 5) & 1, uVar3 == 1 ||
                 (*(float *)(lVar12 + 0x24) = fVar21, uVar15 < 3)) ||
                ((*(undefined1 *)(lVar10 + 0x22) = 1, uVar2 < 3 ||
                 ((*(byte *)(lVar11 + 0x22) = (byte)(uVar1 >> 4) & 1, uVar3 < 3 ||
                  (*(float *)(lVar12 + 0x28) = fVar17, uVar15 == 3)))))))) ||
              (*(undefined1 *)(lVar10 + 0x23) = 1, uVar2 == 3)) ||
             ((((*(undefined1 *)(lVar11 + 0x23) = 0, uVar3 == 3 ||
                (*(undefined4 *)(lVar12 + 0x2c) = 0, uVar15 < 5)) ||
               (*(undefined1 *)(lVar10 + 0x24) = 1, uVar2 < 5)) ||
              (*(undefined1 *)(lVar11 + 0x24) = 0, uVar3 < 5)))) goto LAB_04f84f0c;
          *(undefined4 *)(lVar12 + 0x30) = 0;
          *(undefined4 *)(lVar13 + 0x90) = 2;
          uVar8 = *(undefined8 *)(lVar7 + 0x60);
          uVar20 = *(undefined8 *)(lVar7 + 0x58);
          uVar19 = *(undefined8 *)(lVar7 + 0x50);
          *(undefined4 *)(lVar13 + 0x8c) = *(undefined4 *)(lVar7 + 0x68);
          *(undefined8 *)(lVar13 + 0x84) = uVar8;
          *(undefined8 *)(lVar13 + 0x7c) = uVar20;
          *(undefined8 *)(lVar13 + 0x74) = uVar19;
          lVar13 = *(long *)(param_1 + 0x70);
          if (lVar13 == 0) goto LAB_04f84dc4;
          lVar12 = 0;
          lVar10 = 4;
          lVar11 = 0x20;
          while( true ) {
            uVar15 = (int)lVar10 - 4;
            if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar15) break;
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_04f84dc4;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_04f84f0c;
            lVar13 = *(long *)(lVar13 + lVar10 * 8);
            if (lVar13 == 0) goto LAB_04f84dc4;
            lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x48);
            uVar18 = FUN_05c9c2ec(lVar13,0);
            if (lVar16 == 0) goto LAB_04f84dc4;
            if (*(uint *)(lVar16 + 0x18) <= uVar15) goto LAB_04f84f0c;
            lVar16 = lVar16 + lVar12;
            *(undefined4 *)(lVar16 + 0x20) = uVar18;
            *(int *)(lVar16 + 0x24) = (int)uVar9;
            *(int *)(lVar16 + 0x28) = (int)uVar22;
            *(undefined4 *)(lVar16 + 0x2c) = in_s3;
            if ((*(long *)(param_1 + 0x80) == 0) ||
               (lVar13 = *(long *)(param_1 + 0x70), lVar13 == 0)) goto LAB_04f84dc4;
            if (*(uint *)(lVar13 + 0x18) <= uVar15) goto LAB_04f84f0c;
            lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x38);
            FUN_04f0d180(&stack0x00000000 + 4,*(undefined8 *)(param_1 + 0x58),
                         *(undefined8 *)(lVar13 + lVar10 * 8),0);
            if (lVar16 == 0) goto LAB_04f84dc4;
            lVar10 = lVar10 + 1;
            if (*(uint *)(lVar16 + 0x18) <= (int)lVar10 - 5U) goto LAB_04f84f0c;
            puVar14 = (undefined8 *)(lVar16 + lVar11);
            lVar11 = lVar11 + 0x1c;
            lVar12 = lVar12 + 0x10;
            *(undefined4 *)(puVar14 + 3) = uStack000000000000001c;
            puVar14[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
            puVar14[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
            *puVar14 = in_stack_00000000._4_8_;
            lVar13 = *(long *)(param_1 + 0x70);
            if (lVar13 == 0) goto LAB_04f84dc4;
          }
          if (*(char *)(param_1 + 0x60) == '\0') {
            lVar7 = *(long *)(param_1 + 0x80);
            FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(param_1 + 0x58),0,0);
            if (lVar7 == 0) goto LAB_04f84dc4;
            *(ulong *)(lVar7 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
            *(undefined8 *)(lVar7 + 0x14) = in_stack_00000000._4_8_;
            *(ulong *)(lVar7 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
            *(ulong *)(lVar7 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_04f84dc4;
            lVar7 = *(long *)(param_1 + 0x80);
            uVar18 = FUN_05c9e358(*(long *)(param_1 + 0x58),0);
          }
          else {
            FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(param_1 + 0x58),1,0);
            in_stack_00000040 = in_stack_00000000._4_8_;
            in_stack_00000020 = *(undefined8 *)(lVar7 + 0x30);
            in_stack_00000048 = in_stack_00000000._12_4_;
            uStack0000000000000054 = uStack0000000000000018;
            in_stack_00000058 = uStack000000000000001c;
            uStack000000000000004c = uStack0000000000000010;
            in_stack_00000050 = uStack0000000000000014;
            in_stack_00000028 = (undefined4)*(undefined8 *)(lVar7 + 0x38);
            uStack0000000000000034 = (undefined4)*(undefined8 *)(lVar7 + 0x44);
            in_stack_00000038 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x44) >> 0x20);
            uStack000000000000002c = (undefined4)*(undefined8 *)(lVar7 + 0x3c);
            in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x3c) >> 0x20);
            if (*(long *)(param_1 + 0x80) == 0) goto LAB_04f84dc4;
            FUN_04ef5cac(&stack0x00000020,&stack0x00000040,*(long *)(param_1 + 0x80) + 0x14,0);
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_04f84dc4;
            lVar7 = *(long *)(param_1 + 0x80);
            uVar18 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty__get_IsReadOnly
                               (*(long *)(param_1 + 0x58),0);
          }
          if (lVar7 != 0) {
            *(undefined4 *)(lVar7 + 0x70) = uVar18;
            if (*(long *)(param_1 + 0x80) != 0) {
              *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x30) = 2;
              return;
            }
          }
          goto LAB_04f84dc4;
        }
        goto LAB_04f84f0c;
      }
      if (lVar13 == 0) goto LAB_04f84dc4;
    }
    lVar7 = *(long *)(lVar13 + 0x58);
    *(undefined1 *)(lVar13 + 0x12) = 0;
    *(undefined4 *)(lVar13 + 0x30) = 0;
    *(undefined4 *)(lVar13 + 0x90) = 0;
    *(undefined1 *)(lVar13 + 0x50) = 0;
    if (lVar7 != 0) {
      uVar15 = *(uint *)(lVar7 + 0x18);
      uVar9 = 0;
      while (uVar15 != uVar9) {
        *(undefined1 *)(lVar7 + 0x20 + uVar9) = 0;
        lVar10 = *(long *)(lVar13 + 0x60);
        if (lVar10 == 0) goto LAB_04f84dc4;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) break;
        lVar10 = lVar10 + uVar9;
        uVar9 = uVar9 + 1;
        *(undefined1 *)(lVar10 + 0x20) = 0;
        if (uVar9 == 5) {
          return;
        }
      }
LAB_04f84f0c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
LAB_04f84dc4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


