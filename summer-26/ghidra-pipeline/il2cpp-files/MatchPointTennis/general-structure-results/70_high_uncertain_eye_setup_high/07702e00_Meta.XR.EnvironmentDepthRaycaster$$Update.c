/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Update
ENTRY_POINT: 07702e00
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__Update(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  (**(code **)(param_1 + 0x138))();
  if (unaff_x20 != 0) {
    uVar2 = FUN_07700af4();
    if (*(long *)(unaff_x19 + 0xa8) != 0) {
      FUN_077031b4(uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0xa8) + 0x28));
      if (DAT_0a51bf43 == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e740);
        DAT_0a51bf43 = '\x01';
      }
      puVar4 = *(undefined4 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
      FUN_07703288(*puVar4,puVar4[1],puVar4[2],0,0,0);
      if ((*(long *)(unaff_x19 + 0xe8) != 0) &&
         (lVar3 = FUN_076fd8c0(*(long *)(unaff_x19 + 0xe8),1), puVar1 = PTR_DAT_09f2fe18, lVar3 != 0
         )) {
        if (*(char *)(lVar3 + 0x10) == '\0') {
          in_stack_00000008 = *(undefined8 *)(lVar3 + 0x20);
          uVar2 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f2f838,&stack0x00000008);
          FUN_078ab14c(*(undefined8 *)PTR_DAT_09f2fff0,uVar2,0);
          FUN_076f1130();
        }
        lVar3 = *(long *)(unaff_x19 + 0xe8);
        uVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
        FUN_076fe208();
        puVar1 = PTR_DAT_09f2fe20;
        if (lVar3 != 0) {
          FUN_076fbcb8(lVar3,uVar2);
          lVar3 = *(long *)(unaff_x19 + 0xe8);
          uVar2 = thunk_FUN_0448520c(*(undefined8 *)puVar1);
          FUN_076fe350();
          if (lVar3 != 0) {
            FUN_076fbf28(lVar3,uVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


