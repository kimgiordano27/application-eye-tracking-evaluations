/*
FUNCTION_NAME: Animancer.ManualMixerState$$UpdateEvents
ENTRY_POINT: 02225778
PROGRAM: vrlegs-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022259ac) */

void Animancer_ManualMixerState__UpdateEvents(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 unaff_x24;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  size_t unaff_x26;
  uint unaff_w27;
  long unaff_x29;
  
  FUN_01ab6954(param_2,unaff_x19 + (ulong)*(uint *)(param_1 + 0x104) * unaff_x23 + 0x20);
  iVar3 = *(int *)(unaff_x22 + 0x30);
  *(long *)(unaff_x29 + -0x40) = unaff_x22;
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x24;
  *(int *)(unaff_x22 + 0x30) = iVar3 + 1;
  while (unaff_w27 != 0) {
    plVar8 = *(long **)(unaff_x22 + 0x28);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar8 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar12 = *(long **)(unaff_x22 + 0x18);
    memcpy(unaff_x21,
           (void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)unaff_w27 + 0x20),
           unaff_x26);
    uVar2 = unaff_w27;
    if (-1 < (int)(unaff_w27 - 1)) {
      uVar2 = unaff_w27 - 1;
    }
    uVar1 = (int)uVar2 >> 1;
    if (*(uint *)(plVar8 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar4 = (long)((ulong)uVar2 << 0x20) >> 0x21;
    lVar10 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
    memcpy(unaff_x20,(void *)((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * lVar4 + 0x20),
           unaff_x26);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar5 = *(long *)(lVar10 + 0xc0);
    lVar10 = *(long *)(lVar5 + 0x18);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01a46ff8(lVar10);
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
    }
    puVar9 = unaff_x21;
    puVar11 = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
      puVar9 = (undefined8 *)*unaff_x21;
      puVar11 = (undefined8 *)*unaff_x20;
    }
    lVar5 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar10) {
          lVar10 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_022258c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar10 = FUN_01a472ec(plVar12,lVar10,0);
LAB_022258c0:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar9;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar11;
    lVar10 = *(long *)(lVar10 + 8);
    (**(code **)(lVar10 + 0x10))
              (*(undefined8 *)(lVar10 + 8),lVar10,plVar12,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (-1 < *(int *)(unaff_x29 + -0xc)) break;
    plVar8 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x28);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar8 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(uint *)(plVar8 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_02226554((long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * (long)(int)unaff_w27 + 0x20,
                 (long)plVar8 + (ulong)*(uint *)(*plVar8 + 0x104) * lVar4 + 0x20,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x90));
    unaff_x22 = *(long *)(unaff_x29 + -0x40);
    unaff_w27 = uVar1;
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


