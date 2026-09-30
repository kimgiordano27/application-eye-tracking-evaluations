/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 0637e3b8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_position(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x29;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  long lStack0000000000000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
code_r0x0637e3b8:
  lStack0000000000000060 = param_2;
  thunk_FUN_037aeb94();
  while( true ) {
    uVar2 = CONCAT44(uStack000000000000005c,uStack0000000000000058);
    if (unaff_x20 == 0) break;
    in_stack_00000078 = lStack0000000000000060;
    in_stack_00000080 = in_stack_00000068;
    lVar7 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    in_stack_00000070 = uVar2;
    if (lVar7 == 0) break;
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      lVar7 = lVar7 + (int)uVar3 * unaff_x27;
      *(undefined8 *)(lVar7 + 0x30) = in_stack_00000068;
      *(long *)(lVar7 + 0x28) = lStack0000000000000060;
      *(undefined8 *)(lVar7 + 0x20) = uVar2;
      thunk_FUN_037aeb94(lVar7 + 0x28,0);
    }
    else {
      FUN_0498fcac();
    }
    do {
      while( true ) {
        plVar10 = unaff_x19;
        unaff_x19 = (long *)plVar10[2];
        if (unaff_x19 == (long *)0x0) {
          FUN_03f0af5c();
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          FUN_062d782c();
          return;
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x228))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x230));
        if ((uVar3 & 0xfffffffe) == 2) break;
        if (uVar3 == 4) {
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
          param_2 = unaff_x19[0xc];
          goto code_r0x0637e3b8;
        }
      }
    } while (plVar10 == (long *)0x0);
    lVar11 = *unaff_x26;
    lVar7 = thunk_FUN_037787d0(unaff_x19,lVar11);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(unaff_x19,lVar11);
    }
    lVar7 = *unaff_x26;
    plVar5 = (long *)thunk_FUN_037787d0(unaff_x19,lVar7);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(unaff_x19,lVar7);
    }
    lVar11 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0637e3d8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,lVar7,2);
LAB_0637e3d8:
    uVar4 = (*(code *)*puVar6)(plVar5,plVar10,puVar6[1]);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x25);
    }
    FUN_062d74e8(&stack0x00000058,2,0);
    uStack000000000000005c = uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


