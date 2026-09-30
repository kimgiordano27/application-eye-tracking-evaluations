/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsTypeEqual
ENTRY_POINT: 052c16bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsTypeEqual(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  ulong unaff_x20;
  int iVar3;
  long lVar4;
  int iVar5;
  
  while (param_1 != 0) {
    do {
      if ((long)*(int *)(param_1 + 0x18) <= (long)unaff_x20) {
        FUN_052c1dac();
        return;
      }
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 == 0) goto LAB_052c1838;
      lVar2 = *(long *)(lVar4 + 0x80);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
        FUN_052c35a0(lVar4);
        lVar2 = *(long *)(lVar4 + 0x80);
        if (lVar2 == 0) goto LAB_052c1838;
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_x20) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__Init:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar4 = *(long *)(unaff_x19 + 0xa8);
      if (lVar4 == 0) goto LAB_052c1838;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__Init;
      iVar3 = *(int *)(lVar4 + unaff_x20 * 4 + 0x20);
      lVar2 = *(long *)(lVar2 + unaff_x20 * 8 + 0x20);
      if (iVar3 < *(int *)(unaff_x19 + 0x20)) {
        if (lVar2 == 0) goto LAB_052c1838;
        do {
          iVar5 = 0;
          while( true ) {
            if (*(long *)(lVar2 + 0x20) == 0) goto LAB_052c1838;
            if (*(int *)(*(long *)(lVar2 + 0x20) + 0x18) <= iVar5) break;
            uVar1 = FUN_052c18b4();
            iVar5 = iVar5 + 1;
            if ((uVar1 & 1) != 0) {
              lVar4 = *(long *)(unaff_x19 + 0xa8);
              if (lVar4 == 0) goto LAB_052c1838;
              goto LAB_052c17a4;
            }
          }
          lVar4 = *(long *)(unaff_x19 + 0xa8);
          if (lVar4 == 0) goto LAB_052c1838;
          if (*(uint *)(lVar4 + 0x18) <= unaff_x20)
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__Init;
          *(int *)(lVar4 + unaff_x20 * 4 + 0x20) = iVar3;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(unaff_x19 + 0x20));
      }
LAB_052c17a4:
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__Init;
      iVar3 = *(int *)(lVar4 + unaff_x20 * 4 + 0x20);
      if (-1 < iVar3) {
        while( true ) {
          if (lVar4 == 0) goto LAB_052c1838;
          if (*(uint *)(lVar4 + 0x18) <= unaff_x20)
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__Init;
          *(int *)(lVar4 + unaff_x20 * 4 + 0x20) = iVar3;
          if ((lVar2 == 0) || (lVar4 = *(long *)(lVar2 + 0x20), lVar4 == 0)) goto LAB_052c1838;
          iVar5 = 0;
          while( true ) {
            if (*(int *)(lVar4 + 0x18) <= iVar5) goto LAB_052c182c;
            uVar1 = FUN_052c18b4();
            if ((uVar1 & 1) != 0) break;
            lVar4 = *(long *)(lVar2 + 0x20);
            iVar5 = iVar5 + 1;
            if (lVar4 == 0) goto LAB_052c1838;
          }
          if (iVar3 < 1) break;
          lVar4 = *(long *)(unaff_x19 + 0xa8);
          iVar3 = iVar3 + -1;
        }
      }
LAB_052c182c:
      lVar4 = *(long *)(unaff_x19 + 0x30);
      unaff_x20 = unaff_x20 + 1;
      if (lVar4 == 0) goto LAB_052c1838;
      param_1 = *(long *)(lVar4 + 0x80);
    } while ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0));
    FUN_052c35a0(lVar4);
    param_1 = *(long *)(lVar4 + 0x80);
  }
LAB_052c1838:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


