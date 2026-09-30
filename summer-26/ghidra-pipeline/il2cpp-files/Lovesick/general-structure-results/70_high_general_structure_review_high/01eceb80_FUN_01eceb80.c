/*
FUNCTION_NAME: FUN_01eceb80
ENTRY_POINT: 01eceb80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_01eceb80(long param_1,long param_2,long param_3,long param_4,long *param_5,long param_6)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined4 local_64;
  
                    /* try { // try from 01eceb9c to 01fcebab has its CatchHandler @ 01ecebac */
                    /* catch() { ... } // from try @ 01eceb5c with catch @ 01ecebac
                       catch() { ... } // from try @ 01eceb9c with catch @ 01ecebac */
                    /* try { // try from 01ecebb0 to 01fcebb3 has its CatchHandler @ 01ecebbc */
                    /* try { // try from 01ecebb4 to 01fcebbf has its CatchHandler @ 01ece944 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01eceb3c with catch @ 01ecebbc
                       catch(type#2 @ 00000000) { ... } // from try @ 01ecebb0 with catch @ 01ecebbc
                        */
  if ((DAT_0377ffcb & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_Linq_XNamespace_Get__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<WeakReference>_Clear__);
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_SetColorMapMonochromatic__);
    thunk_FUN_00d48444(PTR_DAT_033f1778);
    thunk_FUN_00d48444(Method_System_Xml_XmlWellFormedWriter_WriteEntityRef__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_fsData>_ContainsKey__);
    thunk_FUN_00d48444(StringLiteral_823);
    thunk_FUN_00d48444(Method_UnityEngine_Pool_CollectionPool<List<Color32>,_Color32>_Get__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<AggregateException>_get_Count__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>_GetPooled__);
    thunk_FUN_00d48444(StringLiteral_6220);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__
                      );
    DAT_0377ffcb = 1;
  }
  puVar14 = PTR_DAT_033f1778;
  local_64 = 0;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar14 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IScrollHandler>__;
LAB_01ecf4e8:
    uVar13 = thunk_FUN_00d48444(puVar14);
    FUN_016ec5b8(uVar9,uVar13,0);
    uVar13 = thunk_FUN_00d48444(Method_SoccerBlocker_OnTargetDied__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar9,uVar13);
  }
  if (param_3 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar14 = Method_Oculus_Interaction_Input_DataSource<BodyDataAsset>_Start__;
    goto LAB_01ecf4e8;
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_01ecf49c;
  lVar7 = *(long *)PTR_DAT_033f1778;
  uVar16 = 5;
  if (*(int *)(*(long *)(param_1 + 0x40) + 0x1c) < 2) {
    uVar16 = 2;
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar14;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar7 == 0) goto LAB_01ecf49c;
  if (*(uint *)(lVar7 + 0x18) <= uVar16) {
LAB_01ecf4a0:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  FUN_01ecd57c(param_1,uVar16,*(undefined8 *)(lVar7 + (ulong)uVar16 * 8 + 0x20));
  plVar8 = *(long **)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0x22) = 1;
  if (plVar8 == (long *)0x0) goto LAB_01ecf49c;
  uVar9 = (**(code **)(*plVar8 + 0x198))(plVar8,param_3,*(undefined8 *)(*plVar8 + 0x1a0));
  uVar10 = FUN_01f5dcc0(uVar9,*(undefined8 *)(param_1 + 0x90),0);
  if ((uVar10 & 1) != 0) {
    return (long *)0x0;
  }
  if (*(long *)(param_1 + 0x48) == 0) goto LAB_01ecf49c;
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x20);
  plVar8 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                       Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
  if (plVar8 == (long *)0x0) goto LAB_01ecf49c;
  FUN_01f75d58(plVar8,param_2,uVar9,0);
  plVar11 = *(long **)(param_1 + 0x58);
  if (plVar11 == (long *)0x0) goto LAB_01ecf49c;
  lVar12 = (**(code **)(*plVar11 + 0x308))(plVar11,plVar8,*(undefined8 *)(*plVar11 + 0x310));
  puVar14 = Method_UnityEngine_Pool_CollectionPool<List<Color32>,_Color32>_Get__;
  if (lVar12 != 0) {
    uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    FUN_01ecf528(param_1,*(undefined8 *)puVar14,uVar9);
    if (param_6 != 0) {
      FUN_01ebf3a0(param_6,0);
    }
    return (long *)0x0;
  }
  uVar10 = FUN_01f5dcc0(uVar9,*(undefined8 *)(param_1 + 0x88),0);
  if ((uVar10 & 1) != 0) {
    plVar11 = *(long **)(param_1 + 0xc0);
    if (plVar11 == (long *)0x0) goto LAB_01ecf49c;
    uVar13 = (**(code **)(*plVar11 + 0x198))(plVar11,param_2,*(undefined8 *)(*plVar11 + 0x1a0));
    uVar10 = FUN_01f5dcc0(uVar13,*(undefined8 *)(param_1 + 0x100),0);
    if (((((uVar10 & 1) == 0) &&
         (uVar10 = FUN_01f5dcc0(uVar13,*(undefined8 *)(param_1 + 0x108),0), (uVar10 & 1) == 0)) &&
        (uVar10 = FUN_01f5dcc0(uVar13,*(undefined8 *)(param_1 + 0x110),0), (uVar10 & 1) == 0)) &&
       (uVar10 = FUN_01f5dcc0(uVar13,*(undefined8 *)(param_1 + 0x118),0), (uVar10 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x22) = 0;
      pcVar19 = *(code **)(*plVar8 + 0x168);
      uVar13 = *(undefined8 *)(*plVar8 + 0x170);
      puVar18 = (undefined8 *)StringLiteral_823;
      goto LAB_01ecf3d0;
    }
    puVar14 = Method_System_Xml_Linq_XNamespace_Get__;
    plVar11 = *(long **)(param_1 + 0x58);
    if (*(int *)(*(long *)Method_System_Xml_Linq_XNamespace_Get__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (plVar11 == (long *)0x0) goto LAB_01ecf49c;
    (**(code **)(*plVar11 + 0x2a8))
              (plVar11,plVar8,**(undefined8 **)(*(long *)puVar14 + 0xb8),
               *(undefined8 *)(*plVar11 + 0x2b0));
    goto LAB_01eceeb0;
  }
  if (*(int *)(param_1 + 0x50) == 2) {
    plVar11 = *(long **)(param_1 + 0xa0);
  }
  else {
    plVar11 = (long *)0x0;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_01ecf49c;
  lVar12 = FUN_01e92724(*(long *)(param_1 + 0x28),lVar7,plVar8,plVar11,&local_64,0);
  puVar5 = Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>_GetPooled__;
  puVar18 = (undefined8 *)
            Method_System_Collections_Generic_KeyValuePair<string,_JsonParser_JsonValue>_get_Value__
  ;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<RaycastResult>_MoveNext__;
  puVar3 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  puVar14 = PTR_DAT_033ea8a0;
  lVar22 = 0;
  lVar20 = 0;
  plVar21 = (long *)0x0;
  switch(local_64) {
  case 0:
switchD_01ecef40_caseD_0:
    if (lVar12 == 0) goto LAB_01ecf49c;
    goto LAB_01ecf164;
  case 1:
    if (*(long *)(param_1 + 0x60) == 0) {
      *(long *)(param_1 + 0x60) = lVar12;
      if ((lVar7 == 0) || (plVar11 = *(long **)(lVar7 + 0x28), plVar11 == (long *)0x0))
      goto LAB_01ecf49c;
      lVar20 = *(long *)Method_OVRPassthroughLayer_SetColorMapMonochromatic__;
      if ((*(byte *)(*plVar11 + 300) < *(byte *)(lVar20 + 300)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar20 + 300) * 8 + -8) != lVar20))
      goto LAB_01ecf49c;
      if (*(byte *)(*plVar11 + 300) < *(byte *)(lVar20 + 300)) {
        plVar11 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar20 + 300) * 8 + -8) !=
               lVar20) {
        plVar11 = (long *)0x0;
      }
      uVar10 = FUN_01ebc2e4(plVar11,0,0);
      if ((uVar10 & 1) == 0) goto switchD_01ecef40_caseD_0;
      puVar17 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      puVar18 = (undefined8 *)Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
    }
    else {
      puVar17 = *(undefined8 **)
                 (*(long *)
                   System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
                 0xb8);
      puVar18 = (undefined8 *)Method_System_Collections_Generic_List<AggregateException>_get_Count__
      ;
    }
    goto LAB_01ecf2e4;
  case 2:
    lVar12 = FUN_01ecf6a4(param_1,plVar8);
    if (lVar12 != 0) goto LAB_01ecf164;
    if ((lVar7 != 0) || (*(int *)(param_1 + 0xf8) != 3)) {
LAB_01ecef9c:
      if (*(int *)(param_1 + 0xf8) != 1) {
        uVar13 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        FUN_01eccaac(param_1,*(undefined8 *)puVar4,uVar13,1);
      }
      goto LAB_01eceeb0;
    }
    lVar7 = plVar8[3];
    if (lVar7 == 0) goto LAB_01ecf49c;
    if (*(int *)(lVar7 + 0x10) == 0) goto LAB_01ecef9c;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01ecf49c;
    uVar10 = FUN_01e9257c(*(long *)(param_1 + 0x28),lVar7,0);
    if ((uVar10 & 1) == 0) goto LAB_01ecef9c;
    goto LAB_01ecf3ac;
  case 3:
    goto LAB_01ecf150;
  case 4:
    uVar13 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    FUN_01eccaac(param_1,*(undefined8 *)puVar4,uVar13,1);
    goto LAB_01ecf2fc;
  case 6:
    puVar18 = (undefined8 *)Method_UnityEngine_UIElements_MouseEventBase<MouseOutEvent>_GetPooled__;
LAB_01ecf150:
    lVar12 = FUN_01ecf6a4(param_1,plVar8);
    if (lVar12 != 0) {
LAB_01ecf164:
      lVar20 = *(long *)(lVar12 + 0x80);
      if (lVar7 != 0) {
        plVar11 = *(long **)(param_1 + 0x58);
        if (plVar11 == (long *)0x0) goto LAB_01ecf49c;
        (**(code **)(*plVar11 + 0x2a8))(plVar11,plVar8,lVar12,*(undefined8 *)(*plVar11 + 0x2b0));
      }
      if (param_4 != 0) {
        param_5 = (long *)(**(code **)(param_4 + 0x18))
                                    (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28)
                                    );
      }
      plVar21 = (long *)FUN_01ecf8fc(param_1,param_5,lVar12);
      plVar11 = *(long **)(lVar12 + 0x30);
      if (plVar11 == (long *)0x0) goto LAB_01ecf49c;
      iVar6 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
      lVar22 = 0;
      if ((plVar21 != (long *)0x0) && (iVar6 == 2)) {
        bVar2 = *(byte *)(*(long *)Method_System_Xml_XmlWellFormedWriter_WriteEntityRef__ + 300);
        if ((*(byte *)(*plVar21 + 300) < bVar2) ||
           ((*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar2 * 8 + -8) !=
             *(long *)Method_System_Xml_XmlWellFormedWriter_WriteEntityRef__ ||
            (lVar22 = plVar21[2], lVar22 == 0)))) goto LAB_01ecf49c;
        plVar11 = *(long **)(lVar22 + 0x68);
        plVar21 = (long *)plVar21[3];
      }
      FUN_01ecfb80(param_1,plVar11,plVar21,1);
      if (((*(byte *)(param_1 + 0x18) >> 3 & 1) != 0) && (*(int *)(param_1 + 0x1c) != -1)) {
        if (param_5 == (long *)0x0) goto LAB_01ecf49c;
        lVar7 = plVar8[2];
        lVar1 = plVar8[3];
        uVar13 = (**(code **)(*param_5 + 0x168))(param_5,*(undefined8 *)(*param_5 + 0x170));
        FUN_01ecfd2c(param_1,lVar7,lVar1,plVar21,uVar13,plVar11);
      }
      break;
    }
LAB_01ecf3ac:
    *(undefined1 *)(param_1 + 0x22) = 0;
    pcVar19 = *(code **)(*plVar8 + 0x168);
    uVar13 = *(undefined8 *)(*plVar8 + 0x170);
LAB_01ecf3d0:
    uVar13 = (*pcVar19)(plVar8,uVar13);
    FUN_01ecf528(param_1,*puVar18,uVar13);
LAB_01eceeb0:
    lVar12 = 0;
    goto LAB_01ecf2fc;
  case 7:
    *(undefined1 *)(param_1 + 0x22) = 0;
    uVar13 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar15 = *(undefined8 *)puVar5;
    goto LAB_01ecf2f0;
  case 8:
    *(undefined1 *)(param_1 + 0x22) = 0;
    plVar21 = (long *)FUN_00da4fb8(*(undefined8 *)puVar14,2);
    lVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    if (plVar21 == (long *)0x0) goto LAB_01ecf49c;
    if ((lVar7 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar21 + 0x40)), lVar20 == 0)) {
LAB_01ecf51c:
      uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar9,0);
    }
    puVar14 = Method_System_Collections_Generic_List<WeakReference>_Clear__;
    if ((int)plVar21[3] == 0) goto LAB_01ecf4a0;
    plVar21[4] = lVar7;
    lVar7 = *(long *)puVar14;
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)(*plVar11 + 300) < *(byte *)(lVar7 + 300)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7))
      goto LAB_01ecf514;
    }
    if (plVar11 == (long *)0x0) goto LAB_01ecf49c;
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)(*plVar11 + 300) < *(byte *)(lVar7 + 300)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar7 + 300) * 8 + -8) != lVar7)) {
LAB_01ecf514:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(plVar11);
      }
    }
    plVar8 = (long *)plVar11[0x10];
    if (plVar8 == (long *)0x0) goto LAB_01ecf49c;
    lVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    if ((lVar7 != 0) &&
       (lVar20 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar21 + 0x40)), lVar20 == 0))
    goto LAB_01ecf51c;
    puVar14 = StringLiteral_6220;
    if (*(uint *)(plVar21 + 3) < 2) goto LAB_01ecf4a0;
    plVar21[5] = lVar7;
    FUN_01ecf76c(param_1,*(undefined8 *)puVar14,plVar21);
    lVar22 = 0;
    lVar20 = 0;
    plVar21 = (long *)0x0;
    break;
  case 9:
    *(undefined1 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x50) = 1;
    puVar17 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    puVar18 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_fsData>_ContainsKey__;
LAB_01ecf2e4:
    uVar13 = *puVar17;
    uVar15 = *puVar18;
LAB_01ecf2f0:
    FUN_01ecf528(param_1,uVar15,uVar13);
LAB_01ecf2fc:
    lVar22 = 0;
    lVar20 = 0;
    plVar21 = (long *)0x0;
  }
  uVar16 = 2;
  if (*(char *)(param_1 + 0x22) != '\0') {
    uVar16 = (uint)(lVar12 != 0);
  }
  if (param_6 != 0) {
    FUN_01ebf484(param_6,lVar20,0);
    if (lVar20 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar20 + 0x90);
    }
    FUN_01ebf448(param_6,uVar13,0);
    *(long *)(param_6 + 0x30) = lVar22;
    *(undefined1 *)(param_6 + 0x10) = 0;
    *(uint *)(param_6 + 0x38) = uVar16;
  }
  if ((*(byte *)(param_1 + 0x18) & 3) != 0) {
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
LAB_01ecf49c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = (**(code **)(*plVar8 + 0x308))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x310));
    if (lVar7 == 0) {
      plVar8 = *(long **)(param_1 + 0x38);
      if (plVar8 == (long *)0x0) goto LAB_01ecf49c;
      (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar9,uVar9,*(undefined8 *)(*plVar8 + 0x2b0));
    }
  }
  return plVar21;
}


