/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Hierarchy.Item$$Clear
ENTRY_POINT: 052e8bbc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Hierarchy_Item__Clear(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_071c1178 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d09430);
    FUN_02f07e70(PTR_DAT_06d3dc10);
    FUN_02f07e70(PTR_DAT_06d02130);
    FUN_02f07e70(PTR_DAT_06d3dc18);
    DAT_071c1178 = 1;
  }
  if ((*(char *)(param_1 + 0xd8) == '\0') && (*(char *)(param_1 + 0xd9) == '\0')) {
    uVar8 = 4;
  }
  else {
    if ((*(int *)(param_1 + 0xcc) != 4) && (*(char *)(param_1 + 0x40) == '\0')) {
      return;
    }
    if (*(char *)(param_1 + 0x45) == '\0') {
      if (*(int *)(param_1 + 0xdc) != 1) {
        if ((*(int *)(param_1 + 0x118) != 1) && (*(int *)(param_1 + 0x11c) != 1)) {
LAB_052e8df0:
          *(int *)(param_1 + 0xcc) = 0;
          return;
        }
LAB_052e8dd4:
        *(uint *)(param_1 + 0xcc) = (uint)*(byte *)(param_1 + 0x40);
        return;
      }
      if (*(long *)(param_1 + 0xd0) == 0) {
LAB_052e8df8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar3 = FUN_0546954c(*(long *)(param_1 + 0xd0),0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_052e8df8;
      uVar4 = FUN_0546954c(*(long *)(param_1 + 0x28),0);
      uVar5 = thunk_FUN_05464b70(lVar3,uVar4,0);
      puVar2 = PTR_DAT_06d09430;
      puVar1 = PTR_DAT_06d02130;
      if ((uVar5 & 1) != 0) goto LAB_052e8dd4;
      if (lVar3 == 0) goto LAB_052e8df8;
      uVar4 = FUN_0546732c(lVar3,*(undefined8 *)PTR_DAT_06d09430,*(undefined8 *)PTR_DAT_06d02130,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_052e8df8;
      uVar6 = FUN_0546954c(*(long *)(param_1 + 0x30),0);
      uVar5 = thunk_FUN_05464b70(lVar3,uVar6,0);
      if ((uVar5 & 1) == 0) {
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (lVar7 = FUN_0546954c(*(long *)(param_1 + 0x30),0), lVar7 == 0)) goto LAB_052e8df8;
        uVar6 = FUN_0546732c(lVar7,*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
        uVar5 = thunk_FUN_05464b70(uVar4,uVar6,0);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_1 + 0x20) != 0) {
            uVar4 = FUN_0546954c(*(long *)(param_1 + 0x20),0);
            uVar5 = thunk_FUN_05464b70(lVar3,uVar4,0);
            if ((uVar5 & 1) != 0) {
              uVar4 = FUN_05465414(*(undefined8 *)PTR_DAT_06d3dc10,*(undefined8 *)(param_1 + 0x20),
                                   *(undefined8 *)PTR_DAT_06d3dc18,0);
              if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
                thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
              }
              FUN_06694324(uVar4,0);
              uVar8 = 2;
              goto LAB_052e8db4;
            }
            goto LAB_052e8df0;
          }
          goto LAB_052e8df8;
        }
      }
    }
    uVar8 = 3;
  }
LAB_052e8db4:
  *(undefined4 *)(param_1 + 0xcc) = uVar8;
  return;
}


