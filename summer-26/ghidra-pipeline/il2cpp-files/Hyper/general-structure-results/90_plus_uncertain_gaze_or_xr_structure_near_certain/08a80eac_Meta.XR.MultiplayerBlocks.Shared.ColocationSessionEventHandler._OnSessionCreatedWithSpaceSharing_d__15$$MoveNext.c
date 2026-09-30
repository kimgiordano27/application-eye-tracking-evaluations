/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpaceSharing>d__15$$MoveNext
ENTRY_POINT: 08a80eac
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpaceSharing>d__15__MoveNext
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0xce8);
  plVar7 = *(long **)(unaff_x19 + 0x10);
  uVar2 = thunk_FUN_04983f60(*puVar8);
  FUN_06052aa8();
  puVar1 = PTR_DAT_0ac4c9f0;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x1a) * 0x10 + 0x138);
          goto LAB_08a80f34;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(plVar7,*(long *)PTR_DAT_0ac4c9f0,0x1a);
LAB_08a80f34:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    plVar7 = *(long **)(unaff_x19 + 0x10);
    uVar2 = thunk_FUN_04983f60(*puVar8);
    FUN_06052aa8();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x1c) * 0x10 + 0x138);
            goto LAB_08a80fc0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68(plVar7,*(long *)puVar1,0x1c);
LAB_08a80fc0:
                    /* WARNING: Could not recover jumptable at 0x08a80fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar7,uVar2,puVar8[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


