/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vqdmlal_high_n_s16
ENTRY_POINT: 01ff981c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01ff9acc) */
/* WARNING: Removing unreachable block (ram,0x01ff9a34) */
/* WARNING: Removing unreachable block (ram,0x01ff9ad8) */
/* WARNING: Removing unreachable block (ram,0x01ff9a64) */

void Unity_Burst_Intrinsics_Arm_Neon__vqdmlal_high_n_s16(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
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
  
code_r0x01ff981c:
  puVar2 = (undefined8 *)FUN_00d59724();
  do {
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (*(long *)(*plVar3 + 0x40) != *(long *)(*unaff_x27 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    plVar4 = (long *)thunk_FUN_00d624a0();
    plVar3 = (long *)*plVar4;
    plVar4 = (long *)plVar4[1];
    lVar5 = *unaff_x28;
    if (plVar3 == (long *)0x0) {
LAB_01ff9880:
      plVar3 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar3 + 300) < *(byte *)(lVar5 + 300)) goto LAB_01ff9880;
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) != lVar5) {
        plVar3 = (long *)0x0;
      }
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_0178a8c4(plVar3,0,0);
    if ((uVar6 & 1) == 0) {
Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32:
      uVar8 = *unaff_x25;
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_01780344(uVar8,0);
      uVar6 = FUN_01789ac0(plVar3,uVar8,0);
      if ((uVar6 & 1) != 0) goto LAB_01ff9910;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar6 = (**(code **)(*unaff_x19 + 0x2c8))();
      if ((uVar6 & 1) == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vmlsl_high_n_s32;
LAB_01ff9910:
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != *(long *)Method_System_Collections_Generic_List<Selectable>__ctor__) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar4);
        }
        do {
          plVar3 = (long *)plVar4[5];
          if ((plVar3 != (long *)0x0) && (*plVar3 == *(long *)StringLiteral_3919)) {
            uVar6 = FUN_01ff41bc(plVar3);
            if ((uVar6 & 1) != 0) {
              lVar5 = FUN_01feed44(plVar3);
              unaff_w26 = 1;
              if (lVar5 != 0) {
                unaff_w26 = 1;
                *(undefined4 *)(lVar5 + 0x48) = 0;
                *(undefined8 *)(lVar5 + 0x40) = 0;
                *(undefined8 *)(lVar5 + 0x38) = 0;
                *(undefined8 *)(lVar5 + 0x30) = 0;
                *(undefined8 *)(lVar5 + 0x28) = 0;
                *(undefined8 *)(lVar5 + 0x20) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
              }
            }
            break;
          }
          plVar4 = (long *)plVar4[4];
          unaff_w26 = 1;
        } while (plVar4 != (long *)0x0);
      }
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01ff97d4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_00d59724();
LAB_01ff97d4:
    uVar6 = (*(code *)*puVar2)();
    puVar1 = StringLiteral_10310;
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_00d6225c();
      if (plVar3 == (long *)0x0) goto LAB_01ff9a20;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 == 0) goto LAB_01ff99f8;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 == 0) goto code_r0x01ff981c;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != *unaff_x29) {
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
      if (uVar6 == 0) goto code_r0x01ff981c;
    }
    puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_01ff9a14;
    }
  }
LAB_01ff99f8:
  puVar2 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,0);
LAB_01ff9a14:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_01ff9a20:
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_00d56f10();
  }
  if ((unaff_w26 & 1) != 0) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    thunk_FUN_00d74634(*(long *)(lVar5 + 0xb8) + 0x20,0);
    FUN_01ffff70();
  }
  return;
}


