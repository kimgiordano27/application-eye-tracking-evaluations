/*
FUNCTION_NAME: FUN_034698b0
ENTRY_POINT: 034698b0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_034698b0(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  long local_60;
  undefined1 auStack_54 [4];
  
  if ((DAT_0412d80e & 1) == 0) {
    FUN_01ab69ac(System_Net_Security_SslClientAuthenticationOptions_TypeInfo);
    FUN_01ab69ac(Mono_Globalization_Unicode_SortKeyBuffer_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cdab70);
    FUN_01ab69ac(PTR_DAT_03ccf9c8);
    FUN_01ab69ac(Unity_Serialization_Json_SerializedArrayView_TypeInfo);
    FUN_01ab69ac(System_Net_Security_SslStream_TypeInfo);
    FUN_01ab69ac(
                UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                );
    FUN_01ab69ac(Unity_XR_CoreUtils_ScriptableSettingsBase_TypeInfo);
    FUN_01ab69ac(Crosstales_BWF_Data_Source_TypeInfo);
    FUN_01ab69ac(System_Security_SecurityDocument_TypeInfo);
    FUN_01ab69ac(System_Collections_Stack_TypeInfo);
    FUN_01ab69ac(UnityEngine_UIElements_EventBase<MouseEnterEvent>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc3128);
    DAT_0412d80e = 1;
  }
  local_60 = 0;
  uVar7 = FUN_03464ebc(param_1);
  puVar2 = PTR_DAT_03cdab70;
  if ((uVar7 & 1) == 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
    uVar8 = thunk_FUN_01a89e68();
    uVar13 = thunk_FUN_01a6ca08(Mono_CSharp_StackAlloc_TypeInfo);
    FUN_026b274c(uVar8,uVar13,0);
    uVar13 = thunk_FUN_01a6ca08(System_Runtime_Remoting_Messaging_StackBuilderSink_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar8,uVar13);
  }
  uVar8 = FUN_0346a884(param_1);
  plVar9 = (long *)thunk_FUN_01a89d6c(uVar8,*(undefined8 *)puVar2);
  uVar8 = FUN_034647a8(param_1);
  puVar3 = UnityEngine_UIElements_EventBase<MouseEnterEvent>_TypeInfo;
  if (plVar9 == (long *)0x0) {
    FUN_018748a8(uVar8);
    uVar13 = thunk_FUN_01a6ca08(PTR_DAT_03ccf9c8);
    uVar8 = FUN_018856b8(7,uVar13,uVar8);
    uVar13 = thunk_FUN_01a6ca08(Mono_CSharp_StackFieldExpr_TypeInfo);
    uVar8 = FUN_025b1328(uVar13,uVar8,0);
    thunk_FUN_01a6ca08(PTR_DAT_03cccd48);
    uVar13 = thunk_FUN_01a89e68();
    FUN_0276eae4(uVar13,uVar8,0);
    uVar8 = thunk_FUN_01a6ca08(System_Runtime_Remoting_Messaging_StackBuilderSink_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar13,uVar8);
  }
  if (*(int *)(*(long *)UnityEngine_UIElements_EventBase<MouseEnterEvent>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  plVar10 = (long *)FUN_0346f84c(uVar8);
  plVar11 = (long *)FUN_034647a8(param_1);
  puVar1 = PTR_DAT_03ccf9c8;
  if (plVar11 != (long *)0x0) {
    lVar14 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar7 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03ccf9c8) {
          puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03469a44;
        }
        uVar7 = uVar7 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar7 != 0);
    }
    puVar12 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)PTR_DAT_03ccf9c8,0);
LAB_03469a44:
    lVar14 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (lVar14 != 0) {
      uVar7 = FUN_025bca14(lVar14,*(undefined8 *)PTR_DAT_03cc3128,0);
      plVar11 = (long *)FUN_034647a8(param_1);
      if (plVar11 != (long *)0x0) {
        lVar15 = *plVar11;
        lVar14 = *(long *)puVar1;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar14) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03469ac8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar12 = (undefined8 *)FUN_01a472ec(plVar11,lVar14,0);
LAB_03469ac8:
        plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar7 & 1) != 0) {
          if (plVar11 == (long *)0x0) goto LAB_03469d80;
          uVar4 = FUN_025c2f58(plVar11,0x5b,0);
          plVar11 = (long *)FUN_034647a8(param_1);
          if (plVar11 == (long *)0x0) goto LAB_03469d80;
          lVar15 = *plVar11;
          lVar14 = *(long *)puVar1;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03469b48;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec(plVar11,lVar14,0);
LAB_03469b48:
          lVar14 = (*(code *)*puVar12)(plVar11,puVar12[1]);
          if (lVar14 == 0) goto LAB_03469d80;
          plVar11 = (long *)FUN_025bfca8(lVar14,uVar4,0);
        }
        if (plVar11 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar11 + 0x158))(plVar11,*(undefined8 *)(*plVar11 + 0x160));
          lVar15 = *plVar9;
          lVar14 = *(long *)puVar2;
          uVar7 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar7 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar14) {
                puVar12 = (undefined8 *)(lVar15 + (long)(*piVar17 + 6) * 0x10 + 0x138);
                goto LAB_03469bc8;
              }
              uVar7 = uVar7 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar7 != 0);
          }
          puVar12 = (undefined8 *)FUN_01a472ec(plVar9,lVar14,6);
LAB_03469bc8:
          uVar5 = (*(code *)*puVar12)(plVar9,puVar12[1]);
          if (plVar10 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar10 + 0x158))(plVar10,*(undefined8 *)(*plVar10 + 0x160));
            lVar14 = *(long *)puVar3;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78(lVar14);
              lVar14 = *(long *)puVar3;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x40);
            if (lVar14 != 0) {
              uVar7 = FUN_0219f8b8(lVar14,plVar10,&local_60,
                                   *(undefined8 *)Mono_Globalization_Unicode_SortKeyBuffer_TypeInfo)
              ;
              if ((uVar7 & 1) == 0) {
                lVar14 = *(long *)puVar3;
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)puVar3;
                }
                lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x40);
                lVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                                             Unity_XR_CoreUtils_ScriptableSettingsBase_TypeInfo);
                Animancer_AnimancerState__OnSetIsPlaying
                          (lVar14,*(undefined8 *)
                                   UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemWrapper_TypeInfo
                          );
                if ((lVar14 == 0) ||
                   (FUN_01b5f01c(lVar14,plVar9,
                                 *(undefined8 *)
                                  Unity_Serialization_Json_SerializedArrayView_TypeInfo),
                   lVar15 == 0)) goto LAB_03469d80;
                FUN_0219b9a4(lVar15,plVar10,lVar14,
                             *(undefined8 *)
                              System_Net_Security_SslClientAuthenticationOptions_TypeInfo);
              }
              else {
                if (local_60 == 0) goto LAB_03469d80;
                uVar7 = FUN_02216960(local_60,plVar9,
                                     *(undefined8 *)System_Net_Security_SslStream_TypeInfo);
                if ((uVar7 & 1) == 0) {
                  if (local_60 == 0) goto LAB_03469d80;
                  FUN_01b5f01c(local_60,plVar9,
                               *(undefined8 *)Unity_Serialization_Json_SerializedArrayView_TypeInfo)
                  ;
                }
              }
              lVar14 = *(long *)puVar3;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *(long *)puVar3;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
              if (lVar14 != 0) {
                uStack_6c = 0;
                local_78 = uVar4;
                uStack_74 = uVar6;
                local_70 = uVar5;
                local_68 = param_2;
                uVar7 = FUN_0225e404(lVar14,plVar9,&local_78,
                                     *(undefined8 *)System_Collections_Stack_TypeInfo);
                if ((uVar7 & 1) != 0) {
                  lVar14 = *(long *)puVar3;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                    lVar14 = *(long *)puVar3;
                  }
                  FUN_0226d504(*(long *)(lVar14 + 0xb8) + 0x12,auStack_54,
                               *(undefined8 *)Crosstales_BWF_Data_Source_TypeInfo);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03469d80:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


