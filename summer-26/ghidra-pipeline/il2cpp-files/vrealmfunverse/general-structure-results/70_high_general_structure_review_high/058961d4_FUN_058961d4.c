/*
FUNCTION_NAME: FUN_058961d4
ENTRY_POINT: 058961d4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6
*/


void FUN_058961d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  
  puVar7 = 
  Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_GetValueOrDefault__;
  puVar6 = Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>__ctor__;
  puVar5 = Method_System_Nullable<AxisAlignedBox_BoxSurface>_get_HasValue__;
  puVar4 = Method_System_Nullable<AxisAlignedBox_BoxSurface>_GetValueOrDefault__;
  puVar3 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
  puVar2 = Method_System_Nullable<Vector4>_get_Value__;
  puVar1 = Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__;
                    /* try { // try from 058961e8 to 059961eb has its CatchHandler @ 058962e4 */
                    /* try { // try from 058961fc to 05996207 has its CatchHandler @ 058962f4 */
                    /* try { // try from 05896210 to 05996217 has its CatchHandler @ 05896308 */
                    /* try { // try from 0589622c to 0599622f has its CatchHandler @ 05896320 */
                    /* try { // try from 05896230 to 059962d3 has its CatchHandler @ 05895db8 */
  if ((DAT_066d3102 & 1) == 0) {
    FUN_02b3c81c(Method_System_Nullable<EventSystem_UIToolkitOverrideConfigOld>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<AxisAlignedBox_BoxSurface>_GetValueOrDefault__);
    FUN_02b3c81c(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<AxisAlignedBox_BoxSurface>_get_HasValue__);
    FUN_02b3c81c(
                Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_get_HasValue__
                );
    FUN_02b3c81c(
                Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_GetValueOrDefault__
                );
    FUN_02b3c81c(Method_System_Nullable<ReadOnlyArray<InputControl>>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<EventSystem_UIToolkitOverrideConfigOld>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<EventSystem_UIToolkitOverrideConfigOld>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<Vector4>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<ImmersiveSceneDebugger_DebugAction>__ctor__);
                    /* try { // try from 058962d4 to 059962d7 has its CatchHandler @ 05896320 */
    FUN_02b3c81c(Method_System_Nullable<ImmersiveSceneDebugger_DebugAction>_GetValueOrDefault__);
                    /* try { // try from 058962d8 to 059962db has its CatchHandler @ 05896314 */
                    /* try { // try from 058962dc to 059962e3 has its CatchHandler @ 05896308 */
    FUN_02b3c81c(Method_System_Nullable<ImmersiveSceneDebugger_DebugAction>_get_HasValue__);
                    /* catch() { ... } // from try @ 058961e8 with catch @ 058962e4
                       try { // try from 058962e4 to 0599635f has its CatchHandler @ 05895db8 */
                    /* catch() { ... } // from try @ 058960b8 with catch @ 058962e8 */
                    /* catch() { ... } // from try @ 058960e0 with catch @ 058962ec */
    FUN_02b3c81c(Method_System_Nullable<InputAction_CallbackContext>__ctor__);
                    /* catch() { ... } // from try @ 05895f88 with catch @ 058962f0 */
                    /* catch() { ... } // from try @ 058961fc with catch @ 058962f4 */
    DAT_066d3102 = 1;
  }
                    /* catch() { ... } // from try @ 058960ec with catch @ 058962f8 */
  puVar8 = Method_System_Nullable<ImmersiveSceneDebugger_DebugAction>__ctor__;
                    /* catch() { ... } // from try @ 058960bc with catch @ 058962fc */
                    /* catch() { ... } // from try @ 05895fd8 with catch @ 05896300 */
                    /* catch() { ... } // from try @ 05895fbc with catch @ 05896304 */
                    /* catch() { ... } // from try @ 05896210 with catch @ 05896308
                       catch() { ... } // from try @ 058962dc with catch @ 05896308 */
  lVar9 = FUN_02b3c908(*(undefined8 *)puVar2,3);
                    /* catch() { ... } // from try @ 05896074 with catch @ 0589630c */
                    /* catch() { ... } // from try @ 05896050 with catch @ 05896310 */
                    /* catch() { ... } // from try @ 058962d8 with catch @ 05896314 */
  plVar13 = (long *)(param_1 + 0x10);
  *plVar13 = lVar9;
                    /* catch() { ... } // from try @ 05895fe4 with catch @ 05896318 */
                    /* catch() { ... } // from try @ 05895f8c with catch @ 0589631c */
  thunk_FUN_02bb0e9c(plVar13,lVar9);
                    /* catch() { ... } // from try @ 0589622c with catch @ 05896320
                       catch() { ... } // from try @ 058962d4 with catch @ 05896320 */
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_0463e3b4(uVar10,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x18),uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_0463d724(uVar10,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_058811a8(uVar10,0);
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x30),uVar10);
  uVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
  FUN_038105f4(uVar10,0x100,
               *(undefined8 *)
                Method_System_Nullable<DefaultEventSystem_FocusBasedEventSequenceContext>_get_HasValue__
              );
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x50),uVar10);
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_04dbdb8c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = param_2;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x28),param_2);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x38),param_3);
  uVar15 = 0;
  lVar9 = 0x20;
  do {
    plVar16 = (long *)*plVar13;
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
    FUN_058965cc();
    if (plVar16 == (long *)0x0) goto LAB_058965b8;
    if ((lVar11 != 0) &&
       (lVar12 = thunk_FUN_02b79548(lVar11,*(undefined8 *)(*plVar16 + 0x40)), lVar12 == 0)) {
      uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar10,0);
    }
    if (*(uint *)(plVar16 + 3) <= uVar15) goto LAB_058965bc;
    *(long *)((long)plVar16 + lVar9) = lVar11;
    thunk_FUN_02bb0e9c((long)plVar16 + lVar9,lVar11);
    uVar15 = uVar15 + 1;
    lVar9 = lVar9 + 8;
  } while (uVar15 != 3);
  lVar9 = *plVar13;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_058965bc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar9 = *(long *)(lVar9 + 0x20);
    uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Nullable<ImmersiveSceneDebugger_DebugAction>_get_HasValue__
                               );
    FUN_05896688(uVar10,param_1,
                 *(undefined8 *)
                  Method_System_Nullable<EventSystem_UIToolkitOverrideConfigOld>_get_HasValue__);
    if (lVar9 != 0) {
      puVar14 = (undefined8 *)(lVar9 + 0x28);
      *puVar14 = uVar10;
      thunk_FUN_02bb0e9c(puVar14,uVar10);
      lVar9 = *plVar13;
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) == 0) goto LAB_058965bc;
        lVar9 = *(long *)(lVar9 + 0x20);
        uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_System_Nullable<ImmersiveSceneDebugger_DebugAction>_GetValueOrDefault__
                                   );
        FUN_05896794(uVar10,param_1,
                     *(undefined8 *)
                      Method_System_Nullable<EventSystem_UIToolkitOverrideConfigOld>_get_Value__);
        if (lVar9 != 0) {
          puVar14 = (undefined8 *)(lVar9 + 0x30);
          *puVar14 = uVar10;
          thunk_FUN_02bb0e9c(puVar14,uVar10);
          lVar9 = *plVar13;
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_058965bc;
            lVar9 = *(long *)(lVar9 + 0x20);
            uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Nullable<InputAction_CallbackContext>__ctor__
                                       );
            FUN_058968a0();
            if (lVar9 != 0) {
              puVar14 = (undefined8 *)(lVar9 + 0x20);
              *puVar14 = uVar10;
              thunk_FUN_02bb0e9c(puVar14,uVar10);
              lVar9 = *plVar13;
              if (lVar9 != 0) {
                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_058965bc;
                lVar9 = *(long *)(lVar9 + 0x28);
                uVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                             Method_System_Nullable<EventSystem_UIToolkitOverrideConfigOld>__ctor__
                                           );
                FUN_058953cc();
                if (lVar9 != 0) {
                  puVar14 = (undefined8 *)(lVar9 + 0x20);
                  *puVar14 = uVar10;
                  thunk_FUN_02bb0e9c(puVar14,uVar10);
                  lVar9 = *plVar13;
                  if (lVar9 != 0) {
                    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_058965bc;
                    if (*(long *)(lVar9 + 0x30) != 0) {
                      puVar14 = (undefined8 *)(*(long *)(lVar9 + 0x30) + 0x20);
                      *puVar14 = 0;
                      thunk_FUN_02bb0e9c(puVar14,0);
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
LAB_058965b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


