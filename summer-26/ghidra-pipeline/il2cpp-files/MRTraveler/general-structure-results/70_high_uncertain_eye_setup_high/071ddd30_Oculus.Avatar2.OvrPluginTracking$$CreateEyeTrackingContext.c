/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateEyeTrackingContext
ENTRY_POINT: 071ddd30
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


long Oculus_Avatar2_OvrPluginTracking__CreateEyeTrackingContext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  
  if ((DAT_0941ca99 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eaa0e8);
    FUN_03c8f898(PTR_DAT_08e699d0);
    FUN_03c8f898(PTR_DAT_08e69878);
    FUN_03c8f898(PTR_DAT_08e810f0);
    FUN_03c8f898(PTR_DAT_08e79c00);
    FUN_03c8f898(PTR_DAT_08e86378);
    FUN_03c8f898(PTR_DAT_08e695f0);
    FUN_03c8f898(PTR_DAT_08eaa0f0);
    FUN_03c8f898(PTR_DAT_08eaa0f8);
    FUN_03c8f898(PTR_DAT_08eaa100);
    DAT_0941ca99 = 1;
  }
  puVar4 = PTR_DAT_08eaa100;
  puVar3 = PTR_DAT_08eaa0f0;
  puVar2 = PTR_DAT_08eaa0e8;
  puVar1 = PTR_DAT_08e86378;
  if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = FUN_03c8fda8(*(undefined8 *)puVar3,1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  lVar6 = FUN_03c8fda8(*(undefined8 *)puVar4,1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  if (param_1 != 0) {
    lVar7 = FUN_0712796c(lVar5,*(undefined4 *)(param_1 + 0x18),0);
    puVar3 = PTR_DAT_08eaa0f8;
    puVar2 = PTR_DAT_08e699d0;
    puVar1 = PTR_DAT_08e69878;
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar12 = 0;
      do {
        plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
        if (plVar8 == (long *)0x0) goto LAB_071de004;
        if ((lVar6 != 0) &&
           (lVar9 = thunk_FUN_03cf5138(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_071de00c:
          uVar13 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar13,0);
        }
        if ((int)plVar8[3] == 0) {
LAB_071de008:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        plVar8[4] = lVar6;
        thunk_FUN_03d233cc(plVar8 + 4,lVar6);
        uVar13 = *(undefined8 *)PTR_DAT_08e810f0;
        if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        lVar9 = FUN_0710fcf0(uVar13,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_03cf5138(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_071de00c;
        if (*(uint *)(plVar8 + 3) < 2) goto LAB_071de008;
        plVar8[5] = lVar9;
        thunk_FUN_03d233cc(plVar8 + 5,lVar9);
        if (lVar5 == 0) goto LAB_071de004;
        lVar9 = FUN_0711bcdc(lVar5,*(undefined8 *)puVar3,plVar8,0);
        plVar8 = (long *)FUN_03c8f97c(*(undefined8 *)puVar1,2);
        in_stack_00000008._4_4_ = 0;
        lVar10 = thunk_FUN_03cf4e64(*(undefined8 *)puVar2,(long)&stack0x00000008 + 4);
        if (plVar8 == (long *)0x0) goto LAB_071de004;
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_03cf5138(lVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
        goto LAB_071de00c;
        if ((int)plVar8[3] == 0) goto LAB_071de008;
        plVar8[4] = lVar10;
        thunk_FUN_03d233cc(plVar8 + 4,lVar10);
        if ((lVar9 == 0) || (uVar13 = FUN_0702dc3c(lVar9,0,plVar8,0), lVar7 == 0))
        goto LAB_071de004;
        FUN_0712430c(lVar7,uVar13,iVar12,0);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(param_1 + 0x18));
    }
    return lVar7;
  }
LAB_071de004:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


