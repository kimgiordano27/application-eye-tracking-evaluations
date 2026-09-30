/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneNavigation$$InstantiateObstacle
ENTRY_POINT: 06df9ae4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneNavigation__InstantiateObstacle(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x23;
  undefined8 *puVar3;
  undefined8 unaff_x24;
  long lVar4;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x100));
  *(undefined1 *)(unaff_x23 + 0xe8a) = 1;
  puVar3 = (undefined8 *)(unaff_x19 + 0x30);
  *puVar3 = unaff_x24;
  thunk_FUN_03d233cc(puVar3);
  lVar4 = *(long *)(unaff_x19 + 0x10);
  thunk_FUN_03cf5234(*unaff_x28);
  FUN_04de5ff4();
  thunk_FUN_03cf5234(*unaff_x27);
  FUN_04f12e94();
  if (lVar4 != 0) {
    FUN_06deddc8(lVar4);
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    thunk_FUN_03d233cc(puVar3,0);
    lVar4 = *(long *)(unaff_x19 + 0x18);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar2 + 0x40),lVar4,*(undefined8 *)(lVar2 + 0x28));
          lVar4 = *(long *)(unaff_x19 + 0x18);
          if (lVar4 == 0) goto LAB_06df9c00;
        }
        iVar1 = *(int *)(lVar4 + 0x18);
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_071245a8(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          return;
        }
      }
      return;
    }
  }
LAB_06df9c00:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


