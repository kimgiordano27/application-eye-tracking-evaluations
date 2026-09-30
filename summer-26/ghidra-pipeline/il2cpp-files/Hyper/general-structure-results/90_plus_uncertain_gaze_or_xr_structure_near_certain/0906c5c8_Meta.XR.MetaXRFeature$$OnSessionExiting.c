/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 0906c5c8
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionExiting(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  FUN_04947ee4(PTR_DAT_0ac09810);
  FUN_04947ee4(PTR_DAT_0ac57918);
  *(undefined1 *)(unaff_x23 + 0xc2) = 1;
  puVar2 = PTR_DAT_0ac783d8;
  if (*(char *)(unaff_x20 + 0x69) != '\0') {
    unaff_x21 = unaff_x22;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar9 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac783d8) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0906c650;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_0906c650:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0ac09788 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0ac09788))
      {
        uVar5 = thunk_FUN_0a180a20(plVar4,0);
        uVar9 = FUN_08bd9aa0(uVar9,uVar5,*(undefined8 *)PTR_DAT_0ac12a28,0);
      }
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0906c708;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68();
LAB_0906c708:
    lVar6 = (*(code *)*puVar3)();
    if ((lVar6 != 0) &&
       (plVar4 = (long *)thunk_FUN_04956588(lVar6,0), puVar2 = PTR_DAT_0ac783e0,
       plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      uVar5 = FUN_08bc9f74(*(undefined8 *)puVar2,uVar5,0);
      FUN_08bcc3c0(uVar9,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


