/*
FUNCTION_NAME: UnityEngine.LineRenderer$$set_startColor
ENTRY_POINT: 0358fe00
PROGRAM: vrlegs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_LineRenderer__set_startColor(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  uint in_w9;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  int in_w10;
  uint *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  uint uVar24;
  long unaff_x25;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float in_stack_000001a0;
  float in_stack_000001a8;
  
  uVar24 = (uint)unaff_x25;
  if (in_w10 < unaff_w23) {
                    /* try { // try from 0358fe10 to 0368fe2b has its CatchHandler @ 0359029c */
    if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      in_w9 = *(uint *)(unaff_x20 + 0x18);
    }
    if (in_w9 <= uVar24) goto LAB_03590b68;
                    /* try { // try from 0358fe2c to 0368fe2f has its CatchHandler @ 0359022c */
    iVar4 = unaff_w23 + 3;
    if (-1 < unaff_w23) {
      iVar4 = unaff_w23;
    }
                    /* try { // try from 0358fe40 to 0368fe4b has its CatchHandler @ 03590298 */
    FUN_03595b9c(unaff_x22 + 0x20,iVar4 >> 2,0);
    param_1 = *(long *)(unaff_x21 + 0x670);
    if (unaff_s14 <= unaff_s15) {
      unaff_s15 = unaff_s14;
    }
    if (param_1 == 0) goto LAB_03590b6c;
  }
  else if (unaff_s14 <= unaff_s15) {
    unaff_s15 = unaff_s14;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_03776e6c(&stack0x00000058,*(long *)(param_1 + 0x20),0);
    fVar34 = in_stack_000001a0;
    auVar8._8_8_ = in_stack_000000d8;
    auVar8._0_8_ = in_stack_000000d0;
    in_stack_000000e8 = in_stack_00000060;
    in_stack_000000e0 = in_stack_00000058;
    in_stack_000000f0 = in_stack_00000068;
    if ((*(long *)(unaff_x21 + 0x670) != 0) &&
       (lVar19 = *(long *)(*(long *)(unaff_x21 + 0x670) + 0x20), _in_stack_000000d0 = auVar8,
       lVar19 != 0)) {
      _in_stack_000000d0 = FUN_03776e94(lVar19,0);
      fVar25 = (float)FUN_03776c94(&stack0x000000e0,0);
      fVar26 = (float)FUN_03776c94(&stack0x000000e0,0);
      fVar27 = unaff_s11 - unaff_s8;
      fVar31 = fVar27 * 0.5;
      if (fVar26 * fVar34 <= fVar27) {
        fVar31 = fVar25 * 0.5 * fVar34;
      }
      if (*(long *)(unaff_x21 + 0x678) != 0) {
        fVar26 = *(float *)(unaff_x21 + 0x618);
        memmove(&stack0x00000070,(void *)(*(long *)(unaff_x21 + 0x678) + 0x50),0x60);
        fVar25 = (float)FUN_03776a20(&stack0x00000070,0);
        if ((*(long *)(unaff_x21 + 0x368) != 0) &&
           (lVar19 = *(long *)(*(long *)(unaff_x21 + 0x368) + 0x60), lVar19 != 0)) {
          if (uVar24 < *(uint *)(lVar19 + 0x18)) {
            lVar19 = *(long *)(lVar19 + unaff_x25 * 0x50 + 0x30);
            if (lVar19 == 0) goto LAB_03590b6c;
            if (*unaff_x19 < *(uint *)(lVar19 + 0x18)) {
              fVar29 = *(float *)(unaff_x21 + 0x618);
              lVar20 = lVar19 + (long)(int)*unaff_x19 * 0xc;
              *(float *)(lVar20 + 0x20) = unaff_s8 + 0.0;
              *(float *)(lVar20 + 0x24) = unaff_s15 + (0.0 - (fVar25 + fVar29) * fVar34);
              *(float *)(lVar20 + 0x28) = unaff_s13 + 0.0;
              if (*unaff_x19 + 1 < *(uint *)(lVar19 + 0x18)) {
                fVar29 = *(float *)(unaff_x21 + 0x618);
                lVar20 = lVar19 + (long)(int)(*unaff_x19 + 1) * 0xc;
                *(float *)(lVar20 + 0x20) = unaff_s8 + 0.0;
                *(float *)(lVar20 + 0x24) = unaff_s15 + fVar29 * fVar34;
                *(float *)(lVar20 + 0x28) = unaff_s13 + 0.0;
                uVar1 = *unaff_x19 + 1;
                if ((uVar1 < *(uint *)(lVar19 + 0x18)) &&
                   (uVar2 = *unaff_x19 + 2, uVar2 < *(uint *)(lVar19 + 0x18))) {
                  puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar1 * 0xc);
                  fVar29 = *(float *)(puVar21 + 1);
                  uVar32 = *puVar21;
                  puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar2 * 0xc);
                  *puVar21 = CONCAT44((float)((ulong)uVar32 >> 0x20) + 0.0,fVar31 + (float)uVar32);
                  *(float *)(puVar21 + 1) = fVar29 + 0.0;
                  uVar1 = *unaff_x19;
                  if ((uVar1 < *(uint *)(lVar19 + 0x18)) && (uVar1 + 3 < *(uint *)(lVar19 + 0x18)))
                  {
                    puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar1 * 0xc);
                    fVar29 = *(float *)(puVar21 + 1);
                    uVar32 = *puVar21;
                    puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)(uVar1 + 3) * 0xc);
                    *puVar21 = CONCAT44((float)((ulong)uVar32 >> 0x20) + 0.0,fVar31 + (float)uVar32)
                    ;
                    *(float *)(puVar21 + 1) = fVar29 + 0.0;
                    uVar1 = *unaff_x19 + 3;
                    if ((uVar1 < *(uint *)(lVar19 + 0x18)) &&
                       (uVar2 = *unaff_x19 + 4, uVar2 < *(uint *)(lVar19 + 0x18))) {
                      puVar22 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar1 * 0xc);
                      uVar28 = *(undefined4 *)(puVar22 + 1);
                      puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar2 * 0xc);
                      *puVar21 = *puVar22;
                      *(undefined4 *)(puVar21 + 1) = uVar28;
                      uVar1 = *unaff_x19 + 2;
                      if ((uVar1 < *(uint *)(lVar19 + 0x18)) &&
                         (uVar2 = *unaff_x19 + 5, uVar2 < *(uint *)(lVar19 + 0x18))) {
                        puVar22 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar1 * 0xc);
                        uVar28 = *(undefined4 *)(puVar22 + 1);
                        puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar2 * 0xc);
                        *puVar21 = *puVar22;
                        *(undefined4 *)(puVar21 + 1) = uVar28;
                        if (*unaff_x19 + 6 < *(uint *)(lVar19 + 0x18)) {
                          fVar30 = *(float *)(unaff_x21 + 0x618);
                          fVar29 = unaff_s12 + 0.0;
                          lVar20 = lVar19 + (long)(int)(*unaff_x19 + 6) * 0xc;
                          *(float *)(lVar20 + 0x20) = unaff_s11 - fVar31;
                          *(float *)(lVar20 + 0x24) = unaff_s15 + fVar30 * fVar34;
                          *(float *)(lVar20 + 0x28) = fVar29;
                          if (*unaff_x19 + 7 < *(uint *)(lVar19 + 0x18)) {
                            fVar30 = *(float *)(unaff_x21 + 0x618);
                            lVar20 = lVar19 + (long)(int)(*unaff_x19 + 7) * 0xc;
                            *(float *)(lVar20 + 0x20) = unaff_s11 - fVar31;
                            *(float *)(lVar20 + 0x24) = unaff_s15 - (fVar25 + fVar30) * fVar34;
                            *(float *)(lVar20 + 0x28) = fVar29;
                            uVar1 = *unaff_x19 + 7;
                            if ((uVar1 < *(uint *)(lVar19 + 0x18)) &&
                               (uVar2 = *unaff_x19 + 8, uVar2 < *(uint *)(lVar19 + 0x18))) {
                              puVar22 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar1 * 0xc);
                              uVar28 = *(undefined4 *)(puVar22 + 1);
                              puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar2 * 0xc);
                              *puVar21 = *puVar22;
                              *(undefined4 *)(puVar21 + 1) = uVar28;
                              uVar1 = *unaff_x19 + 6;
                              if ((uVar1 < *(uint *)(lVar19 + 0x18)) &&
                                 (uVar2 = *unaff_x19 + 9, uVar2 < *(uint *)(lVar19 + 0x18))) {
                                puVar22 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar1 * 0xc);
                                uVar28 = *(undefined4 *)(puVar22 + 1);
                                puVar21 = (undefined8 *)(lVar19 + 0x20 + (long)(int)uVar2 * 0xc);
                                *puVar21 = *puVar22;
                                *(undefined4 *)(puVar21 + 1) = uVar28;
                                if (*unaff_x19 + 10 < *(uint *)(lVar19 + 0x18)) {
                                  fVar31 = *(float *)(unaff_x21 + 0x618);
                                  lVar20 = lVar19 + (long)(int)(*unaff_x19 + 10) * 0xc;
                                  *(float *)(lVar20 + 0x20) = unaff_s11 + 0.0;
                                  *(float *)(lVar20 + 0x24) = unaff_s15 + fVar31 * fVar34;
                                  *(float *)(lVar20 + 0x28) = fVar29;
                                  if (*unaff_x19 + 0xb < *(uint *)(lVar19 + 0x18)) {
                                    fVar31 = *(float *)(unaff_x21 + 0x618);
                                    lVar20 = lVar19 + (long)(int)(*unaff_x19 + 0xb) * 0xc;
                                    *(float *)(lVar20 + 0x20) = unaff_s11 + 0.0;
                                    *(float *)(lVar20 + 0x24) =
                                         unaff_s15 - (fVar25 + fVar31) * fVar34;
                                    *(float *)(lVar20 + 0x28) = fVar29;
                                    if ((*(long *)(unaff_x21 + 0x368) != 0) &&
                                       (lVar20 = *(long *)(*(long *)(unaff_x21 + 0x368) + 0x60),
                                       lVar20 != 0)) {
                                      if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_03590b68;
                                      lVar23 = *(long *)(unaff_x21 + 0x678);
                                      if (lVar23 != 0) {
                                        lVar20 = *(long *)(lVar20 + unaff_x25 * 0x50 + 0x48);
                                        iVar4 = *(int *)(lVar23 + 0x108);
                                        iVar5 = *(int *)(lVar23 + 0x10c);
                                        if (*(int *)(*(long *)
                                                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                                                  + 0xe0) == 0) {
                                          thunk_FUN_01a58e78();
                                        }
                                        iVar9 = FUN_03776a58(&stack0x000000d0,0);
                                        iVar10 = FUN_03776a60(&stack0x000000d0,0);
                                        fVar25 = *(float *)(unaff_x21 + 0x618);
                                        iVar11 = FUN_03776a60(&stack0x000000d0,0);
                                        iVar12 = FUN_03776a70(&stack0x000000d0,0);
                                        fVar31 = *(float *)(unaff_x21 + 0x618);
                                        iVar13 = FUN_03776a58(&stack0x000000d0,0);
                                        iVar14 = FUN_03776a68(&stack0x000000d0,0);
                                        iVar15 = FUN_03776a58(&stack0x000000d0,0);
                                        iVar16 = FUN_03776a68(&stack0x000000d0,0);
                                        iVar17 = FUN_03776a58(&stack0x000000d0,0);
                                        iVar18 = FUN_03776a68(&stack0x000000d0,0);
                                        if (lVar20 != 0) {
                                          if (*unaff_x19 < *(uint *)(lVar20 + 0x18)) {
                                            fVar33 = (fVar26 * in_stack_00000038._4_4_) / fVar34;
                                            fVar29 = (float)iVar4;
                                            lVar23 = lVar20 + (long)(int)*unaff_x19 * 8;
                                            fVar25 = ((float)iVar10 - fVar25) / (float)iVar5;
                                            fVar30 = ((float)iVar9 - fVar33) / fVar29;
                                            *(float *)(lVar23 + 0x20) = fVar30;
                                            *(float *)(lVar23 + 0x24) = fVar25;
                                            if (*unaff_x19 + 1 < *(uint *)(lVar20 + 0x18)) {
                                              lVar23 = lVar20 + (long)(int)(*unaff_x19 + 1) * 8;
                                              fVar31 = (fVar31 + (float)(iVar12 + iVar11)) /
                                                       (float)iVar5;
                                              *(float *)(lVar23 + 0x20) = fVar30;
                                              *(float *)(lVar23 + 0x24) = fVar31;
                                              if (*unaff_x19 + 2 < *(uint *)(lVar20 + 0x18)) {
                                                lVar23 = lVar20 + (long)(int)(*unaff_x19 + 2) * 8;
                                                fVar30 = (((float)iVar13 - fVar33) +
                                                         (float)iVar14 * 0.5) / fVar29;
                                                *(float *)(lVar23 + 0x20) = fVar30;
                                                *(float *)(lVar23 + 0x24) = fVar31;
                                                if (*unaff_x19 + 3 < *(uint *)(lVar20 + 0x18)) {
                                                  lVar23 = lVar20 + (long)(int)(*unaff_x19 + 3) * 8;
                                                  *(float *)(lVar23 + 0x20) = fVar30;
                                                  *(float *)(lVar23 + 0x24) = fVar25;
                                                  if (*unaff_x19 + 4 < *(uint *)(lVar20 + 0x18)) {
                                                    lVar23 = lVar20 + (long)(int)(*unaff_x19 + 4) *
                                                                      8;
                                                    fVar33 = fVar30 * DAT_00d38e30;
                                                    fVar35 = fVar30 - fVar33;
                                                    *(float *)(lVar23 + 0x20) = fVar35;
                                                    *(float *)(lVar23 + 0x24) = fVar25;
                                                    if (*unaff_x19 + 5 < *(uint *)(lVar20 + 0x18)) {
                                                      lVar23 = lVar20 + (long)(int)(*unaff_x19 + 5)
                                                                        * 8;
                                                      *(float *)(lVar23 + 0x20) = fVar35;
                                                      *(float *)(lVar23 + 0x24) = fVar31;
                                                      if (*unaff_x19 + 6 < *(uint *)(lVar20 + 0x18))
                                                      {
                                                        fVar30 = fVar30 + fVar33;
                                                        lVar23 = lVar20 + (long)(int)(*unaff_x19 + 6
                                                                                     ) * 8;
                                                        *(float *)(lVar23 + 0x20) = fVar30;
                                                        *(float *)(lVar23 + 0x24) = fVar31;
                                                        if (*unaff_x19 + 7 <
                                                            *(uint *)(lVar20 + 0x18)) {
                                                          lVar23 = lVar20 + (long)(int)(*unaff_x19 +
                                                                                       7) * 8;
                                                          *(float *)(lVar23 + 0x20) = fVar30;
                                                          *(float *)(lVar23 + 0x24) = fVar25;
                                                          if (*unaff_x19 + 8 <
                                                              *(uint *)(lVar20 + 0x18)) {
                                                            lVar23 = lVar20 + (long)(int)(*unaff_x19
                                                                                         + 8) * 8;
                                                            fVar34 = (fVar26 * unaff_s9) / fVar34;
                                                            fVar26 = (fVar34 + (float)iVar15 +
                                                                     (float)iVar16 * 0.5) / fVar29;
                                                            *(float *)(lVar23 + 0x20) = fVar26;
                                                            *(float *)(lVar23 + 0x24) = fVar25;
                                                            if (*unaff_x19 + 9 <
                                                                *(uint *)(lVar20 + 0x18)) {
                                                              lVar23 = lVar20 + (long)(int)(*
                                                  unaff_x19 + 9) * 8;
                                                  *(float *)(lVar23 + 0x20) = fVar26;
                                                  *(float *)(lVar23 + 0x24) = fVar31;
                                                  if (*unaff_x19 + 10 < *(uint *)(lVar20 + 0x18)) {
                                                    lVar23 = lVar20 + (long)(int)(*unaff_x19 + 10) *
                                                                      8;
                                                    fVar29 = (fVar34 + (float)iVar17 + (float)iVar18
                                                             ) / fVar29;
                                                    *(float *)(lVar23 + 0x20) = fVar29;
                                                    *(float *)(lVar23 + 0x24) = fVar31;
                                                    if (*unaff_x19 + 0xb < *(uint *)(lVar20 + 0x18))
                                                    {
                                                      lVar20 = lVar20 + (long)(int)(*unaff_x19 + 0xb
                                                                                   ) * 8;
                                                      *(float *)(lVar20 + 0x20) = fVar29;
                                                      *(float *)(lVar20 + 0x24) = fVar25;
                                                      uVar1 = *unaff_x19;
                                                      if (uVar1 + 2 < *(uint *)(lVar19 + 0x18)) {
                                                        if ((*(long *)(unaff_x21 + 0x368) == 0) ||
                                                           (lVar20 = *(long *)(*(long *)(unaff_x21 +
                                                                                        0x368) +
                                                                              0x60), lVar20 == 0))
                                                        goto LAB_03590b6c;
                                                        if (uVar24 < *(uint *)(lVar20 + 0x18)) {
                                                          lVar20 = *(long *)(lVar20 + unaff_x25 *
                                                                                      0x50 + 0x50);
                                                          if (lVar20 == 0) goto LAB_03590b6c;
                                                          if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                                                            lVar23 = lVar20 + (long)(int)uVar1 * 8;
                                                            fVar31 = ABS(in_stack_000001a8);
                                                            fVar25 = *(float *)(lVar19 + (long)(int)
                                                  (uVar1 + 2) * 0xc + 0x20);
                                                  *(undefined4 *)(lVar23 + 0x20) = 0;
                                                  *(float *)(lVar23 + 0x24) = fVar31;
                                                  fVar34 = DAT_00d388ac;
                                                  if (*unaff_x19 + 1 < *(uint *)(lVar20 + 0x18)) {
                                                    fVar26 = ((fVar25 - unaff_s8) / fVar27) *
                                                             DAT_00d388ac;
                                                    lVar23 = lVar20 + (long)(int)(*unaff_x19 + 1) *
                                                                      8;
                                                    *(undefined4 *)(lVar23 + 0x20) = 0x43ff8000;
                                                    *(float *)(lVar23 + 0x24) = fVar31;
                                                    fVar25 = -8.796093e+12;
                                                    if (fVar26 != INFINITY) {
                                                      fVar25 = (float)(int)fVar26 * 4096.0;
                                                    }
                                                    if (*unaff_x19 + 2 < *(uint *)(lVar20 + 0x18)) {
                                                      lVar23 = lVar20 + (long)(int)(*unaff_x19 + 2)
                                                                        * 8;
                                                      *(float *)(lVar23 + 0x20) = fVar25 + fVar34;
                                                      *(float *)(lVar23 + 0x24) = fVar31;
                                                      if (*unaff_x19 + 3 < *(uint *)(lVar20 + 0x18))
                                                      {
                                                        lVar23 = lVar20 + (long)(int)(*unaff_x19 + 3
                                                                                     ) * 8;
                                                        *(float *)(lVar23 + 0x20) = fVar25 + 0.0;
                                                        *(float *)(lVar23 + 0x24) = fVar31;
                                                        uVar1 = *unaff_x19 + 4;
                                                        if ((uVar1 < *(uint *)(lVar19 + 0x18)) &&
                                                           (uVar2 = *unaff_x19 + 6,
                                                           uVar2 < *(uint *)(lVar19 + 0x18))) {
                                                          fVar26 = ((*(float *)(lVar19 + 0x20 +
                                                                               (long)(int)uVar1 *
                                                                               0xc) - unaff_s8) /
                                                                   fVar27) * fVar34;
                                                          fVar25 = -8.796093e+12;
                                                          if (fVar26 != INFINITY) {
                                                            fVar25 = (float)(int)fVar26 * 4096.0;
                                                          }
                                                          if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                                                            lVar23 = lVar20 + (long)(int)uVar1 * 8;
                                                            fVar26 = *(float *)(lVar19 + 0x20 +
                                                                               (long)(int)uVar2 *
                                                                               0xc);
                                                            *(float *)(lVar23 + 0x20) = fVar25 + 0.0
                                                            ;
                                                            *(float *)(lVar23 + 0x24) = fVar31;
                                                            if (*unaff_x19 + 5 <
                                                                *(uint *)(lVar20 + 0x18)) {
                                                              lVar23 = lVar20 + (long)(int)(*
                                                  unaff_x19 + 5) * 8;
                                                  fVar26 = ((fVar26 - unaff_s8) / fVar27) * fVar34;
                                                  *(float *)(lVar23 + 0x20) = fVar25 + fVar34;
                                                  *(float *)(lVar23 + 0x24) = fVar31;
                                                  fVar25 = -8.796093e+12;
                                                  if (fVar26 != INFINITY) {
                                                    fVar25 = (float)(int)fVar26 * 4096.0;
                                                  }
                                                  if (*unaff_x19 + 6 < *(uint *)(lVar20 + 0x18)) {
                                                    lVar23 = lVar20 + (long)(int)(*unaff_x19 + 6) *
                                                                      8;
                                                    *(float *)(lVar23 + 0x20) = fVar25 + fVar34;
                                                    *(float *)(lVar23 + 0x24) = fVar31;
                                                    if (*unaff_x19 + 7 < *(uint *)(lVar20 + 0x18)) {
                                                      lVar23 = lVar20 + (long)(int)(*unaff_x19 + 7)
                                                                        * 8;
                                                      *(float *)(lVar23 + 0x20) = fVar25 + 0.0;
                                                      *(float *)(lVar23 + 0x24) = fVar31;
                                                      uVar1 = *unaff_x19 + 8;
                                                      if (uVar1 < *(uint *)(lVar19 + 0x18)) {
                                                        fVar26 = ((*(float *)(lVar19 + (long)(int)
                                                  uVar1 * 0xc + 0x20) - unaff_s8) / fVar27) * fVar34
                                                  ;
                                                  fVar25 = -8.796093e+12;
                                                  if (fVar26 != INFINITY) {
                                                    fVar25 = (float)(int)fVar26 * 4096.0;
                                                  }
                                                  if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                                                    lVar19 = lVar20 + (long)(int)uVar1 * 8;
                                                    *(float *)(lVar19 + 0x20) = fVar25 + 0.0;
                                                    *(float *)(lVar19 + 0x24) = fVar31;
                                                    if (*unaff_x19 + 9 < *(uint *)(lVar20 + 0x18)) {
                                                      lVar19 = lVar20 + (long)(int)(*unaff_x19 + 9)
                                                                        * 8;
                                                      *(float *)(lVar19 + 0x20) = fVar25 + fVar34;
                                                      *(float *)(lVar19 + 0x24) = fVar31;
                                                      if (*unaff_x19 + 10 < *(uint *)(lVar20 + 0x18)
                                                         ) {
                                                        lVar19 = lVar20 + (long)(int)(*unaff_x19 +
                                                                                     10) * 8;
                                                        *(undefined4 *)(lVar19 + 0x20) = 0x49ff8ff8;
                                                        *(float *)(lVar19 + 0x24) = fVar31;
                                                        if (*unaff_x19 + 0xb <
                                                            *(uint *)(lVar20 + 0x18)) {
                                                          lVar20 = lVar20 + (long)(int)(*unaff_x19 +
                                                                                       0xb) * 8;
                                                          *(undefined4 *)(lVar20 + 0x20) =
                                                               0x49ff8000;
                                                          *(float *)(lVar20 + 0x24) = fVar31;
                                                          bVar3 = *(byte *)(unaff_x21 + 0x147);
                                                          if (unaff_w24 >> 0x18 <=
                                                              (uint)*(byte *)(unaff_x21 + 0x147)) {
                                                            bVar3 = in_stack_000000f8._4_1_;
                                                          }
                                                          in_stack_000000f8._4_1_ = bVar3;
                                                          if ((*(long *)(unaff_x21 + 0x368) == 0) ||
                                                             (lVar19 = *(long *)(*(long *)(unaff_x21
                                                                                          + 0x368) +
                                                                                0x60), lVar19 == 0))
                                                          goto LAB_03590b6c;
                                                          if (uVar24 < *(uint *)(lVar19 + 0x18)) {
                                                            lVar19 = *(long *)(lVar19 + unaff_x25 *
                                                                                        0x50 + 0x58)
                                                            ;
                                                            if (lVar19 == 0) goto LAB_03590b6c;
                                                            if (*unaff_x19 <
                                                                *(uint *)(lVar19 + 0x18)) {
                                                              lVar20 = lVar19 + (long)(int)*
                                                  unaff_x19 * 4;
                                                  uVar6 = (undefined1)(unaff_w24 >> 0x10);
                                                  *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                  uVar7 = (undefined2)unaff_w24;
                                                  *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                  *(byte *)(lVar20 + 0x23) = bVar3;
                                                  if (*unaff_x19 + 1 < *(uint *)(lVar19 + 0x18)) {
                                                    lVar20 = lVar19 + (long)(int)(*unaff_x19 + 1) *
                                                                      4;
                                                    *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                    *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                    *(byte *)(lVar20 + 0x23) = bVar3;
                                                    if (*unaff_x19 + 2 < *(uint *)(lVar19 + 0x18)) {
                                                      lVar20 = lVar19 + (long)(int)(*unaff_x19 + 2)
                                                                        * 4;
                                                      *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                      *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                      *(byte *)(lVar20 + 0x23) = bVar3;
                                                      if (*unaff_x19 + 3 < *(uint *)(lVar19 + 0x18))
                                                      {
                                                        lVar20 = lVar19 + (long)(int)(*unaff_x19 + 3
                                                                                     ) * 4;
                                                        *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                        *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                        *(byte *)(lVar20 + 0x23) = bVar3;
                                                        if (*unaff_x19 + 4 <
                                                            *(uint *)(lVar19 + 0x18)) {
                                                          lVar20 = lVar19 + (long)(int)(*unaff_x19 +
                                                                                       4) * 4;
                                                          *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                          *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                          *(byte *)(lVar20 + 0x23) = bVar3;
                                                          if (*unaff_x19 + 5 <
                                                              *(uint *)(lVar19 + 0x18)) {
                                                            lVar20 = lVar19 + (long)(int)(*unaff_x19
                                                                                         + 5) * 4;
                                                            *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                            *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                            *(byte *)(lVar20 + 0x23) = bVar3;
                                                            if (*unaff_x19 + 6 <
                                                                *(uint *)(lVar19 + 0x18)) {
                                                              lVar20 = lVar19 + (long)(int)(*
                                                  unaff_x19 + 6) * 4;
                                                  *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                  *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                  *(byte *)(lVar20 + 0x23) = bVar3;
                                                  if (*unaff_x19 + 7 < *(uint *)(lVar19 + 0x18)) {
                                                    lVar20 = lVar19 + (long)(int)(*unaff_x19 + 7) *
                                                                      4;
                                                    *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                    *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                    *(byte *)(lVar20 + 0x23) = bVar3;
                                                    if (*unaff_x19 + 8 < *(uint *)(lVar19 + 0x18)) {
                                                      lVar20 = lVar19 + (long)(int)(*unaff_x19 + 8)
                                                                        * 4;
                                                      *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                      *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                      *(byte *)(lVar20 + 0x23) = bVar3;
                                                      if (*unaff_x19 + 9 < *(uint *)(lVar19 + 0x18))
                                                      {
                                                        lVar20 = lVar19 + (long)(int)(*unaff_x19 + 9
                                                                                     ) * 4;
                                                        *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                        *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                        *(byte *)(lVar20 + 0x23) = bVar3;
                                                        if (*unaff_x19 + 10 <
                                                            *(uint *)(lVar19 + 0x18)) {
                                                          lVar20 = lVar19 + (long)(int)(*unaff_x19 +
                                                                                       10) * 4;
                                                          *(undefined1 *)(lVar20 + 0x22) = uVar6;
                                                          *(undefined2 *)(lVar20 + 0x20) = uVar7;
                                                          *(byte *)(lVar20 + 0x23) = bVar3;
                                                          if (*unaff_x19 + 0xb <
                                                              *(uint *)(lVar19 + 0x18)) {
                                                            lVar19 = lVar19 + (long)(int)(*unaff_x19
                                                                                         + 0xb) * 4;
                                                            *(undefined1 *)(lVar19 + 0x22) = uVar6;
                                                            *(undefined2 *)(lVar19 + 0x20) = uVar7;
                                                            *(byte *)(lVar19 + 0x23) = bVar3;
                                                            *unaff_x19 = *unaff_x19 + 0xc;
                                                            return;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          goto LAB_03590b68;
                                        }
                                      }
                                    }
                                    goto LAB_03590b6c;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_03590b68:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
      }
    }
  }
LAB_03590b6c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


