/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_set_session_3d_position_t
ENTRY_POINT: 078b0e48
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_set_session_3d_position_t
               (undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  int iVar13;
  undefined4 uStack0000000000000004;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  iVar13 = 0;
  if (param_2 != 1) {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc(param_1);
    }
    puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar7 = thunk_FUN_03af1434(PTR_DAT_08488858);
    uVar8 = thunk_FUN_03aed0c4(uVar7,*(undefined8 *)*puVar5);
    if ((uVar8 & 1) != 0) {
      uVar7 = *puVar5;
      *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = uVar7;
      in_stack_00000018 = in_stack_00000018 + 1;
      __cxa_end_catch();
      *unaff_x19 = 0xfffffffe;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      lVar6 = thunk_FUN_03af1434(PTR_DAT_08488b88);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_0666d28c(unaff_x19 + 2,uVar7,0);
      return;
    }
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *puVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&PTR_PTR_07fde6e8,0);
  }
  puVar5 = (undefined8 *)__cxa_begin_catch(param_1);
  plVar12 = (long *)*puVar5;
  lVar6 = thunk_FUN_03af1434(System_Collections_Generic_List<PowertrainComponent>_TypeInfo);
  if (plVar12 != (long *)0x0) {
    if ((*(byte *)(lVar6 + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) == lVar6)) {
      uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<PowertrainComponent>_TypeInfo);
      lVar6 = FUN_035255bc(plVar12,uVar7);
      if ((int)unaff_x19[0xc] < 3) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        bVar1 = true;
        if (*(int *)(lVar6 + 0x90) == 0x539c) goto code_r0x078b0f40;
      }
    }
  }
  uVar7 = thunk_FUN_03af1434(PTR_DAT_08488858);
  uVar8 = thunk_FUN_03aed0c4(uVar7,*(undefined8 *)*puVar5);
  bVar1 = false;
  if ((uVar8 & 1) == 0) {
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = *puVar5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar9,&PTR_PTR_07fde6e8,0);
  }
code_r0x078b0f40:
  iVar3 = in_stack_00000018;
  plVar12 = (long *)*puVar5;
  *(long **)(&stack0x00000008 + (long)in_stack_00000018 * 8) = plVar12;
  in_stack_00000018 = in_stack_00000018 + 1;
  __cxa_end_catch();
  if (bVar1) {
    unaff_x19[0x10] = 1;
    puVar2 = System_Collections_Generic_List<ProcessPort>_TypeInfo;
    plVar12 = (long *)PTR_DAT_08488b88;
    in_stack_00000018 = iVar3;
    while( true ) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar6 = FUN_078adb7c(0x3ff0000000000000);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000020 = FUN_067c4bec(lVar6,0);
      uVar8 = FUN_0666e8e0(&stack0x00000020,0);
      if ((uVar8 & 1) == 0) break;
      FUN_0666e9a8(&stack0x00000020,0);
      do {
        unaff_x19[0xc] = unaff_x19[0xc] + 1;
        lVar6 = *(long *)(unaff_x19 + 0xe);
        if (lVar6 != 0) goto code_r0x078b0ba8;
        if (3 < (int)unaff_x19[0xc]) goto LAB_078b0bcc;
        unaff_x19[0x10] = 0;
        if (iVar13 == 0) {
          in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x12);
          iVar13 = -1;
          *(undefined8 *)(unaff_x19 + 0x12) = 0;
          *unaff_x19 = 0xffffffff;
        }
        else {
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          plVar11 = *(long **)(unaff_x20 + 0x80);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar6 = *plVar11;
          uVar7 = *(undefined8 *)(unaff_x19 + 10);
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x25) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                goto LAB_078b0a8c;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*unaff_x25,7);
LAB_078b0a8c:
          lVar6 = (*(code *)*puVar5)(plVar11,uVar7,puVar5[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          in_stack_00000028 = FUN_058b71ec(lVar6,*unaff_x24);
          uVar8 = FUN_0587c6c4(&stack0x00000028,*unaff_x27);
          if ((uVar8 & 1) == 0) {
            *unaff_x19 = 0;
            *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
            thunk_FUN_03afed3c(unaff_x19 + 0x12,0);
            if (*(int *)(*plVar12 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_043e3254(unaff_x19 + 2,&stack0x00000028);
            return;
          }
        }
        uVar7 = FUN_0587c704(&stack0x00000028,*(undefined8 *)puVar2);
        *(undefined8 *)(unaff_x19 + 0xe) = uVar7;
        thunk_FUN_03afed3c();
      } while (unaff_x19[0x10] != 1);
    }
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
    thunk_FUN_03afed3c(unaff_x19 + 0x14,0);
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_043e6818(unaff_x19 + 2,&stack0x00000020);
  }
  else {
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
    uVar4 = thunk_FUN_03af1434(System_Collections_Generic_List<QDOQDSQOOQDDD>_TypeInfo);
    uVar7 = FUN_065c0764(uVar4,uVar7,0);
    FUN_078bb9a4(uVar7,0);
    lVar6 = *(long *)(unaff_x19 + 0xe);
    plVar12 = (long *)PTR_DAT_08488b88;
    in_stack_00000018 = iVar3;
    if (lVar6 != 0) {
code_r0x078b0ba8:
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(*(long *)(unaff_x20 + 0x58) + 0x30) < *(int *)(*(long *)(lVar6 + 0x10) + 0x30)) {
        uVar7 = thunk_FUN_03af1434(PTR_DAT_08486858);
        lVar6 = FUN_03a8a804(uVar7,4);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
        FUN_0350a83c(lVar6,uVar7);
        uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<Property>_TypeInfo);
        FUN_0350a870(lVar6,0,uVar7);
        uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
        FUN_0350a83c(lVar6,uVar7);
        uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyDescriptor>_TypeInfo);
        FUN_0350a870(lVar6,1,uVar7);
        puVar2 = PTR_DAT_08486760;
        if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uStack0000000000000004 = *(undefined4 *)(*(long *)(unaff_x20 + 0x58) + 0x30);
        uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x00000004);
        FUN_0350a83c(lVar6,uVar7);
        FUN_0350a870(lVar6,2,uVar7);
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(*(long *)(unaff_x19 + 0xe) + 0x10) != 0) {
          uVar7 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x48));
          FUN_0350a83c(lVar6,uVar7);
          FUN_0350a870(lVar6,3,uVar7);
          uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<PropertyInfo>_TypeInfo);
          uVar7 = FUN_065ce7dc(uVar7,lVar6,0);
          thunk_FUN_03af1434(PTR_DAT_08493908);
          uVar4 = thunk_FUN_03ac74bc();
          FUN_078bbac4(uVar4,uVar7,0xc,0);
          lVar6 = *(long *)(unaff_x20 + 0xa0);
          if (lVar6 != 0) {
            uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<Purchase>_TypeInfo);
            FUN_0587ddbc(lVar6,uVar4,uVar7);
          }
          uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<QDOODOQQDQODD>_TypeInfo);
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar4,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
LAB_078b0bcc:
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0666d184(unaff_x19 + 2,0);
  }
  return;
}


