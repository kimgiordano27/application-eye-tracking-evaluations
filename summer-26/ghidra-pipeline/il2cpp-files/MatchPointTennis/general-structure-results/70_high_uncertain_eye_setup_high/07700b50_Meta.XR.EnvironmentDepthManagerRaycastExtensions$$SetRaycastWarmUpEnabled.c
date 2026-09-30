/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$SetRaycastWarmUpEnabled
ENTRY_POINT: 07700b50
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__SetRaycastWarmUpEnabled(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x23;
  
  *(undefined1 *)(unaff_x21 + 0xfdb) = in_w8;
  plVar5 = (long *)(unaff_x19 + 0x48);
  *plVar5 = unaff_x20;
  thunk_FUN_044bb4b4(plVar5);
  lVar3 = *unaff_x23;
  lVar4 = *plVar5;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar3 = *unaff_x23;
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar3 = *unaff_x23;
    }
    uVar7 = **(undefined8 **)(lVar3 + 0xb8);
    lVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2ff50);
    FUN_062fc888(lVar6,uVar7,*(undefined8 *)PTR_DAT_09f2ff58,0);
    plVar5 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar5 = lVar6;
    thunk_FUN_044bb4b4(plVar5,lVar6);
  }
  if (lVar4 != 0) {
    iVar2 = FUN_05c00fdc(lVar4,lVar6,*(undefined8 *)PTR_DAT_09f2ff48);
    iVar1 = 0;
    if (iVar2 != -1) {
      iVar1 = iVar2;
    }
    *(int *)(unaff_x19 + 0x40) = iVar1;
    FUN_07700c24();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


