/*
FUNCTION_NAME: Unity.Burst.BurstCompiler.BurstCompilerHelper.IsBurstEnabled_00000145$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 08063848
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08063a08) */
/* WARNING: Removing unreachable block (ram,0x08063a78) */

void Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate__Invoke
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *in_x9;
  long in_x10;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long *plVar7;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long lVar8;
  long *in_stack_00000010;
  long in_stack_00000018;
  char *in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000038;
  
  do {
    if (*(byte *)(param_1 + 0x130) <= *(byte *)(in_x10 + 0x130)) {
      if (*(long *)(*(long *)(in_x10 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) == param_1
         ) goto FUN_08063874;
      in_x9 = (long *)0x0;
      goto FUN_08063874;
    }
    do {
      in_x9 = (long *)0x0;
FUN_08063874:
      plVar6 = (long *)param_2[1];
      if (*(int *)(param_1 + 0xe4) == 0) {
        thunk_FUN_040d65a8(param_1);
      }
      uVar3 = FUN_07692be0(in_x9,0,0);
      if ((uVar3 & 1) == 0) {
LAB_080638bc:
        lVar8 = *(long *)(unaff_x24 + 0x10);
        if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar4 = FUN_0768890c(lVar8 + 0x20,0);
        uVar3 = FUN_07691f40(in_x9,uVar4,0);
        if ((uVar3 & 1) != 0) goto LAB_080638f0;
      }
      else {
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
        if ((uVar3 & 1) == 0) goto LAB_080638bc;
LAB_080638f0:
        if (plVar6 != (long *)0x0) {
          if (*plVar6 != *unaff_x27) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar6);
          }
          do {
            plVar7 = (long *)plVar6[5];
            if ((plVar7 != (long *)0x0) && (*plVar7 == *unaff_x28)) {
              uVar3 = FUN_0805f234(plVar7);
              if ((uVar3 & 1) != 0) {
                unaff_x23 = 1;
                FUN_0806037c(plVar7);
              }
              break;
            }
            plVar6 = (long *)plVar6[4];
            unaff_x23 = 1;
          } while (plVar6 != (long *)0x0);
        }
      }
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar8 = *in_stack_00000038;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_080637a4;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*unaff_x25,0);
LAB_080637a4:
      uVar3 = (*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
      puVar1 = PTR_DAT_092860c0;
      if ((uVar3 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_040b4e00(in_stack_00000038,*(undefined8 *)PTR_DAT_092860c0);
        *in_stack_00000010 = (long)plVar6;
        if (plVar6 == (long *)0x0) goto LAB_080639d8;
        lVar8 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 == 0) goto Unity_Burst_BurstCompiler_<>c___cctor;
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_08063998;
      }
      if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar8 = *in_stack_00000038;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar8 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0806380c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(in_stack_00000038,*unaff_x25,1);
LAB_0806380c:
      plVar6 = (long *)(*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar6 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0();
      }
      param_2 = (long *)thunk_FUN_040b5044();
      in_x9 = (long *)*param_2;
      param_1 = *(long *)(unaff_x24 + 0xe0);
    } while (in_x9 == (long *)0x0);
    in_x10 = *in_x9;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar5 = piVar5 + 4;
    if (uVar3 == 0) break;
LAB_08063998:
    if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_080639cc;
    }
  }
Unity_Burst_BurstCompiler_<>c___cctor:
  puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)puVar1,0);
LAB_080639cc:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
LAB_080639d8:
  if (*in_stack_00000020 != '\0') {
    thunk_FUN_0408541c(*in_stack_00000028,0);
  }
  if (in_stack_00000018 == 0) {
    if ((unaff_x23 & 1) != 0) {
      lVar8 = *unaff_x22;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *unaff_x22;
      }
      thunk_FUN_040b15f0(*(long *)(lVar8 + 0xb8) + 0x20,0);
      FUN_08069a48();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077828();
}


