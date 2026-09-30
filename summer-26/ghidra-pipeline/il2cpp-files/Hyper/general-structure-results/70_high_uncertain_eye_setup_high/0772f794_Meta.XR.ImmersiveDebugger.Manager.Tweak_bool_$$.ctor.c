/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Tweak<bool>$$.ctor
ENTRY_POINT: 0772f794
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0772fa24) */
/* WARNING: Removing unreachable block (ram,0x0772fd40) */
/* WARNING: Removing unreachable block (ram,0x0772fd54) */

undefined8 Meta_XR_ImmersiveDebugger_Manager_Tweak<bool>___ctor(void)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long unaff_x25;
  long unaff_x29;
  
  pcVar3 = (char *)thunk_FUN_049a5d94();
  cVar1 = *pcVar3;
  if (*(char *)(unaff_x29 + -0x14) != '\0') {
    thunk_FUN_0495413c(**(undefined8 **)(unaff_x29 + -0x20),0);
  }
  puVar2 = PTR_DAT_0ac44de8;
  if (unaff_x25 != 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0772fb30;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68();
LAB_0772fb30:
    (*(code *)*puVar4)();
    goto LAB_0772fc7c;
  }
  if (cVar1 == '\0') {
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_0772fc60;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    memcpy(unaff_x21,unaff_x23,unaff_x22);
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    if (-1 < *(int *)(*(long *)(lVar6 + 0x10) + 0x28)) {
      unaff_x21 = (undefined8 *)*unaff_x21;
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_0772fbe4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar5 = FUN_04980e68();
LAB_0772fbe4:
    lVar5 = *(long *)(lVar5 + 8);
    *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8));
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) goto LAB_0772fc60;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_04980e68();
LAB_0772fc70:
  (*(code *)*puVar4)();
LAB_0772fc7c:
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return **(undefined8 **)(lVar5 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0772fc60:
  puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
  goto LAB_0772fc70;
}


