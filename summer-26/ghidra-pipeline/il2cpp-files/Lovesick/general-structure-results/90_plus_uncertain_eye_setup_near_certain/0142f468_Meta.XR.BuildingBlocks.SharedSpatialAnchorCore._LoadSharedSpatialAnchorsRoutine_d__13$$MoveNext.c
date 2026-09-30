/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore.<LoadSharedSpatialAnchorsRoutine>d__13$$MoveNext
ENTRY_POINT: 0142f468
PROGRAM: Lovesick-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_BuildingBlocks_SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13__MoveNext
               (undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  uint uVar16;
  long *unaff_x19;
  int iVar17;
  long unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  long lVar18;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  int iStack0000000000000024;
  int iStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  while( true ) {
    lVar12 = thunk_FUN_00d61fa0(param_1,param_2);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x23 + 0x40)), lVar13 == 0))
    goto LAB_0142fba4;
    if (*(uint *)(unaff_x23 + 3) < 5) goto LAB_0142fba0;
    unaff_x23[8] = lVar12;
    if ((*(long *)(unaff_x20 + 0x10) == 0) ||
       (lVar12 = FUN_013fba34(*(long *)(unaff_x20 + 0x10),0), lVar12 == 0)) break;
    in_stack_00000008._4_4_ = FUN_02681c0c(lVar12,0);
    lVar12 = thunk_FUN_00d61fa0(*unaff_x28,(long)&stack0x00000008 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x23 + 0x40)), lVar13 == 0))
    goto LAB_0142fba4;
    if (*(uint *)(unaff_x23 + 3) < 6) goto LAB_0142fba0;
    unaff_x23[9] = lVar12;
    FUN_013f38b0(*(undefined8 *)PTR_DAT_033eaaf8,unaff_x23,0);
LAB_0142f50c:
    do {
      plVar14 = *(long **)(unaff_x20 + 0x10);
      if (plVar14 == (long *)0x0) goto LAB_0142fb9c;
      plVar14 = (long *)(**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0));
      if ((*(long *)(unaff_x20 + 0x10) == 0) ||
         (uVar15 = FUN_013fba34(*(long *)(unaff_x20 + 0x10),0), plVar14 == (long *)0x0))
      goto LAB_0142fb9c;
      lVar12 = *plVar14;
      bVar1 = *(byte *)(*(long *)PTR_DAT_033f17f8 + 300);
      if ((*(byte *)(lVar12 + 300) < bVar1) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_033f17f8))
      {
        lVar13 = *(long *)
                  Method_System_Collections_Generic_Dictionary<string,_WitResponseNode>_get_Count__;
        if ((*(byte *)(lVar12 + 300) < *(byte *)(lVar13 + 300)) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)*(byte *)(lVar13 + 300) * 8 + -8) != lVar13))
        {
LAB_0142fbb0:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar14);
        }
        if ((*(byte *)(*plVar14 + 300) < *(byte *)(lVar13 + 300)) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)*(byte *)(lVar13 + 300) * 8 + -8) != lVar13
           )) goto LAB_0142fbb0;
        FUN_02669a58(plVar14,uVar15,0);
      }
      else {
        lVar12 = FUN_0268fd4c(plVar14,0);
        if (lVar12 == 0) goto LAB_0142fb9c;
        FUN_010e58e8(lVar12,&stack0x00000028,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<IXRHoverInteractable>_GetEnumerator__);
        if (CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) goto LAB_0142fb9c;
        FUN_02666150(CONCAT44(uStack000000000000002c,iStack0000000000000028),uVar15,0);
      }
      puVar6 = StringLiteral_13354;
      lVar12 = unaff_x19[0x13];
      unaff_w21 = unaff_w21 + 1;
      if (lVar12 == 0) goto LAB_0142fb9c;
      iVar8 = *(int *)(lVar12 + 0x18);
      if (iVar8 <= unaff_w21) {
        if (iVar8 < 1) goto LAB_0142f6d0;
        iVar17 = 0;
        goto LAB_0142f63c;
      }
      FUN_0132138c(lVar12,unaff_w21,&stack0x00000028,*(undefined8 *)StringLiteral_13354);
      unaff_x20 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
      if ((unaff_x20 == 0) || (plVar14 = *(long **)(unaff_x20 + 0x10), plVar14 == (long *)0x0))
      goto LAB_0142fb9c;
      uVar15 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0));
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar9 = FUN_0268b4e0(uVar15,0,0);
      if ((uVar9 & 1) == 0) {
        uVar15 = (**(code **)(*unaff_x19 + 0x4b8))();
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar9 = FUN_02681b9c(uVar15,0,0);
        if ((uVar9 & 1) != 0) {
          plVar14 = *(long **)(unaff_x20 + 0x10);
          if (((plVar14 == (long *)0x0) ||
              (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
              lVar12 == 0)) || (lVar12 = FUN_0268fd10(lVar12,0), lVar12 == 0)) goto LAB_0142fb9c;
          uVar15 = FUN_0269fe30(lVar12,0);
          lVar12 = (**(code **)(*unaff_x19 + 0x4b8))();
          if (lVar12 == 0) goto LAB_0142fb9c;
          uVar11 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar12,0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar9 = FUN_02681b9c(uVar15,uVar11,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_026610e4(*(undefined8 *)StringLiteral_7233,0);
            return false;
          }
        }
      }
      else {
        plVar14 = *(long **)(unaff_x20 + 0x10);
        if (plVar14 == (long *)0x0) goto LAB_0142fb9c;
        (**(code **)(*plVar14 + 0x4c8))(plVar14,unaff_x19[5],*(undefined8 *)(*plVar14 + 0x4d0));
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0142fb9c;
        FUN_01402b58(*(long *)(unaff_x20 + 0x10),in_stack_00000000,1,0);
        if (3 < (int)unaff_x19[7]) {
          plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,4);
          iStack0000000000000028 = unaff_w21;
          lVar12 = thunk_FUN_00d61fa0(*unaff_x28,&stack0x00000028);
          if (plVar14 == (long *)0x0) goto LAB_0142fb9c;
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0142fba4;
          if ((int)plVar14[3] == 0) goto LAB_0142fba0;
          plVar14[4] = lVar12;
          plVar10 = *(long **)(unaff_x20 + 0x10);
          if (((plVar10 == (long *)0x0) ||
              (lVar12 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0)),
              lVar12 == 0)) || (lVar12 = FUN_0268fd4c(lVar12,0), lVar12 == 0)) goto LAB_0142fb9c;
          uStack000000000000001c = FUN_02681c0c(lVar12,0);
          lVar12 = thunk_FUN_00d61fa0(*unaff_x28,(long)&stack0x00000018 + 4);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar14 + 3) < 2) goto LAB_0142fba0;
          plVar14[5] = lVar12;
          plVar10 = *(long **)(unaff_x20 + 0x10);
          if ((plVar10 == (long *)0x0) ||
             (lVar12 = (**(code **)(*plVar10 + 0x4d8))(plVar10,*(undefined8 *)(*plVar10 + 0x4e0)),
             lVar12 == 0)) goto LAB_0142fb9c;
          uStack0000000000000018 = FUN_02681c0c(lVar12,0);
          lVar12 = thunk_FUN_00d61fa0(*unaff_x28,&stack0x00000018);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar14 + 3) < 3) goto LAB_0142fba0;
          plVar14[6] = lVar12;
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (lVar12 = FUN_013fba34(*(long *)(unaff_x20 + 0x10),0), lVar12 == 0)) goto LAB_0142fb9c;
          uStack0000000000000014 = FUN_02681c0c(lVar12,0);
          lVar12 = thunk_FUN_00d61fa0(*unaff_x28,(long)&stack0x00000010 + 4);
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
          goto LAB_0142fba4;
          if (*(uint *)(plVar14 + 3) < 4) goto LAB_0142fba0;
          plVar14[7] = lVar12;
          FUN_013f38b0(*(undefined8 *)Method_System_Collections_Generic_List<WeakReference>__ctor__,
                       plVar14,0);
        }
      }
      lVar12 = *(long *)(unaff_x20 + 0x28);
      if (lVar12 == 0) goto LAB_0142fb9c;
      if (*(int *)(lVar12 + 0x18) < 1) {
        if (*(long *)(unaff_x20 + 0x30) == 0) goto LAB_0142fb9c;
        if (*(int *)(*(long *)(unaff_x20 + 0x30) + 0x18) < 1) goto LAB_0142f50c;
      }
      plVar14 = *(long **)(unaff_x20 + 0x10);
      uVar15 = FUN_01325140(lVar12,*(undefined8 *)
                                    Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c_TypeInfo
                           );
      if ((*(long *)(unaff_x20 + 0x30) == 0) ||
         (uVar11 = FUN_01325140(*(long *)(unaff_x20 + 0x30),*(undefined8 *)StringLiteral_10837),
         plVar14 == (long *)0x0)) goto LAB_0142fb9c;
      (**(code **)(*plVar14 + 0x8e8))
                (plVar14,uVar15,uVar11,unaff_w22,*(undefined8 *)(*plVar14 + 0x8f0));
    } while ((int)unaff_x19[7] < 4);
    unaff_x23 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,6);
    iStack0000000000000028 = unaff_w21;
    lVar12 = thunk_FUN_00d61fa0(*unaff_x28,&stack0x00000028);
    if (unaff_x23 == (long *)0x0) break;
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x23 + 0x40)), lVar13 == 0))
    goto LAB_0142fba4;
    if ((int)unaff_x23[3] == 0) goto LAB_0142fba0;
    unaff_x23[4] = lVar12;
    if (*(long *)(unaff_x20 + 0x28) == 0) break;
    uStack000000000000001c = *(undefined4 *)(*(long *)(unaff_x20 + 0x28) + 0x18);
    lVar12 = thunk_FUN_00d61fa0(*unaff_x28,(long)&stack0x00000018 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x23 + 0x40)), lVar13 == 0))
    goto LAB_0142fba4;
    if (*(uint *)(unaff_x23 + 3) < 2) goto LAB_0142fba0;
    unaff_x23[5] = lVar12;
    if (*(long *)(unaff_x20 + 0x30) == 0) break;
    uStack0000000000000018 = *(undefined4 *)(*(long *)(unaff_x20 + 0x30) + 0x18);
    lVar12 = thunk_FUN_00d61fa0(*unaff_x28,&stack0x00000018);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x23 + 0x40)), lVar13 == 0))
    goto LAB_0142fba4;
    if (*(uint *)(unaff_x23 + 3) < 3) goto LAB_0142fba0;
    unaff_x23[6] = lVar12;
    plVar14 = *(long **)(unaff_x20 + 0x10);
    if (((plVar14 == (long *)0x0) ||
        (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
        lVar12 == 0)) || (lVar12 = FUN_0268fd4c(lVar12,0), lVar12 == 0)) break;
    uStack0000000000000014 = FUN_02681c0c(lVar12,0);
    lVar12 = thunk_FUN_00d61fa0(*unaff_x28,(long)&stack0x00000010 + 4);
    if ((lVar12 != 0) &&
       (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*unaff_x23 + 0x40)), lVar13 == 0))
    goto LAB_0142fba4;
    if (*(uint *)(unaff_x23 + 3) < 4) goto LAB_0142fba0;
    unaff_x23[7] = lVar12;
    plVar14 = *(long **)(unaff_x20 + 0x10);
    if ((plVar14 == (long *)0x0) ||
       (lVar12 = (**(code **)(*plVar14 + 0x4d8))(plVar14,*(undefined8 *)(*plVar14 + 0x4e0)),
       lVar12 == 0)) break;
    uStack0000000000000010 = FUN_02681c0c(lVar12,0);
    param_1 = *unaff_x28;
    param_2 = (undefined8 *)&stack0x00000010;
  }
  goto LAB_0142fb9c;
  while( true ) {
    iVar8 = 0;
    while (iVar8 < *(int *)(lVar13 + 0x18)) {
      lVar18 = unaff_x19[0x12];
      FUN_0132138c(lVar13,iVar8,&stack0x00000028,*unaff_x27);
      if (lVar18 == 0) goto LAB_0142fb9c;
      FUN_0129de0c(lVar18,&stack0x00000028,*unaff_x29);
      lVar13 = *(long *)(lVar12 + 0x30);
      iVar8 = iVar8 + 1;
      if (lVar13 == 0) goto LAB_0142fb9c;
    }
    lVar12 = unaff_x19[0x13];
    if (lVar12 == 0) goto LAB_0142fb9c;
    iVar8 = *(int *)(lVar12 + 0x18);
    iVar17 = iVar17 + 1;
    if (iVar8 <= iVar17) break;
LAB_0142f63c:
    FUN_0132138c(lVar12,iVar17,&stack0x00000028,*(undefined8 *)puVar6);
    lVar12 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
    if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x30), lVar13 == 0)) goto LAB_0142fb9c;
  }
LAB_0142f6d0:
  puVar3 = StringLiteral_4997;
  puVar2 = Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__;
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      FUN_0132138c(lVar12,iVar8,&stack0x00000028,*(undefined8 *)puVar6);
      lVar12 = CONCAT44(uStack000000000000002c,iStack0000000000000028);
      if ((lVar12 == 0) || (lVar13 = *(long *)(lVar12 + 0x28), lVar13 == 0)) goto LAB_0142fb9c;
      iVar17 = 0;
      while (iVar17 < *(int *)(lVar13 + 0x18)) {
        lVar18 = unaff_x19[0x12];
        FUN_0132138c(lVar13,iVar17,&stack0x00000028,*unaff_x26);
        if ((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
           (iVar7 = FUN_02681c0c(CONCAT44(uStack000000000000002c,iStack0000000000000028),0),
           lVar18 == 0)) goto LAB_0142fb9c;
        iStack0000000000000028 = iVar7;
        FUN_0129a054(lVar18,&stack0x00000028,lVar12,*unaff_x25);
        lVar13 = *(long *)(lVar12 + 0x28);
        iVar17 = iVar17 + 1;
        if (lVar13 == 0) goto LAB_0142fb9c;
      }
      lVar18 = *(long *)(lVar12 + 0x30);
      if (*(int *)(lVar13 + 0x18) < 1) {
        if (lVar18 == 0) goto LAB_0142fb9c;
        if (0 < *(int *)(lVar18 + 0x18)) goto LAB_0142f794;
      }
      else {
        if (lVar18 == 0) goto LAB_0142fb9c;
LAB_0142f794:
        lVar13 = *(long *)puVar2;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
        if ((uVar9 & 1) == 0) {
          *(undefined4 *)(lVar18 + 0x18) = 0;
        }
        else {
          iVar17 = *(int *)(lVar18 + 0x18);
          *(undefined4 *)(lVar18 + 0x18) = 0;
          if (0 < iVar17) {
            FUN_0179519c(*(undefined8 *)(lVar18 + 0x10),0,iVar17,0);
          }
        }
        lVar13 = *(long *)(lVar12 + 0x28);
        if (lVar13 == 0) goto LAB_0142fb9c;
        lVar18 = *(long *)puVar3;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
        if ((uVar9 & 1) == 0) {
          *(undefined4 *)(lVar13 + 0x18) = 0;
        }
        else {
          iVar17 = *(int *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          if (0 < iVar17) {
            FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar17,0);
          }
        }
        *(undefined4 *)(lVar12 + 0x1c) = 0;
        *(undefined4 *)(lVar12 + 0x20) = 0;
        *(undefined1 *)(lVar12 + 0x40) = 1;
      }
      lVar12 = unaff_x19[0x13];
      if (lVar12 == 0) goto LAB_0142fb9c;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar12 + 0x18));
  }
  iVar8 = (**(code **)(*unaff_x19 + 0x4f8))();
  puVar5 = Method_TinyJSON_JSON_SupportTypeForAOT<double>__;
  puVar4 = 
  Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__;
  puVar3 = Autohand_GrabbableBase_<IgnoreHandCollision>d__49_TypeInfo;
  puVar2 = PTR_DAT_033ea8a0;
  if (iVar8 < 4) {
LAB_0142fb34:
    if (unaff_x19[0x13] != 0) {
      return 0 < *(int *)(unaff_x19[0x13] + 0x18);
    }
  }
  else {
    iStack0000000000000024 = 0;
    lVar13 = unaff_x19[0x13];
    lVar12 = *(long *)PTR_DAT_033ec5a0;
    if (lVar13 != 0) {
      while (iStack0000000000000024 < *(int *)(lVar13 + 0x18)) {
        plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,6);
        if (plVar14 == (long *)0x0) goto LAB_0142fb9c;
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
        goto LAB_0142fba4;
        uVar16 = *(uint *)(plVar14 + 3);
        if (uVar16 == 0) goto LAB_0142fba0;
        plVar14[4] = lVar12;
        lVar12 = *(long *)puVar3;
        if (lVar12 != 0) {
          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40));
          if (lVar12 == 0) goto LAB_0142fba4;
          uVar16 = *(uint *)(plVar14 + 3);
        }
        if (uVar16 < 2) goto LAB_0142fba0;
        plVar14[5] = *(long *)puVar3;
        lVar12 = FUN_0176eb1c((long)&stack0x00000020 + 4,0);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
        goto LAB_0142fba4;
        uVar16 = *(uint *)(plVar14 + 3);
        if (uVar16 < 3) goto LAB_0142fba0;
        plVar14[6] = lVar12;
        lVar12 = *(long *)puVar4;
        if (lVar12 != 0) {
          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40));
          if (lVar12 == 0) goto LAB_0142fba4;
          uVar16 = *(uint *)(plVar14 + 3);
        }
        if (uVar16 < 4) goto LAB_0142fba0;
        plVar14[7] = *(long *)puVar4;
        if (unaff_x19[0x13] == 0) goto LAB_0142fb9c;
        FUN_0132138c(unaff_x19[0x13],iStack0000000000000024,&stack0x00000028,*(undefined8 *)puVar6);
        if (((CONCAT44(uStack000000000000002c,iStack0000000000000028) == 0) ||
            (plVar10 = *(long **)(CONCAT44(uStack000000000000002c,iStack0000000000000028) + 0x10),
            plVar10 == (long *)0x0)) ||
           (lVar12 = (**(code **)(*plVar10 + 0x818))(plVar10,*(undefined8 *)(*plVar10 + 0x820)),
           lVar12 == 0)) goto LAB_0142fb9c;
        uStack0000000000000020 = *(undefined4 *)(lVar12 + 0x18);
        lVar12 = FUN_0176eb1c(&stack0x00000020,0);
        if ((lVar12 != 0) &&
           (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0))
        goto LAB_0142fba4;
        uVar16 = *(uint *)(plVar14 + 3);
        if (uVar16 < 5) goto LAB_0142fba0;
        plVar14[8] = lVar12;
        lVar12 = *(long *)puVar5;
        if (lVar12 != 0) {
          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40));
          if (lVar12 == 0) goto LAB_0142fba4;
          uVar16 = *(uint *)(plVar14 + 3);
        }
        if (uVar16 < 6) goto LAB_0142fba0;
        plVar14[9] = *(long *)puVar5;
        lVar12 = FUN_01600844(plVar14,0);
        iStack0000000000000024 = iStack0000000000000024 + 1;
        lVar13 = unaff_x19[0x13];
        if (lVar13 == 0) goto LAB_0142fb9c;
      }
      lVar13 = (**(code **)(*unaff_x19 + 0x4b8))();
      if ((lVar13 != 0) &&
         (lVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (lVar13,0), lVar13 != 0)) {
        uStack0000000000000020 = FUN_026a103c(lVar13,0);
        uVar15 = FUN_0176eb1c(&stack0x00000020,0);
        uVar15 = FUN_01600424(lVar12,*(undefined8 *)StringLiteral_10260,uVar15,0);
        plVar14 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
        iStack0000000000000028 = (**(code **)(*unaff_x19 + 0x4f8))();
        lVar12 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_13287,&stack0x00000028);
        if (plVar14 != (long *)0x0) {
          if ((lVar12 != 0) &&
             (lVar13 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar13 == 0)) {
LAB_0142fba4:
            uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar15,0);
          }
          if ((int)plVar14[3] == 0) {
LAB_0142fba0:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar14[4] = lVar12;
          FUN_013f38b0(uVar15,plVar14,0);
          goto LAB_0142fb34;
        }
      }
    }
  }
LAB_0142fb9c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


