/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserPresent
ENTRY_POINT: 033978c8
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


long OVRPlugin_OVRP_1_1_0__ovrp_GetUserPresent(ulong param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
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
  long *in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  
  plVar8 = in_stack_00000058;
  if ((param_1 & 1) != 0) {
    return in_stack_00000038;
  }
  uVar4 = FUN_03399b24(param_1,in_stack_00000058);
  plVar6 = in_stack_00000048;
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_03397044();
    return lVar5;
  }
  if (plVar8 == (long *)0x0) goto LAB_03397e00;
  switch(*(undefined4 *)((long)plVar8 + 0x24)) {
  case 1:
    cStack0000000000000034 = '\0';
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                     + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__))
    {
LAB_03397d58:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar8);
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
      uVar4 = FUN_032e935c(plVar6);
      if ((uVar4 & 1) == 0) {
        uVar10 = thunk_FUN_01c5d21c();
        if (plVar6 == (long *)0x0) goto LAB_03397e00;
        uVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,uVar10,*(undefined8 *)(*plVar6 + 0x2a0));
        if ((uVar4 & 1) == 0) goto LAB_03397840;
      }
    }
    FUN_03395364();
    break;
  case 3:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__ +
                     0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<IMGUIEvent>_SetCreateFunction__))
    goto LAB_03397d58;
    plVar6 = *(long **)(unaff_x22 + 0x20);
    if (plVar6 == (long *)0x0) {
LAB_03397e00:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    iVar2 = (**(code **)(*plVar6 + 0x288))(plVar6,*(undefined8 *)(*plVar6 + 0x290));
    if ((iVar2 != 2) && (iVar2 = (**(code **)(*unaff_x19 + 0x188))(), iVar2 == 4)) {
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
      if (plVar6 == (long *)0x0) goto LAB_03397e00;
      uVar10 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar4 = FUN_03152760(uVar10,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<Spawnable>_MoveNext__
                           ,4,0);
      if ((uVar4 & 1) != 0) {
        FUN_0335cd70();
        iVar2 = (**(code **)(*unaff_x19 + 0x188))();
        if (iVar2 != 1) {
          lVar5 = FUN_033966b4();
          FUN_0335cd70();
          return lVar5;
        }
        FUN_019b2708();
        uVar3 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar3;
        uVar10 = FUN_03307544(&stack0x00000018,0);
        uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<byte>_Add__);
        FUN_03146988(uVar11,uVar10,0);
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
    plVar6 = in_stack_00000048;
    uVar12 = FUN_03398ccc(uVar11,plVar8);
    FUN_033704d4(uVar10,uVar11,plVar6,uVar12,0);
LAB_03397f54:
    uVar10 = FUN_0335cdc4();
    uVar11 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<ColliderZone>_Add__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar10,uVar11);
  case 5:
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<GeometryChangedEvent>_GetPooled__))
    goto LAB_03397d58;
    if (unaff_x20 != 0) {
      if (((char)plVar8[0x20] == '\0') && (lVar5 = thunk_FUN_01c495e4(), lVar5 != 0)) {
        lVar5 = thunk_FUN_01c495e4();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
      }
      else {
        OVRPlugin_Sizei___cctor(plVar8);
      }
      lVar5 = FUN_03394994();
      return lVar5;
    }
    lVar5 = FUN_03399e44();
    if (cStack0000000000000030 == '\0') {
      FUN_03394994();
      puVar14 = 
      Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
      ;
      plVar8 = (long *)thunk_FUN_01c495e4(lVar5,*(undefined8 *)
                                                 Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Rect,_FloatField,_float>__ctor__
                                         );
      if (plVar8 == (long *)0x0) {
        return lVar5;
      }
      lVar5 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar16 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar14) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03397d48;
          }
          uVar4 = uVar4 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar14,0);
LAB_03397d48:
      lVar5 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      return lVar5;
    }
    if (in_stack_00000050 == 0) {
      plVar6 = (long *)FUN_0338fba4(plVar8);
      if (plVar6 == (long *)0x0) goto LAB_03397e00;
      lVar15 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar4 != 0) {
        piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
             ) {
            puVar7 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03397c18;
          }
          uVar4 = uVar4 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01c72498(plVar6,*(long *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                            ,0);
LAB_03397c18:
      iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (iVar2 < 1) {
        plVar6 = (long *)FUN_0338fc1c(plVar8);
        if (plVar6 == (long *)0x0) goto LAB_03397e00;
        lVar15 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar4 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
               ) {
              puVar7 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03397c90;
            }
            uVar4 = uVar4 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01c72498(plVar6,*(long *)
                                      Method_System_Collections_Generic_HashSet<AsyncOperationHandle>_get_Count__
                              ,0);
LAB_03397c90:
        iVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (iVar2 < 1) {
          uVar4 = FUN_03390838(plVar8);
          if ((uVar4 & 1) != 0) {
            FUN_03394994();
            lVar15 = plVar8[0x22];
            if (lVar15 == 0) {
              lVar15 = FUN_03390754(plVar8);
            }
            plVar8 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
            if (plVar8 != (long *)0x0) {
              if ((lVar5 != 0) &&
                 (lVar9 = thunk_FUN_01c495e4(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
                uVar10 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
                FUN_01c5d37c(uVar10,0);
              }
              if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d4ac();
              }
              plVar8[4] = lVar5;
              if (lVar15 != 0) {
                lVar5 = (**(code **)(lVar15 + 0x18))
                                  (*(undefined8 *)(lVar15 + 0x40),plVar8,
                                   *(undefined8 *)(lVar15 + 0x28));
                return lVar5;
              }
            }
            goto LAB_03397e00;
          }
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar10 = FUN_03295500(0);
          FUN_019b2708(plVar8);
          lVar5 = plVar8[0xc];
          puVar14 = Method_System_Collections_Generic_HashSet<ColliderZone>__ctor__;
        }
        else {
          thunk_FUN_01c273e8(PTR_DAT_042305b0);
          FUN_019b5f60();
          uVar10 = FUN_03295500(0);
          FUN_019b2708(plVar8);
          lVar5 = plVar8[0xc];
          puVar14 = Method_System_Collections_Generic_HashSet<byte>_Remove__;
        }
      }
      else {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar10 = FUN_03295500(0);
        FUN_019b2708(plVar8);
        lVar5 = plVar8[0xc];
        puVar14 = Method_System_Collections_Generic_HashSet<byte>_Contains__;
      }
    }
    else {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar10 = FUN_03295500(0);
      FUN_019b2708(plVar8);
      lVar5 = plVar8[0xc];
      puVar14 = Method_System_Collections_Generic_HashSet<byte>_Clear__;
    }
    uVar11 = thunk_FUN_01c273e8(puVar14);
    FUN_0336f2b8(uVar11,uVar10,lVar5,0);
    goto LAB_03397f54;
  case 6:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__ +
                     0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>_GetPooled__))
    goto LAB_03397d58;
    unaff_x20 = FUN_0339a070();
    break;
  case 7:
    bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__ + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_UnityEngine_UIElements_EventBase<InputEvent>__ctor__)) goto LAB_03397d58;
    unaff_x20 = FUN_0339a6ac();
  }
  return unaff_x20;
}


