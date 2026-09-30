/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 022c09d4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>___ctor
          (long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  undefined4 uVar9;
  size_t unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        lVar1 = param_1 + (long)*in_x10 * 0x10 + 0x138;
        goto LAB_022c0a08;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      lVar1 = FUN_01dde8fc(unaff_x27,param_3,0);
LAB_022c0a08:
      *(void **)(unaff_x29 + -0x18) = unaff_x24;
      lVar1 = *(long *)(lVar1 + 8);
      (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,unaff_x27,unaff_x29 + -0x18);
      memcpy(unaff_x26,unaff_x24,unaff_x23);
      plVar2 = (long *)thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                          *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                   -0x28) + 0x20) +
                                                               0xc0) + 0x80) + 0xa0);
      lVar1 = *plVar2;
      memcpy(unaff_x25,unaff_x26,unaff_x23);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0);
      puVar5 = *(undefined8 **)(lVar6 + 0x48);
      uVar3 = *puVar5;
      puVar4 = unaff_x25;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x38) + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x25;
      }
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      (*(code *)puVar5[2])(uVar3,puVar5,lVar1,unaff_x29 + -0x18,unaff_x29 + -0x10);
      plVar2 = *(long **)(unaff_x29 + -0x10);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x50);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01dde7f8(lVar1);
      }
      lVar6 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022c0b20;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar2,lVar1,0);
LAB_022c0b20:
      uVar3 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      FUN_01a95138(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x100,uVar3);
      FUN_01a9541c(*(undefined8 *)(unaff_x29 + -0x20),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),
                   0xfffffffc);
      puVar4 = (undefined8 *)
               thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) +
                                                                 0x20) + 0xc0) + 0x80) + 0x100);
      plVar2 = (long *)*puVar4;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar1 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022c0bd8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar2,*unaff_x28,0);
LAB_022c0bd8:
      uVar7 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      if ((uVar7 & 1) != 0) {
        puVar4 = (undefined8 *)
                 thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                    *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) +
                                                                   0x20) + 0xc0) + 0x80) + 0x100);
        plVar2 = (long *)*puVar4;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x60);
        if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
          lVar1 = FUN_01dde7f8(lVar1);
        }
        lVar6 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_022c0cd4;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_022c0cbc;
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 8))
                (*(undefined8 *)(unaff_x29 + -0x20));
      FUN_01a95138(*(undefined8 *)(unaff_x29 + -0x20),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                            0x80) + 0x100,0);
      puVar4 = (undefined8 *)
               thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar2 = (long *)*puVar4;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar1 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_022c0968;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar2,*unaff_x28,0);
LAB_022c0968:
      uVar7 = (*(code *)*puVar4)(plVar2,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        (*(code *)**(undefined8 **)
                    (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x10))
                  (*(undefined8 *)(unaff_x29 + -0x20));
        FUN_01a95138(*(undefined8 *)(unaff_x29 + -0x20),
                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) +
                              0x80) + 0xe0,0);
        uVar9 = 0;
        goto LAB_022c0d70;
      }
      puVar4 = (undefined8 *)
               thunk_FUN_01dc553c(*(undefined8 *)(unaff_x29 + -0x20),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      unaff_x27 = (long *)*puVar4;
      if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      param_3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01dde7f8(param_3);
      }
      param_1 = *unaff_x27;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_022c0cbc:
    if (*(long *)(piVar8 + -2) == lVar1) {
      lVar1 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
      goto LAB_022c0cf0;
    }
  }
LAB_022c0cd4:
  lVar1 = FUN_01dde8fc(plVar2,lVar1,0);
LAB_022c0cf0:
  *(void **)(unaff_x29 + -0x18) = unaff_x21;
  lVar1 = *(long *)(lVar1 + 8);
  (**(code **)(lVar1 + 0x10))(*(undefined8 *)(lVar1 + 8),lVar1,plVar2,unaff_x29 + -0x18);
  memcpy(unaff_x22,unaff_x21,unaff_x19);
  memcpy(unaff_x20,unaff_x22,unaff_x19);
  FUN_01d7d93c(*(undefined8 *)(unaff_x29 + -0x20),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80)
               + 0x20);
  uVar9 = 1;
  FUN_01a9541c(*(undefined8 *)(unaff_x29 + -0x20),
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x28) + 0x20) + 0xc0) + 0x80),1);
LAB_022c0d70:
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


