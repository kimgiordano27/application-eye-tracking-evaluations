/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection$$HasAttribute
ENTRY_POINT: 0646a7cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_possible_biometrics_hits_4
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection__HasAttribute(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  bool in_ZR;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint in_w9;
  long unaff_x19;
  long *plVar14;
  long *unaff_x20;
  long unaff_x21;
  uint uVar15;
  
  puVar3 = System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
                    /* try { // try from 0646a7cc to 0656a7cf has its CatchHandler @ 0646a8b0 */
  if (in_ZR) {
    iVar1 = *(int *)(unaff_x19 + 0xc0);
    lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar10 = *(long *)puVar3;
    }
    puVar12 = (undefined8 *)
              System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
    if (iVar1 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_0646af28;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_0646af2c;
      puVar12 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
    }
    uVar11 = *puVar12;
    uVar6 = (**(code **)(*unaff_x20 + 0x218))();
    puVar12 = (undefined8 *)System_Collections_Generic_ICollection<IUnitRelation>_TypeInfo;
LAB_0646abb4:
    uVar13 = *puVar12;
    puVar12 = (undefined8 *)System_Collections_Generic_ICollection<int>_TypeInfo;
LAB_0646abc8:
    FUN_05465734(uVar13,uVar6,*puVar12,uVar11,0);
    return;
  }
                    /* try { // try from 0646a7d0 to 0656a7d3 has its CatchHandler @ 0646a8a4 */
                    /* try { // try from 0646a7d4 to 0656a7d7 has its CatchHandler @ 0646a8a0 */
                    /* try { // try from 0646a7d8 to 0656a7db has its CatchHandler @ 0646a89c */
                    /* try { // try from 0646a7dc to 0656a7df has its CatchHandler @ 0646a898 */
  bVar2 = *(byte *)(*(long *)
                     System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                   + 0x130);
                    /* try { // try from 0646a7e0 to 0656a7e7 has its CatchHandler @ 0646a8b0 */
                    /* try { // try from 0646a7e8 to 0656a7eb has its CatchHandler @ 0646a2d8 */
                    /* try { // try from 0646a7ec to 0656a7ef has its CatchHandler @ 0646a888 */
                    /* try { // try from 0646a7f0 to 0656a7f3 has its CatchHandler @ 0646a880 */
                    /* try { // try from 0646a7f4 to 0656a7f7 has its CatchHandler @ 0646a2d8 */
                    /* try { // try from 0646a7f8 to 0656a7fb has its CatchHandler @ 0646a87c */
  if ((bVar2 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo)) {
    iVar1 = *(int *)(unaff_x19 + 0xc0);
    lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar10 = *(long *)puVar3;
    }
    puVar12 = (undefined8 *)
              System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
    if (iVar1 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_0646af28;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_0646af2c;
      puVar12 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
    }
    uVar6 = *puVar12;
    uVar11 = (**(code **)(*unaff_x20 + 0x218))();
    uVar13 = *(undefined8 *)System_Collections_Generic_ICollection<Group>_TypeInfo;
    puVar12 = (undefined8 *)PTR_DAT_06d510f0;
    goto LAB_0646abc8;
  }
                    /* try { // try from 0646a7fc to 0656a7ff has its CatchHandler @ 0646a890 */
                    /* try { // try from 0646a800 to 0656a803 has its CatchHandler @ 0646a874 */
                    /* try { // try from 0646a804 to 0656a807 has its CatchHandler @ 0646a86c */
                    /* try { // try from 0646a808 to 0656a80b has its CatchHandler @ 0646a868 */
  bVar2 = *(byte *)(*(long *)System_Collections_Generic_HashSet<int4>_TypeInfo + 0x130);
                    /* try { // try from 0646a80c to 0656a813 has its CatchHandler @ 0646a894 */
                    /* try { // try from 0646a814 to 0656a817 has its CatchHandler @ 0646a860 */
                    /* try { // try from 0646a818 to 0656a823 has its CatchHandler @ 0646a2d8 */
                    /* try { // try from 0646a824 to 0656a827 has its CatchHandler @ 0646a854 */
  if ((bVar2 <= in_w9) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)System_Collections_Generic_HashSet<int4>_TypeInfo)) {
    iVar1 = *(int *)(unaff_x19 + 0xc0);
    lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar10 = *(long *)puVar3;
    }
    puVar12 = (undefined8 *)
              System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
    if (iVar1 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
      if (unaff_x21 == 0) goto LAB_0646af28;
      if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_0646af2c;
      puVar12 = (undefined8 *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
    }
    uVar11 = *puVar12;
    uVar6 = (**(code **)(*unaff_x20 + 0x218))();
    puVar12 = (undefined8 *)System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
    ;
    goto LAB_0646abb4;
  }
                    /* try { // try from 0646a828 to 0656a82b has its CatchHandler @ 0646a830 */
                    /* catch() { ... } // from try @ 0646a7b4 with catch @ 0646a82c
                       try { // try from 0646a82c to 0656a8c7 has its CatchHandler @ 0646a2d8 */
                    /* catch() { ... } // from try @ 0646a828 with catch @ 0646a830 */
                    /* catch() { ... } // from try @ 0646a7a4 with catch @ 0646a834 */
  bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<ExceptionDispatchInfo>_TypeInfo
                   + 0x130);
  if ((in_w9 < bVar2) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)System_Collections_Generic_ICollection<ExceptionDispatchInfo>_TypeInfo)) {
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                     + 0x130);
    if ((bVar2 <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo)) {
      uVar11 = (**(code **)(*unaff_x20 + 0x218))();
      puVar12 = (undefined8 *)System_Collections_Generic_ICollection<InvalidInput>_TypeInfo;
LAB_0646ab54:
      FUN_05458458(*puVar12,uVar11,0);
      return;
    }
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo
                     + 0x130);
    if ((bVar2 <= in_w9) &&
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo)) {
      uVar11 = (**(code **)(*unaff_x20 + 0x218))();
      puVar12 = (undefined8 *)System_Collections_Generic_ICollection<ExtensionDataMember>_TypeInfo;
      goto LAB_0646ab54;
    }
    bVar2 = *(byte *)(*(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo + 0x130);
    if ((in_w9 < bVar2) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Collections_Generic_ICollection<Exception>_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)
                         System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo
                       + 0x130);
      if ((in_w9 < bVar2) ||
         (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo)) {
        bVar2 = *(byte *)(*(long *)
                           System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo
                         + 0x130);
        if ((in_w9 < bVar2) ||
           (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo))
        {
          return;
        }
        lVar10 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,5);
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0x18) != 0) {
            *(undefined8 *)(lVar10 + 0x20) =
                 *(undefined8 *)System_Collections_Generic_ICollection<Flow>_TypeInfo;
            thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x20));
            if (1 < *(uint *)(lVar10 + 0x18)) {
              *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(unaff_x19 + 0xc0);
              thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x28));
              if (2 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x30) =
                     *(undefined8 *)System_Collections_Generic_ICollection<Expression>_TypeInfo;
                thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x30));
                if (3 < *(uint *)(lVar10 + 0x18)) {
                  *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(unaff_x19 + 200);
                  thunk_FUN_02f411dc((undefined8 *)(lVar10 + 0x38));
                  if (4 < *(uint *)(lVar10 + 0x18)) {
                    *(undefined8 *)(lVar10 + 0x40) =
                         *(undefined8 *)
                          System_Collections_Generic_ICollection<IEventSystemHandler>_TypeInfo;
                    thunk_FUN_02f411dc();
                    FUN_0546583c(lVar10,0);
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
    plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,4);
    puVar3 = System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo;
    if (plVar5 == (long *)0x0) goto LAB_0646af28;
    if (*(long *)System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = thunk_FUN_02ef170c(*(long *)
                                   System_Collections_Generic_ICollection<ISerializableDataMember>_TypeInfo
                                  ,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar10 == 0) goto LAB_0646af30;
      lVar10 = *(long *)puVar3;
    }
    if ((int)plVar5[3] == 0) goto LAB_0646af2c;
    plVar5[4] = lVar10;
    thunk_FUN_02f411dc();
    lVar10 = (**(code **)(*unaff_x20 + 0x218))();
    if ((lVar10 != 0) &&
       (lVar9 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
    goto LAB_0646af30;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar10;
      thunk_FUN_02f411dc(plVar5 + 5,lVar10);
      puVar3 = System_Collections_Generic_ICollection<IDataNode>_TypeInfo;
      if (*(long *)System_Collections_Generic_ICollection<IDataNode>_TypeInfo == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = thunk_FUN_02ef170c(*(long *)
                                     System_Collections_Generic_ICollection<IDataNode>_TypeInfo,
                                    *(undefined8 *)(*plVar5 + 0x40));
        if (lVar10 == 0) goto LAB_0646af30;
        lVar10 = *(long *)puVar3;
      }
      if (*(uint *)(plVar5 + 3) < 3) goto LAB_0646af2c;
      plVar5[6] = lVar10;
      thunk_FUN_02f411dc();
      lVar10 = *(long *)(unaff_x19 + 0xc0);
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
      goto LAB_0646af30;
      if (*(uint *)(plVar5 + 3) < 4) goto LAB_0646af2c;
      plVar7 = plVar5 + 7;
      *plVar7 = lVar10;
      goto LAB_0646ae28;
    }
    goto LAB_0646af2c;
  }
  iVar1 = *(int *)(unaff_x19 + 0xc0);
  lVar10 = *(long *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar10 = *(long *)puVar3;
  }
  plVar5 = (long *)System_Collections_Generic_ICollection<IDtdDefaultAttributeInfo>_TypeInfo;
  if (iVar1 != *(int *)(*(long *)(lVar10 + 0xb8) + 4)) {
    if (unaff_x21 == 0) goto LAB_0646af28;
    if (*(uint *)(unaff_x21 + 0x18) <= *(uint *)(unaff_x19 + 0xc0)) goto LAB_0646af2c;
    plVar5 = (long *)(unaff_x21 + (long)(int)*(uint *)(unaff_x19 + 0xc0) * 8 + 0x20);
  }
  lVar10 = *plVar5;
  plVar5 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,4);
  puVar3 = System_Collections_Generic_ICollection<Graphic>_TypeInfo;
  if (plVar5 == (long *)0x0) {
LAB_0646af28:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(long *)System_Collections_Generic_ICollection<Graphic>_TypeInfo == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = thunk_FUN_02ef170c(*(long *)System_Collections_Generic_ICollection<Graphic>_TypeInfo,
                               *(undefined8 *)(*plVar5 + 0x40));
    if (lVar9 == 0) goto LAB_0646af30;
    lVar9 = *(long *)puVar3;
  }
  if ((int)plVar5[3] == 0) goto LAB_0646af2c;
  plVar5[4] = lVar9;
  thunk_FUN_02f411dc();
  plVar14 = (long *)(unaff_x19 + 0xa8);
  plVar7 = (long *)*plVar14;
  uVar15 = (uint)(plVar7 != (long *)0x0);
  if (plVar7 == (long *)0x0) {
    uVar4 = 1;
LAB_0646ac88:
    uVar15 = uVar4;
    plVar14 = *(long **)(*(long *)PTR_DAT_06d02350 + 0xb8);
  }
  else {
    lVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    uVar4 = (uint)(plVar7 != (long *)0x0);
    if (lVar9 == 0) goto LAB_0646ac88;
  }
  lVar9 = *plVar14;
  if ((lVar9 != 0) &&
     (lVar8 = thunk_FUN_02ef170c(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_0646af30:
    uVar11 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar11,0);
  }
  if (uVar15 < *(uint *)(plVar5 + 3)) {
    plVar5[(ulong)uVar15 + 4] = lVar9;
    thunk_FUN_02f411dc(plVar5 + (ulong)uVar15 + 4,lVar9);
    puVar3 = System_Collections_Generic_ICollection<int>_TypeInfo;
    if (*(long *)System_Collections_Generic_ICollection<int>_TypeInfo == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_02ef170c(*(long *)System_Collections_Generic_ICollection<int>_TypeInfo,
                                 *(undefined8 *)(*plVar5 + 0x40));
      if (lVar9 == 0) goto LAB_0646af30;
      lVar9 = *(long *)puVar3;
    }
    if (2 < *(uint *)(plVar5 + 3)) {
      plVar5[6] = lVar9;
      thunk_FUN_02f411dc();
      if ((lVar10 != 0) &&
         (lVar9 = thunk_FUN_02ef170c(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar9 == 0))
      goto LAB_0646af30;
      if (3 < *(uint *)(plVar5 + 3)) {
        plVar7 = plVar5 + 7;
        *plVar7 = lVar10;
LAB_0646ae28:
        thunk_FUN_02f411dc(plVar7,lVar10);
        FUN_054654d4(plVar5,0);
        return;
      }
    }
  }
LAB_0646af2c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


