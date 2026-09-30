/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsData$$.ctor
ENTRY_POINT: 03e8d830
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsData___ctor(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long unaff_x20;
  long lVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  int unaff_w27;
  long *unaff_x28;
  long *plVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  int iStack0000000000000014;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  puVar10 = PTR_DAT_04579dd0;
  puVar9 = Method_UnityEngine_Rendering_VolumeParameter<AnimationCurve>__ctor__;
  puVar8 = Method_System_ReadOnlySpan<char>__ctor__;
  puVar7 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
  puVar6 = Method_System_Nullable<char>_GetValueOrDefault__;
  puVar5 = Method_Utility_MonoBehaviourSingleton<OculusProvider>_get_Instance__;
  *unaff_x28 = unaff_x20;
  thunk_FUN_01f51358();
  *(undefined4 *)(unaff_x28 + 1) = 0;
  iStack0000000000000014 = unaff_w27;
  if (0x3ffe < unaff_w27) {
    iStack0000000000000014 = 0x3fff;
  }
  iVar2 = iStack0000000000000014 << 2;
  iVar3 = iStack0000000000000014 * 6;
  lVar11 = FUN_01f08890(*(undefined8 *)puVar6,iVar2);
  unaff_x28[2] = lVar11;
  thunk_FUN_01f51358();
  lVar11 = FUN_01f08890(*(undefined8 *)puVar7,iVar2);
  unaff_x28[5] = lVar11;
  thunk_FUN_01f51358();
  lVar11 = FUN_01f08890(*(undefined8 *)puVar7,iVar2);
  unaff_x28[6] = lVar11;
  thunk_FUN_01f51358();
  lVar11 = FUN_01f08890(*(undefined8 *)puVar8,iVar2);
  unaff_x28[7] = lVar11;
  thunk_FUN_01f51358();
  lVar11 = FUN_01f08890(*(undefined8 *)puVar6,iVar2);
  unaff_x28[3] = lVar11;
  thunk_FUN_01f51358();
  lVar11 = FUN_01f08890(*(undefined8 *)puVar9,iVar2);
  plVar19 = unaff_x28 + 4;
  *plVar19 = lVar11;
  thunk_FUN_01f51358(plVar19);
  lVar11 = FUN_01f08890(*(undefined8 *)puVar5,iVar3);
  plVar21 = unaff_x28 + 8;
  *plVar21 = lVar11;
  thunk_FUN_01f51358(plVar21,lVar11);
  puVar5 = Method_Unity_Collections_NativeArray<float4>_Dispose__;
  if (0 < unaff_w27) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      lVar12 = (long)(int)uVar14;
      lVar20 = 0;
      lVar11 = lVar12 * 8 + 0x20;
      lVar15 = (lVar12 * 2 + (long)(int)uVar14) * 4;
      do {
        lVar17 = unaff_x28[2];
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        if (lVar17 == 0) goto LAB_03e8dce4;
        uVar16 = uVar14 + (int)lVar20;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_03e8dce0;
        uVar23 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8
                    ) + 1);
        *(undefined8 *)(lVar17 + lVar15 + 0x20) =
             **(undefined8 **)
               (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
        *(undefined4 *)(lVar17 + lVar15 + 0x28) = uVar23;
        lVar17 = unaff_x28[5];
        if (DAT_0482ee9c == '\0') {
          thunk_FUN_01efb3a4(puVar5);
          DAT_0482ee9c = '\x01';
        }
        if (lVar17 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_03e8dce0;
        *(undefined8 *)(lVar17 + lVar11 + lVar20 * 8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        lVar17 = unaff_x28[6];
        if (lVar17 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_03e8dce0;
        *(undefined8 *)(lVar17 + lVar11 + lVar20 * 8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        lVar17 = *(long *)puVar10;
        lVar18 = unaff_x28[7];
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar17 = *(long *)puVar10;
        }
        if (lVar18 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_03e8dce0;
        *(undefined4 *)(lVar18 + lVar12 * 4 + 0x20 + lVar20 * 4) = **(undefined4 **)(lVar17 + 0xb8);
        lVar17 = unaff_x28[3];
        if (lVar17 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_03e8dce0;
        uVar23 = *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xc);
        *(undefined8 *)(lVar17 + lVar15 + 0x20) =
             *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 4);
        *(undefined4 *)(lVar17 + lVar15 + 0x28) = uVar23;
        lVar17 = *plVar19;
        if (lVar17 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_03e8dce0;
        lVar15 = lVar15 + 0xc;
        uVar22 = *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10);
        puVar4 = (undefined8 *)(lVar17 + lVar12 * 0x10 + 0x20 + lVar20 * 0x10);
        puVar4[1] = *(undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x18);
        *puVar4 = uVar22;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 4);
      lVar11 = *plVar21;
      if (lVar11 == 0) goto LAB_03e8dce4;
      uVar16 = *(uint *)(lVar11 + 0x18);
      if (uVar16 <= uVar13) {
LAB_03e8dce0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(uint *)(lVar11 + (long)(int)uVar13 * 4 + 0x20) = uVar14;
      if (uVar16 <= (uint)((long)(int)uVar13 | 1U)) goto LAB_03e8dce0;
      *(uint *)(lVar11 + ((long)(int)uVar13 | 1U) * 4 + 0x20) = uVar14 | 1;
      if (uVar16 <= uVar13 + 2) goto LAB_03e8dce0;
      *(uint *)(lVar11 + (long)(int)(uVar13 + 2) * 4 + 0x20) = uVar14 | 2;
      if (uVar16 <= uVar13 + 3) goto LAB_03e8dce0;
      *(uint *)(lVar11 + (long)(int)(uVar13 + 3) * 4 + 0x20) = uVar14 | 2;
      if (uVar16 <= uVar13 + 4) goto LAB_03e8dce0;
      *(uint *)(lVar11 + (long)(int)(uVar13 + 4) * 4 + 0x20) = uVar14 | 3;
      if (uVar16 <= uVar13 + 5) goto LAB_03e8dce0;
      *(uint *)(lVar11 + (long)(int)(uVar13 + 5) * 4 + 0x20) = uVar14;
      uVar16 = uVar14 + 4;
      uVar1 = uVar14 + 7;
      if (-1 < (int)uVar16) {
        uVar1 = uVar16;
      }
      uVar13 = uVar13 + 6;
      uVar14 = uVar16;
    } while ((int)uVar1 >> 2 < iStack0000000000000014);
  }
  if (*unaff_x28 != 0) {
    FUN_0405251c(*unaff_x28,unaff_x28[2],0);
    if (*unaff_x28 != 0) {
      FUN_040525c8(*unaff_x28,unaff_x28[3],0);
      if (*unaff_x28 != 0) {
        FUN_04052674(*unaff_x28,unaff_x28[4],0);
        if (*unaff_x28 != 0) {
          FUN_04053e40(*unaff_x28,unaff_x28[8],0);
          lVar11 = *(long *)puVar10;
          lVar15 = *unaff_x28;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar11 = *(long *)puVar10;
          }
          lVar11 = *(long *)(lVar11 + 0xb8);
          in_stack_00000080 = *(undefined8 *)(lVar11 + 0x30);
          in_stack_00000078 = *(undefined8 *)(lVar11 + 0x28);
          in_stack_00000070 = *(undefined8 *)(lVar11 + 0x20);
          if (lVar15 != 0) {
            in_stack_00000050 = in_stack_00000070;
            in_stack_00000058 = in_stack_00000078;
            in_stack_00000060 = in_stack_00000080;
            FUN_04051c4c(lVar15,&stack0x00000050,0);
            unaff_x28[9] = 0;
            thunk_FUN_01f51358(unaff_x28 + 9,0);
            return;
          }
        }
      }
    }
  }
LAB_03e8dce4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


