/*
FUNCTION_NAME: OVRPlugin$$GetSpaceTriangleMeshCounts
ENTRY_POINT: 0575d92c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceTriangleMeshCounts(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
code_r0x0575d92c:
  uVar2 = FUN_05464bbc(unaff_x26,param_2,param_3,0);
  if ((uVar2 & 1) == 0) {
    FUN_05698a14();
  }
  else {
    FUN_05698ec4();
    if (unaff_x25 == 0) {
LAB_0575da64:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    unaff_x23 = FUN_0569200c();
  }
  do {
    FUN_05698e6c();
    iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar1 != 4) {
      lVar6 = *(long *)(unaff_x21 + 0x10);
      plVar3 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
      if (plVar3 == (long *)0x0) goto LAB_0575da64;
      if ((unaff_x24 != 0) &&
         (lVar4 = thunk_FUN_02ef170c(unaff_x24,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_0575da6c:
        uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar5,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = unaff_x24;
        thunk_FUN_02f411dc(plVar3 + 4,unaff_x24);
        if ((unaff_x23 != 0) &&
           (lVar4 = thunk_FUN_02ef170c(unaff_x23,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_0575da6c;
        if (1 < *(uint *)(plVar3 + 3)) {
          plVar3[5] = unaff_x23;
          thunk_FUN_02f411dc(plVar3 + 5,unaff_x23);
          if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0575da60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),plVar3,*(undefined8 *)(lVar6 + 0x28));
            return;
          }
          goto LAB_0575da64;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    plVar3 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar3 == (long *)0x0) goto LAB_0575da64;
    unaff_x26 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar2 = FUN_05464bbc(unaff_x26,*unaff_x27,5,0);
    if ((uVar2 & 1) == 0) break;
    FUN_05698ec4();
    if (unaff_x22 == 0) goto LAB_0575da64;
    unaff_x24 = FUN_0569200c();
  } while( true );
  param_2 = *unaff_x28;
  param_3 = 5;
  goto code_r0x0575d92c;
}


