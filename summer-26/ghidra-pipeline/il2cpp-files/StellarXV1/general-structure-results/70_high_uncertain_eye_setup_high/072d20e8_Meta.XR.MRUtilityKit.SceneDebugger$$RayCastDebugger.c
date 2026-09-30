/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$RayCastDebugger
ENTRY_POINT: 072d20e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__RayCastDebugger(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_092858e8;
  if ((DAT_0988fa88 & 1) == 0) {
    FUN_04077588(PTR_DAT_092858e8);
    FUN_04077588(PTR_DAT_092a6838);
    DAT_0988fa88 = 1;
  }
  lVar2 = FUN_04077674(*(undefined8 *)puVar1,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_072d21c4:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_092a6838;
    thunk_FUN_040ec700();
    if ((param_2 != 0) && (lVar2 = FUN_074ea340(param_2,lVar2,1,0), lVar2 != 0)) {
      if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
        uVar4 = 0;
        uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar3 <= uVar4) goto LAB_072d21c4;
          FUN_072d21cc(param_1,*(undefined8 *)(lVar2 + 0x20 + uVar4 * 8));
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


