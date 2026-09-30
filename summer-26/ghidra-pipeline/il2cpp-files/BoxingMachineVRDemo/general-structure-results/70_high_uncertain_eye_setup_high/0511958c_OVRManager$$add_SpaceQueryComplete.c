/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 0511958c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceQueryComplete(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar5;
  long *plVar6;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *puVar7;
  
  puVar5 = *(undefined8 **)(unaff_x21 + 0x938);
  puVar7 = *(undefined8 **)(unaff_x23 + 0xa40);
  FUN_050d0c74();
  *(long *)(unaff_x20 + 0x60) = unaff_x19;
  thunk_FUN_02dd37b4();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = FUN_04f8e414(0);
  uVar3 = thunk_FUN_02d9d534(*puVar5);
  FUN_04fd8bb0(uVar3,uVar2,0);
  puVar5 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar5 = uVar3;
  thunk_FUN_02dd37b4(puVar5,uVar3);
  plVar6 = (long *)*puVar5;
  uVar2 = Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter__get_End(0);
  uVar2 = FUN_04e83184(*puVar7,uVar2,0);
  puVar1 = PTR_DAT_06768930;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x248))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x250));
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    lVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    FUN_050bb2ac(lVar4,uVar2,0);
    plVar6 = (long *)(unaff_x20 + 0x68);
    *plVar6 = lVar4;
    thunk_FUN_02dd37b4(plVar6,lVar4);
    if ((*plVar6 != 0) && (FUN_050d0a4c(*plVar6,1,0), unaff_x19 != 0)) {
      lVar4 = *plVar6;
      uVar2 = FUN_050c0370();
      if (lVar4 != 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x58);
        *puVar5 = uVar2;
        thunk_FUN_02dd37b4(puVar5,uVar2);
        if (*plVar6 != 0) {
          FUN_050d0ab4(*plVar6,*(undefined4 *)(unaff_x19 + 0x3c),0);
          if (*plVar6 != 0) {
            *(undefined8 *)(*plVar6 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
            thunk_FUN_02dd37b4();
            if (*plVar6 != 0) {
              FUN_050d0b1c(*plVar6,*(undefined4 *)(unaff_x19 + 0x40),0);
              if (*plVar6 != 0) {
                FUN_050d0bfc(*plVar6,*(undefined4 *)(unaff_x19 + 0x48),0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


