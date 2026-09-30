/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter.<DoWriteStartConstructorAsync>d__40$$SetStateMachine
ENTRY_POINT: 0670d5c0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Newtonsoft_Json_JsonTextWriter_<DoWriteStartConstructorAsync>d__40__SetStateMachine(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *plVar9;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x23 + 0x832) = 1;
  if (unaff_x22 == 0) {
                    /* try { // try from 0670d6ec to 0680d6f7 has its CatchHandler @ 0670d668 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0670d6e4 with catch @ 0670d6f4
                        */
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar7 = thunk_FUN_03ac74bc();
    uVar8 = thunk_FUN_03af1434(PTR_DAT_08494058);
    uVar6 = thunk_FUN_03af1434(PTR_DAT_084a82b8);
    FUN_066b7574(uVar7,uVar8,uVar6,0);
  }
  else {
    if (unaff_w21 < 0) {
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar7 = thunk_FUN_03ac74bc();
      puVar5 = PTR_DAT_084a0558;
    }
    else {
      if (-1 < unaff_w20) {
        if (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w21) {
          if (*(int *)(*(long *)PTR_DAT_08491378 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar3 = FUN_067b2f8c(&stack0x00000018,0);
          uVar8 = in_stack_00000018;
          if ((uVar3 & 1) == 0) {
            iVar1 = (**(code **)(*unaff_x19 + 0x368))();
            plVar9 = unaff_x19 + 0xc;
            lVar4 = *plVar9;
            if ((lVar4 == 0) ||
               (iVar2 = FUN_058b2ad4(lVar4,*(undefined8 *)PTR_DAT_084a8340), iVar2 != iVar1)) {
              if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              lVar4 = FUN_0476da38(iVar1,*(undefined8 *)PTR_DAT_084a8350);
              *plVar9 = lVar4;
              thunk_FUN_03afed3c(plVar9,lVar4);
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_0848acd8 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            lVar4 = FUN_0476bb88(uVar8,*(undefined8 *)PTR_DAT_084a8348);
          }
          return lVar4;
        }
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar7 = thunk_FUN_03ac74bc();
        uVar8 = thunk_FUN_03af1434(PTR_DAT_084914a8);
        FUN_066b6070(uVar7,uVar8,0);
        goto LAB_0670d7cc;
      }
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar7 = thunk_FUN_03ac74bc();
      puVar5 = PTR_DAT_084912a8;
    }
    uVar8 = thunk_FUN_03af1434(puVar5);
    uVar6 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar7,uVar8,uVar6,0);
  }
LAB_0670d7cc:
  uVar8 = thunk_FUN_03af1434(PTR_DAT_084a8808);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar7,uVar8);
}


