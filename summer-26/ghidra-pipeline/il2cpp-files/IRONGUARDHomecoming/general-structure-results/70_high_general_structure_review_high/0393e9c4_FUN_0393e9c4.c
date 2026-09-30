/*
FUNCTION_NAME: FUN_0393e9c4
ENTRY_POINT: 0393e9c4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0393ef60) */

void FUN_0393e9c4(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int local_cc;
  undefined8 local_c8;
  long **pplStack_c0;
  undefined8 *local_b8;
  char *local_b0;
  undefined4 local_98;
  undefined8 local_90;
  char local_84 [4];
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  long *local_68;
  
  puVar10 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  local_68 = param_2;
  if ((DAT_04838343 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(StringLiteral_3884);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(StringLiteral_2862);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__)
    ;
    thunk_FUN_01efb3a4(StringLiteral_3899);
    thunk_FUN_01efb3a4(StringLiteral_3900);
    thunk_FUN_01efb3a4(StringLiteral_3901);
    thunk_FUN_01efb3a4(StringLiteral_3902);
    thunk_FUN_01efb3a4(StringLiteral_3903);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__);
    DAT_04838343 = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_84[0] = '\0';
  local_90 = 0;
  local_98 = 0;
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (param_1,0,0);
  puVar1 = StringLiteral_3884;
  puVar10 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  if ((uVar4 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      plVar5 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)StringLiteral_3884);
      if (plVar5 != (long *)0x0) {
        lVar11 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0393eb98;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_0393eb98:
        lVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar11 != 0) {
          lVar12 = *param_2;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                goto LAB_0393ebfc;
              }
              uVar4 = uVar4 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,8);
LAB_0393ebfc:
          lVar12 = (*(code *)*puVar6)(param_2,puVar6[1]);
          if ((lVar12 == 0) || (lVar12 = FUN_0390b368(lVar12,0), lVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0391d334(lVar12,lVar11,0);
        }
      }
      lVar11 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0x26) * 0x10 + 0x138);
            goto LAB_0393ec74;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(param_2,*(long *)puVar10,0x26);
LAB_0393ec74:
      (*(code *)*puVar6)(param_2,puVar6[1]);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = thunk_FUN_01ecaf38(param_1,0);
      plVar5 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *local_68;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 8) * 0x10 + 0x138);
            goto LAB_0393ecec;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(local_68,*(long *)puVar10,8);
LAB_0393ecec:
      lVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b368(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar8 = FUN_0390b3d4(lVar11,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = FUN_0390b514(uVar7,uVar8,0);
      uVar2 = local_98;
      puVar1 = Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__;
      local_cc = 0;
      local_78 = param_1;
LAB_0393ed70:
      do {
        plVar5 = local_68;
        if (local_68 == (long *)0x0) {
          local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *local_68;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x10) * 0x10 + 0x138);
              goto LAB_0393edc8;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(local_68,*(long *)puVar10,0x10);
LAB_0393edc8:
        uVar3 = (*(code *)*puVar6)(plVar5,&local_70,puVar6[1]);
        if (((uVar3 & 0xff) < 0x10) && ((1 << (ulong)(uVar3 & 0x1f) & 0xa100U) != 0)) {
          return;
        }
        local_80 = 0;
        local_84[0] = '\0';
        if ((uVar3 & 0xff) != 0) {
          uVar4 = FUN_0340eec4(local_70,0);
          plVar5 = local_68;
          if ((uVar4 & 1) == 0) {
            if (lVar11 == 0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar4 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                              (lVar11,local_70,&local_80,*(undefined8 *)puVar1);
            uVar7 = local_80;
            if ((uVar4 & 1) != 0) {
              if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              lVar12 = FUN_0393fdc0(uVar7);
              if (lVar12 != 0) goto LAB_0393f00c;
            }
          }
          else {
            if (local_68 == (long *)0x0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = *local_68;
            uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
                  puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                  goto LAB_0393f0bc;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(local_68,*(long *)puVar10,8);
LAB_0393f0bc:
            lVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (lVar12 == 0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = FUN_0390b368(lVar12,0);
            if (lVar12 == 0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = FUN_0390b70c(lVar12,0);
            lVar9 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,5);
            if (lVar9 == 0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            if (*(int *)(lVar9 + 0x18) == 0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar9 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
            thunk_FUN_01f51358();
            local_b8 = (undefined8 *)CONCAT71(local_b8._1_7_,(char)uVar3);
            local_c8 = *(undefined8 *)
                        Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            pplStack_c0 = (long **)0xffffffffffffffff;
            uVar7 = FUN_0359ff90(&local_c8,0);
            if (*(uint *)(lVar9 + 0x18) < 2) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar9 + 0x28) = uVar7;
            thunk_FUN_01f51358();
            if (*(uint *)(lVar9 + 0x18) < 3) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar9 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__;
            thunk_FUN_01f51358();
            plVar5 = local_68;
            if (local_68 == (long *)0x0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar13 = *local_68;
            uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar4 != 0) {
              piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
                  puVar6 = (undefined8 *)(lVar13 + (long)(*piVar14 + 5) * 0x10 + 0x138);
                  goto LAB_0393f1d8;
                }
                uVar4 = uVar4 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238(local_68,*(long *)puVar10,5);
LAB_0393f1d8:
            uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (*(uint *)(lVar9 + 0x18) < 4) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar9 + 0x38) = uVar7;
            thunk_FUN_01f51358();
            if (*(uint *)(lVar9 + 0x18) < 5) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar9 + 0x40) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
            thunk_FUN_01f51358();
            uVar7 = FUN_0340efe8(lVar9,0);
            if (lVar12 == 0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c(uVar7,uVar7);
            }
            FUN_0390b840(lVar12,uVar7,0);
          }
          local_84[0] = '\x01';
LAB_0393f248:
          plVar5 = local_68;
          if (local_68 == (long *)0x0) {
            local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = *local_68;
          uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar4 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
                puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 0x25) * 0x10 + 0x138);
                goto LAB_0393f2a0;
              }
              uVar4 = uVar4 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(local_68,*(long *)puVar10,0x25);
LAB_0393f2a0:
          (*(code *)*puVar6)(plVar5,puVar6[1]);
          goto LAB_0393ed70;
        }
        uVar7 = thunk_FUN_01ecaf38(param_1,0);
        if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_0392f7cc(uVar7);
        uVar7 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3900,uVar7,
                             *(undefined8 *)StringLiteral_3899,0);
        local_90 = uVar7;
        if (local_68 == (long *)0x0) {
          local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar5 = (long *)thunk_FUN_01ecaf38(local_68,0);
        if (plVar5 == (long *)0x0) {
          local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        uVar7 = FUN_0340eee0(uVar7,*(undefined8 *)StringLiteral_3902,uVar8,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__
                             ,0);
        plVar5 = local_68;
        pplStack_c0 = &local_68;
        local_c8 = 0;
        local_b8 = &local_90;
        local_b0 = local_84;
        local_90 = uVar7;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *local_68;
        uVar4 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
              puVar6 = (undefined8 *)(lVar12 + (long)(*piVar14 + 10) * 0x10 + 0x138);
              goto LAB_0393ef20;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(local_68,*(long *)puVar10,10);
LAB_0393ef20:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        local_90 = FUN_0340ebc0(uVar7,*(undefined8 *)StringLiteral_3901,uVar8,0);
        FUN_01e54adc(&local_c8);
        lVar12 = 0;
LAB_0393f00c:
        uVar7 = local_80;
        if (local_84[0] != '\0') goto LAB_0393f248;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_0390bad0(uVar7,0);
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_0390bc14(uVar7,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,local_68,*(undefined8 *)(*plVar5 + 0x180));
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(lVar12 + 0x18))
                  (*(undefined8 *)(lVar12 + 0x40),&local_78,uVar7,*(undefined8 *)(lVar12 + 0x28));
        plVar5 = local_68;
        local_cc = local_cc + 1;
      } while (local_cc != 0x3e9);
      if (local_68 == (long *)0x0) {
        local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = *local_68;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar14 + 8) * 0x10 + 0x138);
            local_98 = uVar2;
            goto LAB_0393f438;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      local_98 = uVar2;
      puVar6 = (undefined8 *)FUN_01ecb238(local_68,*(long *)puVar10,8);
LAB_0393f438:
      lVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b368(lVar11,0);
      if (lVar11 != 0) {
        lVar11 = FUN_0390b70c(lVar11,0);
        if (lVar11 != 0) {
          FUN_0390b840(lVar11,*(undefined8 *)StringLiteral_3903,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    puVar10 = Method_UnityEngine_Networking_UnityWebRequest_set_method__;
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    puVar10 = StringLiteral_3863;
  }
  uVar8 = thunk_FUN_01efb3a4(puVar10);
  FUN_034efd20(uVar7,uVar8,0);
  uVar8 = thunk_FUN_01efb3a4(StringLiteral_3904);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar8);
}


