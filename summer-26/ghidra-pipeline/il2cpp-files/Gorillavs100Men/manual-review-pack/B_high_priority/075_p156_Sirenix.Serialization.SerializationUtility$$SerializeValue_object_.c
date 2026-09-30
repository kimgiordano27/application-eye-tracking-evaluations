/*
FUNCTION_NAME: Sirenix.Serialization.SerializationUtility$$SerializeValue<object>
ENTRY_POINT: 024a654c
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


undefined4 Sirenix_Serialization_SerializationUtility__SerializeValue<object>(undefined **param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  int unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
code_r0x024a654c:
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)param_1[0x1c5];
  thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x30));
  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffc) != 0) {
    *(undefined8 *)(unaff_x29 + 0x38) = unaff_x28;
    thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x38),unaff_x28);
    if (4 < *(uint *)(unaff_x29 + 0x18)) {
      *(undefined8 *)(unaff_x29 + 0x40) = *(undefined8 *)StringLiteral_10557;
      thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x40));
      if (5 < *(uint *)(unaff_x29 + 0x18)) {
        *(undefined8 *)(unaff_x29 + 0x48) = unaff_x24;
        thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x48));
        if (6 < *(uint *)(unaff_x29 + 0x18)) {
          *(undefined8 *)(unaff_x29 + 0x50) = *(undefined8 *)StringLiteral_10561;
          do {
            thunk_FUN_020ccb58();
            uVar3 = FUN_037389bc(unaff_x29,0);
            if (*(int *)(*(long *)StringLiteral_8880 + 0xe4) == 0) {
              thunk_FUN_020b5864(*(long *)StringLiteral_8880);
            }
            FUN_0408c8d0(uVar3,0);
            while( true ) {
              while( true ) {
                lVar5 = *(long *)(unaff_x25 + 0x120);
                unaff_w27 = unaff_w27 + 1;
                if (lVar5 == 0) goto LAB_024a688c;
                if (*(int *)(lVar5 + 0x18) <= unaff_w27) {
                  return in_stack_00000000._4_4_;
                }
                FUN_03494f90(&stack0x00000020,lVar5,unaff_w27,*unaff_x21);
                unaff_x28 = in_stack_00000020;
                plVar1 = (long *)FUN_03ac58c4(&stack0x00000038,in_stack_00000020,0);
                if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_020b5864(*(long *)(unaff_x23 + 0xe0));
                }
                uVar2 = FUN_0384401c(plVar1,0,0);
                if ((uVar2 & 1) != 0) {
                  unaff_x20 = RootMotion_Dynamics_Muscle__get_colliders
                                        (*(undefined8 *)StringLiteral_8748,7);
                  if (unaff_x20 == 0) goto LAB_024a688c;
                  if (*(int *)(unaff_x20 + 0x18) == 0) goto LAB_024a68bc;
                  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)StringLiteral_10560;
                  thunk_FUN_020ccb58();
                  uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
                  if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_020b5864();
                  }
                  plVar1 = (long *)FUN_03842574(uVar3,0);
                  if (plVar1 == (long *)0x0) goto LAB_024a688c;
                  uVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
                  if ((*(uint *)(unaff_x20 + 0x18) & 0xfffffffe) == 0) goto LAB_024a68bc;
                  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
                  thunk_FUN_020ccb58((undefined8 *)(unaff_x20 + 0x28),uVar3);
                  if (*(uint *)(unaff_x20 + 0x18) < 3) goto LAB_024a68bc;
                  param_1 = &StringLiteral_10109;
                  unaff_x29 = unaff_x20;
                  goto code_r0x024a654c;
                }
                if (*(char *)(unaff_x25 + 0x118) == '\0') break;
                *unaff_x22 = *unaff_x22 + 1;
              }
              lVar5 = FUN_03854750(plVar1,0);
              lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_02091334(lVar6);
              }
              lVar6 = thunk_FUN_02094664(lVar5,lVar6);
              if (lVar6 == 0) break;
              lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_02091334(lVar6);
              }
              if (lVar5 == 0) {
                lVar4 = 0;
              }
              else {
                lVar4 = thunk_FUN_02094664(lVar5,lVar6);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_020618cc(lVar5,lVar6);
                }
              }
              if (*(long *)(unaff_x25 + 0x120) == 0) goto LAB_024a688c;
              FUN_03494f90(&stack0x00000020,*(long *)(unaff_x25 + 0x120),unaff_w27,*unaff_x21);
              FUN_03ab04c4(in_stack_00000028,in_stack_00000030,lVar4,in_stack_00000010,
                           in_stack_00000018,unaff_x28);
              FUN_023a4688(in_stack_00000008);
            }
            unaff_x29 = RootMotion_Dynamics_Muscle__get_colliders
                                  (*(undefined8 *)StringLiteral_8748,8);
            if (unaff_x29 == 0) {
LAB_024a688c:
                    /* WARNING: Subroutine does not return */
              FUN_0206154c();
            }
            if (*(int *)(unaff_x29 + 0x18) == 0) break;
            *(undefined8 *)(unaff_x29 + 0x20) = *(undefined8 *)StringLiteral_10558;
            thunk_FUN_020ccb58();
            if (plVar1 == (long *)0x0) goto LAB_024a688c;
            uVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
            if ((*(uint *)(unaff_x29 + 0x18) & 0xfffffffe) == 0) break;
            *(undefined8 *)(unaff_x29 + 0x28) = uVar3;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x28),uVar3);
            if (*(uint *)(unaff_x29 + 0x18) < 3) break;
            *(undefined8 *)(unaff_x29 + 0x30) = *(undefined8 *)StringLiteral_10559;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x30));
            if ((*(uint *)(unaff_x29 + 0x18) & 0xfffffffc) == 0) break;
            *(undefined8 *)(unaff_x29 + 0x38) = unaff_x28;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x38),unaff_x28);
            if (*(uint *)(unaff_x29 + 0x18) < 5) break;
            *(undefined8 *)(unaff_x29 + 0x40) = *(undefined8 *)StringLiteral_10557;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x40));
            if (*(uint *)(unaff_x29 + 0x18) < 6) break;
            *(undefined8 *)(unaff_x29 + 0x48) = unaff_x24;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x29 + 0x48));
            if (*(uint *)(unaff_x29 + 0x18) < 7) break;
            *(undefined8 *)(unaff_x29 + 0x50) = *(undefined8 *)StringLiteral_10556;
            thunk_FUN_020ccb58();
            uVar3 = **(undefined8 **)(unaff_x19 + 0x38);
            if (*(int *)(*(long *)(unaff_x23 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_020b5864();
            }
            plVar1 = (long *)FUN_03842574(uVar3,0);
            if (plVar1 == (long *)0x0) goto LAB_024a688c;
            uVar3 = (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
            if ((*(uint *)(unaff_x29 + 0x18) & 0xfffffff8) == 0) break;
            *(undefined8 *)(unaff_x29 + 0x58) = uVar3;
          } while( true );
        }
      }
    }
  }
LAB_024a68bc:
                    /* WARNING: Subroutine does not return */
  FUN_02061554();
}


