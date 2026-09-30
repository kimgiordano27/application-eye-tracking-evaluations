/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorAdded$$Invoke
ENTRY_POINT: 07713da8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorAdded__Invoke
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  if ((DAT_0a523119 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e538);
    DAT_0a523119 = 1;
  }
  puVar2 = PTR_DAT_09f1e538;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar6 = (uint)lVar7;
      if ((int)uVar1 <= (int)uVar6) {
LAB_07713e4c:
        return (int)uVar6 < (int)uVar1;
      }
      if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar4 = *(long *)(lVar4 + lVar7 * 8 + 0x20);
      if (lVar4 == 0) break;
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar3 = FUN_0952c404(uVar5,param_2,0);
      if ((uVar3 & 1) != 0) goto LAB_07713e4c;
      lVar4 = *(long *)(param_1 + 0x20);
      lVar7 = lVar7 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


