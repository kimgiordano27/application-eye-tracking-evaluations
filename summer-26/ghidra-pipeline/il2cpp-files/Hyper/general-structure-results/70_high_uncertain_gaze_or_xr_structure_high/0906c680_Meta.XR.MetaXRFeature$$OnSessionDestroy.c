/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionDestroy
ENTRY_POINT: 0906c680
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionDestroy(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  
  if (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1) {
    thunk_FUN_0a180a20(param_2,0);
    unaff_x20 = FUN_08bd9aa0();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0906c708;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_0906c708:
  lVar5 = (*(code *)*puVar2)();
  if ((lVar5 != 0) &&
     (plVar3 = (long *)thunk_FUN_04956588(lVar5,0), puVar1 = PTR_DAT_0ac783e0, plVar3 != (long *)0x0
     )) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    uVar4 = FUN_08bc9f74(*(undefined8 *)puVar1,uVar4,0);
    FUN_08bcc3c0(unaff_x20,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


