/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$RegisterControl
ENTRY_POINT: 06ddacdc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06ddaf54) */

void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__RegisterControl(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte in_w8;
  long unaff_x20;
  long *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 uVar6;
  void *unaff_x24;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      param_1 = FUN_03d8f26c();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x80);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c();
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    FUN_03d2d260(lVar3,(long)unaff_x21 + unaff_x25 * *(uint *)(*unaff_x21 + 0x104) + 0x20);
    uVar1 = *(uint *)(unaff_x21 + 3);
    unaff_x25 = unaff_x25 + 1;
    if ((long)(int)uVar1 <= (long)unaff_x25) break;
    memset(unaff_x24,0,unaff_x22);
    memcpy(unaff_x23,unaff_x24,unaff_x22);
    if (uVar1 <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    memcpy((void *)((long)unaff_x21 + unaff_x25 * *(uint *)(*unaff_x21 + 0x104) + 0x20),unaff_x23,
           unaff_x22);
    param_1 = *(long *)(unaff_x20 + 0x20);
    in_w8 = *(byte *)(param_1 + 0x135);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_03d8f26c();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar4 + 0x135);
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x88);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x88);
  *(long **)(unaff_x29 + -0x20) = unaff_x21;
  (**(code **)(lVar5 + 0x10))(uVar6,lVar5,lVar3,unaff_x29 + -0x20,unaff_x29 + -0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03d8f26c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_03d8f26c();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar4 + 0x135);
  }
  uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
  *(int *)(unaff_x29 + -0xc) = (int)unaff_x21[3];
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  (**(code **)(lVar5 + 0x10))(uVar6,lVar5,lVar3,unaff_x29 + -0x20,unaff_x29 + -0x18);
  lVar3 = *(long *)(unaff_x29 + -0x18);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar2 & 1) == 0) {
      lVar5 = FUN_03d8f26c();
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar4 + 0x135);
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x50);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x50);
    *(long **)(unaff_x29 + -0x20) = unaff_x21;
    (**(code **)(lVar5 + 0x10))(uVar6,lVar5,lVar3,unaff_x29 + -0x20);
    if (*(char *)(unaff_x29 + -0x24) != '\0') {
      thunk_FUN_03d180a8();
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


