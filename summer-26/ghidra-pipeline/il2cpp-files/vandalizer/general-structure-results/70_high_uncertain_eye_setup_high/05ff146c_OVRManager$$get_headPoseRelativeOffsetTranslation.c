/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 05ff146c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetTranslation(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_0322f148();
  FUN_056f853c();
  if (lVar7 != 0) {
    FUN_04459758(lVar7,uVar3,*(undefined8 *)PTR_DAT_075f6c68);
    puVar1 = PTR_DAT_075f6c60;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
      uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f6c60);
      FUN_056fa11c();
      puVar2 = PTR_DAT_075f6c80;
      if (plVar8 != (long *)0x0) {
        lVar7 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f6c80) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_05ff1544;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075f6c80,0);
LAB_05ff1544:
        (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
          uVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
          FUN_056fa11c();
          if (plVar8 != (long *)0x0) {
            lVar7 = *plVar8;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_05ff15d4;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar2,0);
LAB_05ff15d4:
            (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
            if (*(long *)(unaff_x19 + 0x28) != 0) {
              FUN_05f218c8(*(long *)(unaff_x19 + 0x28),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


