/*
FUNCTION_NAME: FUN_0751790c
ENTRY_POINT: 0751790c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x07517f64) */
/* WARNING: Removing unreachable block (ram,0x07517c7c) */
/* WARNING: Removing unreachable block (ram,0x07517eec) */
/* WARNING: Removing unreachable block (ram,0x07517d00) */

void FUN_0751790c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  int iVar19;
  undefined1 auVar20 [16];
  long *local_108;
  long **local_100;
  long *local_f8;
  long **pplStack_f0;
  long local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  long *local_c0;
  long **pplStack_b8;
  long local_b0;
  long *local_a0;
  long **pplStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  long *local_68;
  
  puVar5 = Method_Unity_InferenceEngine_PartialTensorElement<int>_op_ExclusiveOr__;
  puVar4 = Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Equality__;
  puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Division__;
  puVar2 = Method_Unity_InferenceEngine_PartialTensorElement<int>_op_BitwiseOr__;
  if ((DAT_07ef4b84 & 1) == 0) {
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_GreaterThan__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_GreaterThanOrEqual__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Multiply__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_OnesComplement__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Subtraction__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_UnaryNegation__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Eq__);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_FMod__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Ge__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Gt__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Le__);
    FUN_03642964(PTR_DAT_07a30e10);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Lt__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_ExclusiveOr__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Division__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Max__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Min__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Mod__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Equality__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_BitwiseOr__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b84 = 1;
  }
  local_68 = (long *)0x0;
  local_c0 = (long *)0x0;
  pplStack_b8 = (long **)0x0;
  local_b0 = 0;
  local_c8 = (long *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  pplStack_98 = (long **)0x0;
  local_a0 = (long *)0x0;
  uStack_88 = 0;
  local_90 = 0;
  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_044d2bec(lVar8,*(undefined8 *)puVar3);
  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
  FUN_0459e7d4(lVar9,*(undefined8 *)puVar5);
  puVar6 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Le__;
  puVar5 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Gt__;
  puVar4 = Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Subtraction__;
  puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<int>_op_OnesComplement__;
  puVar2 = Method_Unity_InferenceEngine_PartialTensorElement<int>_op_GreaterThanOrEqual__;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_0551e798(&local_f8,*(long *)(param_1 + 0x18),
                 *(undefined8 *)
                  Method_Unity_InferenceEngine_PartialTensorElement<int>_op_GreaterThan__);
    local_100 = &local_a0;
    local_108 = (long *)0x0;
    pplStack_98 = pplStack_f0;
    local_a0 = local_f8;
    uStack_88 = uStack_e0;
    local_90 = local_e8;
    uStack_78 = uStack_d0;
    local_80 = local_d8;
    while (uVar10 = FUN_058f61f8(&local_a0,*(undefined8 *)puVar3), uVar12 = uStack_88,
          lVar16 = local_90, plVar11 = local_108, (uVar10 & 1) != 0) {
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      FUN_0459fb44(&local_f8,local_80,
                   *(undefined8 *)Method_Unity_InferenceEngine_PartialTensorElement<float>_Lt__);
      local_c0 = local_f8;
      local_f8 = (long *)0x0;
      pplStack_b8 = pplStack_f0;
      local_b0 = local_e8;
      pplStack_f0 = &local_c0;
LAB_07517b80:
      uVar10 = FUN_05897b28(&local_c0,*(undefined8 *)puVar4);
      lVar7 = local_b0;
      if ((uVar10 & 1) != 0) {
        if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        if (*(char *)(local_b0 + 0x18) != '\0') {
          if (lVar8 != 0) {
            lVar15 = *(long *)(lVar8 + 0x10);
            lVar17 = *(long *)puVar6;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar15 + 0x20);
                *plVar11 = lVar16;
                *(undefined8 *)(lVar15 + 0x28) = uVar12;
                thunk_FUN_036b7ad0(plVar11,0);
              }
              else {
                FUN_044d3498(lVar8,lVar16,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              if (lVar9 != 0) {
                lVar15 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)puVar5;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar15 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar11 = lVar7;
                    thunk_FUN_036b7ad0(plVar11,lVar7);
                  }
                  else {
                    FUN_0459f03c(lVar9,lVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  goto LAB_07517b80;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        goto LAB_07517b80;
      }
      FUN_05897b24(&local_c0,*(undefined8 *)puVar2);
    }
    FUN_058f6334(local_100,
                 *(undefined8 *)Method_Unity_InferenceEngine_PartialTensorElement<int>_op_Multiply__
                );
    puVar2 = PTR_DAT_079f4610;
    if (plVar11 != (long *)0x0) {
LAB_07518034:
                    /* WARNING: Subroutine does not return */
      FUN_03642c00(plVar11);
    }
    if (lVar9 != 0) {
      local_f8 = (long *)CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar9 + 0x18));
      uVar12 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&local_f8);
      if (lVar8 != 0) {
        local_108 = (long *)CONCAT44(local_108._4_4_,*(undefined4 *)(lVar8 + 0x18));
        uVar13 = thunk_FUN_0367fa58(*(undefined8 *)(puVar2 + 0x48),&local_108);
        FUN_074ee570(uVar12,uVar13,0);
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        local_68 = (long *)FUN_03fc4cf8(*(undefined8 *)
                                         Method_Unity_InferenceEngine_PartialTensorElement<float>_Sign__
                                       );
        puVar3 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Ne__;
        puVar2 = Method_Unity_InferenceEngine_PartialTensorElement<float>_Mod__;
        pplStack_f0 = &local_68;
        local_f8 = (long *)0x0;
        if (0 < *(int *)(lVar9 + 0x18)) {
          iVar19 = 0;
          do {
            auVar20 = FUN_044d3184(lVar8,iVar19,*(undefined8 *)puVar2);
            uVar12 = FUN_0459ed6c(lVar9,iVar19,*(undefined8 *)puVar3);
            if (*(int *)(*(long *)
                          Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                        + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            local_c8 = (long *)FUN_07538400(param_1,auVar20._0_8_,0);
            local_108 = (long *)0x0;
            local_100 = &local_c8;
            if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            local_c8[3] = auVar20._8_8_;
            thunk_FUN_036b7ad0(local_c8 + 3,auVar20._8_8_);
            if (local_c8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            *(undefined4 *)((long)local_c8 + 0x44) = 1;
            *(undefined1 *)(local_c8 + 8) = 0;
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            lVar16 = local_68[3];
            *(undefined4 *)(local_68 + 3) = 0;
            *(int *)((long)local_68 + 0x1c) = *(int *)((long)local_68 + 0x1c) + 1;
            if (0 < (int)lVar16) {
              FUN_05e3b0f4(local_68[2],0,(int)lVar16,0);
            }
            FUN_075184c8(param_1,uVar12,local_c8,local_68);
            plVar11 = local_c8;
            if (local_c8 != (long *)0x0) {
              lVar16 = *local_c8;
              uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar10 != 0) {
                piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_079f4598) {
                    puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_07517ed4;
                  }
                  uVar10 = uVar10 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar10 != 0);
              }
              puVar14 = (undefined8 *)FUN_0367cd30(local_c8,*(long *)PTR_DAT_079f4598,0);
LAB_07517ed4:
              (*(code *)*puVar14)(plVar11,puVar14[1]);
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 < *(int *)(lVar9 + 0x18));
        }
        plVar11 = *pplStack_f0;
        if (*(int *)(*(long *)
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                    + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_03fc4778(plVar11,*(undefined8 *)
                              Method_Unity_InferenceEngine_PartialTensorElement<float>_Pow__);
        plVar11 = local_f8;
        if (local_f8 == (long *)0x0) {
          return;
        }
        goto LAB_07518034;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


