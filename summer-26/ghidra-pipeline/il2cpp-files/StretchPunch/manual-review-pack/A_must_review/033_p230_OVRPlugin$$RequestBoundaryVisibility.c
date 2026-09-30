/*
FUNCTION_NAME: OVRPlugin$$RequestBoundaryVisibility
ENTRY_POINT: 033d4d0c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * OVRPlugin__RequestBoundaryVisibility(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  undefined4 unaff_w23;
  long *unaff_x24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  
  do {
    if ((param_1 & 1) == 0) {
      uVar6 = FUN_033ac058(unaff_x19,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_033ac048(unaff_x19,0);
        if ((uVar6 & 1) != 0) {
          if (unaff_x21 == 0) goto LAB_033d4f88;
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_033d4f88;
          uVar2 = *(uint *)(unaff_x21 + 0x18);
          if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_033d4e90;
          *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = unaff_w27;
        }
      }
      else {
        if (unaff_x21 == 0) goto LAB_033d4f88;
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_033d4f88;
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_033d4e90;
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = unaff_w26;
      }
    }
    else {
      uVar5 = (**(code **)(*unaff_x19 + 0x428))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x430));
      if (unaff_x21 == 0) {
LAB_033d4f88:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar7 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_033d4f88;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar5;
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      }
      else {
        FUN_0315d730();
        lVar7 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_033d4f88;
      }
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_033d4e90;
      *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = unaff_w25;
    }
    while( true ) {
      unaff_x19 = (long *)(**(code **)(*unaff_x19 + 0x418))
                                    (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x420));
      if (unaff_x19 == (long *)0x0) goto LAB_033d4f88;
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(unaff_x19);
      }
      uVar6 = FUN_033ab298(unaff_x19,0);
      puVar4 = StringLiteral_5633;
      puVar3 = 
      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
      if ((uVar6 & 1) == 0) {
        if (unaff_x21 != 0) {
          FUN_0315f0ec();
          uVar8 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)puVar3);
          }
          FUN_033a87c8(uVar8,0);
          if (unaff_x20 != 0) {
            FUN_032dfad4();
            return unaff_x19;
          }
        }
        goto LAB_033d4f88;
      }
      uVar6 = (**(code **)(*unaff_x19 + 0x8f8))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x900));
      if ((uVar6 & 1) == 0) break;
      if (unaff_x21 == 0) goto LAB_033d4f88;
      lVar7 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_033d4f88;
      uVar2 = *(uint *)(unaff_x21 + 0x18);
      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar2 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = unaff_w23;
      }
      else {
LAB_033d4e90:
        FUN_0315d730();
      }
    }
    param_1 = FUN_033ac038(unaff_x19,0);
  } while( true );
}


