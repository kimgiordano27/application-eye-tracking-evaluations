/*
FUNCTION_NAME: FUN_0198d178
ENTRY_POINT: 0198d178
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0198d938) */

undefined8 FUN_0198d178(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  ulong local_b0 [3];
  undefined4 local_98;
  
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_0377a427 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377a427 = 1;
  }
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[0] = 0;
  local_98 = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_bc = 0;
  local_d0 = 0;
  local_b8 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0268b4e0(param_2,0,0);
  if ((uVar7 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_0198dae4;
  uVar7 = FUN_0198a78c(*(long *)(param_1 + 0x1f8),param_2,local_b0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  fVar13 = (float)FUN_0198c9e4(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
                               *(undefined4 *)(param_1 + 0x150),param_1,param_2);
  if (*(float *)(param_1 + 0x11c) < fVar13) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x1a8);
  uVar11 = *(undefined8 *)(param_1 + 0x168);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0268b4e0(uVar11,0,0);
  if ((uVar7 & 1) == 0) {
    bVar6 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x170);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    bVar6 = FUN_02681b9c(uVar11,0,0);
    bVar6 = bVar6 & 1;
  }
  *(byte *)(param_1 + 0x1a8) = bVar6;
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
  ;
  if ((param_2 == 0) || (plVar12 = *(long **)(param_2 + 200), plVar12 == (long *)0x0))
  goto LAB_0198dae4;
  lVar9 = *plVar12;
  uVar23 = local_b0[0] & 0xffffffff;
  fVar13 = (float)(local_b0[0] >> 0x20);
  fVar22 = (float)local_b0[1];
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
         ) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0198d358;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_00d59724(plVar12,*(long *)
                                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                        ,0);
LAB_0198d358:
  plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
  puVar5 = Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__;
  if (plVar12 == (long *)0x0) goto LAB_0198dae4;
  lVar9 = *plVar12;
  uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__) {
        puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0198d3c0;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_00d59724(plVar12,*(long *)
                                 Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__
                        ,0);
LAB_0198d3c0:
                    /* try { // try from 0198d3c0 to 01a8d40f has its CatchHandler @ 0198d3c0
                       catch() { ... } // from try @ 0198d3c0 with catch @ 0198d3c0
                       catch() { ... } // from try @ 0198d428 with catch @ 0198d3c0
                       catch() { ... } // from try @ 0198d468 with catch @ 0198d3c0
                       catch() { ... } // from try @ 0198d558 with catch @ 0198d3c0 */
  lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
  if (lVar9 == 0) goto LAB_0198dae4;
  fVar14 = (float)FUN_026a0f08(uVar23,lVar9,0);
  puVar4 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (*(long *)(param_2 + 0xf0) == 0) goto LAB_0198dae4;
  if (*(char *)(*(long *)(param_2 + 0xf0) + 0x10) == '\0') {
LAB_0198d730:
    *(float *)(param_1 + 400) = fVar14;
    *(float *)(param_1 + 0x194) = fVar13;
    *(float *)(param_1 + 0x198) = fVar22;
  }
  else {
                    /* try { // try from 0198d410 to 01a8d427 has its CatchHandler @ 0198d438 */
    fVar15 = (float)FUN_0198a6f0(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
                                 *(undefined4 *)(param_1 + 0x150),param_1,param_2);
                    /* try { // try from 0198d428 to 01a8d44f has its CatchHandler @ 0198d3c0 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d410 with catch @ 0198d438
                        */
    fVar16 = (float)FUN_0198a6f0(*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158),
                                 *(undefined4 *)(param_1 + 0x15c),param_1,param_2);
    plVar12 = *(long **)(param_2 + 200);
    if (plVar12 == (long *)0x0) goto LAB_0198dae4;
    lVar9 = *plVar12;
                    /* try { // try from 0198d450 to 01a8d467 has its CatchHandler @ 0198d550 */
    fVar27 = *(float *)(param_1 + 0x178);
    fVar25 = *(float *)(param_1 + 0x17c);
    fVar24 = *(float *)(param_1 + 0x180);
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    /* try { // try from 0198d468 to 01a8d53f has its CatchHandler @ 0198d3c0 */
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0198d4a8;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_0198d4a8:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    if (plVar12 == (long *)0x0) goto LAB_0198dae4;
    lVar9 = *plVar12;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0198d508;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_0198d508:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (lVar9 == 0) goto LAB_0198dae4;
    fVar25 = fVar13 - fVar25;
    fVar24 = fVar22 - fVar24;
    fVar27 = (float)FUN_026a0cd4(fVar14 - fVar27,lVar9,0);
    if (DAT_03774e1b == '\0') {
                    /* try { // try from 0198d540 to 01a8d54f has its CatchHandler @ 0198d550 */
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    /* catch() { ... } // from try @ 0198d450 with catch @ 0198d550
                       catch() { ... } // from try @ 0198d540 with catch @ 0198d550 */
      DAT_03774e1b = '\x01';
    }
                    /* try { // try from 0198d554 to 01a8d557 has its CatchHandler @ 0198d560 */
                    /* try { // try from 0198d558 to 01a8d563 has its CatchHandler @ 0198d3c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0198d554 with catch @ 0198d560
                        */
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    /* try { // try from 0198d564 to 01a8d5e7 has its CatchHandler @ 0198d564
                       catch() { ... } // from try @ 0198d564 with catch @ 0198d564
                       catch() { ... } // from try @ 0198d6c8 with catch @ 0198d564
                       catch() { ... } // from try @ 0198d714 with catch @ 0198d564
                       catch() { ... } // from try @ 0198d804 with catch @ 0198d564 */
      thunk_FUN_00d32864();
    }
    if (ABS(fVar15 - fVar16) <= SQRT(fVar24 * fVar24 + fVar27 * fVar27 + fVar25 * fVar25)) {
LAB_0198d5b0:
      bVar2 = false;
    }
    else {
      if (*(long *)(param_2 + 0xf0) == 0) goto LAB_0198dae4;
      if (ABS(fVar15 - fVar16) <= *(float *)(*(long *)(param_2 + 0xf0) + 0x14)) goto LAB_0198d5b0;
      bVar2 = true;
      *(float *)(param_1 + 0x1c0) = fVar14;
      *(float *)(param_1 + 0x1c4) = fVar13;
      *(float *)(param_1 + 0x1c8) = fVar22;
    }
    if (*(char *)(param_1 + 0x1a9) == '\0') {
      if (!bVar2) {
        plVar12 = *(long **)(param_2 + 200);
        if (plVar12 == (long *)0x0) goto LAB_0198dae4;
        lVar9 = *plVar12;
        fVar25 = *(float *)(param_1 + 0x1c0);
        fVar15 = *(float *)(param_1 + 0x1c4);
        fVar16 = *(float *)(param_1 + 0x1c8);
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
                    /* try { // try from 0198d5e8 to 01a8d5ef has its CatchHandler @ 0198d6dc */
        if (uVar7 != 0) {
                    /* try { // try from 0198d5f4 to 01a8d5fb has its CatchHandler @ 0198d6d8 */
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0198d62c;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
                    /* try { // try from 0198d618 to 01a8d61b has its CatchHandler @ 0198d6e0 */
        puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
                    /* try { // try from 0198d61c to 01a8d62b has its CatchHandler @ 0198d6e4 */
LAB_0198d62c:
        plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
        if (plVar12 == (long *)0x0) goto LAB_0198dae4;
                    /* try { // try from 0198d63c to 01a8d63f has its CatchHandler @ 0198d6dc */
        lVar9 = *plVar12;
                    /* try { // try from 0198d640 to 01a8d657 has its CatchHandler @ 0198d6cc */
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
                    /* try { // try from 0198d658 to 01a8d65f has its CatchHandler @ 0198d6c8 */
            if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
                    /* try { // try from 0198d684 to 01a8d6c7 has its CatchHandler @ 0198d6d4 */
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0198d68c;
            }
                    /* try { // try from 0198d664 to 01a8d67f has its CatchHandler @ 0198d6d0 */
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_0198d68c:
        lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
        if (lVar9 == 0) goto LAB_0198dae4;
        fVar15 = fVar13 - fVar15;
        fVar16 = fVar22 - fVar16;
        fVar25 = (float)FUN_026a0cd4(fVar14 - fVar25,lVar9,0);
        if (DAT_03774e1b == '\0') {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d658 with catch @ 0198d6c8
                       try { // try from 0198d6c8 to 01a8d6fb has its CatchHandler @ 0198d564 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d640 with catch @ 0198d6cc
                        */
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d664 with catch @ 0198d6d0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d684 with catch @ 0198d6d4
                        */
          DAT_03774e1b = '\x01';
        }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d5f4 with catch @ 0198d6d8
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d5e8 with catch @ 0198d6dc
                       catch(type#1 @ 03274860) { ... } // from try @ 0198d63c with catch @ 0198d6dc
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d618 with catch @ 0198d6e0
                        */
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0198d61c with catch @ 0198d6e4
                        */
          thunk_FUN_00d32864();
        }
        if (*(long *)(param_2 + 0xf0) == 0) goto LAB_0198dae4;
                    /* try { // try from 0198d6fc to 01a8d713 has its CatchHandler @ 0198d7fc */
        if (*(float *)(*(long *)(param_2 + 0xf0) + 0x18) <
            SQRT(fVar16 * fVar16 + fVar25 * fVar25 + fVar15 * fVar15)) {
                    /* try { // try from 0198d714 to 01a8d7eb has its CatchHandler @ 0198d564 */
          *(undefined1 *)(param_1 + 0x1a9) = 1;
          if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_0198dae4;
          FUN_019be6f0(*(long *)(param_1 + 0x1b0),0);
          *(undefined4 *)(param_1 + 0x208) = 0;
          goto LAB_0198d730;
        }
      }
    }
    else {
      if (!bVar2) goto LAB_0198d730;
      *(undefined1 *)(param_1 + 0x1a9) = 0;
    }
  }
  if (*(long *)(param_2 + 0xf8) == 0) goto LAB_0198dae4;
  uVar11 = *(undefined8 *)(param_1 + 400);
  fVar15 = *(float *)(param_1 + 0x198);
  if (*(char *)(*(long *)(param_2 + 0xf8) + 0x10) != '\0') {
    fVar16 = (float)((ulong)uVar11 >> 0x20);
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      plVar12 = *(long **)(param_2 + 200);
      if (plVar12 == (long *)0x0) goto LAB_0198dae4;
      lVar9 = *plVar12;
      uVar26 = *(undefined8 *)(param_1 + 0x184);
      fVar25 = *(float *)(param_1 + 0x18c);
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar7 != 0) {
                    /* try { // try from 0198d7ec to 01a8d7fb has its CatchHandler @ 0198d7fc */
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0198d824;
          }
                    /* catch() { ... } // from try @ 0198d6fc with catch @ 0198d7fc
                       catch() { ... } // from try @ 0198d7ec with catch @ 0198d7fc */
          uVar7 = uVar7 - 1;
                    /* try { // try from 0198d800 to 01a8d803 has its CatchHandler @ 0198d80c */
          piVar10 = piVar10 + 4;
                    /* try { // try from 0198d804 to 01a8d80f has its CatchHandler @ 0198d564 */
        } while (uVar7 != 0);
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0198d800 with catch @ 0198d80c
                        */
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_0198d824:
      plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar12 == (long *)0x0) goto LAB_0198dae4;
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0198d884;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_0198d884:
      lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if (lVar9 == 0) goto LAB_0198dae4;
      fVar16 = fVar16 - (float)((ulong)uVar26 >> 0x20);
      fVar25 = fVar15 - fVar25;
      fVar15 = fVar16;
      fVar24 = fVar25;
      fVar27 = (float)FUN_026a0cd4(lVar9,0);
      if (DAT_03774e1b == '\0') {
        thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
        DAT_03774e1b = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar15 = SQRT(fVar24 * fVar24 + fVar27 * fVar27 + fVar15 * fVar15);
      if (fVar15 <= *(float *)(param_1 + 0x1cc)) {
        fVar15 = *(float *)(param_1 + 0x1cc);
      }
      *(float *)(param_1 + 0x1cc) = fVar15;
      lVar9 = *(long *)(param_2 + 0xf8);
      if (lVar9 == 0) goto LAB_0198dae4;
      fVar24 = 1.0;
      if (*(float *)(lVar9 + 0x14) != 0.0) {
        if (*(long *)(lVar9 + 0x18) == 0) goto LAB_0198dae4;
        fVar15 = fVar15 / *(float *)(lVar9 + 0x14);
        if (fVar15 < 0.0) {
          fVar15 = 0.0;
        }
        fVar24 = (float)FUN_0265f96c(fVar15,*(long *)(lVar9 + 0x18),0);
      }
      fVar15 = *(float *)(param_1 + 0x18c);
      fVar25 = fVar25 * fVar24;
      uVar11 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x184) >> 0x20) + fVar16 * fVar24,
                        (float)*(undefined8 *)(param_1 + 0x184) +
                        ((float)uVar11 - (float)uVar26) * fVar24);
    }
    else {
      if (cVar1 == '\0') {
        if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_0198dae4;
        FUN_019be6f0(*(long *)(param_1 + 0x1b8),0);
        *(undefined4 *)(param_1 + 0x20c) = 0;
      }
      if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_0198dae4;
      fVar24 = (float)FUN_019be730(*(long *)(param_1 + 0x1b8),0);
      if (fVar24 == 1.0) goto LAB_0198d96c;
      fVar27 = *(float *)(param_1 + 0x20c);
      fVar25 = *(float *)(param_1 + 0x1a4);
      *(float *)(param_1 + 0x20c) = fVar24;
      fVar19 = (float)*(undefined8 *)(param_1 + 0x19c);
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x19c) >> 0x20);
      fVar24 = (fVar24 - fVar27) / (1.0 - fVar27);
      fVar15 = fVar24 * (fVar15 - fVar25);
      uVar11 = CONCAT44(fVar21 + (fVar16 - fVar21) * fVar24,
                        fVar19 + ((float)uVar11 - fVar19) * fVar24);
    }
    fVar15 = fVar25 + fVar15;
  }
LAB_0198d96c:
  if (*(long *)(param_1 + 0x1b0) != 0) {
    fVar16 = (float)FUN_019be730(*(long *)(param_1 + 0x1b0),0);
    if (fVar16 == 1.0) {
      *(undefined8 *)(param_1 + 0x19c) = uVar11;
      *(float *)(param_1 + 0x1a4) = fVar15;
    }
    else {
      fVar24 = (float)*(undefined8 *)(param_1 + 0x19c);
      fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x19c) >> 0x20);
      fVar25 = (fVar16 - *(float *)(param_1 + 0x208)) / (1.0 - *(float *)(param_1 + 0x208));
      *(ulong *)(param_1 + 0x19c) =
           CONCAT44(fVar27 + ((float)((ulong)uVar11 >> 0x20) - fVar27) * fVar25,
                    fVar24 + ((float)uVar11 - fVar24) * fVar25);
      *(float *)(param_1 + 0x1a4) =
           *(float *)(param_1 + 0x1a4) + fVar25 * (fVar15 - *(float *)(param_1 + 0x1a4));
      *(float *)(param_1 + 0x208) = fVar16;
    }
    plVar12 = *(long **)(param_2 + 200);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0198da24;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_0198da24:
      plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0198da84;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar5,0);
LAB_0198da84:
        lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
        if (lVar9 != 0) {
          uVar20 = *(undefined4 *)(param_1 + 0x1a4);
          uVar18 = *(undefined4 *)(param_1 + 0x1a0);
          uVar17 = FUN_026a0e4c(*(undefined4 *)(param_1 + 0x19c),lVar9,0);
          *(undefined4 *)(param_1 + 0x130) = uVar17;
          *(undefined4 *)(param_1 + 0x134) = uVar18;
          *(undefined4 *)(param_1 + 0x138) = uVar20;
          FUN_0198984c(param_2,&local_d0);
          *(ulong *)(param_1 + 0x13c) = CONCAT44(uStack_c0,uStack_c4);
          *(undefined4 *)(param_1 + 0x144) = local_bc;
          *(float *)(param_1 + 0x178) = fVar14;
          *(float *)(param_1 + 0x17c) = fVar13;
          *(float *)(param_1 + 0x180) = fVar22;
          return 1;
        }
      }
    }
  }
LAB_0198dae4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


