/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_12
ENTRY_POINT: 01fa1e10
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_<>c__<_cctor>b__655_12(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  uVar4 = thunk_FUN_01244d08();
  if ((uVar4 & 1) == 0) {
    plVar6 = (long *)thunk_FUN_012484d0();
    return plVar6;
  }
  lVar5 = (**(code **)(*unaff_x19 + 0x478))();
  puVar2 = PTR_DAT_027b3ec0;
  if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)PTR_DAT_027b3ec0);
  }
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0x18);
    plVar6 = *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    if (0 < (int)uVar3) {
      uVar8 = 0;
      do {
        if (uVar3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        plVar7 = *(long **)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
        if (plVar7 == (long *)0x0) goto LAB_01fa1f9c;
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60(plVar7);
        }
        uVar4 = FUN_01f805b8(plVar7,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = (**(code **)(*plVar7 + 0x388))(plVar7,*(undefined8 *)(*plVar7 + 0x390));
          if ((uVar4 & 1) != 0) {
            uVar4 = (**(code **)(*plVar7 + 0x468))(plVar7,*(undefined8 *)(*plVar7 + 0x470));
            if ((uVar4 & 0xc) == 0) goto LAB_01fa1ef4;
          }
          plVar6 = plVar7;
        }
LAB_01fa1ef4:
        uVar3 = *(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar3);
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar5 = *(long *)puVar2;
    }
    if (plVar6 == *(long **)(*(long *)(lVar5 + 0xb8) + 0x10)) {
      uVar3 = (**(code **)(*unaff_x19 + 0x468))();
      if ((uVar3 >> 3 & 1) != 0) {
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar5 = *(long *)puVar2;
        }
        plVar6 = (long *)**(undefined8 **)(lVar5 + 0xb8);
      }
    }
    return plVar6;
  }
LAB_01fa1f9c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


