/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$Invoke
ENTRY_POINT: 076f2164
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate__Invoke
               (code *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  (*param_1)();
  if (unaff_x20 != 0) {
    uVar1 = FUN_07442b80();
    if ((uVar1 & 1) != 0) {
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar2 = *unaff_x21;
      }
      lVar5 = *unaff_x19;
      lVar2 = **(long **)(lVar2 + 0xb8);
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_076f21f0;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac();
LAB_076f21f0:
      uVar4 = (*(code *)*puVar3)();
      if (lVar2 == 0) goto LAB_076f2258;
      FUN_07443e70(lVar2,uVar4,*(undefined8 *)PTR_DAT_09f2f7d8);
      lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x076f2244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
        return;
      }
    }
    return;
  }
LAB_076f2258:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


