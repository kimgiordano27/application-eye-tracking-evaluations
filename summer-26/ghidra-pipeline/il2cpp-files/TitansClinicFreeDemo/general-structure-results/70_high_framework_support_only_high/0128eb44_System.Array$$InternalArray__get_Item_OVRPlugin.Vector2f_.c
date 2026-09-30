/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 0128eb44
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__get_Item<OVRPlugin_Vector2f>
              (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  char *pcVar17;
  undefined1 *puVar18;
  ulong uVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  byte *pbVar24;
  ulong uVar25;
  undefined2 uVar26;
  ulong uVar27;
  long *unaff_x19;
  uint unaff_w20;
  undefined1 *unaff_x21;
  undefined1 *puVar28;
  byte *unaff_x22;
  uint uVar29;
  ulong uVar30;
  uint *unaff_x25;
  long unaff_x26;
  uint uVar31;
  ulong unaff_x27;
  uint unaff_w29;
  undefined8 in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  uint uStack0000000000000048;
  int iStack000000000000004c;
  undefined8 in_stack_00000050;
  ulong *in_stack_00000058;
  uint *in_stack_00000060;
  int iStack0000000000000068;
  undefined4 uStack000000000000006c;
  
code_r0x0128eb44:
  uVar9 = FUN_0129514c(param_1,param_2,param_3);
  *in_stack_00000058 = uVar9;
  uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,0x8b1f);
  uVar9 = FUN_0129514c(uVar9,(long)&stack0x00000068 + 4,2);
  *in_stack_00000058 = uVar9;
  uVar30 = 0;
  uVar9 = 0;
  *unaff_x25 = 0x3f35;
LAB_0128eaa8:
  uVar12 = (uint)uVar9;
  uVar13 = (uint)unaff_x27;
  pbVar20 = unaff_x22;
  iVar21 = 1;
  switch(*unaff_x25) {
  case 0x3f34:
    uVar13 = *(uint *)(unaff_x26 + 0x10);
    if (uVar13 == 0) {
      uVar12 = 0x3f40;
      goto LAB_01290064;
    }
    if (uVar12 < 0x10) {
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar20 + 1;
        uVar11 = uVar9 + 8;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = uVar9 < 8;
        uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        pbVar20 = unaff_x22;
        uVar9 = uVar11;
      } while (bVar7);
      uVar9 = uVar11 & 0xffffffff;
      unaff_x25 = in_stack_00000060;
    }
    if (((uVar13 >> 1 & 1) != 0) && (uVar30 == 0x8b1f)) goto code_r0x0128eb20;
    if (*(long *)(unaff_x26 + 0x30) != 0) {
      *(undefined4 *)(*(long *)(unaff_x26 + 0x30) + 0x48) = 0xffffffff;
    }
    if (((uVar13 & 1) != 0) &&
       ((((ulong)(uint)((int)uVar30 << 8) & 0xff00) + (uVar30 >> 8)) * -0x1084210842108421 <
        0x842108421084211)) {
      if ((uVar30 & 0xf) != 8) goto LAB_01290118;
      uVar11 = uVar30 >> 4 & 0xf;
      uVar14 = (uint)uVar11;
      uVar12 = uVar14 + 8;
      uVar13 = *(uint *)(unaff_x26 + 0x38);
      if (*(uint *)(unaff_x26 + 0x38) == 0) {
        *(uint *)(unaff_x26 + 0x38) = uVar12;
        uVar13 = uVar12;
      }
      if ((7 < uVar14) || (uVar13 < uVar12)) {
        uVar9 = (ulong)((int)uVar9 - 4);
        uVar30 = uVar30 >> 4;
        pcVar17 = "invalid window size";
        break;
      }
      *(undefined4 *)(unaff_x26 + 0x18) = 0;
      *(int *)(unaff_x26 + 0x1c) = 0x100 << uVar11;
      lVar10 = FUN_0128e738(0,0,0);
      uVar15 = 0x3f3f;
      if ((uVar30 & 0x2000) != 0) {
        uVar15 = 0x3f3d;
      }
      uVar9 = 0;
      *(long *)(unaff_x26 + 0x20) = lVar10;
      unaff_x19[0xc] = lVar10;
      *(undefined4 *)(unaff_x26 + 8) = uVar15;
      uVar30 = 0;
      goto LAB_0128eaa8;
    }
    pcVar17 = "incorrect header check";
    break;
  case 0x3f35:
    if (uVar12 < 0x10) {
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar20 + 1;
        uVar11 = uVar9 + 8;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = uVar9 < 8;
        uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        pbVar20 = unaff_x22;
        uVar9 = uVar11;
      } while (bVar7);
      uVar9 = uVar11 & 0xffffffff;
      unaff_x25 = in_stack_00000060;
    }
    uVar12 = (uint)uVar30;
    *(uint *)(unaff_x26 + 0x18) = uVar12;
    if ((uVar12 & 0xff) == 8) {
      if ((uVar30 & 0xe000) == 0) {
        if (*(uint **)(unaff_x26 + 0x30) != (uint *)0x0) {
          **(uint **)(unaff_x26 + 0x30) = uVar12 >> 8 & 1;
        }
        if (((uVar12 >> 9 & 1) != 0) && ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
          uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,(short)uVar30);
          uVar9 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,2);
          *in_stack_00000058 = uVar9;
        }
        uVar9 = 0;
        uVar30 = 0;
        *unaff_x25 = 0x3f36;
        pbVar20 = unaff_x22;
        goto LAB_0128f540;
      }
      pcVar17 = "unknown header flags set";
    }
    else {
LAB_01290118:
      pcVar17 = "unknown compression method";
    }
    break;
  case 0x3f36:
    if (uVar12 < 0x20) {
LAB_0128f540:
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        pbVar23 = pbVar20 + 1;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = uVar9 < 0x18;
        uVar11 = uVar9 & 0x3f;
        uVar9 = uVar9 + 8;
        uVar30 = ((ulong)*pbVar20 << uVar11) + uVar30;
        pbVar20 = pbVar23;
      } while (bVar7);
    }
    if (*(long *)(unaff_x26 + 0x30) != 0) {
      *(ulong *)(*(long *)(unaff_x26 + 0x30) + 8) = uVar30;
    }
    if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
       ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
      uStack000000000000006c = (undefined4)uVar30;
      uVar9 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,4);
      *in_stack_00000058 = uVar9;
    }
    uVar9 = 0;
    uVar30 = 0;
    *in_stack_00000060 = 0x3f37;
LAB_0128f5d0:
    do {
      if ((int)unaff_x27 == 0)
      goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
      unaff_x22 = pbVar20 + 1;
      unaff_x27 = (ulong)((int)unaff_x27 - 1);
      bVar7 = uVar9 < 8;
      uVar11 = uVar9 & 0x3f;
      uVar9 = uVar9 + 8;
      uVar30 = ((ulong)*pbVar20 << uVar11) + uVar30;
      pbVar20 = unaff_x22;
    } while (bVar7);
    goto LAB_0128f5f0;
  case 0x3f37:
    if (uVar12 < 0x10) goto LAB_0128f5d0;
LAB_0128f5f0:
    lVar10 = *(long *)(unaff_x26 + 0x30);
    if (lVar10 != 0) {
      *(uint *)(lVar10 + 0x10) = (uint)uVar30 & 0xff;
      *(int *)(lVar10 + 0x14) = (int)(uVar30 >> 8);
    }
    if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
       ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
      uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,(short)uVar30);
      uVar9 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,2);
      *in_stack_00000058 = uVar9;
    }
    uVar13 = *(uint *)(unaff_x26 + 0x18);
    uVar30 = 0;
    uVar9 = 0;
    *(undefined4 *)(unaff_x26 + 8) = 0x3f38;
    pbVar20 = unaff_x22;
    uVar11 = 0;
    unaff_x25 = in_stack_00000060;
    if ((uVar13 >> 10 & 1) == 0) {
LAB_0128f670:
      if (*(long *)(unaff_x26 + 0x30) != 0) {
        *(undefined8 *)(*(long *)(unaff_x26 + 0x30) + 0x18) = 0;
      }
    }
    else {
LAB_0128f684:
      do {
        uVar9 = uVar11;
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar20 + 1;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        pbVar20 = unaff_x22;
        unaff_x25 = in_stack_00000060;
        uVar11 = uVar9 + 8;
      } while (uVar9 < 8);
LAB_0128f6a8:
      *(int *)(unaff_x26 + 0x5c) = (int)uVar30;
      if (*(long *)(unaff_x26 + 0x30) != 0) {
        *(int *)(*(long *)(unaff_x26 + 0x30) + 0x20) = (int)uVar30;
      }
      if (((uVar13 >> 9 & 1) == 0) || ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) == 0)) {
        uVar30 = 0;
        uVar9 = 0;
      }
      else {
        uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,(short)uVar30);
        uVar11 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,2);
        uVar30 = 0;
        uVar9 = 0;
        *in_stack_00000058 = uVar11;
      }
    }
    *unaff_x25 = 0x3f39;
switchD_0128eacc_caseD_3f39:
    uVar12 = (uint)uVar9;
    uVar13 = *(uint *)(unaff_x26 + 0x18);
    if ((uVar13 >> 10 & 1) != 0) {
      uVar29 = *(uint *)(unaff_x26 + 0x5c);
      uVar31 = (uint)unaff_x27;
      uVar14 = uVar31;
      if (uVar29 <= uVar31) {
        uVar14 = uVar29;
      }
      if (uVar14 != 0) {
        lVar10 = *(long *)(unaff_x26 + 0x30);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
          uVar29 = *(int *)(lVar10 + 0x20) - uVar29;
          uVar13 = *(uint *)(lVar10 + 0x24) - uVar29;
          if (uVar29 + uVar14 <= *(uint *)(lVar10 + 0x24)) {
            uVar13 = uVar14;
          }
          memcpy((void *)(*(long *)(lVar10 + 0x18) + (ulong)uVar29),unaff_x22,(ulong)uVar13);
          uVar13 = *(uint *)(unaff_x26 + 0x18);
        }
        if (((uVar13 >> 9 & 1) != 0) && ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
          uVar11 = FUN_0129514c(*in_stack_00000058,unaff_x22,uVar14);
          *in_stack_00000058 = uVar11;
        }
        unaff_x27 = (ulong)(uVar31 - uVar14);
        unaff_x22 = unaff_x22 + uVar14;
        uVar29 = *(int *)(unaff_x26 + 0x5c) - uVar14;
        *(uint *)(unaff_x26 + 0x5c) = uVar29;
      }
      uVar13 = (uint)unaff_x27;
      iVar21 = iStack000000000000004c;
      if (uVar29 != 0) goto switchD_0128eacc_caseD_3f50;
    }
    *(undefined4 *)(unaff_x26 + 0x5c) = 0;
    *(undefined4 *)(unaff_x26 + 8) = 0x3f3a;
switchD_0128eacc_caseD_3f3a:
    uVar12 = (uint)uVar9;
    if ((*(byte *)(unaff_x26 + 0x19) >> 3 & 1) != 0) {
      uVar13 = 0;
      iVar21 = iStack000000000000004c;
      if ((int)unaff_x27 != 0) {
        uVar11 = 0;
        do {
          lVar10 = *(long *)(unaff_x26 + 0x30);
          bVar3 = unaff_x22[uVar11];
          if ((lVar10 != 0) && (lVar16 = *(long *)(lVar10 + 0x28), lVar16 != 0)) {
            uVar13 = *(uint *)(unaff_x26 + 0x5c);
            if (uVar13 < *(uint *)(lVar10 + 0x30)) {
              *(uint *)(unaff_x26 + 0x5c) = uVar13 + 1;
              *(byte *)(lVar16 + (ulong)uVar13) = bVar3;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((bVar3 != 0) && (uVar11 < (unaff_x27 & 0xffffffff)));
        if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
          uVar25 = FUN_0129514c(*in_stack_00000058,unaff_x22,uVar11 & 0xffffffff);
          *in_stack_00000058 = uVar25;
          unaff_x25 = in_stack_00000060;
        }
        unaff_x22 = unaff_x22 + uVar11;
        if (bVar3 == 0) {
          unaff_x27 = (unaff_x27 & 0xffffffff) - uVar11;
          goto LAB_0128f8f0;
        }
        uVar13 = (int)unaff_x27 - (int)uVar11;
      }
      goto switchD_0128eacc_caseD_3f50;
    }
    if (*(long *)(unaff_x26 + 0x30) != 0) {
      *(undefined8 *)(*(long *)(unaff_x26 + 0x30) + 0x28) = 0;
    }
LAB_0128f8f0:
    *(undefined4 *)(unaff_x26 + 0x5c) = 0;
    *(undefined4 *)(unaff_x26 + 8) = 0x3f3b;
switchD_0128eacc_caseD_3f3b:
    uVar12 = (uint)uVar9;
    if ((*(byte *)(unaff_x26 + 0x19) >> 4 & 1) == 0) {
      if (*(long *)(unaff_x26 + 0x30) != 0) {
        *(undefined8 *)(*(long *)(unaff_x26 + 0x30) + 0x38) = 0;
      }
LAB_0128f9c8:
      *unaff_x25 = 0x3f3c;
      pbVar20 = unaff_x22;
switchD_0128eacc_caseD_3f3c:
      unaff_x22 = pbVar20;
      if ((*(uint *)(unaff_x26 + 0x18) >> 9 & 1) != 0) {
        if ((uint)uVar9 < 0x10) {
          do {
            if ((int)unaff_x27 == 0)
            goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
            unaff_x22 = pbVar20 + 1;
            uVar11 = uVar9 + 8;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            bVar7 = uVar9 < 8;
            uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
            pbVar20 = unaff_x22;
            uVar9 = uVar11;
          } while (bVar7);
          uVar9 = uVar11 & 0xffffffff;
          unaff_x25 = in_stack_00000060;
        }
        if (((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0) && (uVar30 != (ushort)*in_stack_00000058))
        {
          pcVar17 = "header crc mismatch";
          break;
        }
        uVar30 = 0;
        uVar9 = 0;
      }
      lVar10 = *(long *)(unaff_x26 + 0x30);
      if (lVar10 != 0) {
        *(uint *)(lVar10 + 0x44) = *(uint *)(unaff_x26 + 0x18) >> 9 & 1;
        *(undefined4 *)(lVar10 + 0x48) = 1;
      }
      uVar11 = FUN_0129514c(0,0,0);
      *in_stack_00000058 = uVar11;
      unaff_x19[0xc] = uVar11;
      *unaff_x25 = 0x3f3f;
      goto LAB_0128eaa8;
    }
    uVar13 = 0;
    iVar21 = iStack000000000000004c;
    if ((int)unaff_x27 != 0) {
      uVar11 = 0;
      do {
        lVar10 = *(long *)(unaff_x26 + 0x30);
        bVar3 = unaff_x22[uVar11];
        if ((lVar10 != 0) && (lVar16 = *(long *)(lVar10 + 0x38), lVar16 != 0)) {
          uVar13 = *(uint *)(unaff_x26 + 0x5c);
          if (uVar13 < *(uint *)(lVar10 + 0x40)) {
            *(uint *)(unaff_x26 + 0x5c) = uVar13 + 1;
            *(byte *)(lVar16 + (ulong)uVar13) = bVar3;
          }
        }
        uVar11 = uVar11 + 1;
      } while ((bVar3 != 0) && (uVar11 < (unaff_x27 & 0xffffffff)));
      if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
         ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
        uVar25 = FUN_0129514c(*in_stack_00000058,unaff_x22,uVar11 & 0xffffffff);
        *in_stack_00000058 = uVar25;
      }
      unaff_x22 = unaff_x22 + uVar11;
      if (bVar3 == 0) {
        unaff_x27 = (unaff_x27 & 0xffffffff) - uVar11;
        unaff_x25 = in_stack_00000060;
        goto LAB_0128f9c8;
      }
      uVar13 = (int)unaff_x27 - (int)uVar11;
      unaff_x25 = in_stack_00000060;
    }
    goto switchD_0128eacc_caseD_3f50;
  case 0x3f38:
    uVar13 = *(uint *)(unaff_x26 + 0x18);
    if ((uVar13 >> 10 & 1) != 0) {
      uVar11 = uVar9;
      if (uVar12 < 0x10) goto LAB_0128f684;
      goto LAB_0128f6a8;
    }
    goto LAB_0128f670;
  case 0x3f39:
    goto switchD_0128eacc_caseD_3f39;
  case 0x3f3a:
    goto switchD_0128eacc_caseD_3f3a;
  case 0x3f3b:
    goto switchD_0128eacc_caseD_3f3b;
  case 0x3f3c:
    goto switchD_0128eacc_caseD_3f3c;
  case 0x3f3d:
    if (uVar12 < 0x20) {
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar20 + 1;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = uVar9 < 0x18;
        uVar11 = uVar9 & 0x3f;
        uVar9 = uVar9 + 8;
        uVar30 = ((ulong)*pbVar20 << uVar11) + uVar30;
        pbVar20 = unaff_x22;
      } while (bVar7);
    }
    uVar9 = 0;
    uVar12 = ((uint)uVar30 & 0xff00ff00) >> 8 | ((uint)uVar30 & 0xff00ff) << 8;
    uVar11 = (ulong)(uVar12 >> 0x10 | uVar12 << 0x10);
    uVar30 = 0;
    *in_stack_00000058 = uVar11;
    unaff_x19[0xc] = uVar11;
    *in_stack_00000060 = 0x3f3e;
    unaff_x25 = in_stack_00000060;
  case 0x3f3e:
    if (*(int *)(unaff_x26 + 0x14) == 0) {
      unaff_x19[3] = (long)unaff_x21;
      *(uint *)(unaff_x19 + 4) = unaff_w29;
      *unaff_x19 = (long)unaff_x22;
      *(int *)(unaff_x19 + 1) = (int)unaff_x27;
      *(ulong *)(unaff_x26 + 0x50) = uVar30;
      *(int *)(unaff_x26 + 0x58) = (int)uVar9;
      return 2;
    }
    uVar11 = FUN_0128e738(0,0,0);
    *in_stack_00000058 = uVar11;
    unaff_x19[0xc] = uVar11;
    *unaff_x25 = 0x3f3f;
switchD_0128eacc_caseD_3f3f:
    uVar12 = (uint)uVar9;
    uVar13 = (uint)unaff_x27;
    iVar21 = iStack000000000000004c;
    if (uStack0000000000000048 < 2) goto switchD_0128eacc_caseD_3f50;
switchD_0128eacc_caseD_3f40:
    uVar12 = (uint)uVar9;
    if (*(int *)(unaff_x26 + 0xc) != 0) {
      uVar13 = 0x3f4e;
      uVar9 = (ulong)(uVar12 & 0xfffffff8);
      uVar30 = uVar30 >> (uVar12 & 7);
      goto LAB_01290128;
    }
    if (uVar12 < 3) {
      uVar13 = 0;
      iVar21 = iStack000000000000004c;
      if ((int)unaff_x27 == 0) goto switchD_0128eacc_caseD_3f50;
      uVar12 = uVar12 + 8;
      unaff_x27 = (ulong)((int)unaff_x27 - 1);
      uVar30 = ((ulong)*unaff_x22 << (uVar9 & 0x3f)) + uVar30;
      unaff_x22 = unaff_x22 + 1;
    }
    uVar13 = (uint)unaff_x27;
    *(uint *)(unaff_x26 + 0xc) = (uint)uVar30 & 1;
    uVar6 = DAT_00745ed8;
    uVar14 = 0x3f41;
    switch((uint)uVar30 >> 1 & 3) {
    case 1:
      *(undefined **)(unaff_x26 + 0x68) = &DAT_00a8023a;
      *(undefined **)(unaff_x26 + 0x70) = &DAT_00a80a3a;
      *(undefined8 *)(unaff_x26 + 0x78) = uVar6;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f47;
      if (iStack0000000000000068 == 6) {
        uVar30 = uVar30 >> 3;
        uVar12 = uVar12 - 3;
        iVar21 = iStack000000000000004c;
        goto switchD_0128eacc_caseD_3f50;
      }
      goto LAB_0128f3f4;
    case 2:
      uVar14 = 0x3f44;
      break;
    case 3:
      unaff_x19[6] = (long)"invalid block type";
      uVar14 = 0x3f51;
    }
    *unaff_x25 = uVar14;
LAB_0128f3f4:
    uVar30 = uVar30 >> 3;
    uVar9 = (ulong)(uVar12 - 3);
    goto LAB_0128eaa8;
  case 0x3f3f:
    goto switchD_0128eacc_caseD_3f3f;
  case 0x3f40:
    goto switchD_0128eacc_caseD_3f40;
  case 0x3f41:
    uVar9 = (ulong)(uVar12 & 0xfffffff8);
    uVar30 = uVar30 >> (uVar12 & 7);
    if ((uVar12 & 0xfffffff8) < 0x20) {
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar20 + 1;
        uVar11 = uVar9 + 8;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = uVar9 < 0x18;
        uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        pbVar20 = unaff_x22;
        uVar9 = uVar11;
      } while (bVar7);
      uVar9 = uVar11 & 0xffffffff;
    }
    uVar13 = (uint)unaff_x27;
    uVar14 = (uint)uVar30;
    if ((uVar30 >> 0x10 ^ 0xffff) == (uVar30 & 0xffff)) {
      uVar9 = 0;
      uVar12 = 0;
      uVar30 = 0;
      *(uint *)(unaff_x26 + 0x5c) = uVar14 & 0xffff;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f42;
      unaff_x25 = in_stack_00000060;
      iVar21 = iStack000000000000004c;
      if (iStack0000000000000068 != 6) goto switchD_0128eacc_caseD_3f42;
      goto switchD_0128eacc_caseD_3f50;
    }
    pcVar17 = "invalid stored block lengths";
    unaff_x25 = in_stack_00000060;
    break;
  case 0x3f42:
switchD_0128eacc_caseD_3f42:
    *unaff_x25 = 0x3f43;
  case 0x3f43:
    uVar12 = (uint)uVar9;
    uVar13 = (uint)unaff_x27;
    uVar14 = *(uint *)(unaff_x26 + 0x5c);
    if (uVar14 == 0) {
      uVar12 = 0x3f3f;
LAB_01290064:
      *unaff_x25 = uVar12;
      goto LAB_0128eaa8;
    }
    uVar29 = uVar13;
    if (uVar14 <= uVar13) {
      uVar29 = uVar14;
    }
    uVar14 = unaff_w29;
    if (uVar29 <= unaff_w29) {
      uVar14 = uVar29;
    }
    unaff_x25 = in_stack_00000060;
    iVar21 = iStack000000000000004c;
    if (uVar14 != 0) {
      memcpy(unaff_x21,unaff_x22,(ulong)uVar14);
      unaff_x27 = (ulong)(uVar13 - uVar14);
      unaff_x22 = unaff_x22 + uVar14;
      unaff_w29 = unaff_w29 - uVar14;
      unaff_x21 = unaff_x21 + uVar14;
      *(uint *)(unaff_x26 + 0x5c) = *(int *)(unaff_x26 + 0x5c) - uVar14;
      goto LAB_0128eaa8;
    }
    goto switchD_0128eacc_caseD_3f50;
  case 0x3f44:
    if (uVar12 < 0xe) {
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar20 + 1;
        uVar11 = uVar9 + 8;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = uVar9 < 6;
        uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        pbVar20 = unaff_x22;
        uVar9 = uVar11;
      } while (bVar7);
      uVar12 = (uint)uVar11;
      unaff_x25 = in_stack_00000060;
    }
    uVar29 = (uint)uVar30;
    uVar14 = uVar29 >> 5 & 0x1f;
    uVar30 = uVar30 >> 0xe;
    uVar13 = (uVar29 >> 10 & 0xf) + 4;
    uVar9 = (ulong)(uVar12 - 0xe);
    *(uint *)(unaff_x26 + 0x84) = (uVar29 & 0x1f) + 0x101;
    *(uint *)(unaff_x26 + 0x88) = uVar14 + 1;
    *(uint *)(unaff_x26 + 0x80) = uVar13;
    if (((uVar29 & 0x1f) < 0x1e) && (uVar14 < 0x1e)) {
      uVar11 = 0;
      *(undefined4 *)(unaff_x26 + 0x8c) = 0;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f45;
      pbVar20 = unaff_x22;
LAB_0128ee2c:
      do {
        uVar12 = (uint)uVar9;
        unaff_x22 = pbVar20;
        if (uVar12 < 3) {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar20 + 1;
          uVar12 = uVar12 + 8;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        }
        uVar4 = (&DAT_00a80214)[uVar11];
        uVar11 = uVar11 + 1;
        uVar5 = (ushort)uVar30;
        uVar30 = uVar30 >> 3;
        uVar9 = (ulong)(uVar12 - 3);
        *(uint *)(unaff_x26 + 0x8c) = (uint)uVar11;
        *(ushort *)(unaff_x26 + (ulong)uVar4 * 2 + 0x98) = uVar5 & 7;
        pbVar20 = unaff_x22;
        unaff_x25 = in_stack_00000060;
      } while ((uint)uVar11 < uVar13);
      goto LAB_0128ee80;
    }
    pcVar17 = "too many length or distance symbols";
    break;
  case 0x3f45:
    uVar11 = (ulong)*(uint *)(unaff_x26 + 0x8c);
    uVar13 = *(uint *)(unaff_x26 + 0x80);
    if (*(uint *)(unaff_x26 + 0x8c) < uVar13) goto LAB_0128ee2c;
LAB_0128ee80:
    if ((uint)uVar11 < 0x13) {
      uVar11 = uVar11 & 0xffffffff;
      do {
        puVar1 = &DAT_00a80214 + uVar11;
        uVar11 = uVar11 + 1;
        *(undefined2 *)(unaff_x26 + (ulong)*puVar1 * 2 + 0x98) = 0;
      } while ((int)uVar11 != 0x13);
      *(undefined4 *)(unaff_x26 + 0x8c) = 0x13;
    }
    *(undefined8 *)(unaff_x26 + 0x90) = in_stack_00000030;
    *(undefined8 *)(unaff_x26 + 0x68) = in_stack_00000030;
    *(undefined4 *)(unaff_x26 + 0x78) = 7;
    iStack000000000000004c =
         FUN_012949ec(0,in_stack_00000020,0x13,in_stack_00000050,in_stack_00000028,in_stack_00000038
                     );
    if (iStack000000000000004c == 0) {
      uVar13 = 0;
      iStack000000000000004c = 0;
      *(undefined4 *)(unaff_x26 + 0x8c) = 0;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f46;
      goto LAB_0128f114;
    }
    unaff_x19[6] = (long)"invalid code lengths set";
    *unaff_x25 = 0x3f51;
    goto LAB_0128eaa8;
  case 0x3f46:
    uVar13 = *(uint *)(unaff_x26 + 0x8c);
LAB_0128f114:
    iVar21 = *(int *)(unaff_x26 + 0x84);
    uVar14 = *(int *)(unaff_x26 + 0x88) + iVar21;
    if (uVar13 < uVar14) {
      lVar10 = *(long *)(unaff_x26 + 0x68);
      uVar29 = ~(-1 << (ulong)(*(uint *)(unaff_x26 + 0x78) & 0x1f));
      do {
        uVar31 = (uint)unaff_x27;
        uVar25 = (ulong)(uVar29 & (uint)uVar30);
        bVar3 = *(byte *)(lVar10 + uVar25 * 4 + 1);
        uVar11 = (ulong)bVar3;
        uVar12 = (uint)uVar9;
        if (uVar12 < bVar3) {
          unaff_x27 = unaff_x27 & 0xffffffff;
          pbVar20 = unaff_x22;
          do {
            if ((int)unaff_x27 == 0) goto LAB_01290184;
            pbVar23 = pbVar20 + 1;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
            uVar2 = uVar29 & (uint)uVar30;
            uVar19 = (ulong)*(byte *)(lVar10 + (ulong)uVar2 * 4 + 1);
            uVar9 = uVar9 + 8;
            pbVar20 = pbVar23;
          } while (uVar9 < uVar19);
          uVar25 = (ulong)uVar2;
          uVar9 = uVar9 & 0xffffffff;
          uVar11 = uVar19;
          unaff_x22 = pbVar23;
        }
        else {
          uVar19 = (ulong)(uint)bVar3;
        }
        uVar4 = *(ushort *)(lVar10 + uVar25 * 4 + 2);
        iVar8 = (int)uVar19;
        uVar12 = (uint)uVar9;
        if (0xf < uVar4) {
          pbVar20 = unaff_x22;
          if (uVar4 == 0x10) {
            if (uVar12 < iVar8 + 2U) {
              do {
                if ((int)unaff_x27 == 0) goto LAB_0129031c;
                unaff_x22 = pbVar20 + 1;
                unaff_x27 = (ulong)((int)unaff_x27 - 1);
                uVar25 = uVar9 & 0x3f;
                uVar9 = uVar9 + 8;
                uVar30 = ((ulong)*pbVar20 << uVar25) + uVar30;
                pbVar20 = unaff_x22;
              } while (uVar9 < iVar8 + 2U);
            }
            uVar30 = uVar30 >> (uVar11 & 0x3f);
            uVar12 = (int)uVar9 - iVar8;
            uVar9 = (ulong)uVar12;
            if (uVar13 != 0) {
              uVar26 = *(undefined2 *)(unaff_x26 + (ulong)(uVar13 - 1) * 2 + 0x98);
              iVar22 = ((uint)uVar30 & 3) + 3;
              uVar30 = uVar30 >> 2;
              uVar9 = (ulong)(uVar12 - 2);
              goto LAB_0128f2f8;
            }
          }
          else {
            if (uVar4 == 0x11) {
              if (uVar12 < iVar8 + 3U) {
                do {
                  if ((int)unaff_x27 == 0) goto LAB_012902dc;
                  unaff_x22 = pbVar20 + 1;
                  unaff_x27 = (ulong)((int)unaff_x27 - 1);
                  uVar25 = uVar9 & 0x3f;
                  uVar9 = uVar9 + 8;
                  uVar30 = ((ulong)*pbVar20 << uVar25) + uVar30;
                  pbVar20 = unaff_x22;
                } while (uVar9 < iVar8 + 3U);
                uVar12 = (uint)uVar9;
                unaff_x25 = in_stack_00000060;
              }
              uVar9 = uVar30 >> (uVar11 & 0x3f);
              uVar26 = 0;
              uVar30 = uVar9 >> 3;
              iVar22 = ((uint)uVar9 & 7) + 3;
              uVar9 = (ulong)((uVar12 - iVar8) - 3);
            }
            else {
              if (uVar12 < iVar8 + 7U) {
                do {
                  if ((int)unaff_x27 == 0) goto LAB_012902dc;
                  unaff_x22 = pbVar20 + 1;
                  unaff_x27 = (ulong)((int)unaff_x27 - 1);
                  uVar25 = uVar9 & 0x3f;
                  uVar9 = uVar9 + 8;
                  uVar30 = ((ulong)*pbVar20 << uVar25) + uVar30;
                  pbVar20 = unaff_x22;
                } while (uVar9 < iVar8 + 7U);
                uVar12 = (uint)uVar9;
                unaff_x25 = in_stack_00000060;
              }
              uVar9 = uVar30 >> (uVar11 & 0x3f);
              uVar26 = 0;
              uVar30 = uVar9 >> 7;
              iVar22 = ((uint)uVar9 & 0x7f) + 0xb;
              uVar9 = (ulong)((uVar12 - iVar8) - 7);
            }
LAB_0128f2f8:
            if (iVar22 + uVar13 <= uVar14) {
              do {
                iVar22 = iVar22 + -1;
                uVar11 = (ulong)uVar13;
                uVar13 = uVar13 + 1;
                *(undefined2 *)(unaff_x26 + uVar11 * 2 + 0x98) = uVar26;
              } while (iVar22 != 0);
              *(uint *)(unaff_x26 + 0x8c) = uVar13;
              goto LAB_0128f31c;
            }
          }
          pcVar17 = "invalid bit length repeat";
          goto LAB_01290120;
        }
        uVar9 = (ulong)(uVar12 - iVar8);
        uVar25 = (ulong)uVar13;
        uVar13 = uVar13 + 1;
        uVar30 = uVar30 >> (uVar11 & 0x3f);
        *(uint *)(unaff_x26 + 0x8c) = uVar13;
        *(ushort *)(unaff_x26 + uVar25 * 2 + 0x98) = uVar4;
LAB_0128f31c:
      } while (uVar13 < uVar14);
    }
    uVar12 = (uint)uVar9;
    uVar13 = (uint)unaff_x27;
    if (*(short *)(unaff_x26 + 0x298) == 0) {
      unaff_x19[6] = (long)"invalid code -- missing end-of-block";
      *unaff_x25 = 0x3f51;
      goto LAB_0128eaa8;
    }
    *(undefined8 *)(unaff_x26 + 0x90) = in_stack_00000030;
    *(undefined8 *)(unaff_x26 + 0x68) = in_stack_00000030;
    *(undefined4 *)(unaff_x26 + 0x78) = 9;
    iStack000000000000004c =
         FUN_012949ec(1,in_stack_00000020,iVar21,in_stack_00000050,in_stack_00000028,
                      in_stack_00000038);
    if (iStack000000000000004c != 0) {
      pcVar17 = "invalid literal/lengths set";
LAB_0128f4c0:
      unaff_x19[6] = (long)pcVar17;
      *unaff_x25 = 0x3f51;
      goto LAB_0128eaa8;
    }
    *(undefined8 *)(unaff_x26 + 0x70) = *(undefined8 *)(unaff_x26 + 0x90);
    *(undefined4 *)(unaff_x26 + 0x7c) = 6;
    iStack000000000000004c =
         FUN_012949ec(2,unaff_x26 + (ulong)*(uint *)(unaff_x26 + 0x84) * 2 + 0x98,
                      *(undefined4 *)(unaff_x26 + 0x88),in_stack_00000050,in_stack_00000010,
                      in_stack_00000038);
    if (iStack000000000000004c != 0) {
      pcVar17 = "invalid distances set";
      goto LAB_0128f4c0;
    }
    iStack000000000000004c = 0;
    *unaff_x25 = 0x3f47;
    iVar21 = iStack000000000000004c;
    if (iStack0000000000000068 == 6) goto switchD_0128eacc_caseD_3f50;
switchD_0128eacc_caseD_3f47:
    *unaff_x25 = 0x3f48;
switchD_0128eacc_caseD_3f48:
    uVar31 = (uint)unaff_x27;
    uVar12 = (uint)uVar9;
    if ((0x101 < unaff_w29) && (5 < uVar31)) {
      unaff_x19[3] = (long)unaff_x21;
      *(uint *)(unaff_x19 + 4) = unaff_w29;
      *unaff_x19 = (long)unaff_x22;
      *(uint *)(unaff_x19 + 1) = uVar31;
      *(ulong *)(unaff_x26 + 0x50) = uVar30;
      *(uint *)(unaff_x26 + 0x58) = uVar12;
      FUN_0129454c();
      unaff_x21 = (undefined1 *)unaff_x19[3];
      unaff_w29 = *(uint *)(unaff_x19 + 4);
      unaff_x22 = (byte *)*unaff_x19;
      unaff_x27 = (ulong)*(uint *)(unaff_x19 + 1);
      uVar30 = *(ulong *)(unaff_x26 + 0x50);
      uVar9 = (ulong)*(uint *)(unaff_x26 + 0x58);
      if (*(int *)(unaff_x26 + 8) == 0x3f3f) {
        *(undefined4 *)(unaff_x26 + 0x1bec) = 0xffffffff;
      }
      goto LAB_0128eaa8;
    }
    lVar10 = *(long *)(unaff_x26 + 0x68);
    *(undefined4 *)(unaff_x26 + 0x1bec) = 0;
    uVar13 = -1 << (ulong)(*(uint *)(unaff_x26 + 0x78) & 0x1f);
    uVar25 = (ulong)((uint)uVar30 & (uVar13 ^ 0xffffffff));
    bVar3 = *(byte *)(lVar10 + uVar25 * 4 + 1);
    uVar11 = (ulong)bVar3;
    if (uVar12 < bVar3) {
      unaff_x27 = unaff_x27 & 0xffffffff;
      pbVar20 = unaff_x22;
      do {
        if ((int)unaff_x27 == 0) goto LAB_01290184;
        pbVar23 = pbVar20 + 1;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        uVar14 = ~uVar13 & (uint)uVar30;
        uVar19 = (ulong)*(byte *)(lVar10 + (ulong)uVar14 * 4 + 1);
        uVar9 = uVar9 + 8;
        pbVar20 = pbVar23;
      } while (uVar9 < uVar19);
      uVar25 = (ulong)uVar14;
      uVar9 = uVar9 & 0xffffffff;
      uVar11 = uVar19;
      unaff_x22 = pbVar23;
    }
    else {
      uVar19 = (ulong)(uint)bVar3;
    }
    uVar31 = (uint)unaff_x27;
    uVar13 = (uint)uVar19;
    uVar12 = (uint)uVar9;
    pbVar20 = (byte *)(lVar10 + uVar25 * 4);
    bVar3 = *pbVar20;
    uVar4 = *(ushort *)(pbVar20 + 2);
    if ((bVar3 == 0) || ((bVar3 & 0xf0) != 0)) {
      uVar13 = 0;
    }
    else {
      uVar14 = -1 << (ulong)(uVar13 + bVar3 & 0x1f);
      uVar27 = (ulong)((((uint)uVar30 & (uVar14 ^ 0xffffffff)) >> (ulong)(uVar13 & 0x1f)) +
                      (uint)uVar4);
      bVar3 = *(byte *)(lVar10 + uVar27 * 4 + 1);
      uVar25 = (ulong)bVar3;
      pbVar20 = unaff_x22;
      if (uVar12 < uVar13 + bVar3) {
        unaff_x27 = unaff_x27 & 0xffffffff;
        pbVar23 = unaff_x22;
        do {
          if ((int)unaff_x27 == 0) goto LAB_01290184;
          pbVar20 = pbVar23 + 1;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          uVar30 = ((ulong)*pbVar23 << (uVar9 & 0x3f)) + uVar30;
          uVar29 = (((uint)uVar30 & ~uVar14) >> (ulong)(uVar13 & 0x1f)) + (uint)uVar4;
          uVar25 = (ulong)*(byte *)(lVar10 + (ulong)uVar29 * 4 + 1);
          uVar9 = uVar9 + 8;
          pbVar23 = pbVar20;
        } while (uVar9 < uVar25 + uVar19);
        uVar27 = (ulong)uVar29;
        uVar12 = (uint)uVar9;
      }
      pbVar23 = (byte *)(lVar10 + uVar27 * 4);
      uVar4 = *(ushort *)(pbVar23 + 2);
      bVar3 = *pbVar23;
      uVar30 = uVar30 >> (uVar11 & 0x3f);
      uVar12 = uVar12 - uVar13;
      *(uint *)(unaff_x26 + 0x1bec) = uVar13;
      uVar11 = uVar25;
      unaff_x22 = pbVar20;
    }
    uVar30 = uVar30 >> (uVar11 & 0x3f);
    uVar9 = (ulong)(uVar12 - (int)uVar11);
    *(uint *)(unaff_x26 + 0x1bec) = uVar13 + (int)uVar11;
    *(uint *)(unaff_x26 + 0x5c) = (uint)uVar4;
    if (bVar3 == 0) {
      uVar12 = 0x3f4d;
      goto LAB_01290064;
    }
    if ((bVar3 >> 5 & 1) != 0) {
      uVar15 = 0x3f3f;
      *(undefined4 *)(unaff_x26 + 0x1bec) = 0xffffffff;
LAB_0128ef80:
      *(undefined4 *)(unaff_x26 + 8) = uVar15;
      goto LAB_0128eaa8;
    }
    if ((bVar3 >> 6 & 1) != 0) {
      pcVar17 = "invalid literal/length code";
      break;
    }
    uVar13 = bVar3 & 0xf;
    *(uint *)(unaff_x26 + 100) = uVar13;
    *(undefined4 *)(unaff_x26 + 8) = 0x3f49;
    if ((bVar3 & 0xf) == 0) {
LAB_0128fda8:
      iVar21 = *(int *)(unaff_x26 + 0x5c);
    }
    else {
LAB_0128ef28:
      uVar31 = (uint)unaff_x27;
      uVar12 = (uint)uVar9;
      if (uVar12 < uVar13) {
        unaff_x27 = unaff_x27 & 0xffffffff;
        pbVar23 = unaff_x22;
        do {
          if ((int)unaff_x27 == 0) goto LAB_01290184;
          pbVar20 = pbVar23 + 1;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          uVar11 = uVar9 & 0x3f;
          uVar14 = (int)uVar9 + 8;
          uVar9 = (ulong)uVar14;
          uVar30 = ((ulong)*pbVar23 << uVar11) + uVar30;
          pbVar23 = pbVar20;
        } while (uVar14 < uVar13);
      }
      else {
        unaff_x27 = unaff_x27 & 0xffffffff;
        pbVar20 = unaff_x22;
        uVar14 = uVar12;
      }
      uVar9 = (ulong)(uVar14 - uVar13);
      uVar12 = (uint)uVar30;
      uVar30 = uVar30 >> ((ulong)uVar13 & 0x3f);
      iVar21 = *(int *)(unaff_x26 + 0x5c) + (uVar12 & (-1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU));
      *(int *)(unaff_x26 + 0x5c) = iVar21;
      *(uint *)(unaff_x26 + 0x1bec) = *(int *)(unaff_x26 + 0x1bec) + uVar13;
      unaff_x22 = pbVar20;
    }
    *(int *)(unaff_x26 + 0x1bf0) = iVar21;
    *(undefined4 *)(unaff_x26 + 8) = 0x3f4a;
    pbVar20 = unaff_x22;
switchD_0128eacc_caseD_3f4a:
    uVar31 = (uint)unaff_x27;
    lVar10 = *(long *)(unaff_x26 + 0x70);
    uVar13 = -1 << (ulong)(*(uint *)(unaff_x26 + 0x7c) & 0x1f);
    uVar25 = (ulong)((uint)uVar30 & (uVar13 ^ 0xffffffff));
    bVar3 = *(byte *)(lVar10 + uVar25 * 4 + 1);
    uVar11 = (ulong)bVar3;
    uVar12 = (uint)uVar9;
    if (uVar12 < bVar3) {
      unaff_x27 = unaff_x27 & 0xffffffff;
      pbVar23 = pbVar20;
      do {
        unaff_x22 = pbVar20;
        if ((int)unaff_x27 == 0) goto LAB_01290184;
        pbVar24 = pbVar23 + 1;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        uVar30 = ((ulong)*pbVar23 << (uVar9 & 0x3f)) + uVar30;
        uVar14 = ~uVar13 & (uint)uVar30;
        uVar11 = (ulong)*(byte *)(lVar10 + (ulong)uVar14 * 4 + 1);
        uVar9 = uVar9 + 8;
        pbVar23 = pbVar24;
      } while (uVar9 < uVar11);
      uVar25 = (ulong)uVar14;
      uVar9 = uVar9 & 0xffffffff;
      uVar19 = uVar11;
      pbVar20 = pbVar24;
    }
    else {
      uVar19 = (ulong)(uint)bVar3;
    }
    uVar31 = (uint)unaff_x27;
    uVar12 = (uint)uVar9;
    pbVar23 = (byte *)(lVar10 + uVar25 * 4);
    bVar3 = *pbVar23;
    uVar4 = *(ushort *)(pbVar23 + 2);
    unaff_x22 = pbVar20;
    if ((bVar3 & 0xf0) == 0) {
      uVar14 = (uint)uVar19;
      uVar13 = -1 << (ulong)(uVar14 + bVar3 & 0x1f);
      uVar27 = (ulong)((((uint)uVar30 & (uVar13 ^ 0xffffffff)) >> (ulong)(uVar14 & 0x1f)) +
                      (uint)uVar4);
      bVar3 = *(byte *)(lVar10 + uVar27 * 4 + 1);
      uVar25 = (ulong)bVar3;
      if (uVar12 < uVar14 + bVar3) {
        unaff_x27 = unaff_x27 & 0xffffffff;
        pbVar23 = pbVar20;
        do {
          unaff_x22 = pbVar20;
          if ((int)unaff_x27 == 0) goto LAB_01290184;
          unaff_x22 = pbVar23 + 1;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          uVar30 = ((ulong)*pbVar23 << (uVar9 & 0x3f)) + uVar30;
          uVar29 = (((uint)uVar30 & ~uVar13) >> (ulong)(uVar14 & 0x1f)) + (uint)uVar4;
          uVar25 = (ulong)*(byte *)(lVar10 + (ulong)uVar29 * 4 + 1);
          uVar9 = uVar9 + 8;
          pbVar23 = unaff_x22;
        } while (uVar9 < uVar25 + uVar19);
        uVar27 = (ulong)uVar29;
        uVar12 = (uint)uVar9;
      }
      pbVar20 = (byte *)(lVar10 + uVar27 * 4);
      uVar4 = *(ushort *)(pbVar20 + 2);
      bVar3 = *pbVar20;
      uVar30 = uVar30 >> (uVar11 & 0x3f);
      uVar12 = uVar12 - uVar14;
      iVar21 = *(int *)(unaff_x26 + 0x1bec) + uVar14;
      *(int *)(unaff_x26 + 0x1bec) = iVar21;
    }
    else {
      iVar21 = *(int *)(unaff_x26 + 0x1bec);
      uVar25 = uVar11;
    }
    uVar30 = uVar30 >> (uVar25 & 0x3f);
    uVar9 = (ulong)(uVar12 - (int)uVar25);
    *(int *)(unaff_x26 + 0x1bec) = iVar21 + (int)uVar25;
    if ((bVar3 >> 6 & 1) == 0) {
      uVar13 = bVar3 & 0xf;
      *(uint *)(unaff_x26 + 0x60) = (uint)uVar4;
      *(uint *)(unaff_x26 + 100) = uVar13;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f4b;
      if ((bVar3 & 0xf) != 0) {
LAB_0128ff20:
        uVar31 = (uint)unaff_x27;
        uVar12 = (uint)uVar9;
        if (uVar12 < uVar13) {
          unaff_x27 = unaff_x27 & 0xffffffff;
          pbVar23 = unaff_x22;
          do {
            if ((int)unaff_x27 == 0) goto LAB_01290184;
            pbVar20 = pbVar23 + 1;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            uVar11 = uVar9 & 0x3f;
            uVar14 = (int)uVar9 + 8;
            uVar9 = (ulong)uVar14;
            uVar30 = ((ulong)*pbVar23 << uVar11) + uVar30;
            pbVar23 = pbVar20;
          } while (uVar14 < uVar13);
        }
        else {
          unaff_x27 = unaff_x27 & 0xffffffff;
          pbVar20 = unaff_x22;
          uVar14 = uVar12;
        }
        uVar9 = (ulong)(uVar14 - uVar13);
        uVar12 = (uint)uVar30;
        uVar30 = uVar30 >> ((ulong)uVar13 & 0x3f);
        *(uint *)(unaff_x26 + 0x60) =
             *(int *)(unaff_x26 + 0x60) + (uVar12 & (-1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU));
        *(uint *)(unaff_x26 + 0x1bec) = *(int *)(unaff_x26 + 0x1bec) + uVar13;
        unaff_x22 = pbVar20;
      }
LAB_0128ffa4:
      *unaff_x25 = 0x3f4c;
switchD_0128eacc_caseD_3f4c:
      uVar12 = (uint)uVar9;
      uVar13 = (uint)unaff_x27;
      iVar21 = iStack000000000000004c;
      if (unaff_w29 == 0) goto switchD_0128eacc_caseD_3f50;
      uVar12 = *(uint *)(unaff_x26 + 0x60);
      if (unaff_w20 - unaff_w29 < uVar12) {
        uVar12 = uVar12 - (unaff_w20 - unaff_w29);
        if ((*(uint *)(unaff_x26 + 0x40) < uVar12) && (*(int *)(unaff_x26 + 0x1be8) != 0)) {
          pcVar17 = "invalid distance too far back";
          break;
        }
        uVar14 = *(uint *)(unaff_x26 + 0x44);
        uVar13 = uVar12 - uVar14;
        if (uVar12 < uVar14 || uVar13 == 0) {
          uVar14 = uVar14 - uVar12;
        }
        else {
          uVar14 = *(int *)(unaff_x26 + 0x3c) - uVar13;
          uVar12 = uVar13;
        }
        uVar13 = *(uint *)(unaff_x26 + 0x5c);
        puVar18 = (undefined1 *)(*(long *)(unaff_x26 + 0x48) + (ulong)uVar14);
        uVar14 = uVar13;
        if (uVar12 <= uVar13) {
          uVar14 = uVar12;
        }
      }
      else {
        uVar13 = *(uint *)(unaff_x26 + 0x5c);
        puVar18 = unaff_x21 + -(ulong)uVar12;
        uVar14 = uVar13;
      }
      uVar12 = unaff_w29;
      if (uVar14 <= unaff_w29) {
        uVar12 = uVar14;
      }
      *(uint *)(unaff_x26 + 0x5c) = uVar13 - uVar12;
      puVar28 = unaff_x21;
      uVar13 = uVar12;
      do {
        uVar13 = uVar13 - 1;
        unaff_x21 = puVar28 + 1;
        *puVar28 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar28 = unaff_x21;
      } while (uVar13 != 0);
      unaff_w29 = unaff_w29 - uVar12;
      if (*(int *)(unaff_x26 + 0x5c) == 0) {
        uVar12 = 0x3f48;
        goto LAB_01290064;
      }
      goto LAB_0128eaa8;
    }
    pcVar17 = "invalid distance code";
    break;
  case 0x3f47:
    goto switchD_0128eacc_caseD_3f47;
  case 0x3f48:
    goto switchD_0128eacc_caseD_3f48;
  case 0x3f49:
    uVar13 = *(uint *)(unaff_x26 + 100);
    if (uVar13 != 0) goto LAB_0128ef28;
    goto LAB_0128fda8;
  case 0x3f4a:
    goto switchD_0128eacc_caseD_3f4a;
  case 0x3f4b:
    uVar13 = *(uint *)(unaff_x26 + 100);
    if (uVar13 != 0) goto LAB_0128ff20;
    goto LAB_0128ffa4;
  case 0x3f4c:
    goto switchD_0128eacc_caseD_3f4c;
  case 0x3f4d:
    iVar21 = iStack000000000000004c;
    if (unaff_w29 == 0) goto switchD_0128eacc_caseD_3f50;
    uVar15 = 0x3f48;
    unaff_w29 = unaff_w29 - 1;
    *unaff_x21 = (char)*(undefined4 *)(unaff_x26 + 0x5c);
    unaff_x21 = unaff_x21 + 1;
    goto LAB_0128ef80;
  case 0x3f4e:
    uVar14 = *(uint *)(unaff_x26 + 0x10);
    if (uVar14 == 0) {
LAB_0128fb00:
      *unaff_x25 = 0x3f4f;
      pbVar20 = unaff_x22;
      goto LAB_0128fb08;
    }
    if (uVar12 < 0x20) {
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar20 + 1;
        uVar11 = uVar9 + 8;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = uVar9 < 0x18;
        uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
        pbVar20 = unaff_x22;
        uVar9 = uVar11;
      } while (bVar7);
      uVar9 = uVar11 & 0xffffffff;
      unaff_x25 = in_stack_00000060;
    }
    uVar11 = (ulong)(unaff_w20 - unaff_w29);
    unaff_x19[5] = unaff_x19[5] + uVar11;
    *(ulong *)(unaff_x26 + 0x28) = *(long *)(unaff_x26 + 0x28) + uVar11;
    uVar12 = uVar14 & 4;
    if ((unaff_w20 - unaff_w29 != 0) && (uVar12 != 0)) {
      if (*(int *)(unaff_x26 + 0x18) == 0) {
        lVar10 = FUN_0128e738(*(undefined8 *)(unaff_x26 + 0x20),(long)unaff_x21 - uVar11);
      }
      else {
        lVar10 = FUN_0129514c();
      }
      *(long *)(unaff_x26 + 0x20) = lVar10;
      unaff_x19[0xc] = lVar10;
      uVar14 = *(uint *)(unaff_x26 + 0x10);
      uVar12 = uVar14 & 4;
    }
    unaff_w20 = unaff_w29;
    if (uVar12 == 0) {
      uVar30 = 0;
      uVar9 = 0;
      goto LAB_0128fb00;
    }
    uVar12 = ((uint)uVar30 & 0xff00ff00) >> 8 | ((uint)uVar30 & 0xff00ff) << 8;
    uVar11 = (ulong)(uVar12 >> 0x10 | uVar12 << 0x10);
    if (*(int *)(unaff_x26 + 0x18) != 0) {
      uVar11 = uVar30;
    }
    if (uVar11 == *(ulong *)(unaff_x26 + 0x20)) {
      uVar30 = 0;
      uVar9 = 0;
      goto LAB_0128fb00;
    }
    unaff_x19[6] = (long)"incorrect data check";
    *unaff_x25 = 0x3f51;
    goto LAB_0128eaa8;
  case 0x3f4f:
    uVar14 = *(uint *)(unaff_x26 + 0x10);
LAB_0128fb08:
    uVar12 = (uint)uVar9;
    uVar13 = (uint)unaff_x27;
    unaff_x22 = pbVar20;
    if ((uVar14 != 0) && (*(int *)(unaff_x26 + 0x18) != 0)) {
      if (uVar12 < 0x20) {
        do {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar20 + 1;
          uVar11 = uVar9 + 8;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          bVar7 = uVar9 < 0x18;
          uVar30 = ((ulong)*pbVar20 << (uVar9 & 0x3f)) + uVar30;
          pbVar20 = unaff_x22;
          uVar9 = uVar11;
        } while (bVar7);
        uVar9 = uVar11 & 0xffffffff;
        unaff_x25 = in_stack_00000060;
      }
      uVar13 = (uint)unaff_x27;
      if (((uVar14 >> 2 & 1) != 0) && (uVar30 != *(uint *)(unaff_x26 + 0x28))) {
        pcVar17 = "incorrect length check";
        break;
      }
      uVar30 = 0;
      uVar12 = 0;
    }
    *unaff_x25 = 0x3f50;
    iVar21 = 1;
  case 0x3f50:
    goto switchD_0128eacc_caseD_3f50;
  case 0x3f51:
    iVar21 = -3;
    goto switchD_0128eacc_caseD_3f50;
  case 0x3f52:
    goto switchD_0128eacc_caseD_3f52;
  default:
    return -2;
  }
LAB_01290120:
  uVar13 = 0x3f51;
  unaff_x19[6] = (long)pcVar17;
LAB_01290128:
  *unaff_x25 = uVar13;
  goto LAB_0128eaa8;
LAB_01290184:
  uVar12 = uVar12 + uVar31 * 8;
  uVar13 = 0;
  unaff_x22 = unaff_x22 + uVar31;
  iVar21 = iStack000000000000004c;
  goto switchD_0128eacc_caseD_3f50;
System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>:
  uVar13 = 0;
  uVar12 = (uint)uVar9;
  unaff_x22 = pbVar20;
  unaff_x25 = in_stack_00000060;
  iVar21 = iStack000000000000004c;
  goto switchD_0128eacc_caseD_3f50;
code_r0x0128eb20:
  if (*(int *)(unaff_x26 + 0x38) == 0) {
    *(undefined4 *)(unaff_x26 + 0x38) = 0xf;
  }
  param_1 = 0;
  param_2 = 0;
  param_3 = 0;
  goto code_r0x0128eb44;
LAB_012902dc:
  uVar9 = uVar9 & 0xffffffff;
  unaff_x25 = in_stack_00000060;
LAB_0129031c:
  uVar13 = 0;
  uVar12 = (uint)uVar9;
  unaff_x22 = pbVar20;
  iVar21 = iStack000000000000004c;
switchD_0128eacc_caseD_3f50:
  unaff_x19[3] = (long)unaff_x21;
  *(uint *)(unaff_x19 + 4) = unaff_w29;
  *unaff_x19 = (long)unaff_x22;
  *(uint *)(unaff_x19 + 1) = uVar13;
  *(ulong *)(unaff_x26 + 0x50) = uVar30;
  *(uint *)(unaff_x26 + 0x58) = uVar12;
  if ((*(int *)(unaff_x26 + 0x3c) != 0) ||
     (((unaff_w20 != unaff_w29 && (*unaff_x25 < 0x3f51)) &&
      ((iStack0000000000000068 != 4 || (*unaff_x25 < 0x3f4e)))))) {
    iVar8 = FUN_01290384();
    if (iVar8 != 0) {
      *unaff_x25 = 0x3f52;
switchD_0128eacc_caseD_3f52:
      return -4;
    }
    uVar13 = *(uint *)(unaff_x19 + 1);
    unaff_w29 = *(uint *)(unaff_x19 + 4);
  }
  uVar12 = unaff_w20 - unaff_w29;
  uVar9 = (ulong)uVar12;
  unaff_x19[2] = unaff_x19[2] + (ulong)(in_stack_00000018 - uVar13);
  unaff_x19[5] = unaff_x19[5] + uVar9;
  *(ulong *)(unaff_x26 + 0x28) = *(long *)(unaff_x26 + 0x28) + uVar9;
  if ((uVar12 != 0) && ((*(uint *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
    if (*(int *)(unaff_x26 + 0x18) == 0) {
      uVar9 = FUN_0128e738(*(undefined8 *)(unaff_x26 + 0x20),unaff_x19[3] - uVar9,uVar9);
    }
    else {
      uVar9 = FUN_0129514c();
    }
    *in_stack_00000058 = uVar9;
    unaff_x19[0xc] = uVar9;
  }
  iVar22 = *(int *)(unaff_x26 + 8);
  iVar8 = 0x100;
  if (iVar22 != 0x3f42 && iVar22 != 0x3f47) {
    iVar8 = 0;
  }
  *(uint *)(unaff_x19 + 0xb) =
       *(int *)(unaff_x26 + 0x58) + (uint)(*(int *)(unaff_x26 + 0xc) != 0) * 0x40 +
       (uint)(iVar22 == 0x3f3f) * 0x80 + iVar8;
  iVar8 = -5;
  if ((uVar12 != 0 || in_stack_00000018 - uVar13 != 0) && iStack0000000000000068 != 4 || iVar21 != 0
     ) {
    iVar8 = iVar21;
  }
  return iVar8;
}


