/*
FUNCTION_NAME: OVRPlugin.<>c__DisplayClass503_0$$<GetVirtualKeyboardModelAnimationStates>b__0
ENTRY_POINT: 02911c60
PROGRAM: vrfs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__DisplayClass503_0__<GetVirtualKeyboardModelAnimationStates>b__0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  
  plVar8 = *(long **)(unaff_x21 + 0x688);
  plVar1 = (long *)thunk_FUN_015d0480(*(undefined8 *)(unaff_x20 + 0x10),*plVar8);
  if (plVar1 == (long *)0x0) {
    lVar4 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e406b0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_02d76b34(lVar4,0);
    FUN_01600498();
  }
  else {
    lVar5 = *plVar1;
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_02911cfc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar1,lVar4,2);
LAB_02911cfc:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    *unaff_x19 = uVar3;
    thunk_FUN_01656ef8();
  }
  return *unaff_x19;
}


