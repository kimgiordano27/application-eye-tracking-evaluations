/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceTrackingVisemesSupported
ENTRY_POINT: 0697be30
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetFaceTrackingVisemesSupported(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *in_x9;
  long unaff_x19;
  int unaff_w20;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x21;
  undefined8 uVar9;
  uint uVar10;
  
  while( true ) {
    (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x620));
    lVar4 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (lVar4 == 0) break;
    if (*(int *)(lVar4 + 0x18) <= unaff_w20) {
      if (*(char *)(unaff_x19 + 0x20) == '\0') {
        return;
      }
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        lVar4 = FUN_0447b578(*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_084b7600);
        plVar7 = (long *)(unaff_x19 + 0x40);
        *plVar7 = lVar4;
        thunk_FUN_03afed3c(plVar7,lVar4);
        puVar3 = PTR_DAT_084b75f8;
        puVar2 = PTR_DAT_08486738;
        lVar4 = *plVar7;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if ((int)uVar1 < 1) {
            return;
          }
          uVar10 = 0;
          goto LAB_0697bea4;
        }
      }
      break;
    }
    param_2 = (long *)FUN_04de82e0(lVar4,unaff_w20,*unaff_x21);
    if (param_2 == (long *)0x0) break;
    param_1 = *param_2;
    in_x9 = *(code **)(param_1 + 0x618);
  }
LAB_0697be44:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_0697bea4:
  if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  lVar8 = *(long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
  if (lVar8 == 0) goto LAB_0697be44;
  uVar5 = FUN_07d2d014(lVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)puVar2);
  }
  uVar6 = FUN_07c9c218(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    uVar5 = FUN_07d2d014(lVar8,0);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar2);
    }
    uVar6 = FUN_07c9c218(uVar5,uVar9,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = FUN_07d2d014(lVar8,0);
      if (lVar8 == 0) goto LAB_0697be44;
      lVar8 = FUN_0447aad0(lVar8,*(undefined8 *)puVar3);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar2);
      }
      uVar6 = FUN_07ca21f0(lVar8,0);
      if ((uVar6 & 1) != 0) {
        if (lVar8 == 0) goto LAB_0697be44;
        FUN_0697bd84(lVar8);
      }
    }
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  uVar10 = uVar10 + 1;
  if ((int)uVar1 <= (int)uVar10) {
    return;
  }
  goto LAB_0697bea4;
}


