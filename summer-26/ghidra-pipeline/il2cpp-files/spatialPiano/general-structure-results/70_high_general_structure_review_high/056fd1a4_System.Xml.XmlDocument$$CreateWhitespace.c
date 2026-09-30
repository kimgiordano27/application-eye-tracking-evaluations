/*
FUNCTION_NAME: System.Xml.XmlDocument$$CreateWhitespace
ENTRY_POINT: 056fd1a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_21;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Xml_XmlDocument__CreateWhitespace(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long in_x9;
  undefined8 unaff_x19;
  long *unaff_x21;
  
  uVar11 = **(undefined8 **)(in_x9 + 0x3b8);
  *(undefined8 *)(param_1 + 0x98) = unaff_x19;
  uVar11 = thunk_FUN_02f45270(uVar11);
  FUN_056ffdb0();
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_IContext>_Remove__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xa0) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_056ffe08();
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_IContext>_get_Item__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xa8) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_056ffe5c();
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_IContext>_set_Item__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xb0) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_056ffeb0();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_IGestureRecognizer>__ctor__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xb8) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_056fff04();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_IGestureRecognizer>_Add__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xc0) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_056fff58();
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_IService>__ctor__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 200) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_056fffac();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_IGestureRecognizer>_get_Values__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xd0) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  System_Xml_XmlElement__get_NamespaceURI();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_IGestureRecognizer>_Remove__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xd8) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0570005c();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_IGestureRecognizer>_get_Count__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe0) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_057000b4();
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>_Clear__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xe8) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0570010c();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>_ContainsKey__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf0) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_05700164();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>_TryGetValue__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0xf8) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_057001b8();
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>_Remove__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x100) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  FUN_0570020c();
  uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>_set_Item__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x108) = uVar11;
  uVar11 = thunk_FUN_02f45270(uVar12);
  System_Xml_XmlElement__RemoveAllChildren();
  uVar12 = *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>_set_Item__;
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x110) = uVar11;
  lVar13 = thunk_FUN_02f45270(uVar12);
  FUN_05700904();
  *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x118) = lVar13;
  if (lVar13 != 0) {
    plVar14 = (long *)FUN_057002b8(lVar13,1,0);
    lVar13 = *unaff_x21;
    if (plVar14 == (long *)0x0) {
      *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x120) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar13 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
      goto LAB_056fd7b0;
      *(long **)(*(long *)(lVar13 + 0xb8) + 0x120) = plVar14;
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
      goto LAB_056fd7b0;
    }
    puVar3 = Method_System_Collections_Generic_Dictionary<Type,_int>_ContainsKey__;
    puVar2 = Method_System_Collections_Generic_Dictionary<Type,_int>_Clear__;
    puVar6 = Method_System_Collections_Generic_Dictionary<Type,_int>_Add__;
    puVar8 = Method_System_Collections_Generic_Dictionary<Type,_int>__ctor__;
    puVar5 = Method_System_Collections_Generic_Dictionary<Type,_DataContract>_TryGetValue__;
    puVar7 = Method_System_Collections_Generic_Dictionary<Type,_DataContract>_Add__;
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<Type,_DataContract>__ctor__
                               );
    FUN_05700904();
    uVar12 = *(undefined8 *)puVar8;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x128) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_0570043c();
    uVar12 = *(undefined8 *)puVar2;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x130) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_05700490();
    uVar12 = *(undefined8 *)puVar6;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x138) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    System_Xml_XmlElement__GetAttributeNode();
    uVar12 = *(undefined8 *)puVar3;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x140) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_05700538();
    uVar12 = *(undefined8 *)puVar5;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x148) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_05700904();
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x150) = uVar11;
    lVar13 = thunk_FUN_02f45270(uVar12);
    FUN_05700904();
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x158) = lVar13;
    if (lVar13 == 0) goto LAB_056ffd8c;
    plVar14 = (long *)FUN_057002b8(lVar13,1,0);
    lVar13 = *unaff_x21;
    if (plVar14 == (long *)0x0) {
      *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x160) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar13 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
      goto LAB_056fd7b0;
      *(long **)(*(long *)(lVar13 + 0xb8) + 0x160) = plVar14;
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
      goto LAB_056fd7b0;
    }
    puVar10 = Method_System_Collections_Generic_Dictionary<Type,_object>_Add__;
    puVar9 = Method_System_Collections_Generic_Dictionary<Type,_object>__ctor__;
    puVar4 = Method_System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_TryGetValue__;
    puVar3 = Method_System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_Remove__;
    puVar2 = Method_System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>_Add__;
    puVar6 = Method_System_Collections_Generic_Dictionary<Type,_IntegratedSubsystem>__ctor__;
    puVar8 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>__ctor__;
    puVar5 = Method_System_Collections_Generic_Dictionary<Type,_EventCategory>_Add__;
    puVar7 = Method_System_Collections_Generic_Dictionary<Type,_EventCategory>__ctor__;
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<Type,_int>_TryGetValue__
                               );
    FUN_05700594();
    uVar12 = *(undefined8 *)puVar6;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x168) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_057005e8();
    uVar12 = *(undefined8 *)puVar2;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x170) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_05700904();
    uVar12 = *(undefined8 *)puVar3;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x178) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_057005e8();
    uVar12 = *(undefined8 *)puVar9;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x180) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_05700644();
    uVar12 = *(undefined8 *)puVar4;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x188) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    System_Xml_XmlElement__SetAttribute();
    uVar12 = *(undefined8 *)puVar8;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 400) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_05700904();
    uVar12 = *(undefined8 *)puVar7;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x198) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_05700904();
    uVar12 = *(undefined8 *)puVar10;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1a0) = uVar11;
    uVar11 = thunk_FUN_02f45270(uVar12);
    FUN_057006fc();
    uVar12 = *(undefined8 *)puVar5;
    *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1a8) = uVar11;
    lVar13 = thunk_FUN_02f45270(uVar12);
    FUN_05700904();
    *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1b0) = lVar13;
    if (lVar13 != 0) {
      plVar14 = (long *)FUN_057002b8(lVar13,1,0);
      lVar13 = *unaff_x21;
      if (plVar14 == (long *)0x0) {
        *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x1b8) = 0;
      }
      else {
        bVar1 = *(byte *)(lVar13 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar13)) {
LAB_056fd7b0:
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        *(long **)(*(long *)(lVar13 + 0xb8) + 0x1b8) = plVar14;
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar13))
        goto LAB_056fd7b0;
      }
      puVar10 = Method_System_Collections_Generic_Dictionary<Type,_ReadType>__ctor__;
      puVar9 = Method_System_Collections_Generic_Dictionary<Type,_PrimitiveTypeCode>_TryGetValue__;
      puVar4 = Method_System_Collections_Generic_Dictionary<Type,_PrimitiveTypeCode>_Add__;
      puVar3 = Method_System_Collections_Generic_Dictionary<Type,_PrimitiveTypeCode>__ctor__;
      puVar2 = Method_System_Collections_Generic_Dictionary<Type,_object>_TryGetValue__;
      puVar6 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_set_Item__;
      puVar8 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_TryGetValue__;
      puVar5 = Method_System_Collections_Generic_Dictionary<Type,_EventCategory>_TryGetValue__;
      puVar7 = 
      Method_System_Collections_Generic_Dictionary<Type,_AttributeUsageAttribute>_TryGetValue__;
      uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<Type,_object>_ContainsKey__
                                 );
      FUN_057005e8();
      uVar12 = *(undefined8 *)puVar2;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1c0) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_057005e8();
      uVar12 = *(undefined8 *)puVar3;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1c8) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700904();
      uVar12 = *(undefined8 *)puVar5;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1d0) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700760();
      uVar12 = *(undefined8 *)puVar4;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1d8) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_057007b4();
      uVar12 = *(undefined8 *)puVar6;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1e0) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700808();
      uVar12 = *(undefined8 *)puVar8;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1e8) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_0570085c();
      uVar12 = *(undefined8 *)puVar9;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1f0) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_057008b0();
      uVar12 = *(undefined8 *)puVar10;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x1f8) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700904();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_SubsystemWithProvider>__ctor__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x200) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700958();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_ReadType>_TryGetValue__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x208) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_057009b0();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_ReadType>_set_Item__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x210) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700a08();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_SubsystemWithProvider>_Remove__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x218) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700904();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_SubsystemWithProvider>_TryGetValue__
      ;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x220) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700a64();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Transform>__ctor__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x228) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700ab8();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Transform>_Add__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x230) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700b0c();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Transform>_Clear__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x238) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700b60();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_Transform>_TryGetValue__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x240) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700bb4();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Type>_Clear__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x248) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700c08();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Type>_Add__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x250) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700c60();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_object>_set_Item__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 600) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700904();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_SubsystemWithProvider>_Add__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x260) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700904();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_IContext>__ctor__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x268) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700cc0();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>__ctor__
      ;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x270) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      System_Xml_XmlElement__RemoveAllAttributes();
      uVar12 = *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<Type,_Transform>_GetEnumerator__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x278) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700cc0();
      uVar12 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<Type,_Type>__ctor__;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x280) = uVar11;
      uVar11 = thunk_FUN_02f45270(uVar12);
      FUN_05700d6c();
      uVar12 = *(undefined8 *)puVar7;
      *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x288) = uVar11;
      plVar14 = (long *)FUN_02f0880c(uVar12,0xd);
      if (plVar14 != (long *)0x0) {
        lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x200);
        if ((lVar13 != 0) &&
           (lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar15 == 0))
        goto LAB_056ffd80;
        uVar17 = (ulong)*(uint *)(plVar14 + 3);
        if (uVar17 != 0) {
          plVar14[4] = lVar13;
          lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x150);
          if (lVar13 != 0) {
            lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
            if (lVar15 == 0) goto LAB_056ffd80;
            uVar17 = plVar14[3];
          }
          if ((uVar17 & 0xfffffffe) != 0) {
            plVar14[5] = lVar13;
            lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x158);
            if (lVar13 != 0) {
              lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
              if (lVar15 == 0) goto LAB_056ffd80;
              uVar17 = plVar14[3];
            }
            if (2 < (uint)uVar17) {
              plVar14[6] = lVar13;
              lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x160);
              if (lVar13 != 0) {
                lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                if (lVar15 == 0) goto LAB_056ffd80;
                uVar17 = plVar14[3];
              }
              if ((uVar17 & 0xfffffffc) != 0) {
                plVar14[7] = lVar13;
                lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x118);
                if (lVar13 != 0) {
                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                  if (lVar15 == 0) goto LAB_056ffd80;
                  uVar17 = plVar14[3];
                }
                if (4 < (uint)uVar17) {
                  plVar14[8] = lVar13;
                  lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x120);
                  if (lVar13 != 0) {
                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                    if (lVar15 == 0) goto LAB_056ffd80;
                    uVar17 = plVar14[3];
                  }
                  if (5 < (uint)uVar17) {
                    plVar14[9] = lVar13;
                    lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1b0);
                    if (lVar13 != 0) {
                      lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                      if (lVar15 == 0) goto LAB_056ffd80;
                      uVar17 = plVar14[3];
                    }
                    if (6 < (uint)uVar17) {
                      plVar14[10] = lVar13;
                      lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1b8);
                      if (lVar13 != 0) {
                        lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                        if (lVar15 == 0) goto LAB_056ffd80;
                        uVar17 = plVar14[3];
                      }
                      uVar16 = (uint)uVar17;
                      if ((uVar17 & 0xfffffff8) != 0) {
                        plVar14[0xb] = lVar13;
                        lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1d8);
                        if (lVar13 != 0) {
                          lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                          if (lVar15 == 0) goto LAB_056ffd80;
                          uVar16 = (uint)plVar14[3];
                        }
                        if (8 < uVar16) {
                          plVar14[0xc] = lVar13;
                          lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x128);
                          if (lVar13 != 0) {
                            lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                            if (lVar15 == 0) goto LAB_056ffd80;
                            uVar16 = *(uint *)(plVar14 + 3);
                          }
                          if (9 < uVar16) {
                            plVar14[0xd] = lVar13;
                            lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1f0);
                            if (lVar13 != 0) {
                              lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40));
                              if (lVar15 == 0) goto LAB_056ffd80;
                              uVar16 = *(uint *)(plVar14 + 3);
                            }
                            if (10 < uVar16) {
                              plVar14[0xe] = lVar13;
                              lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1a0);
                              if (lVar13 != 0) {
                                lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)(*plVar14 + 0x40))
                                ;
                                if (lVar15 == 0) goto LAB_056ffd80;
                                uVar16 = *(uint *)(plVar14 + 3);
                              }
                              if (0xb < uVar16) {
                                plVar14[0xf] = lVar13;
                                uVar11 = *(undefined8 *)puVar7;
                                *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x290) = plVar14;
                                plVar14 = (long *)FUN_02f0880c(uVar11,0xd);
                                if (plVar14 == (long *)0x0) goto LAB_056ffd8c;
                                lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x200);
                                if ((lVar13 != 0) &&
                                   (lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                        (*plVar14 + 0x40)),
                                   lVar15 == 0)) goto LAB_056ffd80;
                                uVar17 = (ulong)*(uint *)(plVar14 + 3);
                                if (uVar17 != 0) {
                                  plVar14[4] = lVar13;
                                  lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x150);
                                  if (lVar13 != 0) {
                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                        (*plVar14 + 0x40));
                                    if (lVar15 == 0) goto LAB_056ffd80;
                                    uVar17 = plVar14[3];
                                  }
                                  if ((uVar17 & 0xfffffffe) != 0) {
                                    plVar14[5] = lVar13;
                                    lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x158);
                                    if (lVar13 != 0) {
                                      lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                          (*plVar14 + 0x40));
                                      if (lVar15 == 0) goto LAB_056ffd80;
                                      uVar17 = plVar14[3];
                                    }
                                    if (2 < (uint)uVar17) {
                                      plVar14[6] = lVar13;
                                      lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x160);
                                      if (lVar13 != 0) {
                                        lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                            (*plVar14 + 0x40));
                                        if (lVar15 == 0) goto LAB_056ffd80;
                                        uVar17 = plVar14[3];
                                      }
                                      if ((uVar17 & 0xfffffffc) != 0) {
                                        plVar14[7] = lVar13;
                                        lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x118);
                                        if (lVar13 != 0) {
                                          lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                              (*plVar14 + 0x40));
                                          if (lVar15 == 0) goto LAB_056ffd80;
                                          uVar17 = plVar14[3];
                                        }
                                        if (4 < (uint)uVar17) {
                                          plVar14[8] = lVar13;
                                          lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x120);
                                          if (lVar13 != 0) {
                                            lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                (*plVar14 + 0x40));
                                            if (lVar15 == 0) goto LAB_056ffd80;
                                            uVar17 = plVar14[3];
                                          }
                                          if (5 < (uint)uVar17) {
                                            plVar14[9] = lVar13;
                                            lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x1b0)
                                            ;
                                            if (lVar13 != 0) {
                                              lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                  (*plVar14 + 0x40))
                                              ;
                                              if (lVar15 == 0) goto LAB_056ffd80;
                                              uVar17 = plVar14[3];
                                            }
                                            if (6 < (uint)uVar17) {
                                              plVar14[10] = lVar13;
                                              lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                0x1b8);
                                              if (lVar13 != 0) {
                                                lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                    (*plVar14 + 0x40
                                                                                    ));
                                                if (lVar15 == 0) goto LAB_056ffd80;
                                                uVar17 = plVar14[3];
                                              }
                                              uVar16 = (uint)uVar17;
                                              if ((uVar17 & 0xfffffff8) != 0) {
                                                plVar14[0xb] = lVar13;
                                                lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                  0x1d8);
                                                if (lVar13 != 0) {
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  uVar16 = (uint)plVar14[3];
                                                }
                                                if (8 < uVar16) {
                                                  plVar14[0xc] = lVar13;
                                                  lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8) +
                                                                    0x128);
                                                  if (lVar13 != 0) {
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    uVar16 = *(uint *)(plVar14 + 3);
                                                  }
                                                  if (9 < uVar16) {
                                                    plVar14[0xd] = lVar13;
                                                    lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8)
                                                                      + 0x1e8);
                                                    if (lVar13 != 0) {
                                                      lVar15 = thunk_FUN_02f45174(lVar13,*(
                                                  undefined8 *)(*plVar14 + 0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  uVar16 = *(uint *)(plVar14 + 3);
                                                  }
                                                  if (10 < uVar16) {
                                                    plVar14[0xe] = lVar13;
                                                    lVar13 = *(long *)(*(long *)(*unaff_x21 + 0xb8)
                                                                      + 0x1a0);
                                                    if (lVar13 != 0) {
                                                      lVar15 = thunk_FUN_02f45174(lVar13,*(
                                                  undefined8 *)(*plVar14 + 0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  uVar16 = *(uint *)(plVar14 + 3);
                                                  }
                                                  if (0xb < uVar16) {
                                                    plVar14[0xf] = lVar13;
                                                    puVar8 = 
                                                  Method_System_Collections_Generic_Dictionary<Type,_TypeInformation>_TryGetValue__
                                                  ;
                                                  puVar5 = 
                                                  Method_System_Collections_Generic_Dictionary<Type,_TypeInformation>_Add__
                                                  ;
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<Type,_TypeInformation>_Add__
                                                  ;
                                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x298) =
                                                       plVar14;
                                                  plVar14 = (long *)FUN_02f0880c(uVar11,0x26);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xb0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  if (plVar14 == (long *)0x0) goto LAB_056ffd8c;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) {
LAB_056ffd80:
                                                    uVar11 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                                                    FUN_02f0888c(uVar11,0);
                                                  }
                                                  if ((int)plVar14[3] != 0) {
                                                    plVar14[4] = lVar13;
                                                    puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_EndEditing__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x148);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
                                                    plVar14[5] = lVar13;
                                                    puVar7 = 
                                                  Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<XRInputModalityManager_InputMode>_TypeInfo
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xb8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (2 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[6] = lVar13;
                                                    puVar6 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>__ctor__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 200);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar6;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                                                    plVar14[7] = lVar13;
                                                    puVar6 = 
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xd0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar6;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (4 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[8] = lVar13;
                                                    puVar6 = PTR_DAT_067db960;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xe0);
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar6;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (5 < *(uint *)(plVar14 + 3)) {
                                                      plVar14[9] = lVar13;
                                                      puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_showMixedValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xe8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (6 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[10] = lVar13;
                                                    puVar2 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xf8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                                                    plVar14[0xb] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_visualInput__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x120);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (8 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xc] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Enum>_get_labelElement__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x118);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (9 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xd] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_labelElement__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x128);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xe] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Enum>_SetValueWithoutNotify__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x130);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0xb < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xf] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0xc < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x10] = lVar13;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<Type,_VolumeComponent>_Add__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x140);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0xd < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x11] = lVar13;
                                                    puVar2 = 
                                                  Method_System_Collections_Generic_Dictionary<Type,_VolumeComponent>_Clear__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0xe < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x12] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<double>_get_visualInput__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xc0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff0) != 0) {
                                                    plVar14[0x13] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_visualInput__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1f8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x14] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x168);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x11 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x15] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_rawValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x180);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x12 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x16] = lVar13;
                                                    puVar2 = PTR_DAT_067cb550;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x150)
                                                    ;
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar2;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (0x13 < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0x17] = lVar13;
                                                      puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<double>_get_labelElement__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x158);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x14 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x18] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Enum>_get_showMixedValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x160);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x15 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x19] = lVar13;
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>__ctor__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x168);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x16 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1a] = lVar13;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<double>_get_rawValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1b0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x17 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1b] = lVar13;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_get_labelElement__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1b8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x18 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1c] = lVar13;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_rawValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1d8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x19 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1d] = lVar13;
                                                    puVar3 = 
                                                  Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<float>_TypeInfo
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1a < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1e] = lVar13;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_set_value__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x140);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1b < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1f] = lVar13;
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_SetValueWithoutNotify__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x108);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1c < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x20] = lVar13;
                                                    puVar3 = PTR_DAT_067cd6b8;
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x200)
                                                    ;
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar11 = *(undefined8 *)puVar3;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar12;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (0x1d < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0x21] = lVar13;
                                                      puVar3 = PTR_DAT_067d02e0;
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x210);
                                                      lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar8);
                                                      uVar12 = *(undefined8 *)puVar3;
                                                      FUN_05116b38(lVar13,0);
                                                      *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                      *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                      lVar15 = thunk_FUN_02f45174(lVar13,*(
                                                  undefined8 *)(*plVar14 + 0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1e < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x22] = lVar13;
                                                    puVar4 = 
                                                  Method_UnityEngine_UIElements_BaseField<Enum>_get_rawValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x218);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar4;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xffffffe0) != 0) {
                                                    plVar14[0x23] = lVar13;
                                                    puVar4 = 
                                                  Method_UnityEngine_UIElements_BaseField<Enum>__ctor__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x228);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar4;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x20 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x24] = lVar13;
                                                    puVar4 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x240);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar4;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x21 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x25] = lVar13;
                                                    puVar4 = 
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x230);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar4;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x22 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x26] = lVar13;
                                                    puVar4 = 
                                                  Method_UnityEngine_UIElements_BaseField<Enum>_get_visualInput__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x238);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar4;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x23 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x27] = lVar13;
                                                    puVar4 = PTR_DAT_067d7930;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xa8);
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar4;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (0x24 < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0x28] = lVar13;
                                                      puVar4 = PTR_DAT_067cf188;
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x248);
                                                      lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar8);
                                                      uVar12 = *(undefined8 *)puVar4;
                                                      FUN_05116b38(lVar13,0);
                                                      *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                      *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                      lVar15 = thunk_FUN_02f45174(lVar13,*(
                                                  undefined8 *)(*plVar14 + 0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x25 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x29] = lVar13;
                                                    puVar4 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_lowValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)puVar5;
                                                  *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x2a0) =
                                                       plVar14;
                                                  plVar14 = (long *)FUN_02f0880c(uVar11,0x2d);
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x120);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar4;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  if (plVar14 == (long *)0x0) goto LAB_056ffd8c;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((int)plVar14[3] != 0) {
                                                    plVar14[4] = lVar13;
                                                    puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_direction__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x118);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
                                                    plVar14[5] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_value__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x150);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 5;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (2 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[6] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_lowValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x158);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 5;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                                                    plVar14[7] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_highValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x160);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (4 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[8] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_value__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1a0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 9;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (5 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[9] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_highValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1b0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x28;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (6 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[10] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_lowValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1b8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                                                    plVar14[0xb] = lVar13;
                                                    puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_Start__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1d8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (8 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xc] = lVar13;
                                                    puVar5 = PTR_DAT_067d6720;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x198)
                                                    ;
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar5;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x28;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (9 < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0xd] = lVar13;
                                                      puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_lowValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1e8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xe] = lVar13;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xa0);
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<Type,_VolumeComponent>__ctor__
                                                  ;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0xb < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0xf] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_invalid__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xa8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0xc < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x10] = lVar13;
                                                    puVar5 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float4>_Awake__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xb0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0xd < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x11] = lVar13;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xb8);
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (0xe < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0x12] = lVar13;
                                                      puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_labelElement__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xc0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x25;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xfffffff0) != 0) {
                                                    plVar14[0x13] = lVar13;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xd0);
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                                  ;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x10 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x14] = lVar13;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xd8);
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar6;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_formatString__
                                                  ;
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x11 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x15] = lVar13;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0xf8);
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                                  ;
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x12 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x16] = lVar13;
                                                    puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_clamped__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x100);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x13 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x17] = lVar13;
                                                    puVar5 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>__ctor__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x110);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar5;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x14 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x18] = lVar13;
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x138)
                                                    ;
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar11 = *(undefined8 *)puVar7;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar11;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar12;
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (0x15 < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0x19] = lVar13;
                                                      puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_formatString__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0xf0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x16 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1a] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_formatString__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x188);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x17 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1b] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_formatString__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 400);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x18 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1c] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_value__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x250);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x19 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1d] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_formatString__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 600);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1a < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1e] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_lowValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x148);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1b < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x1f] = lVar13;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x168)
                                                    ;
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)puVar2;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    *(undefined4 *)(lVar13 + 0x20) = 0x1f;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (0x1c < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0x20] = lVar13;
                                                      puVar7 = 
                                                  Unity_XR_CoreUtils_Bindings_Variables_IReadOnlyBindableVariable<NearFarInteractor_Region>_TypeInfo
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x170);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x12;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1d < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x21] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_value__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x178);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x28;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x1e < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x22] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_get_highValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x180);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x1d;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if ((*(uint *)(plVar14 + 3) & 0xffffffe0) != 0) {
                                                    plVar14[0x23] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_lowValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1a8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x22;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x20 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x24] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_set_highValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1c0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x1d;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x21 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x25] = lVar13;
                                                    puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_inverted__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1c8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x1d;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x22 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x26] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_set_value__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1d0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x26;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x23 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x27] = lVar13;
                                                    puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_lowValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1e0);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x21;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x24 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x28] = lVar13;
                                                    puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseSlider<float>_set_highValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x1f8);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x1c;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x25 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x29] = lVar13;
                                                    uVar11 = *(undefined8 *)
                                                              (*(long *)(*unaff_x21 + 0xb8) + 0x200)
                                                    ;
                                                    lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                 puVar8);
                                                    uVar12 = *(undefined8 *)PTR_DAT_067cd6b8;
                                                    FUN_05116b38(lVar13,0);
                                                    *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                    *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                    *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                    lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40));
                                                    if (lVar15 == 0) goto LAB_056ffd80;
                                                    if (0x26 < *(uint *)(plVar14 + 3)) {
                                                      plVar14[0x2a] = lVar13;
                                                      uVar11 = *(undefined8 *)
                                                                (*(long *)(*unaff_x21 + 0xb8) +
                                                                0x208);
                                                      lVar13 = thunk_FUN_02f45270(*(undefined8 *)
                                                                                   puVar8);
                                                      uVar12 = *(undefined8 *)puVar3;
                                                      FUN_05116b38(lVar13,0);
                                                      *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                      *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                      *(undefined4 *)(lVar13 + 0x20) = 0xb;
                                                      lVar15 = thunk_FUN_02f45174(lVar13,*(
                                                  undefined8 *)(*plVar14 + 0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x27 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2b] = lVar13;
                                                    puVar7 = 
                                                  UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeInfo
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x220);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x23;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x28 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2c] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<Vector2,_float>_set_highValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x228);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x2c;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x29 < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2d] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_get_highValue__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x230);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x2b;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x2a < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2e] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<int,_int>_get_formatString__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x238);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x21;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x2b < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x2f] = lVar13;
                                                    puVar7 = 
                                                  Method_Unity_AppUI_UI_BaseSlider<float,_float>_InvokeValueChangedCallbacks__
                                                  ;
                                                  uVar11 = *(undefined8 *)
                                                            (*(long *)(*unaff_x21 + 0xb8) + 0x240);
                                                  lVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar8)
                                                  ;
                                                  uVar12 = *(undefined8 *)puVar7;
                                                  FUN_05116b38(lVar13,0);
                                                  *(undefined8 *)(lVar13 + 0x10) = uVar12;
                                                  *(undefined8 *)(lVar13 + 0x18) = uVar11;
                                                  *(undefined4 *)(lVar13 + 0x20) = 0x2a;
                                                  lVar15 = thunk_FUN_02f45174(lVar13,*(undefined8 *)
                                                                                      (*plVar14 +
                                                                                      0x40));
                                                  if (lVar15 == 0) goto LAB_056ffd80;
                                                  if (0x2c < *(uint *)(plVar14 + 3)) {
                                                    plVar14[0x30] = lVar13;
                                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x2a8)
                                                         = plVar14;
                                                    FUN_05700e28();
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
    }
  }
LAB_056ffd8c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


