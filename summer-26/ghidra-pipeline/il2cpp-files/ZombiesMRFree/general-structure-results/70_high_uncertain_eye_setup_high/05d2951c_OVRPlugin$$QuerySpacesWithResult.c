/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 05d2951c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpacesWithResult(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  
  lVar1 = FUN_068f5d7c();
  if (lVar1 != 0) {
    FUN_06904e58(lVar1,0);
    if (*(long *)(unaff_x19 + 0x40) != 0) {
      FUN_068cd970(*(long *)(unaff_x19 + 0x40),1,0);
      plVar5 = *(long **)(unaff_x19 + 0x58);
      if (plVar5 == (long *)0x0) {
        uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
      }
      else {
        lVar1 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb4c68) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_05d295c4;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06fb4c68,0);
LAB_05d295c4:
        uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      }
      lVar1 = 0x98;
      if (*(char *)(unaff_x19 + 0xb0) != '\0') {
        lVar1 = 0x90;
      }
      if (*(long *)(unaff_x19 + lVar1) != 0) {
        FUN_068b63c8(uVar3,*(long *)(unaff_x19 + lVar1),0);
        FUN_05d291e8();
        FUN_05d2962c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


