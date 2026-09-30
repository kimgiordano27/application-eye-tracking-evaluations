/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceDestroy
ENTRY_POINT: 01db9828
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db9920) */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceDestroy
               (ulong param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x21;
  long *plVar4;
  long lVar5;
  long lVar6;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235a750);
    FUN_00fdc2e4(PTR_DAT_0235a758);
    FUN_00fdc2e4(PTR_DAT_0235a760);
    *(undefined1 *)(unaff_x21 + 0xa42) = 1;
  }
  cStack000000000000000c = '\0';
  lVar6 = *(long *)(param_2 + 0x48);
  thunk_FUN_00ffe618();
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0x38);
    thunk_FUN_00ffe618();
    if (((uVar1 >> 0x15 & 1) == 0) ||
       (uVar1 = *(uint *)(param_3 + 0x38), thunk_FUN_00ffe618(), (uVar1 >> 0x13 & 1) != 0)) {
      if (lVar6 != 0) goto LAB_01db992c;
    }
    else if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 0x40);
      lVar5 = *plVar4;
      thunk_FUN_00ffe618();
      if (lVar5 == 0) {
        thunk_FUN_00ffe618();
        uVar3 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a758);
        FUN_01897f9c(uVar3,*(undefined8 *)PTR_DAT_0235a750);
        FUN_00ff754c(plVar4,uVar3,0);
      }
      lVar5 = *plVar4;
      thunk_FUN_00ffe618();
      if (lVar5 != 0) {
        cStack000000000000000c = '\0';
        FUN_01da75d8(lVar5,&stack0x0000000c);
        FUN_018986f0(lVar5,param_3,*(undefined8 *)PTR_DAT_0235a760);
        if (cStack000000000000000c != '\0') {
          FUN_0102a860(lVar5);
        }
      }
LAB_01db992c:
      thunk_FUN_00ffe618();
      iVar2 = FUN_00ff76b8(lVar6 + 0x3c);
      if (iVar2 == 0) {
        FUN_01db8fc4(param_2);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


