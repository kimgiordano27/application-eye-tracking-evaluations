/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFABRIK$$OnPostSolve
ENTRY_POINT: 01cf2e84
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void RootMotion_FinalIK_IKSolverFABRIK__OnPostSolve(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  char in_NG;
  char in_OV;
  undefined1 uVar3;
  long *plVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint in_w9;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  uint uVar12;
  byte *in_x10;
  byte *in_x12;
  byte *pbVar13;
  byte in_w13;
  undefined1 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  byte *unaff_x22;
  long unaff_x23;
  void *pvVar14;
  int iVar15;
  int unaff_w24;
  long *plVar16;
  byte *unaff_x25;
  byte *unaff_x26;
  size_t __n;
  byte *unaff_x27;
  void *__dest;
  long unaff_x29;
  long in_stack_00000008;
  void *in_stack_00000010;
  undefined8 in_stack_00000018;
  byte *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 *in_stack_00000030;
  
  while ((*in_x12 = in_w13, in_NG == in_OV &&
         (bVar1 = unaff_x26 < param_1, param_1 = in_x10, iVar15 = unaff_w24, bVar1))) {
LAB_01cf2e64:
    in_x12 = (byte *)*unaff_x21;
    in_x10 = param_1 + -1;
    in_w13 = *param_1;
    unaff_w24 = iVar15 + -1;
    in_w9 = (uint)(unaff_w24 != 0 && 0 < iVar15);
    in_OV = SBORROW4(iVar15,2);
    in_NG = iVar15 + -2 < 0;
    *unaff_x21 = (long)(in_x12 + 1);
  }
  pbVar13 = in_x10 + 1;
LAB_01cf2e9c:
  if (in_w9 != 0) goto LAB_01cf2f64;
LAB_01cf2ea0:
  uVar3 = 0;
  param_1 = pbVar13;
joined_r0x01cf2ea8:
  if (0 < unaff_w24) {
    iVar15 = unaff_w24 + 1;
    do {
      puVar8 = (undefined1 *)*unaff_x21;
      iVar15 = iVar15 + -1;
      *unaff_x21 = (long)(puVar8 + 1);
      *puVar8 = uVar3;
    } while (1 < iVar15);
  }
  puVar8 = (undefined1 *)*unaff_x21;
  plVar16 = *(long **)(unaff_x29 + -0x30);
  *unaff_x21 = (long)(puVar8 + 1);
  *puVar8 = (char)*(undefined4 *)(unaff_x29 + -0x34);
  if (param_1 == unaff_x26) goto LAB_01cf2ef8;
LAB_01cf2fc0:
  if ((*unaff_x22 & 1) == 0) {
    pbVar13 = in_stack_00000020;
    if (1 < *unaff_x22) {
LAB_01cf2fe4:
      uVar5 = (uint)*pbVar13;
      goto LAB_01cf2ff0;
    }
  }
  else if (*(long *)(unaff_x22 + 8) != 0) {
    pbVar13 = *(byte **)(unaff_x22 + 0x10);
    goto LAB_01cf2fe4;
  }
  uVar5 = 0xffffffff;
LAB_01cf2ff0:
  uVar11 = 0;
  uVar12 = 0;
  do {
    if (uVar12 == uVar5) {
      puVar8 = (undefined1 *)*unaff_x21;
      uVar12 = (int)uVar11 + 1;
      uVar11 = (ulong)uVar12;
      *unaff_x21 = (long)(puVar8 + 1);
      *puVar8 = unaff_w19;
      if ((*unaff_x22 & 1) == 0) {
        if (uVar12 < *unaff_x22 >> 1) {
          bVar2 = unaff_x22[uVar11 + 1];
joined_r0x01cf3078:
          uVar5 = (uint)bVar2;
          if (uVar5 == 0xff) {
            uVar12 = 0;
            uVar5 = 0xffffffff;
            goto RootMotion_FinalIK_IKSolverFABRIK__OnInitiate;
          }
        }
      }
      else if (uVar11 < *(ulong *)(unaff_x22 + 8)) {
        bVar2 = *(byte *)(*(long *)(unaff_x22 + 0x10) + uVar11);
        goto joined_r0x01cf3078;
      }
      uVar12 = 0;
    }
RootMotion_FinalIK_IKSolverFABRIK__OnInitiate:
    param_1 = param_1 + -1;
    bVar2 = *param_1;
    pbVar13 = (byte *)*unaff_x21;
    uVar12 = uVar12 + 1;
    *unaff_x21 = (long)(pbVar13 + 1);
    *pbVar13 = bVar2;
  } while (unaff_x26 != param_1);
RootMotion_FinalIK_IKSolverFABRIK__GetIKPosition:
  if (unaff_x27 == (byte *)*unaff_x21) {
    pbVar13 = *(byte **)(unaff_x29 + -0x18);
  }
  else {
    pbVar13 = *(byte **)(unaff_x29 + -0x18);
    pbVar6 = (byte *)*unaff_x21 + -1;
    if (unaff_x27 < pbVar6) {
      do {
        pbVar10 = unaff_x27 + 1;
        bVar2 = *unaff_x27;
        *unaff_x27 = *pbVar6;
        pbVar7 = pbVar6 + -1;
        *pbVar6 = bVar2;
        pbVar6 = pbVar7;
        unaff_x27 = pbVar10;
      } while (pbVar10 < pbVar7);
    }
  }
  do {
    unaff_x23 = unaff_x23 + 1;
    if (unaff_x23 == 4) {
      bVar2 = *pbVar13;
      if ((bVar2 & 1) == 0) {
        if (bVar2 < 4) goto LAB_01cf30f0;
        uVar11 = (ulong)(bVar2 >> 1);
      }
      else {
        uVar11 = *(ulong *)(pbVar13 + 8);
        if (uVar11 < 2) goto LAB_01cf30f0;
        in_stack_00000030 = *(undefined1 **)(pbVar13 + 0x10);
      }
      pvVar14 = (void *)*unaff_x21;
      memmove(pvVar14,in_stack_00000030 + 1,uVar11 - 1);
      plVar16 = *(long **)(unaff_x29 + -0x30);
      *unaff_x21 = (long)pvVar14 + (uVar11 - 1);
LAB_01cf30f0:
      uVar5 = *(uint *)(unaff_x29 + -0x1c) & 0xb0;
      if (uVar5 != 0x10) {
        if (uVar5 == 0x20) {
          in_stack_00000008 = *unaff_x21;
        }
        *plVar16 = in_stack_00000008;
      }
      return;
    }
    switch(*(undefined1 *)(unaff_x20 + unaff_x23)) {
    case 0:
      *plVar16 = *unaff_x21;
      break;
    case 1:
      plVar4 = *(long **)(unaff_x29 + -8);
      *plVar16 = *unaff_x21;
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      puVar8 = (undefined1 *)*unaff_x21;
      *unaff_x21 = (long)(puVar8 + 1);
      *puVar8 = uVar3;
      break;
    case 2:
      pbVar6 = *(byte **)(unaff_x29 + -0x28);
      bVar2 = *pbVar6;
      if ((bVar2 & 1) == 0) {
        if (((*(uint *)(unaff_x29 + -0x1c) >> 9 & 1) == 0) || (bVar2 < 2)) break;
        __n = (size_t)(bVar2 >> 1);
        pvVar14 = in_stack_00000010;
      }
      else {
        if (((*(uint *)(unaff_x29 + -0x1c) >> 9 & 1) == 0) ||
           (__n = *(size_t *)(pbVar6 + 8), __n == 0)) break;
        pvVar14 = *(void **)(pbVar6 + 0x10);
      }
      __dest = (void *)*unaff_x21;
      memmove(__dest,pvVar14,__n);
      pbVar13 = *(byte **)(unaff_x29 + -0x18);
      *unaff_x21 = (long)__dest + __n;
      break;
    case 3:
      if ((*pbVar13 & 1) == 0) {
        puVar8 = in_stack_00000030;
        if (*pbVar13 < 2) break;
      }
      else {
        if (*(long *)(pbVar13 + 8) == 0) break;
        puVar8 = *(undefined1 **)(pbVar13 + 0x10);
      }
      puVar9 = (undefined1 *)*unaff_x21;
      uVar3 = *puVar8;
      *unaff_x21 = (long)(puVar9 + 1);
      *puVar9 = uVar3;
      break;
    case 4:
      goto RootMotion_FinalIK_IKSolverFABRIK__BackwardReach;
    }
  } while( true );
RootMotion_FinalIK_IKSolverFABRIK__BackwardReach:
  if ((*(uint *)(unaff_x29 + -0x20) & 1) != 0) {
    unaff_x26 = unaff_x26 + 1;
  }
  param_1 = unaff_x26;
  if (unaff_x26 < unaff_x25) {
    pbVar13 = unaff_x26;
    do {
      param_1 = pbVar13;
      if (((char)*pbVar13 < '\0') ||
         (((uint)*(undefined8 *)(*(long *)(*(long *)(unaff_x29 + -8) + 0x10) + (ulong)*pbVar13 * 8)
           >> 6 & 1) == 0)) break;
      pbVar13 = pbVar13 + 1;
      param_1 = unaff_x25;
    } while (unaff_x25 != pbVar13);
  }
  unaff_x27 = (byte *)*unaff_x21;
  if (*(int *)(unaff_x29 + -0xc) < 1) {
    if (param_1 != unaff_x26) goto LAB_01cf2fc0;
LAB_01cf2ef8:
    uVar3 = (**(code **)(**(long **)(unaff_x29 + -8) + 0x38))(*(long **)(unaff_x29 + -8),0x30);
    puVar8 = (undefined1 *)*unaff_x21;
    *unaff_x21 = (long)(puVar8 + 1);
    *puVar8 = uVar3;
    goto RootMotion_FinalIK_IKSolverFABRIK__GetIKPosition;
  }
  if (param_1 <= unaff_x26) {
    pbVar13 = param_1;
    unaff_w24 = *(int *)(unaff_x29 + -0xc);
    goto LAB_01cf2f64;
  }
  pbVar13 = param_1 + -1;
  bVar2 = *pbVar13;
  *unaff_x21 = (long)(unaff_x27 + 1);
  iVar15 = *(int *)(unaff_x29 + -0xc);
  *unaff_x27 = bVar2;
  unaff_w24 = in_stack_00000028._4_4_;
  if (1 < iVar15) {
    in_w9 = in_stack_00000018._4_4_;
    if (pbVar13 <= unaff_x26) goto LAB_01cf2e9c;
    param_1 = param_1 + -2;
    iVar15 = in_stack_00000028._4_4_;
    goto LAB_01cf2e64;
  }
  if (in_stack_00000018._4_4_ == 0) goto LAB_01cf2ea0;
LAB_01cf2f64:
  uVar3 = (**(code **)(**(long **)(unaff_x29 + -8) + 0x38))(*(long **)(unaff_x29 + -8),0x30);
  param_1 = pbVar13;
  goto joined_r0x01cf2ea8;
}


