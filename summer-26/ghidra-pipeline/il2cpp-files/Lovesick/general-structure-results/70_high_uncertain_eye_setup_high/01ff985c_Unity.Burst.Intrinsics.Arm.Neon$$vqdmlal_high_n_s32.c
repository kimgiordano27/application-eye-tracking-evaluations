/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqdmlal_high_n_s32
ENTRY_POINT: 01ff985c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01ff9acc) */
/* WARNING: Removing unreachable block (ram,0x01ff9a34) */
/* WARNING: Removing unreachable block (ram,0x01ff9ad8) */
/* WARNING: Removing unreachable block (ram,0x01ff9a64) */

void Unity_Burst_Intrinsics_Arm_Neon__vqdmlal_high_n_s32(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    plVar3 = (long *)thunk_FUN_00d624a0();
    plVar7 = (long *)*plVar3;
    plVar3 = (long *)plVar3[1];
    lVar4 = *unaff_x28;
    if (plVar7 == (long *)0x0) {
LAB_01ff9880:
      plVar7 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar7 + 300) < *(byte *)(lVar4 + 300)) goto LAB_01ff9880;
      if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar4 + 300) * 8 + -8) != lVar4) {
        plVar7 = (long *)0x0;
      }
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0178a8c4(plVar7,0,0);
    if ((uVar5 & 1) == 0) {
Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32:
      uVar8 = *unaff_x25;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01780344(uVar8,0);
      uVar5 = FUN_01789ac0(plVar7,uVar8,0);
      if ((uVar5 & 1) != 0) goto LAB_01ff9910;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar5 = (**(code **)(*unaff_x19 + 0x2c8))();
      if ((uVar5 & 1) == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32;
LAB_01ff9910:
      if (plVar3 != (long *)0x0) {
        if (*plVar3 != *(long *)Method_System_Collections_Generic_List<Selectable>__ctor__) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar3);
        }
        do {
          plVar7 = (long *)plVar3[5];
          if ((plVar7 != (long *)0x0) && (*plVar7 == *(long *)StringLiteral_3919)) {
            uVar5 = FUN_01ff41bc(plVar7);
            if ((uVar5 & 1) != 0) {
              lVar4 = FUN_01feed44(plVar7);
              unaff_w26 = 1;
              if (lVar4 != 0) {
                unaff_w26 = 1;
                *(undefined4 *)(lVar4 + 0x48) = 0;
                *(undefined8 *)(lVar4 + 0x40) = 0;
                *(undefined8 *)(lVar4 + 0x38) = 0;
                *(undefined8 *)(lVar4 + 0x30) = 0;
                *(undefined8 *)(lVar4 + 0x28) = 0;
                *(undefined8 *)(lVar4 + 0x20) = 0;
                *(undefined8 *)(lVar4 + 0x18) = 0;
              }
            }
            break;
          }
          plVar3 = (long *)plVar3[4];
          unaff_w26 = 1;
        } while (plVar3 != (long *)0x0);
      }
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_01ff97d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01ff97d4:
    uVar5 = (*(code *)*puVar2)();
    puVar1 = StringLiteral_10310;
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_00d6225c();
      if (plVar7 == (long *)0x0) goto LAB_01ff9a20;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 == 0) goto LAB_01ff99f8;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_01ff9834;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01ff9834:
    plVar7 = (long *)(*(code *)*puVar2)();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_01ff9a14;
    }
  }
LAB_01ff99f8:
  puVar2 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,0);
LAB_01ff9a14:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_01ff9a20:
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_00d56f10();
  }
  if ((unaff_w26 & 1) != 0) {
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    thunk_FUN_00d74634(*(long *)(lVar4 + 0xb8) + 0x20,0);
    FUN_01ffff70();
  }
  return;
}


