/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_focus_t_base__get
ENTRY_POINT: 078af3a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_focus_t_base__get(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int *unaff_x19;
  long lVar11;
  long *plVar12;
  long unaff_x26;
  long *plVar13;
  int iVar14;
  undefined4 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  puVar3 = System_Collections_Generic_List<PanelSettings>_TypeInfo;
  puVar2 = System_Collections_Generic_List<object>_TypeInfo;
  puVar1 = System_Collections_Generic_List<NetworkClient>_TypeInfo;
  plVar13 = *(long **)(unaff_x26 + 0x698);
  iVar14 = *unaff_x19;
  lVar11 = *(long *)(unaff_x19 + 8);
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000018 = 0;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      uStack0000000000000020 = *(undefined8 *)(unaff_x19 + 0xe);
      iVar14 = -1;
      unaff_x19[0xe] = 0;
      unaff_x19[0xf] = 0;
      *unaff_x19 = -1;
      FUN_0666e9a8(&stack0x00000020,0);
    }
    else {
      lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848b900);
      FUN_06f3f1b0(lVar4,0);
      plVar12 = (long *)(unaff_x19 + 10);
      *plVar12 = lVar4;
      thunk_FUN_03afed3c(plVar12,lVar4);
      if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_06f3f1b8(*plVar12,0);
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = FUN_06f3f220(*(long *)(unaff_x19 + 10),0);
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar7 = FUN_06768320(0x4024000000000000,0);
    uVar8 = Newtonsoft_Json_Schema_JsonSchema__get_AllowAdditionalProperties(uVar6,uVar7,0);
    if ((uVar8 & 1) == 0) {
      if (lVar11 != 0) {
        FUN_078ad680(lVar11,5);
        lVar11 = *(long *)(lVar11 + 0x30);
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
        }
        thunk_FUN_03af1434(PTR_DAT_08493908);
        uVar6 = thunk_FUN_03ac74bc();
        uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<PhysicsShape2D>_TypeInfo);
        FUN_078bbac4(uVar6,uVar7,0x15,0);
        uVar7 = thunk_FUN_03af1434(System_Collections_Generic_List<PersistentCall>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar6,uVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (iVar14 != 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(long *)(lVar11 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar13 = *(long **)(lVar11 + 0x70);
      uVar6 = *(undefined8 *)(*(long *)(lVar11 + 0x50) + 0x38);
      lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_List<PerformanceBottleneck>_TypeInfo);
      thunk_FUN_078c4250(lVar4,0);
      if (*(long *)(lVar11 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x20);
      thunk_FUN_03afed3c();
      if (*(long *)(lVar11 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x38);
      thunk_FUN_03afed3c();
      if (*(long *)(lVar11 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x10);
      thunk_FUN_03afed3c();
      if (*(long *)(lVar11 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(*(long *)(lVar11 + 0x58) + 0x18);
      thunk_FUN_03afed3c();
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar9 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<PanelRaycaster>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 8) * 0x10 + 0x138);
            goto LAB_078af554;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)
                                     System_Collections_Generic_List<PanelRaycaster>_TypeInfo,8);
LAB_078af554:
      lVar4 = (*(code *)*puVar5)(plVar13,uVar6,lVar4,puVar5[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uStack0000000000000028 =
           FUN_058b71ec(lVar4,*(undefined8 *)
                               System_Collections_Generic_List<ParticleSystem>_TypeInfo);
      uVar8 = FUN_0587c6c4(&stack0x00000028,
                           *(undefined8 *)
                            System_Collections_Generic_List<ParameterExpression>_TypeInfo);
      if ((uVar8 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0xc) = uStack0000000000000028;
        thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_03fe8168(unaff_x19 + 2,&stack0x00000028);
        return;
      }
      goto LAB_078af598;
    }
  }
  uStack0000000000000028 = *(undefined8 *)(unaff_x19 + 0xc);
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  *unaff_x19 = -1;
LAB_078af598:
  uVar6 = FUN_0587c704(&stack0x00000028,*(undefined8 *)puVar3);
  if (lVar11 != 0) {
    FUN_078ad680(lVar11,6);
    lVar11 = *(long *)(lVar11 + 0x28);
    if (lVar11 != 0) {
      (**(code **)(lVar11 + 0x18))
                (*(undefined8 *)(lVar11 + 0x40),uVar6,*(undefined8 *)(lVar11 + 0x28));
    }
    piVar10 = unaff_x19 + 10;
    piVar10[0] = 0;
    piVar10[1] = 0;
    *unaff_x19 = -2;
    thunk_FUN_03afed3c(piVar10,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


