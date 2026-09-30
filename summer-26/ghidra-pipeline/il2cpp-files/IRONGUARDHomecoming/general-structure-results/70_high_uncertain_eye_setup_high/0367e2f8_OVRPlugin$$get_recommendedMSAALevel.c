/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 0367e2f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_recommendedMSAALevel(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  
  *(undefined1 *)(unaff_x20 + 0xe2e) = 1;
  lVar7 = *(long *)(unaff_x19 + 0x30);
  if (*(int *)(unaff_x19 + 0x10) == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    goto LAB_0367e3b0;
  }
  if (*(int *)(unaff_x19 + 0x10) == 0) {
    iVar1 = 0;
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    *(undefined4 *)(unaff_x19 + 0x38) = 0;
    while (iVar1 < 5) {
      if ((lVar7 == 0) || (plVar2 = (long *)FUN_0367d974(lVar7,iVar1), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_8__) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0367e3a0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar2,*(long *)
                                    Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_8__
                            ,0);
LAB_0367e3a0:
      iVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (iVar1 != 0) {
        FUN_0288dce4();
        *(undefined8 *)(unaff_x19 + 0x20) = 0;
        *(undefined8 *)(unaff_x19 + 0x18) = 0;
        thunk_FUN_01f51358(unaff_x19 + 0x20,0);
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return 1;
      }
LAB_0367e3b0:
      iVar1 = *(int *)(unaff_x19 + 0x38) + 1;
      *(int *)(unaff_x19 + 0x38) = iVar1;
    }
  }
  return 0;
}


