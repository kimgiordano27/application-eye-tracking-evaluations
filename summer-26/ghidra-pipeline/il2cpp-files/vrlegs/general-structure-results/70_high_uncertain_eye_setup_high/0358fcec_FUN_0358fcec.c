/*
FUNCTION_NAME: FUN_0358fcec
ENTRY_POINT: 0358fcec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0358fcec(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long param_9,uint *param_10,
                 undefined8 param_11)

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
  float in_stack_00000000;
  float in_stack_00000008;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  byte local_a4;
  
                    /* try { // try from 0358fd0c to 0368fd0f has its CatchHandler @ 03590268 */
                    /* try { // try from 0358fd10 to 0368fd17 has its CatchHandler @ 03590214 */
  local_a4 = (byte)((ulong)param_11 >> 0x18);
  if ((DAT_0412e078 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe438);
    FUN_01ab69ac(System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo)
    ;
    FUN_01ab69ac(OVRPlugin_Media_TypeInfo);
    FUN_01ab69ac(Hdg_ReadMessageThread_<>c__DisplayClass15_0_TypeInfo);
    DAT_0412e078 = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  FUN_03590b70(param_9,*(undefined8 *)(param_9 + 0xf8));
  auVar9._8_8_ = local_d0._8_8_;
  auVar9._0_8_ = local_d0._0_8_;
  auVar8._8_8_ = local_d0._8_8_;
  auVar8._0_8_ = local_d0._0_8_;
  lVar22 = *(long *)(param_9 + 0x670);
  if (lVar22 == 0) {
    uVar21 = FUN_03597634(0);
    if ((uVar21 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0367b470(*(undefined8 *)Hdg_ReadMessageThread_<>c__DisplayClass15_0_TypeInfo,param_9,0);
    }
    return;
  }
  if ((*(long *)(param_9 + 0x368) != 0) &&
     (lVar27 = *(long *)(*(long *)(param_9 + 0x368) + 0x60), local_d0 = auVar8, lVar27 != 0)) {
    uVar5 = *(uint *)(param_9 + 0x688);
    lVar29 = (long)(int)uVar5;
    uVar23 = *(uint *)(lVar27 + 0x18);
    local_d0 = auVar9;
    if (uVar23 <= uVar5) goto LAB_03590b68;
    lVar28 = lVar27 + lVar29 * 0x50;
    lVar26 = *(long *)(lVar28 + 0x30);
    if (lVar26 != 0) {
      uVar3 = *param_10;
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
        lVar22 = *(long *)(param_9 + 0x670);
        if (param_5 <= param_2) {
          param_2 = param_5;
        }
        if (lVar22 == 0) goto LAB_03590b6c;
      }
      else if (param_5 <= param_2) {
        param_2 = param_5;
      }
      if (*(long *)(lVar22 + 0x20) != 0) {
        FUN_03776e6c(&local_148,*(long *)(lVar22 + 0x20),0);
        auVar10._8_8_ = local_d0._8_8_;
        auVar10._0_8_ = local_d0._0_8_;
        uStack_b8 = uStack_140;
        local_c0 = local_148;
        local_b0 = local_138;
        if ((*(long *)(param_9 + 0x670) != 0) &&
           (lVar22 = *(long *)(*(long *)(param_9 + 0x670) + 0x20), local_d0 = auVar10, lVar22 != 0))
        {
          local_d0 = FUN_03776e94(lVar22,0);
          fVar30 = (float)FUN_03776c94(&local_c0,0);
          fVar31 = (float)FUN_03776c94(&local_c0,0);
          fVar32 = param_4 - param_1;
          fVar35 = fVar32 * 0.5;
          if (fVar31 * in_stack_00000000 <= fVar32) {
            fVar35 = fVar30 * 0.5 * in_stack_00000000;
          }
          if (*(long *)(param_9 + 0x678) != 0) {
            fVar31 = *(float *)(param_9 + 0x618);
            memmove(&local_130,(void *)(*(long *)(param_9 + 0x678) + 0x50),0x60);
            fVar30 = (float)FUN_03776a20(&local_130,0);
            if ((*(long *)(param_9 + 0x368) != 0) &&
               (lVar22 = *(long *)(*(long *)(param_9 + 0x368) + 0x60), lVar22 != 0)) {
              if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                lVar22 = *(long *)(lVar22 + lVar29 * 0x50 + 0x30);
                if (lVar22 == 0) goto LAB_03590b6c;
                if (*param_10 < *(uint *)(lVar22 + 0x18)) {
                  fVar34 = *(float *)(param_9 + 0x618);
                  lVar27 = lVar22 + (long)(int)*param_10 * 0xc;
                  *(float *)(lVar27 + 0x20) = param_1 + 0.0;
                  *(float *)(lVar27 + 0x24) =
                       param_2 + (0.0 - (fVar30 + fVar34) * in_stack_00000000);
                  *(float *)(lVar27 + 0x28) = param_3 + 0.0;
                  if (*param_10 + 1 < *(uint *)(lVar22 + 0x18)) {
                    fVar34 = *(float *)(param_9 + 0x618);
                    lVar27 = lVar22 + (long)(int)(*param_10 + 1) * 0xc;
                    *(float *)(lVar27 + 0x20) = param_1 + 0.0;
                    *(float *)(lVar27 + 0x24) = param_2 + fVar34 * in_stack_00000000;
                    *(float *)(lVar27 + 0x28) = param_3 + 0.0;
                    uVar23 = *param_10 + 1;
                    if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                       (uVar3 = *param_10 + 2, uVar3 < *(uint *)(lVar22 + 0x18))) {
                      puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                      fVar34 = *(float *)(puVar24 + 1);
                      uVar37 = *puVar24;
                      puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                      *puVar24 = CONCAT44((float)((ulong)uVar37 >> 0x20) + 0.0,
                                          fVar35 + (float)uVar37);
                      *(float *)(puVar24 + 1) = fVar34 + 0.0;
                      uVar23 = *param_10;
                      if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                         (uVar23 + 3 < *(uint *)(lVar22 + 0x18))) {
                        puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                        fVar34 = *(float *)(puVar24 + 1);
                        uVar37 = *puVar24;
                        puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)(uVar23 + 3) * 0xc);
                        *puVar24 = CONCAT44((float)((ulong)uVar37 >> 0x20) + 0.0,
                                            fVar35 + (float)uVar37);
                        *(float *)(puVar24 + 1) = fVar34 + 0.0;
                        uVar23 = *param_10 + 3;
                        if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                           (uVar3 = *param_10 + 4, uVar3 < *(uint *)(lVar22 + 0x18))) {
                          puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                          uVar33 = *(undefined4 *)(puVar25 + 1);
                          puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                          *puVar24 = *puVar25;
                          *(undefined4 *)(puVar24 + 1) = uVar33;
                          uVar23 = *param_10 + 2;
                          if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                             (uVar3 = *param_10 + 5, uVar3 < *(uint *)(lVar22 + 0x18))) {
                            puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                            uVar33 = *(undefined4 *)(puVar25 + 1);
                            puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                            *puVar24 = *puVar25;
                            *(undefined4 *)(puVar24 + 1) = uVar33;
                            if (*param_10 + 6 < *(uint *)(lVar22 + 0x18)) {
                              fVar34 = *(float *)(param_9 + 0x618);
                              param_6 = param_6 + 0.0;
                              lVar27 = lVar22 + (long)(int)(*param_10 + 6) * 0xc;
                              *(float *)(lVar27 + 0x20) = param_4 - fVar35;
                              *(float *)(lVar27 + 0x24) = param_2 + fVar34 * in_stack_00000000;
                              *(float *)(lVar27 + 0x28) = param_6;
                              if (*param_10 + 7 < *(uint *)(lVar22 + 0x18)) {
                                fVar34 = *(float *)(param_9 + 0x618);
                                lVar27 = lVar22 + (long)(int)(*param_10 + 7) * 0xc;
                                *(float *)(lVar27 + 0x20) = param_4 - fVar35;
                                *(float *)(lVar27 + 0x24) =
                                     param_2 - (fVar30 + fVar34) * in_stack_00000000;
                                *(float *)(lVar27 + 0x28) = param_6;
                                uVar23 = *param_10 + 7;
                                if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                                   (uVar3 = *param_10 + 8, uVar3 < *(uint *)(lVar22 + 0x18))) {
                                  puVar25 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                                  uVar33 = *(undefined4 *)(puVar25 + 1);
                                  puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc);
                                  *puVar24 = *puVar25;
                                  *(undefined4 *)(puVar24 + 1) = uVar33;
                                  uVar23 = *param_10 + 6;
                                  if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                                     (uVar3 = *param_10 + 9, uVar3 < *(uint *)(lVar22 + 0x18))) {
                                    puVar25 = (undefined8 *)
                                              (lVar22 + 0x20 + (long)(int)uVar23 * 0xc);
                                    uVar33 = *(undefined4 *)(puVar25 + 1);
                                    puVar24 = (undefined8 *)(lVar22 + 0x20 + (long)(int)uVar3 * 0xc)
                                    ;
                                    *puVar24 = *puVar25;
                                    *(undefined4 *)(puVar24 + 1) = uVar33;
                                    if (*param_10 + 10 < *(uint *)(lVar22 + 0x18)) {
                                      fVar35 = *(float *)(param_9 + 0x618);
                                      lVar27 = lVar22 + (long)(int)(*param_10 + 10) * 0xc;
                                      *(float *)(lVar27 + 0x20) = param_4 + 0.0;
                                      *(float *)(lVar27 + 0x24) =
                                           param_2 + fVar35 * in_stack_00000000;
                                      *(float *)(lVar27 + 0x28) = param_6;
                                      if (*param_10 + 0xb < *(uint *)(lVar22 + 0x18)) {
                                        fVar35 = *(float *)(param_9 + 0x618);
                                        lVar27 = lVar22 + (long)(int)(*param_10 + 0xb) * 0xc;
                                        *(float *)(lVar27 + 0x20) = param_4 + 0.0;
                                        *(float *)(lVar27 + 0x24) =
                                             param_2 - (fVar30 + fVar35) * in_stack_00000000;
                                        *(float *)(lVar27 + 0x28) = param_6;
                                        if ((*(long *)(param_9 + 0x368) != 0) &&
                                           (lVar27 = *(long *)(*(long *)(param_9 + 0x368) + 0x60),
                                           lVar27 != 0)) {
                                          if (*(uint *)(lVar27 + 0x18) <= uVar5) goto LAB_03590b68;
                                          lVar26 = *(long *)(param_9 + 0x678);
                                          if (lVar26 != 0) {
                                            lVar27 = *(long *)(lVar27 + lVar29 * 0x50 + 0x48);
                                            iVar1 = *(int *)(lVar26 + 0x108);
                                            iVar4 = *(int *)(lVar26 + 0x10c);
                                            if (*(int *)(*(long *)
                                                  System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                                                  + 0xe0) == 0) {
                                              thunk_FUN_01a58e78();
                                            }
                                            iVar11 = FUN_03776a58(local_d0,0);
                                            iVar12 = FUN_03776a60(local_d0,0);
                                            fVar30 = *(float *)(param_9 + 0x618);
                                            iVar13 = FUN_03776a60(local_d0,0);
                                            iVar14 = FUN_03776a70(local_d0,0);
                                            fVar35 = *(float *)(param_9 + 0x618);
                                            iVar15 = FUN_03776a58(local_d0,0);
                                            iVar16 = FUN_03776a68(local_d0,0);
                                            iVar17 = FUN_03776a58(local_d0,0);
                                            iVar18 = FUN_03776a68(local_d0,0);
                                            iVar19 = FUN_03776a58(local_d0,0);
                                            iVar20 = FUN_03776a68(local_d0,0);
                                            if (lVar27 != 0) {
                                              if (*param_10 < *(uint *)(lVar27 + 0x18)) {
                                                fVar38 = (fVar31 * param_7) / in_stack_00000000;
                                                fVar34 = (float)iVar1;
                                                lVar26 = lVar27 + (long)(int)*param_10 * 8;
                                                fVar30 = ((float)iVar12 - fVar30) / (float)iVar4;
                                                fVar36 = ((float)iVar11 - fVar38) / fVar34;
                                                *(float *)(lVar26 + 0x20) = fVar36;
                                                *(float *)(lVar26 + 0x24) = fVar30;
                                                if (*param_10 + 1 < *(uint *)(lVar27 + 0x18)) {
                                                  lVar26 = lVar27 + (long)(int)(*param_10 + 1) * 8;
                                                  fVar35 = (fVar35 + (float)(iVar14 + iVar13)) /
                                                           (float)iVar4;
                                                  *(float *)(lVar26 + 0x20) = fVar36;
                                                  *(float *)(lVar26 + 0x24) = fVar35;
                                                  if (*param_10 + 2 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)(*param_10 + 2) * 8
                                                    ;
                                                    fVar36 = (((float)iVar15 - fVar38) +
                                                             (float)iVar16 * 0.5) / fVar34;
                                                    *(float *)(lVar26 + 0x20) = fVar36;
                                                    *(float *)(lVar26 + 0x24) = fVar35;
                                                    if (*param_10 + 3 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_10 + 3) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar36;
                                                      *(float *)(lVar26 + 0x24) = fVar30;
                                                      if (*param_10 + 4 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_10 + 4)
                                                                          * 8;
                                                        fVar38 = fVar36 * DAT_00d38e30;
                                                        fVar39 = fVar36 - fVar38;
                                                        *(float *)(lVar26 + 0x20) = fVar39;
                                                        *(float *)(lVar26 + 0x24) = fVar30;
                                                        if (*param_10 + 5 < *(uint *)(lVar27 + 0x18)
                                                           ) {
                                                          lVar26 = lVar27 + (long)(int)(*param_10 +
                                                                                       5) * 8;
                                                          *(float *)(lVar26 + 0x20) = fVar39;
                                                          *(float *)(lVar26 + 0x24) = fVar35;
                                                          if (*param_10 + 6 <
                                                              *(uint *)(lVar27 + 0x18)) {
                                                            fVar36 = fVar36 + fVar38;
                                                            lVar26 = lVar27 + (long)(int)(*param_10
                                                                                         + 6) * 8;
                                                            *(float *)(lVar26 + 0x20) = fVar36;
                                                            *(float *)(lVar26 + 0x24) = fVar35;
                                                            if (*param_10 + 7 <
                                                                *(uint *)(lVar27 + 0x18)) {
                                                              lVar26 = lVar27 + (long)(int)(*
                                                  param_10 + 7) * 8;
                                                  *(float *)(lVar26 + 0x20) = fVar36;
                                                  *(float *)(lVar26 + 0x24) = fVar30;
                                                  if (*param_10 + 8 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)(*param_10 + 8) * 8
                                                    ;
                                                    in_stack_00000000 =
                                                         (fVar31 * param_8) / in_stack_00000000;
                                                    fVar31 = (in_stack_00000000 + (float)iVar17 +
                                                             (float)iVar18 * 0.5) / fVar34;
                                                    *(float *)(lVar26 + 0x20) = fVar31;
                                                    *(float *)(lVar26 + 0x24) = fVar30;
                                                    if (*param_10 + 9 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_10 + 9) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar31;
                                                      *(float *)(lVar26 + 0x24) = fVar35;
                                                      if (*param_10 + 10 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_10 + 10
                                                                                     ) * 8;
                                                        fVar34 = (in_stack_00000000 + (float)iVar19
                                                                 + (float)iVar20) / fVar34;
                                                        *(float *)(lVar26 + 0x20) = fVar34;
                                                        *(float *)(lVar26 + 0x24) = fVar35;
                                                        if (*param_10 + 0xb <
                                                            *(uint *)(lVar27 + 0x18)) {
                                                          lVar27 = lVar27 + (long)(int)(*param_10 +
                                                                                       0xb) * 8;
                                                          *(float *)(lVar27 + 0x20) = fVar34;
                                                          *(float *)(lVar27 + 0x24) = fVar30;
                                                          uVar23 = *param_10;
                                                          if (uVar23 + 2 < *(uint *)(lVar22 + 0x18))
                                                          {
                                                            if ((*(long *)(param_9 + 0x368) == 0) ||
                                                               (lVar27 = *(long *)(*(long *)(param_9
                                                                                            + 0x368)
                                                                                  + 0x60),
                                                               lVar27 == 0)) goto LAB_03590b6c;
                                                            if (uVar5 < *(uint *)(lVar27 + 0x18)) {
                                                              lVar27 = *(long *)(lVar27 + lVar29 * 
                                                  0x50 + 0x50);
                                                  if (lVar27 == 0) goto LAB_03590b6c;
                                                  if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)uVar23 * 8;
                                                    in_stack_00000008 = ABS(in_stack_00000008);
                                                    fVar30 = *(float *)(lVar22 + (long)(int)(uVar23 
                                                  + 2) * 0xc + 0x20);
                                                  *(undefined4 *)(lVar26 + 0x20) = 0;
                                                  *(float *)(lVar26 + 0x24) = in_stack_00000008;
                                                  fVar35 = DAT_00d388ac;
                                                  if (*param_10 + 1 < *(uint *)(lVar27 + 0x18)) {
                                                    fVar31 = ((fVar30 - param_1) / fVar32) *
                                                             DAT_00d388ac;
                                                    lVar26 = lVar27 + (long)(int)(*param_10 + 1) * 8
                                                    ;
                                                    *(undefined4 *)(lVar26 + 0x20) = 0x43ff8000;
                                                    *(float *)(lVar26 + 0x24) = in_stack_00000008;
                                                    fVar30 = -8.796093e+12;
                                                    if (fVar31 != INFINITY) {
                                                      fVar30 = (float)(int)fVar31 * 4096.0;
                                                    }
                                                    if (*param_10 + 2 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_10 + 2) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar30 + fVar35;
                                                      *(float *)(lVar26 + 0x24) = in_stack_00000008;
                                                      if (*param_10 + 3 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar26 = lVar27 + (long)(int)(*param_10 + 3)
                                                                          * 8;
                                                        *(float *)(lVar26 + 0x20) = fVar30 + 0.0;
                                                        *(float *)(lVar26 + 0x24) =
                                                             in_stack_00000008;
                                                        uVar23 = *param_10 + 4;
                                                        if ((uVar23 < *(uint *)(lVar22 + 0x18)) &&
                                                           (uVar3 = *param_10 + 6,
                                                           uVar3 < *(uint *)(lVar22 + 0x18))) {
                                                          fVar31 = ((*(float *)(lVar22 + 0x20 +
                                                                               (long)(int)uVar23 *
                                                                               0xc) - param_1) /
                                                                   fVar32) * fVar35;
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
                                                            *(float *)(lVar26 + 0x24) =
                                                                 in_stack_00000008;
                                                            if (*param_10 + 5 <
                                                                *(uint *)(lVar27 + 0x18)) {
                                                              lVar26 = lVar27 + (long)(int)(*
                                                  param_10 + 5) * 8;
                                                  fVar31 = ((fVar31 - param_1) / fVar32) * fVar35;
                                                  *(float *)(lVar26 + 0x20) = fVar30 + fVar35;
                                                  *(float *)(lVar26 + 0x24) = in_stack_00000008;
                                                  fVar30 = -8.796093e+12;
                                                  if (fVar31 != INFINITY) {
                                                    fVar30 = (float)(int)fVar31 * 4096.0;
                                                  }
                                                  if (*param_10 + 6 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar26 = lVar27 + (long)(int)(*param_10 + 6) * 8
                                                    ;
                                                    *(float *)(lVar26 + 0x20) = fVar30 + fVar35;
                                                    *(float *)(lVar26 + 0x24) = in_stack_00000008;
                                                    if (*param_10 + 7 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar26 = lVar27 + (long)(int)(*param_10 + 7) *
                                                                        8;
                                                      *(float *)(lVar26 + 0x20) = fVar30 + 0.0;
                                                      *(float *)(lVar26 + 0x24) = in_stack_00000008;
                                                      uVar23 = *param_10 + 8;
                                                      if (uVar23 < *(uint *)(lVar22 + 0x18)) {
                                                        fVar31 = ((*(float *)(lVar22 + (long)(int)
                                                  uVar23 * 0xc + 0x20) - param_1) / fVar32) * fVar35
                                                  ;
                                                  fVar30 = -8.796093e+12;
                                                  if (fVar31 != INFINITY) {
                                                    fVar30 = (float)(int)fVar31 * 4096.0;
                                                  }
                                                  if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                                                    lVar22 = lVar27 + (long)(int)uVar23 * 8;
                                                    *(float *)(lVar22 + 0x20) = fVar30 + 0.0;
                                                    *(float *)(lVar22 + 0x24) = in_stack_00000008;
                                                    if (*param_10 + 9 < *(uint *)(lVar27 + 0x18)) {
                                                      lVar22 = lVar27 + (long)(int)(*param_10 + 9) *
                                                                        8;
                                                      *(float *)(lVar22 + 0x20) = fVar30 + fVar35;
                                                      *(float *)(lVar22 + 0x24) = in_stack_00000008;
                                                      if (*param_10 + 10 < *(uint *)(lVar27 + 0x18))
                                                      {
                                                        lVar22 = lVar27 + (long)(int)(*param_10 + 10
                                                                                     ) * 8;
                                                        *(undefined4 *)(lVar22 + 0x20) = 0x49ff8ff8;
                                                        *(float *)(lVar22 + 0x24) =
                                                             in_stack_00000008;
                                                        if (*param_10 + 0xb <
                                                            *(uint *)(lVar27 + 0x18)) {
                                                          lVar27 = lVar27 + (long)(int)(*param_10 +
                                                                                       0xb) * 8;
                                                          *(undefined4 *)(lVar27 + 0x20) =
                                                               0x49ff8000;
                                                          *(float *)(lVar27 + 0x24) =
                                                               in_stack_00000008;
                                                          bVar2 = *(byte *)(param_9 + 0x147);
                                                          if ((uint)param_11 >> 0x18 <=
                                                              (uint)*(byte *)(param_9 + 0x147)) {
                                                            bVar2 = local_a4;
                                                          }
                                                          local_a4 = bVar2;
                                                          if ((*(long *)(param_9 + 0x368) == 0) ||
                                                             (lVar22 = *(long *)(*(long *)(param_9 +
                                                                                          0x368) +
                                                                                0x60), lVar22 == 0))
                                                          goto LAB_03590b6c;
                                                          if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                                                            lVar22 = *(long *)(lVar22 + lVar29 * 
                                                  0x50 + 0x58);
                                                  if (lVar22 == 0) goto LAB_03590b6c;
                                                  if (*param_10 < *(uint *)(lVar22 + 0x18)) {
                                                    lVar27 = lVar22 + (long)(int)*param_10 * 4;
                                                    uVar6 = (undefined1)((ulong)param_11 >> 0x10);
                                                    *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                    uVar7 = (undefined2)param_11;
                                                    *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                    *(byte *)(lVar27 + 0x23) = bVar2;
                                                    if (*param_10 + 1 < *(uint *)(lVar22 + 0x18)) {
                                                      lVar27 = lVar22 + (long)(int)(*param_10 + 1) *
                                                                        4;
                                                      *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                      *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                      *(byte *)(lVar27 + 0x23) = bVar2;
                                                      if (*param_10 + 2 < *(uint *)(lVar22 + 0x18))
                                                      {
                                                        lVar27 = lVar22 + (long)(int)(*param_10 + 2)
                                                                          * 4;
                                                        *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                        *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                        *(byte *)(lVar27 + 0x23) = bVar2;
                                                        if (*param_10 + 3 < *(uint *)(lVar22 + 0x18)
                                                           ) {
                                                          lVar27 = lVar22 + (long)(int)(*param_10 +
                                                                                       3) * 4;
                                                          *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                          *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                          *(byte *)(lVar27 + 0x23) = bVar2;
                                                          if (*param_10 + 4 <
                                                              *(uint *)(lVar22 + 0x18)) {
                                                            lVar27 = lVar22 + (long)(int)(*param_10
                                                                                         + 4) * 4;
                                                            *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                            *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                            *(byte *)(lVar27 + 0x23) = bVar2;
                                                            if (*param_10 + 5 <
                                                                *(uint *)(lVar22 + 0x18)) {
                                                              lVar27 = lVar22 + (long)(int)(*
                                                  param_10 + 5) * 4;
                                                  *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                  *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                  *(byte *)(lVar27 + 0x23) = bVar2;
                                                  if (*param_10 + 6 < *(uint *)(lVar22 + 0x18)) {
                                                    lVar27 = lVar22 + (long)(int)(*param_10 + 6) * 4
                                                    ;
                                                    *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                    *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                    *(byte *)(lVar27 + 0x23) = bVar2;
                                                    if (*param_10 + 7 < *(uint *)(lVar22 + 0x18)) {
                                                      lVar27 = lVar22 + (long)(int)(*param_10 + 7) *
                                                                        4;
                                                      *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                      *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                      *(byte *)(lVar27 + 0x23) = bVar2;
                                                      if (*param_10 + 8 < *(uint *)(lVar22 + 0x18))
                                                      {
                                                        lVar27 = lVar22 + (long)(int)(*param_10 + 8)
                                                                          * 4;
                                                        *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                        *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                        *(byte *)(lVar27 + 0x23) = bVar2;
                                                        if (*param_10 + 9 < *(uint *)(lVar22 + 0x18)
                                                           ) {
                                                          lVar27 = lVar22 + (long)(int)(*param_10 +
                                                                                       9) * 4;
                                                          *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                          *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                          *(byte *)(lVar27 + 0x23) = bVar2;
                                                          if (*param_10 + 10 <
                                                              *(uint *)(lVar22 + 0x18)) {
                                                            lVar27 = lVar22 + (long)(int)(*param_10
                                                                                         + 10) * 4;
                                                            *(undefined1 *)(lVar27 + 0x22) = uVar6;
                                                            *(undefined2 *)(lVar27 + 0x20) = uVar7;
                                                            *(byte *)(lVar27 + 0x23) = bVar2;
                                                            if (*param_10 + 0xb <
                                                                *(uint *)(lVar22 + 0x18)) {
                                                              lVar22 = lVar22 + (long)(int)(*
                                                  param_10 + 0xb) * 4;
                                                  *(undefined1 *)(lVar22 + 0x22) = uVar6;
                                                  *(undefined2 *)(lVar22 + 0x20) = uVar7;
                                                  *(byte *)(lVar22 + 0x23) = bVar2;
                                                  *param_10 = *param_10 + 0xc;
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


