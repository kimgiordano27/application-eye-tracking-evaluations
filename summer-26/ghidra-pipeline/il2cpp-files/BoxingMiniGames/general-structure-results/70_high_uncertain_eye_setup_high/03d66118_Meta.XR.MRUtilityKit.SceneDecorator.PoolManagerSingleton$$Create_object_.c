/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.PoolManagerSingleton$$Create<object>
ENTRY_POINT: 03d66118
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerSingleton__Create<object>(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xca7) = 1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = unaff_x19;
        thunk_FUN_036b7ad0(puVar7);
      }
      else {
        FUN_0459f03c();
      }
      if (unaff_x19 != (long *)0x0) {
        lVar3 = *(long *)(unaff_x20 + 0x20);
        uVar4 = (**(code **)(*unaff_x19 + 0x1f8))();
        if (lVar3 != 0) {
          FUN_056af3d4(lVar3,uVar4);
          uVar4 = (**(code **)(*unaff_x19 + 0x1f8))();
          uVar5 = (**(code **)(*unaff_x19 + 600))();
          iVar2 = FUN_05c959fc(uVar4,uVar5,0);
          if (iVar2 == 0) {
            return;
          }
          lVar3 = *(long *)(unaff_x20 + 0x20);
          uVar4 = (**(code **)(*unaff_x19 + 600))();
          if (lVar3 != 0) {
            FUN_056af3d4(lVar3,uVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


