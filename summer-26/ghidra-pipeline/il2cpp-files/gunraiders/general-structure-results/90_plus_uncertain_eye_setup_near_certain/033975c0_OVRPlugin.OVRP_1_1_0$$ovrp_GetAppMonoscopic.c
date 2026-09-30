/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppMonoscopic
ENTRY_POINT: 033975c0
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


long OVRPlugin_OVRP_1_1_0__ovrp_GetAppMonoscopic(void)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  code *in_x9;
  int *piVar16;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  char cStack0000000000000030;
  char cStack0000000000000034;
  long in_stack_00000038;
  long in_stack_00000040;
  long *in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  
  iVar3 = (*in_x9)();
  if (iVar3 == 2) {
    if (unaff_x19 == (long *)0x0) goto LAB_03397e00;
    uVar5 = FUN_0335cd70();
    in_stack_00000050 = 0;
  }
  else {
    plVar7 = *(long **)(unaff_x22 + 0x20);
    if (plVar7 == (long *)0x0) goto LAB_03397e00;
    iVar3 = (**(code **)(*plVar7 + 0x288))(plVar7,*(undefined8 *)(*plVar7 + 0x290));
    puVar14 = Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__;
    if (iVar3 == 1) {
      if (unaff_x19 == (long *)0x0) {
LAB_03397678:
        if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar6 = FUN_033babe4();
        if (lVar6 == 0) goto LAB_03397e00;
        plVar7 = (long *)FUN_033b9c48(lVar6,0);
        if (plVar7 == (long *)0x0) {
          if (unaff_x19 != (long *)0x0) {
            FUN_033594d8();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          goto LAB_03397e00;
        }
        bVar1 = *(byte *)(*(long *)puVar14 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar14)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar7);
        }
        if (unaff_x19 == (long *)0x0) goto LAB_03397e00;
        lVar6 = FUN_033594d8();
        plVar7[8] = lVar6;
        plVar7[0xc] = unaff_x19[0xc];
        FUN_03359184(plVar7,(int)unaff_x19[0xb],0);
        FUN_0335911c(plVar7,(int)unaff_x19[9],0);
        FUN_033591ec(plVar7,*(undefined4 *)((long)unaff_x19 + 0x5c),0);
        *(undefined1 *)((long)plVar7 + 0x71) = *(undefined1 *)((long)unaff_x19 + 0x71);
        FUN_0335cd70(plVar7,0);
      }
      else {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__ +
                         0x130);
        if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
           (plVar7 = unaff_x19,
           *(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
           *(long *)Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__))
        goto LAB_03397678;
      }
      uVar5 = FUN_03398d84();
      unaff_x19 = plVar7;
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
  plVar2 = in_stack_00000058;
  uVar5 = FUN_03399b24(uVar5,in_stack_00000058);
  plVar7 = in_stack_00000048;
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_03397044();
    return lVar6;
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
      uVar5 = FUN_032e935c(plVar7);
      if ((uVar5 & 1) == 0) {
        uVar10 = thunk_FUN_01c5d21c();
        if (plVar7 == (long *)0x0) goto LAB_03397e00;
        uVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,uVar10,*(undefined8 *)(*plVar7 + 0x2a0));
        if ((uVar5 & 1) == 0) goto LAB_03397840;
      }
    }
    FUN_03395364();
    break;
  case 3:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__ +
                     0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__))
    goto LAB_03397d58;
    plVar7 = *(long **)(unaff_x22 + 0x20);
    if (plVar7 == (long *)0x0) {
LAB_03397e00:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar3 = (**(code **)(*plVar7 + 0x288))(plVar7,*(undefined8 *)(*plVar7 + 0x290));
    if ((iVar3 != 2) &&
       (iVar3 = (**(code **)(*unaff_x19 + 0x188))(unaff_x19,*(undefined8 *)(*unaff_x19 + 400)),
       iVar3 == 4)) {
      plVar7 = (long *)(**(code **)(*unaff_x19 + 0x198))
                                 (unaff_x19,*(undefined8 *)(*unaff_x19 + 0x1a0));
      if (plVar7 == (long *)0x0) goto LAB_03397e00;
      uVar10 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      uVar5 = FUN_03152760(uVar10,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__
                           ,4,0);
      if ((uVar5 & 1) != 0) {
        FUN_0335cd70(unaff_x19,0);
        iVar3 = (**(code **)(*unaff_x19 + 0x188))(unaff_x19,*(undefined8 *)(*unaff_x19 + 400));
        if (iVar3 != 1) {
          lVar6 = FUN_033966b4();
          FUN_0335cd70(unaff_x19,0);
          return lVar6;
        }
        FUN_019b2708(unaff_x19);
        uVar4 = (**(code **)(*unaff_x19 + 0x188))(unaff_x19,*(undefined8 *)(*unaff_x19 + 400));
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
    plVar7 = in_stack_00000048;
    uVar12 = FUN_03398ccc(uVar11,plVar2);
    uVar10 = FUN_033704d4(uVar10,uVar11,plVar7,uVar12,0);
LAB_03397f54:
    uVar10 = FUN_0335cdc4(unaff_x19,uVar10,0);
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
    if (unaff_x20 != 0) {
      if (((char)plVar2[0x20] == '\0') && (lVar6 = thunk_FUN_01c495e4(), lVar6 != 0)) {
        lVar6 = thunk_FUN_01c495e4();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
      }
      else {
        OVRPlugin_Sizei___cctor(plVar2);
      }
      lVar6 = FUN_03394994();
      return lVar6;
    }
    lVar6 = FUN_03399e44();
    if (cStack0000000000000030 == '\0') {
      FUN_03394994();
      puVar14 = 
      Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
      ;
      plVar7 = (long *)thunk_FUN_01c495e4(lVar6,*(undefined8 *)
                                                 Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                                         );
      if (plVar7 == (long *)0x0) {
        return lVar6;
      }
      lVar6 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar14) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03397d48;
          }
          uVar5 = uVar5 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_01c72498(plVar7,*(long *)puVar14,0);
LAB_03397d48:
      lVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      return lVar6;
    }
    if (in_stack_00000050 == 0) {
      plVar7 = (long *)FUN_0338fba4(plVar2);
      if (plVar7 == (long *)0x0) goto LAB_03397e00;
      lVar15 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar5 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
             ) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03397c18;
          }
          uVar5 = uVar5 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01c72498(plVar7,*(long *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                            ,0);
LAB_03397c18:
      iVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (iVar3 < 1) {
        plVar7 = (long *)FUN_0338fc1c(plVar2);
        if (plVar7 == (long *)0x0) goto LAB_03397e00;
        lVar15 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar5 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
               ) {
              puVar8 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03397c90;
            }
            uVar5 = uVar5 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01c72498(plVar7,*(long *)
                                      Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                              ,0);
LAB_03397c90:
        iVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (iVar3 < 1) {
          uVar5 = FUN_03390838(plVar2);
          if ((uVar5 & 1) != 0) {
            FUN_03394994();
            lVar15 = plVar2[0x22];
            if (lVar15 == 0) {
              lVar15 = FUN_03390754(plVar2);
            }
            plVar7 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
            if (plVar7 != (long *)0x0) {
              if ((lVar6 != 0) &&
                 (lVar9 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
                uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar10,0);
              }
              if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              plVar7[4] = lVar6;
              if (lVar15 != 0) {
                lVar6 = (**(code **)(lVar15 + 0x18))
                                  (*(undefined8 *)(lVar15 + 0x40),plVar7,
                                   *(undefined8 *)(lVar15 + 0x28));
                return lVar6;
              }
            }
            goto LAB_03397e00;
          }
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar10 = FUN_03295500(0);
          FUN_019b2708(plVar2);
          lVar6 = plVar2[0xc];
          puVar14 = Method_System_Collections_Generic_HashSet<ColliderZone>__ctor__;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar10 = FUN_03295500(0);
          FUN_019b2708(plVar2);
          lVar6 = plVar2[0xc];
          puVar14 = Method_System_Collections_Generic_HashSet<byte>_Remove__;
        }
      }
      else {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar10 = FUN_03295500(0);
        FUN_019b2708(plVar2);
        lVar6 = plVar2[0xc];
        puVar14 = Method_System_Collections_Generic_HashSet<byte>_Contains__;
      }
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar10 = FUN_03295500(0);
      FUN_019b2708(plVar2);
      lVar6 = plVar2[0xc];
      puVar14 = Method_System_Collections_Generic_HashSet<byte>_Clear__;
    }
    uVar11 = thunk_FUN_01c273e8(puVar14);
    uVar10 = FUN_0336f2b8(uVar11,uVar10,lVar6,0);
    goto LAB_03397f54;
  case 6:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__))
    goto LAB_03397d58;
    unaff_x20 = FUN_0339a070();
    break;
  case 7:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__ + 0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__)) goto LAB_03397d58;
    unaff_x20 = FUN_0339a6ac();
  }
  return unaff_x20;
}


