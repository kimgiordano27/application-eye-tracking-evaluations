/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$UpdateCursorStyle
ENTRY_POINT: 04128d64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04129104) */

void UnityEngine_UIElements_VisualElement__UpdateCursorStyle
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  int unaff_w20;
  int iVar14;
  ulong unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
                    /* try { // try from 04128d68 to 04228d6b has its CatchHandler @ 04128d84 */
  uVar5 = (**(code **)(param_1 + 0x1f8))(param_2,param_3,*(undefined8 *)(param_1 + 0x200));
                    /* try { // try from 04128d6c to 04228d9b has its CatchHandler @ 04128d60 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128d68 with catch @ 04128d84
                        */
  uVar9 = (**(code **)(*unaff_x19 + 0x2e8))();
  if ((uVar9 & 1) == 0) {
                    /* try { // try from 041290e0 to 042290eb has its CatchHandler @ 04129064 */
                    /* try { // try from 041290ec to 042290f3 has its CatchHandler @ 041290f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 041290d4 with catch @ 041290f4
                       catch(type#2 @ 00000000) { ... } // from try @ 041290ec with catch @ 041290f4
                        */
    return;
  }
  if ((unaff_x22 & 1) != 0) {
                    /* try { // try from 04128d9c to 04228d9f has its CatchHandler @ 04128db8 */
                    /* try { // try from 04128da0 to 04228dbb has its CatchHandler @ 04128d60 */
    (**(code **)(*unaff_x19 + 0x2b8))();
                    /* catch() { ... } // from try @ 04128d9c with catch @ 04128db8 */
                    /* try { // try from 04128dbc to 04228dbf has its CatchHandler @ 04128dd4 */
    plVar10 = (long *)(**(code **)(*unaff_x19 + 0x298))();
                    /* try { // try from 04128dc0 to 04228dcb has its CatchHandler @ 04128d60 */
    if (plVar10 != (long *)0x0) {
      lVar12 = *plVar10;
                    /* try { // try from 04128dcc to 04228dd3 has its CatchHandler @ 04128dd4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04128dbc with catch @ 04128dd4
                       catch(type#2 @ 00000000) { ... } // from try @ 04128dcc with catch @ 04128dd4
                        */
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    /* catch() { ... } // from try @ 04128e14 with catch @ 04128dd8
                       catch() { ... } // from try @ 04128e48 with catch @ 04128dd8
                       catch() { ... } // from try @ 04128e68 with catch @ 04128dd8 */
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
                    /* try { // try from 04128e14 to 04228e43 has its CatchHandler @ 04128dd8 */
            puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_04128e1c;
          }
                    /* try { // try from 04128df4 to 04228e13 has its CatchHandler @ 04128e2c */
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_04128e1c:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      puVar4 = Method_System_DateTime_AddTicks__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar2 = Method_Unity_Collections_NativeArray<int>_Dispose__;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128df4 with catch @ 04128e2c
                        */
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
                    /* try { // try from 04128e48 to 04228e63 has its CatchHandler @ 04128dd8 */
        lVar12 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 04128e44 with catch @ 04128e60 */
                    /* try { // try from 04128e64 to 04228e67 has its CatchHandler @ 04128e7c */
                    /* try { // try from 04128e68 to 04228e73 has its CatchHandler @ 04128dd8 */
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_04128e94;
            }
            uVar9 = uVar9 - 1;
            piVar13 = piVar13 + 4;
                    /* try { // try from 04128e74 to 04228e7b has its CatchHandler @ 04128e7c */
          } while (uVar9 != 0);
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04128e64 with catch @ 04128e7c
                       catch(type#2 @ 00000000) { ... } // from try @ 04128e74 with catch @ 04128e7c
                        */
                    /* catch() { ... } // from try @ 04128eb4 with catch @ 04128e80
                       catch() { ... } // from try @ 04128ee8 with catch @ 04128e80
                       catch() { ... } // from try @ 04128f08 with catch @ 04128e80 */
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_04128e94:
                    /* try { // try from 04128e98 to 04228eb3 has its CatchHandler @ 04128ecc */
        uVar9 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_04128f90;
          lVar12 = *plVar10;
          uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar9 == 0) goto LAB_04128f64;
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_04128f4c;
        }
        lVar12 = *plVar10;
        uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar9 != 0) {
                    /* try { // try from 04128eb4 to 04228ee3 has its CatchHandler @ 04128e80 */
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
                    /* try { // try from 04128ee4 to 04228ee7 has its CatchHandler @ 04128f00 */
                    /* try { // try from 04128ee8 to 04228f03 has its CatchHandler @ 04128e80 */
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_04128ef0;
            }
            uVar9 = uVar9 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128e98 with catch @ 04128ecc
                        */
            piVar13 = piVar13 + 4;
          } while (uVar9 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
LAB_04128ef0:
        uVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
                    /* catch() { ... } // from try @ 04128ee4 with catch @ 04128f00 */
                    /* try { // try from 04128f04 to 04228f07 has its CatchHandler @ 04128f1c */
        lVar12 = FUN_04127458();
                    /* try { // try from 04128f08 to 04228f13 has its CatchHandler @ 04128e80 */
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar12 + 0x4b0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
                    /* try { // try from 04128f14 to 04228f1b has its CatchHandler @ 04128f1c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04128f04 with catch @ 04128f1c
                       catch(type#2 @ 00000000) { ... } // from try @ 04128f14 with catch @ 04128f1c
                        */
        FUN_030bbd24(*(long *)(lVar12 + 0x4b0),uVar6,*(undefined8 *)puVar2);
      } while( true );
    }
    goto LAB_04129030;
  }
  goto LAB_04128f90;
  while( true ) {
    lVar12 = unaff_x19[9];
                    /* catch() { ... } // from try @ 04129074 with catch @ 04129064
                       catch() { ... } // from try @ 041290a4 with catch @ 04129064
                       catch() { ... } // from try @ 041290e0 with catch @ 04129064 */
    FUN_0316897c(&stack0x00000008,unaff_x19[8],iVar1 + iVar7,*(undefined8 *)puVar3);
                    /* try { // try from 04129070 to 04229073 has its CatchHandler @ 04129088 */
                    /* try { // try from 04129074 to 0422909f has its CatchHandler @ 04129064 */
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    uVar5 = FUN_041bf288(&stack0x00000020,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04129070 with catch @ 04129088
                        */
    if (lVar12 == 0) goto LAB_04129030;
    FUN_02ed9128(lVar12,uVar5,*(undefined8 *)puVar2);
    iVar7 = iVar7 + 1;
                    /* try { // try from 041290a0 to 042290a3 has its CatchHandler @ 041290d0 */
                    /* try { // try from 041290a4 to 042290d3 has its CatchHandler @ 04129064 */
    if (iVar14 == iVar7) break;
LAB_04129050:
    if (unaff_x19[8] == 0) goto LAB_04129030;
  }
LAB_041290a8:
  if (unaff_x19[8] != 0) {
    FUN_0316a924(unaff_x19[8],iVar1,iVar14,*(undefined8 *)PTR_DAT_0458a418);
    lVar12 = FUN_04127458();
                    /* catch() { ... } // from try @ 041290a0 with catch @ 041290d0 */
    if (lVar12 != 0) {
                    /* try { // try from 041290d4 to 042290df has its CatchHandler @ 041290f4 */
      FUN_04134290(lVar12,0);
      return;
    }
  }
  goto LAB_04129030;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar13 = piVar13 + 4;
    if (uVar9 == 0) break;
LAB_04128f4c:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_04128f80;
    }
  }
LAB_04128f64:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_04128f80:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_04128f90:
  lVar12 = FUN_04127458();
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x4b0) != 0)) {
    FUN_030bbd24(*(long *)(lVar12 + 0x4b0),uVar5,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<int>_Dispose__);
    (**(code **)(*unaff_x19 + 0x1f8))();
    iVar7 = FUN_0412a33c();
    lVar12 = unaff_x19[8];
    if (lVar12 != 0) {
      iVar14 = 0;
      iVar1 = unaff_w20 + 1;
      do {
        if (*(int *)(lVar12 + 0x18) <= iVar1 + iVar14) {
LAB_04129034:
          puVar3 = PTR_DAT_0458a3f0;
          puVar2 = Method_System_Linq_Enumerable_Where<Member>__;
          if (iVar1 + iVar14 <= iVar1) goto LAB_041290a8;
          iVar7 = 0;
          goto LAB_04129050;
        }
        (**(code **)(*unaff_x19 + 0x1f8))();
        iVar8 = FUN_0412a33c();
        if (iVar8 <= iVar7) goto LAB_04129034;
        lVar12 = unaff_x19[8];
        iVar14 = iVar14 + 1;
      } while (lVar12 != 0);
    }
  }
LAB_04129030:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


