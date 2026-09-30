/*
FUNCTION_NAME: FUN_035a5a34
ENTRY_POINT: 035a5a34
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_13;validity_or_gating_hits_21;telemetry_or_network_hits_11;frame_or_lifecycle_behavior
*/


long FUN_035a5a34(long param_1,undefined8 *param_2,long param_3,int param_4,undefined4 param_5,
                 long *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_04537bcb & 1) == 0) {
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateTextFromValue__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateValueFromText__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_get_textEdition__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<int>_get_originalText__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<int>_get_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<int>_set_text__);
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<long>_get_originalText__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<long>_get_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<long>_set_text__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<float>_get_originalText__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<float>_get_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<float>_set_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>__ctor__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetMultiline__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetSingleLine__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_text__);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(Method_System_Threading_Tasks_Task<MqttClientConnectResult>_ConfigureAwait__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textEdition__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_textElement__
                );
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_set_isPasswordField__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_set_text__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<uint>_get_originalText__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<uint>_get_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<uint>_set_text__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<ulong>_get_originalText__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<ulong>_get_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<ulong>_set_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<double>_get_isDelayed__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<double>_get_textInputBase__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textEdition__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textInputBase__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<long>_get_textInputBase__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__);
    FUN_01c5d288(Method_UnityEngine_UIElements_TextInputBaseField<float>_get_textInputBase__);
    DAT_04537bcb = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetMultiline__;
  if (param_4 == 0) {
    lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                        Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetMultiline__
                              );
    if ((lVar3 == 0) &&
       (lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                            Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_text__
                                  ), lVar3 == 0)) {
      lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                          Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>__ctor__
                                );
      if ((lVar3 == 0) &&
         (lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                              Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetSingleLine__
                                    ), lVar3 == 0)) {
        param_4 = 0;
      }
      else {
        param_4 = 1;
      }
    }
    else {
      param_4 = 2;
    }
  }
  if (*param_6 == 0) {
    if (param_4 == 1) {
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_68 = param_2[5];
      local_70 = param_2[4];
      uStack_88 = param_2[1];
      local_90 = *param_2;
      lVar3 = FUN_023b400c(*(undefined8 *)(param_1 + 0x18),&local_90,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<uint>_get_originalText__
                          );
    }
    else {
      if (param_4 != 2) goto LAB_035a5d38;
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_68 = param_2[5];
      local_70 = param_2[4];
      uStack_88 = param_2[1];
      local_90 = *param_2;
      lVar3 = FUN_023b40fc(*(undefined8 *)(param_1 + 0x18),&local_90,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<uint>_get_text__
                          );
    }
    *param_6 = lVar3;
  }
LAB_035a5d38:
  lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)puVar1);
  puVar2 = Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>__ctor__;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                        Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>__ctor__
                              );
    puVar1 = Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_text__;
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                          Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_get_text__
                                );
      puVar2 = 
      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetSingleLine__;
      if (lVar3 == 0) {
        lVar3 = thunk_FUN_01c495e4(param_3,*(undefined8 *)
                                            Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<string>_SetSingleLine__
                                  );
        if (lVar3 == 0) {
          plVar8 = *(long **)(param_1 + 0x18);
          plVar11 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          if ((param_3 != 0) && (lVar3 = thunk_FUN_01c5d21c(param_3,0), plVar11 != (long *)0x0)) {
            if ((lVar3 != 0) &&
               (lVar5 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0)) {
              uVar13 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar13,0);
            }
            if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            plVar11[4] = lVar3;
            if (plVar8 != (long *)0x0) {
              lVar3 = *plVar8;
              uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
              uVar13 = *(undefined8 *)
                        Method_UnityEngine_UIElements_TextInputBaseField<long>_get_textInputBase__;
              if (uVar6 != 0) {
                piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
                    puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_035a6950;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_01c72498(plVar8,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035a6950:
              (*(code *)*puVar4)(plVar8,1,uVar13,plVar11,puVar4[1]);
              puVar1 = Method_System_Threading_Tasks_Task<MqttClientConnectResult>_ConfigureAwait__;
              lVar3 = *(long *)
                       Method_System_Threading_Tasks_Task<MqttClientConnectResult>_ConfigureAwait__;
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
                lVar3 = *(long *)puVar1;
              }
              return **(long **)(lVar3 + 0xb8);
            }
          }
          goto LAB_035a6a54;
        }
        if (param_4 == 2) {
          plVar11 = *(long **)(param_1 + 0x18);
          lVar5 = *(long *)PTR_DAT_0422f958;
          lVar3 = *(long *)(lVar5 + 0x38);
          if (lVar3 == 0) {
            FUN_01c723f0(lVar5);
            lVar3 = *(long *)(lVar5 + 0x38);
          }
          lVar3 = *(long *)(lVar3 + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01c72394();
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01c72394();
          }
          if (plVar11 == (long *)0x0) goto LAB_035a6a54;
          lVar5 = *plVar11;
          uVar13 = **(undefined8 **)(lVar3 + 0xb8);
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          uVar14 = *(undefined8 *)
                    Method_UnityEngine_UIElements_TextInputBaseField<float>_get_textInputBase__;
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_035a69a0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_01c72498(plVar11,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035a69a0:
          (*(code *)*puVar4)(plVar11,3,uVar14,uVar13,puVar4[1]);
          uStack_78 = param_2[3];
          uStack_80 = param_2[2];
          uStack_68 = param_2[5];
          local_70 = param_2[4];
          uStack_88 = param_2[1];
          local_90 = *param_2;
          lStack_b8 = param_6[1];
          local_c0 = *param_6;
          lStack_a8 = param_6[3];
          lStack_b0 = param_6[2];
          local_a0 = param_6[4];
          lVar3 = FUN_024497d0(param_1,&local_90,param_3,param_5,&local_c0,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textInputBase__
                              );
          uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<long>_get_text__
                                     );
          uVar14 = thunk_FUN_01c495e4(param_3,*(undefined8 *)puVar2);
          FUN_035abc88(uVar13,uVar14,0);
        }
        else {
          uStack_78 = param_2[3];
          uStack_80 = param_2[2];
          uStack_68 = param_2[5];
          local_70 = param_2[4];
          uStack_88 = param_2[1];
          local_90 = *param_2;
          lStack_b8 = param_6[1];
          local_c0 = *param_6;
          lStack_a8 = param_6[3];
          lStack_b0 = param_6[2];
          local_a0 = param_6[4];
          lVar3 = FUN_02449678(param_1,&local_90,param_3,param_5,&local_c0,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textEdition__
                               ,param_7,param_8,local_c0,lStack_b8,lStack_b0,lStack_a8,local_a0);
          uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<float>_set_text__
                                     );
          uVar14 = thunk_FUN_01c495e4(param_3,*(undefined8 *)puVar2);
          FUN_027a0fe0(uVar13,uVar14,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<long>_set_text__
                      );
        }
      }
      else if (param_4 == 1) {
        plVar11 = *(long **)(param_1 + 0x18);
        lVar5 = *(long *)PTR_DAT_0422f958;
        lVar3 = *(long *)(lVar5 + 0x38);
        if (lVar3 == 0) {
          FUN_01c723f0(lVar5);
          lVar3 = *(long *)(lVar5 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01c72394();
        }
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar3 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01c72394();
        }
        if (plVar11 == (long *)0x0) goto LAB_035a6a54;
        lVar5 = *plVar11;
        uVar13 = **(undefined8 **)(lVar3 + 0xb8);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar14 = *(undefined8 *)
                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_isDelayed__;
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_035a687c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01c72498(plVar11,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035a687c:
        (*(code *)*puVar4)(plVar11,3,uVar14,uVar13,puVar4[1]);
        uStack_78 = param_2[3];
        uStack_80 = param_2[2];
        uStack_68 = param_2[5];
        local_70 = param_2[4];
        uStack_88 = param_2[1];
        local_90 = *param_2;
        lStack_b8 = param_6[1];
        local_c0 = *param_6;
        lStack_a8 = param_6[3];
        lStack_b0 = param_6[2];
        local_a0 = param_6[4];
        lVar3 = FUN_02449678(param_1,&local_90,param_3,param_5,&local_c0,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textEdition__
                            );
        uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<long>_get_originalText__
                                   );
        uVar14 = thunk_FUN_01c495e4(param_3,*(undefined8 *)puVar1);
        FUN_035ab910(uVar13,uVar14,0);
      }
      else {
        uStack_78 = param_2[3];
        uStack_80 = param_2[2];
        uStack_68 = param_2[5];
        local_70 = param_2[4];
        uStack_88 = param_2[1];
        local_90 = *param_2;
        lStack_b8 = param_6[1];
        local_c0 = *param_6;
        lStack_a8 = param_6[3];
        lStack_b0 = param_6[2];
        local_a0 = param_6[4];
        lVar3 = FUN_024497d0(param_1,&local_90,param_3,param_5,&local_c0,
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textInputBase__
                            );
        uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                     Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<float>_get_text__
                                   );
        uVar14 = thunk_FUN_01c495e4(param_3,*(undefined8 *)puVar1);
        FUN_027a12b0(uVar13,uVar14,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<float>_get_originalText__
                    );
      }
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x30) = uVar13;
        return lVar3;
      }
      goto LAB_035a6a54;
    }
    if (param_4 == 2) {
      lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<double>_get_textInputBase__
                                );
      FUN_03313b6c(lVar3,0);
      plVar11 = *(long **)(param_1 + 0x18);
      lVar12 = *(long *)PTR_DAT_0422f958;
      lVar5 = *(long *)(lVar12 + 0x38);
      if (lVar5 == 0) {
        FUN_01c723f0(lVar12);
        lVar5 = *(long *)(lVar12 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01c72394();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar5 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01c72394();
      }
      if (plVar11 == (long *)0x0) goto LAB_035a6a54;
      lVar12 = *plVar11;
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      uVar14 = *(undefined8 *)
                Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar4 = (undefined8 *)(lVar12 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_035a6558;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01c72498(plVar11,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035a6558:
      (*(code *)*puVar4)(plVar11,3,uVar14,uVar13,puVar4[1]);
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_68 = param_2[5];
      local_70 = param_2[4];
      uStack_88 = param_2[1];
      local_90 = *param_2;
      lStack_b8 = param_6[1];
      local_c0 = *param_6;
      lStack_a8 = param_6[3];
      lStack_b0 = param_6[2];
      local_a0 = param_6[4];
      lVar5 = FUN_024497d0(param_1,&local_90,param_3,param_5,&local_c0,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textInputBase__
                          );
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) = lVar5, lVar5 == 0)) goto LAB_035a6a54;
      uVar9 = *(undefined4 *)(lVar5 + 0x130);
      uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<int>_set_text__
                                 );
      FUN_02a2669c(uVar13,1,*(undefined8 *)
                             Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_set_text__,
                   uVar9,5,*(undefined8 *)
                            Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_get_textEdition__
                  );
      *(undefined8 *)(lVar3 + 0x18) = uVar13;
      uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateValueFromText__
                                 );
      FUN_0285da04(uVar13,lVar3,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_TextInputBaseField<double>_get_isDelayed__,0);
      if ((*(long *)(lVar3 + 0x10) == 0) || (param_3 == 0)) goto LAB_035a6a54;
      uVar10 = *(undefined8 *)puVar2;
      uVar14 = *(undefined8 *)(lVar3 + 0x18);
      uVar9 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x130);
      lVar5 = thunk_FUN_01c495e4(param_3,uVar10);
      if (lVar5 == 0) goto LAB_035a6a58;
      lVar5 = *(long *)puVar2;
      plVar11 = (long *)thunk_FUN_01c495e4(param_3,lVar5);
      if (plVar11 == (long *)0x0) goto LAB_035a6a64;
      lVar12 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) goto LAB_035a66cc;
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
    }
    else {
      lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__
                                );
      FUN_03313b6c(lVar3,0);
      uStack_78 = param_2[3];
      uStack_80 = param_2[2];
      uStack_68 = param_2[5];
      local_70 = param_2[4];
      uStack_88 = param_2[1];
      local_90 = *param_2;
      lStack_b8 = param_6[1];
      local_c0 = *param_6;
      lStack_a8 = param_6[3];
      lStack_b0 = param_6[2];
      local_a0 = param_6[4];
      uVar13 = FUN_02449678(param_1,&local_90,param_3,param_5,&local_c0,
                            *(undefined8 *)
                             Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textEdition__
                           );
      if (lVar3 == 0) goto LAB_035a6a54;
      *(undefined8 *)(lVar3 + 0x10) = uVar13;
      uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateValueFromText__
                                 );
      FUN_0285da04(uVar13,lVar3,
                   *(undefined8 *)Method_UnityEngine_UIElements_TextInputBaseField<Hash128>__ctor__,
                   0);
      lVar5 = *(long *)(lVar3 + 0x10);
      if ((lVar5 == 0) || (param_3 == 0)) goto LAB_035a6a54;
      uVar10 = *(undefined8 *)puVar2;
      uVar14 = *(undefined8 *)(lVar5 + 0x138);
      uVar9 = *(undefined4 *)(lVar5 + 0x130);
      lVar5 = thunk_FUN_01c495e4(param_3,uVar10);
      if (lVar5 == 0) goto LAB_035a6a58;
      lVar5 = *(long *)puVar2;
      plVar11 = (long *)thunk_FUN_01c495e4(param_3,lVar5);
      if (plVar11 == (long *)0x0) goto LAB_035a6a64;
      lVar12 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar5) goto LAB_035a66cc;
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
    }
  }
  else if (param_4 == 1) {
    lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<ulong>_get_originalText__
                              );
    FUN_03313b6c(lVar3,0);
    plVar11 = *(long **)(param_1 + 0x18);
    lVar12 = *(long *)PTR_DAT_0422f958;
    lVar5 = *(long *)(lVar12 + 0x38);
    if (lVar5 == 0) {
      FUN_01c723f0(lVar12);
      lVar5 = *(long *)(lVar12 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar5 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    if (plVar11 == (long *)0x0) {
LAB_035a6a54:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar12 = *plVar11;
    uVar13 = **(undefined8 **)(lVar5 + 0xb8);
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar14 = *(undefined8 *)Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
          puVar4 = (undefined8 *)(lVar12 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_035a6234;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498(plVar11,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035a6234:
    (*(code *)*puVar4)(plVar11,3,uVar14,uVar13,puVar4[1]);
    uStack_78 = param_2[3];
    uStack_80 = param_2[2];
    uStack_68 = param_2[5];
    local_70 = param_2[4];
    uStack_88 = param_2[1];
    local_90 = *param_2;
    lStack_b8 = param_6[1];
    local_c0 = *param_6;
    lStack_a8 = param_6[3];
    lStack_b0 = param_6[2];
    local_a0 = param_6[4];
    lVar5 = FUN_02449678(param_1,&local_90,param_3,param_5,&local_c0,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textEdition__
                        );
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) = lVar5, lVar5 == 0)) goto LAB_035a6a54;
    uVar9 = *(undefined4 *)(lVar5 + 0x130);
    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<int>_get_text__
                               );
    FUN_02a26ca4(uVar13,1,*(undefined8 *)
                           Method_UnityEngine_UIElements_TextInputBaseField<float>_get_isDelayed__,
                 uVar9,5,*(undefined8 *)
                          Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<int>_get_originalText__
                );
    *(undefined8 *)(lVar3 + 0x18) = uVar13;
    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateTextFromValue__
                               );
    FUN_0285da04(uVar13,lVar3,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<uint>_set_text__,0)
    ;
    if ((*(long *)(lVar3 + 0x10) == 0) || (param_3 == 0)) goto LAB_035a6a54;
    uVar10 = *(undefined8 *)puVar1;
    uVar14 = *(undefined8 *)(lVar3 + 0x18);
    uVar9 = *(undefined4 *)(*(long *)(lVar3 + 0x10) + 0x130);
    lVar5 = thunk_FUN_01c495e4(param_3,uVar10);
    if (lVar5 == 0) goto LAB_035a6a58;
    lVar5 = *(long *)puVar1;
    plVar11 = (long *)thunk_FUN_01c495e4(param_3,lVar5);
    if (plVar11 == (long *)0x0) goto LAB_035a6a64;
    lVar12 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) goto LAB_035a66cc;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  else {
    lVar3 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<ulong>_set_text__
                              );
    FUN_03313b6c(lVar3,0);
    uStack_78 = param_2[3];
    uStack_80 = param_2[2];
    uStack_68 = param_2[5];
    local_70 = param_2[4];
    uStack_88 = param_2[1];
    local_90 = *param_2;
    lStack_b8 = param_6[1];
    local_c0 = *param_6;
    lStack_a8 = param_6[3];
    lStack_b0 = param_6[2];
    local_a0 = param_6[4];
    uVar13 = FUN_024497d0(param_1,&local_90,param_3,param_5,&local_c0,
                          *(undefined8 *)
                           Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_textInputBase__
                         );
    if (lVar3 == 0) goto LAB_035a6a54;
    *(undefined8 *)(lVar3 + 0x10) = uVar13;
    uVar13 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<Hash128>_UpdateTextFromValue__
                               );
    FUN_0285da04(uVar13,lVar3,
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TextInputBaseField_TextInputBase<ulong>_get_text__,0
                );
    lVar5 = *(long *)(lVar3 + 0x10);
    if ((lVar5 == 0) || (param_3 == 0)) goto LAB_035a6a54;
    uVar10 = *(undefined8 *)puVar1;
    uVar14 = *(undefined8 *)(lVar5 + 0x138);
    uVar9 = *(undefined4 *)(lVar5 + 0x130);
    lVar5 = thunk_FUN_01c495e4(param_3,uVar10);
    if (lVar5 == 0) {
LAB_035a6a58:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_3,uVar10);
    }
    lVar5 = *(long *)puVar1;
    plVar11 = (long *)thunk_FUN_01c495e4(param_3,lVar5);
    if (plVar11 == (long *)0x0) {
LAB_035a6a64:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(param_3,lVar5);
    }
    lVar12 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) goto LAB_035a66cc;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  puVar4 = (undefined8 *)FUN_01c72498(plVar11,lVar5,0);
LAB_035a66d8:
  (*(code *)*puVar4)(plVar11,uVar13,uVar14,uVar9,puVar4[1]);
  return *(long *)(lVar3 + 0x10);
LAB_035a66cc:
  puVar4 = (undefined8 *)(lVar12 + (long)*piVar7 * 0x10 + 0x138);
  goto LAB_035a66d8;
}


