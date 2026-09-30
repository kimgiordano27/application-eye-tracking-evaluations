/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 063ac0d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
  while( true ) {
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(param_1,*unaff_x27,0);
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 063ac134 to 064ac137 has its CatchHandler @ 063ac244 */
                    /* try { // try from 063ac138 to 064ac13b has its CatchHandler @ 063ac23c */
                    /* try { // try from 063ac13c to 064ac13f has its CatchHandler @ 063ac20c */
                    /* try { // try from 063ac140 to 064ac147 has its CatchHandler @ 063ac224 */
      uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(param_1,*unaff_x29,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (param_1,*(undefined8 *)PTR_DAT_07db6d68,0);
        if ((uVar3 & 1) == 0) {
          plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
          uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6ed8);
          if (plVar2 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
          }
          System_Convert__ToInt32(uVar5,uVar6,0);
          goto LAB_063ac3d4;
        }
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_063ab8e0();
        lVar7 = *unaff_x21;
      }
      else {
                    /* try { // try from 063ac148 to 064ac153 has its CatchHandler @ 063ac248 */
        Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_063ab8e0();
        lVar7 = *unaff_x21;
      }
    }
    else {
      Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      unaff_x23 = FUN_063ab8e0();
      lVar7 = *unaff_x21;
    }
                    /* try { // try from 063ac124 to 064ac12b has its CatchHandler @ 063ac248 */
    uVar3 = (**(code **)(lVar7 + 0x288))();
                    /* try { // try from 063ac12c to 064ac133 has its CatchHandler @ 063ac21c */
    if (((uVar3 & 1) == 0) || (iVar1 = (**(code **)(*unaff_x21 + 0x238))(), iVar1 == 0xd)) break;
    plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
    if (plVar2 == (long *)0x0) {
      param_1 = 0;
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_063ac3c4;
      param_1 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
  }
  if (unaff_x23 == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07db6ec8);
LAB_063ac3d4:
    uVar5 = FUN_062d5fcc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6ed0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar6);
  }
  if (unaff_x20 != (long *)0x0) {
    lVar7 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 == 0) goto LAB_063ac29c;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    goto LAB_063ac284;
  }
  goto LAB_063ac3c4;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
LAB_063ac284:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6e20) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
      goto LAB_063ac324;
    }
  }
LAB_063ac29c:
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ac324:
  (*(code *)*puVar4)();
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6c00) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_063ac39c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ac39c:
                    /* WARNING: Could not recover jumptable at 0x063ac3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar4)();
    return;
  }
LAB_063ac3c4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


