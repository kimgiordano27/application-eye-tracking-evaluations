/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemProductName
ENTRY_POINT: 033974c0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetSystemProductName
               (long param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long param_8)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  int *piVar16;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  char in_stack_00000030;
  char cStack0000000000000034;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  long *plStack0000000000000058;
  
  plStack0000000000000058 = param_4;
  if ((DAT_045336b5 & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                );
    FUN_01c5d288(System_Security_Cryptography_CryptoConfig_TypeInfo);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                );
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__);
    FUN_01c5d288(PTR_DAT_042307f8);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__);
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                );
    FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__);
    DAT_045336b5 = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  cStack0000000000000034 = '\0';
  in_stack_00000030 = '\0';
  plVar5 = *(long **)(param_1 + 0x20);
  in_stack_00000048 = param_3;
  if (plVar5 == (long *)0x0) goto LAB_03397e00;
  iVar3 = (**(code **)(*plVar5 + 0x288))(plVar5,*(undefined8 *)(*plVar5 + 0x290));
  if (iVar3 == 2) {
    if (param_2 == (long *)0x0) goto LAB_03397e00;
    uVar6 = FUN_0335cd70(param_2,0);
    in_stack_00000050 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == (long *)0x0) goto LAB_03397e00;
    iVar3 = (**(code **)(*plVar5 + 0x288))(plVar5,*(undefined8 *)(*plVar5 + 0x290));
    puVar14 = Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__;
    if (iVar3 == 1) {
      if (param_2 == (long *)0x0) {
LAB_03397678:
        if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar7 = FUN_033babe4(param_2,0);
        if (lVar7 == 0) goto LAB_03397e00;
        plVar5 = (long *)FUN_033b9c48(lVar7,0);
        if (plVar5 == (long *)0x0) {
          if (param_2 != (long *)0x0) {
            FUN_033594d8(param_2,0);
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          goto LAB_03397e00;
        }
        bVar1 = *(byte *)(*(long *)puVar14 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar5);
        }
        if (param_2 == (long *)0x0) goto LAB_03397e00;
        lVar7 = FUN_033594d8(param_2,0);
        plVar5[8] = lVar7;
        plVar5[0xc] = param_2[0xc];
        FUN_03359184(plVar5,(int)param_2[0xb],0);
        FUN_0335911c(plVar5,(int)param_2[9],0);
        FUN_033591ec(plVar5,*(undefined4 *)((long)param_2 + 0x5c),0);
        *(undefined1 *)((long)plVar5 + 0x71) = *(undefined1 *)((long)param_2 + 0x71);
        FUN_0335cd70(plVar5,0);
      }
      else {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__ +
                         0x130);
        if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
           (plVar5 = param_2,
           *(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
           *(long *)Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__))
        goto LAB_03397678;
      }
      uVar6 = FUN_03398d84(param_1,plVar5,&stack0x00000048,&stack0x00000058,param_5,param_6,param_7,
                           param_8);
      param_2 = plVar5;
      lVar7 = in_stack_00000040;
    }
    else {
      if (param_2 == (long *)0x0) goto LAB_03397e00;
      FUN_0335cd70(param_2,0);
      uVar6 = FUN_033994ac(param_1,param_2,&stack0x00000048,&stack0x00000058,param_5,param_6,param_7
                           ,param_8);
      lVar7 = in_stack_00000038;
    }
    if ((uVar6 & 1) != 0) {
      return lVar7;
    }
  }
  plVar2 = plStack0000000000000058;
  uVar6 = FUN_03399b24(uVar6,plStack0000000000000058);
  plVar5 = in_stack_00000048;
  puVar14 = System_Security_Cryptography_CryptoConfig_TypeInfo;
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_03397044(param_1,param_2);
    return lVar7;
  }
  if (plVar2 == (long *)0x0) goto LAB_03397e00;
  switch(*(undefined4 *)((long)plVar2 + 0x24)) {
  case 1:
    cStack0000000000000034 = '\0';
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                     + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__))
    {
LAB_03397d58:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar2);
    }
    if (param_8 == 0) {
LAB_03397840:
      param_8 = FUN_03399c20(param_1,param_2,plVar2,param_5);
      if (cStack0000000000000034 != '\0') {
        return param_8;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_032e935c(plVar5,param_3,0);
      if ((uVar6 & 1) == 0) {
        uVar10 = thunk_FUN_01c5d21c(param_8,0);
        if (plVar5 == (long *)0x0) goto LAB_03397e00;
        uVar6 = (**(code **)(*plVar5 + 0x298))(plVar5,uVar10,*(undefined8 *)(*plVar5 + 0x2a0));
        if ((uVar6 & 1) == 0) goto LAB_03397840;
      }
    }
    FUN_03395364(param_1,param_8,param_2,plVar2,param_5,in_stack_00000050);
    break;
  case 3:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__ +
                     0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__))
    goto LAB_03397d58;
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == (long *)0x0) {
LAB_03397e00:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar3 = (**(code **)(*plVar5 + 0x288))(plVar5,*(undefined8 *)(*plVar5 + 0x290));
    if ((iVar3 != 2) &&
       (iVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400)), iVar3 == 4
       )) {
      plVar5 = (long *)(**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
      if (plVar5 == (long *)0x0) goto LAB_03397e00;
      uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      uVar6 = FUN_03152760(uVar10,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__
                           ,4,0);
      if ((uVar6 & 1) != 0) {
        FUN_0335cd70(param_2,0);
        iVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        if (iVar3 != 1) {
          lVar7 = FUN_033966b4(param_1,param_2,in_stack_00000048,plVar2,param_5,0,0,param_8);
          FUN_0335cd70(param_2,0);
          return lVar7;
        }
        FUN_019b2708(param_2);
        uVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar4;
        uVar10 = FUN_03307544(&stack0x00000018,0);
        uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<byte>_Add__);
        uVar10 = FUN_03146988(uVar11,uVar10,0);
        goto LAB_03397f54;
      }
    }
  default:
    uVar10 = FUN_03317620(0);
    uVar11 = FUN_03317620(0);
    uVar12 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<BindingRestrictions>_Add__
                               );
    uVar13 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<byte>__ctor__);
    uVar10 = FUN_031532c4(uVar12,uVar10,uVar13,uVar11,0);
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar11 = FUN_03295500(0);
    plVar5 = in_stack_00000048;
    uVar12 = FUN_03398ccc(uVar11,plVar2);
    uVar10 = FUN_033704d4(uVar10,uVar11,plVar5,uVar12,0);
LAB_03397f54:
    uVar10 = FUN_0335cdc4(param_2,uVar10,0);
    uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<ColliderZone>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar10,uVar11);
  case 5:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__))
    goto LAB_03397d58;
    if (param_8 != 0) {
      if (((char)plVar2[0x20] == '\0') &&
         (lVar7 = thunk_FUN_01c495e4(param_8,*(undefined8 *)
                                              System_Security_Cryptography_CryptoConfig_TypeInfo),
         lVar7 != 0)) {
        uVar10 = *(undefined8 *)puVar14;
        lVar7 = thunk_FUN_01c495e4(param_8,uVar10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(param_8,uVar10);
        }
      }
      else {
        lVar7 = OVRPlugin_Sizei___cctor(plVar2,param_8);
      }
      lVar7 = FUN_03394994(param_1,lVar7,param_2,plVar2,param_5,in_stack_00000050);
      return lVar7;
    }
    lVar7 = FUN_03399e44(param_1,param_2,plVar2,&stack0x00000030);
    if (in_stack_00000030 == '\0') {
      FUN_03394994(param_1,lVar7,param_2,plVar2,param_5);
      puVar14 = 
      Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
      ;
      plVar5 = (long *)thunk_FUN_01c495e4(lVar7,*(undefined8 *)
                                                 Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                                         );
      if (plVar5 == (long *)0x0) {
        return lVar7;
      }
      lVar7 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar14) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03397d48;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar14,0);
LAB_03397d48:
      lVar7 = (*(code *)*puVar8)(plVar5,puVar8[1]);
      return lVar7;
    }
    if (in_stack_00000050 == 0) {
      plVar5 = (long *)FUN_0338fba4(plVar2);
      if (plVar5 == (long *)0x0) goto LAB_03397e00;
      lVar15 = *plVar5;
      uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar6 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
             ) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03397c18;
          }
          uVar6 = uVar6 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar6 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01c72498(plVar5,*(long *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                            ,0);
LAB_03397c18:
      iVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
      if (iVar3 < 1) {
        plVar5 = (long *)FUN_0338fc1c(plVar2);
        if (plVar5 == (long *)0x0) goto LAB_03397e00;
        lVar15 = *plVar5;
        uVar6 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar6 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
               ) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03397c90;
            }
            uVar6 = uVar6 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar6 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01c72498(plVar5,*(long *)
                                      Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                              ,0);
LAB_03397c90:
        iVar3 = (*(code *)*puVar8)(plVar5,puVar8[1]);
        if (iVar3 < 1) {
          uVar6 = FUN_03390838(plVar2);
          if ((uVar6 & 1) != 0) {
            FUN_03394994(param_1,lVar7,param_2,plVar2,param_5,0);
            lVar15 = plVar2[0x22];
            if (lVar15 == 0) {
              lVar15 = FUN_03390754(plVar2);
            }
            plVar5 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
            if (plVar5 != (long *)0x0) {
              if ((lVar7 != 0) &&
                 (lVar9 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0)) {
                uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar10,0);
              }
              if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              plVar5[4] = lVar7;
              if (lVar15 != 0) {
                lVar7 = (**(code **)(lVar15 + 0x18))
                                  (*(undefined8 *)(lVar15 + 0x40),plVar5,
                                   *(undefined8 *)(lVar15 + 0x28));
                return lVar7;
              }
            }
            goto LAB_03397e00;
          }
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar10 = FUN_03295500(0);
          FUN_019b2708(plVar2);
          lVar7 = plVar2[0xc];
          puVar14 = Method_System_Collections_Generic_HashSet<ColliderZone>__ctor__;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar10 = FUN_03295500(0);
          FUN_019b2708(plVar2);
          lVar7 = plVar2[0xc];
          puVar14 = Method_System_Collections_Generic_HashSet<byte>_Remove__;
        }
      }
      else {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar10 = FUN_03295500(0);
        FUN_019b2708(plVar2);
        lVar7 = plVar2[0xc];
        puVar14 = Method_System_Collections_Generic_HashSet<byte>_Contains__;
      }
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar10 = FUN_03295500(0);
      FUN_019b2708(plVar2);
      lVar7 = plVar2[0xc];
      puVar14 = Method_System_Collections_Generic_HashSet<byte>_Clear__;
    }
    uVar11 = thunk_FUN_01c273e8(puVar14);
    uVar10 = FUN_0336f2b8(uVar11,uVar10,lVar7,0);
    goto LAB_03397f54;
  case 6:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__))
    goto LAB_03397d58;
    param_8 = FUN_0339a070(param_1,param_2,plVar2,param_5,in_stack_00000050);
    break;
  case 7:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__ + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__)) goto LAB_03397d58;
    param_8 = FUN_0339a6ac(param_1,param_2,plVar2,param_5,in_stack_00000050);
  }
  return param_8;
}


