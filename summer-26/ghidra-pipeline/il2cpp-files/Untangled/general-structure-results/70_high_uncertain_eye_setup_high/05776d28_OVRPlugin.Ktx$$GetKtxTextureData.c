/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureData
ENTRY_POINT: 05776d28
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05776d84) */

void OVRPlugin_Ktx__GetKtxTextureData(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  void *__ptr;
  void *unaff_x20;
  int unaff_w21;
  ulong uVar4;
  long lVar5;
  long *unaff_x24;
  undefined8 *unaff_x25;
  
  if (param_2 != 1) {
    FUN_04e98fa0(&stack0x00000030,*unaff_x25);
                    /* WARNING: Subroutine does not return */
    FUN_02fafaac(param_1);
  }
  plVar2 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited(param_1);
  lVar5 = *plVar2;
  __cxa_end_catch();
  FUN_04e98fa0(&stack0x00000030,*unaff_x25);
  puVar1 = PTR_DAT_06d36fa0;
  if (lVar5 == 0) {
    FUN_0565dbf8((long)unaff_w21,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58(*unaff_x24);
    }
    FUN_05776d90();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    free(unaff_x20);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar4 = 0;
      uVar3 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar4 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        free(__ptr);
        uVar3 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ecbb70(lVar5);
}


