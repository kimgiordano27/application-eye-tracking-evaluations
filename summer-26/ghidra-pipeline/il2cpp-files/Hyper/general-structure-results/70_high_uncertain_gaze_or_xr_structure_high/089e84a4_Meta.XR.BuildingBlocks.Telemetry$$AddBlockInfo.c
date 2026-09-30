/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 089e84a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x11a) = 1;
  lVar4 = *unaff_x21;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *unaff_x21;
  }
  plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
  if (plVar5 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar5 + 0x1c8))
                      (*(undefined4 *)(unaff_x19 + 0x1c),plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    puVar1 = PTR_DAT_0ac41c68;
    uVar2 = uVar2 ^ unaff_w20;
    if (*(float *)(unaff_x19 + 0x20) != 0.0) {
      if (*(int *)(*(long *)PTR_DAT_0ac41c68 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32411a == '\0') {
        FUN_04947ee4(PTR_DAT_0ac41c68);
        DAT_0b32411a = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar4 = *(long *)puVar1;
      }
      plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
      if (plVar5 == (long *)0x0) goto LAB_089e85fc;
      uVar3 = (**(code **)(*plVar5 + 0x1c8))
                        (*(undefined4 *)(unaff_x19 + 0x20),plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      uVar2 = uVar3 ^ uVar2;
    }
    puVar1 = PTR_DAT_0ac41c68;
    if (*(float *)(unaff_x19 + 0x24) != 0.0) {
      if (*(int *)(*(long *)PTR_DAT_0ac41c68 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32411a == '\0') {
        FUN_04947ee4(PTR_DAT_0ac41c68);
        DAT_0b32411a = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar4 = *(long *)puVar1;
      }
      plVar5 = *(long **)(*(long *)(lVar4 + 0xb8) + 8);
      if (plVar5 == (long *)0x0) goto LAB_089e85fc;
      uVar3 = (**(code **)(*plVar5 + 0x1c8))
                        (*(undefined4 *)(unaff_x19 + 0x24),plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      uVar2 = uVar3 ^ uVar2;
    }
    plVar5 = *(long **)(unaff_x19 + 0x10);
    if (plVar5 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x158))(plVar5,*(undefined8 *)(*plVar5 + 0x160));
      uVar2 = uVar3 ^ uVar2;
    }
    return uVar2;
  }
LAB_089e85fc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


