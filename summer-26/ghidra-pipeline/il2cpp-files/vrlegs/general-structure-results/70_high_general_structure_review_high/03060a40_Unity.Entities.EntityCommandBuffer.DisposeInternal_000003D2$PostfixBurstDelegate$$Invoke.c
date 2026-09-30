/*
FUNCTION_NAME: Unity.Entities.EntityCommandBuffer.DisposeInternal_000003D2$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 03060a40
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03060b44) */

void Unity_Entities_EntityCommandBuffer_DisposeInternal_000003D2_PostfixBurstDelegate__Invoke
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x29;
  undefined4 uVar8;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  do {
    uVar4 = thunk_FUN_025bd1c0(param_1,param_2,param_3);
    if ((uVar4 & 1) != 0) {
      FUN_01b5f3b4(&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
      uVar1 = in_stack_00000028;
      uVar3 = in_stack_00000020;
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                  System_ComponentModel_ExtenderProvidedPropertyAttribute_var);
      FUN_030519fc(uVar5,uVar3,uVar1);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *in_stack_00000008 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000008,uVar5);
    }
LAB_03060760:
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_030607ac;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_030607ac:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar6 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 == 0) goto LAB_03060adc;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03060808;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_01a472ec();
LAB_03060808:
    (*(code *)*puVar2)(&stack0x00000020);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    FUN_01b5f2c8(&stack0x00000040,&stack0x00000020,*unaff_x22);
    param_1 = FUN_0304a150(in_stack_00000020,in_stack_00000028);
    uVar4 = thunk_FUN_025bd1c0(param_1,*unaff_x23,0);
    if ((uVar4 & 1) != 0) {
      FUN_01b5f3b4(&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
      uVar3 = FUN_030620ac(in_stack_00000020,in_stack_00000028);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *unaff_x25 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      goto LAB_03060760;
    }
    uVar4 = thunk_FUN_025bd1c0(param_1,*(undefined8 *)PTR_DAT_03d02a58,0);
    if ((uVar4 & 1) != 0) {
      FUN_01b5f3b4(&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
      uVar3 = FUN_03062610(in_stack_00000020,in_stack_00000028);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *unaff_x24 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      goto LAB_03060760;
    }
    uVar4 = thunk_FUN_025bd1c0(param_1,*(undefined8 *)Fusion_IBeforeUpdateRemotePrefabs_var,0);
    if ((uVar4 & 1) != 0) {
      FUN_01b5f3b4(&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
      uVar3 = FUN_03062950(in_stack_00000020,in_stack_00000028);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *in_stack_00000018 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      goto LAB_03060760;
    }
    uVar4 = thunk_FUN_025bd1c0(param_1,*(undefined8 *)System_ComponentModel_IBindingList_var,0);
    if ((uVar4 & 1) != 0) {
      FUN_01b5f3b4(&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
      uVar8 = FUN_0304cb98(in_stack_00000020,in_stack_00000028);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined4 *)(unaff_x19 + 0x28) = uVar8;
      goto LAB_03060760;
    }
    uVar4 = thunk_FUN_025bd1c0(param_1,*(undefined8 *)Fusion_IBeforeUpdate_var,0);
    if ((uVar4 & 1) != 0) {
      FUN_01b5f3b4(&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
      uVar8 = FUN_0304cb98(in_stack_00000020,in_stack_00000028);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *(undefined4 *)(unaff_x19 + 0x2c) = uVar8;
      goto LAB_03060760;
    }
    uVar4 = thunk_FUN_025bd1c0(param_1,*(undefined8 *)PTR_DAT_03d02aa0,0);
    if ((uVar4 & 1) != 0) {
      FUN_01b5f3b4(&stack0x00000040,&stack0x00000020,
                   *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
      uVar1 = in_stack_00000028;
      uVar3 = in_stack_00000020;
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                  System_ComponentModel_ExtenderProvidedPropertyAttribute_var);
      FUN_030519fc(uVar5,uVar3,uVar1);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      *in_stack_00000010 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(in_stack_00000010,uVar5);
      goto LAB_03060760;
    }
    param_2 = *(undefined8 *)PTR_DAT_03d028f0;
    param_3 = 0;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03060af8;
    }
  }
LAB_03060adc:
  puVar2 = (undefined8 *)FUN_01a472ec();
LAB_03060af8:
  (*(code *)*puVar2)();
  return;
}


