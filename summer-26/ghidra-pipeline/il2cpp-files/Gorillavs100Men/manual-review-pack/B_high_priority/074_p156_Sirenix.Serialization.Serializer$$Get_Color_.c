/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<Color>
ENTRY_POINT: 024a6df8
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_Serializer__Get<Color>(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *__src;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long unaff_x19;
  void *unaff_x20;
  int unaff_w21;
  int *unaff_x22;
  size_t __n;
  undefined8 *__dest;
  undefined8 unaff_x24;
  long unaff_x25;
  void *unaff_x26;
  undefined8 uVar9;
  ulong unaff_x28;
  long unaff_x29;
  
code_r0x024a6df8:
  uVar4 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffff8) == 0) {
LAB_024a6f8c:
    if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
  }
  else {
    *(ulong *)(unaff_x28 + 0x58) = uVar4;
    while( true ) {
      thunk_FUN_020ccb58();
      uVar3 = FUN_037389bc(unaff_x28,0);
      if (*(int *)(*(long *)StringLiteral_8880 + 0xe4) == 0) {
        thunk_FUN_020b5864(*(long *)StringLiteral_8880);
      }
      FUN_0408c8d0(uVar3,0);
      while( true ) {
        lVar6 = *(long *)(unaff_x25 + 0x120);
        unaff_w21 = unaff_w21 + 1;
        uVar4 = 0;
        if (lVar6 == 0) goto LAB_024a6f34;
        if (*(int *)(lVar6 + 0x18) <= unaff_w21) {
          uVar4 = (ulong)*(uint *)(unaff_x29 + -0x84);
          if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
            return;
          }
          goto LAB_024a6fa4;
        }
        FUN_03494f90(unaff_x29 + -0x30,lVar6,unaff_w21,*(undefined8 *)StringLiteral_10555);
        uVar3 = *(undefined8 *)(unaff_x29 + -0x30);
        plVar2 = (long *)FUN_03ac58c4(unaff_x29 + -0x38,uVar3,0);
        if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_020b5864(*(long *)(StringLiteral_8735 + 0xe0));
        }
        uVar4 = FUN_0384401c(plVar2,0,0);
        if ((uVar4 & 1) != 0) break;
        if (*(char *)(unaff_x25 + 0x118) == '\0') {
          uVar9 = FUN_03854750(plVar2,0);
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02091334(lVar6);
          }
          lVar6 = thunk_FUN_02094664(uVar9,lVar6);
          if (lVar6 == 0) {
            unaff_x28 = RootMotion_Dynamics_Muscle__get_colliders
                                  (*(undefined8 *)StringLiteral_8748,8);
            uVar4 = unaff_x28;
            if (unaff_x28 == 0) goto LAB_024a6f34;
            if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_024a6f8c;
            *(undefined8 *)(unaff_x28 + 0x20) = *(undefined8 *)StringLiteral_10558;
            uVar4 = thunk_FUN_020ccb58();
            if (plVar2 == (long *)0x0) goto LAB_024a6f34;
            uVar4 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
            if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffe) == 0) goto LAB_024a6f8c;
            *(ulong *)(unaff_x28 + 0x28) = uVar4;
            uVar4 = thunk_FUN_020ccb58((ulong *)(unaff_x28 + 0x28),uVar4);
            if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_024a6f8c;
            *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)StringLiteral_10559;
            uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x30));
            if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffc) == 0) goto LAB_024a6f8c;
            *(undefined8 *)(unaff_x28 + 0x38) = uVar3;
            uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x38),uVar3);
            if (*(uint *)(unaff_x28 + 0x18) < 5) goto LAB_024a6f8c;
            *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)StringLiteral_10557;
            uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x40));
            if (*(uint *)(unaff_x28 + 0x18) < 6) goto LAB_024a6f8c;
            *(undefined8 *)(unaff_x28 + 0x48) = unaff_x24;
            uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x48));
            if (*(uint *)(unaff_x28 + 0x18) < 7) goto LAB_024a6f8c;
            *(undefined8 *)(unaff_x28 + 0x50) = *(undefined8 *)StringLiteral_10556;
            thunk_FUN_020ccb58();
            uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_020b5864();
            }
            param_1 = (long *)FUN_03842574(uVar3,0);
            uVar4 = 0;
            if (param_1 == (long *)0x0) goto LAB_024a6f34;
            goto code_r0x024a6df8;
          }
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02091334(lVar6);
          }
          __src = (void *)FUN_02061434(uVar9,lVar6,unaff_x26);
          __n = *(size_t *)(unaff_x29 + -0x68);
          memcpy(unaff_x20,__src,__n);
          uVar4 = 0;
          if (*(long *)(unaff_x25 + 0x120) == 0) goto LAB_024a6f34;
          FUN_03494f90(unaff_x29 + -0x30,*(long *)(unaff_x25 + 0x120),unaff_w21,
                       *(undefined8 *)StringLiteral_10555);
          uVar9 = *(undefined8 *)(unaff_x29 + -0x28);
          uVar1 = *(undefined8 *)(unaff_x29 + -0x20);
          memcpy(unaff_x26,unaff_x20,__n);
          uVar5 = thunk_FUN_02094398(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),unaff_x26);
          FUN_03ab04c4(uVar9,uVar1,uVar5,*(undefined8 *)(unaff_x29 + -0x50),
                       *(undefined8 *)(unaff_x29 + -0x48),uVar3);
          __dest = *(undefined8 **)(unaff_x29 + -0x60);
          memcpy(__dest,unaff_x20,__n);
          if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 8) + 0x28)) {
            __dest = (undefined8 *)*__dest;
          }
          puVar7 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x18);
          unaff_x22 = *(int **)(unaff_x29 + -0x70);
          *(undefined4 *)(unaff_x29 + -0xc) = 10;
          uVar3 = *puVar7;
          *(undefined8 **)(unaff_x29 + -0x20) = __dest;
          *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
          pcVar8 = (code *)puVar7[2];
          *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x58);
          *(int **)(unaff_x29 + -0x28) = unaff_x22;
          (*pcVar8)(uVar3,puVar7,0,unaff_x29 + -0x30,unaff_x29 + -0x10);
          unaff_x26 = *(void **)(unaff_x29 + -0x78);
          unaff_x20 = *(void **)(unaff_x29 + -0x40);
        }
        else {
          *unaff_x22 = *unaff_x22 + 1;
        }
      }
      unaff_x28 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)StringLiteral_8748,7);
      uVar4 = unaff_x28;
      if (unaff_x28 == 0) break;
      if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_024a6f8c;
      *(undefined8 *)(unaff_x28 + 0x20) = *(undefined8 *)StringLiteral_10560;
      thunk_FUN_020ccb58();
      uVar9 = **(undefined8 **)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(StringLiteral_8735 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_020b5864();
      }
      plVar2 = (long *)FUN_03842574(uVar9,0);
      uVar4 = 0;
      if (plVar2 == (long *)0x0) break;
      uVar4 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffe) == 0) goto LAB_024a6f8c;
      *(ulong *)(unaff_x28 + 0x28) = uVar4;
      uVar4 = thunk_FUN_020ccb58((ulong *)(unaff_x28 + 0x28),uVar4);
      if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_024a6f8c;
      *(undefined8 *)(unaff_x28 + 0x30) = *(undefined8 *)StringLiteral_10562;
      uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x30));
      if ((*(uint *)(unaff_x28 + 0x18) & 0xfffffffc) == 0) goto LAB_024a6f8c;
      *(undefined8 *)(unaff_x28 + 0x38) = uVar3;
      uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x38),uVar3);
      if (*(uint *)(unaff_x28 + 0x18) < 5) goto LAB_024a6f8c;
      *(undefined8 *)(unaff_x28 + 0x40) = *(undefined8 *)StringLiteral_10557;
      uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x40));
      if (*(uint *)(unaff_x28 + 0x18) < 6) goto LAB_024a6f8c;
      *(undefined8 *)(unaff_x28 + 0x48) = unaff_x24;
      uVar4 = thunk_FUN_020ccb58((undefined8 *)(unaff_x28 + 0x48));
      if (*(uint *)(unaff_x28 + 0x18) < 7) goto LAB_024a6f8c;
      *(undefined8 *)(unaff_x28 + 0x50) = *(undefined8 *)StringLiteral_10561;
    }
LAB_024a6f34:
    if (*(long *)(*(long *)(unaff_x29 + -0x80) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
  }
LAB_024a6fa4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


