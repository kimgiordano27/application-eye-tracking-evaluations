/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Switch$$.ctor
ENTRY_POINT: 04c1d58c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Switch___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  lVar2 = thunk_FUN_02cea798();
  if (lVar2 != 0) {
    uVar5 = *(uint *)(unaff_x19 + 3);
    if (uVar5 != 0) {
      unaff_x19[4] = unaff_x21;
      lVar2 = *(long *)(unaff_x20 + 0x30);
      if (lVar2 != 0) {
        lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar3 == 0) goto LAB_04c1d674;
        uVar5 = *(uint *)(unaff_x19 + 3);
      }
      if (1 < uVar5) {
        unaff_x19[5] = lVar2;
        lVar2 = *(long *)(unaff_x20 + 0x28);
        if (lVar2 != 0) {
          lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar3 == 0) goto LAB_04c1d674;
          uVar5 = *(uint *)(unaff_x19 + 3);
        }
        if (2 < uVar5) {
          unaff_x19[6] = lVar2;
          lVar2 = *(long *)(unaff_x20 + 0x18);
          if (lVar2 != 0) {
            lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar3 == 0) goto LAB_04c1d674;
            uVar5 = *(uint *)(unaff_x19 + 3);
          }
          if (3 < uVar5) {
            unaff_x19[7] = lVar2;
            lVar2 = *(long *)(unaff_x20 + 0x10);
            if (lVar2 != 0) {
              lVar3 = thunk_FUN_02cea798(lVar2,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar3 == 0) goto LAB_04c1d674;
              uVar5 = *(uint *)(unaff_x19 + 3);
            }
            puVar1 = PTR_DAT_065e5960;
            if (4 < uVar5) {
              unaff_x19[8] = lVar2;
              FUN_04db9b3c(*(undefined8 *)puVar1);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c84();
  }
LAB_04c1d674:
  uVar4 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar4,0);
}


