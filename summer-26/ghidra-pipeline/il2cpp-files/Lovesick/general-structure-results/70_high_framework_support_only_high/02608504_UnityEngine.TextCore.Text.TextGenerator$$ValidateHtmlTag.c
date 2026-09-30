/*
FUNCTION_NAME: UnityEngine.TextCore.Text.TextGenerator$$ValidateHtmlTag
ENTRY_POINT: 02608504
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_TextCore_Text_TextGenerator__ValidateHtmlTag
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined4 uVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  float fVar28;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong local_d0;
  uint local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  uint local_68;
  
                    /* try { // try from 02608504 to 02708533 has its CatchHandler @ 02608298 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02608500 with catch @ 0260850c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 026084f8 with catch @ 02608510
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02608454 with catch @ 02608514
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02608428 with catch @ 02608518
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 026083cc with catch @ 0260851c
                        */
  if ((DAT_037833c6 & 1) == 0) {
                    /* try { // try from 02608534 to 02708537 has its CatchHandler @ 026085bc */
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                      );
    DAT_037833c6 = 1;
  }
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_108 = 0;
                    /* try { // try from 02608580 to 027085a7 has its CatchHandler @ 026085c8 */
  local_110 = 0;
  local_118 = 0;
  if (*(long *)(param_5 + 0x40) != 0) {
    uVar14 = FUN_0269f578(*(long *)(param_5 + 0x40),0);
    if (*(long *)(param_5 + 0x40) != 0) {
      uVar13 = param_2;
      uVar21 = param_3;
                    /* try { // try from 026085a8 to 027085b3 has its CatchHandler @ 02608298 */
      uVar7 = FUN_0269f810(*(long *)(param_5 + 0x40),0);
                    /* try { // try from 026085b4 to 027085bb has its CatchHandler @ 026085c8 */
      if (*(long *)(param_5 + 0x18) != 0) {
        uVar17 = uVar13;
        uVar12 = uVar21;
        uVar24 = param_4;
                    /* catch() { ... } // from try @ 02608534 with catch @ 026085bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02608580 with catch @ 026085c8
                       catch(type#2 @ 00000000) { ... } // from try @ 026085b4 with catch @ 026085c8
                        */
        uVar15 = FUN_0269f578(*(long *)(param_5 + 0x18),0);
        if (*(long *)(param_5 + 0x18) != 0) {
          uVar16 = uVar17;
          uVar20 = uVar12;
          uVar8 = FUN_0269f810(*(long *)(param_5 + 0x18),0);
          fVar9 = 1.0;
          if (*(char *)(param_5 + 0x30) != '\0') {
            if (*(long *)(param_5 + 0x40) == 0) goto LAB_02608934;
            fVar9 = (float)FUN_026a125c(*(long *)(param_5 + 0x40),0);
          }
          lVar5 = *(long *)(param_5 + 0x28);
          fVar28 = DAT_028aa028;
          if (DAT_028aa028 <= ABS(fVar9)) {
            fVar28 = fVar9;
          }
          uVar11 = param_2;
          uVar1 = param_3;
          uVar10 = FUN_022743a4(uVar14,0);
          local_88 = uVar1;
          local_90 = CONCAT44(uVar11,uVar10);
          if (lVar5 == 0) {
            uVar7 = FUN_022aa5e0(uVar7,0);
            local_a0 = CONCAT44(uVar13,uVar7);
            local_98 = CONCAT44(param_4,uVar21);
            uVar13 = FUN_022743a4(uVar15,0);
            local_a8 = uVar12;
            local_b0 = CONCAT44(uVar17,uVar13);
            uVar13 = FUN_022aa5e0(uVar8,0);
            local_c0 = CONCAT44(uVar16,uVar13);
            local_b8 = CONCAT44(uVar24,uVar20);
            uVar14 = FUN_02689110(0);
            FUN_02608938(uVar14,fVar28 * *(float *)(param_5 + 0x38),*(undefined4 *)(param_5 + 0x34),
                         &local_90,&local_a0,&local_b0,&local_c0,&local_70,&local_80);
            uVar3 = local_70 >> 0x20;
            uVar22 = (ulong)local_68;
            lVar5 = *(long *)(param_5 + 0x40);
            uVar14 = FUN_022743a0(local_70 & 0xffffffff,uVar3,uVar22,0);
            uVar13 = (undefined4)local_80;
            uVar18 = local_80._4_4_;
            uVar25 = local_78._4_4_;
            uVar27 = (uint)local_78;
          }
          else {
            uVar11 = FUN_022743a4(uVar15,0);
            local_a8 = uVar12;
            local_b0 = CONCAT44(uVar17,uVar11);
            uVar15 = FUN_02689110(0);
            FUN_026089f4(uVar15,fVar28 * *(float *)(param_5 + 0x38),&local_90,&local_b0,&local_d0);
            uVar12 = FUN_022743a4(uVar14,0);
            local_90 = CONCAT44(param_2,uVar12);
            local_88 = param_3;
            if (*(long *)(param_5 + 0x40) == 0) goto LAB_02608934;
            FUN_0269fb58(*(long *)(param_5 + 0x40),0);
            uVar12 = FUN_022743a4(0);
            local_b0 = CONCAT44(param_2,uVar12);
            local_a8 = param_3;
            if (*(long *)(param_5 + 0x40) == 0) goto LAB_02608934;
            FUN_0269fa60(*(long *)(param_5 + 0x40),0);
            uVar12 = FUN_022743a4(0);
            local_108 = CONCAT44(param_2,uVar12);
            plVar6 = *(long **)(param_5 + 0x28);
            local_100 = param_3;
            if (plVar6 == (long *)0x0) goto LAB_02608934;
            lVar5 = *plVar6;
            uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) ==
                    *(long *)
                     Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                   ) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar4 + 4) * 0x10 + 0x138);
                  goto LAB_026087fc;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 4;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined8 *)
                     FUN_00d59724(plVar6,*(long *)
                                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                                  ,4);
LAB_026087fc:
            (*(code *)*puVar2)(plVar6,puVar2[1]);
            uVar12 = FUN_022743a4(0);
            local_118 = CONCAT44(param_2,uVar12);
            local_110 = param_3;
            FUN_02608a78(1.0 / fVar28,*(undefined4 *)(param_5 + 0x34),&local_90,&local_d0,&local_b0,
                         &local_108,&local_118,&uStack_e0,(long)&local_e8 + 4,&local_e8);
            uVar7 = FUN_022aa5e0(uVar7,0);
            local_a0 = CONCAT44(uVar13,uVar7);
            local_98 = CONCAT44(param_4,uVar21);
            uVar13 = FUN_022aa5e0(uVar8,0);
            local_c0 = CONCAT44(uVar16,uVar13);
            local_b8 = CONCAT44(uVar24,uVar20);
            uVar14 = FUN_02689110(0);
            FUN_02608b3c(uVar14,*(undefined4 *)(param_5 + 0x34),local_e8 & 0xffffffff,local_e8._4_4_
                         ,&local_a0,&local_c0,&uStack_e0,&local_f8);
            uVar3 = local_d0 >> 0x20;
            uVar22 = (ulong)local_c8;
            lVar5 = *(long *)(param_5 + 0x40);
            uVar14 = FUN_022743a0(local_d0 & 0xffffffff,uVar3,uVar22,0);
            uVar13 = (undefined4)local_f8;
            uVar18 = local_f8._4_4_;
            uVar25 = local_f0._4_4_;
            uVar27 = (uint)local_f0;
          }
          uVar23 = (ulong)uVar27;
          uVar26 = (ulong)uVar25;
          uVar19 = (ulong)uVar18;
          uVar15 = FUN_022aa5dc(uVar13,uVar19,uVar23,uVar26,0);
          if (lVar5 != 0) {
            FUN_026a01f4(uVar14,uVar3,uVar22,uVar15,uVar19,uVar23,uVar26,lVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_02608934:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


