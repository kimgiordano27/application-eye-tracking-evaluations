/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 06461038
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long in_x10;
  long *plVar9;
  long unaff_x20;
  long unaff_x25;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  plVar5 = *(long **)(*(long *)(param_4 + 0x20) + 0xc0);
  plVar9 = (long *)(in_x10 - ((ulong)*(uint *)(plVar5[1] + 0xfc) + 0xf & 0x1fffffff0));
  uVar3 = *(undefined8 *)(*plVar5 + 0x80);
  *(undefined1 *)(unaff_x29 + -0x1c) = 0;
  puVar1 = (undefined8 *)thunk_FUN_03ae913c(param_2,uVar3);
  FUN_07ebaed4(unaff_x29 + -0x1c,*puVar1,param_3,0);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x1c;
  plVar5 = (long *)thunk_FUN_03ae913c(param_2,*(undefined8 *)(**(long **)(lVar6 + 0xc0) + 0x80));
  lVar6 = *plVar5;
  puVar1 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
  uVar3 = *puVar1;
  pcVar7 = (code *)puVar1[2];
  *(long **)(unaff_x29 + -0x18) = plVar9;
  (*pcVar7)(uVar3,puVar1,param_2,unaff_x29 + -0x18,plVar9);
  if (lVar6 == 0) {
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar4 = *(long *)(lVar8 + 0x38);
    puVar1 = *(undefined8 **)(lVar8 + 0x48);
    uVar3 = *puVar1;
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03ac4090(lVar4);
    }
    uVar2 = thunk_FUN_03ac73c0(param_3,lVar4);
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x28)) {
      plVar9 = (long *)*plVar9;
    }
    pcVar7 = (code *)puVar1[2];
    *(undefined8 *)(unaff_x29 + -0x18) = uVar2;
    *(long **)(unaff_x29 + -0x10) = plVar9;
    (*pcVar7)(uVar3,puVar1,lVar6,unaff_x29 + -0x18,plVar9);
    FUN_07ebaed8(unaff_x29 + -0x1c,0);
    if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


