/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Category$$Equals
ENTRY_POINT: 028e987c
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Category__Equals(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x19;
  code *pcVar8;
  long *unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  undefined8 uVar9;
  long unaff_x25;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0185daa4();
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar5 = *unaff_x20;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0185daa4();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar5 != 0) {
    lVar7 = *unaff_x20;
    uVar2 = *unaff_x21;
    uVar3 = unaff_x21[1];
    uVar4 = *(ushort *)(lVar7 + 0x135);
    lVar6 = lVar7;
    if ((uVar4 & 1) == 0) {
      lVar7 = FUN_0185daa4(lVar7);
      uVar4 = *(ushort *)(*unaff_x20 + 0x135);
      lVar6 = *unaff_x20;
    }
    uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0xf8);
    if ((uVar4 & 1) == 0) {
      lVar6 = FUN_0185daa4(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xf8);
    *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x50;
    (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,unaff_x29 + -0x30,unaff_x29 + -0xc);
    if (*(char *)(unaff_x29 + -0xc) == '\0') {
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar5 = *unaff_x20;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      lVar6 = *unaff_x20;
      uVar2 = *unaff_x21;
      uVar3 = unaff_x21[1];
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0185daa4();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x38);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x140) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x38);
      }
      memcpy(unaff_x19,pvVar1,unaff_x22);
      if (lVar5 != 0) {
        lVar7 = *unaff_x20;
        uVar4 = *(ushort *)(lVar7 + 0x135);
        lVar6 = lVar7;
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_0185daa4(lVar7);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar6 = *unaff_x20;
        }
        uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x168);
        lVar7 = lVar6;
        if ((uVar4 & 1) == 0) {
          lVar6 = FUN_0185daa4(lVar6);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar7 = *unaff_x20;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x168);
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
        (**(code **)(lVar6 + 0x10))(uVar9,lVar6,lVar5,unaff_x29 + -0x30,unaff_x19);
        lVar6 = *unaff_x20;
        uVar4 = *(ushort *)(lVar6 + 0x135);
        lVar5 = lVar6;
        if ((uVar4 & 1) == 0) {
          lVar6 = FUN_0185daa4(lVar6);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar5 = *unaff_x20;
        }
        pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x108);
        if ((uVar4 & 1) == 0) {
          FUN_0185daa4(lVar5);
        }
        (*pcVar8)();
        goto LAB_028e9bd4;
      }
    }
    else {
      lVar5 = *unaff_x20;
      lVar6 = *(long *)(unaff_x29 + -0x50);
      uVar2 = *unaff_x21;
      uVar3 = unaff_x21[1];
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0185daa4();
      }
      pvVar1 = *(void **)(unaff_x29 + -0x38);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x140) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x38);
      }
      memcpy(unaff_x19,pvVar1,unaff_x22);
      if (lVar6 != 0) {
        lVar7 = *unaff_x20;
        uVar4 = *(ushort *)(lVar7 + 0x135);
        lVar5 = lVar7;
        if ((uVar4 & 1) == 0) {
          lVar7 = FUN_0185daa4(lVar7);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar5 = *unaff_x20;
        }
        uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x160);
        lVar7 = lVar5;
        if ((uVar4 & 1) == 0) {
          lVar5 = FUN_0185daa4(lVar5);
          uVar4 = *(ushort *)(*unaff_x20 + 0x135);
          lVar7 = *unaff_x20;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x160);
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
        (**(code **)(lVar5 + 0x10))(uVar9,lVar5,lVar6,unaff_x29 + -0x30,unaff_x19);
LAB_028e9bd4:
        if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


