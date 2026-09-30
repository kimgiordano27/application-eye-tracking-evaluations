/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$get_PixelsPerUnit
ENTRY_POINT: 076ec0a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__get_PixelsPerUnit(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long unaff_x19;
  int unaff_w20;
  int iVar8;
  long unaff_x21;
  int unaff_w22;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  
  while( true ) {
    if ((((unaff_x21 == 0) || (lVar4 = FUN_05badb74(unaff_x21,param_1,*unaff_x25), lVar4 == 0)) ||
        (*(long *)(lVar4 + 0x10) == 0)) || (*(long *)(lVar4 + 0x18) == 0)) goto LAB_076ec230;
    unaff_w20 = unaff_w20 + 1;
    unaff_w26 = unaff_w26 + unaff_w22 + *(int *)(*(long *)(lVar4 + 0x10) + 0x10) +
                *(int *)(*(long *)(lVar4 + 0x18) + 0x10);
    if (unaff_w23 == unaff_w20) break;
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_076ec230;
    unaff_x21 = *(long *)(unaff_x19 + 0x200);
    param_1 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),unaff_w20,*unaff_x24);
  }
  iVar8 = 0;
  if (*(long *)(unaff_x19 + 0x220) != 0) {
    iVar8 = unaff_w23 * 0xc;
  }
  plVar5 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
  FUN_078bb6f4(plVar5,unaff_w26 + 100 + iVar8,0);
  puVar2 = PTR_DAT_09f2f3d8;
  puVar1 = PTR_DAT_09f215b0;
  if (0 < unaff_w23) {
    iVar8 = 0;
    goto LAB_076ec148;
  }
  if (plVar5 != (long *)0x0) goto LAB_076ec204;
LAB_076ec230:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076ec148:
  if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_076ec230;
  lVar4 = *(long *)(unaff_x19 + 0x200);
  uVar3 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),iVar8,*unaff_x24);
  if (lVar4 == 0) goto LAB_076ec230;
  plVar6 = (long *)FUN_05badb74(lVar4,uVar3,*unaff_x25);
  if (*(long *)(unaff_x19 + 0x220) == 0) {
    plVar7 = plVar5;
    if (plVar6 == (long *)0x0) goto LAB_076ec230;
  }
  else {
    FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar8,*(undefined8 *)puVar2);
    FUN_076e61fc();
    if (plVar5 == (long *)0x0) goto LAB_076ec230;
    FUN_078bb7b4(plVar5,*(undefined8 *)puVar1,0);
    plVar7 = plVar6;
  }
  if (((plVar7 == (long *)0x0) || (lVar4 = FUN_078c335c(plVar5,plVar6[2],0), lVar4 == 0)) ||
     (lVar4 = FUN_078c335c(lVar4,plVar6[3],0), lVar4 == 0)) goto LAB_076ec230;
  FUN_078c333c(lVar4,0);
  iVar8 = iVar8 + 1;
  if (unaff_w23 == iVar8) {
LAB_076ec204:
    (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    return;
  }
  goto LAB_076ec148;
}


