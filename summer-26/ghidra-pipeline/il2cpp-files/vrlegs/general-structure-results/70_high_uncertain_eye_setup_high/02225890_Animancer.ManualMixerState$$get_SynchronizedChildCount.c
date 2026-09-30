/*
FUNCTION_NAME: Animancer.ManualMixerState$$get_SynchronizedChildCount
ENTRY_POINT: 02225890
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

void Animancer_ManualMixerState__get_SynchronizedChildCount
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong in_x9;
  int *in_x10;
  long in_x11;
  uint unaff_w19;
  uint uVar4;
  undefined8 *unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    if (in_x11 == param_3) {
      lVar2 = param_1 + (long)*in_x10 * 0x10 + 0x138;
      uVar4 = unaff_w19;
      goto LAB_022258c0;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        lVar2 = FUN_01a472ec(unaff_x25,param_3,0);
        uVar4 = unaff_w19;
LAB_022258c0:
        *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
        *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
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
        if (*(uint *)(plVar3 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        FUN_02226554((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x28 + 0x20,
                     (long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x26 + 0x20,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0) + 0x90));
        if (uVar4 == 0) goto LAB_02225940;
        plVar3 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x28);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(plVar3 + 3) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        unaff_x25 = *(long **)(*(long *)(unaff_x29 + -0x40) + 0x18);
        unaff_x28 = (long)(int)uVar4;
        memcpy(unaff_x22,
               (void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x28 + 0x20),
               unaff_x21);
        uVar1 = uVar4;
        if (-1 < (int)(uVar4 - 1)) {
          uVar1 = uVar4 - 1;
        }
        unaff_w19 = (int)uVar1 >> 1;
        if (*(uint *)(plVar3 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        unaff_x26 = (long)((ulong)uVar1 << 0x20) >> 0x21;
        lVar2 = *(long *)(*(long *)(unaff_x29 + -0x38) + 0x20);
        memcpy(unaff_x20,
               (void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * unaff_x26 + 0x20),
               unaff_x21);
        if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar2 = *(long *)(lVar2 + 0xc0);
        param_3 = *(long *)(lVar2 + 0x18);
        if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_01a46ff8(param_3);
          lVar2 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x38) + 0x20) + 0xc0);
        }
        unaff_x23 = unaff_x22;
        unaff_x24 = unaff_x20;
        if (-1 < *(int *)(*(long *)(lVar2 + 0x10) + 0x28)) {
          unaff_x23 = (undefined8 *)*unaff_x22;
          unaff_x24 = (undefined8 *)*unaff_x20;
        }
        param_1 = *unaff_x25;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_w27 = uVar4;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
}


