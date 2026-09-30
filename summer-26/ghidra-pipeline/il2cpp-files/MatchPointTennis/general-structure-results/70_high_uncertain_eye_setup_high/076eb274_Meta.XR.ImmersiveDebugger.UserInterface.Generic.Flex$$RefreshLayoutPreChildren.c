/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$RefreshLayoutPreChildren
ENTRY_POINT: 076eb274
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__RefreshLayoutPreChildren(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_07a61000(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
    }
    if (*(long *)(unaff_x19 + 0x210) != 0) {
      FUN_07430e40(*(long *)(unaff_x19 + 0x210),*(undefined8 *)PTR_DAT_09f2f4a0);
      puVar2 = PTR_DAT_09f2f498;
      if (*(long *)(unaff_x19 + 0x218) != 0) {
        FUN_071c08ec(*(long *)(unaff_x19 + 0x218),*(undefined8 *)PTR_DAT_09f2f498);
        if (*(long *)(unaff_x19 + 0x228) != 0) {
          FUN_071c08ec(*(long *)(unaff_x19 + 0x228),*(undefined8 *)puVar2);
          lVar3 = *(long *)(unaff_x19 + 0x208);
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x18) = 0;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            puVar2 = PTR_DAT_09f2f490;
            if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_076eb33c;
            FUN_071c0790(*(long *)(unaff_x19 + 0x220),*(undefined8 *)PTR_DAT_09f2f490);
            if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_076eb33c;
            FUN_071c0790(*(long *)(unaff_x19 + 0x230),*(undefined8 *)puVar2);
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
  }
LAB_076eb33c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


