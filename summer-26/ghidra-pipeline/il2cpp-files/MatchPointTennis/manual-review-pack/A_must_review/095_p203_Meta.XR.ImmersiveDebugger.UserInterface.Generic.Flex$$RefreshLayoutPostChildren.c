/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPostChildren
ENTRY_POINT: 076eb290
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPostChildren
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  
  FUN_07a61000(param_1,0,param_3,0);
  if (*(long *)(unaff_x19 + 0x210) != 0) {
    FUN_07430e40(*(long *)(unaff_x19 + 0x210),*(undefined8 *)PTR_DAT_09f2f4a0);
    puVar1 = PTR_DAT_09f2f498;
    if (*(long *)(unaff_x19 + 0x218) != 0) {
      FUN_071c08ec(*(long *)(unaff_x19 + 0x218),*(undefined8 *)PTR_DAT_09f2f498);
      if (*(long *)(unaff_x19 + 0x228) != 0) {
        FUN_071c08ec(*(long *)(unaff_x19 + 0x228),*(undefined8 *)puVar1);
        lVar2 = *(long *)(unaff_x19 + 0x208);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          puVar1 = PTR_DAT_09f2f490;
          if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_076eb33c;
          FUN_071c0790(*(long *)(unaff_x19 + 0x220),*(undefined8 *)PTR_DAT_09f2f490);
          if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_076eb33c;
          FUN_071c0790(*(long *)(unaff_x19 + 0x230),*(undefined8 *)puVar1);
        }
        if (*(long *)(unaff_x19 + 0x1b8) != 0) {
          FUN_076eb340();
          if (*(long *)(unaff_x19 + 0x1b8) != 0) {
            FUN_076e9ae8(*(long *)(unaff_x19 + 0x1b8),1);
            return;
          }
        }
      }
    }
  }
LAB_076eb33c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


