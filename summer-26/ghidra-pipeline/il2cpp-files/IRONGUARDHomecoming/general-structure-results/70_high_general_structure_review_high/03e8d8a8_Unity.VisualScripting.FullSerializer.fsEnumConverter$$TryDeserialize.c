/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsEnumConverter$$TryDeserialize
ENTRY_POINT: 03e8d8a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_FullSerializer_fsEnumConverter__TryDeserialize(void)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  int in_w8;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  long lVar8;
  undefined8 *unaff_x22;
  uint uVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long lVar10;
  long lVar11;
  undefined4 unaff_w25;
  long *plVar12;
  long lVar13;
  int unaff_w27;
  long *unaff_x28;
  long *plVar14;
  long *unaff_x29;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  lVar4 = FUN_01f08890();
  unaff_x28[2] = lVar4;
  thunk_FUN_01f51358();
  lVar4 = FUN_01f08890(*unaff_x23,unaff_w25);
  unaff_x28[5] = lVar4;
  thunk_FUN_01f51358();
  lVar4 = FUN_01f08890(*unaff_x23,unaff_w25);
  unaff_x28[6] = lVar4;
  thunk_FUN_01f51358();
  lVar4 = FUN_01f08890(*unaff_x24,unaff_w25);
  unaff_x28[7] = lVar4;
  thunk_FUN_01f51358();
  lVar4 = FUN_01f08890(*unaff_x22,unaff_w25);
  unaff_x28[3] = lVar4;
  thunk_FUN_01f51358();
  lVar4 = FUN_01f08890(*unaff_x21,unaff_w25);
  plVar12 = unaff_x28 + 4;
  *plVar12 = lVar4;
  thunk_FUN_01f51358(plVar12);
  lVar4 = FUN_01f08890(*unaff_x19,in_w8 << 1);
  plVar14 = unaff_x28 + 8;
  *plVar14 = lVar4;
  thunk_FUN_01f51358(plVar14,lVar4);
  puVar3 = Method_Unity_Collections_NativeArray<float4>_Dispose__;
  if (0 < unaff_w27) {
    uVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = (long)(int)uVar7;
      lVar13 = 0;
      lVar4 = lVar5 * 8 + 0x20;
      lVar8 = (lVar5 * 2 + (long)(int)uVar7) * 4;
      do {
        lVar10 = unaff_x28[2];
        if (DAT_0482ee12 == '\0') {
          thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
          DAT_0482ee12 = '\x01';
        }
        if (lVar10 == 0) goto LAB_03e8dce4;
        uVar9 = uVar7 + (int)lVar13;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_03e8dce0;
        uVar16 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8
                    ) + 1);
        *(undefined8 *)(lVar10 + lVar8 + 0x20) =
             **(undefined8 **)
               (*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8);
        *(undefined4 *)(lVar10 + lVar8 + 0x28) = uVar16;
        lVar10 = unaff_x28[5];
        if (DAT_0482ee9c == '\0') {
          thunk_FUN_01efb3a4(puVar3);
          DAT_0482ee9c = '\x01';
        }
        if (lVar10 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_03e8dce0;
        *(undefined8 *)(lVar10 + lVar4 + lVar13 * 8) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        lVar10 = unaff_x28[6];
        if (lVar10 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_03e8dce0;
        *(undefined8 *)(lVar10 + lVar4 + lVar13 * 8) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        lVar10 = *unaff_x29;
        lVar11 = unaff_x28[7];
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar10 = *unaff_x29;
        }
        if (lVar11 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar11 + 0x18) <= uVar9) goto LAB_03e8dce0;
        *(undefined4 *)(lVar11 + lVar5 * 4 + 0x20 + lVar13 * 4) = **(undefined4 **)(lVar10 + 0xb8);
        lVar10 = unaff_x28[3];
        if (lVar10 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_03e8dce0;
        uVar16 = *(undefined4 *)(*(long *)(*unaff_x29 + 0xb8) + 0xc);
        *(undefined8 *)(lVar10 + lVar8 + 0x20) = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 4);
        *(undefined4 *)(lVar10 + lVar8 + 0x28) = uVar16;
        lVar10 = *plVar12;
        if (lVar10 == 0) goto LAB_03e8dce4;
        if (*(uint *)(lVar10 + 0x18) <= uVar9) goto LAB_03e8dce0;
        lVar8 = lVar8 + 0xc;
        uVar15 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x10);
        puVar2 = (undefined8 *)(lVar10 + lVar5 * 0x10 + 0x20 + lVar13 * 0x10);
        puVar2[1] = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
        *puVar2 = uVar15;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 4);
      lVar4 = *plVar14;
      if (lVar4 == 0) goto LAB_03e8dce4;
      uVar9 = *(uint *)(lVar4 + 0x18);
      if (uVar9 <= uVar6) {
LAB_03e8dce0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(uint *)(lVar4 + (long)(int)uVar6 * 4 + 0x20) = uVar7;
      if (uVar9 <= (uint)((long)(int)uVar6 | 1U)) goto LAB_03e8dce0;
      *(uint *)(lVar4 + ((long)(int)uVar6 | 1U) * 4 + 0x20) = uVar7 | 1;
      if (uVar9 <= uVar6 + 2) goto LAB_03e8dce0;
      *(uint *)(lVar4 + (long)(int)(uVar6 + 2) * 4 + 0x20) = uVar7 | 2;
      if (uVar9 <= uVar6 + 3) goto LAB_03e8dce0;
      *(uint *)(lVar4 + (long)(int)(uVar6 + 3) * 4 + 0x20) = uVar7 | 2;
      if (uVar9 <= uVar6 + 4) goto LAB_03e8dce0;
      *(uint *)(lVar4 + (long)(int)(uVar6 + 4) * 4 + 0x20) = uVar7 | 3;
      if (uVar9 <= uVar6 + 5) goto LAB_03e8dce0;
      *(uint *)(lVar4 + (long)(int)(uVar6 + 5) * 4 + 0x20) = uVar7;
      uVar9 = uVar7 + 4;
      uVar1 = uVar7 + 7;
      if (-1 < (int)uVar9) {
        uVar1 = uVar9;
      }
      uVar6 = uVar6 + 6;
      uVar7 = uVar9;
    } while ((int)uVar1 >> 2 < in_stack_00000010._4_4_);
  }
  if (*unaff_x28 != 0) {
    FUN_0405251c(*unaff_x28,unaff_x28[2],0);
    if (*unaff_x28 != 0) {
      FUN_040525c8(*unaff_x28,unaff_x28[3],0);
      if (*unaff_x28 != 0) {
        FUN_04052674(*unaff_x28,unaff_x28[4],0);
        if (*unaff_x28 != 0) {
          FUN_04053e40(*unaff_x28,unaff_x28[8],0);
          lVar4 = *unaff_x29;
          lVar8 = *unaff_x28;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar4 = *unaff_x29;
          }
          lVar4 = *(long *)(lVar4 + 0xb8);
          in_stack_00000080 = *(undefined8 *)(lVar4 + 0x30);
          in_stack_00000078 = *(undefined8 *)(lVar4 + 0x28);
          in_stack_00000070 = *(undefined8 *)(lVar4 + 0x20);
          if (lVar8 != 0) {
            in_stack_00000050 = in_stack_00000070;
            in_stack_00000058 = in_stack_00000078;
            in_stack_00000060 = in_stack_00000080;
            FUN_04051c4c(lVar8,&stack0x00000050,0);
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


