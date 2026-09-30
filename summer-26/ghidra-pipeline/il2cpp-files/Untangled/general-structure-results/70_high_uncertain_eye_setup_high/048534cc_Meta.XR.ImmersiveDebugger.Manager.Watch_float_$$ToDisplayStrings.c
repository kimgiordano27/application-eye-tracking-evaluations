/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<float>$$ToDisplayStrings
ENTRY_POINT: 048534cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<float>__ToDisplayStrings
               (ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  ulong __n;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 uVar7;
  undefined8 unaff_x22;
  void *__s;
  void *unaff_x24;
  ulong __n_00;
  void *__dest;
  long lVar8;
  undefined8 *__dest_00;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x30) = param_4;
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d39178);
    *(undefined1 *)(unaff_x20 + 0x3a1) = 1;
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  lVar3 = *(long *)(lVar3 + 0xc0);
  *(undefined8 *)(unaff_x29 + -0x40) = unaff_x22;
  __n_00 = (ulong)*(uint *)(*(long *)(lVar3 + 0x40) + 0xfc);
  lVar3 = lVar2;
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02eea768(lVar2);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  uVar4 = __n_00 + 0xf & 0x1fffffff0;
  __n = (ulong)*(uint *)(**(long **)(lVar2 + 0xc0) + 0xfc);
  __dest_00 = (undefined8 *)(&stack0x00000000 + -uVar4);
  __dest = (void *)((long)__dest_00 - uVar4);
  __s = (void *)((long)__dest - (__n + 0xf & 0x1fffffff0));
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  lVar8 = **(long **)(lVar2 + 0xb8);
  lVar2 = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02eea768(lVar3);
    lVar2 = *(long *)(unaff_x19 + 0x20);
  }
  if (-1 < *(int *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x40) + 0x28)) {
    unaff_x24 = (void *)(unaff_x29 + -0x30);
  }
  memcpy(__dest_00,unaff_x24,__n_00);
  memset(__s,0,__n);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768(lVar2);
  }
  if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x40) + 0x28) < 0) {
    memcpy(__dest,__dest_00,__n_00);
  }
  else {
    __dest = (void *)*__dest_00;
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02eea768();
  }
  FUN_04852ec8(__s,__dest,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
  if (lVar8 != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x29 + -0x40);
    uVar1 = *(ushort *)(lVar3 + 0x135);
    lVar2 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
      lVar2 = *(long *)(unaff_x19 + 0x20);
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x68);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_02eea768(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x68);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
    *(void **)(unaff_x29 + -0x20) = __s;
    (**(code **)(lVar2 + 0x10))(uVar6,lVar2,lVar8,unaff_x29 + -0x28,__s);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768();
    }
    if (lVar2 != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
      uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      lVar3 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_02eea768(lVar8);
        uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
        lVar3 = *(long *)(unaff_x19 + 0x20);
      }
      uVar7 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x90);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x90);
      *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
      *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
      *(undefined8 *)(unaff_x29 + -0x20) = uVar6;
      (**(code **)(lVar3 + 0x10))(uVar7,lVar3,lVar2,unaff_x29 + -0x28,uVar6);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02eea768();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768(lVar3);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02eea768();
      }
      if (lVar2 != 0) {
        lVar8 = *(long *)(unaff_x19 + 0x20);
        uVar1 = *(ushort *)(lVar8 + 0x135);
        uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
        lVar3 = lVar8;
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_02eea768(lVar8);
          uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
          lVar3 = *(long *)(unaff_x19 + 0x20);
        }
        uVar7 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0xa8);
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_02eea768(lVar3);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0xa8);
        *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
        *(undefined8 *)(unaff_x29 + -0x10) = unaff_x21;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
        *(undefined8 *)(unaff_x29 + -0x20) = uVar6;
        (**(code **)(lVar3 + 0x10))(uVar7,lVar3,lVar2,unaff_x29 + -0x28,uVar6);
        lVar2 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02eea768();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02eea768();
        }
        lVar3 = *(long *)(unaff_x19 + 0x20);
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768(lVar3);
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02eea768();
        }
        if (lVar2 != 0) {
          FUN_05242864(lVar2,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18),
                       *(undefined8 *)PTR_DAT_06d39178);
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


