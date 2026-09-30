/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$RequestFileHeaders
ENTRY_POINT: 013e6a74
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest__RequestFileHeaders(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined4 in_stack_00000008;
  
  thunk_FUN_00d48444(StringLiteral_9753);
  thunk_FUN_00d48444(TMPro_TMP_InputField_SubmitEvent_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x848) = 1;
  puVar4 = StringLiteral_302;
  in_stack_00000008 = 0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar5 = (**(code **)(*unaff_x19 + 0x188))();
  iVar6 = (**(code **)(*unaff_x19 + 0x1a8))();
  puVar2 = StringLiteral_9753;
  if (iVar6 * iVar5 < 0x65) {
    lVar8 = FUN_02671474();
    puVar3 = PTR_DAT_033f38b8;
    puVar2 = PTR_DAT_033ead30;
    uVar10 = *(undefined8 *)TMPro_TMP_InputField_SubmitEvent_TypeInfo;
    iVar5 = 0;
    while( true ) {
      iVar6 = (**(code **)(*unaff_x19 + 0x1a8))();
      if (iVar6 <= iVar5) break;
      iVar6 = 0;
      while( true ) {
        iVar7 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar7 <= iVar6) break;
        iVar7 = (**(code **)(*unaff_x19 + 0x188))();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar1 = iVar6 + iVar5 * iVar7;
        if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        in_stack_00000008 = *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20);
        uVar9 = FUN_02697984(&stack0x00000008,0);
        uVar10 = FUN_01600424(uVar10,uVar9,*(undefined8 *)puVar3,0);
        iVar6 = iVar6 + 1;
      }
      uVar10 = FUN_015f5b28(uVar10,*(undefined8 *)puVar2,0);
      iVar5 = iVar5 + 1;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(uVar10,0);
  }
  else {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar2,0);
  }
  return;
}


