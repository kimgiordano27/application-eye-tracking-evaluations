/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_session_handle_set
ENTRY_POINT: 078af424
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_session_handle_set
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  undefined8 in_stack_00000028;
  
  thunk_FUN_03afed3c();
  if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_06f3f1b8(*unaff_x22,0);
  if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar2 = FUN_06f3f220(*(long *)(unaff_x19 + 10),0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar3 = FUN_06768320(0x4024000000000000,0);
  uVar4 = Newtonsoft_Json_Schema_JsonSchema__get_AllowAdditionalProperties(uVar2,uVar3,0);
  if ((uVar4 & 1) == 0) {
    if (unaff_x20 != 0) {
      FUN_078ad680();
      lVar6 = *(long *)(unaff_x20 + 0x30);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
      thunk_FUN_03af1434(PTR_DAT_08493908);
      uVar2 = thunk_FUN_03ac74bc();
      uVar3 = thunk_FUN_03af1434(System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
      FUN_078bbac4(uVar2,uVar3,0x15,0);
      uVar3 = thunk_FUN_03af1434(System_Collections_Generic_List<PersistentCall>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar2,uVar3);
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
    plVar8 = *(long **)(unaff_x20 + 0x70);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 0x38);
    lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
    thunk_FUN_078c4250(lVar6,0);
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x20);
    thunk_FUN_03afed3c();
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x38);
    thunk_FUN_03afed3c();
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x10);
    thunk_FUN_03afed3c();
    if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x18);
    thunk_FUN_03afed3c();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
          goto LAB_078af554;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_03ac43c4(plVar8,*(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo,8
                         );
LAB_078af554:
    lVar6 = (*(code *)*puVar1)(plVar8,uVar2,lVar6,puVar1[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar6,*(undefined8 *)System_Collections_Generic_List<ParticleSystem>_TypeInfo)
    ;
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
  uVar2 = FUN_0587c704(&stack0x00000028,*unaff_x27);
  if (unaff_x20 != 0) {
    FUN_078ad680();
    lVar6 = *(long *)(unaff_x20 + 0x28);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),uVar2,*(undefined8 *)(lVar6 + 0x28))
      ;
    }
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xfffffffe;
    thunk_FUN_03afed3c(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar2,*unaff_x25);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


