/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_base__set
ENTRY_POINT: 078af324
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_base__set(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  long *plVar13;
  int iVar14;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_03a8a718(System_Collections_Generic_List<NetworkClient>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08488858);
  FUN_03a8a718(System_Collections_Generic_List<PanelRaycaster>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
  FUN_03a8a718(PTR_DAT_08493908);
  FUN_03a8a718(PTR_DAT_0848b900);
  FUN_03a8a718(System_Collections_Generic_List<PanelSettings>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ParameterExpression>_TypeInfo);
  FUN_03a8a718(System_Collections_Generic_List<ParticleSystem>_TypeInfo);
  FUN_03a8a718(PTR_DAT_0848a698);
  *(undefined1 *)(unaff_x20 + 0x90b) = 1;
  puVar4 = System_Collections_Generic_List<PanelSettings>_TypeInfo;
  puVar3 = System_Collections_Generic_List<object>_TypeInfo;
  puVar2 = System_Collections_Generic_List<NetworkClient>_TypeInfo;
  puVar1 = PTR_DAT_0848a698;
  iVar14 = *unaff_x19;
  lVar12 = *(long *)(unaff_x19 + 8);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0xe);
      iVar14 = -1;
      unaff_x19[0xe] = 0;
      unaff_x19[0xf] = 0;
      *unaff_x19 = -1;
      FUN_0666e9a8(&stack0x00000020,0);
    }
    else {
      lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848b900);
      FUN_06f3f1b0(lVar5,0);
      plVar13 = (long *)(unaff_x19 + 10);
      *plVar13 = lVar5;
      thunk_FUN_03afed3c(plVar13,lVar5);
      if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_06f3f1b8(*plVar13,0);
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = FUN_06f3f220(*(long *)(unaff_x19 + 10),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar8 = FUN_06768320(0x4024000000000000,0);
    uVar9 = Newtonsoft_Json_Schema_JsonSchema__get_AllowAdditionalProperties(uVar7,uVar8,0);
    if ((uVar9 & 1) == 0) {
      if (lVar12 != 0) {
        FUN_078ad680(lVar12,5);
        lVar12 = *(long *)(lVar12 + 0x30);
        if (lVar12 != 0) {
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
        }
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar7 = thunk_FUN_03ac74bc();
        uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
        FUN_078bbac4(uVar7,uVar8,0x15,0);
        uVar8 = thunk_FUN_03af1434(System_Collections_Generic_List<PersistentCall>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar7,uVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (iVar14 != 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(lVar12 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar13 = *(long **)(lVar12 + 0x70);
      uVar7 = *(undefined8 *)(*(long *)(lVar12 + 0x50) + 0x38);
      lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      thunk_FUN_078c4250(lVar5,0);
      if (*(long *)(lVar12 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(*(long *)(lVar12 + 0x58) + 0x20);
      thunk_FUN_03afed3c();
      if (*(long *)(lVar12 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*(long *)(lVar12 + 0x58) + 0x38);
      thunk_FUN_03afed3c();
      if (*(long *)(lVar12 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(*(long *)(lVar12 + 0x58) + 0x10);
      thunk_FUN_03afed3c();
      if (*(long *)(lVar12 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(*(long *)(lVar12 + 0x58) + 0x18);
      thunk_FUN_03afed3c();
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar10 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_078af554;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)
                                     System_Collections_Generic_List<PanelRaycaster>_TypeInfo,8);
LAB_078af554:
      lVar5 = (*(code *)*puVar6)(plVar13,uVar7,lVar5,puVar6[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      in_stack_00000028 =
           FUN_058b71ec(lVar5,*(undefined8 *)
                               System_Collections_Generic_List<ParticleSystem>_TypeInfo);
      uVar9 = FUN_0587c6c4(&stack0x00000028,
                           *(undefined8 *)
                            System_Collections_Generic_List<ParameterExpression>_TypeInfo);
      if ((uVar9 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fe8168(unaff_x19 + 2,&stack0x00000028);
        return;
      }
      goto LAB_078af598;
    }
  }
  in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  *unaff_x19 = -1;
LAB_078af598:
  uVar7 = FUN_0587c704(&stack0x00000028,*(undefined8 *)puVar4);
  if (lVar12 != 0) {
    FUN_078ad680(lVar12,6);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))
                (*(undefined8 *)(lVar12 + 0x40),uVar7,*(undefined8 *)(lVar12 + 0x28));
    }
    piVar11 = unaff_x19 + 10;
    piVar11[0] = 0;
    piVar11[1] = 0;
    *unaff_x19 = -2;
    thunk_FUN_03afed3c(piVar11,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


