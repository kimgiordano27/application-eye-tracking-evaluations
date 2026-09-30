/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetLargestSurfaceDebugger
ENTRY_POINT: 08a3f5dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetLargestSurfaceDebugger(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if (unaff_x20 != 0) {
    FUN_0989ec4c();
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    thunk_FUN_049ee3d8();
    lVar3 = thunk_FUN_04983f60(*unaff_x21);
    FUN_0989e6b8(lVar3,0);
    puVar1 = PTR_DAT_0ac108d0;
    if (lVar3 != 0) {
      FUN_0989ec80(lVar3,1,0);
      *(long *)(unaff_x19 + 0x20) = lVar3;
      thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x20),lVar3);
      FUN_08dbf2f0();
      lVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_097a99c4(lVar3,0);
      plVar5 = (long *)(unaff_x19 + 0x18);
      *plVar5 = lVar3;
      thunk_FUN_049ee3d8(plVar5,lVar3);
      if ((*plVar5 != 0) &&
         (lVar3 = FUN_097a9b8c(*plVar5,0), puVar2 = PTR_DAT_0ac52cc0, puVar1 = PTR_DAT_0ac09ab0,
         lVar3 != 0)) {
        lVar3 = FUN_097ba694(lVar3,0);
        uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_097bbe5c(uVar4,*(undefined8 *)puVar1,0);
        puVar2 = PTR_DAT_0ac531e0;
        puVar1 = PTR_DAT_0ac09aa0;
        if (lVar3 != 0) {
          FUN_065552a4(lVar3,uVar4,*(undefined8 *)PTR_DAT_0ac52cb8);
          lVar3 = *plVar5;
          uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_09a6a910(uVar4,*(undefined8 *)puVar2,0);
          if (lVar3 != 0) {
            puVar6 = (undefined8 *)(lVar3 + 0x20);
            *puVar6 = uVar4;
            thunk_FUN_049ee3d8(puVar6,uVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


