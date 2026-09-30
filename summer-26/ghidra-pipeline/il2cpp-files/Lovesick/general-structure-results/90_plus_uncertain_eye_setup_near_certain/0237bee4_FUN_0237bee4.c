/*
FUNCTION_NAME: FUN_0237bee4
ENTRY_POINT: 0237bee4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0237c3cc) */
/* WARNING: Removing unreachable block (ram,0x0237c9cc) */

long FUN_0237bee4(undefined8 param_1,float param_2,float param_3,long *param_4,long *param_5,
                 long *param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  
  puVar2 = StringLiteral_5017;
  puVar3 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Get__;
  if ((DAT_03781dd2 & 1) == 0) {
    thunk_FUN_00d48444(System_Net_WebCompletionSource<WebResponseStream>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<InputDevice>_MoveNext__);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<float4>__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(StringLiteral_5017);
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_12482);
    thunk_FUN_00d48444(Method_CyclingWordPuzzle_PoemStopped__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_6588);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(Method_OVRBounded2D_get_BoundingBox__);
    thunk_FUN_00d48444(StringLiteral_10837);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Get__);
    thunk_FUN_00d48444(Method_System_Reflection_AssemblyName__ctor__);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781dd2 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  local_c8._8_8_ = 0;
  local_b8 = 0;
  local_c8._0_8_ = 0;
  FUN_010daa4c(param_5,&local_a0,*(undefined8 *)puVar2);
  local_b0 = uStack_98;
  lVar11 = FUN_00ca5cc0(&local_b8,*(undefined8 *)puVar3);
  puVar2 = Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<float4>__;
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x20);
    if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__);
    }
    lVar12 = FUN_0233dbd8(lVar11,0);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar13 != 0) {
      FUN_01298da0(lVar13,*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<InputDevice>_MoveNext__
                  );
      *param_6 = lVar13;
      puVar2 = PTR_DAT_033f5aa8;
      if (lVar11 != 0) {
        fVar29 = (float)FUN_02302500(param_4,*(undefined8 *)(lVar11 + 0x10),0);
        fVar31 = param_2;
        fVar32 = param_3;
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar13 != 0) {
          FUN_01298da0(lVar13,*(undefined8 *)
                               Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                      );
          if (param_5 != (long *)0x0) {
            lVar20 = *param_5;
            uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_12482) {
                  puVar14 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0237c1b8;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(param_5,*(long *)StringLiteral_12482,0);
LAB_0237c1b8:
            puVar7 = StringLiteral_10310;
            plVar15 = (long *)(*(code *)*puVar14)(param_5,puVar14[1]);
            puVar6 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
            puVar5 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
            puVar4 = Method_CyclingWordPuzzle_PoemStopped__;
            puVar2 = Method_System_Reflection_AssemblyName__ctor__;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            do {
              lVar20 = *plVar15;
              uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
                    puVar14 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0237c248;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar14 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar6,0);
LAB_0237c248:
              uVar23 = (*(code *)*puVar14)(plVar15,puVar14[1]);
              if ((uVar23 & 1) == 0) {
                if (plVar15 == (long *)0x0) goto LAB_0237c3c0;
                lVar20 = *plVar15;
                uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar23 == 0) goto LAB_0237c398;
                piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                goto LAB_0237c380;
              }
              lVar20 = *plVar15;
              uVar23 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar23 != 0) {
                piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar4) {
                    puVar14 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                    goto LAB_0237c2a4;
                  }
                  uVar23 = uVar23 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar23 != 0);
              }
              puVar14 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar4,0);
LAB_0237c2a4:
              auVar33 = (*(code *)*puVar14)(plVar15,puVar14[1]);
              local_c8 = auVar33;
              iVar10 = FUN_00ca5dc4(local_c8,*(undefined8 *)puVar2);
              lVar20 = FUN_00ca5cc0(local_c8,*(undefined8 *)puVar3);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (iVar10 == *(int *)(lVar20 + 0x18)) {
                lVar20 = FUN_00ca5cc0(local_c8,*(undefined8 *)puVar3);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar27 = *(undefined8 *)(lVar20 + 0x10);
                local_8c = FUN_00ca5dc4(local_c8,*(undefined8 *)puVar2);
                uStack_88 = (undefined4)uVar27;
                FUN_0129a054(lVar13,&uStack_88,&local_8c,*(undefined8 *)puVar5);
              }
              else {
                lVar20 = FUN_00ca5cc0(local_c8,*(undefined8 *)puVar3);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                uVar27 = *(undefined8 *)(lVar20 + 0x10);
                local_8c = FUN_00ca5dc4(local_c8,*(undefined8 *)puVar2);
                uStack_88 = (undefined4)((ulong)uVar27 >> 0x20);
                FUN_0129a054(lVar13,&uStack_88,&local_8c,*(undefined8 *)puVar5);
              }
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_0237c9b8;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar24 = piVar24 + 4;
    if (uVar23 == 0) break;
LAB_0237c380:
    if (*(long *)(piVar24 + -2) == *(long *)puVar7) {
      puVar14 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
      goto LAB_0237c3b4;
    }
  }
LAB_0237c398:
  puVar14 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar7,0);
LAB_0237c3b4:
  (*(code *)*puVar14)(plVar15,puVar14[1]);
LAB_0237c3c0:
  if (lVar12 != 0) {
    iVar10 = *(int *)(lVar12 + 0x18);
    lVar20 = thunk_FUN_00d62348(*(undefined8 *)Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    if (lVar20 != 0) {
      FUN_01320e50(lVar20,*(undefined8 *)PTR_DAT_033ee588);
      if (0 < iVar10) {
        iVar28 = 0;
        puVar25 = (undefined8 *)
                  Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
        ;
        puVar26 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
        puVar14 = (undefined8 *)OVRManager_XrApi_TypeInfo;
        do {
          FUN_0132138c(lVar12,iVar28,&local_a0,*puVar26);
          uVar9 = uStack_9c;
          local_a0 = uStack_9c;
          uVar23 = FUN_0129aa60(lVar13,&local_a0,*puVar25);
          if ((uVar23 & 1) == 0) {
            if (param_4 == (long *)0x0) goto LAB_0237c9b8;
            lVar21 = *param_4;
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_6588) {
                  puVar16 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0237c594;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar16 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_6588,0);
LAB_0237c594:
            uVar27 = (*(code *)*puVar16)(param_4,uVar9,puVar16[1]);
            FUN_00ca0af8(lVar20,uVar27,*puVar14);
          }
          else {
            FUN_0132138c(lVar12,iVar28,&local_a0,*puVar26);
            uVar8 = local_a0;
            if (param_4 == (long *)0x0) goto LAB_0237c9b8;
            lVar21 = *param_4;
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_6588) {
                  puVar14 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0237c514;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_6588,0);
LAB_0237c514:
            uVar27 = (*(code *)*puVar14)(param_4,uVar8,puVar14[1]);
            FUN_0132138c(lVar12,iVar28,&local_a0,*puVar26);
            uVar8 = uStack_9c;
            lVar21 = *param_4;
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_6588) {
                  puVar14 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0237c5c8;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_6588,0);
LAB_0237c5c8:
            uVar17 = (*(code *)*puVar14)(param_4,uVar8,puVar14[1]);
            iVar1 = 0;
            if (iVar28 + 1 != iVar10) {
              iVar1 = iVar28 + 1;
            }
            FUN_0132138c(lVar12,iVar1,&local_a0,*puVar26);
            uVar8 = uStack_9c;
            lVar21 = *param_4;
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_6588) {
                  puVar14 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0237c650;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_6588,0);
LAB_0237c650:
            uVar18 = (*(code *)*puVar14)(param_4,uVar8,puVar14[1]);
            lVar21 = thunk_FUN_023399bc(uVar27,uVar17,0);
            lVar19 = thunk_FUN_023399bc(uVar18,uVar17,0);
            if (lVar21 == 0) goto LAB_0237c9b8;
            FUN_02339cc4(lVar21,0);
            if (lVar19 == 0) goto LAB_0237c9b8;
            FUN_02339cc4(lVar19,0);
            lVar22 = *param_4;
            uVar23 = (ulong)*(ushort *)(lVar22 + 0x12a);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_6588) {
                  puVar14 = (undefined8 *)(lVar22 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0237c700;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_6588,0);
LAB_0237c700:
            uVar27 = (*(code *)*puVar14)(param_4,uVar9,puVar14[1]);
            uVar17 = thunk_FUN_02339b44(param_1,lVar21,0);
            uVar27 = thunk_FUN_02339834(uVar27,uVar17,0);
            lVar21 = *param_4;
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)StringLiteral_6588) {
                  puVar14 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_0237c78c;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar14 = (undefined8 *)FUN_00d59724(param_4,*(long *)StringLiteral_6588,0);
LAB_0237c78c:
            uVar17 = (*(code *)*puVar14)(param_4,uVar9,puVar14[1]);
            uVar18 = thunk_FUN_02339b44(param_1,lVar19,0);
            uVar17 = thunk_FUN_02339834(uVar17,uVar18,0);
            puVar2 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
            lVar21 = *param_6;
            local_a0 = uVar9;
            FUN_01299bc0(lVar13,&local_a0,&local_84,
                         *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
            puVar3 = System_Net_WebCompletionSource<WebResponseStream>_TypeInfo;
            local_a0 = local_84;
            local_84 = *(undefined4 *)(lVar20 + 0x18);
            FUN_010b6ab0(lVar21,&local_a0,&local_84,
                         *(undefined8 *)System_Net_WebCompletionSource<WebResponseStream>_TypeInfo);
            puVar14 = (undefined8 *)OVRManager_XrApi_TypeInfo;
            FUN_00ca0af8(lVar20,uVar27,*(undefined8 *)OVRManager_XrApi_TypeInfo);
            lVar21 = *param_6;
            local_a0 = uVar9;
            FUN_01299bc0(lVar13,&local_a0,&local_84,*(undefined8 *)puVar2);
            local_a0 = local_84;
            local_84 = *(undefined4 *)(lVar20 + 0x18);
            FUN_010b6ab0(lVar21,&local_a0,&local_84,*(undefined8 *)puVar3);
            FUN_00ca0af8(lVar20,uVar17,*puVar14);
            puVar25 = (undefined8 *)
                      Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
            ;
            puVar26 = (undefined8 *)Method_System_Collections_Generic_List<Grabbable>_Contains__;
          }
          iVar28 = iVar28 + 1;
        } while (iVar28 != iVar10);
      }
      uVar23 = FUN_0237620c(lVar20,&local_a8,0,0);
      if ((uVar23 & 1) == 0) {
        return 0;
      }
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
      puVar3 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__;
      if (lVar12 != 0) {
        FUN_022fb2d8(lVar12,0);
        *(long *)(lVar12 + 0x18) = lVar20;
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if (lVar13 != 0) {
          FUN_022f9928(lVar13,lVar11,0);
          lVar11 = local_a8;
          *(long *)(lVar12 + 0x10) = lVar13;
          fVar30 = (float)FUN_02302500(lVar20,local_a8,0);
          if (0.0 <= param_3 * fVar32 + fVar29 * fVar30 + param_2 * fVar31) {
            if (lVar11 == 0) goto LAB_0237c9b8;
          }
          else {
            if (lVar11 == 0) goto LAB_0237c9b8;
            FUN_01324d60(lVar11,*(undefined8 *)Method_OVRBounded2D_get_BoundingBox__);
          }
          lVar13 = *(long *)(lVar12 + 0x10);
          uVar27 = FUN_01325140(lVar11,*(undefined8 *)StringLiteral_10837);
          if (lVar13 != 0) {
            FUN_022f8ff8(lVar13,uVar27,0);
            return lVar12;
          }
        }
      }
    }
  }
LAB_0237c9b8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


