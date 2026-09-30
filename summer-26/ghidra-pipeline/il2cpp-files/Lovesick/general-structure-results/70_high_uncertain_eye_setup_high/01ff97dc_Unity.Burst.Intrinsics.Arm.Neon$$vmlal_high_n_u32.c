/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vmlal_high_n_u32
ENTRY_POINT: 01ff97dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01ff9acc) */
/* WARNING: Removing unreachable block (ram,0x01ff9a34) */
/* WARNING: Removing unreachable block (ram,0x01ff9ad8) */
/* WARNING: Removing unreachable block (ram,0x01ff9a64) */

void Unity_Burst_Intrinsics_Arm_Neon__vmlal_high_n_u32(code *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 uVar8;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  while (uVar2 = (*param_1)(), puVar1 = StringLiteral_10310, (uVar2 & 1) != 0) {
    lVar6 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_01ff9834;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_01ff9834:
    plVar4 = (long *)(*(code *)*puVar3)();
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    plVar5 = (long *)thunk_FUN_00d624a0();
    plVar4 = (long *)*plVar5;
    plVar5 = (long *)plVar5[1];
    lVar6 = *unaff_x28;
    if (plVar4 == (long *)0x0) {
LAB_01ff9880:
      plVar4 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar4 + 300) < *(byte *)(lVar6 + 300)) goto LAB_01ff9880;
      if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 300) * 8 + -8) != lVar6) {
        plVar4 = (long *)0x0;
      }
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_0178a8c4(plVar4,0,0);
    if ((uVar2 & 1) == 0) {
Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32:
      uVar8 = *unaff_x25;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01780344(uVar8,0);
      uVar2 = FUN_01789ac0(plVar4,uVar8,0);
      if ((uVar2 & 1) != 0) goto LAB_01ff9910;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar2 = (**(code **)(*unaff_x19 + 0x2c8))();
      if ((uVar2 & 1) == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32;
LAB_01ff9910:
      if (plVar5 != (long *)0x0) {
        if (*plVar5 != *(long *)Method_System_Collections_Generic_List<Selectable>__ctor__) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar5);
        }
        do {
          plVar4 = (long *)plVar5[5];
          if ((plVar4 != (long *)0x0) && (*plVar4 == *(long *)StringLiteral_3919)) {
            uVar2 = FUN_01ff41bc(plVar4);
            if ((uVar2 & 1) != 0) {
              lVar6 = FUN_01feed44(plVar4);
              unaff_w26 = 1;
              if (lVar6 != 0) {
                unaff_w26 = 1;
                *(undefined4 *)(lVar6 + 0x48) = 0;
                *(undefined8 *)(lVar6 + 0x40) = 0;
                *(undefined8 *)(lVar6 + 0x38) = 0;
                *(undefined8 *)(lVar6 + 0x30) = 0;
                *(undefined8 *)(lVar6 + 0x28) = 0;
                *(undefined8 *)(lVar6 + 0x20) = 0;
                *(undefined8 *)(lVar6 + 0x18) = 0;
              }
            }
            break;
          }
          plVar5 = (long *)plVar5[4];
          unaff_w26 = 1;
        } while (plVar5 != (long *)0x0);
      }
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar6 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01ff97d4;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724();
LAB_01ff97d4:
    param_1 = (code *)*puVar3;
  }
  plVar4 = (long *)thunk_FUN_00d6225c();
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01ff9a14;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar1,0);
LAB_01ff9a14:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_00d56f10();
  }
  if ((unaff_w26 & 1) != 0) {
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar1;
    }
    thunk_FUN_00d74634(*(long *)(lVar6 + 0xb8) + 0x20,0);
    FUN_01ffff70();
  }
  return;
}


