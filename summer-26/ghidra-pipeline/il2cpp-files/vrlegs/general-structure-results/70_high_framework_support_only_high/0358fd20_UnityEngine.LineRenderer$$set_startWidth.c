/*
FUNCTION_NAME: UnityEngine.LineRenderer$$set_startWidth
ENTRY_POINT: 0358fd20
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_LineRenderer__set_startWidth
               (ulong param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,long param_10,uint *param_11,
               undefined8 param_12)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long unaff_x20;
  long lVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  byte bStack00000000000000fc;
  float in_stack_000001a0;
  float in_stack_000001a8;
  
  bStack00000000000000fc = (byte)((ulong)param_12 >> 0x18);
  if ((param_1 & 1) == 0) {
                    /* try { // try from 0358fd58 to 0368fd7f has its CatchHandler @ 035902c0 */
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo)
    ;
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    FUN_01ab69ac(Hdg_ReadMessageThread_<>c__DisplayClass15_0_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x78) = 1;
  }
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  FUN_03590b70(param_10,*(undefined8 *)(param_10 + 0xf8));
  auVar9._8_8_ = in_stack_000000d8;
  auVar9._0_8_ = in_stack_000000d0;
  auVar8._8_8_ = in_stack_000000d8;
  auVar8._0_8_ = in_stack_000000d0;
  lVar22 = *(long *)(param_10 + 0x670);
  if (lVar22 == 0) {
    uVar21 = FUN_03597634(0);
    if ((uVar21 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b470(*(undefined8 *)Hdg_ReadMessageThread_<>c__DisplayClass15_0_TypeInfo,param_10,0);
    }
    return;
  }
  if ((*(long *)(param_10 + 0x368) != 0) &&
     (lVar27 = *(long *)(*(long *)(param_10 + 0x368) + 0x60), _in_stack_000000d0 = auVar8,
     lVar27 != 0)) {
    uVar5 = *(uint *)(param_10 + 0x688);
    lVar29 = (long)(int)uVar5;
    uVar23 = *(uint *)(lVar27 + 0x18);
    _in_stack_000000d0 = auVar9;
    if (uVar23 <= uVar5) goto LAB_03590b68;
    lVar28 = lVar27 + lVar29 * 0x50;
    lVar26 = *(long *)(lVar28 + 0x30);
    if (lVar26 != 0) {
      uVar3 = *param_11;
      iVar1 = uVar3 + 0xc;
      if (*(int *)(lVar26 + 0x18) < iVar1) {
        if (*(int *)(*(long *)OVRPlugin_Media_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          uVar23 = *(uint *)(lVar27 + 0x18);
        }
        if (uVar23 <= uVar5) goto LAB_03590b68;
        iVar4 = uVar3 + 0xf;
        if (-1 < iVar1) {
          iVar4 = iVar1;
        }
        FUN_03595b9c(lVar28 + 0x20,iVar4 >> 2,0);
        lVar22 = *(long *)(param_10 + 0x670);
        if (param_6 <= param_3) {
          param_3 = param_6;
        }
        if (lVar22 == 0) goto LAB_03590b6c;
      }
      else if (param_6 <= param_3) {
        param_3 = param_6;
      }
      if (*(long *)(lVar22 + 0x20) != 0) {
        FUN_03776e6c(&stack0x00000058,*(long *)(lVar22 + 0x20),0);
        fVar39 = in_stack_000001a0;
        auVar10._8_8_ = in_stack_000000d8;
        auVar10._0_8_ = in_stack_000000d0;
        in_stack_000000e8 = in_stack_00000060;
        in_stack_000000e0 = in_stack_00000058;
        in_stack_000000f0 = in_stack_00000068;
        if ((*(long *)(param_10 + 0x670) != 0) &&
           (lVar22 = *(long *)(*(long *)(param_10 + 0x670) + 0x20), _in_stack_000000d0 = auVar10,
           lVar22 != 0)) {
          _in_stack_000000d0 = FUN_03776e94(lVar22,0);
          fVar30 = (float)FUN_03776c94(&stack0x000000e0,0);
          fVar31 = (float)FUN_03776c94(&stack0x000000e0,0);
          fVar32 = param_5 - param_2;
          fVar35 = fVar32 * 0.5;
          if (fVar31 * fVar39 <= fVar32) {
            fVar35 = fVar30 * 0.5 * fVar39;
          }
          if (*(long *)(param_10 + 0x678) != 0) {
            fVar31 = *(float *)(param_10 + 0x618);
            memmove(&stack0x00000070,(void *)(*(long *)(param_10 + 0x678) + 0x50),0x60);
            fVar30 = (float)FUN_03776a20(&stack0x00000070,0);
            if ((*(long *)(param_10 + 0x368) != 0) &&
               (lVar22 = *(long *)(*(long *)(param_10 + 0x368) + 0x60), lVar22 != 0)) {
              if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                lVar22 = *(long *)(lVar22 + lVar29 * 0x50 + 0x30);
                if (lVar22 == 0) goto LAB_03590b6c;
                if (*param_11 < *(uint *)(lVar22 + 0x18)) {
                  fVar34 = *(float *)(param_10 + 0x618);
                  lVar27 = lVar22 + (long)(int)*param_11 * 0xc;
                  *(float *)(lVar27 + 0x20) = param_2 + 0.0;
                  *(float *)(lVar27 + 0x24) = param_3 + (0.0 - (fVar30 + fVar34) * fVar39);
                  *(float *)(lVar27 + 0x28) = param_4 + 0.0;
                  if (*param_11 + 1 < *(uint *)(lVar22 + 0x18)) {
                    fVar34 = *(float *)(param_10 + 0x618);
                    lVar27 = lVar22 + (long)(int)(*param_11 + 1) * 0xc;
                    *(float *)(lVar27 + 0x20) = param_2 + 0.0;
                    *(float *)(lVar27 + 0x24) = param_3 + fVar34 * fVar39;
                    *(float *)(lVar27 + 0x28) = param_4 + 0.0;
                    uVar23 = *param_11 + 1;
                    if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                       (uVar3 = *param_11 + 2, uVar3 < *(uint *)(lVar22 + 0x18))) {
                      puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                      fVar34 = *(float *)(puVar24 + 1);
                      uVar37 = *puVar24;
                      puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                      *puVar24 = CONCAT44((float)((ulong)uVar37 >> 0x20) + 0.0,
                                          fVar35 + (float)uVar37);
                      *(float *)(puVar24 + 1) = fVar34 + 0.0;
                      uVar23 = *param_11;
                      if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                         (uVar23 + 3 < *(uint *)(lVar22 + 0x18))) {
                        puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                        fVar34 = *(float *)(puVar24 + 1);
                        uVar37 = *puVar24;
                        puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)(uVar23 + 3) * 0xc);
                        *puVar24 = CONCAT44((float)((ulong)uVar37 >> 0x20) + 0.0,
                                            fVar35 + (float)uVar37);
                        *(float *)(puVar24 + 1) = fVar34 + 0.0;
                        uVar23 = *param_11 + 3;
                        if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                           (uVar3 = *param_11 + 4, uVar3 < *(uint *)(lVar22 + 0x18))) {
                          puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                          uVar33 = *(undefined4 *)(puVar25 + 1);
                          puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                          *puVar24 = *puVar25;
                          *(undefined4 *)(puVar24 + 1) = uVar33;
                          uVar23 = *param_11 + 2;
                          if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                             (uVar3 = *param_11 + 5, uVar3 < *(uint *)(lVar22 + 0x18))) {
                            puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                            uVar33 = *(undefined4 *)(puVar25 + 1);
                            puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                            *puVar24 = *puVar25;
                            *(undefined4 *)(puVar24 + 1) = uVar33;
                            if (*param_11 + 6 < *(uint *)(lVar22 + 0x18)) {
                              fVar34 = *(float *)(param_10 + 0x618);
                              param_7 = param_7 + 0.0;
                              lVar27 = lVar22 + (long)(int)(*param_11 + 6) * 0xc;
                              *(float *)(lVar27 + 0x20) = param_5 - fVar35;
                              *(float *)(lVar27 + 0x24) = param_3 + fVar34 * fVar39;
                              *(float *)(lVar27 + 0x28) = param_7;
                              if (*param_11 + 7 < *(uint *)(lVar22 + 0x18)) {
                                fVar34 = *(float *)(param_10 + 0x618);
                                lVar27 = lVar22 + (long)(int)(*param_11 + 7) * 0xc;
                                *(float *)(lVar27 + 0x20) = param_5 - fVar35;
                                *(float *)(lVar27 + 0x24) = param_3 - (fVar30 + fVar34) * fVar39;
                                *(float *)(lVar27 + 0x28) = param_7;
                                uVar23 = *param_11 + 7;
                                if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                                   (uVar3 = *param_11 + 8, uVar3 < *(uint *)(lVar22 + 0x18))) {
                                  puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                                  uVar33 = *(undefined4 *)(puVar25 + 1);
                                  puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                                  *puVar24 = *puVar25;
                                  *(undefined4 *)(puVar24 + 1) = uVar33;
                                  uVar23 = *param_11 + 6;
                                  if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                                     (uVar3 = *param_11 + 9, uVar3 < *(uint *)(lVar22 + 0x18))) {
                                    puVar25 = (undefined8 *)
                                              (lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                                    uVar33 = *(undefined4 *)(puVar25 + 1);
                                    puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc)
                                    ;
                                    *puVar24 = *puVar25;
                                    *(undefined4 *)(puVar24 + 1) = uVar33;
                                    if (*param_11 + 10 < *(uint *)(lVar22 + 0x18)) {
                                      fVar35 = *(float *)(param_10 + 0x618);
                                      lVar27 = lVar22 + (long)(int)(*param_11 + 10) * 0xc;
                                      *(float *)(lVar27 + 0x20) = param_5 + 0.0;
                                      *(float *)(lVar27 + 0x24) = param_3 + fVar35 * fVar39;
                                      *(float *)(lVar27 + 0x28) = param_7;
                                      if (*param_11 + 0xb < *(uint *)(lVar22 + 0x18)) {
                                        fVar35 = *(float *)(param_10 + 0x618);
                                        lVar27 = lVar22 + (long)(int)(*param_11 + 0xb) * 0xc;
                                        *(float *)(lVar27 + 0x20) = param_5 + 0.0;
                                        *(float *)(lVar27 + 0x24) =
                                             param_3 - (fVar30 + fVar35) * fVar39;
                                        *(float *)(lVar27 + 0x28) = param_7;
                                        if ((*(long *)(param_10 + 0x368) != 0) &&
                                           (lVar27 = *(long *)(*(long *)(param_10 + 0x368) + 0x60),
                                           lVar27 != 0)) {
                                          if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_03590b68;
                                          lVar26 = *(long *)(param_10 + 0x678);
                                          if (lVar26 != 0) {
                                            lVar27 = *(long *)(lVar27 + lVar29 * 0x50 + 0x48);
                                            iVar1 = *(int *)(lVar26 + 0x108);
                                            iVar4 = *(int *)(lVar26 + 0x10c);
                                            if (*(int *)(*(long *)
                                                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                                                  + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                            }
                                            iVar11 = FUN_03776a58(&stack0x000000d0,0);
                                            iVar12 = FUN_03776a60(&stack0x000000d0,0);
                                            fVar30 = *(float *)(param_10 + 0x618);
                                            iVar13 = FUN_03776a60(&stack0x000000d0,0);
                                            iVar14 = FUN_03776a70(&stack0x000000d0,0);
                                            fVar35 = *(float *)(param_10 + 0x618);
                                            iVar15 = FUN_03776a58(&stack0x000000d0,0);
                                            iVar16 = FUN_03776a68(&stack0x000000d0,0);
                                            iVar17 = FUN_03776a58(&stack0x000000d0,0);
                                            iVar18 = FUN_03776a68(&stack0x000000d0,0);
                                            iVar19 = FUN_03776a58(&stack0x000000d0,0);
                                            iVar20 = FUN_03776a68(&stack0x000000d0,0);
                                            if (lVar27 != 0) {
                                              if (*param_11 < *(uint *)(lVar27 + 0x18)) {
                                                fVar38 = (fVar31 * param_8) / fVar39;
                                                fVar34 = (float)iVar1;
                                                lVar26 = lVar27 + (long)(int)*param_11 * 8;
                                                fVar30 = ((float)iVar12 - fVar30) / (float)iVar4;
                                                fVar36 = ((float)iVar11 - fVar38) / fVar34;
                                                *(float *)(lVar26 + 0x20) = fVar36;
                                                *(float *)(lVar26 + 0x24) = fVar30;
                                                if (*param_11 + 1 < *(uint *)(lVar27 + 0x18)) {
                                                  lVar26 = lVar27 + (long)(int)(*param_11 + 1) * 8;
                                                  fVar35 = (fVar35 + (float)(iVar14 + iVar13)) /
                                                           (float)iVar4;
                                                  *(float *)(lVar26 + 0x20) = fVar36;
                                                  *(float *)(lVar26 + 0x24) = fVar35;
                                                  if (*param_11 + 2 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)(*param_11 + 2) * 8
                                                    ;
                                                    fVar36 = (((float)iVar15 - fVar38) +
                                                             (float)iVar16 * 0.5) / fVar34;
                                                    *(float *)(lVar26 + 0x20) = fVar36;
                                                    *(float *)(lVar26 + 0x24) = fVar35;
                                                    if (*param_11 + 3 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_11 + 3) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar36;
                                                      *(float *)(lVar26 + 0x24) = fVar30;
                                                      if (*param_11 + 4 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_11 + 4)
                                                                          * 8;
                                                        fVar38 = fVar36 * DAT_00d38e30;
                                                        fVar40 = fVar36 - fVar38;
                                                        *(float *)(lVar26 + 0x20) = fVar40;
                                                        *(float *)(lVar26 + 0x24) = fVar30;
                                                        if (*param_11 + 5 < *(uint *)(lVar27 + 0x18)
                                                           ) {
                                                          lVar26 = lVar27 + (long)(int)(*param_11 +
                                                                                       5) * 8;
                                                          *(float *)(lVar26 + 0x20) = fVar40;
                                                          *(float *)(lVar26 + 0x24) = fVar35;
                                                          if (*param_11 + 6 <
                                                              *(uint *)(lVar27 + 0x18)) {
                                                            fVar36 = fVar36 + fVar38;
                                                            lVar26 = lVar27 + (long)(int)(*param_11
                                                                                         + 6) * 8;
                                                            *(float *)(lVar26 + 0x20) = fVar36;
                                                            *(float *)(lVar26 + 0x24) = fVar35;
                                                            if (*param_11 + 7 <
                                                                *(uint *)(lVar27 + 0x18)) {
                                                              lVar26 = lVar27 + (long)(int)(*
                                                  param_11 + 7) * 8;
                                                  *(float *)(lVar26 + 0x20) = fVar36;
                                                  *(float *)(lVar26 + 0x24) = fVar30;
                                                  if (*param_11 + 8 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)(*param_11 + 8) * 8
                                                    ;
                                                    fVar39 = (fVar31 * param_9) / fVar39;
                                                    fVar31 = (fVar39 + (float)iVar17 +
                                                             (float)iVar18 * 0.5) / fVar34;
                                                    *(float *)(lVar26 + 0x20) = fVar31;
                                                    *(float *)(lVar26 + 0x24) = fVar30;
                                                    if (*param_11 + 9 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_11 + 9) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar31;
                                                      *(float *)(lVar26 + 0x24) = fVar35;
                                                      if (*param_11 + 10 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_11 + 10
                                                                                     ) * 8;
                                                        fVar34 = (fVar39 + (float)iVar19 +
                                                                 (float)iVar20) / fVar34;
                                                        *(float *)(lVar26 + 0x20) = fVar34;
                                                        *(float *)(lVar26 + 0x24) = fVar35;
                                                        if (*param_11 + 0xb <
                                                            *(uint *)(lVar27 + 0x18)) {
                                                          lVar27 = lVar27 + (long)(int)(*param_11 +
                                                                                       0xb) * 8;
                                                          *(float *)(lVar27 + 0x20) = fVar34;
                                                          *(float *)(lVar27 + 0x24) = fVar30;
                                                          uVar23 = *param_11;
                                                          if (uVar23 + 2 < *(uint *)(lVar22 + 0x18))
                                                          {
                                                            if ((*(long *)(param_10 + 0x368) == 0)
                                                               || (lVar27 = *(long *)(*(long *)(
                                                  param_10 + 0x368) + 0x60), lVar27 == 0))
                                                  goto LAB_03590b6c;
                                                  if (uVar5 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar27 = *(long *)(lVar27 + lVar29 * 0x50 + 0x50
                                                                      );
                                                    if (lVar27 == 0) goto LAB_03590b6c;
                                                    if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)uVar23 * 8;
                                                      fVar35 = ABS(in_stack_000001a8);
                                                      fVar30 = *(float *)(lVar22 + (long)(int)(
                                                  uVar23 + 2) * 0xc + 0x20);
                                                  *(undefined4 *)(lVar26 + 0x20) = 0;
                                                  *(float *)(lVar26 + 0x24) = fVar35;
                                                  fVar39 = DAT_00d388ac;
                                                  if (*param_11 + 1 < *(uint *)(lVar27 + 0x18)) {
                                                    fVar31 = ((fVar30 - param_2) / fVar32) *
                                                             DAT_00d388ac;
                                                    lVar26 = lVar27 + (long)(int)(*param_11 + 1) * 8
                                                    ;
                                                    *(undefined4 *)(lVar26 + 0x20) = 0x43ff8000;
                                                    *(float *)(lVar26 + 0x24) = fVar35;
                                                    fVar30 = -8.796093e+12;
                                                    if (fVar31 != INFINITY) {
                                                      fVar30 = (float)(int)fVar31 * 4096.0;
                                                    }
                                                    if (*param_11 + 2 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_11 + 2) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar30 + fVar39;
                                                      *(float *)(lVar26 + 0x24) = fVar35;
                                                      if (*param_11 + 3 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_11 + 3)
                                                                          * 8;
                                                        *(float *)(lVar26 + 0x20) = fVar30 + 0.0;
                                                        *(float *)(lVar26 + 0x24) = fVar35;
                                                        uVar23 = *param_11 + 4;
                                                        if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                                                           (uVar3 = *param_11 + 6,
                                                           uVar3 < *(uint *)(lVar22 + 0x18))) {
                                                          fVar31 = ((*(float *)(lVar22 + 0x20 +
                                                                               (long)(int)uVar23 *
                                                                               0xc) - param_2) /
                                                                   fVar32) * fVar39;
                                                          fVar30 = -8.796093e+12;
                                                          if (fVar31 != INFINITY) {
                                                            fVar30 = (float)(int)fVar31 * 4096.0;
                                                          }
                                                          if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                                                            lVar26 = lVar27 + (long)(int)uVar23 * 8;
                                                            fVar31 = *(float *)(lVar22 + 0x20 +
                                                                               (long)(int)uVar3 *
                                                                               0xc);
                                                            *(float *)(lVar26 + 0x20) = fVar30 + 0.0
                                                            ;
                                                            *(float *)(lVar26 + 0x24) = fVar35;
                                                            if (*param_11 + 5 <
                                                                *(uint *)(lVar27 + 0x18)) {
                                                              lVar26 = lVar27 + (long)(int)(*
                                                  param_11 + 5) * 8;
                                                  fVar31 = ((fVar31 - param_2) / fVar32) * fVar39;
                                                  *(float *)(lVar26 + 0x20) = fVar30 + fVar39;
                                                  *(float *)(lVar26 + 0x24) = fVar35;
                                                  fVar30 = -8.796093e+12;
                                                  if (fVar31 != INFINITY) {
                                                    fVar30 = (float)(int)fVar31 * 4096.0;
                                                  }
                                                  if (*param_11 + 6 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)(*param_11 + 6) * 8
                                                    ;
                                                    *(float *)(lVar26 + 0x20) = fVar30 + fVar39;
                                                    *(float *)(lVar26 + 0x24) = fVar35;
                                                    if (*param_11 + 7 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_11 + 7) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar30 + 0.0;
                                                      *(float *)(lVar26 + 0x24) = fVar35;
                                                      uVar23 = *param_11 + 8;
                                                      if (uVar23 < *(uint *)(lVar22 + 0x18)) {
                                                        fVar31 = ((*(float *)(lVar22 + (long)(int)
                                                  uVar23 * 0xc + 0x20) - param_2) / fVar32) * fVar39
                                                  ;
                                                  fVar30 = -8.796093e+12;
                                                  if (fVar31 != INFINITY) {
                                                    fVar30 = (float)(int)fVar31 * 4096.0;
                                                  }
                                                  if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar22 = lVar27 + (long)(int)uVar23 * 8;
                                                    *(float *)(lVar22 + 0x20) = fVar30 + 0.0;
                                                    *(float *)(lVar22 + 0x24) = fVar35;
                                                    if (*param_11 + 9 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar22 = lVar27 + (long)(int)(*param_11 + 9) *
                                                                        8;
                                                      *(float *)(lVar22 + 0x20) = fVar30 + fVar39;
                                                      *(float *)(lVar22 + 0x24) = fVar35;
                                                      if (*param_11 + 10 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar22 = lVar27 + (long)(int)(*param_11 + 10
                                                                                     ) * 8;
                                                        *(undefined4 *)(lVar22 + 0x20) = 0x49ff8ff8;
                                                        *(float *)(lVar22 + 0x24) = fVar35;
                                                        if (*param_11 + 0xb <
                                                            *(uint *)(lVar27 + 0x18)) {
                                                          lVar27 = lVar27 + (long)(int)(*param_11 +
                                                                                       0xb) * 8;
                                                          *(undefined4 *)(lVar27 + 0x20) =
                                                               0x49ff8000;
                                                          *(float *)(lVar27 + 0x24) = fVar35;
                                                          bVar2 = *(byte *)(param_10 + 0x147);
                                                          if ((uint)param_12 >> 0x18 <=
                                                              (uint)*(byte *)(param_10 + 0x147)) {
                                                            bVar2 = bStack00000000000000fc;
                                                          }
                                                          bStack00000000000000fc = bVar2;
                                                          if ((*(long *)(param_10 + 0x368) == 0) ||
                                                             (lVar22 = *(long *)(*(long *)(param_10 
                                                  + 0x368) + 0x60), lVar22 == 0)) goto LAB_03590b6c;
                                                  if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                                                    lVar22 = *(long *)(lVar22 + lVar29 * 0x50 + 0x58
                                                                      );
                                                    if (lVar22 == 0) goto LAB_03590b6c;
                                                    if (*param_11 < *(uint *)(lVar22 + 0x18)) {
                                                      lVar27 = lVar22 + (long)(int)*param_11 * 4;
                                                      uVar6 = (undefined1)((ulong)param_12 >> 0x10);
                                                      *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                      uVar7 = (undefined2)param_12;
                                                      *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                      *(byte *)(lVar27 + 0x23) = bVar2;
                                                      if (*param_11 + 1 < *(uint *)(lVar22 + 0x18))
                                                      {
                                                        lVar27 = lVar22 + (long)(int)(*param_11 + 1)
                                                                          * 4;
                                                        *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                        *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                        *(byte *)(lVar27 + 0x23) = bVar2;
                                                        if (*param_11 + 2 < *(uint *)(lVar22 + 0x18)
                                                           ) {
                                                          lVar27 = lVar22 + (long)(int)(*param_11 +
                                                                                       2) * 4;
                                                          *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                          *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                          *(byte *)(lVar27 + 0x23) = bVar2;
                                                          if (*param_11 + 3 <
                                                              *(uint *)(lVar22 + 0x18)) {
                                                            lVar27 = lVar22 + (long)(int)(*param_11
                                                                                         + 3) * 4;
                                                            *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                            *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                            *(byte *)(lVar27 + 0x23) = bVar2;
                                                            if (*param_11 + 4 <
                                                                *(uint *)(lVar22 + 0x18)) {
                                                              lVar27 = lVar22 + (long)(int)(*
                                                  param_11 + 4) * 4;
                                                  *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                  *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                  *(byte *)(lVar27 + 0x23) = bVar2;
                                                  if (*param_11 + 5 < *(uint *)(lVar22 + 0x18)) {
                                                    lVar27 = lVar22 + (long)(int)(*param_11 + 5) * 4
                                                    ;
                                                    *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                    *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                    *(byte *)(lVar27 + 0x23) = bVar2;
                                                    if (*param_11 + 6 < *(uint *)(lVar22 + 0x18)) {
                                                      lVar27 = lVar22 + (long)(int)(*param_11 + 6) *
                                                                        4;
                                                      *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                      *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                      *(byte *)(lVar27 + 0x23) = bVar2;
                                                      if (*param_11 + 7 < *(uint *)(lVar22 + 0x18))
                                                      {
                                                        lVar27 = lVar22 + (long)(int)(*param_11 + 7)
                                                                          * 4;
                                                        *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                        *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                        *(byte *)(lVar27 + 0x23) = bVar2;
                                                        if (*param_11 + 8 < *(uint *)(lVar22 + 0x18)
                                                           ) {
                                                          lVar27 = lVar22 + (long)(int)(*param_11 +
                                                                                       8) * 4;
                                                          *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                          *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                          *(byte *)(lVar27 + 0x23) = bVar2;
                                                          if (*param_11 + 9 <
                                                              *(uint *)(lVar22 + 0x18)) {
                                                            lVar27 = lVar22 + (long)(int)(*param_11
                                                                                         + 9) * 4;
                                                            *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                            *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                            *(byte *)(lVar27 + 0x23) = bVar2;
                                                            if (*param_11 + 10 <
                                                                *(uint *)(lVar22 + 0x18)) {
                                                              lVar27 = lVar22 + (long)(int)(*
                                                  param_11 + 10) * 4;
                                                  *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                  *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                  *(byte *)(lVar27 + 0x23) = bVar2;
                                                  if (*param_11 + 0xb < *(uint *)(lVar22 + 0x18)) {
                                                    lVar22 = lVar22 + (long)(int)(*param_11 + 0xb) *
                                                                      4;
                                                    *(undefined1 *)(lVar22 + 0x22) = uVar6;
                                                    *(undefined2 *)(lVar22 + 0x20) = uVar7;
                                                    *(byte *)(lVar22 + 0x23) = bVar2;
                                                    *param_11 = *param_11 + 0xc;
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
    }
  }
LAB_03590b6c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


