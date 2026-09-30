/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.FreeMeshDelegate$$BeginInvoke
ENTRY_POINT: 08a3b12c
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_0ac52cb0;
  puVar1 = PTR_DAT_0ac108d0;
  FUN_0989ec80();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  thunk_FUN_049ee3d8();
  puVar6 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar6 = *(undefined8 *)puVar2;
  thunk_FUN_049ee3d8(puVar6);
  FUN_08dbf2f0();
  lVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_097a99c4(lVar3,0);
  plVar5 = (long *)(unaff_x19 + 0x28);
  *plVar5 = lVar3;
  thunk_FUN_049ee3d8(plVar5,lVar3);
  if ((*plVar5 != 0) &&
     (lVar3 = FUN_097a9b8c(*plVar5,0), puVar2 = PTR_DAT_0ac52cc0, puVar1 = PTR_DAT_0ac09ab0,
     lVar3 != 0)) {
    lVar3 = FUN_097ba694(lVar3,0);
    uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
    FUN_097bbe5c(uVar4,*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_0ac09aa0;
    if (lVar3 != 0) {
      FUN_065552a4(lVar3,uVar4,*(undefined8 *)PTR_DAT_0ac52cb8);
      lVar3 = *plVar5;
      uVar7 = *puVar6;
      uVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_09a6a910(uVar4,uVar7,0);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0x20);
        *puVar6 = uVar4;
        thunk_FUN_049ee3d8(puVar6,uVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


