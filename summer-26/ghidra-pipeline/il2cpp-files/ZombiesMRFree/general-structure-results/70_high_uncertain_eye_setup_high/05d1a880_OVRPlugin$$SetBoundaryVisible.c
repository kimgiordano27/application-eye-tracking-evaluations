/*
FUNCTION_NAME: OVRPlugin$$SetBoundaryVisible
ENTRY_POINT: 05d1a880
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


undefined8 OVRPlugin__SetBoundaryVisible(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  int iVar8;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  float fVar10;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb4b18);
    FUN_02fe925c(PTR_DAT_06fb89b0);
    FUN_02fe925c(PTR_DAT_06f6d618);
    *(undefined1 *)(unaff_x22 + 0x8b6) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_068f9b78();
  puVar2 = PTR_DAT_06fb89b0;
  puVar1 = PTR_DAT_06fb4b18;
  if ((uVar4 & 1) == 0) {
    if (unaff_x19 == 0) {
LAB_05d1a9d0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar8 = 0;
    do {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      iVar3 = FUN_05d34be4();
      if (iVar3 != 0) {
        plVar9 = *(long **)(param_2 + 0x130);
        if (plVar9 == (long *)0x0) goto LAB_05d1a9d0;
        lVar6 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_05d1a984;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_02feb5b8(plVar9,*(long *)puVar2,0);
LAB_05d1a984:
        fVar10 = (float)(*(code *)*puVar5)(plVar9,iVar8,puVar5[1]);
        if (*(float *)(unaff_x19 + 0xd8) < fVar10) {
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 5);
  }
  return 0;
}


