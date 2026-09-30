/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_session_handle_get
ENTRY_POINT: 078b0a88
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_session_handle_get
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  int unaff_w29;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x078b0a88:
  puVar2 = (undefined8 *)(param_1 + 0x138);
LAB_078b0a8c:
  lVar3 = (*(code *)*puVar2)(unaff_x21,unaff_x22,puVar2[1]);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 = FUN_058b71ec(lVar3,*unaff_x24);
  uVar4 = FUN_0587c6c4(&stack0x00000028,*unaff_x27);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e3254(unaff_x19 + 2,&stack0x00000028);
    return;
  }
  do {
    uVar5 = FUN_0587c704(&stack0x00000028,*unaff_x28);
    *(undefined8 *)(unaff_x19 + 0xe) = uVar5;
    thunk_FUN_03afed3c();
    if (unaff_x19[0x10] == 1) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = FUN_078adb7c(0x3ff0000000000000);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000020 = FUN_067c4bec(lVar3,0);
      uVar4 = FUN_0666e8e0(&stack0x00000020,0);
      if ((uVar4 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e6818(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      FUN_0666e9a8(&stack0x00000020,0);
    }
    unaff_x19[0xc] = unaff_x19[0xc] + 1;
    if (*(long *)(unaff_x19 + 0xe) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0xe) + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x58) + 0x30) < *(int *)(lVar3 + 0x30)) {
        uVar5 = thunk_FUN_03af1434(PTR_DAT_08486858);
        lVar3 = FUN_03a8a804(uVar5,4);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
        FUN_0350a83c(lVar3,uVar5);
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
        FUN_0350a870(lVar3,0,uVar5);
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
        FUN_0350a83c(lVar3,uVar5);
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
        FUN_0350a870(lVar3,1,uVar5);
        puVar1 = PTR_DAT_08486760;
        if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uStack0000000000000004 = *(undefined4 *)(*(long *)(unaff_x20 + 0x58) + 0x30);
        uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x00000004);
        FUN_0350a83c(lVar3,uVar5);
        FUN_0350a870(lVar3,2,uVar5);
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(*(long *)(unaff_x19 + 0xe) + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48));
        FUN_0350a83c(lVar3,uVar5);
        FUN_0350a870(lVar3,3,uVar5);
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyInfo>_TypeInfo);
        uVar5 = FUN_065ce7dc(uVar5,lVar3,0);
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar6 = thunk_FUN_03ac74bc();
        FUN_078bbac4(uVar6,uVar5,0xc,0);
        lVar3 = *(long *)(unaff_x20 + 0xa0);
        if (lVar3 != 0) {
          uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<Purchase>_TypeInfo);
          FUN_0587ddbc(lVar3,uVar6,uVar5);
        }
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar6,uVar5);
      }
LAB_078b0bcc:
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d184(unaff_x19 + 2,0);
      return;
    }
    if (3 < (int)unaff_x19[0xc]) goto LAB_078b0bcc;
    unaff_x19[0x10] = 0;
    if (unaff_w29 != 0) break;
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
    unaff_w29 = -1;
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    *unaff_x19 = 0xffffffff;
  } while( true );
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  unaff_x21 = *(long **)(unaff_x20 + 0x80);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  param_1 = *unaff_x21;
  unaff_x22 = *(undefined8 *)(unaff_x19 + 10);
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        param_1 = param_1 + (long)(*piVar7 + 7) * 0x10;
        goto code_r0x078b0a88;
      }
      uVar4 = uVar4 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(unaff_x21,*unaff_x25,7);
  goto LAB_078b0a8c;
}


