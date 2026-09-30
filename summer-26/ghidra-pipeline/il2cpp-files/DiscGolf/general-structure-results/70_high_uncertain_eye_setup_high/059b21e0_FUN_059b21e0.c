/*
FUNCTION_NAME: FUN_059b21e0
ENTRY_POINT: 059b21e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_059b21e0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  
  if ((DAT_06dc14a5 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_29_0_TypeInfo);
    DAT_06dc14a5 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_29_0_TypeInfo;
  if (param_2 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
    lVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0552aca4(lVar5,0);
    FUN_059b83f0(lVar5,uVar2);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x40) = param_3;
      LeanTween__value((long *)(lVar5 + 0x40),param_3);
      uVar6 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      *(undefined8 *)(lVar5 + 0x18) = uVar6;
      LeanTween__value();
      uVar6 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
      lVar7 = FUN_059b2400(uVar6,param_4);
      plVar11 = (long *)(lVar5 + 0x38);
      *plVar11 = lVar7;
      LeanTween__value(plVar11,lVar7);
      plVar8 = (long *)(**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
      if (plVar8 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            uVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x2a0));
            uVar9 = (**(code **)(*plVar8 + 0x288))(plVar8,iVar3,*(undefined8 *)(*plVar8 + 0x290));
            uVar10 = FUN_059b2478(uVar6);
            if ((uVar10 & 1) == 0) {
              lVar7 = FUN_059b254c(lVar5);
            }
            else {
              if (*plVar11 == 0) goto LAB_059b23d0;
              lVar7 = FUN_059b24d8();
            }
            if (lVar7 == 0) goto LAB_059b23d0;
                    /* try { // try from 059b2368 to 05ab238f has its CatchHandler @ 059b2d48 */
            FUN_059b25b8(lVar7,uVar6,uVar9);
            iVar3 = iVar3 + 1;
            iVar4 = (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
          } while (iVar3 < iVar4);
        }
        uVar6 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
        if (param_3 != 0) {
          FUN_059b265c(param_3,uVar6);
                    /* try { // try from 059b23cc to 05ab23f7 has its CatchHandler @ 059b2d44 */
          return lVar5;
        }
      }
    }
  }
LAB_059b23d0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


