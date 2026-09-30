/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 014b89e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (ulong param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x22;
  long unaff_x23;
  ulong uVar7;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IBinding>_Clear__);
    *(undefined1 *)(unaff_x23 + 0xd96) = 1;
  }
  puVar1 = Method_System_Collections_Generic_List<IBinding>_Clear__;
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar7) {
        return;
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar4 = *(long **)(lVar3 + uVar7 * 8 + 0x20);
      if (plVar4 != (long *)0x0) {
        if (plVar4 == (long *)0x0) break;
        lVar3 = *plVar4;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_014b8a8c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar1,0);
LAB_014b8a8c:
        (*(code *)*puVar2)(plVar4);
        lVar3 = *(long *)(unaff_x22 + 0xa0);
      }
      uVar7 = uVar7 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


