/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_unset_focus_t_base__set
ENTRY_POINT: 078af75c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_unset_focus_t_base__set
               (void)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar3 = FUN_035255bc();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar3 = FUN_035255bc();
  if (*(int *)(lVar3 + 0x8c) == 6) {
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
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000020;
      thunk_FUN_03afed3c(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffe1f0(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    FUN_0666e9a8(&stack0x00000020,0);
LAB_078af840:
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_06f3f220(*(long *)(unaff_x19 + 10),0);
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_06768320(0x4024000000000000,0);
    uVar4 = Newtonsoft_Json_Schema_JsonSchema__get_AllowAdditionalProperties(uVar5,uVar6,0);
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 != 0) {
        FUN_078ad680();
        lVar3 = *(long *)(unaff_x20 + 0x30);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        }
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar5 = thunk_FUN_03ac74bc();
        uVar6 = thunk_FUN_03af1434(System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
        FUN_078bbac4(uVar5,uVar6,0x15,0);
        uVar6 = thunk_FUN_03af1434(System_Collections_Generic_List<PersistentCall>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5,uVar6);
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
      plVar9 = *(long **)(unaff_x20 + 0x70);
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x38);
      lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      thunk_FUN_078c4250(lVar3,0);
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x20);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x38);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x10);
      thunk_FUN_03afed3c();
      if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x18);
      thunk_FUN_03afed3c();
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar7 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar8 + 8) * 0x10 + 0x138);
            goto LAB_078af554;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_03ac43c4(plVar9,*(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo
                            ,8);
LAB_078af554:
      lVar3 = (*(code *)*puVar2)(plVar9,uVar5,lVar3,puVar2[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000028 =
           FUN_058b71ec(lVar3,*(undefined8 *)
                               System_Collections_Generic_List<ParticleSystem>_TypeInfo);
      uVar4 = FUN_0587c6c4(&stack0x00000028,
                           *(undefined8 *)
                            System_Collections_Generic_List<ParameterExpression>_TypeInfo);
      if ((uVar4 & 1) == 0) {
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
    if (unaff_x20 != 0) {
      FUN_078ad680();
      lVar3 = *(long *)(unaff_x20 + 0x28);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),uVar5,*(undefined8 *)(lVar3 + 0x28));
      }
      *(undefined8 *)(unaff_x19 + 10) = 0;
      *unaff_x19 = 0xfffffffe;
      thunk_FUN_03afed3c(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_05338ae8(unaff_x19 + 2,uVar5,*unaff_x25);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_078ad680();
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
  if (unaff_x21 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_08488858 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08488858)
       ) {
      lVar3 = FUN_0666c8dc();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_0666c99c(lVar3,0);
      goto LAB_078af840;
    }
  }
  thunk_FUN_03af1434(System_Collections_Generic_List<PersistentCall>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884();
}


