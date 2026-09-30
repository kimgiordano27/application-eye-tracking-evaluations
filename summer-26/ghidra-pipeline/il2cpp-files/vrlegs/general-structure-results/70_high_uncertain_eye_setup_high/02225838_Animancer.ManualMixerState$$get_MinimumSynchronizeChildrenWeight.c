/*
FUNCTION_NAME: Animancer.ManualMixerState$$get_MinimumSynchronizeChildrenWeight
ENTRY_POINT: 02225838
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x022259ac) */

void Animancer_ManualMixerState__get_MinimumSynchronizeChildrenWeight
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  byte in_w9;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  uint uVar6;
  undefined8 *unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    uVar6 = unaff_w19;
    if ((in_w9 & 1) == 0) {
      param_3 = FUN_01a46ff8(param_3);
      param_1 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
    }
    puVar7 = unaff_x22;
    puVar8 = unaff_x20;
    if (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x22;
      puVar8 = (undefined8 *)*unaff_x20;
    }
    lVar2 = *unaff_x25;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          lVar2 = lVar2 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_022258c0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_01a472ec(unaff_x25,param_3,0);
LAB_022258c0:
    *(undefined8 **)(unaff_x29 + -0x20) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar8;
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(lVar2 + 0x10))
              (*(undefined8 *)(lVar2 + 8),lVar2,unaff_x25,unaff_x29 + -0x20,unaff_x29 + -0xc);
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
    if (uVar6 == 0) goto LAB_02225940;
    plVar3 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x28);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(plVar3 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x25 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x18);
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
    lVar2 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
    memcpy(unaff_x20,(void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x26 + 0x20),
           unaff_x21);
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_1 = *(long *)(lVar2 + 0xc0);
    param_3 = *(long *)(param_1 + 0x18);
    in_w9 = *(byte *)(param_3 + 0x135);
    unaff_w19 = (int)uVar1 >> 1;
    unaff_w27 = uVar6;
  } while( true );
}


