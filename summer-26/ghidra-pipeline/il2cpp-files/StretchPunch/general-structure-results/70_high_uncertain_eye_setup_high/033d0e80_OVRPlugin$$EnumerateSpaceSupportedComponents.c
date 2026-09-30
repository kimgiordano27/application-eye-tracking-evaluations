/*
FUNCTION_NAME: OVRPlugin$$EnumerateSpaceSupportedComponents
ENTRY_POINT: 033d0e80
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnumerateSpaceSupportedComponents(void)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  
  FUN_01d7d918(StringLiteral_8824);
  FUN_01d7d918(StringLiteral_6199);
  *(undefined1 *)(unaff_x21 + 0xa40) = 1;
  if ((unaff_x20 != (long *)0x0) && (plVar2 = (long *)FUN_033ab2a8(), plVar2 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,*(undefined8 *)(*plVar2 + 0x390));
    if ((uVar3 & 1) == 0) {
      uVar3 = (**(code **)(*unaff_x20 + 0x3b8))();
      if (((uVar3 & 1) != 0) || (uVar3 = (**(code **)(*unaff_x20 + 0x268))(), (uVar3 & 1) == 0)) {
LAB_033d1128:
        (**(code **)(*unaff_x20 + 0x2c8))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x2d0));
        thunk_FUN_01d6f598(unaff_x20,0);
        FUN_033c41ec();
        return;
      }
      plVar2 = (long *)FUN_033d4bc0();
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460));
        uVar4 = *(undefined8 *)StringLiteral_5640;
        if (*(int *)(*(long *)
                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)
                              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                            );
        }
        FUN_033a87c8(uVar4,0);
        if (unaff_x19 != 0) {
          FUN_032dfad4();
          unaff_x20 = (long *)(**(code **)(*plVar2 + 0x438))
                                        (plVar2,*(undefined8 *)(*plVar2 + 0x440));
          if (unaff_x20 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
            if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7df0c(unaff_x20);
            }
          }
          if (unaff_x20 != (long *)0x0) goto LAB_033d1128;
        }
      }
    }
    else {
      plVar2 = (long *)FUN_033d4bc0();
      uVar4 = *(undefined8 *)StringLiteral_8823;
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*(long *)
                            Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          );
      }
      FUN_033a87c8(uVar4,0);
      if (unaff_x19 != 0) {
        FUN_032dfb50();
        FUN_032e11f0();
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x468))(plVar2,*(undefined8 *)(*plVar2 + 0x470));
          FUN_032e11f0();
          (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
          FUN_033a87c8(*(undefined8 *)StringLiteral_8979,0);
          FUN_032dfad4();
          (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
          FUN_033a87c8(*(undefined8 *)StringLiteral_6183,0);
          FUN_032dfad4();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


