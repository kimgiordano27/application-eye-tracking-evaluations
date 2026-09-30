/*
FUNCTION_NAME: OVRPlugin.Qpl.Variant$$From
ENTRY_POINT: 063af280
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Variant__From(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  bVar1 = *(byte *)(**(long **)(in_x9 + 0xf80) + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(in_x9 + 0xf80)))
  {
    lVar4 = unaff_x20[4];
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)PTR_DAT_07d867b8;
      lVar2 = thunk_FUN_037787d0(lVar4,uVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(lVar4,uVar5);
      }
      plVar3 = *(long **)(unaff_x19 + 0x10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 600))
                  (plVar3,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar3 + 0x260));
        plVar3 = *(long **)(unaff_x19 + 0x10);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x1c8))
                    (plVar3,*(undefined1 *)((long)unaff_x20 + 0x29),*(undefined8 *)(*plVar3 + 0x1d0)
                    );
          plVar3 = *(long **)(unaff_x19 + 0x10);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x1e8))(plVar3,lVar2,*(undefined8 *)(*plVar3 + 0x1f0));
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54();
}


