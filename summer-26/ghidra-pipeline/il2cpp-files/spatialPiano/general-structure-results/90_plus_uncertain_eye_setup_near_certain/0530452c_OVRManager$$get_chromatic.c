/*
FUNCTION_NAME: OVRManager$$get_chromatic
ENTRY_POINT: 0530452c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__get_chromatic(undefined1 param_1 [16],undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined4 uVar7;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s14;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  uVar7 = (*(code *)*param_3)();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_05302210(&stack0x00000024);
    FUN_05304678(uVar7,param_2,unaff_s14);
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x50) = unaff_s11;
      *(undefined4 *)(lVar2 + 0x54) = unaff_s10;
      *(undefined4 *)(lVar2 + 0x58) = unaff_s9;
      *(undefined4 *)(lVar2 + 0x5c) = unaff_s8;
      plVar6 = *(long **)(unaff_x19 + 0x48);
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (plVar6 == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                *(long *)Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_05304604;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)
                 FUN_02f421d0(plVar6,*(long *)
                                      Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo,0);
LAB_05304604:
        uVar7 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x28);
        *(undefined4 *)(lVar2 + 0x78) = uVar7;
        if (lVar3 != 0) {
          FUN_052368cc(lVar3,*(undefined8 *)(unaff_x19 + 0x68),0,0);
          OVRManager__OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
                    (unaff_s11,unaff_s10);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


