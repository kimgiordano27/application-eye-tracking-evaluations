/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$ProcessType
ENTRY_POINT: 0729a4d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__ProcessType(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int unaff_w19;
  uint *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  puVar2 = PTR_DAT_09289898;
  do {
    while( true ) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (unaff_w19 < (int)uVar1) {
        if (*(long *)(unaff_x21 + 0x10) != 0) {
          uVar4 = FUN_05c26ab8(*(long *)(unaff_x21 + 0x10),unaff_w19,*unaff_x26);
          *unaff_x22 = uVar4;
          thunk_FUN_040ec700();
          if (*(long *)(unaff_x21 + 0x18) != 0) {
            iVar3 = FUN_05bca2b8(*(long *)(unaff_x21 + 0x18),unaff_w19,*unaff_x25);
            lVar5 = *(long *)(unaff_x21 + 0x18);
            uVar1 = iVar3 + 0x1e0U & 0x1ff;
            *unaff_x20 = uVar1;
            if (lVar5 != 0) {
              FUN_05bca30c(lVar5,unaff_w19,uVar1,*unaff_x24);
              return;
            }
          }
        }
        goto LAB_0729a544;
      }
      lVar5 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)puVar2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0729a544;
      if (uVar1 < *(uint *)(lVar5 + 0x18)) break;
      FUN_05bca5b0(param_1,0,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(unaff_x21 + 0x18);
      if (param_1 == 0) goto LAB_0729a544;
    }
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0;
  } while (param_1 != 0);
LAB_0729a544:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


