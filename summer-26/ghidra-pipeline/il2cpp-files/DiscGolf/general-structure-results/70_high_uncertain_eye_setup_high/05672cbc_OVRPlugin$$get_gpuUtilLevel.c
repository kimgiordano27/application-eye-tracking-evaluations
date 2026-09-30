/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilLevel
ENTRY_POINT: 05672cbc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05672f00) */

void OVRPlugin__get_gpuUtilLevel(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  long *unaff_x19;
  long lVar4;
  long unaff_x20;
  long *plVar5;
  int unaff_w21;
  long lVar6;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong unaff_x26;
  ulong in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  long *in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 in_stack_00000090;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  do {
    FUN_05657bf4(param_1,param_2,0);
    in_stack_000000c0 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
    in_stack_000000a8 = in_stack_00000038;
    in_stack_000000a0 = in_stack_00000030;
    in_stack_000000b8 = in_stack_00000048;
    in_stack_000000b0 = in_stack_00000040;
    do {
      lVar6 = unaff_x19[0x32];
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04018b68(&stack0x00000030,lVar6,unaff_w21,*unaff_x24);
      in_stack_00000090 = uStack0000000000000050;
      in_stack_00000078 = in_stack_00000038;
      in_stack_00000070 = in_stack_00000030;
      in_stack_00000088 = in_stack_00000048;
      in_stack_00000080 = in_stack_00000040;
      FUN_0567cef8();
      uStack0000000000000050 = 0;
      in_stack_00000038 = (undefined8 *)0x0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      FUN_04018bd0(lVar6,unaff_w21,&stack0x00000030,*unaff_x25);
      lVar6 = unaff_x19[0x32];
      unaff_w21 = unaff_w21 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar6 + 0x18) <= unaff_w21) {
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        in_stack_00000068 = (long *)FUN_0564de84(0xf,0);
        plVar5 = (long *)unaff_x19[0x33];
        in_stack_00000038 = &stack0x00000068;
        in_stack_00000030 = 0;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar5;
        lVar4 = unaff_x19[0x32];
        uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar1 == 0) goto LAB_05672dc0;
        piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_05672da8;
      }
      FUN_04018b68(&stack0x00000030,lVar6,unaff_w21,*unaff_x24);
      FUN_0569edf0(&stack0x00000030,
                   *(long *)(unaff_x20 + 0x10) +
                   (in_stack_00000030 >> 0x20) * (unaff_x26 & 0xffffffff),0);
      in_stack_000000c0 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
      in_stack_000000a8 = in_stack_00000038;
      in_stack_000000a0 = in_stack_00000030;
      in_stack_000000b8 = in_stack_00000048;
      in_stack_000000b0 = in_stack_00000040;
      uVar1 = FUN_056a0370(&stack0x000000a0,0);
    } while ((uVar1 & 1) == 0);
    param_2 = (**(code **)(*unaff_x19 + 0x188))();
    param_1 = &stack0x00000030;
  } while( true );
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar3 = piVar3 + 4;
    if (uVar1 == 0) break;
LAB_05672da8:
    if (*(long *)(piVar3 + -2) ==
        *(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_05672ddc;
    }
  }
LAB_05672dc0:
  puVar2 = (undefined8 *)
           FUN_02dd004c(plVar5,*(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo
                        ,0);
LAB_05672ddc:
  (*(code *)*puVar2)(plVar5,lVar4,puVar2[1]);
  plVar5 = in_stack_00000068;
  if (in_stack_00000068 != (long *)0x0) {
    lVar6 = *in_stack_00000068;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_05672e50;
        }
        uVar1 = uVar1 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000068,*(long *)PTR_DAT_069fbff0,0);
LAB_05672e50:
    (*(code *)*puVar2)(plVar5,puVar2[1]);
  }
  plVar5 = (long *)*in_stack_00000060;
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar3 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_05672ec0;
        }
        uVar1 = uVar1 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)PTR_DAT_069fbff0,0);
LAB_05672ec0:
    (*(code *)*puVar2)(plVar5,puVar2[1]);
  }
  if (in_stack_00000058 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


