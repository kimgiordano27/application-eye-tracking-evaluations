/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$IsPositionInSceneVolume
ENTRY_POINT: 08a5c1b0
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


void Meta_XR_MRUtilityKit_MRUKRoom__IsPositionInSceneVolume(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  
  FUN_0718cabc();
  puVar2 = (undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 8);
  *puVar2 = param_1;
  thunk_FUN_049ee3d8(puVar2,param_1);
  if (unaff_x21 != 0) {
    lVar3 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__FindIndex();
    if (lVar3 != 0) {
      lVar5 = *unaff_x20;
      plVar4 = (long *)(lVar3 + 0x18);
      *plVar4 = lVar5;
LAB_08a5c2a0:
      thunk_FUN_049ee3d8(plVar4,lVar5);
      return;
    }
    lVar3 = *unaff_x19;
    lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53a70);
    FUN_08dbf2f0(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_0ac4cdb8;
      thunk_FUN_049ee3d8();
      *(long *)(lVar5 + 0x18) = *unaff_x20;
      thunk_FUN_049ee3d8();
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)PTR_DAT_0ac53a60;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (*(uint *)(lVar6 + 0x18) <= uVar1) {
            FUN_06b7fe74(lVar3,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            return;
          }
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = lVar5;
          goto LAB_08a5c2a0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


