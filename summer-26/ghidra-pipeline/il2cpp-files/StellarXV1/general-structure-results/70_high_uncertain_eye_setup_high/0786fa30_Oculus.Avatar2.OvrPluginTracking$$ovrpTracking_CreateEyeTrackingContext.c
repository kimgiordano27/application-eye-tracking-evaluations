/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateEyeTrackingContext
ENTRY_POINT: 0786fa30
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateEyeTrackingContext(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  long in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_0928f428);
    FUN_04077588(PTR_DAT_0928f438);
    FUN_04077588(PTR_DAT_092860c8);
    *(undefined1 *)(unaff_x19 + 0x4ef) = 1;
  }
  if (*(int *)(unaff_x20 + 0x18) != 2) {
    if (*(int *)(unaff_x20 + 0x18) != 0) {
      return 0;
    }
    *(undefined4 *)(unaff_x20 + 0x18) = 0xffffffff;
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar6 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x18);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0928f428) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0786fae4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_0928f428,0);
LAB_0786fae4:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    *(undefined8 *)(in_stack_00000018 + 0x48) = uVar2;
    thunk_FUN_040ec700();
    unaff_x20 = in_stack_00000018;
  }
  plVar6 = *(long **)(unaff_x20 + 0x48);
  *(undefined4 *)(unaff_x20 + 0x18) = 1;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092860c8) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0786fb68;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092860c8,0);
LAB_0786fb68:
  uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  if ((uVar4 & 1) == 0) {
    FUN_0786fd40();
    return 0;
  }
  plVar6 = *(long **)(in_stack_00000018 + 0x48);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0928f438) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0786fbe8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_0928f438,0);
LAB_0786fbe8:
  uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  *(undefined8 *)(in_stack_00000018 + 0x38) = uVar2;
  thunk_FUN_040ec700();
  plVar6 = *(long **)(in_stack_00000018 + 0x20);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar2 = (**(code **)(*plVar6 + 0x1c8))
                    (plVar6,*(undefined8 *)(in_stack_00000018 + 0x38),
                     *(undefined8 *)(*plVar6 + 0x1d0));
  *(undefined8 *)(in_stack_00000018 + 0x40) = uVar2;
  thunk_FUN_040ec700();
  if (*(long *)(in_stack_00000018 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(in_stack_00000018 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(*(long *)(in_stack_00000018 + 0x40) + 0x10) =
       *(undefined8 *)(*(long *)(in_stack_00000018 + 0x20) + 0x20);
  thunk_FUN_040ec700();
  plVar6 = *(long **)(in_stack_00000018 + 0x40);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  (**(code **)(*plVar6 + 0x178))
            (plVar6,*(undefined8 *)(in_stack_00000018 + 0x28),*(undefined8 *)(*plVar6 + 0x180));
  *(undefined8 *)(in_stack_00000018 + 0x10) = *(undefined8 *)(in_stack_00000018 + 0x40);
  thunk_FUN_040ec700();
  *(undefined4 *)(in_stack_00000018 + 0x18) = 2;
  return 1;
}


