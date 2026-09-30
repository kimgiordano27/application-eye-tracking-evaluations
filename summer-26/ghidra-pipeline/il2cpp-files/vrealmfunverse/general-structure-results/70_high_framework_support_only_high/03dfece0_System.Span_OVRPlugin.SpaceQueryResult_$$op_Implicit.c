/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$op_Implicit
ENTRY_POINT: 03dfece0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceQueryResult>__op_Implicit
               (ulong param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x21;
  undefined4 uVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063210b0);
    *(undefined1 *)(unaff_x21 + 0x977) = 1;
  }
  lVar4 = unaff_x19[0x72];
  if (lVar4 == 0) {
    plVar1 = (long *)unaff_x19[0x54];
    if (plVar1 == (long *)0x0) goto LAB_03dfee14;
    pcVar5 = *(code **)(*plVar1 + 0x4c8);
    uVar3 = *(undefined8 *)(*plVar1 + 0x4d0);
  }
  else {
    pcVar5 = *(code **)(lVar4 + 0x18);
    plVar1 = *(long **)(lVar4 + 0x40);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
  }
  lVar4 = (*pcVar5)(plVar1,uVar3);
  unaff_x19[0x73] = lVar4;
  thunk_FUN_02bb0e9c(unaff_x19 + 0x73,lVar4);
  (**(code **)(*unaff_x19 + 0xae8))();
  plVar1 = (long *)unaff_x19[0x73];
  lVar4 = FUN_03c86458();
  if ((lVar4 != 0) && (uVar8 = FUN_05def9d4(lVar4,0), plVar1 != (long *)0x0)) {
    lVar4 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_063210b0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_03dfede0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(plVar1,*(long *)PTR_DAT_063210b0,2);
LAB_03dfede0:
                    /* WARNING: Could not recover jumptable at 0x03dfee10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(uVar8,param_3,param_4,param_5,plVar1);
    return;
  }
LAB_03dfee14:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


