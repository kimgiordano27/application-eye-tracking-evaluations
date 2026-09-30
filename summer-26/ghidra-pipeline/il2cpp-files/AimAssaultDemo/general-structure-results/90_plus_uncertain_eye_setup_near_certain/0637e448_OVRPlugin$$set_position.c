/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 0637e448
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_position(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  int in_w9;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x0637e448:
  *(int *)(unaff_x20 + 0x1c) = in_w9;
  if (param_1 != 0) {
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
      param_1 = param_1 + (int)uVar2 * unaff_x27;
      *(undefined8 *)(param_1 + 0x30) = in_stack_00000080;
      *(long *)(param_1 + 0x28) = in_stack_00000078;
      *(undefined8 *)(param_1 + 0x20) = in_stack_00000070;
      thunk_FUN_037aeb94(param_1 + 0x28,0);
    }
    else {
      FUN_0498fcac();
    }
    do {
      while( true ) {
        plVar9 = unaff_x19;
        unaff_x19 = (long *)plVar9[2];
        if (unaff_x19 == (long *)0x0) {
          FUN_03f0af5c();
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_062d782c();
          return;
        }
        uVar2 = (**(code **)(*unaff_x19 + 0x228))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x230));
        if ((uVar2 & 0xfffffffe) != 2) break;
        if (plVar9 != (long *)0x0) {
          lVar10 = *unaff_x26;
          lVar4 = thunk_FUN_037787d0(unaff_x19,lVar10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(unaff_x19,lVar10);
          }
          lVar4 = *unaff_x26;
          plVar5 = (long *)thunk_FUN_037787d0(unaff_x19,lVar4);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(unaff_x19,lVar4);
          }
          lVar10 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 == 0) goto LAB_0637e34c;
          piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_0637e334;
        }
      }
    } while (uVar2 != 4);
    bVar1 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(unaff_x19);
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062d74e8(&stack0x00000058,1,0);
    in_stack_00000060 = unaff_x19[0xc];
    thunk_FUN_037aeb94();
    goto LAB_0637e414;
  }
LAB_0637e544:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_0637e334:
    if (*(long *)(piVar8 + -2) == lVar4) {
      puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_0637e3d8;
    }
  }
LAB_0637e34c:
  puVar6 = (undefined8 *)FUN_0377596c(plVar5,lVar4,2);
LAB_0637e3d8:
  uVar3 = (*(code *)*puVar6)(plVar5,plVar9,puVar6[1]);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x25);
  }
  FUN_062d74e8(&stack0x00000058,2,0);
  uStack000000000000005c = uVar3;
LAB_0637e414:
  if (unaff_x20 == 0) goto LAB_0637e544;
  in_stack_00000078 = in_stack_00000060;
  in_stack_00000080 = in_stack_00000068;
  param_1 = *(long *)(unaff_x20 + 0x10);
  in_w9 = *(int *)(unaff_x20 + 0x1c) + 1;
  in_stack_00000070 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
  goto code_r0x0637e448;
}


