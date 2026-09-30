/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$Fill
ENTRY_POINT: 07507bac
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceQueryResult>__Fill
               (long param_1,uint param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x23;
  undefined8 *puVar4;
  long unaff_x24;
  
  puVar4 = *(undefined8 **)(unaff_x23 + 0x740);
  if ((*(byte *)(unaff_x24 + 0x24f) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac43740);
    *(undefined1 *)(unaff_x24 + 0x24f) = 1;
  }
  FUN_05d9c12c(param_3,*puVar4,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x100))
  ;
  if (-1 < (int)param_2) {
    if ((int)param_2 <= *(int *)(param_1 + 0x18)) {
      FUN_07506d88(param_1,*(int *)(param_1 + 0x18) + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      FUN_08d9f1fc(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10),
                   param_2 + 1,*(int *)(param_1 + 0x18) - param_2,0);
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (param_2 < *(uint *)(lVar3 + 0x18)) {
        puVar4 = (undefined8 *)(lVar3 + (ulong)param_2 * 8 + 0x20);
        *puVar4 = param_3;
        thunk_FUN_049ee3d8(puVar4,param_3);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
  }
  thunk_FUN_049ae08c(PTR_DAT_0ac0c088);
  uVar1 = thunk_FUN_04983f60();
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac161d0);
  FUN_08cc57b4(uVar1,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar1,param_4);
}


