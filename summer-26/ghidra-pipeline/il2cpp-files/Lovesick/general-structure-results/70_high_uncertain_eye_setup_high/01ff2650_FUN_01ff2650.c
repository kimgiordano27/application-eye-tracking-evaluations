/*
FUNCTION_NAME: FUN_01ff2650
ENTRY_POINT: 01ff2650
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01ff2650(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  
  if ((DAT_03780810 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__);
    thunk_FUN_00d48444(StringLiteral_1774);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Player>_RemoveAt__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<MemberInfo,_Member>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<IPokeStateDataProvider>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__);
    thunk_FUN_00d48444(Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3919);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03780810 = 1;
  }
  puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(StringLiteral_6861);
    FUN_016ec5b8(uVar13,uVar7,0);
    uVar7 = thunk_FUN_00d48444(
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__10>__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar7);
  }
  plVar4 = (long *)thunk_FUN_00d6225c(param_2,*(undefined8 *)
                                               Method_Unity_Burst_Intrinsics_Arm_Neon_vmovn_s32__);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_01ff275c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar3,0);
LAB_01ff275c:
    lVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar1 = Method_System_Collections_Generic_List<Player>_RemoveAt__;
    if (lVar8 != 0) {
      lVar8 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_01ff27c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar3,0);
LAB_01ff27c8:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      uVar13 = *(undefined8 *)puVar1;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar13 = FUN_01780344(uVar13,0);
      puVar2 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
      puVar1 = System_Collections_Generic_Dictionary<MemberInfo,_Member>_TypeInfo;
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_01ff2868;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar6,*(long *)
                                      Method_System_Collections_Generic_List<ShadowCaster2D>_get_Item__
                              ,0);
LAB_01ff2868:
        uVar13 = (*(code *)*puVar5)(plVar6,uVar13,puVar5[1]);
        plVar6 = (long *)thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar1);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        puVar2 = StringLiteral_3919;
        uVar13 = FUN_01ff1698(param_2);
        if (plVar6 == (long *)0x0) {
          lVar8 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01ff2954;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)puVar3,0);
LAB_01ff2954:
          plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (plVar4 == (long *)0x0) goto LAB_01ff2ad8;
          lVar8 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01ff29bc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_00d59724(plVar4,*(long *)
                                        Newtonsoft_Json_Serialization_ReflectionAttributeProvider_TypeInfo
                                ,0);
LAB_01ff29bc:
          plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (plVar6 == (long *)0x0) goto LAB_01ff2a18;
          lVar8 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_1774) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01ff2a48;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_1774,0);
LAB_01ff2a48:
          pcVar10 = (code *)*puVar5;
          uVar7 = puVar5[1];
        }
        else {
          lVar9 = *plVar6;
          lVar8 = *(long *)puVar1;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_01ff293c;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar6,lVar8,0);
LAB_01ff293c:
          pcVar10 = (code *)*puVar5;
          uVar7 = puVar5[1];
        }
        uVar7 = (*pcVar10)(plVar6,uVar7);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar2);
        }
        FUN_01ff2adc(uVar7,param_2,uVar13);
        return;
      }
LAB_01ff2ad8:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_01ff2a18:
  FUN_00da4fb8(*(undefined8 *)
                Method_UnityEngine_Component_GetComponentInParent<IPokeStateDataProvider>__,0);
  return;
}


