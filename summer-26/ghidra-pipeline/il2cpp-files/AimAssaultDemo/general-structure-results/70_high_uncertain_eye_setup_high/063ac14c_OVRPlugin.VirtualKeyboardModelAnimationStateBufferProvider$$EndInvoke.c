/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$EndInvoke
ENTRY_POINT: 063ac14c
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


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke(void)

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
  
code_r0x063ac14c:
  Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
                    /* try { // try from 063ac154 to 064ac15f has its CatchHandler @ 063ac244 */
  if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                    /* try { // try from 063ac160 to 064ac163 has its CatchHandler @ 063ac234 */
    thunk_FUN_03798b70();
  }
                    /* try { // try from 063ac164 to 064ac167 has its CatchHandler @ 063ac180 */
                    /* catch() { ... } // from try @ 063ac0a0 with catch @ 063ac168
                       try { // try from 063ac168 to 064ac1c7 has its CatchHandler @ 063abbac */
  FUN_063ab8e0();
                    /* catch() { ... } // from try @ 063abd4c with catch @ 063ac16c */
  lVar7 = *unaff_x21;
                    /* catch() { ... } // from try @ 063ac0b4 with catch @ 063ac170 */
LAB_063ac11c:
  do {
    uVar3 = (**(code **)(lVar7 + 0x288))();
    if (((uVar3 & 1) == 0) || (iVar1 = (**(code **)(*unaff_x21 + 0x238))(), iVar1 == 0xd)) {
      if (unaff_x23 == 0) {
        thunk_FUN_037a15ac(PTR_DAT_07db6ec8);
LAB_063ac3d4:
        uVar5 = FUN_062d5fcc();
        uVar6 = thunk_FUN_037a15ac(PTR_DAT_07db6ed0);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,uVar6);
      }
      if (unaff_x20 == (long *)0x0) goto LAB_063ac3c4;
      lVar7 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 == 0) goto LAB_063ac29c;
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
    if (plVar2 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      if (plVar2 == (long *)0x0) goto LAB_063ac3c4;
      uVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    }
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar5,*unaff_x27,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar5,*unaff_x29,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar5,*(undefined8 *)PTR_DAT_07db6d68,0);
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
        goto LAB_063ac11c;
      }
      goto code_r0x063ac14c;
    }
    Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    unaff_x23 = FUN_063ab8e0();
    lVar7 = *unaff_x21;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db6e20) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 5) * 0x10 + 0x138);
      goto LAB_063ac324;
    }
  }
LAB_063ac29c:
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_063ac324:
  (*(code *)*puVar4)();
  if (unaff_x19 == (long *)0x0) {
LAB_063ac3c4:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
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


