/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<int>$$set_Tween
ENTRY_POINT: 0772fa04
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<int>__set_Tween(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  int unaff_w27;
  int unaff_w28;
  long unaff_x29;
  
  if (in_w8 != 0) {
    thunk_FUN_0495413c(**(undefined8 **)(unaff_x29 + -0x20),0);
  }
  puVar1 = PTR_DAT_0ac44de8;
  if (unaff_x24 != 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04948184();
    }
    goto LAB_0772fe6c;
  }
  if ((unaff_w28 == 10) || (unaff_w28 == 0)) {
    if (unaff_x25 == 0) {
      if (unaff_w27 == 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04980b34(lVar3);
        }
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) goto LAB_0772fc60;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
      else {
        memcpy(unaff_x21,unaff_x23,unaff_x22);
        lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        lVar3 = *(long *)(lVar4 + 0x18);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04980b34(lVar3);
          lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
        }
        if (-1 < *(int *)(*(long *)(lVar4 + 0x10) + 0x28)) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
              goto LAB_0772fbe4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar3 = FUN_04980e68();
LAB_0772fbe4:
        lVar3 = *(long *)(lVar3 + 8);
        *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
        (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8));
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_04980b34(lVar3);
        }
        lVar4 = *unaff_x19;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) goto LAB_0772fc60;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
      }
      puVar2 = (undefined8 *)FUN_04980e68();
      goto LAB_0772fc70;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0772fb30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68();
LAB_0772fb30:
    (*(code *)*puVar2)();
    goto LAB_0772fc7c;
  }
LAB_0772fc98:
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_x26;
  }
LAB_0772fe6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0772fc60:
  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
LAB_0772fc70:
  (*(code *)*puVar2)();
LAB_0772fc7c:
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *(long *)puVar1;
  }
  unaff_x26 = **(undefined8 **)(lVar3 + 0xb8);
  goto LAB_0772fc98;
}


