/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<CreateAlignmentAnchor>d__30$$SetStateMachine
ENTRY_POINT: 014ba8dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<CreateAlignmentAnchor>d__30__SetStateMachine
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xdd8));
  thunk_FUN_00d48444(StringLiteral_7526);
  *(undefined1 *)(unaff_x20 + 0xdb0) = 1;
  puVar5 = StringLiteral_7526;
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<FontWeight>_Peek__;
  puVar2 = System_Net_DefaultCertificatePolicy_TypeInfo;
  lVar9 = *(long *)(unaff_x19 + 0x30);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar11 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_014baa2c;
        lVar7 = *(long *)(lVar11 + 0x18);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_List<XmlSchemaObject>_get_Count__
                                  );
        if ((lVar6 == 0) || (FUN_013df2bc(lVar6,uVar8,*(undefined8 *)puVar2,0), lVar7 == 0))
        goto LAB_014baa2c;
        FUN_013df780(lVar7,lVar6,*(undefined8 *)puVar3);
        lVar7 = *(long *)(lVar11 + 0x20);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if ((lVar6 == 0) || (FUN_026c8404(lVar6,uVar8,*(undefined8 *)puVar5,0), lVar7 == 0))
        goto LAB_014baa2c;
        FUN_026c84dc(lVar7,lVar6,0);
        lVar6 = *(long *)(lVar11 + 0x28);
        uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
        if ((lVar11 == 0) || (FUN_026c8404(lVar11,uVar8,*(undefined8 *)puVar5,0), lVar6 == 0))
        goto LAB_014baa2c;
        FUN_026c84dc(lVar6,lVar11,0);
        uVar1 = *(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
    return;
  }
LAB_014baa2c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


