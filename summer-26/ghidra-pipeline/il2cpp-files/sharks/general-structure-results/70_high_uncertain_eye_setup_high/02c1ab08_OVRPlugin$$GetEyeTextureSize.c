/*
FUNCTION_NAME: OVRPlugin$$GetEyeTextureSize
ENTRY_POINT: 02c1ab08
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetEyeTextureSize(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  thunk_FUN_01843fdc();
  uVar1 = FUN_02be74a8();
  if (*(int *)(unaff_x20 + 0x18) != 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
LAB_02c1ae88:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    FUN_0187f3ac();
    if ((uVar1 & 1) != 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02c1ae88;
      uVar1 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar1 & 1) == 0) {
        lVar2 = FUN_02bf4718();
        if (lVar2 == 0) {
          return (long *)0x0;
        }
        uVar6 = *(undefined8 *)PTR_DAT_037f2f98;
        plVar3 = (long *)thunk_FUN_01861ac0(lVar2,uVar6);
        if (plVar3 != (long *)0x0) {
          return plVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar2,uVar6);
      }
    }
    lVar2 = FUN_02bf4718();
    if (lVar2 == 0) {
      if (*(int *)(unaff_x20 + 0x18) != 0) goto LAB_02c1ae88;
    }
    else {
      uVar6 = *(undefined8 *)PTR_DAT_037f2f98;
      plVar3 = (long *)thunk_FUN_01861ac0(lVar2,uVar6);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar2,uVar6);
      }
      if (*(int *)(unaff_x20 + 0x18) != 0) {
        lVar2 = *(long *)(unaff_x20 + 0x20);
        if (lVar2 == 0) {
          lVar5 = 0;
        }
        else {
          lVar4 = thunk_FUN_01861ac0(lVar2,*(undefined8 *)(*plVar3 + 0x40));
          lVar5 = lVar2;
          if (lVar4 == 0) {
            uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar6,0);
          }
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar5;
          thunk_FUN_0188fd20(plVar3 + 4,lVar2);
          return plVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


