/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$Log
ENTRY_POINT: 08a26e0c
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__Log(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  undefined8 uVar7;
  
  FUN_04947ee4();
  FUN_04947ee4(PTR_DAT_0ac4e550);
  *(undefined1 *)(unaff_x21 + 0x30b) = 1;
  plVar6 = (long *)(unaff_x19 + 0x60);
  plVar2 = (long *)*plVar6;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
    uVar3 = FUN_05b61074();
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_08dc2d58(*plVar6);
      puVar1 = PTR_DAT_0ac09ce8;
      if (lVar4 != 0) {
        uVar7 = *(undefined8 *)PTR_DAT_0ac09ce8;
        lVar5 = thunk_FUN_04983e64(lVar4,uVar7);
        if (lVar5 != 0) {
          uVar7 = *(undefined8 *)puVar1;
          *plVar6 = lVar5;
          lVar5 = thunk_FUN_04983e64(lVar4,uVar7);
          if (lVar5 != 0) goto LAB_08a26ec0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar4,uVar7);
      }
      lVar5 = 0;
      *plVar6 = 0;
LAB_08a26ec0:
      thunk_FUN_049ee3d8(plVar6,lVar5);
      return;
    }
  }
  return;
}


