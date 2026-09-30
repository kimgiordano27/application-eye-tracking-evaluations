/*
FUNCTION_NAME: FUN_07518870
ENTRY_POINT: 07518870
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07518aac) */

void FUN_07518870(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  long local_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long lStack_68;
  
  if ((DAT_07ef4b85 & 1) == 0) {
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<int>_op_BitwiseAnd__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Subtraction__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensorElement<float>_op_UnaryNegation__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<byte>__ctor__);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<byte>_FromValues__);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(Method_Unity_InferenceEngine_PartialTensor<short>__ctor__);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    DAT_07ef4b85 = 1;
  }
  uStack_78 = 0;
  local_80 = 0;
  lStack_68 = 0;
  local_70 = 0;
  FUN_074ee0ac(*(char *)(param_1 + 0x98) == '\0',0);
  FUN_074ee0ac(*(undefined1 *)(param_1 + 0x9a),0);
  puVar1 = Method_Unity_InferenceEngine_PartialTensorElement<float>_op_Subtraction__;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar7 = FUN_0551dfd0(*(long *)(param_1 + 0x18),
                         *(undefined8 *)
                          Method_Unity_InferenceEngine_PartialTensorElement<int>_op_BitwiseAnd__);
    lVar8 = FUN_03cc620c(uVar7,*(undefined8 *)puVar1);
    puVar5 = Method_Unity_InferenceEngine_PartialTensor<byte>__ctor__;
    puVar4 = Method_Unity_InferenceEngine_PartialTensorElement<float>_op_UnaryNegation__;
    puVar3 = 
    Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
    ;
    puVar2 = PTR_DAT_079fd4b0;
    puVar1 = PTR_DAT_079f4598;
    if (lVar8 != 0) {
      FUN_044d3fe8(&local_a0,lVar8,
                   *(undefined8 *)Method_Unity_InferenceEngine_PartialTensor<short>__ctor__);
      local_80 = local_a0;
      local_a0 = 0;
      uStack_78 = plStack_98;
      lStack_68 = lStack_88;
      local_70 = uStack_90;
      plStack_98 = &local_80;
      do {
        do {
          do {
            uVar9 = FUN_0586ac14(&local_80,*(undefined8 *)puVar5);
            lVar6 = lStack_68;
            uVar7 = local_70;
            lVar8 = local_a0;
            if ((uVar9 & 1) == 0) {
              FUN_0586ac10(plStack_98,*(undefined8 *)puVar4);
              if (lVar8 == 0) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_03642c00(lVar8);
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar9 = FUN_074f0370(uVar7,0);
          } while ((uVar9 & 1) != 0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar10 = (long *)FUN_07538400(param_1,uVar7,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          plVar10[3] = lVar6;
          thunk_FUN_036b7ad0(plVar10 + 3,lVar6);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          *(undefined4 *)((long)plVar10 + 0x44) = 1;
          *(undefined1 *)(plVar10 + 8) = 1;
          FUN_07518bac(param_1);
        } while (plVar10 == (long *)0x0);
        lVar8 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_07518a9c;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_0367cd30(plVar10,*(long *)puVar1,0);
LAB_07518a9c:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


