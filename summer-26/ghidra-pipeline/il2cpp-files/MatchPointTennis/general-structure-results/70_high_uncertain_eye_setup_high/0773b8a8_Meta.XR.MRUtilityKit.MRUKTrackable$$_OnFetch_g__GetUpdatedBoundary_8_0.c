/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKTrackable$$<OnFetch>g__GetUpdatedBoundary|8_0
ENTRY_POINT: 0773b8a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKTrackable__<OnFetch>g__GetUpdatedBoundary_8_0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long lVar9;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x688));
  FUN_04447ba8(PTR_DAT_09f31b48);
  FUN_04447ba8(PTR_DAT_09f31b50);
  FUN_04447ba8(PTR_DAT_09f31b40);
  *(undefined1 *)(unaff_x21 + 0x222) = 1;
  if ((unaff_x19 != (long *)0x0) && (lVar4 = FUN_094f6294(), lVar4 != 0)) {
    if (*(long *)(lVar4 + 0x18) == 0) {
      iVar2 = *(int *)(unaff_x20 + 0x10);
      if (3 < iVar2) {
        uVar8 = *(undefined8 *)PTR_DAT_09f31b40;
        uVar5 = (**(code **)(*unaff_x19 + 0x168))();
        uVar5 = FUN_078b4f58(uVar8,uVar5,*(undefined8 *)PTR_DAT_09f31b48,0);
        lVar9 = *(long *)PTR_DAT_09f22e40;
        lVar4 = *(long *)(lVar9 + 0x38);
        if (lVar4 == 0) {
          FUN_04482014(lVar9);
          lVar4 = *(long *)(lVar9 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        FUN_0771ec00(uVar5,**(undefined8 **)(lVar4 + 0xb8),0);
        iVar2 = *(int *)(unaff_x20 + 0x10);
      }
      if (1 < iVar2) {
        uVar8 = *(undefined8 *)PTR_DAT_09f31b40;
        uVar5 = (**(code **)(*unaff_x19 + 0x168))();
        uVar5 = FUN_078b4f58(uVar8,uVar5,*(undefined8 *)PTR_DAT_09f31b50,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c33b0(uVar5,0);
      }
      uVar5 = FUN_094f613c();
      uVar8 = FUN_0773a7a0();
      uVar6 = FUN_0773b644();
      uVar1 = FUN_094f3ae4();
      lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31688,uVar1);
      iVar2 = FUN_094d3ba4();
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          uVar7 = FUN_094f934c();
          FUN_0773c4d4(uVar7,uVar7,uVar5,uVar8,uVar6,lVar4);
          iVar2 = iVar2 + 1;
          iVar3 = FUN_094d3ba4();
        } while (iVar2 < iVar3);
      }
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


