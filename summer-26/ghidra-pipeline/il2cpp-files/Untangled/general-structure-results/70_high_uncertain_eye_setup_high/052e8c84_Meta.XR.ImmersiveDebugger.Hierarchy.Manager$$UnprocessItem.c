/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Manager$$UnprocessItem
ENTRY_POINT: 052e8c84
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_Manager__UnprocessItem(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long unaff_x19;
  undefined4 *unaff_x22;
  
  uVar3 = FUN_0546954c(param_1,0);
  uVar4 = thunk_FUN_05464b70(param_2,uVar3,0);
  puVar2 = PTR_DAT_06d09430;
  puVar1 = PTR_DAT_06d02130;
  if ((uVar4 & 1) != 0) {
    *(uint *)(unaff_x19 + 0xcc) = (uint)*(byte *)(unaff_x19 + 0x40);
    return;
  }
  if (param_2 == 0) {
LAB_052e8df8:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar3 = FUN_0546732c(param_2,*(undefined8 *)PTR_DAT_06d09430,*(undefined8 *)PTR_DAT_06d02130,0);
  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_052e8df8;
  uVar5 = FUN_0546954c(*(long *)(unaff_x19 + 0x30),0);
  uVar4 = thunk_FUN_05464b70(param_2,uVar5,0);
  if ((uVar4 & 1) == 0) {
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar6 = FUN_0546954c(*(long *)(unaff_x19 + 0x30),0), lVar6 == 0)) goto LAB_052e8df8;
    uVar5 = FUN_0546732c(lVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
    uVar4 = thunk_FUN_05464b70(uVar3,uVar5,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_052e8df8;
      uVar3 = FUN_0546954c(*(long *)(unaff_x19 + 0x20),0);
      uVar4 = thunk_FUN_05464b70(param_2,uVar3,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x22 = 0;
        return;
      }
      uVar3 = FUN_05465414(*(undefined8 *)PTR_DAT_06d3dc10,*(undefined8 *)(unaff_x19 + 0x20),
                           *(undefined8 *)PTR_DAT_06d3dc18,0);
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
      }
      FUN_06694324(uVar3,0);
      uVar7 = 2;
      goto LAB_052e8db4;
    }
  }
  uVar7 = 3;
LAB_052e8db4:
  *unaff_x22 = uVar7;
  return;
}


