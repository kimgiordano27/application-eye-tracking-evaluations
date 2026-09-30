/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager$$get_Item
ENTRY_POINT: 098132c8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void WebSocketSharp_Server_WebSocketSessionManager__get_Item
               (long *param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  int extraout_var;
  float extraout_w1;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 unaff_x19;
  long unaff_x20;
  int unaff_w22;
  int iVar13;
  int unaff_w25;
  int unaff_w26;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 uStack0000000000000118;
  undefined4 uStack000000000000011c;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  float fStack0000000000000160;
  float fStack0000000000000164;
  undefined4 in_stack_00000168;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  undefined8 uStack0000000000000194;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  undefined4 in_stack_000001d8;
  undefined4 in_stack_000001e8;
  undefined8 in_stack_00000250;
  undefined4 in_stack_0000027c;
  undefined8 in_stack_00000284;
  
  uStack0000000000000064 = **(undefined4 **)(*param_1 + 0xb8);
  uStack0000000000000054 = (*(undefined4 **)(*param_1 + 0xb8))[1];
  uVar5 = FUN_04624244(0);
  uVar3 = uStack0000000000000054;
  puVar2 = System_Collections_Generic_ICollection<Vector2[]>_TypeInfo;
  puVar1 = System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo;
  if (unaff_w25 < in_stack_00000078._4_4_) {
    iVar13 = unaff_w25;
    do {
      iVar6 = FUN_09633030(unaff_x19,0);
      fVar20 = (float)param_4;
      if (iVar6 <= iVar13) {
        return;
      }
      if ((iVar13 == in_stack_00000078._4_4_ + -1) || (iVar13 == unaff_w26)) {
        plVar7 = (long *)FUN_09633ba4(unaff_x19,0);
        if (plVar7 == (long *)0x0) goto LAB_09813898;
        lVar10 = *plVar7;
        lVar9 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_098133f0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar7,lVar9,0);
LAB_098133f0:
        fVar14 = (float)(*(code *)*puVar8)(plVar7,unaff_w25,puVar8[1]);
        plVar7 = (long *)FUN_09633ba4(unaff_x19,0);
        if (plVar7 == (long *)0x0) goto LAB_09813898;
        lVar10 = *plVar7;
        lVar9 = *(long *)puVar2;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_09813464;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar7,lVar9,0);
LAB_09813464:
        fVar15 = (float)(*(code *)*puVar8)(plVar7,iVar13,puVar8[1]);
        if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_09813898;
        fVar21 = fVar20;
        fVar16 = (float)FUN_0982b298(*(long *)(unaff_x20 + 0x108),0);
        plVar7 = (long *)FUN_09633bd4(unaff_x19,0);
        if (plVar7 == (long *)0x0) goto LAB_09813898;
        lVar10 = *plVar7;
        lVar9 = *(long *)puVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_098134f0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar7,lVar9,0);
LAB_098134f0:
        (*(code *)*puVar8)(plVar7,unaff_w22,puVar8[1]);
        if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_09813898;
        fVar17 = (float)FUN_0982b298(*(long *)(unaff_x20 + 0x108),0);
        if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_09813898;
        fVar18 = (float)FUN_0982b298(*(long *)(unaff_x20 + 0x108),0);
        plVar7 = (long *)FUN_09633bd4(unaff_x19,0);
        if (plVar7 == (long *)0x0) goto LAB_09813898;
        lVar10 = *plVar7;
        lVar9 = *(long *)puVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0981358c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_044822ac(plVar7,lVar9,0);
LAB_0981358c:
        (*(code *)*puVar8)(plVar7,unaff_w22,puVar8[1]);
        if (*(long *)(unaff_x20 + 0x108) == 0) goto LAB_09813898;
        fVar19 = (float)FUN_0982b298(*(long *)(unaff_x20 + 0x108),0);
        if ((*(long *)(unaff_x20 + 0x108) == 0) ||
           (lVar9 = FUN_09640b80(*(long *)(unaff_x20 + 0x108),0), lVar9 == 0)) goto LAB_09813898;
        fVar18 = (fVar20 + fVar15) / fVar18;
        fVar20 = (float)FUN_095389b0(lVar9,0);
        if (fVar21 + fVar20 < fVar18) {
LAB_0981360c:
          if ((*(long *)(unaff_x20 + 0x108) == 0) ||
             (lVar9 = FUN_09640b80(*(long *)(unaff_x20 + 0x108),0), lVar9 == 0)) goto LAB_09813898;
          fVar18 = (float)FUN_095389b0(lVar9,0);
          fVar18 = fVar21 + fVar18;
        }
        else {
          if ((*(long *)(unaff_x20 + 0x108) == 0) ||
             (lVar9 = FUN_09640b80(*(long *)(unaff_x20 + 0x108),0), lVar9 == 0)) goto LAB_09813898;
          fVar20 = (float)FUN_095389b0(lVar9,0);
          if (fVar18 < fVar20) goto LAB_0981360c;
        }
        if (in_stack_00000070 == 0) {
LAB_09813898:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar6 = FUN_0982f4e8(in_stack_00000070,0);
        uVar4 = uStack0000000000000064;
        fVar20 = fStack0000000000000068 + fVar14 / fVar16;
        fVar14 = fStack000000000000006c + (extraout_w1 / fVar17 - (float)extraout_var / fVar19);
        in_stack_000001d8 = 0;
        fStack00000000000001d0 = fVar20;
        fStack00000000000001d4 = fVar14;
        in_stack_000001e8 = in_stack_0000027c;
        FUN_0982ff30(in_stack_00000070,&stack0x000001d0,0);
        in_stack_00000168 = 0;
        uStack000000000000018c = uVar4;
        uStack0000000000000190 = uVar3;
        uStack0000000000000194 = 0;
        fStack0000000000000160 = fStack0000000000000068 + fVar18;
        fStack0000000000000164 = fVar14;
        uStack0000000000000188 = uVar5;
        in_stack_00000178 = in_stack_0000027c;
        in_stack_00000180 = in_stack_00000284;
        FUN_0982ff30(in_stack_00000070,&stack0x00000160,0);
        fVar14 = fStack000000000000006c + extraout_w1 / fVar17;
        in_stack_000000f8 = 0;
        uStack000000000000011c = uVar4;
        uStack0000000000000120 = uVar3;
        uStack0000000000000124 = 0;
        fStack00000000000000f0 = fStack0000000000000068 + fVar18;
        fStack00000000000000f4 = fVar14;
        uStack0000000000000118 = uVar5;
        in_stack_00000108 = in_stack_0000027c;
        in_stack_00000110 = in_stack_00000284;
        FUN_0982ff30(in_stack_00000070,&stack0x000000f0,0);
        in_stack_00000088 = 0;
        uStack00000000000000ac = uVar4;
        uStack00000000000000b0 = uVar3;
        uStack00000000000000b4 = 0;
        param_4 = in_stack_00000250;
        fStack0000000000000080 = fVar20;
        fStack0000000000000084 = fVar14;
        uStack00000000000000a8 = uVar5;
        in_stack_00000098 = in_stack_0000027c;
        in_stack_000000a0 = in_stack_00000284;
        FUN_0982ff30(in_stack_00000070,&stack0x00000080,0);
        FUN_0981f274(in_stack_00000070,iVar6,iVar6 + 1,iVar6 + 2,0);
        FUN_0981f274(in_stack_00000070,iVar6 + 2,iVar6 + 3,iVar6,0);
        if (*(int *)(*(long *)
                      System_Collections_Generic_ICollection<KeyValuePair<string,_object>>_TypeInfo
                    + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        unaff_w22 = unaff_w22 + 1;
        unaff_w25 = iVar13 + 1;
        unaff_w26 = FUN_0980f270(unaff_x19,unaff_w22);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != in_stack_00000078._4_4_);
  }
  return;
}


