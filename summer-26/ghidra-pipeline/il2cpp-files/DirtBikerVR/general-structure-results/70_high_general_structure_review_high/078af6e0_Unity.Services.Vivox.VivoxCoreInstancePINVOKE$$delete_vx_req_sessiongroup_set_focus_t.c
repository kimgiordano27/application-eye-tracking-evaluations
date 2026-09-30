/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_set_focus_t
ENTRY_POINT: 078af6e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_set_focus_t
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (param_2 == 1) {
    puVar4 = (undefined8 *)__cxa_begin_catch();
    puVar2 = PTR_DAT_08493908;
    uVar5 = thunk_FUN_03af1434(PTR_DAT_08493908);
    uVar6 = thunk_FUN_03aed0c4(uVar5,*(undefined8 *)*puVar4);
    if ((uVar6 & 1) == 0) {
      uVar5 = thunk_FUN_03af1434(PTR_DAT_08488858);
      uVar7 = thunk_FUN_03aed0c4(uVar5,*(undefined8 *)*puVar4);
      if ((uVar7 & 1) == 0) {
        puVar10 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar10 = *puVar4;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar10,&PTR_PTR_07fde6e8,0);
      }
    }
    iVar3 = in_stack_00000018;
    plVar13 = (long *)*puVar4;
    *(long **)(&stack0x00000008 + (long)in_stack_00000018 * 8) = plVar13;
    in_stack_00000018 = in_stack_00000018 + 1;
    __cxa_end_catch();
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 != 0) {
        FUN_078ad680();
        lVar8 = *(long *)(unaff_x20 + 0x30);
        if (lVar8 != 0) {
          (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        }
        in_stack_00000018 = iVar3;
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9b8(plVar13);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 = iVar3;
    lVar8 = FUN_035255bc(plVar13,*(undefined8 *)puVar2);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = FUN_035255bc(plVar13,*(undefined8 *)puVar2);
    if (*(int *)(lVar8 + 0x8c) == 6) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar8 = FUN_078adb7c(0x3ff0000000000000);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000020 = FUN_067c4bec(lVar8,0);
      uVar6 = FUN_0666e8e0(&stack0x00000020,0);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000020;
        thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03ffe1f0(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      FUN_0666e9a8(&stack0x00000020,0);
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_078ad680();
      lVar8 = *(long *)(unaff_x20 + 0x30);
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
      if (plVar13 == (long *)0x0) {
code_r0x078af8d8:
        uVar5 = thunk_FUN_03af1434(System_Collections_Generic_List<PersistentCall>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(plVar13,uVar5);
      }
      bVar1 = *(byte *)(*(long *)PTR_DAT_08488858 + 0x130);
      if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08488858)
         ) goto code_r0x078af8d8;
      lVar8 = FUN_0666c8dc(plVar13,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_0666c99c(lVar8,0);
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_06f3f220(*(long *)(unaff_x19 + 10),0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = FUN_06768320(0x4024000000000000,0);
    uVar6 = Newtonsoft_Json_Schema_JsonSchema__get_AllowAdditionalProperties(uVar5,uVar9,0);
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 != 0) {
        FUN_078ad680();
        lVar8 = *(long *)(unaff_x20 + 0x30);
        if (lVar8 != 0) {
          (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        }
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar5 = thunk_FUN_03ac74bc();
        uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
        FUN_078bbac4(uVar5,uVar9,0x15,0);
        uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<PersistentCall>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5,uVar9);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_w28 == 0) {
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      *unaff_x19 = 0xffffffff;
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(unaff_x20 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar13 = *(long **)(unaff_x20 + 0x70);
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x38);
      lVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      thunk_FUN_078c4250(lVar8,0);
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x20);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x38);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x10);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x18);
      thunk_FUN_03afed3c();
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar11 = *plVar13;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_078af554;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)
                                     System_Collections_Generic_List<PanelRaycaster>_TypeInfo,8);
LAB_078af554:
      lVar8 = (*(code *)*puVar4)(plVar13,uVar5,lVar8,puVar4[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000028 =
           FUN_058b71ec(lVar8,*(undefined8 *)
                               System_Collections_Generic_List<ParticleSystem>_TypeInfo);
      uVar6 = FUN_0587c6c4(&stack0x00000028,
                           *(undefined8 *)
                            System_Collections_Generic_List<ParameterExpression>_TypeInfo);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fe8168(unaff_x19 + 2,&stack0x00000028);
        return;
      }
    }
    uVar5 = FUN_0587c704(&stack0x00000028,*unaff_x27);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078ad680();
    lVar8 = *(long *)(unaff_x20 + 0x28);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),uVar5,*(undefined8 *)(lVar8 + 0x28))
      ;
    }
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xfffffffe;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar5,*unaff_x25);
  }
  else {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03b79cbc(param_1);
    }
    puVar4 = (undefined8 *)__cxa_begin_catch();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_08488858);
    uVar6 = thunk_FUN_03aed0c4(uVar5,*(undefined8 *)*puVar4);
    if ((uVar6 & 1) == 0) {
      puVar10 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar10 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar10,&PTR_PTR_07fde6e8,0);
    }
    uVar5 = *puVar4;
    *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000018 * 8) = uVar5;
    in_stack_00000018 = in_stack_00000018 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    *(undefined8 *)(unaff_x19 + 10) = 0;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    lVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<NetworkClient>_TypeInfo);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar9 = thunk_FUN_03af1434(System_Collections_Generic_List<OutRec>_TypeInfo);
    FUN_05338d34(unaff_x19 + 2,uVar5,uVar9);
  }
  return;
}


