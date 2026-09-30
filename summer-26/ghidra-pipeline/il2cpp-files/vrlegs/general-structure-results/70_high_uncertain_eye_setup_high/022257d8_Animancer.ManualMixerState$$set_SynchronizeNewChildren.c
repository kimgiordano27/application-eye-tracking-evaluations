/*
FUNCTION_NAME: Animancer.ManualMixerState$$set_SynchronizeNewChildren
ENTRY_POINT: 022257d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022259ac) */

void Animancer_ManualMixerState__set_SynchronizeNewChildren
               (long *param_1,undefined8 *param_2,undefined8 param_3,size_t param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *unaff_x25;
  size_t unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    memcpy(param_2,param_1 + 4,param_4);
    uVar2 = unaff_w27;
    if (-1 < (int)(unaff_w27 - 1)) {
      uVar2 = unaff_w27 - 1;
    }
    uVar1 = (int)uVar2 >> 1;
    if (*(uint *)(unaff_x23 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
    lVar9 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
    memcpy(unaff_x20,(void *)((long)unaff_x23 + (ulong)*(uint *)(*unaff_x23 + 0x104) * lVar3 + 0x20)
           ,unaff_x26);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar4 = *(long *)(lVar9 + 0xc0);
    lVar9 = *(long *)(lVar4 + 0x18);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8(lVar9);
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
    }
    puVar8 = unaff_x22;
    puVar10 = unaff_x20;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x10) + 0x28)) {
      puVar8 = (undefined8 *)*unaff_x22;
      puVar10 = (undefined8 *)*unaff_x20;
    }
    lVar4 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          lVar9 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_022258c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar9 = FUN_01a472ec(unaff_x25,lVar9,0);
LAB_022258c0:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar8;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar10;
    lVar9 = *(long *)(lVar9 + 8);
    (**(code **)(lVar9 + 0x10))
              (*(undefined8 *)(lVar9 + 8),lVar9,unaff_x25,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if (-1 < *(int *)(unaff_x29 + -0xc)) {
LAB_02225940:
      if (*(char *)(unaff_x29 + -0x2c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x50),0);
      }
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    plVar5 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x28);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar5 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    if (*(uint *)(plVar5 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    FUN_02226554((long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * unaff_x28 + 0x20,
                 (long)plVar5 + (ulong)*(uint *)(*plVar5 + 0x104) * lVar3 + 0x20,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x90));
    if (uVar1 == 0) goto LAB_02225940;
    unaff_x23 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x28);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(unaff_x23 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x25 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x18);
    unaff_x28 = (long)(int)uVar1;
    param_1 = (long *)((long)unaff_x23 + (ulong)*(uint *)(*unaff_x23 + 0x104) * unaff_x28);
    param_2 = unaff_x22;
    param_4 = unaff_x26;
    unaff_w27 = uVar1;
  } while( true );
}


