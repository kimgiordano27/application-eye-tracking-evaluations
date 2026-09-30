/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 05304474
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRManager__set_hasVrFocus
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if ((param_4 & 1) == 0) {
    unaff_s11 = *(undefined4 *)(unaff_x19 + 0x54);
    unaff_s10 = *(undefined4 *)(unaff_x19 + 0x58);
    unaff_s9 = *(undefined4 *)(unaff_x19 + 0x5c);
    unaff_s8 = *(undefined4 *)(unaff_x19 + 0x60);
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if (lVar2 != 0) {
    in_stack_00000060 = *(undefined8 *)(lVar2 + 0x168);
    in_stack_00000048 = *(undefined8 *)(lVar2 + 0x150);
    in_stack_00000040 = *(undefined8 *)(lVar2 + 0x148);
    in_stack_00000058 = *(undefined8 *)(lVar2 + 0x160);
    uVar10 = *(undefined8 *)(lVar2 + 0x158);
    in_stack_00000050 = uVar10;
    if (*(int *)(*(long *)System_CultureAwareComparer_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = (undefined4)uVar10;
    uVar7 = FUN_053016ec(&stack0x00000040);
    plVar6 = *(long **)(unaff_x19 + 0x70);
    if (plVar6 != (long *)0x0) {
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)System_Runtime_Serialization_DataContract_TypeInfo)
          {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_05304524;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)
               FUN_02f421d0(plVar6,*(long *)System_Runtime_Serialization_DataContract_TypeInfo,0);
LAB_05304524:
      uVar7 = (*(code *)*puVar1)(uVar7,uVar9,param_3,plVar6,puVar1[1]);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_05302210(&stack0x00000024);
      FUN_05304678(uVar7,uVar9,param_3);
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x50) = unaff_s11;
        *(undefined4 *)(lVar2 + 0x54) = unaff_s10;
        *(undefined4 *)(lVar2 + 0x58) = unaff_s9;
        *(undefined4 *)(lVar2 + 0x5c) = unaff_s8;
        plVar6 = *(long **)(unaff_x19 + 0x48);
        lVar2 = *(long *)(unaff_x19 + 0x28);
        if (plVar6 == (long *)0x0) {
          uVar8 = 0;
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
                                        Unity_Properties_PropertyBag<ResolvedStyleAccess>_TypeInfo,0
                               );
LAB_05304604:
          uVar8 = (*(code *)*puVar1)(plVar6,puVar1[1]);
        }
        if (lVar2 != 0) {
          lVar3 = *(long *)(unaff_x19 + 0x28);
          *(undefined4 *)(lVar2 + 0x78) = uVar8;
          if (lVar3 != 0) {
            FUN_052368cc(lVar3,*(undefined8 *)(unaff_x19 + 0x68),0,0);
            OVRManager__OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice
                      (unaff_s11,unaff_s10,unaff_s9,unaff_s8,uVar7,uVar9,param_3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


