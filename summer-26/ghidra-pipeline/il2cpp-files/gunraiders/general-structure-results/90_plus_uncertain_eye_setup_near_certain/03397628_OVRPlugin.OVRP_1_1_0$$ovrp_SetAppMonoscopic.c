/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetAppMonoscopic
ENTRY_POINT: 03397628
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


long OVRPlugin_OVRP_1_1_0__ovrp_SetAppMonoscopic(long *param_1)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  int *piVar17;
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
  
  iVar3 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
  puVar15 = Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__;
  plVar6 = unaff_x19;
  if (iVar3 == 1) {
    if (unaff_x19 == (long *)0x0) {
LAB_03397678:
      if (*(int *)(*(long *)PTR_DAT_042307f8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar5 = FUN_033babe4();
      if (lVar5 == 0) goto LAB_03397e00;
      plVar6 = (long *)FUN_033b9c48(lVar5,0);
      if (plVar6 == (long *)0x0) {
        if (unaff_x19 != (long *)0x0) {
          FUN_033594d8();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        goto LAB_03397e00;
      }
      bVar1 = *(byte *)(*(long *)puVar15 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar15)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar6);
      }
      if (unaff_x19 == (long *)0x0) goto LAB_03397e00;
      lVar5 = FUN_033594d8();
      plVar6[8] = lVar5;
      plVar6[0xc] = unaff_x19[0xc];
      FUN_03359184(plVar6,(int)unaff_x19[0xb],0);
      FUN_0335911c(plVar6,(int)unaff_x19[9],0);
      FUN_033591ec(plVar6,*(undefined4 *)((long)unaff_x19 + 0x5c),0);
      *(undefined1 *)((long)plVar6 + 0x71) = *(undefined1 *)((long)unaff_x19 + 0x71);
      FUN_0335cd70(plVar6,0);
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__ +
                       0x130);
      if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_HashSet<BindingRestrictions>__ctor__))
      goto LAB_03397678;
    }
    uVar7 = FUN_03398d84();
    lVar5 = in_stack_00000040;
    plVar2 = in_stack_00000058;
  }
  else {
    if (unaff_x19 == (long *)0x0) goto LAB_03397e00;
    FUN_0335cd70();
    uVar7 = FUN_033994ac();
    lVar5 = in_stack_00000038;
    plVar2 = in_stack_00000058;
  }
  if ((uVar7 & 1) != 0) {
    return lVar5;
  }
  in_stack_00000058 = plVar2;
  uVar7 = FUN_03399b24(uVar7,plVar2);
  plVar8 = in_stack_00000048;
  if ((uVar7 & 1) != 0) {
    lVar5 = FUN_03397044();
    return lVar5;
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
      uVar7 = FUN_032e935c(plVar8);
      if ((uVar7 & 1) == 0) {
        uVar11 = thunk_FUN_01c5d21c();
        if (plVar8 == (long *)0x0) goto LAB_03397e00;
        uVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 0x2a0));
        if ((uVar7 & 1) == 0) goto LAB_03397840;
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
    plVar8 = *(long **)(unaff_x22 + 0x20);
    if (plVar8 == (long *)0x0) {
LAB_03397e00:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar3 = (**(code **)(*plVar8 + 0x288))(plVar8,*(undefined8 *)(*plVar8 + 0x290));
    if ((iVar3 != 2) &&
       (iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400)), iVar3 == 4))
    {
      plVar8 = (long *)(**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
      if (plVar8 == (long *)0x0) goto LAB_03397e00;
      uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      uVar7 = FUN_03152760(uVar11,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__
                           ,4,0);
      if ((uVar7 & 1) != 0) {
        FUN_0335cd70(plVar6,0);
        iVar3 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        if (iVar3 != 1) {
          lVar5 = FUN_033966b4();
          FUN_0335cd70(plVar6,0);
          return lVar5;
        }
        FUN_019b2708(plVar6);
        uVar4 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar4;
        uVar11 = FUN_03307544(&stack0x00000018,0);
        uVar12 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<byte>_Add__);
        uVar11 = FUN_03146988(uVar12,uVar11,0);
        goto LAB_03397f54;
      }
    }
  default:
    uVar11 = FUN_03317620(0);
    uVar12 = FUN_03317620(0);
    uVar13 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<BindingRestrictions>_Add__
                               );
    uVar14 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<byte>__ctor__);
    uVar11 = FUN_031532c4(uVar13,uVar11,uVar14,uVar12,0);
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar12 = FUN_03295500(0);
    plVar8 = in_stack_00000048;
    uVar13 = FUN_03398ccc(uVar12,plVar2);
    uVar11 = FUN_033704d4(uVar11,uVar12,plVar8,uVar13,0);
LAB_03397f54:
    uVar11 = FUN_0335cdc4(plVar6,uVar11,0);
    uVar12 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<ColliderZone>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar11,uVar12);
  case 5:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__))
    goto LAB_03397d58;
    if (unaff_x20 != 0) {
      if (((char)plVar2[0x20] == '\0') && (lVar5 = thunk_FUN_01c495e4(), lVar5 != 0)) {
        lVar5 = thunk_FUN_01c495e4();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
      }
      else {
        OVRPlugin_Sizei___cctor(plVar2);
      }
      lVar5 = FUN_03394994();
      return lVar5;
    }
    lVar5 = FUN_03399e44();
    if (cStack0000000000000030 == '\0') {
      FUN_03394994();
      puVar15 = 
      Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
      ;
      plVar6 = (long *)thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                 Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                                         );
      if (plVar6 == (long *)0x0) {
        return lVar5;
      }
      lVar5 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar15) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03397d48;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar15,0);
LAB_03397d48:
      lVar5 = (*(code *)*puVar9)(plVar6,puVar9[1]);
      return lVar5;
    }
    if (in_stack_00000050 == 0) {
      plVar8 = (long *)FUN_0338fba4(plVar2);
      if (plVar8 == (long *)0x0) goto LAB_03397e00;
      lVar16 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar7 != 0) {
        piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
             ) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03397c18;
          }
          uVar7 = uVar7 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01c72498(plVar8,*(long *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                            ,0);
LAB_03397c18:
      iVar3 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (iVar3 < 1) {
        plVar8 = (long *)FUN_0338fc1c(plVar2);
        if (plVar8 == (long *)0x0) goto LAB_03397e00;
        lVar16 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar7 != 0) {
          piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
               ) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03397c90;
            }
            uVar7 = uVar7 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01c72498(plVar8,*(long *)
                                      Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                              ,0);
LAB_03397c90:
        iVar3 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (iVar3 < 1) {
          uVar7 = FUN_03390838(plVar2);
          if ((uVar7 & 1) != 0) {
            FUN_03394994();
            lVar16 = plVar2[0x22];
            if (lVar16 == 0) {
              lVar16 = FUN_03390754(plVar2);
            }
            plVar6 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
            if (plVar6 != (long *)0x0) {
              if ((lVar5 != 0) &&
                 (lVar10 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
              {
                uVar11 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar11,0);
              }
              if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              plVar6[4] = lVar5;
              if (lVar16 != 0) {
                lVar5 = (**(code **)(lVar16 + 0x18))
                                  (*(undefined8 *)(lVar16 + 0x40),plVar6,
                                   *(undefined8 *)(lVar16 + 0x28));
                return lVar5;
              }
            }
            goto LAB_03397e00;
          }
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar11 = FUN_03295500(0);
          FUN_019b2708(plVar2);
          lVar5 = plVar2[0xc];
          puVar15 = Method_System_Collections_Generic_HashSet<ColliderZone>__ctor__;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar11 = FUN_03295500(0);
          FUN_019b2708(plVar2);
          lVar5 = plVar2[0xc];
          puVar15 = Method_System_Collections_Generic_HashSet<byte>_Remove__;
        }
      }
      else {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar11 = FUN_03295500(0);
        FUN_019b2708(plVar2);
        lVar5 = plVar2[0xc];
        puVar15 = Method_System_Collections_Generic_HashSet<byte>_Contains__;
      }
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar11 = FUN_03295500(0);
      FUN_019b2708(plVar2);
      lVar5 = plVar2[0xc];
      puVar15 = Method_System_Collections_Generic_HashSet<byte>_Clear__;
    }
    uVar12 = thunk_FUN_01c273e8(puVar15);
    uVar11 = FUN_0336f2b8(uVar12,uVar11,lVar5,0);
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


