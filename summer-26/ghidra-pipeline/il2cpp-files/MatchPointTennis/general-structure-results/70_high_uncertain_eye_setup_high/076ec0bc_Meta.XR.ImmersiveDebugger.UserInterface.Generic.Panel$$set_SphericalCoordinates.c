/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$set_SphericalCoordinates
ENTRY_POINT: 076ec0bc
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


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__set_SphericalCoordinates
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x19;
  int unaff_w20;
  int iVar7;
  int unaff_w22;
  long lVar8;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  
  while( true ) {
    if ((param_1 == 0) || (*(long *)(param_2 + 0x18) == 0)) goto LAB_076ec230;
    unaff_w20 = unaff_w20 + 1;
    unaff_w26 = unaff_w26 + unaff_w22 + *(int *)(param_1 + 0x10) +
                *(int *)(*(long *)(param_2 + 0x18) + 0x10);
    if (unaff_w23 == unaff_w20) break;
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_076ec230;
    lVar8 = *(long *)(unaff_x19 + 0x200);
    uVar3 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),unaff_w20,*unaff_x24);
    if ((lVar8 == 0) || (param_2 = FUN_05badb74(lVar8,uVar3,*unaff_x25), param_2 == 0))
    goto LAB_076ec230;
    param_1 = *(long *)(param_2 + 0x10);
  }
  iVar7 = 0;
  if (*(long *)(unaff_x19 + 0x220) != 0) {
    iVar7 = unaff_w23 * 0xc;
  }
  plVar4 = (long *)thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20ed0);
  FUN_078bb6f4(plVar4,unaff_w26 + 100 + iVar7,0);
  puVar2 = PTR_DAT_09f2f3d8;
  puVar1 = PTR_DAT_09f215b0;
  if (0 < unaff_w23) {
    iVar7 = 0;
    goto LAB_076ec148;
  }
  if (plVar4 != (long *)0x0) goto LAB_076ec204;
LAB_076ec230:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_076ec148:
  if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_076ec230;
  lVar8 = *(long *)(unaff_x19 + 0x200);
  uVar3 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),iVar7,*unaff_x24);
  if (lVar8 == 0) goto LAB_076ec230;
  plVar5 = (long *)FUN_05badb74(lVar8,uVar3,*unaff_x25);
  if (*(long *)(unaff_x19 + 0x220) == 0) {
    plVar6 = plVar4;
    if (plVar5 == (long *)0x0) goto LAB_076ec230;
  }
  else {
    FUN_071c0648(*(long *)(unaff_x19 + 0x220),iVar7,*(undefined8 *)puVar2);
    FUN_076e61fc();
    if (plVar4 == (long *)0x0) goto LAB_076ec230;
    FUN_078bb7b4(plVar4,*(undefined8 *)puVar1,0);
    plVar6 = plVar5;
  }
  if (((plVar6 == (long *)0x0) || (lVar8 = FUN_078c335c(plVar4,plVar5[2],0), lVar8 == 0)) ||
     (lVar8 = FUN_078c335c(lVar8,plVar5[3],0), lVar8 == 0)) goto LAB_076ec230;
  FUN_078c333c(lVar8,0);
  iVar7 = iVar7 + 1;
  if (unaff_w23 == iVar7) {
LAB_076ec204:
    (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    return;
  }
  goto LAB_076ec148;
}


