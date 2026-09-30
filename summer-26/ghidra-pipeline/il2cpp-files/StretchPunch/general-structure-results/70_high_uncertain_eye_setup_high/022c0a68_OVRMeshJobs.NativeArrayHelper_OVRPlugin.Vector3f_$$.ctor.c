/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 022c0a68
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>___ctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long *plVar9;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
    puVar3 = *(undefined8 **)(lVar4 + 0x48);
    uVar1 = *puVar3;
    puVar2 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x38) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar3[2])(uVar1,puVar3,unaff_x27,unaff_x29 + -0x18,unaff_x29 + -0x10);
    plVar9 = *(long **)(unaff_x29 + -0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x50);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022c0b20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(plVar9,lVar4,0);
LAB_022c0b20:
    uVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    FUN_01a95138(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0x100,uVar1);
    FUN_01a9541c(*(undefined8 *)(unaff_x29 + -0x20),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
                 0xfffffffc);
    puVar2 = (undefined8 *)
             thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0x100);
    plVar9 = (long *)*puVar2;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022c0bd8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(plVar9,*unaff_x28,0);
LAB_022c0bd8:
    uVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      puVar2 = (undefined8 *)
               thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) +
                                                                 0x20) + 0xc0) + 0x80) + 0x100);
      plVar9 = (long *)*puVar2;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_022c0cd4;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x20));
    FUN_01a95138(*(undefined8 *)(unaff_x29 + -0x20),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80
                          ) + 0x100,0);
    puVar2 = (undefined8 *)
             thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar9 = (long *)*puVar2;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_022c0968;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01dde8fc(plVar9,*unaff_x28,0);
LAB_022c0968:
    uVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x10))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01a95138(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0xe0,0);
      uVar8 = 0;
      goto LAB_022c0d70;
    }
    puVar2 = (undefined8 *)
             thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar9 = (long *)*puVar2;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_022c0a08;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01dde8fc(plVar9,lVar4,0);
LAB_022c0a08:
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,unaff_x29 + -0x18);
    memcpy(unaff_x26,unaff_x24,unaff_x23);
    plVar9 = (long *)thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                        *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28)
                                                                       + 0x20) + 0xc0) + 0x80) +
                                        0xa0);
    unaff_x27 = *plVar9;
    memcpy(unaff_x25,unaff_x26,unaff_x23);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == lVar4) {
      lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
      goto LAB_022c0cf0;
    }
  }
LAB_022c0cd4:
  lVar4 = FUN_01dde8fc(plVar9,lVar4,0);
LAB_022c0cf0:
  *(void **)(unaff_x29 + -0x18) = unaff_x21;
  lVar4 = *(long *)(lVar4 + 8);
  (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,unaff_x29 + -0x18);
  memcpy(unaff_x22,unaff_x21,unaff_x19);
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01d7d93c(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar8 = 1;
  FUN_01a9541c(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
LAB_022c0d70:
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}


