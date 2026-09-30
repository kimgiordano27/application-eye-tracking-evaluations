/*
FUNCTION_NAME: Unity.Services.Authentication.PlayerAccounts.WebRequest$$RequestCompleted
ENTRY_POINT: 058cafbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Authentication_PlayerAccounts_WebRequest__RequestCompleted
               (undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 uVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  undefined8 *puVar21;
  undefined1 uVar22;
  ulong uVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  long *unaff_x19;
  byte unaff_w20;
  long lVar27;
  long *plVar28;
  long unaff_x21;
  int unaff_w22;
  undefined8 *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w28;
  undefined8 *unaff_x29;
  long lVar29;
  undefined1 auVar30 [16];
  int iStack0000000000000008;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  long in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 *in_stack_00000068;
  int iStack0000000000000070;
  byte bStack0000000000000074;
  undefined4 uStack0000000000000078;
  int iStack000000000000007c;
  undefined4 uStack0000000000000080;
  int iStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  ulong in_stack_00000098;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  long lVar20;
  
  iStack0000000000000070 = unaff_w28;
  do {
    FUN_05ccc4e4(param_1,param_2,0);
    FUN_05ccc4ec(&stack0x00000088,1,0);
    FUN_05ccc4f4(&stack0x00000088,unaff_w20 & 1,0);
    FUN_05ccc4fc(&stack0x00000088,0,0);
    iStack0000000000000070 = iStack0000000000000070 + 1;
    unaff_x29[1] = in_stack_00000090;
    *unaff_x29 = in_stack_00000088;
    unaff_x29[2] = in_stack_00000098;
    unaff_x23[4] = in_stack_000000c0;
    unaff_x23[1] = in_stack_000000a8;
    *unaff_x23 = in_stack_000000a0;
    unaff_x23[3] = in_stack_000000b8;
    unaff_x23[2] = in_stack_000000b0;
    puVar11 = Method_Unity_Collections_NativeArray_ReadOnly<AABB>_UnsafeElementAt__;
    puVar10 = Method_Oculus_Interaction_RandomSampleConsensus<Vector3>_FindOptimalModel__;
    uVar14 = extraout_x1_01;
    do {
      do {
        unaff_x21 = unaff_x21 + 1;
        while( true ) {
          lVar27 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar11 + 0x20) + 0x135) & 1) == 0) {
            FUN_02b76218(*(long *)(*(long *)puVar11 + 0x20),uVar14);
            uVar14 = extraout_x1;
          }
          if (unaff_x21 < *(int *)(lVar27 + 8)) break;
          if ((bStack0000000000000074 & 1) == 0) {
LAB_058cb0d0:
            if (unaff_w25 != 0) {
              in_stack_00000020 =
                   FUN_032239e0(unaff_w25,3,
                                *(undefined8 *)Method_System_Data_RBTree<int>_get_HasDuplicates__);
              in_stack_00000010 =
                   FUN_03223ae8(unaff_w26,3,*(undefined8 *)Method_System_Data_RBTree<int>_get_Item__
                               );
              iStack0000000000000008 = unaff_w26;
              iStack000000000000000c = unaff_w25;
            }
            if (unaff_w24 != 0) {
              in_stack_00000030 =
                   FUN_03223a38(unaff_w24,3,
                                *(undefined8 *)Method_System_Data_RBTree<int>_UpdateNodeKey__);
              in_stack_00000018._4_4_ = unaff_w24;
            }
            uVar13 = FUN_03223b3c((unaff_w25 + unaff_w24) * 3,3,
                                  *(undefined8 *)
                                   Method_Oculus_Interaction_RandomSampleConsensus<Vector3>__ctor__)
            ;
            puVar21 = (undefined8 *)unaff_x19[0xd];
            puVar21[4] = in_stack_00000010;
            puVar21[5] = in_stack_00000058;
            *puVar21 = in_stack_00000020;
            puVar21[1] = in_stack_00000030;
            *(int *)(puVar21 + 8) = iStack000000000000000c;
            *(int *)((long)puVar21 + 0x44) = in_stack_00000018._4_4_;
            puVar21[9] = in_stack_00000038;
            puVar21[3] = in_stack_000000d8;
            puVar21[2] = in_stack_000000d0;
            *(int *)(puVar21 + 10) = iStack0000000000000008;
            *(int *)((long)puVar21 + 0x54) = iStack0000000000000070;
            puVar21[6] = uVar13;
            puVar21[7] = in_stack_00000040;
            puVar21[0xb] = in_stack_00000028;
            return;
          }
          lVar27 = FUN_0322afa0(unaff_x19[0x12],unaff_x19[0x13],
                                *(undefined8 *)System_Collections_Generic_List<OVROverlay>_TypeInfo)
          ;
          uStack0000000000000078 = 0;
          uStack0000000000000080 = 0;
          iStack0000000000000084 = unaff_w22;
          iStack000000000000007c = unaff_w24;
          iVar12 = thunk_FUN_02b75cd0(lVar27 + 4,unaff_w24 + 1,0);
          _uStack0000000000000078 = CONCAT44(iStack000000000000007c,iVar12 - (unaff_w24 + 1));
          iVar12 = thunk_FUN_02b75cd0(lVar27,iStack0000000000000084,0);
          _uStack0000000000000080 = CONCAT44(iStack0000000000000084,iVar12 - iStack0000000000000084)
          ;
          auVar30 = FUN_058e2a84(&stack0x00000078,in_stack_00000048,0);
          uVar14 = auVar30._8_8_;
          if ((auVar30._0_8_ & 1) != 0) {
            puVar21 = (undefined8 *)unaff_x19[0x10];
            puVar21[1] = _uStack0000000000000080;
            *puVar21 = _uStack0000000000000078;
            goto LAB_058cb0d0;
          }
          puVar21 = (undefined8 *)unaff_x19[0x10];
          bStack0000000000000074 = 0;
          _uStack0000000000000078 = 0;
          _uStack0000000000000080 = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          unaff_x21 = 0;
          unaff_w22 = 0;
          unaff_w24 = 0;
          unaff_w26 = 0;
          unaff_w25 = 0;
          iStack0000000000000070 = 0;
        }
        plVar28 = (long *)*unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar10 + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218(*(long *)(*(long *)puVar10 + 0x20),uVar14);
          uVar14 = extraout_x1_00;
        }
        puVar24 = (undefined4 *)(*plVar28 + unaff_x21 * 0x24);
        uVar6 = puVar24[7];
        bVar1 = bStack0000000000000074 & *(byte *)(puVar24 + 6);
        iVar12 = unaff_w24;
        if ((bVar1 & 1) == 0) {
          iVar12 = unaff_w25;
        }
      } while ((int)uVar6 < 1);
      uVar3 = *puVar24;
      uVar4 = puVar24[1];
      uVar14 = (ulong)(uint)puVar24[2];
      uVar5 = puVar24[3];
      unaff_w20 = *(byte *)(puVar24 + 4);
      uVar7 = puVar24[5];
      uVar23 = 0;
      iVar8 = puVar24[8];
      lVar25 = unaff_x19[1];
      uVar16 = 0;
      lVar26 = unaff_x19[3];
      lVar27 = unaff_x19[5];
      lVar15 = unaff_x19[9];
      do {
        lVar18 = (long)*(int *)(lVar25 + (long)(iVar8 + (int)uVar23) * 4);
        iVar19 = *(int *)(lVar26 + lVar18 * 4);
        uVar9 = *(uint *)(lVar27 + lVar18 * 4);
        uVar17 = (ulong)uVar9;
        if ((bVar1 & 1) == 0) {
          *(int *)(lVar15 + lVar18 * 4) = unaff_w25;
          unaff_w25 = uVar9 + unaff_w25;
        }
        else {
          *(int *)(lVar15 + lVar18 * 4) = unaff_w24;
          unaff_w24 = uVar9 + unaff_w24;
        }
        if (0 < (int)uVar9) {
          lVar18 = unaff_x19[0xb];
          do {
            lVar20 = (long)iVar19;
            if ((bVar1 & 1) == 0) {
              lVar29 = unaff_x19[7];
              *(int *)(lVar18 + lVar20 * 4) = unaff_w26;
              unaff_w26 = *(int *)(lVar29 + lVar20 * 4) + unaff_w26;
            }
            else {
              lVar29 = unaff_x19[7];
              *(int *)(lVar18 + lVar20 * 4) = unaff_w22;
              unaff_w22 = *(int *)(lVar29 + lVar20 * 4) + unaff_w22;
            }
            uVar17 = uVar17 - 1;
            iVar19 = iVar19 + 1;
          } while (uVar17 != 0);
        }
        uVar23 = uVar23 + 1;
        uVar16 = uVar9 + uVar16;
      } while (uVar23 != uVar6);
    } while (uVar16 == 0);
    in_stack_000000c0 = 0;
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_000000a8 = (ulong)uVar16;
    bVar2 = (bVar1 & 1) == 0;
    if (bVar2) {
      in_stack_00000068 = &stack0x000000a0;
      in_stack_00000060 = &stack0x00000088;
      uVar22 = 0x1d;
    }
    else {
      uVar22 = 0x1c;
    }
    in_stack_000000a0 = CONCAT44(iVar12,(uint)!bVar2);
    in_stack_00000088 = CONCAT44(uVar7,uVar4);
    unaff_x23 = (undefined8 *)(in_stack_00000058 + (long)iStack0000000000000070 * 0x28);
    in_stack_00000090 = 0;
    in_stack_00000098 = (ulong)(byte)uVar3;
    unaff_x29 = in_stack_00000050;
    puVar21 = &stack0x00000088;
    if ((bVar1 & 1) == 0) {
      unaff_x29 = in_stack_00000068 + 2;
      puVar21 = in_stack_00000060;
    }
    *(undefined1 *)((long)puVar21 + 0x11) = uVar22;
    FUN_05ccc4dc(&stack0x00000088,uVar14,0);
    param_1 = &stack0x00000088;
    param_2 = (ulong)uVar5;
  } while( true );
}


