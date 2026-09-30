/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 01a1d194
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetBoundaryVisible(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_1;
  FUN_019f7424();
  FUN_02698ebc(0);
  lVar1 = FUN_0268fd10();
  if (lVar1 != 0) {
    FUN_026a01f4(lVar1,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_0266622c(*(long *)(unaff_x19 + 0x38),1,0);
      plVar5 = *(long **)(unaff_x19 + 0x50);
      if (plVar5 == (long *)0x0) {
        uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa0);
      }
      else {
        lVar1 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12a);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_01a1d268;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_00d59724(plVar5,*(long *)
                                      Method_System_Collections_Generic_List_Enumerator<StylePropertyId>_MoveNext__
                              ,0);
LAB_01a1d268:
        uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      }
      lVar1 = 0x90;
      if (*(char *)(unaff_x19 + 0xa8) != '\0') {
        lVar1 = 0x88;
      }
      if (*(long *)(unaff_x19 + lVar1) != 0) {
        FUN_0265f96c(uVar3,*(long *)(unaff_x19 + lVar1),0);
        FUN_01a1ce84();
        FUN_01a1d2d0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


