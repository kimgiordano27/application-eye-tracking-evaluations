/*
FUNCTION_NAME: Animancer.ManualMixerState$$GetParentMixer
ENTRY_POINT: 022258dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022259ac) */

void Animancer_ManualMixerState__GetParentMixer(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  uint uVar6;
  undefined8 *unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
  while (uVar6 = unaff_w19, *(int *)(unaff_x29 + -0xc) < 0) {
    plVar3 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x28);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar3 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(uint *)(plVar3 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_02226554((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x28 + 0x20,
                 (long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x26 + 0x20,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x90));
    if (uVar6 == 0) break;
    plVar3 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x28);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar3 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar10 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x18);
    unaff_x28 = (long)(int)uVar6;
    memcpy(unaff_x22,(void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x28 + 0x20),
           unaff_x21);
    uVar1 = uVar6;
    if (-1 < (int)(uVar6 - 1)) {
      uVar1 = uVar6 - 1;
    }
    if (*(uint *)(plVar3 + 3) <= (uint)((int)uVar1 >> 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x26 = (long)((ulong)uVar1 << 0x20) >> 0x21;
    lVar8 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
    memcpy(unaff_x20,(void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x26 + 0x20),
           unaff_x21);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = *(long *)(lVar8 + 0xc0);
    lVar8 = *(long *)(lVar2 + 0x18);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01a46ff8(lVar8);
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
    }
    puVar7 = unaff_x22;
    puVar9 = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x22;
      puVar9 = (undefined8 *)*unaff_x20;
    }
    lVar2 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar8) {
          lVar8 = lVar2 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_022258c0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar8 = FUN_01a472ec(plVar10,lVar8,0);
LAB_022258c0:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))
              (*(undefined8 *)(lVar8 + 8),lVar8,plVar10,unaff_x29 + -0x20,unaff_x29 + -0xc);
    unaff_w19 = (int)uVar1 >> 1;
    unaff_w27 = uVar6;
  }
  if (*(char *)(unaff_x29 + -0x2c) != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x50),0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


