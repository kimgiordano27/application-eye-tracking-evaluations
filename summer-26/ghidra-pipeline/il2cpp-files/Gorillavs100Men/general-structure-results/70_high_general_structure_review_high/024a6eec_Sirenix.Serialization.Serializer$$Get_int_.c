/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<int>
ENTRY_POINT: 024a6eec
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_Serializer__Get<int>
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  void *__src;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x19;
  void *__dest;
  int unaff_w21;
  size_t __n;
  int *unaff_x22;
  undefined8 unaff_x24;
  void *__dest_00;
  undefined8 uVar9;
  long unaff_x28;
  long unaff_x29;
  
code_r0x024a6eec:
  uVar6 = *param_3;
  *(undefined8 **)(unaff_x29 + -0x20) = param_1;
  *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
  pcVar8 = (code *)param_3[2];
  *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x58);
  *(int **)(unaff_x29 + -0x28) = unaff_x22;
  (*pcVar8)(uVar6,param_3,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
  __dest_00 = *(void **)(unaff_x29 + -0x78);
  __dest = *(void **)(unaff_x29 + -0x40);
LAB_024a6f28:
  lVar7 = *(long *)(unaff_x19 + 0x120);
  unaff_w21 = unaff_w21 + 1;
  uVar3 = 0;
  if (lVar7 == 0) goto LAB_024a6f34;
  if (*(int *)(lVar7 + 0x18) <= unaff_w21) {
    uVar3 = (ulong)*(uint *)(unaff_x29 + -0x84);
    if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
    goto LAB_024a6fa4;
  }
  FUN_03494f90(unaff_x29 + -0x30,lVar7,unaff_w21,*(undefined8 *)StringLiteral_10555);
  uVar6 = *(undefined8 *)(unaff_x29 + -0x30);
  plVar2 = (long *)FUN_03ac58c4(unaff_x29 + -0x38,uVar6,0);
  if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_020b5864(*(long *)(StringLiteral_8735 + 0xe0));
  }
  uVar3 = FUN_0384401c(plVar2,0,0);
  if ((uVar3 & 1) == 0) {
    if (*(char *)(unaff_x19 + 0x118) != '\0') {
      *unaff_x22 = *unaff_x22 + 1;
      goto LAB_024a6f28;
    }
    uVar9 = FUN_03854750(plVar2,0);
    lVar7 = *(long *)(*(long *)(unaff_x28 + 0x38) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02091334(lVar7);
    }
    lVar7 = thunk_FUN_02094664(uVar9,lVar7);
    if (lVar7 != 0) goto code_r0x024a6c7c;
    uVar4 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8748,8);
    uVar3 = uVar4;
    if (uVar4 == 0) goto LAB_024a6f34;
    if (*(int *)(uVar4 + 0x18) == 0) goto LAB_024a6f8c;
    *(undefined8 *)(uVar4 + 0x20) = *(undefined8 *)StringLiteral_10558;
    uVar3 = thunk_FUN_020ccb58();
    if (plVar2 == (long *)0x0) goto LAB_024a6f34;
    uVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    if ((*(uint *)(uVar4 + 0x18) & 0xfffffffe) != 0) {
      *(ulong *)(uVar4 + 0x28) = uVar3;
      uVar3 = thunk_FUN_020ccb58((ulong *)(uVar4 + 0x28),uVar3);
      if (2 < *(uint *)(uVar4 + 0x18)) {
        *(undefined8 *)(uVar4 + 0x30) = *(undefined8 *)StringLiteral_10559;
        uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x30));
        if ((*(uint *)(uVar4 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(uVar4 + 0x38) = uVar6;
          uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x38),uVar6);
          if (4 < *(uint *)(uVar4 + 0x18)) {
            *(undefined8 *)(uVar4 + 0x40) = *(undefined8 *)StringLiteral_10557;
            uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x40));
            if (5 < *(uint *)(uVar4 + 0x18)) {
              *(undefined8 *)(uVar4 + 0x48) = unaff_x24;
              uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x48));
              if (6 < *(uint *)(uVar4 + 0x18)) {
                *(undefined8 *)(uVar4 + 0x50) = *(undefined8 *)StringLiteral_10556;
                thunk_FUN_020ccb58();
                uVar6 = **(undefined8 **)(unaff_x28 + 0x38);
                if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_020b5864();
                }
                plVar2 = (long *)FUN_03842574(uVar6,0);
                uVar3 = 0;
                if (plVar2 == (long *)0x0) goto LAB_024a6f34;
                uVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
                if ((*(uint *)(uVar4 + 0x18) & 0xfffffff8) != 0) {
                  *(ulong *)(uVar4 + 0x58) = uVar3;
                  goto LAB_024a6be8;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar4 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8748,7);
    uVar3 = uVar4;
    if (uVar4 == 0) goto LAB_024a6f34;
    if (*(int *)(uVar4 + 0x18) != 0) {
      *(undefined8 *)(uVar4 + 0x20) = *(undefined8 *)StringLiteral_10560;
      thunk_FUN_020ccb58();
      uVar9 = **(undefined8 **)(unaff_x28 + 0x38);
      if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      plVar2 = (long *)FUN_03842574(uVar9,0);
      uVar3 = 0;
      if (plVar2 == (long *)0x0) goto LAB_024a6f34;
      uVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      if ((*(uint *)(uVar4 + 0x18) & 0xfffffffe) != 0) {
        *(ulong *)(uVar4 + 0x28) = uVar3;
        uVar3 = thunk_FUN_020ccb58((ulong *)(uVar4 + 0x28),uVar3);
        if (2 < *(uint *)(uVar4 + 0x18)) {
          *(undefined8 *)(uVar4 + 0x30) = *(undefined8 *)StringLiteral_10562;
          uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x30));
          if ((*(uint *)(uVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(uVar4 + 0x38) = uVar6;
            uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x38),uVar6);
            if (4 < *(uint *)(uVar4 + 0x18)) {
              *(undefined8 *)(uVar4 + 0x40) = *(undefined8 *)StringLiteral_10557;
              uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x40));
              if (5 < *(uint *)(uVar4 + 0x18)) {
                *(undefined8 *)(uVar4 + 0x48) = unaff_x24;
                uVar3 = thunk_FUN_020ccb58((undefined8 *)(uVar4 + 0x48));
                if (6 < *(uint *)(uVar4 + 0x18)) {
                  *(undefined8 *)(uVar4 + 0x50) = *(undefined8 *)StringLiteral_10561;
LAB_024a6be8:
                  thunk_FUN_020ccb58();
                  uVar6 = FUN_037389bc(uVar4,0);
                  if (*(int *)(*(long *)StringLiteral_8880 + 0xe4) == 0) {
                    thunk_FUN_020b5864(*(long *)StringLiteral_8880);
                  }
                  FUN_0408c8d0(uVar6,0);
                  goto LAB_024a6f28;
                }
              }
            }
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
  goto LAB_024a6fa4;
code_r0x024a6c7c:
  lVar7 = *(long *)(*(long *)(unaff_x28 + 0x38) + 8);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02091334(lVar7);
  }
  __src = (void *)FUN_02061434(uVar9,lVar7,__dest_00);
  __n = *(size_t *)(unaff_x29 + -0x68);
  memcpy(__dest,__src,__n);
  uVar3 = 0;
  if (*(long *)(unaff_x19 + 0x120) == 0) {
LAB_024a6f34:
    if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
LAB_024a6fa4:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  FUN_03494f90(unaff_x29 + -0x30,*(long *)(unaff_x19 + 0x120),unaff_w21,
               *(undefined8 *)StringLiteral_10555);
  uVar9 = *(undefined8 *)(unaff_x29 + -0x28);
  uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
  memcpy(__dest_00,__dest,__n);
  uVar5 = thunk_FUN_02094398(*(undefined8 *)(*(long *)(unaff_x28 + 0x38) + 8),__dest_00);
  FUN_03ab04c4(uVar9,uVar1,uVar5,*(undefined8 *)(unaff_x29 + -0x50),
               *(undefined8 *)(unaff_x29 + -0x48),uVar6);
  param_1 = *(undefined8 **)(unaff_x29 + -0x60);
  memcpy(param_1,__dest,__n);
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x28 + 0x38) + 8) + 0x28)) {
    param_1 = (undefined8 *)*param_1;
  }
  param_3 = *(undefined8 **)(*(long *)(unaff_x28 + 0x38) + 0x18);
  unaff_x22 = *(int **)(unaff_x29 + -0x70);
  *(undefined4 *)(unaff_x29 + -0xc) = 10;
  goto code_r0x024a6eec;
}


