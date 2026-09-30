/*
FUNCTION_NAME: OVRPlugin$$GetAdaptiveGPUPerformanceScale
ENTRY_POINT: 033c55a8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetAdaptiveGPUPerformanceScale(long param_1)

{
  undefined1 in_CY;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  ulong uVar5;
  long unaff_x29;
  
code_r0x033c55a8:
  if (!(bool)in_CY) {
    *unaff_x25 = param_1;
    thunk_FUN_01e10808(unaff_x25,param_1);
    if (unaff_x29 != 0) {
      if ((int)*(ulong *)(unaff_x29 + 0x18) < 1) {
LAB_033c53ec:
        FUN_033c5988();
        return 0;
      }
      uVar5 = 0;
      uVar4 = *(ulong *)(unaff_x29 + 0x18) & 0xffffffff;
      do {
        if ((uVar4 <= uVar5) || (*(uint *)(unaff_x24 + 0x18) <= unaff_w27)) goto LAB_033c56bc;
        lVar2 = *(long *)(unaff_x26 + uVar5 * 8);
        if ((unaff_x21 & 1) == 0) {
          if (lVar2 == 0) break;
          uVar4 = FUN_03278c78(lVar2,*unaff_x25,0);
          if ((uVar4 & 1) != 0) goto LAB_033c5630;
        }
        else {
          iVar1 = FUN_03277cf0(lVar2,*unaff_x25,5,0);
          if (iVar1 == 0) goto LAB_033c5630;
        }
        uVar4 = (ulong)*(uint *)(unaff_x29 + 0x18);
        uVar5 = uVar5 + 1;
        if ((long)(int)*(uint *)(unaff_x29 + 0x18) <= (long)uVar5) goto LAB_033c53ec;
      } while( true );
    }
    goto LAB_033c56b8;
  }
LAB_033c56bc:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
LAB_033c5630:
  if (unaff_x23 != 0) {
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)uVar5) goto LAB_033c56bc;
    unaff_w27 = unaff_w27 + 1;
    if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w27) {
      if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar3 = FUN_033c5fc4();
      *unaff_x19 = uVar3;
      thunk_FUN_01e10808();
      return 1;
    }
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w27) goto LAB_033c56bc;
    unaff_x25 = (long *)(unaff_x24 + (long)(int)unaff_w27 * 8 + 0x20);
    if (*unaff_x25 != 0) {
      param_1 = FUN_0327d400(*unaff_x25,0);
      in_CY = *(uint *)(unaff_x24 + 0x18) <= unaff_w27;
      goto code_r0x033c55a8;
    }
  }
LAB_033c56b8:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


