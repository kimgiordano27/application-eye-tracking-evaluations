/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 0128ec7c
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


int System_Array__InternalArray__get_Item<OVRPlugin_Vector4f>
              (ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
              )

{
  ushort *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  char *pcVar15;
  undefined1 *puVar16;
  ulong uVar17;
  byte *pbVar18;
  int iVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  ulong uVar23;
  undefined2 uVar24;
  ulong uVar25;
  long *unaff_x19;
  uint unaff_w20;
  undefined1 *unaff_x21;
  undefined1 *puVar26;
  ulong uVar27;
  byte *unaff_x22;
  int unaff_w23;
  uint uVar28;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  uint uVar29;
  ulong unaff_x27;
  uint unaff_w28;
  uint *unaff_x29;
  undefined8 in_stack_00000010;
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
  
code_r0x0128ec7c:
  *param_1 = param_2;
  unaff_x19[0xc] = param_2;
  *unaff_x29 = 0x3f3f;
switchD_0128eacc_caseD_3f3f:
  uVar10 = (uint)unaff_x25;
  uVar11 = (uint)unaff_x27;
  iVar19 = iStack000000000000004c;
  if (1 < uStack0000000000000048) {
switchD_0128eacc_caseD_3f40:
    uVar10 = (uint)unaff_x25;
    if (*(int *)(unaff_x26 + 0xc) != 0) {
      uVar11 = 0x3f4e;
      unaff_x25 = (ulong)(uVar10 & 0xfffffff8);
      unaff_x24 = unaff_x24 >> (uVar10 & 7);
      goto LAB_01290128;
    }
    iVar19 = iStack000000000000004c;
    if (uVar10 < 3) {
      uVar11 = 0;
      if ((int)unaff_x27 == 0) goto switchD_0128eacc_caseD_3f50;
      uVar10 = uVar10 + 8;
      unaff_x27 = (ulong)((int)unaff_x27 - 1);
      unaff_x24 = ((ulong)*unaff_x22 << (unaff_x25 & 0x3f)) + unaff_x24;
      unaff_x22 = unaff_x22 + 1;
    }
    uVar11 = (uint)unaff_x27;
    *(uint *)(unaff_x26 + 0xc) = (uint)unaff_x24 & 1;
    uVar6 = DAT_00745ed8;
    uVar12 = 0x3f41;
    switch((uint)unaff_x24 >> 1 & 3) {
    case 1:
      *(undefined **)(unaff_x26 + 0x68) = &DAT_00a8023a;
      *(undefined **)(unaff_x26 + 0x70) = &DAT_00a80a3a;
      *(undefined8 *)(unaff_x26 + 0x78) = uVar6;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f47;
      if (iStack0000000000000068 != 6) goto LAB_0128f3f4;
      unaff_x24 = unaff_x24 >> 3;
      uVar10 = uVar10 - 3;
      goto switchD_0128eacc_caseD_3f50;
    case 2:
      uVar12 = 0x3f44;
      break;
    case 3:
      unaff_x19[6] = (long)"invalid block type";
      uVar12 = 0x3f51;
    }
    *unaff_x29 = uVar12;
LAB_0128f3f4:
    unaff_x24 = unaff_x24 >> 3;
    unaff_x25 = (ulong)(uVar10 - 3);
LAB_0128eaa8:
    uVar10 = (uint)unaff_x25;
    uVar11 = (uint)unaff_x27;
    pbVar18 = unaff_x22;
    iVar19 = 1;
    switch(*unaff_x29) {
    case 0x3f34:
      uVar11 = *(uint *)(unaff_x26 + 0x10);
      if (uVar11 == 0) {
        uVar10 = 0x3f40;
        goto LAB_01290064;
      }
      if (uVar10 < 0x10) {
        do {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar18 + 1;
          uVar27 = unaff_x25 + 8;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          bVar7 = unaff_x25 < 8;
          unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          pbVar18 = unaff_x22;
          unaff_x25 = uVar27;
        } while (bVar7);
        unaff_x25 = uVar27 & 0xffffffff;
        unaff_x29 = in_stack_00000060;
      }
      if (((uVar11 >> 1 & 1) != 0) && (unaff_x24 == 0x8b1f)) {
        if (*(int *)(unaff_x26 + 0x38) == 0) {
          *(undefined4 *)(unaff_x26 + 0x38) = 0xf;
        }
        uVar27 = FUN_0129514c(0,0,0);
        *in_stack_00000058 = uVar27;
        uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,0x8b1f);
        uVar27 = FUN_0129514c(uVar27,(long)&stack0x00000068 + 4,2);
        *in_stack_00000058 = uVar27;
        unaff_x24 = 0;
        unaff_x25 = 0;
        *unaff_x29 = 0x3f35;
        param_5 = in_stack_00000050;
        goto LAB_0128eaa8;
      }
      if (*(long *)(unaff_x26 + 0x30) != 0) {
        *(undefined4 *)(*(long *)(unaff_x26 + 0x30) + 0x48) = 0xffffffff;
      }
      if (((uVar11 & 1) != 0) &&
         ((((ulong)(uint)((int)unaff_x24 << 8) & 0xff00) + (unaff_x24 >> 8)) * -0x1084210842108421 <
          0x842108421084211)) {
        if ((unaff_x24 & 0xf) != 8) goto LAB_01290118;
        uVar27 = unaff_x24 >> 4 & 0xf;
        uVar12 = (uint)uVar27;
        uVar10 = uVar12 + 8;
        uVar11 = *(uint *)(unaff_x26 + 0x38);
        if (*(uint *)(unaff_x26 + 0x38) == 0) {
          *(uint *)(unaff_x26 + 0x38) = uVar10;
          uVar11 = uVar10;
        }
        if ((7 < uVar12) || (uVar11 < uVar10)) {
          unaff_x25 = (ulong)((int)unaff_x25 - 4);
          unaff_x24 = unaff_x24 >> 4;
          pcVar15 = "invalid window size";
          break;
        }
        *(undefined4 *)(unaff_x26 + 0x18) = 0;
        *(int *)(unaff_x26 + 0x1c) = 0x100 << uVar27;
        lVar9 = FUN_0128e738(0,0,0);
        uVar13 = 0x3f3f;
        if ((unaff_x24 & 0x2000) != 0) {
          uVar13 = 0x3f3d;
        }
        unaff_x25 = 0;
        *(long *)(unaff_x26 + 0x20) = lVar9;
        unaff_x19[0xc] = lVar9;
        *(undefined4 *)(unaff_x26 + 8) = uVar13;
        unaff_x24 = 0;
        param_5 = in_stack_00000050;
        goto LAB_0128eaa8;
      }
      pcVar15 = "incorrect header check";
      break;
    case 0x3f35:
      if (uVar10 < 0x10) {
        do {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar18 + 1;
          uVar27 = unaff_x25 + 8;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          bVar7 = unaff_x25 < 8;
          unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          pbVar18 = unaff_x22;
          unaff_x25 = uVar27;
        } while (bVar7);
        unaff_x25 = uVar27 & 0xffffffff;
        unaff_x29 = in_stack_00000060;
      }
      uVar10 = (uint)unaff_x24;
      *(uint *)(unaff_x26 + 0x18) = uVar10;
      if ((uVar10 & 0xff) == 8) {
        if ((unaff_x24 & 0xe000) == 0) {
          if (*(uint **)(unaff_x26 + 0x30) != (uint *)0x0) {
            **(uint **)(unaff_x26 + 0x30) = uVar10 >> 8 & 1;
          }
          if (((uVar10 >> 9 & 1) != 0) && ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
            uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,(short)unaff_x24);
            uVar27 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,2);
            *in_stack_00000058 = uVar27;
            param_5 = in_stack_00000050;
          }
          unaff_x25 = 0;
          unaff_x24 = 0;
          *unaff_x29 = 0x3f36;
          pbVar18 = unaff_x22;
          goto LAB_0128f540;
        }
        pcVar15 = "unknown header flags set";
      }
      else {
LAB_01290118:
        pcVar15 = "unknown compression method";
      }
      break;
    case 0x3f36:
      if (uVar10 < 0x20) {
LAB_0128f540:
        do {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          pbVar21 = pbVar18 + 1;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          bVar7 = unaff_x25 < 0x18;
          uVar27 = unaff_x25 & 0x3f;
          unaff_x25 = unaff_x25 + 8;
          unaff_x24 = ((ulong)*pbVar18 << uVar27) + unaff_x24;
          pbVar18 = pbVar21;
        } while (bVar7);
      }
      if (*(long *)(unaff_x26 + 0x30) != 0) {
        *(ulong *)(*(long *)(unaff_x26 + 0x30) + 8) = unaff_x24;
      }
      if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
         ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
        uStack000000000000006c = (undefined4)unaff_x24;
        uVar27 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,4);
        *in_stack_00000058 = uVar27;
        param_5 = in_stack_00000050;
      }
      unaff_x25 = 0;
      unaff_x24 = 0;
      *in_stack_00000060 = 0x3f37;
LAB_0128f5d0:
      do {
        if ((int)unaff_x27 == 0)
        goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
        unaff_x22 = pbVar18 + 1;
        unaff_x27 = (ulong)((int)unaff_x27 - 1);
        bVar7 = unaff_x25 < 8;
        uVar27 = unaff_x25 & 0x3f;
        unaff_x25 = unaff_x25 + 8;
        unaff_x24 = ((ulong)*pbVar18 << uVar27) + unaff_x24;
        pbVar18 = unaff_x22;
      } while (bVar7);
      goto LAB_0128f5f0;
    case 0x3f37:
      if (uVar10 < 0x10) goto LAB_0128f5d0;
LAB_0128f5f0:
      lVar9 = *(long *)(unaff_x26 + 0x30);
      if (lVar9 != 0) {
        *(uint *)(lVar9 + 0x10) = (uint)unaff_x24 & 0xff;
        *(int *)(lVar9 + 0x14) = (int)(unaff_x24 >> 8);
      }
      if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
         ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
        uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,(short)unaff_x24);
        uVar27 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,2);
        *in_stack_00000058 = uVar27;
        param_5 = in_stack_00000050;
      }
      uVar11 = *(uint *)(unaff_x26 + 0x18);
      unaff_x24 = 0;
      unaff_x25 = 0;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f38;
      pbVar18 = unaff_x22;
      uVar27 = 0;
      unaff_x29 = in_stack_00000060;
      if ((uVar11 >> 10 & 1) == 0) {
LAB_0128f670:
        if (*(long *)(unaff_x26 + 0x30) != 0) {
          *(undefined8 *)(*(long *)(unaff_x26 + 0x30) + 0x18) = 0;
        }
      }
      else {
LAB_0128f684:
        do {
          unaff_x25 = uVar27;
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar18 + 1;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          pbVar18 = unaff_x22;
          unaff_x29 = in_stack_00000060;
          uVar27 = unaff_x25 + 8;
        } while (unaff_x25 < 8);
LAB_0128f6a8:
        *(int *)(unaff_x26 + 0x5c) = (int)unaff_x24;
        if (*(long *)(unaff_x26 + 0x30) != 0) {
          *(int *)(*(long *)(unaff_x26 + 0x30) + 0x20) = (int)unaff_x24;
        }
        if (((uVar11 >> 9 & 1) == 0) || ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) == 0)) {
          unaff_x24 = 0;
          unaff_x25 = 0;
        }
        else {
          uStack000000000000006c = CONCAT22(uStack000000000000006c._2_2_,(short)unaff_x24);
          uVar27 = FUN_0129514c(*in_stack_00000058,(long)&stack0x00000068 + 4,2);
          unaff_x24 = 0;
          unaff_x25 = 0;
          *in_stack_00000058 = uVar27;
          param_5 = in_stack_00000050;
        }
      }
      *unaff_x29 = 0x3f39;
switchD_0128eacc_caseD_3f39:
      uVar10 = (uint)unaff_x25;
      uVar11 = *(uint *)(unaff_x26 + 0x18);
      if ((uVar11 >> 10 & 1) != 0) {
        uVar28 = *(uint *)(unaff_x26 + 0x5c);
        uVar29 = (uint)unaff_x27;
        uVar12 = uVar29;
        if (uVar28 <= uVar29) {
          uVar12 = uVar28;
        }
        if (uVar12 != 0) {
          lVar9 = *(long *)(unaff_x26 + 0x30);
          if ((lVar9 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
            uVar28 = *(int *)(lVar9 + 0x20) - uVar28;
            uVar11 = *(uint *)(lVar9 + 0x24) - uVar28;
            if (uVar28 + uVar12 <= *(uint *)(lVar9 + 0x24)) {
              uVar11 = uVar12;
            }
            memcpy((void *)(*(long *)(lVar9 + 0x18) + (ulong)uVar28),unaff_x22,(ulong)uVar11);
            uVar11 = *(uint *)(unaff_x26 + 0x18);
            param_5 = in_stack_00000050;
          }
          if (((uVar11 >> 9 & 1) != 0) && ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
            uVar27 = FUN_0129514c(*in_stack_00000058,unaff_x22,uVar12);
            *in_stack_00000058 = uVar27;
            param_5 = in_stack_00000050;
          }
          unaff_x27 = (ulong)(uVar29 - uVar12);
          unaff_x22 = unaff_x22 + uVar12;
          uVar28 = *(int *)(unaff_x26 + 0x5c) - uVar12;
          *(uint *)(unaff_x26 + 0x5c) = uVar28;
        }
        uVar11 = (uint)unaff_x27;
        iVar19 = iStack000000000000004c;
        if (uVar28 != 0) goto switchD_0128eacc_caseD_3f50;
      }
      *(undefined4 *)(unaff_x26 + 0x5c) = 0;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f3a;
switchD_0128eacc_caseD_3f3a:
      uVar10 = (uint)unaff_x25;
      if ((*(byte *)(unaff_x26 + 0x19) >> 3 & 1) == 0) {
        if (*(long *)(unaff_x26 + 0x30) != 0) {
          *(undefined8 *)(*(long *)(unaff_x26 + 0x30) + 0x28) = 0;
        }
      }
      else {
        uVar11 = 0;
        iVar19 = iStack000000000000004c;
        if ((int)unaff_x27 == 0) goto switchD_0128eacc_caseD_3f50;
        uVar27 = 0;
        do {
          lVar9 = *(long *)(unaff_x26 + 0x30);
          bVar3 = unaff_x22[uVar27];
          if ((lVar9 != 0) && (lVar14 = *(long *)(lVar9 + 0x28), lVar14 != 0)) {
            uVar11 = *(uint *)(unaff_x26 + 0x5c);
            if (uVar11 < *(uint *)(lVar9 + 0x30)) {
              *(uint *)(unaff_x26 + 0x5c) = uVar11 + 1;
              *(byte *)(lVar14 + (ulong)uVar11) = bVar3;
            }
          }
          uVar27 = uVar27 + 1;
        } while ((bVar3 != 0) && (uVar27 < (unaff_x27 & 0xffffffff)));
        if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
          uVar23 = FUN_0129514c(*in_stack_00000058,unaff_x22,uVar27 & 0xffffffff);
          *in_stack_00000058 = uVar23;
          param_5 = in_stack_00000050;
          unaff_x29 = in_stack_00000060;
        }
        unaff_x22 = unaff_x22 + uVar27;
        if (bVar3 != 0) {
          uVar11 = (int)unaff_x27 - (int)uVar27;
          goto switchD_0128eacc_caseD_3f50;
        }
        unaff_x27 = (unaff_x27 & 0xffffffff) - uVar27;
      }
      *(undefined4 *)(unaff_x26 + 0x5c) = 0;
      *(undefined4 *)(unaff_x26 + 8) = 0x3f3b;
switchD_0128eacc_caseD_3f3b:
      uVar10 = (uint)unaff_x25;
      if ((*(byte *)(unaff_x26 + 0x19) >> 4 & 1) == 0) {
        if (*(long *)(unaff_x26 + 0x30) != 0) {
          *(undefined8 *)(*(long *)(unaff_x26 + 0x30) + 0x38) = 0;
        }
      }
      else {
        uVar11 = 0;
        iVar19 = iStack000000000000004c;
        if ((int)unaff_x27 == 0) goto switchD_0128eacc_caseD_3f50;
        uVar27 = 0;
        do {
          lVar9 = *(long *)(unaff_x26 + 0x30);
          bVar3 = unaff_x22[uVar27];
          if ((lVar9 != 0) && (lVar14 = *(long *)(lVar9 + 0x38), lVar14 != 0)) {
            uVar11 = *(uint *)(unaff_x26 + 0x5c);
            if (uVar11 < *(uint *)(lVar9 + 0x40)) {
              *(uint *)(unaff_x26 + 0x5c) = uVar11 + 1;
              *(byte *)(lVar14 + (ulong)uVar11) = bVar3;
            }
          }
          uVar27 = uVar27 + 1;
        } while ((bVar3 != 0) && (uVar27 < (unaff_x27 & 0xffffffff)));
        if (((*(byte *)(unaff_x26 + 0x19) >> 1 & 1) != 0) &&
           ((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
          uVar23 = FUN_0129514c(*in_stack_00000058,unaff_x22,uVar27 & 0xffffffff);
          *in_stack_00000058 = uVar23;
          param_5 = in_stack_00000050;
        }
        unaff_x22 = unaff_x22 + uVar27;
        if (bVar3 != 0) {
          uVar11 = (int)unaff_x27 - (int)uVar27;
          unaff_x29 = in_stack_00000060;
          goto switchD_0128eacc_caseD_3f50;
        }
        unaff_x27 = (unaff_x27 & 0xffffffff) - uVar27;
        unaff_x29 = in_stack_00000060;
      }
      *unaff_x29 = 0x3f3c;
      pbVar18 = unaff_x22;
switchD_0128eacc_caseD_3f3c:
      unaff_x22 = pbVar18;
      if ((*(uint *)(unaff_x26 + 0x18) >> 9 & 1) != 0) {
        if ((uint)unaff_x25 < 0x10) {
          do {
            if ((int)unaff_x27 == 0)
            goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
            unaff_x22 = pbVar18 + 1;
            uVar27 = unaff_x25 + 8;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            bVar7 = unaff_x25 < 8;
            unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
            pbVar18 = unaff_x22;
            unaff_x25 = uVar27;
          } while (bVar7);
          unaff_x25 = uVar27 & 0xffffffff;
          unaff_x29 = in_stack_00000060;
        }
        if (((*(byte *)(unaff_x26 + 0x10) >> 2 & 1) != 0) &&
           (unaff_x24 != (ushort)*in_stack_00000058)) {
          pcVar15 = "header crc mismatch";
          break;
        }
        unaff_x24 = 0;
        unaff_x25 = 0;
      }
      lVar9 = *(long *)(unaff_x26 + 0x30);
      if (lVar9 != 0) {
        *(uint *)(lVar9 + 0x44) = *(uint *)(unaff_x26 + 0x18) >> 9 & 1;
        *(undefined4 *)(lVar9 + 0x48) = 1;
      }
      uVar27 = FUN_0129514c(0,0,0);
      *in_stack_00000058 = uVar27;
      unaff_x19[0xc] = uVar27;
      *unaff_x29 = 0x3f3f;
      param_5 = in_stack_00000050;
      goto LAB_0128eaa8;
    case 0x3f38:
      uVar11 = *(uint *)(unaff_x26 + 0x18);
      if ((uVar11 >> 10 & 1) != 0) {
        uVar27 = unaff_x25;
        if (uVar10 < 0x10) goto LAB_0128f684;
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
      if (uVar10 < 0x20) goto LAB_0128ec14;
      goto LAB_0128ec34;
    case 0x3f3e:
      goto switchD_0128eacc_caseD_3f3e;
    case 0x3f3f:
      goto switchD_0128eacc_caseD_3f3f;
    case 0x3f40:
      goto switchD_0128eacc_caseD_3f40;
    case 0x3f41:
      unaff_x25 = (ulong)(uVar10 & 0xfffffff8);
      unaff_x24 = unaff_x24 >> (uVar10 & 7);
      if ((uVar10 & 0xfffffff8) < 0x20) {
        do {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar18 + 1;
          uVar27 = unaff_x25 + 8;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          bVar7 = unaff_x25 < 0x18;
          unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          pbVar18 = unaff_x22;
          unaff_x25 = uVar27;
        } while (bVar7);
        unaff_x25 = uVar27 & 0xffffffff;
      }
      uVar11 = (uint)unaff_x27;
      uVar12 = (uint)unaff_x24;
      if ((unaff_x24 >> 0x10 ^ 0xffff) == (unaff_x24 & 0xffff)) {
        unaff_x25 = 0;
        uVar10 = 0;
        unaff_x24 = 0;
        *(uint *)(unaff_x26 + 0x5c) = uVar12 & 0xffff;
        *(undefined4 *)(unaff_x26 + 8) = 0x3f42;
        unaff_x29 = in_stack_00000060;
        iVar19 = iStack000000000000004c;
        if (iStack0000000000000068 != 6) goto switchD_0128eacc_caseD_3f42;
        goto switchD_0128eacc_caseD_3f50;
      }
      pcVar15 = "invalid stored block lengths";
      unaff_x29 = in_stack_00000060;
      break;
    case 0x3f42:
switchD_0128eacc_caseD_3f42:
      *unaff_x29 = 0x3f43;
    case 0x3f43:
      uVar10 = (uint)unaff_x25;
      uVar11 = (uint)unaff_x27;
      uVar12 = *(uint *)(unaff_x26 + 0x5c);
      if (uVar12 == 0) {
        uVar10 = 0x3f3f;
LAB_01290064:
        *unaff_x29 = uVar10;
      }
      else {
        uVar28 = uVar11;
        if (uVar12 <= uVar11) {
          uVar28 = uVar12;
        }
        uVar12 = unaff_w28;
        if (uVar28 <= unaff_w28) {
          uVar12 = uVar28;
        }
        unaff_x29 = in_stack_00000060;
        iVar19 = iStack000000000000004c;
        if (uVar12 == 0) goto switchD_0128eacc_caseD_3f50;
        memcpy(unaff_x21,unaff_x22,(ulong)uVar12);
        unaff_x27 = (ulong)(uVar11 - uVar12);
        unaff_x22 = unaff_x22 + uVar12;
        unaff_w28 = unaff_w28 - uVar12;
        unaff_x21 = unaff_x21 + uVar12;
        *(uint *)(unaff_x26 + 0x5c) = *(int *)(unaff_x26 + 0x5c) - uVar12;
        param_5 = in_stack_00000050;
      }
      goto LAB_0128eaa8;
    case 0x3f44:
      if (uVar10 < 0xe) {
        do {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar18 + 1;
          uVar27 = unaff_x25 + 8;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          bVar7 = unaff_x25 < 6;
          unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          pbVar18 = unaff_x22;
          unaff_x25 = uVar27;
        } while (bVar7);
        uVar10 = (uint)uVar27;
        unaff_x29 = in_stack_00000060;
      }
      uVar28 = (uint)unaff_x24;
      uVar12 = uVar28 >> 5 & 0x1f;
      unaff_x24 = unaff_x24 >> 0xe;
      uVar11 = (uVar28 >> 10 & 0xf) + 4;
      unaff_x25 = (ulong)(uVar10 - 0xe);
      *(uint *)(unaff_x26 + 0x84) = (uVar28 & 0x1f) + 0x101;
      *(uint *)(unaff_x26 + 0x88) = uVar12 + 1;
      *(uint *)(unaff_x26 + 0x80) = uVar11;
      if (((uVar28 & 0x1f) < 0x1e) && (uVar12 < 0x1e)) {
        uVar27 = 0;
        *(undefined4 *)(unaff_x26 + 0x8c) = 0;
        *(undefined4 *)(unaff_x26 + 8) = 0x3f45;
        pbVar18 = unaff_x22;
LAB_0128ee2c:
        do {
          uVar10 = (uint)unaff_x25;
          unaff_x22 = pbVar18;
          if (uVar10 < 3) {
            if ((int)unaff_x27 == 0)
            goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
            unaff_x22 = pbVar18 + 1;
            uVar10 = uVar10 + 8;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          }
          uVar4 = (&DAT_00a80214)[uVar27];
          uVar27 = uVar27 + 1;
          uVar5 = (ushort)unaff_x24;
          unaff_x24 = unaff_x24 >> 3;
          unaff_x25 = (ulong)(uVar10 - 3);
          *(uint *)(unaff_x26 + 0x8c) = (uint)uVar27;
          *(ushort *)(unaff_x26 + (ulong)uVar4 * 2 + 0x98) = uVar5 & 7;
          pbVar18 = unaff_x22;
          unaff_x29 = in_stack_00000060;
        } while ((uint)uVar27 < uVar11);
        goto LAB_0128ee80;
      }
      pcVar15 = "too many length or distance symbols";
      break;
    case 0x3f45:
      uVar27 = (ulong)*(uint *)(unaff_x26 + 0x8c);
      uVar11 = *(uint *)(unaff_x26 + 0x80);
      if (*(uint *)(unaff_x26 + 0x8c) < uVar11) goto LAB_0128ee2c;
LAB_0128ee80:
      if ((uint)uVar27 < 0x13) {
        uVar27 = uVar27 & 0xffffffff;
        do {
          puVar1 = &DAT_00a80214 + uVar27;
          uVar27 = uVar27 + 1;
          *(undefined2 *)(unaff_x26 + (ulong)*puVar1 * 2 + 0x98) = 0;
        } while ((int)uVar27 != 0x13);
        *(undefined4 *)(unaff_x26 + 0x8c) = 0x13;
      }
      *(undefined8 *)(unaff_x26 + 0x90) = in_stack_00000030;
      *(undefined8 *)(unaff_x26 + 0x68) = in_stack_00000030;
      *(undefined4 *)(unaff_x26 + 0x78) = 7;
      iStack000000000000004c =
           FUN_012949ec(0,in_stack_00000020,0x13,param_5,in_stack_00000028,in_stack_00000038);
      if (iStack000000000000004c == 0) {
        uVar11 = 0;
        iStack000000000000004c = 0;
        *(undefined4 *)(unaff_x26 + 0x8c) = 0;
        *(undefined4 *)(unaff_x26 + 8) = 0x3f46;
        param_5 = in_stack_00000050;
        goto LAB_0128f114;
      }
      unaff_x19[6] = (long)"invalid code lengths set";
      *unaff_x29 = 0x3f51;
      param_5 = in_stack_00000050;
      goto LAB_0128eaa8;
    case 0x3f46:
      uVar11 = *(uint *)(unaff_x26 + 0x8c);
LAB_0128f114:
      iVar19 = *(int *)(unaff_x26 + 0x84);
      uVar12 = *(int *)(unaff_x26 + 0x88) + iVar19;
      if (uVar11 < uVar12) {
        lVar9 = *(long *)(unaff_x26 + 0x68);
        uVar28 = ~(-1 << (ulong)(*(uint *)(unaff_x26 + 0x78) & 0x1f));
        do {
          uVar29 = (uint)unaff_x27;
          uVar23 = (ulong)(uVar28 & (uint)unaff_x24);
          bVar3 = *(byte *)(lVar9 + uVar23 * 4 + 1);
          uVar27 = (ulong)bVar3;
          uVar10 = (uint)unaff_x25;
          if (uVar10 < bVar3) {
            unaff_x27 = unaff_x27 & 0xffffffff;
            pbVar18 = unaff_x22;
            do {
              if ((int)unaff_x27 == 0) goto LAB_01290184;
              pbVar21 = pbVar18 + 1;
              unaff_x27 = (ulong)((int)unaff_x27 - 1);
              unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
              uVar2 = uVar28 & (uint)unaff_x24;
              uVar17 = (ulong)*(byte *)(lVar9 + (ulong)uVar2 * 4 + 1);
              unaff_x25 = unaff_x25 + 8;
              pbVar18 = pbVar21;
            } while (unaff_x25 < uVar17);
            uVar23 = (ulong)uVar2;
            unaff_x25 = unaff_x25 & 0xffffffff;
            uVar27 = uVar17;
            unaff_x22 = pbVar21;
          }
          else {
            uVar17 = (ulong)(uint)bVar3;
          }
          uVar4 = *(ushort *)(lVar9 + uVar23 * 4 + 2);
          iVar8 = (int)uVar17;
          uVar10 = (uint)unaff_x25;
          if (0xf < uVar4) {
            pbVar18 = unaff_x22;
            if (uVar4 == 0x10) {
              if (uVar10 < iVar8 + 2U) {
                do {
                  if ((int)unaff_x27 == 0) goto LAB_0129031c;
                  unaff_x22 = pbVar18 + 1;
                  unaff_x27 = (ulong)((int)unaff_x27 - 1);
                  uVar23 = unaff_x25 & 0x3f;
                  unaff_x25 = unaff_x25 + 8;
                  unaff_x24 = ((ulong)*pbVar18 << uVar23) + unaff_x24;
                  pbVar18 = unaff_x22;
                } while (unaff_x25 < iVar8 + 2U);
              }
              unaff_x24 = unaff_x24 >> (uVar27 & 0x3f);
              uVar10 = (int)unaff_x25 - iVar8;
              unaff_x25 = (ulong)uVar10;
              if (uVar11 != 0) {
                uVar24 = *(undefined2 *)(unaff_x26 + (ulong)(uVar11 - 1) * 2 + 0x98);
                iVar20 = ((uint)unaff_x24 & 3) + 3;
                unaff_x24 = unaff_x24 >> 2;
                unaff_x25 = (ulong)(uVar10 - 2);
                goto LAB_0128f2f8;
              }
            }
            else {
              if (uVar4 == 0x11) {
                if (uVar10 < iVar8 + 3U) {
                  do {
                    if ((int)unaff_x27 == 0) goto LAB_012902dc;
                    unaff_x22 = pbVar18 + 1;
                    unaff_x27 = (ulong)((int)unaff_x27 - 1);
                    uVar23 = unaff_x25 & 0x3f;
                    unaff_x25 = unaff_x25 + 8;
                    unaff_x24 = ((ulong)*pbVar18 << uVar23) + unaff_x24;
                    pbVar18 = unaff_x22;
                  } while (unaff_x25 < iVar8 + 3U);
                  uVar10 = (uint)unaff_x25;
                  unaff_x29 = in_stack_00000060;
                }
                uVar27 = unaff_x24 >> (uVar27 & 0x3f);
                uVar24 = 0;
                unaff_x24 = uVar27 >> 3;
                iVar20 = ((uint)uVar27 & 7) + 3;
                unaff_x25 = (ulong)((uVar10 - iVar8) - 3);
              }
              else {
                if (uVar10 < iVar8 + 7U) {
                  do {
                    if ((int)unaff_x27 == 0) goto LAB_012902dc;
                    unaff_x22 = pbVar18 + 1;
                    unaff_x27 = (ulong)((int)unaff_x27 - 1);
                    uVar23 = unaff_x25 & 0x3f;
                    unaff_x25 = unaff_x25 + 8;
                    unaff_x24 = ((ulong)*pbVar18 << uVar23) + unaff_x24;
                    pbVar18 = unaff_x22;
                  } while (unaff_x25 < iVar8 + 7U);
                  uVar10 = (uint)unaff_x25;
                  unaff_x29 = in_stack_00000060;
                }
                uVar27 = unaff_x24 >> (uVar27 & 0x3f);
                uVar24 = 0;
                unaff_x24 = uVar27 >> 7;
                iVar20 = ((uint)uVar27 & 0x7f) + 0xb;
                unaff_x25 = (ulong)((uVar10 - iVar8) - 7);
              }
LAB_0128f2f8:
              if (iVar20 + uVar11 <= uVar12) {
                do {
                  iVar20 = iVar20 + -1;
                  uVar27 = (ulong)uVar11;
                  uVar11 = uVar11 + 1;
                  *(undefined2 *)(unaff_x26 + uVar27 * 2 + 0x98) = uVar24;
                } while (iVar20 != 0);
                *(uint *)(unaff_x26 + 0x8c) = uVar11;
                goto LAB_0128f31c;
              }
            }
            pcVar15 = "invalid bit length repeat";
            goto LAB_01290120;
          }
          unaff_x25 = (ulong)(uVar10 - iVar8);
          uVar23 = (ulong)uVar11;
          uVar11 = uVar11 + 1;
          unaff_x24 = unaff_x24 >> (uVar27 & 0x3f);
          *(uint *)(unaff_x26 + 0x8c) = uVar11;
          *(ushort *)(unaff_x26 + uVar23 * 2 + 0x98) = uVar4;
LAB_0128f31c:
        } while (uVar11 < uVar12);
      }
      uVar10 = (uint)unaff_x25;
      uVar11 = (uint)unaff_x27;
      if (*(short *)(unaff_x26 + 0x298) == 0) {
        unaff_x19[6] = (long)"invalid code -- missing end-of-block";
        *unaff_x29 = 0x3f51;
        goto LAB_0128eaa8;
      }
      *(undefined8 *)(unaff_x26 + 0x90) = in_stack_00000030;
      *(undefined8 *)(unaff_x26 + 0x68) = in_stack_00000030;
      *(undefined4 *)(unaff_x26 + 0x78) = 9;
      iStack000000000000004c =
           FUN_012949ec(1,in_stack_00000020,iVar19,param_5,in_stack_00000028,in_stack_00000038);
      if (iStack000000000000004c != 0) {
        pcVar15 = "invalid literal/lengths set";
LAB_0128f4c0:
        unaff_x19[6] = (long)pcVar15;
        *unaff_x29 = 0x3f51;
        goto LAB_0128eaa8;
      }
      *(undefined8 *)(unaff_x26 + 0x70) = *(undefined8 *)(unaff_x26 + 0x90);
      *(undefined4 *)(unaff_x26 + 0x7c) = 6;
      iStack000000000000004c =
           FUN_012949ec(2,unaff_x26 + (ulong)*(uint *)(unaff_x26 + 0x84) * 2 + 0x98,
                        *(undefined4 *)(unaff_x26 + 0x88),param_5,in_stack_00000010,
                        in_stack_00000038);
      if (iStack000000000000004c != 0) {
        pcVar15 = "invalid distances set";
        param_5 = in_stack_00000050;
        goto LAB_0128f4c0;
      }
      iStack000000000000004c = 0;
      *unaff_x29 = 0x3f47;
      param_5 = in_stack_00000050;
      iVar19 = iStack000000000000004c;
      if (iStack0000000000000068 == 6) goto switchD_0128eacc_caseD_3f50;
switchD_0128eacc_caseD_3f47:
      *unaff_x29 = 0x3f48;
switchD_0128eacc_caseD_3f48:
      uVar29 = (uint)unaff_x27;
      uVar10 = (uint)unaff_x25;
      if ((0x101 < unaff_w28) && (5 < uVar29)) {
        unaff_x19[3] = (long)unaff_x21;
        *(uint *)(unaff_x19 + 4) = unaff_w28;
        *unaff_x19 = (long)unaff_x22;
        *(uint *)(unaff_x19 + 1) = uVar29;
        *(ulong *)(unaff_x26 + 0x50) = unaff_x24;
        *(uint *)(unaff_x26 + 0x58) = uVar10;
        FUN_0129454c();
        unaff_x21 = (undefined1 *)unaff_x19[3];
        unaff_w28 = *(uint *)(unaff_x19 + 4);
        unaff_x22 = (byte *)*unaff_x19;
        unaff_x27 = (ulong)*(uint *)(unaff_x19 + 1);
        unaff_x24 = *(ulong *)(unaff_x26 + 0x50);
        unaff_x25 = (ulong)*(uint *)(unaff_x26 + 0x58);
        param_5 = in_stack_00000050;
        if (*(int *)(unaff_x26 + 8) == 0x3f3f) {
          *(undefined4 *)(unaff_x26 + 0x1bec) = 0xffffffff;
        }
        goto LAB_0128eaa8;
      }
      lVar9 = *(long *)(unaff_x26 + 0x68);
      *(undefined4 *)(unaff_x26 + 0x1bec) = 0;
      uVar11 = -1 << (ulong)(*(uint *)(unaff_x26 + 0x78) & 0x1f);
      uVar23 = (ulong)((uint)unaff_x24 & (uVar11 ^ 0xffffffff));
      bVar3 = *(byte *)(lVar9 + uVar23 * 4 + 1);
      uVar27 = (ulong)bVar3;
      if (uVar10 < bVar3) {
        unaff_x27 = unaff_x27 & 0xffffffff;
        pbVar18 = unaff_x22;
        do {
          if ((int)unaff_x27 == 0) goto LAB_01290184;
          pbVar21 = pbVar18 + 1;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          uVar12 = ~uVar11 & (uint)unaff_x24;
          uVar17 = (ulong)*(byte *)(lVar9 + (ulong)uVar12 * 4 + 1);
          unaff_x25 = unaff_x25 + 8;
          pbVar18 = pbVar21;
        } while (unaff_x25 < uVar17);
        uVar23 = (ulong)uVar12;
        unaff_x25 = unaff_x25 & 0xffffffff;
        uVar27 = uVar17;
        unaff_x22 = pbVar21;
      }
      else {
        uVar17 = (ulong)(uint)bVar3;
      }
      uVar29 = (uint)unaff_x27;
      uVar11 = (uint)uVar17;
      uVar10 = (uint)unaff_x25;
      pbVar18 = (byte *)(lVar9 + uVar23 * 4);
      bVar3 = *pbVar18;
      uVar4 = *(ushort *)(pbVar18 + 2);
      if ((bVar3 == 0) || ((bVar3 & 0xf0) != 0)) {
        uVar11 = 0;
      }
      else {
        uVar12 = -1 << (ulong)(uVar11 + bVar3 & 0x1f);
        uVar25 = (ulong)((((uint)unaff_x24 & (uVar12 ^ 0xffffffff)) >> (ulong)(uVar11 & 0x1f)) +
                        (uint)uVar4);
        bVar3 = *(byte *)(lVar9 + uVar25 * 4 + 1);
        uVar23 = (ulong)bVar3;
        pbVar18 = unaff_x22;
        if (uVar10 < uVar11 + bVar3) {
          unaff_x27 = unaff_x27 & 0xffffffff;
          pbVar21 = unaff_x22;
          do {
            if ((int)unaff_x27 == 0) goto LAB_01290184;
            pbVar18 = pbVar21 + 1;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            unaff_x24 = ((ulong)*pbVar21 << (unaff_x25 & 0x3f)) + unaff_x24;
            uVar28 = (((uint)unaff_x24 & ~uVar12) >> (ulong)(uVar11 & 0x1f)) + (uint)uVar4;
            uVar23 = (ulong)*(byte *)(lVar9 + (ulong)uVar28 * 4 + 1);
            unaff_x25 = unaff_x25 + 8;
            pbVar21 = pbVar18;
          } while (unaff_x25 < uVar23 + uVar17);
          uVar25 = (ulong)uVar28;
          uVar10 = (uint)unaff_x25;
        }
        pbVar21 = (byte *)(lVar9 + uVar25 * 4);
        uVar4 = *(ushort *)(pbVar21 + 2);
        bVar3 = *pbVar21;
        unaff_x24 = unaff_x24 >> (uVar27 & 0x3f);
        uVar10 = uVar10 - uVar11;
        *(uint *)(unaff_x26 + 0x1bec) = uVar11;
        uVar27 = uVar23;
        unaff_x22 = pbVar18;
      }
      unaff_x24 = unaff_x24 >> (uVar27 & 0x3f);
      unaff_x25 = (ulong)(uVar10 - (int)uVar27);
      *(uint *)(unaff_x26 + 0x1bec) = uVar11 + (int)uVar27;
      *(uint *)(unaff_x26 + 0x5c) = (uint)uVar4;
      if (bVar3 == 0) {
        uVar10 = 0x3f4d;
        goto LAB_01290064;
      }
      if ((bVar3 >> 5 & 1) != 0) {
        uVar13 = 0x3f3f;
        *(undefined4 *)(unaff_x26 + 0x1bec) = 0xffffffff;
LAB_0128ef80:
        *(undefined4 *)(unaff_x26 + 8) = uVar13;
        goto LAB_0128eaa8;
      }
      if ((bVar3 >> 6 & 1) == 0) {
        uVar11 = bVar3 & 0xf;
        *(uint *)(unaff_x26 + 100) = uVar11;
        *(undefined4 *)(unaff_x26 + 8) = 0x3f49;
        if ((bVar3 & 0xf) == 0) {
LAB_0128fda8:
          iVar19 = *(int *)(unaff_x26 + 0x5c);
        }
        else {
LAB_0128ef28:
          uVar29 = (uint)unaff_x27;
          uVar10 = (uint)unaff_x25;
          if (uVar10 < uVar11) {
            unaff_x27 = unaff_x27 & 0xffffffff;
            pbVar21 = unaff_x22;
            do {
              if ((int)unaff_x27 == 0) goto LAB_01290184;
              pbVar18 = pbVar21 + 1;
              unaff_x27 = (ulong)((int)unaff_x27 - 1);
              uVar27 = unaff_x25 & 0x3f;
              uVar12 = (int)unaff_x25 + 8;
              unaff_x25 = (ulong)uVar12;
              unaff_x24 = ((ulong)*pbVar21 << uVar27) + unaff_x24;
              pbVar21 = pbVar18;
            } while (uVar12 < uVar11);
          }
          else {
            unaff_x27 = unaff_x27 & 0xffffffff;
            pbVar18 = unaff_x22;
            uVar12 = uVar10;
          }
          unaff_x25 = (ulong)(uVar12 - uVar11);
          uVar10 = (uint)unaff_x24;
          unaff_x24 = unaff_x24 >> ((ulong)uVar11 & 0x3f);
          iVar19 = *(int *)(unaff_x26 + 0x5c) +
                   (uVar10 & (-1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU));
          *(int *)(unaff_x26 + 0x5c) = iVar19;
          *(uint *)(unaff_x26 + 0x1bec) = *(int *)(unaff_x26 + 0x1bec) + uVar11;
          unaff_x22 = pbVar18;
        }
        *(int *)(unaff_x26 + 0x1bf0) = iVar19;
        *(undefined4 *)(unaff_x26 + 8) = 0x3f4a;
        pbVar18 = unaff_x22;
switchD_0128eacc_caseD_3f4a:
        uVar29 = (uint)unaff_x27;
        lVar9 = *(long *)(unaff_x26 + 0x70);
        uVar11 = -1 << (ulong)(*(uint *)(unaff_x26 + 0x7c) & 0x1f);
        uVar23 = (ulong)((uint)unaff_x24 & (uVar11 ^ 0xffffffff));
        bVar3 = *(byte *)(lVar9 + uVar23 * 4 + 1);
        uVar27 = (ulong)bVar3;
        uVar10 = (uint)unaff_x25;
        if (uVar10 < bVar3) {
          unaff_x27 = unaff_x27 & 0xffffffff;
          pbVar21 = pbVar18;
          do {
            unaff_x22 = pbVar18;
            if ((int)unaff_x27 == 0) goto LAB_01290184;
            pbVar22 = pbVar21 + 1;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            unaff_x24 = ((ulong)*pbVar21 << (unaff_x25 & 0x3f)) + unaff_x24;
            uVar12 = ~uVar11 & (uint)unaff_x24;
            uVar27 = (ulong)*(byte *)(lVar9 + (ulong)uVar12 * 4 + 1);
            unaff_x25 = unaff_x25 + 8;
            pbVar21 = pbVar22;
          } while (unaff_x25 < uVar27);
          uVar23 = (ulong)uVar12;
          unaff_x25 = unaff_x25 & 0xffffffff;
          uVar17 = uVar27;
          pbVar18 = pbVar22;
        }
        else {
          uVar17 = (ulong)(uint)bVar3;
        }
        uVar29 = (uint)unaff_x27;
        uVar10 = (uint)unaff_x25;
        pbVar21 = (byte *)(lVar9 + uVar23 * 4);
        bVar3 = *pbVar21;
        uVar4 = *(ushort *)(pbVar21 + 2);
        unaff_x22 = pbVar18;
        if ((bVar3 & 0xf0) == 0) {
          uVar12 = (uint)uVar17;
          uVar11 = -1 << (ulong)(uVar12 + bVar3 & 0x1f);
          uVar25 = (ulong)((((uint)unaff_x24 & (uVar11 ^ 0xffffffff)) >> (ulong)(uVar12 & 0x1f)) +
                          (uint)uVar4);
          bVar3 = *(byte *)(lVar9 + uVar25 * 4 + 1);
          uVar23 = (ulong)bVar3;
          if (uVar10 < uVar12 + bVar3) {
            unaff_x27 = unaff_x27 & 0xffffffff;
            pbVar21 = pbVar18;
            do {
              unaff_x22 = pbVar18;
              if ((int)unaff_x27 == 0) goto LAB_01290184;
              unaff_x22 = pbVar21 + 1;
              unaff_x27 = (ulong)((int)unaff_x27 - 1);
              unaff_x24 = ((ulong)*pbVar21 << (unaff_x25 & 0x3f)) + unaff_x24;
              uVar28 = (((uint)unaff_x24 & ~uVar11) >> (ulong)(uVar12 & 0x1f)) + (uint)uVar4;
              uVar23 = (ulong)*(byte *)(lVar9 + (ulong)uVar28 * 4 + 1);
              unaff_x25 = unaff_x25 + 8;
              pbVar21 = unaff_x22;
            } while (unaff_x25 < uVar23 + uVar17);
            uVar25 = (ulong)uVar28;
            uVar10 = (uint)unaff_x25;
          }
          pbVar18 = (byte *)(lVar9 + uVar25 * 4);
          uVar4 = *(ushort *)(pbVar18 + 2);
          bVar3 = *pbVar18;
          unaff_x24 = unaff_x24 >> (uVar27 & 0x3f);
          uVar10 = uVar10 - uVar12;
          iVar19 = *(int *)(unaff_x26 + 0x1bec) + uVar12;
          *(int *)(unaff_x26 + 0x1bec) = iVar19;
        }
        else {
          iVar19 = *(int *)(unaff_x26 + 0x1bec);
          uVar23 = uVar27;
        }
        unaff_x24 = unaff_x24 >> (uVar23 & 0x3f);
        unaff_x25 = (ulong)(uVar10 - (int)uVar23);
        *(int *)(unaff_x26 + 0x1bec) = iVar19 + (int)uVar23;
        if ((bVar3 >> 6 & 1) != 0) {
          pcVar15 = "invalid distance code";
          break;
        }
        uVar11 = bVar3 & 0xf;
        *(uint *)(unaff_x26 + 0x60) = (uint)uVar4;
        *(uint *)(unaff_x26 + 100) = uVar11;
        *(undefined4 *)(unaff_x26 + 8) = 0x3f4b;
        if ((bVar3 & 0xf) != 0) {
LAB_0128ff20:
          uVar29 = (uint)unaff_x27;
          uVar10 = (uint)unaff_x25;
          if (uVar10 < uVar11) {
            unaff_x27 = unaff_x27 & 0xffffffff;
            pbVar21 = unaff_x22;
            do {
              if ((int)unaff_x27 == 0) goto LAB_01290184;
              pbVar18 = pbVar21 + 1;
              unaff_x27 = (ulong)((int)unaff_x27 - 1);
              uVar27 = unaff_x25 & 0x3f;
              uVar12 = (int)unaff_x25 + 8;
              unaff_x25 = (ulong)uVar12;
              unaff_x24 = ((ulong)*pbVar21 << uVar27) + unaff_x24;
              pbVar21 = pbVar18;
            } while (uVar12 < uVar11);
          }
          else {
            unaff_x27 = unaff_x27 & 0xffffffff;
            pbVar18 = unaff_x22;
            uVar12 = uVar10;
          }
          unaff_x25 = (ulong)(uVar12 - uVar11);
          uVar10 = (uint)unaff_x24;
          unaff_x24 = unaff_x24 >> ((ulong)uVar11 & 0x3f);
          *(uint *)(unaff_x26 + 0x60) =
               *(int *)(unaff_x26 + 0x60) + (uVar10 & (-1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU));
          *(uint *)(unaff_x26 + 0x1bec) = *(int *)(unaff_x26 + 0x1bec) + uVar11;
          unaff_x22 = pbVar18;
        }
LAB_0128ffa4:
        *unaff_x29 = 0x3f4c;
switchD_0128eacc_caseD_3f4c:
        uVar10 = (uint)unaff_x25;
        uVar11 = (uint)unaff_x27;
        iVar19 = iStack000000000000004c;
        if (unaff_w28 == 0) goto switchD_0128eacc_caseD_3f50;
        uVar10 = *(uint *)(unaff_x26 + 0x60);
        if (unaff_w20 - unaff_w28 < uVar10) {
          uVar10 = uVar10 - (unaff_w20 - unaff_w28);
          if ((*(uint *)(unaff_x26 + 0x40) < uVar10) && (*(int *)(unaff_x26 + 0x1be8) != 0)) {
            pcVar15 = "invalid distance too far back";
            break;
          }
          uVar12 = *(uint *)(unaff_x26 + 0x44);
          uVar11 = uVar10 - uVar12;
          if (uVar10 < uVar12 || uVar11 == 0) {
            uVar12 = uVar12 - uVar10;
          }
          else {
            uVar12 = *(int *)(unaff_x26 + 0x3c) - uVar11;
            uVar10 = uVar11;
          }
          uVar11 = *(uint *)(unaff_x26 + 0x5c);
          puVar16 = (undefined1 *)(*(long *)(unaff_x26 + 0x48) + (ulong)uVar12);
          uVar12 = uVar11;
          if (uVar10 <= uVar11) {
            uVar12 = uVar10;
          }
        }
        else {
          uVar11 = *(uint *)(unaff_x26 + 0x5c);
          puVar16 = unaff_x21 + -(ulong)uVar10;
          uVar12 = uVar11;
        }
        uVar10 = unaff_w28;
        if (uVar12 <= unaff_w28) {
          uVar10 = uVar12;
        }
        *(uint *)(unaff_x26 + 0x5c) = uVar11 - uVar10;
        puVar26 = unaff_x21;
        uVar11 = uVar10;
        do {
          uVar11 = uVar11 - 1;
          unaff_x21 = puVar26 + 1;
          *puVar26 = *puVar16;
          puVar16 = puVar16 + 1;
          puVar26 = unaff_x21;
        } while (uVar11 != 0);
        unaff_w28 = unaff_w28 - uVar10;
        if (*(int *)(unaff_x26 + 0x5c) == 0) {
          uVar10 = 0x3f48;
          goto LAB_01290064;
        }
        goto LAB_0128eaa8;
      }
      pcVar15 = "invalid literal/length code";
      break;
    case 0x3f47:
      goto switchD_0128eacc_caseD_3f47;
    case 0x3f48:
      goto switchD_0128eacc_caseD_3f48;
    case 0x3f49:
      uVar11 = *(uint *)(unaff_x26 + 100);
      if (uVar11 != 0) goto LAB_0128ef28;
      goto LAB_0128fda8;
    case 0x3f4a:
      goto switchD_0128eacc_caseD_3f4a;
    case 0x3f4b:
      uVar11 = *(uint *)(unaff_x26 + 100);
      if (uVar11 != 0) goto LAB_0128ff20;
      goto LAB_0128ffa4;
    case 0x3f4c:
      goto switchD_0128eacc_caseD_3f4c;
    case 0x3f4d:
      iVar19 = iStack000000000000004c;
      if (unaff_w28 != 0) {
        uVar13 = 0x3f48;
        unaff_w28 = unaff_w28 - 1;
        *unaff_x21 = (char)*(undefined4 *)(unaff_x26 + 0x5c);
        unaff_x21 = unaff_x21 + 1;
        goto LAB_0128ef80;
      }
      goto switchD_0128eacc_caseD_3f50;
    case 0x3f4e:
      uVar12 = *(uint *)(unaff_x26 + 0x10);
      if (uVar12 == 0) {
LAB_0128fb00:
        *unaff_x29 = 0x3f4f;
        pbVar18 = unaff_x22;
        goto LAB_0128fb08;
      }
      if (uVar10 < 0x20) {
        do {
          if ((int)unaff_x27 == 0)
          goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
          unaff_x22 = pbVar18 + 1;
          uVar27 = unaff_x25 + 8;
          unaff_x27 = (ulong)((int)unaff_x27 - 1);
          bVar7 = unaff_x25 < 0x18;
          unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
          pbVar18 = unaff_x22;
          unaff_x25 = uVar27;
        } while (bVar7);
        unaff_x25 = uVar27 & 0xffffffff;
        unaff_x29 = in_stack_00000060;
      }
      uVar27 = (ulong)(unaff_w20 - unaff_w28);
      unaff_x19[5] = unaff_x19[5] + uVar27;
      *(ulong *)(unaff_x26 + 0x28) = *(long *)(unaff_x26 + 0x28) + uVar27;
      uVar10 = uVar12 & 4;
      if ((unaff_w20 - unaff_w28 != 0) && (uVar10 != 0)) {
        if (*(int *)(unaff_x26 + 0x18) == 0) {
          lVar9 = FUN_0128e738(*(undefined8 *)(unaff_x26 + 0x20),(long)unaff_x21 - uVar27);
        }
        else {
          lVar9 = FUN_0129514c();
        }
        *(long *)(unaff_x26 + 0x20) = lVar9;
        unaff_x19[0xc] = lVar9;
        uVar12 = *(uint *)(unaff_x26 + 0x10);
        uVar10 = uVar12 & 4;
        param_5 = in_stack_00000050;
      }
      unaff_w20 = unaff_w28;
      if (uVar10 == 0) {
        unaff_x24 = 0;
        unaff_x25 = 0;
        goto LAB_0128fb00;
      }
      uVar10 = ((uint)unaff_x24 & 0xff00ff00) >> 8 | ((uint)unaff_x24 & 0xff00ff) << 8;
      uVar27 = (ulong)(uVar10 >> 0x10 | uVar10 << 0x10);
      if (*(int *)(unaff_x26 + 0x18) != 0) {
        uVar27 = unaff_x24;
      }
      if (uVar27 == *(ulong *)(unaff_x26 + 0x20)) {
        unaff_x24 = 0;
        unaff_x25 = 0;
        goto LAB_0128fb00;
      }
      unaff_x19[6] = (long)"incorrect data check";
      *unaff_x29 = 0x3f51;
      goto LAB_0128eaa8;
    case 0x3f4f:
      uVar12 = *(uint *)(unaff_x26 + 0x10);
LAB_0128fb08:
      uVar10 = (uint)unaff_x25;
      uVar11 = (uint)unaff_x27;
      unaff_x22 = pbVar18;
      if ((uVar12 != 0) && (*(int *)(unaff_x26 + 0x18) != 0)) {
        if (uVar10 < 0x20) {
          do {
            if ((int)unaff_x27 == 0)
            goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
            unaff_x22 = pbVar18 + 1;
            uVar27 = unaff_x25 + 8;
            unaff_x27 = (ulong)((int)unaff_x27 - 1);
            bVar7 = unaff_x25 < 0x18;
            unaff_x24 = ((ulong)*pbVar18 << (unaff_x25 & 0x3f)) + unaff_x24;
            pbVar18 = unaff_x22;
            unaff_x25 = uVar27;
          } while (bVar7);
          unaff_x25 = uVar27 & 0xffffffff;
          unaff_x29 = in_stack_00000060;
        }
        uVar11 = (uint)unaff_x27;
        if (((uVar12 >> 2 & 1) != 0) && (unaff_x24 != *(uint *)(unaff_x26 + 0x28))) {
          pcVar15 = "incorrect length check";
          break;
        }
        unaff_x24 = 0;
        uVar10 = 0;
      }
      *unaff_x29 = 0x3f50;
      iVar19 = 1;
    case 0x3f50:
      goto switchD_0128eacc_caseD_3f50;
    case 0x3f51:
      iVar19 = -3;
      goto switchD_0128eacc_caseD_3f50;
    case 0x3f52:
      goto switchD_0128eacc_caseD_3f52;
    default:
      return -2;
    }
LAB_01290120:
    uVar11 = 0x3f51;
    unaff_x19[6] = (long)pcVar15;
LAB_01290128:
    *unaff_x29 = uVar11;
    goto LAB_0128eaa8;
  }
  goto switchD_0128eacc_caseD_3f50;
LAB_012902dc:
  unaff_x25 = unaff_x25 & 0xffffffff;
  unaff_x29 = in_stack_00000060;
LAB_0129031c:
  uVar11 = 0;
  uVar10 = (uint)unaff_x25;
  unaff_x22 = pbVar18;
  iVar19 = iStack000000000000004c;
  goto switchD_0128eacc_caseD_3f50;
LAB_01290184:
  uVar10 = uVar10 + uVar29 * 8;
  uVar11 = 0;
  unaff_x22 = unaff_x22 + uVar29;
  iVar19 = iStack000000000000004c;
  goto switchD_0128eacc_caseD_3f50;
  while( true ) {
    unaff_x22 = pbVar18 + 1;
    unaff_x27 = (ulong)((int)unaff_x27 - 1);
    bVar7 = 0x17 < unaff_x25;
    uVar27 = unaff_x25 & 0x3f;
    unaff_x25 = unaff_x25 + 8;
    unaff_x24 = ((ulong)*pbVar18 << uVar27) + unaff_x24;
    pbVar18 = unaff_x22;
    if (bVar7) break;
LAB_0128ec14:
    if ((int)unaff_x27 == 0)
    goto System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>;
  }
LAB_0128ec34:
  unaff_x25 = 0;
  uVar10 = ((uint)unaff_x24 & 0xff00ff00) >> 8 | ((uint)unaff_x24 & 0xff00ff) << 8;
  uVar27 = (ulong)(uVar10 >> 0x10 | uVar10 << 0x10);
  unaff_x24 = 0;
  *in_stack_00000058 = uVar27;
  unaff_x19[0xc] = uVar27;
  *in_stack_00000060 = 0x3f3e;
  unaff_x29 = in_stack_00000060;
switchD_0128eacc_caseD_3f3e:
  if (*(int *)(unaff_x26 + 0x14) == 0) {
    unaff_x19[3] = (long)unaff_x21;
    *(uint *)(unaff_x19 + 4) = unaff_w28;
    *unaff_x19 = (long)unaff_x22;
    *(int *)(unaff_x19 + 1) = (int)unaff_x27;
    *(ulong *)(unaff_x26 + 0x50) = unaff_x24;
    *(int *)(unaff_x26 + 0x58) = (int)unaff_x25;
    return 2;
  }
  param_2 = FUN_0128e738(0,0,0);
  param_5 = in_stack_00000050;
  param_1 = in_stack_00000058;
  goto code_r0x0128ec7c;
System_Array__InternalArray__get_Item<TemplateAsset_AttributeOverride>:
  uVar11 = 0;
  uVar10 = (uint)unaff_x25;
  unaff_x22 = pbVar18;
  unaff_x29 = in_stack_00000060;
  iVar19 = iStack000000000000004c;
switchD_0128eacc_caseD_3f50:
  unaff_x19[3] = (long)unaff_x21;
  *(uint *)(unaff_x19 + 4) = unaff_w28;
  *unaff_x19 = (long)unaff_x22;
  *(uint *)(unaff_x19 + 1) = uVar11;
  *(ulong *)(unaff_x26 + 0x50) = unaff_x24;
  *(uint *)(unaff_x26 + 0x58) = uVar10;
  if ((*(int *)(unaff_x26 + 0x3c) != 0) ||
     (((unaff_w20 != unaff_w28 && (*unaff_x29 < 0x3f51)) &&
      ((iStack0000000000000068 != 4 || (*unaff_x29 < 0x3f4e)))))) {
    iVar8 = FUN_01290384();
    if (iVar8 != 0) {
      *unaff_x29 = 0x3f52;
switchD_0128eacc_caseD_3f52:
      return -4;
    }
    uVar11 = *(uint *)(unaff_x19 + 1);
    unaff_w28 = *(uint *)(unaff_x19 + 4);
  }
  uVar10 = unaff_w20 - unaff_w28;
  uVar27 = (ulong)uVar10;
  unaff_x19[2] = unaff_x19[2] + (ulong)(unaff_w23 - uVar11);
  unaff_x19[5] = unaff_x19[5] + uVar27;
  *(ulong *)(unaff_x26 + 0x28) = *(long *)(unaff_x26 + 0x28) + uVar27;
  if ((uVar10 != 0) && ((*(uint *)(unaff_x26 + 0x10) >> 2 & 1) != 0)) {
    if (*(int *)(unaff_x26 + 0x18) == 0) {
      uVar27 = FUN_0128e738(*(undefined8 *)(unaff_x26 + 0x20),unaff_x19[3] - uVar27,uVar27);
    }
    else {
      uVar27 = FUN_0129514c();
    }
    *in_stack_00000058 = uVar27;
    unaff_x19[0xc] = uVar27;
  }
  iVar20 = *(int *)(unaff_x26 + 8);
  iVar8 = 0x100;
  if (iVar20 != 0x3f42 && iVar20 != 0x3f47) {
    iVar8 = 0;
  }
  *(uint *)(unaff_x19 + 0xb) =
       *(int *)(unaff_x26 + 0x58) + (uint)(*(int *)(unaff_x26 + 0xc) != 0) * 0x40 +
       (uint)(iVar20 == 0x3f3f) * 0x80 + iVar8;
  if ((uVar10 == 0 && unaff_w23 - uVar11 == 0 || iStack0000000000000068 == 4) && iVar19 == 0) {
    return -5;
  }
  return iVar19;
}


