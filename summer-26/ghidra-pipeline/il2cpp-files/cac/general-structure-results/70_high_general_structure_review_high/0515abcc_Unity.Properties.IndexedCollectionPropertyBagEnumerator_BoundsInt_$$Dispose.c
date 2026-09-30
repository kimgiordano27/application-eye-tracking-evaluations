/*
FUNCTION_NAME: Unity.Properties.IndexedCollectionPropertyBagEnumerator<BoundsInt>$$Dispose
ENTRY_POINT: 0515abcc
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
Unity_Properties_IndexedCollectionPropertyBagEnumerator<BoundsInt>__Dispose
          (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 *param_4,
          undefined8 *param_5,undefined1 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  
  uVar15 = param_3._8_8_;
  uVar13 = param_3._0_8_;
  uVar3 = param_2._8_8_;
  uVar8 = param_2._0_8_;
code_r0x0515abcc:
  uStack0000000000000098 = in_stack_00000038;
  uStack0000000000000090 = in_stack_00000030;
  uStack0000000000000070 = uVar8;
  uStack0000000000000078 = uVar3;
  uStack0000000000000080 = uVar13;
  uStack0000000000000088 = uVar15;
  uVar2 = (*param_1)(unaff_x23,param_5,param_6,param_4[1]);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
LAB_0515abec:
  uVar4 = (uint)*(undefined8 *)(unaff_x25 + 0x18);
  if ((int)uVar4 <= unaff_w26) {
    thunk_FUN_03f786f8(PTR_DAT_09111b70);
    uVar8 = thunk_FUN_03f4e68c();
    uVar3 = thunk_FUN_03f786f8(PTR_DAT_09123c28);
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar8,uVar3,0)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar8);
  }
  if ((uint)unaff_x27 < uVar4) {
    unaff_w26 = unaff_w26 + 1;
    uVar6 = *(uint *)(unaff_x28 + (unaff_x24 & 0xffffffff) * (unaff_x29 & 0xffffffff) + 4);
    unaff_x24 = (ulong)uVar6;
    if (-1 < (int)uVar6) {
      if (uVar4 <= uVar6) goto LAB_0515ad74;
      unaff_x27 = unaff_x24;
      if (*(int *)(unaff_x28 + unaff_x24 * (unaff_x29 & 0xffffffff)) == unaff_w21)
      goto Unity_Properties_IndexedCollectionPropertyBagEnumerator<BoundsInt>__Reset;
      goto LAB_0515abec;
    }
    uVar4 = *(uint *)(unaff_x19 + 0x28);
    if ((int)uVar4 < 0) {
      if (unaff_x25 == 0) goto LAB_0515adb4;
      uVar4 = *(uint *)(unaff_x19 + 0x24);
      uVar6 = *(uint *)(unaff_x25 + 0x18);
      if (uVar4 == uVar6) {
        FUN_0515a838();
        if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0515adb4;
        uVar4 = *(uint *)(unaff_x19 + 0x24);
        unaff_x25 = *(long *)(unaff_x19 + 0x18);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x10) + 0x18);
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
        if (unaff_x25 == 0) goto LAB_0515adb4;
        iVar1 = 0;
        iVar5 = (int)uVar8;
        if (iVar5 != 0) {
          iVar1 = unaff_w21 / iVar5;
        }
        in_stack_00000008._4_4_ = unaff_w21 - iVar1 * iVar5;
        uVar6 = *(uint *)(unaff_x25 + 0x18);
      }
      else {
        *(uint *)(unaff_x19 + 0x24) = uVar4 + 1;
      }
    }
    else {
      if (unaff_x25 == 0) goto LAB_0515adb4;
      uVar6 = *(uint *)(unaff_x25 + 0x18);
      if (uVar6 <= uVar4) goto LAB_0515ad74;
      *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x25 + (ulong)uVar4 * 0x38 + 0x24);
    }
    if (uVar6 <= uVar4) goto LAB_0515ad74;
    piVar9 = (int *)(unaff_x25 + 0x20 + (long)(int)uVar4 * 0x38);
    *piVar9 = unaff_w21;
    uVar15 = unaff_x20[3];
    uVar13 = unaff_x20[2];
    uVar3 = unaff_x20[5];
    uVar8 = unaff_x20[4];
    uVar11 = *unaff_x20;
    *(undefined8 *)(piVar9 + 4) = unaff_x20[1];
    *(undefined8 *)(piVar9 + 2) = uVar11;
    *(undefined8 *)(piVar9 + 0xc) = uVar3;
    *(undefined8 *)(piVar9 + 10) = uVar8;
    *(undefined8 *)(piVar9 + 8) = uVar15;
    *(undefined8 *)(piVar9 + 6) = uVar13;
    if (uVar4 < *(uint *)(unaff_x25 + 0x18)) {
      thunk_FUN_03f86000(piVar9 + 2,0);
      lVar10 = *(long *)(unaff_x19 + 0x10);
      if (lVar10 == 0) goto LAB_0515adb4;
      if ((in_stack_00000008._4_4_ < *(uint *)(lVar10 + 0x18)) &&
         (uVar4 < *(uint *)(unaff_x25 + 0x18))) {
        lVar10 = lVar10 + (ulong)in_stack_00000008._4_4_ * 4;
        *(int *)(unaff_x25 + 0x20 + (long)(int)uVar4 * 0x38 + 4) = *(int *)(lVar10 + 0x20) + -1;
        *(uint *)(lVar10 + 0x20) = uVar4 + 1;
        *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
        *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_0515ad74:
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
Unity_Properties_IndexedCollectionPropertyBagEnumerator<BoundsInt>__Reset:
  lVar10 = unaff_x28 + unaff_x24 * (unaff_x29 & 0xffffffff);
  uVar3 = unaff_x20[1];
  uVar8 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar13 = unaff_x20[2];
  unaff_x23 = *(long **)(unaff_x19 + 0x30);
  uVar18 = *(undefined8 *)(lVar10 + 0x10);
  uVar17 = *(undefined8 *)(lVar10 + 8);
  uVar12 = *(undefined8 *)(lVar10 + 0x20);
  uVar11 = *(undefined8 *)(lVar10 + 0x18);
  uVar16 = *(undefined8 *)(lVar10 + 0x30);
  uVar14 = *(undefined8 *)(lVar10 + 0x28);
  in_stack_00000038 = unaff_x20[5];
  in_stack_00000030 = unaff_x20[4];
  if (unaff_x23 == (long *)0x0) {
LAB_0515adb4:
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  lVar10 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_03f4b260(lVar10);
  }
  lVar7 = *unaff_x23;
  uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar10) {
        param_4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0515abac;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  param_4 = (undefined8 *)FUN_03f4b594(unaff_x23,lVar10,0);
LAB_0515abac:
  param_5 = &stack0x000000a0;
  param_1 = (code *)*param_4;
  param_6 = (undefined1 *)&stack0x00000070;
  in_stack_000000a0 = uVar17;
  in_stack_000000a8 = uVar18;
  in_stack_000000b0 = uVar11;
  in_stack_000000b8 = uVar12;
  in_stack_000000c0 = uVar14;
  in_stack_000000c8 = uVar16;
  goto code_r0x0515abcc;
}


