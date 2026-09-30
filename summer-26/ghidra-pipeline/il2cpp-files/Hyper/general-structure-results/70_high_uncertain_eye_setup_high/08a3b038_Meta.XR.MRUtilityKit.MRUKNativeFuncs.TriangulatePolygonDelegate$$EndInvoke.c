/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.TriangulatePolygonDelegate$$EndInvoke
ENTRY_POINT: 08a3b038
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_TriangulatePolygonDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  undefined8 *puVar7;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  long *unaff_x22;
  
  FUN_04947ee4(PTR_DAT_0ac52cb8);
  FUN_04947ee4(PTR_DAT_0ac52ca8);
  FUN_04947ee4(PTR_DAT_0ac0ec60);
  FUN_04947ee4(PTR_DAT_0ac52cc0);
  FUN_04947ee4(PTR_DAT_0ac09aa0);
  FUN_04947ee4(PTR_DAT_0ac52cb0);
  FUN_04947ee4(PTR_DAT_0ac09ab0);
  *(undefined1 *)(unaff_x20 + 0x3cd) = 1;
  lVar3 = thunk_FUN_04983f60(*unaff_x21);
  FUN_0989e6b8(lVar3,0);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32c483 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac52ca8);
    DAT_0b32c483 = '\x01';
  }
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *unaff_x22;
  }
  if (lVar3 != 0) {
    FUN_0989ec4c(lVar3,**(undefined8 **)(lVar4 + 0xb8),0);
    *(long *)(unaff_x19 + 0x10) = lVar3;
    thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x10),lVar3);
    lVar3 = thunk_FUN_04983f60(*unaff_x21);
    FUN_0989e6b8(lVar3,0);
    puVar2 = PTR_DAT_0ac52cb0;
    puVar1 = PTR_DAT_0ac108d0;
    if (lVar3 != 0) {
      FUN_0989ec80(lVar3,1,0);
      *(long *)(unaff_x19 + 0x18) = lVar3;
      thunk_FUN_049ee3d8((long *)(unaff_x19 + 0x18),lVar3);
      puVar7 = (undefined8 *)(unaff_x19 + 0x20);
      *puVar7 = *(undefined8 *)puVar2;
      thunk_FUN_049ee3d8(puVar7);
      FUN_08dbf2f0();
      lVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_097a99c4(lVar3,0);
      plVar6 = (long *)(unaff_x19 + 0x28);
      *plVar6 = lVar3;
      thunk_FUN_049ee3d8(plVar6,lVar3);
      if ((*plVar6 != 0) &&
         (lVar3 = FUN_097a9b8c(*plVar6,0), puVar2 = PTR_DAT_0ac52cc0, puVar1 = PTR_DAT_0ac09ab0,
         lVar3 != 0)) {
        lVar3 = FUN_097ba694(lVar3,0);
        uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
        FUN_097bbe5c(uVar5,*(undefined8 *)puVar1,0);
        puVar1 = PTR_DAT_0ac09aa0;
        if (lVar3 != 0) {
          FUN_065552a4(lVar3,uVar5,*(undefined8 *)PTR_DAT_0ac52cb8);
          lVar3 = *plVar6;
          uVar8 = *puVar7;
          uVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_09a6a910(uVar5,uVar8,0);
          if (lVar3 != 0) {
            puVar7 = (undefined8 *)(lVar3 + 0x20);
            *puVar7 = uVar5;
            thunk_FUN_049ee3d8(puVar7,uVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


