/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 07a3c314
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingLevel(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  
  *(undefined1 *)(unaff_x20 + 0x28f) = 1;
  if (*(char *)(unaff_x19 + 0x58) == '\0') {
    return;
  }
  plVar8 = *(long **)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092ba188);
  FUN_06e59bfc();
  puVar2 = PTR_DAT_092ba190;
  puVar1 = PTR_DAT_09285e40;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092ba190) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_07a3c3d4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092ba190,8);
LAB_07a3c3d4:
    (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
    plVar8 = *(long **)(unaff_x19 + 0x28);
    uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_075d444c();
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
            goto LAB_07a3c458;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar2,0xe);
LAB_07a3c458:
                    /* WARNING: Could not recover jumptable at 0x07a3c474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


