/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_set
ENTRY_POINT: 078b0b1c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_sessiongroup_handle_set
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  int unaff_w29;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    FUN_0666e9a8(param_1,param_2);
    do {
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
        lVar4 = *(long *)(*(long *)(unaff_x19 + 0xe) + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(int *)(*(long *)(unaff_x20 + 0x58) + 0x30) < *(int *)(lVar4 + 0x30)) {
          uVar8 = thunk_FUN_03af1434(PTR_DAT_08486858);
          lVar4 = FUN_03a8a804(uVar8,4);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
          FUN_0350a83c(lVar4,uVar8);
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
          FUN_0350a870(lVar4,0,uVar8);
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
          FUN_0350a83c(lVar4,uVar8);
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
          FUN_0350a870(lVar4,1,uVar8);
          puVar1 = PTR_DAT_08486760;
          if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uStack0000000000000004 = *(undefined4 *)(*(long *)(unaff_x20 + 0x58) + 0x30);
          uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x00000004);
          FUN_0350a83c(lVar4,uVar8);
          FUN_0350a870(lVar4,2,uVar8);
          if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(long *)(*(long *)(unaff_x19 + 0xe) + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48));
          FUN_0350a83c(lVar4,uVar8);
          FUN_0350a870(lVar4,3,uVar8);
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyInfo>_TypeInfo);
          uVar8 = FUN_065ce7dc(uVar8,lVar4,0);
          thunk_FUN_03af1434(PTR_DAT_08493908);
          uVar3 = thunk_FUN_03ac74bc();
          FUN_078bbac4(uVar3,uVar8,0xc,0);
          lVar4 = *(long *)(unaff_x20 + 0xa0);
          if (lVar4 != 0) {
            uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<Purchase>_TypeInfo);
            FUN_0587ddbc(lVar4,uVar3,uVar8);
          }
          uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar3,uVar8);
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
      if (unaff_w29 == 0) {
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
        unaff_w29 = -1;
        *(undefined8 *)(unaff_x19 + 0x12) = 0;
        *unaff_x19 = 0xffffffff;
      }
      else {
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        plVar7 = *(long **)(unaff_x20 + 0x80);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar4 = *plVar7;
        uVar8 = *(undefined8 *)(unaff_x19 + 10);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
              goto LAB_078b0a8c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4(plVar7,*unaff_x25,7);
LAB_078b0a8c:
        lVar4 = (*(code *)*puVar2)(plVar7,uVar8,puVar2[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        in_stack_00000028 = FUN_058b71ec(lVar4,*unaff_x24);
        uVar5 = FUN_0587c6c4(&stack0x00000028,*unaff_x27);
        if ((uVar5 & 1) == 0) {
          *unaff_x19 = 0;
          *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
          thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_043e3254(unaff_x19 + 2,&stack0x00000028);
          return;
        }
      }
      uVar8 = FUN_0587c704(&stack0x00000028,*unaff_x28);
      *(undefined8 *)(unaff_x19 + 0xe) = uVar8;
      thunk_FUN_03afed3c();
    } while (unaff_x19[0x10] != 1);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = FUN_078adb7c(0x3ff0000000000000);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000020 = FUN_067c4bec(lVar4,0);
    uVar5 = FUN_0666e8e0(&stack0x00000020,0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
      thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e6818(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    param_1 = &stack0x00000020;
    param_2 = 0;
  } while( true );
}


