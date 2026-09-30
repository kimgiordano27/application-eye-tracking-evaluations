/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$set_Icon
ENTRY_POINT: 04c104a0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__set_Icon(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar7;
  undefined8 *unaff_x23;
  uint uVar8;
  undefined8 *unaff_x24;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dd980);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c86d8);
  *(undefined1 *)(unaff_x21 + 0x5c2) = 1;
  uVar2 = thunk_FUN_02cea894(*unaff_x24);
  FUN_04678954(uVar2,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  FUN_04f7383c();
  lVar3 = FUN_02ce7ad4(*unaff_x23,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_04c105ec:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    *(undefined2 *)(lVar3 + 0x20) = 0x26;
    if (unaff_x20 != 0) {
      lVar3 = FUN_04dbbb18();
      lVar4 = thunk_FUN_02cea894(*unaff_x24);
      FUN_04678954(lVar4,*unaff_x22);
      puVar1 = PTR_DAT_065dd980;
      if (lVar3 != 0) {
        uVar6 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar6) {
          uVar8 = 0;
          do {
            if (uVar6 <= uVar8) goto LAB_04c105ec;
            lVar7 = *(long *)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
            lVar5 = FUN_02ce7ad4(*unaff_x23,1);
            if (lVar5 == 0) goto LAB_04c105f0;
            if (*(int *)(lVar5 + 0x18) == 0) goto LAB_04c105ec;
            *(undefined2 *)(lVar5 + 0x20) = 0x3d;
            if ((lVar7 == 0) || (lVar5 = FUN_04dbbb18(lVar7,lVar5,0), lVar5 == 0))
            goto LAB_04c105f0;
            if ((*(int *)(lVar5 + 0x18) == 0) || (*(int *)(lVar5 + 0x18) == 1)) goto LAB_04c105ec;
            if (lVar4 == 0) goto LAB_04c105f0;
            FUN_04679278(lVar4,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),
                         *(undefined8 *)puVar1);
            uVar6 = *(uint *)(lVar3 + 0x18);
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar6);
        }
        FUN_04c0fc5c();
        return;
      }
    }
  }
LAB_04c105f0:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


