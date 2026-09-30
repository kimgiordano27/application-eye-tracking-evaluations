/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 0575d84c
PROGRAM: Untangled-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long in_x9;
  int *in_x10;
  long in_x11;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02eea86c();
      goto LAB_0575d87c;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0575d87c:
  lVar3 = (*(code *)*puVar2)();
  iVar1 = (**(code **)(*unaff_x19 + 0x238))();
  if (iVar1 == 4) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar4 == (long *)0x0) goto LAB_0575da64;
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar6 = FUN_05464bbc(uVar5,*unaff_x27,5,0);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_05464bbc(uVar5,*unaff_x28,5,0);
        if ((uVar6 & 1) == 0) {
          FUN_05698a14();
        }
        else {
          FUN_05698ec4();
          if (lVar3 == 0) goto LAB_0575da64;
          lVar8 = FUN_0569200c();
        }
      }
      else {
        FUN_05698ec4();
        if (unaff_x22 == 0) goto LAB_0575da64;
        lVar9 = FUN_0569200c();
      }
      FUN_05698e6c();
      iVar1 = (**(code **)(*unaff_x19 + 0x238))();
    } while (iVar1 == 4);
  }
  else {
    lVar8 = 0;
    lVar9 = 0;
  }
  lVar3 = *(long *)(unaff_x21 + 0x10);
  plVar4 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,2);
  if (plVar4 == (long *)0x0) {
LAB_0575da64:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if ((lVar9 != 0) &&
     (lVar7 = thunk_FUN_02ef170c(lVar9,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
LAB_0575da6c:
    uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar9;
    thunk_FUN_02f411dc(plVar4 + 4,lVar9);
    if ((lVar8 != 0) &&
       (lVar9 = thunk_FUN_02ef170c(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar9 == 0))
    goto LAB_0575da6c;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar8;
      thunk_FUN_02f411dc(plVar4 + 5,lVar8);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0575da60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),plVar4,*(undefined8 *)(lVar3 + 0x28));
        return;
      }
      goto LAB_0575da64;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


