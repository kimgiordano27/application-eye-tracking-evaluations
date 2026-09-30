/*
FUNCTION_NAME: OVRManager.<>c$$.ctor
ENTRY_POINT: 02c0dfa0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRManager_<>c___ctor(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint uVar8;
  long *unaff_x22;
  long *plVar9;
  
  *unaff_x20 = unaff_x19;
  thunk_FUN_0188fd20();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar4 = FUN_02b0d384(0,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = (**(code **)(*unaff_x21 + 0x628))();
    if (lVar5 == 0) {
LAB_02c0e0ac:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
LAB_02c0e0b0:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        plVar9 = (long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        plVar6 = (long *)*plVar9;
        if (plVar6 == (long *)0x0) goto LAB_02c0e0ac;
        iVar3 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
        if (iVar3 == 0) {
          if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_02c0e0b0;
          plVar9 = (long *)*plVar9;
          if (plVar9 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_03804bd0 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_03804bd0)) {
                    /* WARNING: Subroutine does not return */
              FUN_017fc944(plVar9);
            }
          }
          if (*unaff_x20 != 0) {
            puVar7 = (undefined8 *)(*unaff_x20 + 0x18);
            *puVar7 = plVar9;
            thunk_FUN_0188fd20(puVar7,plVar9);
            return plVar9;
          }
          goto LAB_02c0e0ac;
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
  }
  return (long *)0x0;
}


