/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$Invoke
ENTRY_POINT: 063ac0bc
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


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__Invoke(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x25;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  
code_r0x063ac0bc:
  if (unaff_x25 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x25 + 0x168))(unaff_x25,*(undefined8 *)(*unaff_x25 + 0x170));
    do {
      uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x27,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x29,0);
        if ((uVar3 & 1) == 0) {
          uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                            (uVar2,*(undefined8 *)PTR_DAT_07db6d68,0);
          if ((uVar3 & 1) == 0) {
            plVar6 = (long *)(**(code **)(*unaff_x21 + 0x248))();
            uVar2 = thunk_FUN_037a15ac(PTR_DAT_07db6ed8);
            if (plVar6 == (long *)0x0) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
            }
            System_Convert__ToInt32(uVar2,uVar5,0);
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
      uVar3 = (**(code **)(lVar7 + 0x288))();
      if (((uVar3 & 1) == 0) || (iVar1 = (**(code **)(*unaff_x21 + 0x238))(), iVar1 == 0xd)) {
        if (unaff_x23 == 0) {
          thunk_FUN_037a15ac(PTR_DAT_07db6ec8);
LAB_063ac3d4:
          uVar2 = FUN_062d5fcc();
          uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6ed0);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar2,uVar5);
        }
        if (unaff_x20 == (long *)0x0) break;
        lVar7 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 == 0) goto LAB_063ac29c;
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_063ac284;
      }
      unaff_x25 = (long *)(**(code **)(*unaff_x21 + 0x248))();
      if (unaff_x25 != (long *)0x0) goto code_r0x063ac0bc;
      uVar2 = 0;
    } while( true );
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


