/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 045de364
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long unaff_x20;
  long unaff_x21;
  int iVar12;
  long *plVar13;
  undefined4 unaff_w24;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  plVar13 = *(long **)(unaff_x20 + 0x30);
  lVar17 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (plVar13 == (long *)0x0) {
    uVar4 = FUN_04d98018((long)&stack0x00000028 + 4,*(undefined8 *)(lVar6 + 400));
  }
  else {
    lVar6 = *(long *)(lVar6 + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                    /* try { // try from 045de388 to 046de38b has its CatchHandler @ 045de3b0 */
                    /* try { // try from 045de38c to 046de38f has its CatchHandler @ 045de3ac */
      lVar6 = FUN_02b76218(lVar6);
                    /* try { // try from 045de390 to 046de3d3 has its CatchHandler @ 045de024 */
    }
    lVar7 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 045de2f4 with catch @ 045de3a8
                        */
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto FUN_045de3f0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar13,lVar6,1);
FUN_045de3f0:
    uVar4 = (*(code *)*puVar5)(plVar13,unaff_w24,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
  uVar16 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar12 = 0;
  if (uVar16 != 0) {
    iVar12 = (int)uVar4 / (int)uVar16;
  }
  uVar14 = uVar4 - iVar12 * uVar16;
  if (uVar14 < uVar16) {
    piVar11 = (int *)(lVar6 + (ulong)uVar14 * 4 + 0x20);
    uVar16 = *piVar11 - 1;
    if (plVar13 == (long *)0x0) {
      if (lVar17 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
      uVar15 = *(undefined8 *)(lVar17 + 0x18);
      uVar14 = (uint)uVar15;
      if (uVar16 < uVar14) {
        iVar12 = 0;
        lVar6 = lVar17 + 0x20;
        do {
          uVar14 = (uint)uVar15;
          if (*(uint *)(lVar6 + (long)(int)uVar16 * 0x24) == uVar4) {
            plVar13 = (long *)FUN_03421e68(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_045de7ac;
            if (plVar13 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
            uVar9 = (**(code **)(*plVar13 + 0x1b8))
                              (plVar13,*(undefined4 *)(lVar6 + (long)(int)uVar16 * 0x24 + 8),
                               uStack000000000000002c,*(undefined8 *)(*plVar13 + 0x1c0));
            if ((uVar9 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) {
                puVar5 = (undefined8 *)&stack0x00000028;
                lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                uStack0000000000000028 = uStack000000000000002c;
                goto LAB_045de794;
              }
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_045de7ac;
              uVar15 = unaff_x28[2];
              uVar19 = unaff_x28[1];
              uVar18 = *unaff_x28;
              lVar6 = lVar6 + (long)(int)uVar16 * 0x24;
              goto LAB_045de75c;
            }
            uVar14 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar14 <= uVar16) goto LAB_045de7ac;
          uVar16 = *(uint *)(lVar6 + (long)(int)uVar16 * 0x24 + 4);
          if ((int)uVar14 <= iVar12) {
            FUN_04d9cb20(0);
          }
          uVar15 = *(undefined8 *)(lVar17 + 0x18);
          iVar12 = iVar12 + 1;
          uVar14 = (uint)uVar15;
        } while (uVar16 < uVar14);
      }
    }
    else {
      if (lVar17 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
      uVar15 = *(undefined8 *)(lVar17 + 0x18);
      uVar14 = (uint)uVar15;
      if (uVar16 < uVar14) {
        iVar12 = 0;
        lVar6 = lVar17 + 0x20;
        uStack000000000000000c = unaff_w29;
        do {
          uVar3 = uStack000000000000002c;
          uVar14 = (uint)uVar15;
          if (*(uint *)(lVar6 + (long)(int)uVar16 * 0x24) == uVar4) {
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar6 + (long)(int)uVar16 * 0x24 + 8);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_02b76218(lVar7);
            }
            lVar8 = *plVar13;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_045de4e4;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar5 = (undefined8 *)FUN_02b7654c(plVar13,lVar7,0);
LAB_045de4e4:
            uVar9 = (*(code *)*puVar5)(plVar13,uVar1,uVar3,puVar5[1]);
            if ((uVar9 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
                puVar5 = (undefined8 *)((long)&stack0x00000020 + 4);
                lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000020._4_4_ = uStack000000000000002c;
LAB_045de794:
                uVar15 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                   (*(undefined8 *)(lVar6 + 0x70),puVar5);
                FUN_04d9ca1c(uVar15,0);
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar16 < *(uint *)(lVar17 + 0x18)) {
                lVar6 = lVar6 + (long)(int)uVar16 * 0x24;
                uVar15 = unaff_x28[2];
                uVar19 = unaff_x28[1];
                uVar18 = *unaff_x28;
LAB_045de75c:
                *(undefined8 *)(lVar6 + 0x1c) = uVar15;
                *(undefined8 *)(lVar6 + 0x14) = uVar19;
                *(undefined8 *)(lVar6 + 0xc) = uVar18;
                return 1;
              }
              goto LAB_045de7ac;
            }
            uVar14 = *(uint *)(lVar17 + 0x18);
          }
          if (uVar14 <= uVar16) goto LAB_045de7ac;
          uVar16 = *(uint *)(lVar6 + (long)(int)uVar16 * 0x24 + 4);
          if ((int)uVar14 <= iVar12) {
            FUN_04d9cb20(0);
          }
          uVar15 = *(undefined8 *)(lVar17 + 0x18);
          iVar12 = iVar12 + 1;
          uVar14 = (uint)uVar15;
        } while (uVar16 < uVar14);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar16 = *(uint *)(unaff_x20 + 0x20);
      if (uVar16 == uVar14) {
        FUN_045deb60();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
        if (lVar6 == 0) goto System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor;
        uVar14 = *(uint *)(lVar6 + 0x18);
        iVar12 = 0;
        if (uVar14 != 0) {
          iVar12 = (int)uVar4 / (int)uVar14;
        }
        uVar2 = uVar4 - iVar12 * uVar14;
        if (uVar14 <= uVar2) goto LAB_045de7ac;
        lVar17 = *(long *)(unaff_x20 + 0x18);
        piVar11 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar17 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar16 + 1;
      }
      if (lVar17 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_045de7ac;
      lVar17 = lVar17 + (long)(int)uVar16 * 0x24;
    }
    else {
      uVar16 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      if (uVar14 <= uVar16) goto LAB_045de7ac;
      lVar17 = lVar17 + (long)(int)uVar16 * 0x24;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar17 + 0x24);
    }
    *(uint *)(lVar17 + 0x20) = uVar4;
    *(int *)(lVar17 + 0x24) = *piVar11 + -1;
    *(undefined4 *)(lVar17 + 0x28) = uStack000000000000002c;
    uVar18 = unaff_x28[1];
    uVar15 = *unaff_x28;
    *(undefined8 *)(lVar17 + 0x3c) = unaff_x28[2];
    *(undefined8 *)(lVar17 + 0x34) = uVar18;
    *(undefined8 *)(lVar17 + 0x2c) = uVar15;
    *piVar11 = uVar16 + 1;
    return 1;
  }
LAB_045de7ac:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


