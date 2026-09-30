/*
FUNCTION_NAME: UniGLTF.BuiltInStandardMaterialExporter$$ExportBaseColor
ENTRY_POINT: 02f8558c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f85660) */

undefined8 UniGLTF_BuiltInStandardMaterialExporter__ExportBaseColor(void)

{
  ulong uVar1;
  long lVar2;
  int *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
code_r0x02f8558c:
  in_stack_00000008 = FUN_02670ad8(*(undefined8 *)(unaff_x20 + 0x18),0);
  FUN_02670a30(&stack0x00000008,0);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
LAB_02f855ac:
  *unaff_x19 = 0;
  iVar3 = 6;
  do {
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x22,0);
    }
    if ((iVar3 != 3) && (iVar3 != 0)) {
      return 0;
    }
    do {
      if (unaff_x21 == 0) {
LAB_02f8565c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar1 = FUN_02f85c7c(unaff_x21);
      if ((uVar1 & 1) == 0) {
        *unaff_x19 = *(int *)(unaff_x21 + 0x14) + *(int *)(unaff_x21 + 0x10);
        return 1;
      }
      unaff_x22 = *(long *)(unaff_x20 + 0x20);
      if (unaff_x22 == 0) goto LAB_02f8565c;
      unaff_x21 = *(long *)(unaff_x22 + 0x38);
    } while (unaff_x21 != unaff_x22);
    in_stack_00000018._4_1_ = '\0';
    FUN_027e0bd8(unaff_x22,(long)&stack0x00000018 + 4,0);
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x21 = *(long *)(lVar2 + 0x38);
    if (unaff_x21 == lVar2) break;
    iVar3 = 3;
  } while( true );
  uVar1 = FUN_027bcf38(*(undefined8 *)(unaff_x20 + 0x18),0,0);
  if ((uVar1 & 1) != 0) goto code_r0x02f8558c;
  goto LAB_02f855ac;
}


