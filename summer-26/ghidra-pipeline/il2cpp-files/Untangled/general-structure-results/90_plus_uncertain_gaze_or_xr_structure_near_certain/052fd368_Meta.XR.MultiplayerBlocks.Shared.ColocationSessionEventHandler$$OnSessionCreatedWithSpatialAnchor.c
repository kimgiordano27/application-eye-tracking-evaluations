/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnSessionCreatedWithSpatialAnchor
ENTRY_POINT: 052fd368
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnSessionCreatedWithSpatialAnchor
               (ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3e1d8);
    FUN_02f07e70(PTR_DAT_06d3e1e8);
    FUN_02f07e70(PTR_DAT_06d3e1e0);
    FUN_02f07e70(PTR_DAT_06d3e1c8);
    *(undefined1 *)(unaff_x20 + 0x263) = 1;
  }
  lVar2 = *unaff_x21;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar2 = *unaff_x21;
  }
  puVar1 = PTR_DAT_06d3e1e0;
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    lVar2 = **(long **)(lVar2 + 0xb8);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d3e1e0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_052fd418;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c();
LAB_052fd418:
    uVar4 = (*(code *)*puVar3)();
    if (lVar2 != 0) {
      uVar6 = FUN_04c74820(lVar2,uVar4,*(undefined8 *)PTR_DAT_06d3e1d8);
      if ((uVar6 & 1) != 0) {
        lVar2 = *unaff_x21;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar2 = *unaff_x21;
        }
        lVar5 = *unaff_x19;
        lVar2 = **(long **)(lVar2 + 0xb8);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_052fd4ac;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02eea86c();
LAB_052fd4ac:
        uVar4 = (*(code *)*puVar3)();
        if (lVar2 == 0) goto LAB_052fd514;
        FUN_04c75b28(lVar2,uVar4,*(undefined8 *)PTR_DAT_06d3e1e8);
        lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x052fd500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
          return;
        }
      }
      return;
    }
  }
LAB_052fd514:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


