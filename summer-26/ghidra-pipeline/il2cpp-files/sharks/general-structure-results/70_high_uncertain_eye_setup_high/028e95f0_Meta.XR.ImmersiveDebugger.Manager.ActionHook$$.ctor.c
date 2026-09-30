/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionHook$$.ctor
ENTRY_POINT: 028e95f0
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionHook___ctor(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  long lVar9;
  undefined8 uVar10;
  long unaff_x25;
  long unaff_x29;
  
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar9 == 0) goto LAB_028e9c04;
  lVar7 = *unaff_x20;
  uVar2 = *unaff_x21;
  uVar3 = unaff_x21[1];
  uVar4 = *(ushort *)(lVar7 + 0x135);
  lVar5 = lVar7;
  if ((uVar4 & 1) == 0) {
    lVar7 = FUN_0185daa4(lVar7);
    uVar4 = *(ushort *)(*unaff_x20 + 0x135);
    lVar5 = *unaff_x20;
  }
  uVar10 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xd0);
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_0185daa4(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xd0);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
  *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x48;
  (**(code **)(lVar5 + 0x10))(uVar10,lVar5,lVar9,unaff_x29 + -0x30,unaff_x29 + -0xc);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    lVar9 = *unaff_x20;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar5 = *unaff_x20;
    uVar4 = *(ushort *)(lVar5 + 0x135);
    lVar9 = lVar5;
    if ((uVar4 & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
      uVar4 = *(ushort *)(*unaff_x20 + 0x135);
      lVar9 = *unaff_x20;
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xf0);
    if ((uVar4 & 1) == 0) {
      FUN_0185daa4(lVar9);
    }
    uVar6 = (*pcVar8)();
    if ((uVar6 & 1) == 0) goto LAB_028e9bd4;
    lVar9 = *unaff_x20;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar9 = *unaff_x20;
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30);
    if (lVar9 == 0) {
LAB_028e9c04:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    lVar7 = *unaff_x20;
    uVar2 = *unaff_x21;
    uVar3 = unaff_x21[1];
    uVar4 = *(ushort *)(lVar7 + 0x135);
    lVar5 = lVar7;
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar4 = *(ushort *)(*unaff_x20 + 0x135);
      lVar5 = *unaff_x20;
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xf8);
    if ((uVar4 & 1) == 0) {
      lVar5 = FUN_0185daa4(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0xf8);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x50;
    (**(code **)(lVar5 + 0x10))(uVar10,lVar5,lVar9,unaff_x29 + -0x30,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      lVar9 = *unaff_x20;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar9 = *unaff_x20;
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_0185daa4();
      }
      lVar5 = *unaff_x20;
      uVar2 = *unaff_x21;
      uVar3 = unaff_x21[1];
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x38);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x140) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x38);
      }
      memcpy(unaff_x19,pvVar1,unaff_x22);
      if (lVar9 != 0) {
        lVar7 = *unaff_x20;
        uVar4 = *(ushort *)(lVar7 + 0x135);
        lVar5 = lVar7;
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_0185daa4(lVar7);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar5 = *unaff_x20;
        }
        uVar10 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x168);
        lVar7 = lVar5;
        if ((uVar4 & 1) == 0) {
          lVar5 = FUN_0185daa4(lVar5);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar7 = *unaff_x20;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x168);
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_0185daa4(lVar7);
        }
        if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x140) + 0x28)) {
          unaff_x19 = (undefined8 *)*unaff_x19;
        }
        *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
        *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
        *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
        *(undefined8 **)(unaff_x29 + -0x28) = unaff_x19;
        (**(code **)(lVar5 + 0x10))(uVar10,lVar5,lVar9,unaff_x29 + -0x30,unaff_x19);
        lVar5 = *unaff_x20;
        uVar4 = *(ushort *)(lVar5 + 0x135);
        lVar9 = lVar5;
        if ((uVar4 & 1) == 0) {
          lVar5 = FUN_0185daa4(lVar5);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar9 = *unaff_x20;
        }
        pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x108);
        if ((uVar4 & 1) == 0) {
          FUN_0185daa4(lVar9);
        }
        (*pcVar8)();
        goto LAB_028e9bd4;
      }
      goto LAB_028e9c04;
    }
    lVar9 = *unaff_x20;
    lVar5 = *(long *)(unaff_x29 + -0x50);
    uVar2 = *unaff_x21;
    uVar3 = unaff_x21[1];
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    pvVar1 = *(void **)(unaff_x29 + -0x38);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x140) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x38);
    }
    memcpy(unaff_x19,pvVar1,unaff_x22);
    if (lVar5 == 0) goto LAB_028e9c04;
    lVar7 = *unaff_x20;
    uVar4 = *(ushort *)(lVar7 + 0x135);
    lVar9 = lVar7;
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar4 = *(ushort *)(*unaff_x20 + 0x135);
      lVar9 = *unaff_x20;
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x160);
    lVar7 = lVar9;
    if ((uVar4 & 1) == 0) {
      lVar9 = FUN_0185daa4(lVar9);
      uVar4 = *(ushort *)(*unaff_x20 + 0x135);
      lVar7 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x160);
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x140) + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
    *(undefined8 **)(unaff_x29 + -0x28) = unaff_x19;
    pcVar8 = *(code **)(lVar9 + 0x10);
    lVar7 = unaff_x29 + -0x30;
  }
  else {
    lVar9 = *unaff_x20;
    lVar5 = *(long *)(unaff_x29 + -0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0185daa4();
    }
    pvVar1 = *(void **)(unaff_x29 + -0x38);
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x140) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x38);
    }
    memcpy(unaff_x19,pvVar1,unaff_x22);
    if (lVar5 == 0) goto LAB_028e9c04;
    lVar7 = *unaff_x20;
    uVar4 = *(ushort *)(lVar7 + 0x135);
    lVar9 = lVar7;
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar4 = *(ushort *)(*unaff_x20 + 0x135);
      lVar9 = *unaff_x20;
    }
    uVar10 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x158);
    lVar7 = lVar9;
    if ((uVar4 & 1) == 0) {
      lVar9 = FUN_0185daa4(lVar9);
      uVar4 = *(ushort *)(*unaff_x20 + 0x135);
      lVar7 = *unaff_x20;
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x158);
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x140) + 0x28)) {
      unaff_x19 = (undefined8 *)*unaff_x19;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x19;
    pcVar8 = *(code **)(lVar9 + 0x10);
    lVar7 = unaff_x29 + -0x20;
  }
  (*pcVar8)(uVar10,lVar9,lVar5,lVar7,unaff_x19);
LAB_028e9bd4:
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


