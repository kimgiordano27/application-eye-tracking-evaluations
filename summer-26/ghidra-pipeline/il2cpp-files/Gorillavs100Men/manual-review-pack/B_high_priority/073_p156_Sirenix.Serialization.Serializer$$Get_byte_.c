/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<byte>
ENTRY_POINT: 024a6d04
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_Serializer__Get<byte>(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  void *__src;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long unaff_x19;
  void *unaff_x20;
  int unaff_w21;
  int *unaff_x22;
  size_t __n;
  undefined8 unaff_x23;
  undefined8 uVar8;
  undefined8 *__dest;
  undefined8 unaff_x24;
  long unaff_x25;
  void *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x024a6d04:
  *(ulong *)(unaff_x27 + 0x28) = param_1;
  param_1 = thunk_FUN_020ccb58((ulong *)(unaff_x27 + 0x28),param_1);
  if (2 < *(uint *)(unaff_x27 + 0x18)) {
    *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)StringLiteral_10559;
    param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x30));
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffc) != 0) {
      *(undefined8 *)(unaff_x28 + 0x38) = unaff_x23;
      param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x38),unaff_x23);
      if (4 < *(uint *)(unaff_x28 + 0x18)) {
        *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)StringLiteral_10557;
        param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x40));
        if (5 < *(uint *)(unaff_x28 + 0x18)) {
          *(undefined8 *)(unaff_x28 + 0x48) = unaff_x24;
          param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x48));
          if (6 < *(uint *)(unaff_x28 + 0x18)) {
            *(undefined8 *)(unaff_x28 + 0x50) = *(undefined8 *)StringLiteral_10556;
            thunk_FUN_020ccb58();
            uVar8 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_020b5864();
            }
            plVar3 = (long *)FUN_03842574(uVar8,0);
            param_1 = 0;
            if (plVar3 == (long *)0x0) goto LAB_024a6f34;
            param_1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
            if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffff8) != 0) goto code_r0x024a6e10;
          }
        }
      }
    }
  }
LAB_024a6f8c:
  if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02061554();
  }
LAB_024a6fa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
code_r0x024a6e10:
  *(ulong *)(unaff_x28 + 0x58) = param_1;
  while( true ) {
    thunk_FUN_020ccb58();
    uVar8 = FUN_037389bc(unaff_x28,0);
    if (*(int *)(*(long *)StringLiteral_8880 + 0xe4) == 0) {
      thunk_FUN_020b5864(*(long *)StringLiteral_8880);
    }
    FUN_0408c8d0(uVar8,0);
    while( true ) {
      lVar5 = *(long *)(unaff_x25 + 0x120);
      unaff_w21 = unaff_w21 + 1;
      param_1 = 0;
      if (lVar5 == 0) goto LAB_024a6f34;
      if (*(int *)(lVar5 + 0x18) <= unaff_w21) {
        param_1 = (ulong)*(uint *)(unaff_x29 + -0x84);
        if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
        goto LAB_024a6fa4;
      }
      FUN_03494f90(unaff_x29 + -0x30,lVar5,unaff_w21,*(undefined8 *)StringLiteral_10555);
      unaff_x23 = *(undefined8 *)(unaff_x29 + -0x30);
      plVar3 = (long *)FUN_03ac58c4(unaff_x29 + -0x38,unaff_x23,0);
      if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_020b5864(*(long *)(StringLiteral_8735 + 0xe0));
      }
      uVar2 = FUN_0384401c(plVar3,0,0);
      if ((uVar2 & 1) != 0) break;
      if (*(char *)(unaff_x25 + 0x118) == '\0') {
        uVar8 = FUN_03854750(plVar3,0);
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02091334(lVar5);
        }
        lVar5 = thunk_FUN_02094664(uVar8,lVar5);
        if (lVar5 == 0) {
          unaff_x27 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8748,8)
          ;
          param_1 = unaff_x27;
          if (unaff_x27 == 0) goto LAB_024a6f34;
          if (*(int *)(unaff_x27 + 0x18) == 0) goto LAB_024a6f8c;
          *(undefined8 *)(unaff_x27 + 0x20) = *(undefined8 *)StringLiteral_10558;
          param_1 = thunk_FUN_020ccb58();
          if (plVar3 == (long *)0x0) goto LAB_024a6f34;
          param_1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
          unaff_x28 = unaff_x27;
          if ((*(uint *)(unaff_x27 + 0x18) & 0xfffffffe) != 0) goto code_r0x024a6d04;
          goto LAB_024a6f8c;
        }
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02091334(lVar5);
        }
        __src = (void *)FUN_02061434(uVar8,lVar5,unaff_x26);
        __n = *(size_t *)(unaff_x29 + -0x68);
        memcpy(unaff_x20,__src,__n);
        param_1 = 0;
        if (*(long *)(unaff_x25 + 0x120) == 0) goto LAB_024a6f34;
        FUN_03494f90(unaff_x29 + -0x30,*(long *)(unaff_x25 + 0x120),unaff_w21,
                     *(undefined8 *)StringLiteral_10555);
        uVar8 = *(undefined8 *)(unaff_x29 + -0x28);
        uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
        memcpy(unaff_x26,unaff_x20,__n);
        uVar4 = thunk_FUN_02094398(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),unaff_x26);
        FUN_03ab04c4(uVar8,uVar1,uVar4,*(undefined8 *)(unaff_x29 + -0x50),
                     *(undefined8 *)(unaff_x29 + -0x48),unaff_x23);
        __dest = *(undefined8 **)(unaff_x29 + -0x60);
        memcpy(__dest,unaff_x20,__n);
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 8) + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        puVar6 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
        unaff_x22 = *(int **)(unaff_x29 + -0x70);
        *(undefined4 *)(unaff_x29 + -0xc) = 10;
        uVar8 = *puVar6;
        *(undefined8 **)(unaff_x29 + -0x20) = __dest;
        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
        pcVar7 = (code *)puVar6[2];
        *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x58);
        *(int **)(unaff_x29 + -0x28) = unaff_x22;
        (*pcVar7)(uVar8,puVar6,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
        unaff_x26 = *(void **)(unaff_x29 + -0x78);
        unaff_x20 = *(void **)(unaff_x29 + -0x40);
      }
      else {
        *unaff_x22 = *unaff_x22 + 1;
      }
    }
    unaff_x28 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8748,7);
    param_1 = unaff_x28;
    if (unaff_x28 == 0) break;
    if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_024a6f8c;
    *(undefined8 *)(unaff_x28 + 0x20) = *(undefined8 *)StringLiteral_10560;
    thunk_FUN_020ccb58();
    uVar8 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_020b5864();
    }
    plVar3 = (long *)FUN_03842574(uVar8,0);
    param_1 = 0;
    if (plVar3 == (long *)0x0) break;
    param_1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffe) == 0) goto LAB_024a6f8c;
    *(ulong *)(unaff_x28 + 0x28) = param_1;
    param_1 = thunk_FUN_020ccb58((ulong *)(unaff_x28 + 0x28),param_1);
    if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_024a6f8c;
    *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)StringLiteral_10562;
    param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x30));
    if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffc) == 0) goto LAB_024a6f8c;
    *(undefined8 *)(unaff_x28 + 0x38) = unaff_x23;
    param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x38),unaff_x23);
    if (*(uint *)(unaff_x28 + 0x18) < 5) goto LAB_024a6f8c;
    *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)StringLiteral_10557;
    param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x40));
    if (*(uint *)(unaff_x28 + 0x18) < 6) goto LAB_024a6f8c;
    *(undefined8 *)(unaff_x28 + 0x48) = unaff_x24;
    param_1 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x48));
    if (*(uint *)(unaff_x28 + 0x18) < 7) goto LAB_024a6f8c;
    *(undefined8 *)(unaff_x28 + 0x50) = *(undefined8 *)StringLiteral_10561;
  }
LAB_024a6f34:
  if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0206154c();
  }
  goto LAB_024a6fa4;
}


