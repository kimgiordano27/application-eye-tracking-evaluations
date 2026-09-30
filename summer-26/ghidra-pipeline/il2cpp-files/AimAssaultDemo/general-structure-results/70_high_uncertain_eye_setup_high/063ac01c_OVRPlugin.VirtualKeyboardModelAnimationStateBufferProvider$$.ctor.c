/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$.ctor
ENTRY_POINT: 063ac01c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar12;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x23 + 0x6b4) = 1;
                    /* try { // try from 063ac030 to 064ac037 has its CatchHandler @ 063ac224 */
  uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax();
  if ((uVar5 & 1) == 0) {
    if (unaff_x22 == 0) goto LAB_063ac3c4;
    FUN_060c530c();
    if (*(int *)(*(long *)PTR_DAT_07db2190 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07db2190);
    }
    FUN_063ab8e0();
    if (unaff_x20 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_063ac2bc;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c();
LAB_063ac2bc:
    (*(code *)*puVar8)();
    if (unaff_x19 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ac38c;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
  else {
    if (unaff_x21 == (long *)0x0) {
LAB_063ac3c4:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar5 = (**(code **)(*unaff_x21 + 0x288))();
    puVar3 = PTR_DAT_07db6d98;
    puVar2 = PTR_DAT_07db6d70;
    puVar1 = PTR_DAT_07db2190;
    if ((uVar5 & 1) == 0) {
      lVar12 = 0;
    }
    else {
                    /* try { // try from 063ac064 to 064ac06b has its CatchHandler @ 063ac17c */
                    /* try { // try from 063ac07c to 064ac087 has its CatchHandler @ 063ac178 */
      lVar12 = 0;
      do {
        iVar4 = (**(code **)(*unaff_x21 + 0x238))();
        if (iVar4 == 0xd) break;
                    /* try { // try from 063ac0a0 to 064ac0a7 has its CatchHandler @ 063ac168 */
        plVar6 = (long *)(**(code **)(*unaff_x21 + 0x248))();
                    /* try { // try from 063ac0b4 to 064ac0d3 has its CatchHandler @ 063ac170 */
        if (plVar6 == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          if (plVar6 == (long *)0x0) goto LAB_063ac3c4;
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (uVar7,*(undefined8 *)puVar2,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar7,*(undefined8 *)puVar3,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                              (uVar7,*(undefined8 *)PTR_DAT_07db6d68,0);
            if ((uVar5 & 1) == 0) {
              plVar6 = (long *)(**(code **)(*unaff_x21 + 0x248))();
              uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6ed8);
              if (plVar6 == (long *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
              }
              System_Convert__ToInt32(uVar7,uVar9,0);
              goto LAB_063ac3d4;
            }
            Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_063ab8e0();
            lVar10 = *unaff_x21;
          }
          else {
            Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_063ab8e0();
            lVar10 = *unaff_x21;
          }
        }
        else {
          Oculus_Platform_CAPI__ovr_MultiplayerErrorOptions_SetErrorKey();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          lVar12 = FUN_063ab8e0();
          lVar10 = *unaff_x21;
        }
        uVar5 = (**(code **)(lVar10 + 0x288))();
      } while ((uVar5 & 1) != 0);
    }
    if (lVar12 == 0) {
      thunk_FUN_037a15ac(PTR_DAT_07db6ec8);
LAB_063ac3d4:
      uVar7 = FUN_062d5fcc();
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db6ed0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar9);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_063ac324;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c();
LAB_063ac324:
    (*(code *)*puVar8)();
    if (unaff_x19 == (long *)0x0) goto LAB_063ac3c4;
    lVar12 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07db6c00) goto LAB_063ac38c;
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
  }
  puVar8 = (undefined8 *)FUN_0377596c();
  goto LAB_063ac39c;
LAB_063ac38c:
  puVar8 = (undefined8 *)(lVar12 + (long)(*piVar11 + 7) * 0x10 + 0x138);
LAB_063ac39c:
                    /* WARNING: Could not recover jumptable at 0x063ac3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar8)();
  return;
}


