/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$IsPositionInSceneVolume
ENTRY_POINT: 08a5c1cc
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__IsPositionInSceneVolume(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x24;
  
  *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8) = unaff_x22;
  thunk_FUN_049ee3d8();
  if (unaff_x21 != 0) {
    lVar2 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__FindIndex();
    if (lVar2 != 0) {
      lVar4 = *unaff_x20;
      plVar3 = (long *)(lVar2 + 0x18);
      *plVar3 = lVar4;
LAB_08a5c2a0:
      thunk_FUN_049ee3d8(plVar3,lVar4);
      return;
    }
    lVar2 = *unaff_x19;
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53a70);
    FUN_08dbf2f0(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_0ac4cdb8;
      thunk_FUN_049ee3d8();
      *(long *)(lVar4 + 0x18) = *unaff_x20;
      thunk_FUN_049ee3d8();
      if (lVar2 != 0) {
        lVar5 = *(long *)(lVar2 + 0x10);
        lVar6 = *(long *)PTR_DAT_0ac53a60;
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (*(uint *)(lVar5 + 0x18) <= uVar1) {
            FUN_06b7fe74(lVar2,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            return;
          }
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          plVar3 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar3 = lVar4;
          goto LAB_08a5c2a0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


