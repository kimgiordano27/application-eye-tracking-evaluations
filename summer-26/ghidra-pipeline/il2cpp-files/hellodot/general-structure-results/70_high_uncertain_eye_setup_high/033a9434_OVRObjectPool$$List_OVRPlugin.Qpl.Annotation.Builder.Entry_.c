/*
FUNCTION_NAME: OVRObjectPool$$List<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 033a9434
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRObjectPool__List<OVRPlugin_Qpl_Annotation_Builder_Entry>(void)

{
  void *__src;
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long unaff_x19;
  void *unaff_x20;
  long lVar9;
  void *unaff_x23;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x29;
  
  plVar2 = (long *)FUN_04f68ca4();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
  if (*(long *)(unaff_x29 + -0x20) == 0) {
    uVar4 = thunk_FUN_02c7737c(PTR_DAT_065dcc98);
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065dcca0);
    uVar3 = FUN_04db96a4(uVar3,uVar4,*(undefined8 *)(unaff_x29 + -0x28),uVar5,0);
  }
  else {
    uVar4 = thunk_FUN_02c7737c(PTR_DAT_065dcca8);
    uVar3 = FUN_04db9af8(uVar4,uVar3,*(undefined8 *)(unaff_x29 + -0x28),
                         *(undefined8 *)(unaff_x29 + -0x20),0);
  }
  lVar6 = thunk_FUN_02c7737c(PTR_DAT_065c8c48);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_05eb30e4(uVar3,0);
  while( true ) {
    unaff_w26 = unaff_w26 + 1;
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 8))();
    if (iVar1 <= unaff_w26) {
      (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x40))();
      if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar6 = (*(code *)**(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20))();
    lVar9 = *(long *)(unaff_x19 + 0x38);
    __src = unaff_x23;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x30) + 0x28)) {
      __src = unaff_x20;
    }
    memcpy(unaff_x25,__src,unaff_x24);
    if (lVar6 == 0) break;
    puVar8 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x30) + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x25;
    }
    puVar7 = *(undefined8 **)(lVar9 + 0x38);
    uVar3 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar8;
    (*(code *)puVar7[2])(uVar3,puVar7,lVar6,unaff_x29 + -0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


