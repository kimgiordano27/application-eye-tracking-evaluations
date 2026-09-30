/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_ShowSystemUI
ENTRY_POINT: 03397544
PROGRAM: gunraiders-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03397e74) */

long OVRPlugin_OVRP_1_1_0__ovrp_ShowSystemUI(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x24;
  long unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  char in_stack_00000030;
  char cStack0000000000000034;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000058;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0x9e0));
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
              );
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__);
  FUN_01c5d288(PTR_DAT_042305b8);
  FUN_01c5d288(PTR_DAT_0422fb28);
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__);
  *(undefined1 *)(unaff_x26 + 0x6b5) = 1;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  cStack0000000000000034 = '\0';
  in_stack_00000030 = '\0';
  plVar4 = *(long **)(unaff_x22 + 0x20);
  if (plVar4 == (long *)0x0) goto LAB_03397e00;
  iVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
  if (iVar2 == 2) {
    if (unaff_x19 == (long *)0x0) goto LAB_03397e00;
    uVar5 = FUN_0335cd70();
  }
  else {
    plVar4 = *(long **)(unaff_x22 + 0x20);
    if (plVar4 == (long *)0x0) goto LAB_03397e00;
    iVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
    puVar13 = Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__;
    if (iVar2 == 1) {
      if (unaff_x19 == (long *)0x0) {
LAB_03397678:
        if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar6 = FUN_033babe4();
        if (lVar6 == 0) goto LAB_03397e00;
        plVar4 = (long *)FUN_033b9c48(lVar6,0);
        if (plVar4 == (long *)0x0) {
          if (unaff_x19 != (long *)0x0) {
            FUN_033594d8();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          goto LAB_03397e00;
        }
        bVar1 = *(byte *)(*(long *)puVar13 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar13)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar4);
        }
        if (unaff_x19 == (long *)0x0) goto LAB_03397e00;
        lVar6 = FUN_033594d8();
        plVar4[8] = lVar6;
        plVar4[0xc] = unaff_x19[0xc];
        FUN_03359184(plVar4,(int)unaff_x19[0xb],0);
        FUN_0335911c(plVar4,(int)unaff_x19[9],0);
        FUN_033591ec(plVar4,*(undefined4 *)((long)unaff_x19 + 0x5c),0);
        *(undefined1 *)((long)plVar4 + 0x71) = *(undefined1 *)((long)unaff_x19 + 0x71);
        FUN_0335cd70(plVar4,0);
      }
      else {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__ +
                         0x130);
        if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
           (plVar4 = unaff_x19,
           *(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
           *(long *)Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__))
        goto LAB_03397678;
      }
      uVar5 = FUN_03398d84();
      unaff_x19 = plVar4;
      lVar6 = in_stack_00000040;
    }
    else {
      if (unaff_x19 == (long *)0x0) goto LAB_03397e00;
      FUN_0335cd70();
      uVar5 = FUN_033994ac();
      lVar6 = in_stack_00000038;
    }
    if ((uVar5 & 1) != 0) {
      return lVar6;
    }
  }
  uVar5 = FUN_03399b24(uVar5,in_stack_00000058);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_03397044();
    return lVar6;
  }
  if (in_stack_00000058 == (long *)0x0) goto LAB_03397e00;
  switch(*(undefined4 *)((long)in_stack_00000058 + 0x24)) {
  case 1:
    cStack0000000000000034 = '\0';
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                     + 0x130);
    if ((*(byte *)(*in_stack_00000058 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__))
    {
LAB_03397d58:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(in_stack_00000058);
    }
    if (unaff_x20 == 0) {
LAB_03397840:
      unaff_x20 = FUN_03399c20();
      if (cStack0000000000000034 != '\0') {
        return unaff_x20;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_032e935c(unaff_x24);
      if ((uVar5 & 1) == 0) {
        uVar9 = thunk_FUN_01c5d21c();
        if (unaff_x24 == (long *)0x0) goto LAB_03397e00;
        uVar5 = (**(code **)(*unaff_x24 + 0x298))
                          (unaff_x24,uVar9,*(undefined8 *)(*unaff_x24 + 0x2a0));
        if ((uVar5 & 1) == 0) goto LAB_03397840;
      }
    }
    FUN_03395364();
    break;
  case 3:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__ +
                     0x130);
    if ((*(byte *)(*in_stack_00000058 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__))
    goto LAB_03397d58;
    plVar4 = *(long **)(unaff_x22 + 0x20);
    if (plVar4 == (long *)0x0) {
LAB_03397e00:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
    if ((iVar2 != 2) &&
       (iVar2 = (**(code **)(*unaff_x19 + 0x188))(unaff_x19,*(undefined8 *)(*unaff_x19 + 400)),
       iVar2 == 4)) {
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x198))
                                 (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1a0));
      if (plVar4 == (long *)0x0) goto LAB_03397e00;
      uVar9 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      uVar5 = FUN_03152760(uVar9,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__
                           ,4,0);
      if ((uVar5 & 1) != 0) {
        FUN_0335cd70(unaff_x19,0);
        iVar2 = (**(code **)(*unaff_x19 + 0x188))(unaff_x19,*(undefined8 *)(*unaff_x19 + 400));
        if (iVar2 != 1) {
          lVar6 = FUN_033966b4();
          FUN_0335cd70(unaff_x19,0);
          return lVar6;
        }
        FUN_019b2708(unaff_x19);
        uVar3 = (**(code **)(*unaff_x19 + 0x188))(unaff_x19,*(undefined8 *)(*unaff_x19 + 400));
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar3;
        uVar9 = FUN_03307544(&stack0x00000018,0);
        uVar10 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<byte>_Add__);
        uVar9 = FUN_03146988(uVar10,uVar9,0);
        goto LAB_03397f54;
      }
    }
  default:
    uVar9 = FUN_03317620(0);
    uVar10 = FUN_03317620(0);
    uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<BindingRestrictions>_Add__
                               );
    uVar12 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<byte>__ctor__);
    uVar9 = FUN_031532c4(uVar11,uVar9,uVar12,uVar10,0);
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar10 = FUN_03295500(0);
    uVar11 = FUN_03398ccc(uVar10,in_stack_00000058);
    uVar9 = FUN_033704d4(uVar9,uVar10,unaff_x24,uVar11,0);
LAB_03397f54:
    uVar9 = FUN_0335cdc4(unaff_x19,uVar9,0);
    uVar10 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<ColliderZone>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar9,uVar10);
  case 5:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*in_stack_00000058 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__))
    goto LAB_03397d58;
    if (unaff_x20 != 0) {
      if (((char)in_stack_00000058[0x20] == '\0') && (lVar6 = thunk_FUN_01c495e4(), lVar6 != 0)) {
        lVar6 = thunk_FUN_01c495e4();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
      }
      else {
        OVRPlugin_Sizei___cctor(in_stack_00000058);
      }
      lVar6 = FUN_03394994();
      return lVar6;
    }
    lVar6 = FUN_03399e44();
    if (in_stack_00000030 == '\0') {
      FUN_03394994();
      puVar13 = 
      Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
      ;
      plVar4 = (long *)thunk_FUN_01c495e4(lVar6,*(undefined8 *)
                                                 Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                                         );
      if (plVar4 == (long *)0x0) {
        return lVar6;
      }
      lVar6 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar13) {
            puVar7 = (undefined8 *)(lVar6 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03397d48;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498(plVar4,*(long *)puVar13,0);
LAB_03397d48:
      lVar6 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      return lVar6;
    }
    plVar4 = (long *)FUN_0338fba4(in_stack_00000058);
    if (plVar4 == (long *)0x0) goto LAB_03397e00;
    lVar14 = *plVar4;
    uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar5 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
           ) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03397c18;
        }
        uVar5 = uVar5 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01c72498(plVar4,*(long *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                          ,0);
LAB_03397c18:
    iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
    if (iVar2 < 1) {
      plVar4 = (long *)FUN_0338fc1c(in_stack_00000058);
      if (plVar4 == (long *)0x0) goto LAB_03397e00;
      lVar14 = *plVar4;
      uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar5 != 0) {
        piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__)
          {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03397c90;
          }
          uVar5 = uVar5 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01c72498(plVar4,*(long *)
                                    Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                            ,0);
LAB_03397c90:
      iVar2 = (*(code *)*puVar7)(plVar4,puVar7[1]);
      if (iVar2 < 1) {
        uVar5 = FUN_03390838(in_stack_00000058);
        if ((uVar5 & 1) != 0) {
          FUN_03394994();
          lVar14 = in_stack_00000058[0x22];
          if (lVar14 == 0) {
            lVar14 = FUN_03390754(in_stack_00000058);
          }
          plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
          if (plVar4 != (long *)0x0) {
            if ((lVar6 != 0) &&
               (lVar8 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
              uVar9 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar9,0);
            }
            if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            plVar4[4] = lVar6;
            if (lVar14 != 0) {
              lVar6 = (**(code **)(lVar14 + 0x18))
                                (*(undefined8 *)(lVar14 + 0x40),plVar4,
                                 *(undefined8 *)(lVar14 + 0x28));
              return lVar6;
            }
          }
          goto LAB_03397e00;
        }
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar9 = FUN_03295500(0);
        FUN_019b2708(in_stack_00000058);
        lVar6 = in_stack_00000058[0xc];
        puVar13 = Method_System_Collections_Generic_HashSet<ColliderZone>__ctor__;
      }
      else {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar9 = FUN_03295500(0);
        FUN_019b2708(in_stack_00000058);
        lVar6 = in_stack_00000058[0xc];
        puVar13 = Method_System_Collections_Generic_HashSet<byte>_Remove__;
      }
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar9 = FUN_03295500(0);
      FUN_019b2708(in_stack_00000058);
      lVar6 = in_stack_00000058[0xc];
      puVar13 = Method_System_Collections_Generic_HashSet<byte>_Contains__;
    }
    uVar10 = thunk_FUN_01c273e8(puVar13);
    uVar9 = FUN_0336f2b8(uVar10,uVar9,lVar6,0);
    goto LAB_03397f54;
  case 6:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*in_stack_00000058 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__))
    goto LAB_03397d58;
    unaff_x20 = FUN_0339a070();
    break;
  case 7:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__ + 0x130);
    if ((*(byte *)(*in_stack_00000058 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__)) goto LAB_03397d58;
    unaff_x20 = FUN_0339a6ac();
  }
  return unaff_x20;
}


