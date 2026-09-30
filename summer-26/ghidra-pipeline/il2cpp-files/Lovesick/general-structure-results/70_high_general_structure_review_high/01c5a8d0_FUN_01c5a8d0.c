/*
FUNCTION_NAME: FUN_01c5a8d0
ENTRY_POINT: 01c5a8d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_20;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01c5ae74) */

void FUN_01c5a8d0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int local_d4;
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
  
  puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  local_68 = param_2;
  if ((DAT_0377eb4b & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1154);
    thunk_FUN_00d48444(StringLiteral_4901);
                    /* try { // try from 01c5a92c to 01d5a99b has its CatchHandler @ 01c5a92c
                       catch() { ... } // from try @ 01c5a92c with catch @ 01c5a92c
                       catch() { ... } // from try @ 01c5aa6c with catch @ 01c5a92c
                       catch() { ... } // from try @ 01c5aab8 with catch @ 01c5a92c
                       catch() { ... } // from try @ 01c5ab50 with catch @ 01c5a92c
                       catch() { ... } // from try @ 01c5ab5c with catch @ 01c5a92c */
    thunk_FUN_00d48444(System_Net_FileWebRequest_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(UnityEngine_ProBuilder_WingedEdge_<>c__DisplayClass32_0_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__);
    thunk_FUN_00d48444(PTR_DAT_033ead30);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_MethodBuilder_GetCustomAttributes__);
    thunk_FUN_00d48444(System_Text_RegularExpressions_RegexMatchTimeoutException_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Create__
                      );
    thunk_FUN_00d48444(System_Text_RegularExpressions_RegexCharClass_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13732);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass23_0_<DOFloat>b__0__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<IPointable>__);
    thunk_FUN_00d48444(Method_System_Security_Cryptography_TripleDES_IsWeakKey__);
    DAT_0377eb4b = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_84[0] = '\0';
  local_90 = 0;
  local_98 = 0;
  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(param_1,0,0);
  puVar1 = StringLiteral_9688;
  puVar9 = UnityEngine_ProBuilder_WingedEdge_<>c__DisplayClass32_0_TypeInfo;
  if ((uVar4 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      plVar5 = (long *)thunk_FUN_00d6225c(param_1,*(undefined8 *)
                                                                                                      
                                                  UnityEngine_ProBuilder_WingedEdge_<>c__DisplayClass32_0_TypeInfo
                                         );
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01c5aaa4;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar5,*(long *)puVar9,0);
LAB_01c5aaa4:
        lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar10 != 0) {
          lVar11 = *param_2;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                goto LAB_01c5ab08;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,8);
LAB_01c5ab08:
          lVar11 = (*(code *)*puVar6)(param_2,puVar6[1]);
          if ((lVar11 == 0) || (lVar11 = FUN_01c25128(lVar11,0), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01c37e70(lVar11,lVar10,0);
        }
      }
      lVar10 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x26) * 0x10 + 0x138);
            goto LAB_01c5ab80;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,0x26);
LAB_01c5ab80:
      (*(code *)*puVar6)(param_2,puVar6[1]);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar7 = thunk_FUN_00d93c64(param_1,0);
      plVar5 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = *local_68;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_01c5abf8;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(local_68,*(long *)puVar1,8);
LAB_01c5abf8:
      lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = FUN_01c25128(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar8 = FUN_01c25190(lVar10,0);
      if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar10 = FUN_01c252c8(uVar7,uVar8,0);
      uVar2 = local_98;
      local_d4 = 0;
      local_78 = param_1;
LAB_01c5ac84:
      do {
        plVar5 = local_68;
        if (local_68 == (long *)0x0) {
          local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *local_68;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
              goto LAB_01c5acdc;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(local_68,*(long *)puVar1,0x10);
LAB_01c5acdc:
        uVar3 = (*(code *)*puVar6)(plVar5,&local_70,puVar6[1]);
        if (((uVar3 & 0xff) < 0x10) && ((1 << (ulong)(uVar3 & 0x1f) & 0xa100U) != 0)) {
          return;
        }
        local_80 = 0;
        local_84[0] = '\0';
        if ((uVar3 & 0xff) != 0) {
          uVar4 = FUN_015ff8a0(local_70,0);
          plVar5 = local_68;
          if ((uVar4 & 1) != 0) {
            if (local_68 == (long *)0x0) {
              local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar10 = *local_68;
            uVar4 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar4 == 0) goto LAB_01c5aec0;
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_01c5aea8;
          }
          if (lVar10 == 0) {
            local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar4 = FUN_0129eff4(lVar10,local_70,&local_80,*(undefined8 *)StringLiteral_1154);
          uVar7 = local_80;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_InputSystem_UI_VirtualMouseInput_OnAfterInputUpdate__ +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar11 = FUN_01c5be40(uVar7);
            if (lVar11 != 0) goto LAB_01c5af28;
          }
          local_84[0] = '\x01';
LAB_01c5b1a0:
          plVar5 = local_68;
          if (local_68 == (long *)0x0) {
            local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar11 = *local_68;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar4 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
                goto LAB_01c5b1f8;
              }
              uVar4 = uVar4 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_00d59724(local_68,*(long *)puVar1,0x25);
LAB_01c5b1f8:
          (*(code *)*puVar6)(plVar5,puVar6[1]);
          goto LAB_01c5ac84;
        }
        uVar7 = thunk_FUN_00d93c64(param_1,0);
        if (*(int *)(*(long *)Method_System_Collections_Generic_List<Collider>_Clear__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_01c4b4e0(uVar7);
        uVar7 = FUN_01600424(*(undefined8 *)System_Text_RegularExpressions_RegexCharClass_TypeInfo,
                             uVar7,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Create__
                             ,0);
        local_90 = uVar7;
        if (local_68 == (long *)0x0) {
          local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar5 = (long *)thunk_FUN_00d93c64(local_68,0);
        if (plVar5 == (long *)0x0) {
          local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar8 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        uVar7 = FUN_0160073c(uVar7,*(undefined8 *)
                                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass23_0_<DOFloat>b__0__
                             ,uVar8,*(undefined8 *)PTR_DAT_033ead30,0);
        plVar5 = local_68;
        pplStack_c0 = &local_68;
        local_c8 = 0;
        local_b0 = local_84;
        local_b8 = &local_90;
        local_90 = uVar7;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *local_68;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar12 + 10) * 0x10 + 0x138);
              goto LAB_01c5ae34;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(local_68,*(long *)puVar1,10);
LAB_01c5ae34:
        uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        local_90 = FUN_01600424(uVar7,*(undefined8 *)StringLiteral_13732,uVar8,0);
        FUN_00c3c4bc(&local_c8);
        lVar11 = 0;
LAB_01c5af28:
        uVar7 = local_80;
        if (local_84[0] != '\0') goto LAB_01c5b1a0;
        if (*(int *)(*(long *)System_Net_FileWebRequest_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar7 = FUN_01c258c8(uVar7,0);
        if (*(int *)(*(long *)Method_UnityEngine_XR_ARFoundation_ARAnchorManager_TryRemoveAnchor__ +
                    0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar5 = (long *)FUN_01c25a14(uVar7,0);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,local_68,*(undefined8 *)(*plVar5 + 0x180));
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(lVar11 + 0x18))
                  (*(undefined8 *)(lVar11 + 0x40),&local_78,uVar7,*(undefined8 *)(lVar11 + 0x28));
        local_d4 = local_d4 + 1;
        if (local_d4 == 0x3e9) {
          FUN_01c5b35c();
          return;
        }
      } while( true );
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
    ;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar7 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar9 = StringLiteral_12471;
  }
  uVar8 = thunk_FUN_00d48444(puVar9);
  FUN_016ec5b8(uVar7,uVar8,0);
  uVar8 = thunk_FUN_00d48444(StringLiteral_3739);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar7,uVar8);
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar12 = piVar12 + 4;
    if (uVar4 == 0) break;
LAB_01c5aea8:
    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
      goto LAB_01c5afd8;
    }
  }
LAB_01c5aec0:
  puVar6 = (undefined8 *)FUN_00d59724(local_68,*(long *)puVar1,8);
LAB_01c5afd8:
  lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if (lVar10 == 0) {
    local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar10 = FUN_01c25128(lVar10,0);
  if (lVar10 != 0) {
    FUN_01c254c8(lVar10,0);
    FUN_01c69fac(PTR_DAT_033ea8a0);
    return;
  }
  local_98 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


