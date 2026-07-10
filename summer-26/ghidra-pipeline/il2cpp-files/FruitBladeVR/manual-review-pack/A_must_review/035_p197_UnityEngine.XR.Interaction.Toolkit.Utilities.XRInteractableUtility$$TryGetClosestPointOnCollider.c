/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Utilities.XRInteractableUtility$$TryGetClosestPointOnCollider
ENTRY_POINT: 036140f8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_12;strong_file_logging_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility__TryGetClosestPointOnCollider
          (float param_1,float param_2,float param_3,long *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  
                    /* try { // try from 0361412c to 0371412f has its CatchHandler @ 03614a28 */
  if ((DAT_03ef69e3 & 1) == 0) {
                    /* try { // try from 03614144 to 0371414b has its CatchHandler @ 036149bc */
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<Collider>_Dispose___03ce1c18)
    ;
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext___03ce1c20
                );
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<Collider>_get_Current___03ce1c28
                );
    FUN_01c5c92c(
                PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<Collider>_GetEnumerator___03ce1c38);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    DAT_03ef69e3 = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  if (param_4 != (long *)0x0) {
    lVar8 = *param_4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* try { // try from 036141cc to 037141cf has its CatchHandler @ 03614a28 */
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50)
        {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_03614200;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 036141e4 to 037141eb has its CatchHandler @ 03614968 */
    puVar6 = (undefined8 *)
             FUN_01c8cb54(param_4,*(long *)
                                   PTR_UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_TypeInfo_03ce1b50
                          ,5);
LAB_03614200:
    lVar8 = (*(code *)*puVar6)(param_4,puVar6[1]);
    puVar3 = PTR_Method_System_Collections_Generic_List_Enumerator<Collider>_MoveNext___03ce1c20;
    puVar2 = PTR_Method_System_Collections_Generic_List_Enumerator<Collider>_Dispose___03ce1c18;
    puVar1 = PTR_UnityEngine_Object_TypeInfo_03cb5a80;
    if (lVar8 != 0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_e0,lVar8,
                 *(undefined8 *)
                  PTR_Method_System_Collections_Generic_List<Collider>_GetEnumerator___03ce1c38);
      local_b0 = local_e0;
      puVar4 = 
      PTR_UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility_TypeInfo_03ce29d0;
      local_e0 = 0;
      uVar11 = 0;
      uStack_a8 = puStack_d8;
                    /* try { // try from 0361425c to 0371426b has its CatchHandler @ 036149fc */
      local_a0 = local_d0;
                    /* try { // try from 0361426c to 03714273 has its CatchHandler @ 036149f4 */
      lVar8 = 0;
      fVar19 = 3.4028235e+38;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      puStack_d8 = &local_b0;
LAB_03614280:
      do {
        do {
          uVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_b0,*(undefined8 *)puVar3);
          lVar5 = local_a0;
          if ((uVar9 & 1) == 0) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_b0,*(undefined8 *)puVar2);
                    /* try { // try from 03614388 to 0371438f has its CatchHandler @ 03614a04 */
            local_c8 = CONCAT44(fVar16,fVar18);
            uStack_c0 = CONCAT44(fVar19,fVar17);
            local_b8 = lVar8;
            thunk_FUN_01cc8040(&local_b8,lVar8);
            param_5[1] = uStack_c0;
            *param_5 = local_c8;
            param_5[2] = local_b8;
            thunk_FUN_01cc8040(param_5 + 2,0);
                    /* try { // try from 036143e0 to 037143e7 has its CatchHandler @ 03614a00 */
            return uVar11;
          }
                    /* try { // try from 03614290 to 03714293 has its CatchHandler @ 03614980 */
                    /* try { // try from 03614294 to 037142a3 has its CatchHandler @ 03614a0c */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_01cb0d4c();
          }
                    /* try { // try from 036142ac to 037142b7 has its CatchHandler @ 0361498c */
          uVar9 = UnityEngine_Object__op_Equality(lVar5,0,0);
        } while ((uVar9 & 1) != 0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        lVar7 = UnityEngine_Component__get_gameObject(lVar5,0);
                    /* try { // try from 036142c8 to 037142cf has its CatchHandler @ 03614988 */
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036143f8 to 037143ff has its CatchHandler @ 036149a8 */
          FUN_01c5cbd4();
        }
        uVar9 = UnityEngine_GameObject__get_activeInHierarchy(lVar7,0);
      } while (((uVar9 & 1) == 0) ||
              (uVar9 = UnityEngine_Collider__get_enabled(lVar5,0), (uVar9 & 1) == 0));
                    /* try { // try from 036142e8 to 037142eb has its CatchHandler @ 0361497c */
                    /* try { // try from 036142ec to 037142f7 has its CatchHandler @ 03614a08 */
      uVar9 = UnityEngine_Collider__get_isTrigger(lVar5,0);
      if ((uVar9 & 1) != 0) goto code_r0x036142f8;
      goto LAB_0361431c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
code_r0x036142f8:
  if (DAT_03ef6a4f == '\0') {
    FUN_01c5c92c(puVar4);
    DAT_03ef6a4f = '\x01';
  }
                    /* try { // try from 03614318 to 0371431b has its CatchHandler @ 03614a28 */
  if (**(char **)(*(long *)puVar4 + 0xb8) != '\0') {
LAB_0361431c:
    fVar13 = param_2;
    fVar14 = param_3;
    fVar12 = (float)UnityEngine_Collider__ClosestPoint(param_1,lVar5,0);
    fVar15 = (param_3 - fVar14) * (param_3 - fVar14) +
             (param_1 - fVar12) * (param_1 - fVar12) + (param_2 - fVar13) * (param_2 - fVar13);
    if (fVar15 < fVar19) {
      uVar11 = 1;
      lVar8 = lVar5;
      fVar19 = fVar15;
      fVar16 = fVar13;
      fVar17 = fVar14;
      fVar18 = fVar12;
    }
  }
  goto LAB_03614280;
}


