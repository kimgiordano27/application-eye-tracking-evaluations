/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$get_Label
ENTRY_POINT: 052d90b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__get_Label
               (long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  puVar3 = PTR_DAT_06d3d780;
  puVar2 = PTR_DAT_06d01fb8;
  if ((DAT_071c10ef & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d01fb8);
    FUN_02f07e70(PTR_DAT_06d3d780);
    DAT_071c10ef = 1;
  }
  uVar4 = FUN_066cd398(param_1,0);
  uVar4 = FUN_05458458(uVar4,*(undefined8 *)puVar3,0);
  lVar5 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_066c9ce0(lVar5,uVar4,0);
  plVar1 = param_1 + 0x4d;
  param_1[0x4d] = lVar5;
  thunk_FUN_02f411dc(plVar1,lVar5);
  if (param_1[0x4d] != 0) {
    lVar5 = FUN_066c9a48(param_1[0x4d],0);
    if ((param_1[0x13] != 0) && (uVar4 = FUN_066c67b0(param_1[0x13],0), lVar5 != 0)) {
      FUN_066d5054(lVar5,uVar4,0);
      if (*plVar1 != 0) {
        lVar5 = FUN_066c9a48(*plVar1,0);
        if (DAT_071babf5 == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          DAT_071babf5 = '\x01';
        }
        if (lVar5 != 0) {
          puVar6 = *(undefined4 **)(*(long *)PTR_DAT_06d02c10 + 0xb8);
          FUN_066d4960(*puVar6,puVar6[1],puVar6[2],lVar5,0);
          if (*plVar1 != 0) {
            lVar5 = FUN_066c9a48(*plVar1,0);
            if (DAT_071bab7c == '\0') {
              FUN_02f07e70(PTR_DAT_06d02bd8);
              DAT_071bab7c = '\x01';
            }
            if (lVar5 != 0) {
              puVar6 = *(undefined4 **)(*(long *)PTR_DAT_06d02bd8 + 0xb8);
              FUN_066d4bec(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar5,0);
              if (*plVar1 != 0) {
                uVar4 = FUN_066c9a48(*plVar1,0);
                (**(code **)(*param_1 + 0x248))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x250));
                if (param_2 != 0) {
                  if (*(char *)(param_2 + 0x3e) != '\0') {
                    uVar4 = (**(code **)(*param_1 + 0x238))
                                      (param_1,*(undefined8 *)(*param_1 + 0x240));
                    FUN_052d6d10(param_1,uVar4);
                  }
                  FUN_052c9eec(param_1,param_1[0x2f]);
                    /* WARNING: Could not recover jumptable at 0x052d92c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*param_1 + 0x658))(param_1,param_2,*(undefined8 *)(*param_1 + 0x660))
                  ;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


