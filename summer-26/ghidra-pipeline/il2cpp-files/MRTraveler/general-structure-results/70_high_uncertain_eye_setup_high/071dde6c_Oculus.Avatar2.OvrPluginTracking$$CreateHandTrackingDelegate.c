/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateHandTrackingDelegate
ENTRY_POINT: 071dde6c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__CreateHandTrackingDelegate(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar5;
  undefined8 uVar6;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 *puVar7;
  undefined8 in_stack_00000008;
  
  puVar7 = *(undefined8 **)(unaff_x29 + 0x9d0);
  iVar5 = 0;
  do {
    plVar1 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,2);
    if (plVar1 == (long *)0x0) goto LAB_071de004;
    if ((unaff_x21 != 0) && (lVar2 = thunk_FUN_03cf5138(), lVar2 == 0)) {
LAB_071de00c:
      uVar6 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar6,0);
    }
    if ((int)plVar1[3] == 0) {
LAB_071de008:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    plVar1[4] = unaff_x21;
    thunk_FUN_03d233cc();
    uVar6 = *(undefined8 *)PTR_DAT_08e810f0;
    if (*(int *)(*(long *)PTR_DAT_08e695f0 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = FUN_0710fcf0(uVar6,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_071de00c;
    if (*(uint *)(plVar1 + 3) < 2) goto LAB_071de008;
    plVar1[5] = lVar2;
    thunk_FUN_03d233cc(plVar1 + 5,lVar2);
    if (unaff_x20 == 0) {
LAB_071de004:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar2 = FUN_0711bcdc();
    plVar1 = (long *)FUN_03c8f97c(*unaff_x28,2);
    in_stack_00000008._4_4_ = 0;
    lVar3 = thunk_FUN_03cf4e64(*puVar7,(long)&stack0x00000008 + 4);
    if (plVar1 == (long *)0x0) goto LAB_071de004;
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_03cf5138(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0))
    goto LAB_071de00c;
    if ((int)plVar1[3] == 0) goto LAB_071de008;
    plVar1[4] = lVar3;
    thunk_FUN_03d233cc(plVar1 + 4,lVar3);
    if ((lVar2 == 0) || (FUN_0702dc3c(lVar2,0,plVar1,0), unaff_x22 == 0)) goto LAB_071de004;
    FUN_0712430c();
    iVar5 = iVar5 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= iVar5) {
      return;
    }
  } while( true );
}


