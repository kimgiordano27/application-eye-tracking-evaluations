/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 0906c1fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(code *param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  
  plVar3 = (long *)(*param_1)();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0ac09788 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0ac09788)) {
      thunk_FUN_0a180a20(plVar3,0);
      FUN_08dc32c4(0);
      unaff_x20 = FUN_08bd9aa0();
    }
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto Meta_XR_MetaXRFeature__OnAppSpaceChange;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68();
Meta_XR_MetaXRFeature__OnAppSpaceChange:
  lVar6 = (*(code *)*puVar4)();
  if ((lVar6 != 0) &&
     (plVar3 = (long *)thunk_FUN_04956588(lVar6,0), puVar2 = PTR_DAT_0ac783e0, plVar3 != (long *)0x0
     )) {
    uVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    uVar5 = FUN_08bc9f74(*(undefined8 *)puVar2,uVar5,0);
    FUN_08bcc3c0(unaff_x20,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


