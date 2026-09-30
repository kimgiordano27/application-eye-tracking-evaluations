/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$.ctor
ENTRY_POINT: 0515fa84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0515fb28) */

undefined8 OVRPlugin_VirtualKeyboardModelAnimationStateHandler___ctor(void)

{
  undefined *puVar1;
  bool in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long lVar7;
  
  puVar1 = PTR_DAT_0675f3d0;
  if (!in_ZR) {
    plVar3 = (long *)thunk_FUN_02d9d438();
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto code_r0x0515fb10;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar1,0);
code_r0x0515fb10:
      (*(code *)*puVar2)(plVar3,puVar2[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e42304();
  }
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  puVar1 = PTR_DAT_0675f3d0;
  plVar3 = (long *)thunk_FUN_02d9d438();
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0515fa24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar1,0);
LAB_0515fa24:
    (*(code *)*puVar2)(plVar3,puVar2[1]);
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae0(lVar7);
  }
  return *unaff_x19;
}


