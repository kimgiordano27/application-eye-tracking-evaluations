/*
FUNCTION_NAME: FUN_0646a618
ENTRY_POINT: 0646a618
PROGRAM: Untangled-libil2cpp.so
SCORE: 127
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_permission_setup;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_6
*/


void FUN_0646a618(long *param_1,long *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint uVar15;
  
                    /* try { // try from 0646a624 to 0656a62b has its CatchHandler @ 0646a864 */
  if ((DAT_071cdaec & 1) == 0) {
    FUN_02f07e70(System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo);
                    /* try { // try from 0646a648 to 0656a65f has its CatchHandler @ 0646a894 */
    FUN_02f07e70(System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<Exception>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<int4>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<ExceptionDispatchInfo>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d02350);
    FUN_02f07e70(System_Collections_Generic_HashSet<VisualElement>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<Expression>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<ExtensionDataMember>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<Flow>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<Graphic>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<Group>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<IDataNode>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d510f0);
    FUN_02f07e70(System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d5e910);
    FUN_02f07e70(System_Collections_Generic_ICollection<IEventSystemHandler>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<IUnitRelation>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<int>_TypeInfo);
    FUN_02f07e70(System_Collections_Generic_ICollection<InvalidInput>_TypeInfo);
    DAT_071cdaec = 1;
  }
  puVar4 = System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
  if (param_2 == (long *)0x0) {
LAB_0646af28:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
  puVar3 = System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
  lVar12 = *param_2;
  bVar1 = *(byte *)(lVar12 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
    lVar12 = param_2[0x18];
    lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar10 = *(long *)puVar3;
    }
    puVar13 = (undefined8 *)
              System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
    if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (param_3 == 0) goto LAB_0646af28;
      if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_2 + 0x18)) goto LAB_0646af2c;
      puVar13 = (undefined8 *)(param_3 + (long)(int)*(uint *)(param_2 + 0x18) * 8 + 0x20);
    }
    uVar11 = *puVar13;
    uVar7 = (**(code **)(*param_1 + 0x218))(param_1,param_2[0x14],*(undefined8 *)(*param_1 + 0x220))
    ;
    puVar13 = (undefined8 *)System_Collections_Generic_ICollection<IUnitRelation>_TypeInfo;
LAB_0646abb4:
    uVar14 = *puVar13;
    puVar13 = (undefined8 *)System_Collections_Generic_ICollection<int>_TypeInfo;
LAB_0646abc8:
    FUN_05465734(uVar14,uVar7,*puVar13,uVar11,0);
    return;
  }
  bVar2 = *(byte *)(*(long *)
                     System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                   + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo)) {
    lVar12 = param_2[0x18];
    lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar10 = *(long *)puVar3;
    }
    puVar13 = (undefined8 *)
              System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
    if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (param_3 == 0) goto LAB_0646af28;
      if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_2 + 0x18)) goto LAB_0646af2c;
      puVar13 = (undefined8 *)(param_3 + (long)(int)*(uint *)(param_2 + 0x18) * 8 + 0x20);
    }
    uVar7 = *puVar13;
    uVar11 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_2[0x14],*(undefined8 *)(*param_1 + 0x220));
    uVar14 = *(undefined8 *)System_Collections_Generic_ICollection<Group>_TypeInfo;
    puVar13 = (undefined8 *)PTR_DAT_06d510f0;
    goto LAB_0646abc8;
  }
  bVar2 = *(byte *)(*(long *)System_Collections_Generic_HashSet<int4>_TypeInfo + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_HashSet<int4>_TypeInfo)) {
    lVar12 = param_2[0x18];
    lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar10 = *(long *)puVar3;
    }
    puVar13 = (undefined8 *)
              System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
    if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (param_3 == 0) goto LAB_0646af28;
      if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_2 + 0x18)) goto LAB_0646af2c;
      puVar13 = (undefined8 *)(param_3 + (long)(int)*(uint *)(param_2 + 0x18) * 8 + 0x20);
    }
    uVar11 = *puVar13;
    uVar7 = (**(code **)(*param_1 + 0x218))(param_1,param_2[0x14],*(undefined8 *)(*param_1 + 0x220))
    ;
    puVar13 = (undefined8 *)System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
    ;
    goto LAB_0646abb4;
  }
  bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<ExceptionDispatchInfo>_TypeInfo
                   + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)System_Collections_Generic_ICollection<ExceptionDispatchInfo>_TypeInfo)) {
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                     + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo)) {
      uVar11 = (**(code **)(*param_1 + 0x218))
                         (param_1,param_2[0x14],*(undefined8 *)(*param_1 + 0x220));
      puVar13 = (undefined8 *)System_Collections_Generic_ICollection<InvalidInput>_TypeInfo;
LAB_0646ab54:
      FUN_05458458(*puVar13,uVar11,0);
      return;
    }
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo
                     + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo)) {
      uVar11 = (**(code **)(*param_1 + 0x218))
                         (param_1,param_2[0x14],*(undefined8 *)(*param_1 + 0x220));
      puVar13 = (undefined8 *)System_Collections_Generic_ICollection<ExtensionDataMember>_TypeInfo;
      goto LAB_0646ab54;
    }
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)
                         System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo)) {
        bVar2 = *(byte *)(*(long *)
                           System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo
                         + 0x130);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo))
        {
          return;
        }
        lVar12 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,5);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) != 0) {
            *(undefined8 *)(lVar12 + 0x20) =
                 *(undefined8 *)System_Collections_Generic_ICollection<Flow>_TypeInfo;
            thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x20));
            if (1 < *(uint *)(lVar12 + 0x18)) {
              *(long *)(lVar12 + 0x28) = param_2[0x18];
              thunk_FUN_02f411dc((long *)(lVar12 + 0x28));
              if (2 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x30) =
                     *(undefined8 *)System_Collections_Generic_ICollection<Expression>_TypeInfo;
                thunk_FUN_02f411dc((undefined8 *)(lVar12 + 0x30));
                if (3 < *(uint *)(lVar12 + 0x18)) {
                  *(long *)(lVar12 + 0x38) = param_2[0x19];
                  thunk_FUN_02f411dc((long *)(lVar12 + 0x38));
                  if (4 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x40) =
                         *(undefined8 *)
                          System_Collections_Generic_ICollection<IEventSystemHandler>_TypeInfo;
                    thunk_FUN_02f411dc();
                    FUN_0546583c(lVar12,0);
                    return;
                  }
                }
              }
            }
          }
          goto LAB_0646af2c;
        }
        goto LAB_0646af28;
      }
    }
    plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,4);
    puVar4 = System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo;
    if (plVar6 == (long *)0x0) goto LAB_0646af28;
    if (*(long *)System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = thunk_FUN_02ef170c(*(long *)
                                   System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
                                  ,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar12 == 0) goto LAB_0646af30;
      lVar12 = *(long *)puVar4;
    }
    if ((int)plVar6[3] == 0) goto LAB_0646af2c;
    plVar6[4] = lVar12;
    thunk_FUN_02f411dc();
    lVar12 = (**(code **)(*param_1 + 0x218))
                       (param_1,param_2[0x14],*(undefined8 *)(*param_1 + 0x220));
    if ((lVar12 != 0) &&
       (lVar10 = thunk_FUN_02ef170c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
    goto LAB_0646af30;
    if (1 < *(uint *)(plVar6 + 3)) {
      plVar6[5] = lVar12;
      thunk_FUN_02f411dc(plVar6 + 5,lVar12);
      puVar4 = System_Collections_Generic_ICollection<IDataNode>_TypeInfo;
      if (*(long *)System_Collections_Generic_ICollection<IDataNode>_TypeInfo == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = thunk_FUN_02ef170c(*(long *)
                                     System_Collections_Generic_ICollection<IDataNode>_TypeInfo,
                                    *(undefined8 *)(*plVar6 + 0x40));
        if (lVar12 == 0) goto LAB_0646af30;
        lVar12 = *(long *)puVar4;
      }
      if (*(uint *)(plVar6 + 3) < 3) goto LAB_0646af2c;
      plVar6[6] = lVar12;
      thunk_FUN_02f411dc();
      lVar12 = param_2[0x18];
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_02ef170c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_0646af30;
      if (*(uint *)(plVar6 + 3) < 4) goto LAB_0646af2c;
      plVar8 = plVar6 + 7;
      *plVar8 = lVar12;
      goto LAB_0646ae28;
    }
    goto LAB_0646af2c;
  }
  lVar12 = param_2[0x18];
  lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar10 = *(long *)puVar3;
  }
  plVar6 = (long *)System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
  if ((int)lVar12 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
    if (param_3 == 0) goto LAB_0646af28;
    if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_2 + 0x18)) goto LAB_0646af2c;
    plVar6 = (long *)(param_3 + (long)(int)*(uint *)(param_2 + 0x18) * 8 + 0x20);
  }
  lVar12 = *plVar6;
  plVar6 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,4);
  puVar4 = System_Collections_Generic_ICollection<Graphic>_TypeInfo;
  if (plVar6 == (long *)0x0) goto LAB_0646af28;
  if (*(long *)System_Collections_Generic_ICollection<Graphic>_TypeInfo == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = thunk_FUN_02ef170c(*(long *)System_Collections_Generic_ICollection<Graphic>_TypeInfo,
                                *(undefined8 *)(*plVar6 + 0x40));
    if (lVar10 == 0) goto LAB_0646af30;
    lVar10 = *(long *)puVar4;
  }
  if ((int)plVar6[3] == 0) goto LAB_0646af2c;
  plVar6[4] = lVar10;
  thunk_FUN_02f411dc();
  param_2 = param_2 + 0x15;
  plVar8 = (long *)*param_2;
  uVar15 = (uint)(plVar8 != (long *)0x0);
  if (plVar8 == (long *)0x0) {
    uVar5 = 1;
LAB_0646ac88:
    uVar15 = uVar5;
    param_2 = *(long **)(*(long *)PTR_DAT_06d02350 + 0xb8);
  }
  else {
    lVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    uVar5 = (uint)(plVar8 != (long *)0x0);
    if (lVar10 == 0) goto LAB_0646ac88;
  }
  lVar10 = *param_2;
  if ((lVar10 != 0) &&
     (lVar9 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_0646af30:
    uVar11 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar11,0);
  }
  if (uVar15 < *(uint *)(plVar6 + 3)) {
    plVar6[(ulong)uVar15 + 4] = lVar10;
    thunk_FUN_02f411dc(plVar6 + (ulong)uVar15 + 4,lVar10);
    puVar4 = System_Collections_Generic_ICollection<int>_TypeInfo;
    if (*(long *)System_Collections_Generic_ICollection<int>_TypeInfo == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = thunk_FUN_02ef170c(*(long *)System_Collections_Generic_ICollection<int>_TypeInfo,
                                  *(undefined8 *)(*plVar6 + 0x40));
      if (lVar10 == 0) goto LAB_0646af30;
      lVar10 = *(long *)puVar4;
    }
    if (2 < *(uint *)(plVar6 + 3)) {
      plVar6[6] = lVar10;
      thunk_FUN_02f411dc();
      if ((lVar12 != 0) &&
         (lVar10 = thunk_FUN_02ef170c(lVar12,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0))
      goto LAB_0646af30;
      if (3 < *(uint *)(plVar6 + 3)) {
        plVar8 = plVar6 + 7;
        *plVar8 = lVar12;
LAB_0646ae28:
        thunk_FUN_02f411dc(plVar8,lVar12);
        FUN_054654d4(plVar6,0);
        return;
      }
    }
  }
LAB_0646af2c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


