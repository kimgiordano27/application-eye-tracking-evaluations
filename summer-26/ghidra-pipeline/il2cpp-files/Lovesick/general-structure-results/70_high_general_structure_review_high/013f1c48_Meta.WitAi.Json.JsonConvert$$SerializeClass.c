/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$SerializeClass
ENTRY_POINT: 013f1c48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Meta_WitAi_Json_JsonConvert__SerializeClass(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  undefined8 *unaff_x22;
  long *unaff_x24;
  undefined8 uVar18;
  int iStack0000000000000030;
  uint uStack0000000000000034;
  long in_stack_00000038;
  
  while (puVar5 = StringLiteral_3202,
        puVar4 = 
        Method_System_Collections_Generic_Stack<DtdParser_ParseElementOnlyContent_LocalFrame>_get_Count__
        , puVar3 = FullSerializer_Internal_fsReflectedConverter_TypeInfo,
        puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo,
        (param_1 & 1) != 0) {
    lVar12 = unaff_x20[0x15];
    if (lVar12 == 0) goto LAB_013f23ec;
    unaff_w21 = unaff_w21 + 1;
    if ((int)*(uint *)(lVar12 + 0x18) <= (int)unaff_w21) {
      uStack0000000000000034 = 0;
      lVar12 = unaff_x20[0x14];
      goto joined_r0x013f1c6c;
    }
    if (*(uint *)(lVar12 + 0x18) <= unaff_w21) goto LAB_013f2428;
    lVar12 = *(long *)(lVar12 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_013f23ec;
    param_1 = FUN_013e77e4(lVar12,*(undefined8 *)(unaff_x19 + 0x30),unaff_w21);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar15 = *unaff_x22;
LAB_013f2194:
  FUN_026610e4(uVar15,0);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x28) + 0x11) = 1;
    return 0;
  }
  goto LAB_013f23ec;
joined_r0x013f1c6c:
  if (lVar12 == 0) goto LAB_013f23ec;
  uVar11 = (uint)*(undefined8 *)(lVar12 + 0x18);
  if ((int)uVar11 <= (int)uStack0000000000000034) {
    plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)System_ComponentModel_DateTimeOffsetConverter_var);
    *(long **)(unaff_x19 + 0x50) = plVar9;
    if (plVar9 != (long *)0x0) {
      uVar11 = 0;
      goto LAB_013f22b4;
    }
    goto LAB_013f23ec;
  }
  if (uVar11 <= uStack0000000000000034) goto LAB_013f2428;
  lVar12 = *(long *)(lVar12 + (long)(int)uStack0000000000000034 * 8 + 0x20);
  if (lVar12 == 0) goto LAB_013f23ec;
  uVar15 = *(undefined8 *)(lVar12 + 0x10);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_0268b4e0(uVar15,0,0);
  if ((uVar6 & 1) != 0) {
    uVar15 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
    uVar15 = FUN_01600424(*(undefined8 *)UnityEngine_Rendering_UI_DebugUIHandlerMessageBox_TypeInfo,
                          uVar15,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                          ,0);
LAB_013f2178:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x24);
    }
    goto LAB_013f2194;
  }
  lVar12 = *(long *)(lVar12 + 0x18);
  iStack0000000000000030 = 0;
  if (lVar12 == 0) goto LAB_013f23ec;
  if (0 < *(int *)(lVar12 + 0x18)) {
    do {
      FUN_0132138c(lVar12,iStack0000000000000030,&stack0x00000038,*(undefined8 *)puVar3);
      if (in_stack_00000038 == 0) goto LAB_013f23ec;
      iVar17 = 0;
      while( true ) {
        if (*(long *)(in_stack_00000038 + 0x18) == 0) goto LAB_013f23ec;
        if (*(int *)(*(long *)(in_stack_00000038 + 0x18) + 0x18) <= iVar17) break;
        FUN_0132138c(lVar12,iStack0000000000000030,&stack0x00000038,*(undefined8 *)puVar3);
        if (((in_stack_00000038 == 0) || (*(long *)(in_stack_00000038 + 0x18) == 0)) ||
           (FUN_0132138c(*(long *)(in_stack_00000038 + 0x18),iVar17,&stack0x00000038,
                         *(undefined8 *)puVar4), lVar10 = in_stack_00000038, in_stack_00000038 == 0)
           ) goto LAB_013f23ec;
        uVar15 = *(undefined8 *)(in_stack_00000038 + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_0268b4e0(uVar15,0,0);
        if ((uVar6 & 1) != 0) {
          uVar15 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
          uVar8 = FUN_0176eb1c(&stack0x00000030,0);
          uVar15 = FUN_0160073c(*(undefined8 *)Method_System_RuntimeType_GetObjectData__,uVar15,
                                *(undefined8 *)
                                 System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_TypeInfo
                                ,uVar8,0);
          goto LAB_013f2178;
        }
                    /* try { // try from 013f1d8c to 014f2157 has its CatchHandler @ 013f1d8c
                       catch() { ... } // from try @ 013f1d8c with catch @ 013f1d8c
                       catch() { ... } // from try @ 013f2214 with catch @ 013f1d8c
                       catch() { ... } // from try @ 013f225c with catch @ 013f1d8c
                       catch() { ... } // from try @ 013f22cc with catch @ 013f1d8c
                       catch() { ... } // from try @ 013f2328 with catch @ 013f1d8c
                       catch() { ... } // from try @ 013f23dc with catch @ 013f1d8c
                       catch() { ... } // from try @ 013f23e4 with catch @ 013f1d8c
                       catch() { ... } // from try @ 013f2490 with catch @ 013f1d8c */
        FUN_0132138c(lVar12,iStack0000000000000030,&stack0x00000038,*(undefined8 *)puVar3);
        if (in_stack_00000038 == 0) goto LAB_013f23ec;
        if (*(char *)(in_stack_00000038 + 0x10) != '\0') {
          uVar15 = *(undefined8 *)(lVar10 + 0x18);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_0268b4e0(uVar15,0,0);
          if ((uVar6 & 1) != 0) {
            plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
            puVar4 = 
            Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__;
            puVar3 = UnityEngine_InputSystem_InputActionState_TypeInfo;
            puVar2 = 
            System_Collections_Generic_LinkedList<ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>>_TypeInfo
            ;
            if (plVar9 == (long *)0x0) goto LAB_013f23ec;
            if ((*(long *)
                  Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__
                 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(*(long *)
                                             Method_UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>__ctor__
                                            ,*(undefined8 *)(*plVar9 + 0x40)), lVar12 == 0))
            goto LAB_013f242c;
            if ((int)plVar9[3] == 0) goto LAB_013f2428;
            plVar9[4] = *(long *)puVar4;
            lVar12 = FUN_0176eb1c((long)&stack0x00000030 + 4,0);
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_013f242c;
            uVar11 = *(uint *)(plVar9 + 3);
            if (uVar11 < 2) goto LAB_013f2428;
            plVar9[5] = lVar12;
            lVar12 = *(long *)puVar2;
            if (lVar12 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar12 == 0) goto LAB_013f242c;
              uVar11 = *(uint *)(plVar9 + 3);
            }
            if (uVar11 < 3) goto LAB_013f2428;
            plVar9[6] = *(long *)puVar2;
            lVar12 = FUN_0176eb1c(&stack0x00000030,0);
            if ((lVar12 != 0) &&
               (lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
            goto LAB_013f242c;
            uVar11 = *(uint *)(plVar9 + 3);
            if (uVar11 < 4) goto LAB_013f2428;
            plVar9[7] = lVar12;
            lVar12 = *(long *)puVar3;
            if (lVar12 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar12 == 0) goto LAB_013f242c;
                    /* try { // try from 013f2158 to 014f217f has its CatchHandler @ 013f2404 */
              uVar11 = *(uint *)(plVar9 + 3);
            }
            if (uVar11 < 5) goto LAB_013f2428;
            plVar9[8] = *(long *)puVar3;
            uVar15 = FUN_01600844(plVar9,0);
            goto LAB_013f2178;
          }
        }
        iVar17 = iVar17 + 1;
        FUN_0132138c(lVar12,iStack0000000000000030,&stack0x00000038,*(undefined8 *)puVar3);
        if (in_stack_00000038 == 0) goto LAB_013f23ec;
      }
      iStack0000000000000030 = iStack0000000000000030 + 1;
    } while (iStack0000000000000030 < *(int *)(lVar12 + 0x18));
  }
  uStack0000000000000034 = uStack0000000000000034 + 1;
  lVar12 = unaff_x20[0x14];
  goto joined_r0x013f1c6c;
LAB_013f22b4:
                    /* try { // try from 013f22b4 to 014f22cb has its CatchHandler @ 013f23f8 */
  if ((int)plVar9[3] <= (int)uVar11) {
    *(undefined4 *)(unaff_x19 + 0x58) = 0;
    if (plVar9 != (long *)0x0) {
      if ((int)plVar9[3] < 1) {
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          if (*(char *)(*(long *)(unaff_x19 + 0x28) + 0x10) == '\0') {
            if (unaff_x20 != (long *)0x0) {
              if (*(int *)((long)unaff_x20 + 0x24) < 3) {
                return 0;
              }
              iVar17 = *(int *)(*unaff_x24 + 0xe0);
              puVar7 = (undefined8 *)
                       Method_System_Collections_Generic_List<OVRInput_OVRControllerBase>_get_Item__
              ;
              goto joined_r0x013f225c;
            }
          }
          else if (unaff_x20 != (long *)0x0) {
            FUN_013efe00();
            puVar2 = StringLiteral_2590;
            plVar9 = *(long **)(unaff_x19 + 0x30);
            if (plVar9 == (long *)0x0) goto LAB_013f21d4;
            uVar15 = (**(code **)(*unaff_x20 + 0x178))();
            lVar12 = *plVar9;
            uVar6 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar6 == 0) goto LAB_013f1fac;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_013f1f94;
          }
        }
      }
      else {
        if ((int)plVar9[3] == 0) goto LAB_013f2428;
        if ((unaff_x20 != (long *)0x0) && (lVar12 = unaff_x20[0x14], lVar12 != 0)) {
          if (*(int *)(lVar12 + 0x18) != 0) {
            uVar18 = *(undefined8 *)(lVar12 + 0x20);
            lVar10 = unaff_x20[0x15];
            lVar14 = unaff_x20[0x16];
            uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
            lVar16 = plVar9[4];
            uVar15 = (**(code **)(*unaff_x20 + 0x318))();
            (**(code **)(*unaff_x20 + 0x338))();
            uVar15 = FUN_01460f08(*(undefined4 *)(unaff_x19 + 0x4c),0,lVar16,uVar18,lVar14,uVar8,
                                  lVar10,lVar12,uVar15);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar15;
            *(undefined4 *)(unaff_x19 + 0x10) = 1;
            return 1;
          }
LAB_013f2428:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
    goto LAB_013f23ec;
  }
                    /* try { // try from 013f22cc to 014f22f7 has its CatchHandler @ 013f1d8c */
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)
                               Field_<PrivateImplementationDetails>_6AA56C4BCD208911792AD24C7681FEFB93BED51903AFC54860C9BD37E41E5A31
                             );
  if (lVar12 == 0) goto LAB_013f23ec;
  FUN_017b46ec(lVar12,0);
  lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40));
  if (lVar10 == 0) {
LAB_013f242c:
    uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar15,0);
  }
                    /* try { // try from 013f22f8 to 014f2327 has its CatchHandler @ 013f23fc */
  if (*(uint *)(plVar9 + 3) <= uVar11) goto LAB_013f2428;
  lVar10 = (long)(int)uVar11;
  plVar9[lVar10 + 4] = lVar12;
  lVar12 = unaff_x20[0x14];
  if (lVar12 == 0) goto LAB_013f23ec;
  if (*(uint *)(lVar12 + 0x18) <= uVar11) goto LAB_013f2428;
  lVar12 = *(long *)(lVar12 + lVar10 * 8 + 0x20);
                    /* try { // try from 013f2328 to 014f23cf has its CatchHandler @ 013f1d8c */
  if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x18), lVar12 == 0)) ||
     (lVar14 = *(long *)(unaff_x19 + 0x50), lVar14 == 0)) goto LAB_013f23ec;
  if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_013f2428;
  lVar10 = *(long *)(lVar14 + lVar10 * 8 + 0x20);
  uVar1 = *(uint *)(lVar12 + 0x18);
  plVar9 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_Add__
                                ,(ulong)uVar1);
  if (lVar10 == 0) goto LAB_013f23ec;
  *(long **)(lVar10 + 0x10) = plVar9;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
      if ((lVar12 == 0) || (FUN_017b46ec(lVar12,0), plVar9 == (long *)0x0)) goto LAB_013f23ec;
      lVar10 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar9 + 0x40));
      if (lVar10 == 0) goto LAB_013f242c;
      if (*(uint *)(plVar9 + 3) <= uVar6) goto LAB_013f2428;
      plVar9[uVar6 + 4] = lVar12;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  plVar9 = *(long **)(unaff_x19 + 0x50);
  uVar11 = uVar11 + 1;
  if (plVar9 == (long *)0x0) goto LAB_013f23ec;
  goto LAB_013f22b4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_013f1f94:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 0x17) * 0x10 + 0x138);
      goto LAB_013f21c4;
    }
  }
LAB_013f1fac:
  puVar7 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar2,0x17);
LAB_013f21c4:
  (*(code *)*puVar7)(plVar9,uVar15,puVar7[1]);
LAB_013f21d4:
  lVar12 = (**(code **)(*unaff_x20 + 0x178))();
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x1c) = 1;
    puVar2 = Method_System_Xml_Schema_Compiler_CompileAttribute__;
    lVar12 = (**(code **)(*unaff_x20 + 0x178))();
                    /* try { // try from 013f2214 to 014f2233 has its CatchHandler @ 013f1d8c */
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar2,0);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x28) = uVar15;
      lVar12 = (**(code **)(*unaff_x20 + 0x178))();
                    /* try { // try from 013f2234 to 014f225b has its CatchHandler @ 013f2400 */
      if (lVar12 != 0) {
        *(long *)(lVar12 + 0x30) = unaff_x20[0x14];
        if (2 < *(int *)((long)unaff_x20 + 0x24)) {
          iVar17 = *(int *)(*unaff_x24 + 0xe0);
          puVar7 = (undefined8 *)System_Xml_ValidateNames_TypeInfo;
joined_r0x013f225c:
                    /* try { // try from 013f225c to 014f22b3 has its CatchHandler @ 013f1d8c */
          if (iVar17 == 0) {
            thunk_FUN_00d32864();
          }
          FUN_02660dac(*puVar7,0);
        }
        return 0;
      }
    }
  }
LAB_013f23ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


