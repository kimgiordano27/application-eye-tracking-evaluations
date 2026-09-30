/*
FUNCTION_NAME: Autohand.HandAnimator$$get_closeHandPose
ENTRY_POINT: 03637954
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void Autohand_HandAnimator__get_closeHandPose
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  float *pfVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x24;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x27;
  ulong unaff_x29;
  float fVar12;
  float fVar13;
  ulong uVar14;
  double dVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  float unaff_s15;
  long in_stack_00000000;
  float fStack0000000000000010;
  float fStack0000000000000014;
  double in_stack_00000018;
  
  while( true ) {
    unaff_x29 = unaff_x29 + 1;
    lVar4 = (*param_1)();
    if (lVar4 == 0) break;
    if ((long)*(int *)(lVar4 + 0x18) <= (long)unaff_x29) {
      if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_079ca0b0(DAT_084465c0,0);
      return;
    }
    pcVar7 = *(code **)(unaff_x24 + 0x558);
    if (pcVar7 == (code *)0x0) {
      pcVar7 = (code *)FUN_033d1b68();
      *(code **)(unaff_x24 + 0x558) = pcVar7;
    }
    lVar4 = (*pcVar7)();
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x29) goto LAB_036380ac;
    uVar10 = *(undefined8 *)(lVar4 + unaff_x29 * 8 + 0x20);
    if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x27 + 0x7d8));
    }
    uVar3 = FUN_07a119fc(uVar10);
    fVar18 = (float)param_4;
    if ((uVar3 & 1) != 0) {
      if (DAT_086d7cc6 == '\0') {
        FUN_0335b6c8(&DAT_083d2c90,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc6 = '\x01';
      }
      pfVar8 = *(float **)(DAT_083d2c90 + 0xb8);
      fStack0000000000000014 = *pfVar8;
      uVar14 = (ulong)(uint)fStack0000000000000014;
      fStack0000000000000010 = pfVar8[1];
      uVar17 = (ulong)(uint)fStack0000000000000010;
      fVar22 = pfVar8[2];
      uVar3 = (ulong)(uint)fVar22;
      if (DAT_086ee728 == (code *)0x0) {
        DAT_086ee728 = (code *)FUN_033d1b68("UnityEngine.Mesh::get_vertexCount()");
      }
      fStack0000000000000014 = fStack0000000000000014 * 0.5;
      fStack0000000000000010 = fStack0000000000000010 * 0.5;
      fVar22 = fVar22 * 0.5;
      iVar2 = (*DAT_086ee728)();
      fVar13 = DAT_012edd80;
      if (iVar2 < 1) goto LAB_03637c6c;
      if (unaff_x19 != 0) {
        lVar4 = 0;
        uVar11 = 0;
        bVar1 = false;
        piVar9 = (int *)(unaff_x19 + 0x3c);
        uVar23 = uVar3;
        uVar24 = uVar17;
        uVar25 = uVar14;
        goto LAB_03637a5c;
      }
      break;
    }
    param_1 = *(code **)(unaff_x24 + 0x558);
    if (param_1 == (code *)0x0) {
      param_1 = (code *)FUN_033d1b68();
      *(code **)(unaff_x24 + 0x558) = param_1;
    }
  }
  goto LAB_036380a8;
  while( true ) {
    if (DAT_086ee728 == (code *)0x0) {
      DAT_086ee728 = (code *)FUN_033d1b68("UnityEngine.Mesh::get_vertexCount()");
    }
    uVar11 = uVar11 + 1;
    iVar2 = (*DAT_086ee728)();
    piVar9 = piVar9 + 8;
    lVar4 = lVar4 + 0xc;
    uVar23 = uVar3;
    uVar24 = uVar17;
    uVar25 = uVar14;
    if ((long)iVar2 <= (long)uVar11) break;
LAB_03637a5c:
    if (*(uint *)(unaff_x19 + 0x18) <= uVar11) {
LAB_036380ac:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    fVar18 = (float)piVar9[-7];
    iVar2 = (int)unaff_x29;
    if (((((unaff_s15 < fVar18) && (piVar9[-3] == iVar2)) ||
         ((piVar9[-2] == iVar2 && (fVar18 = (float)piVar9[-6], unaff_s15 < fVar18)))) ||
        ((unaff_s15 < (float)piVar9[-5] && (piVar9[-1] == iVar2)))) ||
       ((uVar3 = uVar23, uVar17 = uVar24, uVar14 = uVar25, unaff_s15 < (float)piVar9[-4] &&
        (*piVar9 == iVar2)))) {
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      lVar5 = (*DAT_086ef188)();
      lVar6 = FUN_079e8100();
      if (lVar6 == 0) goto LAB_036380a8;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_036380ac;
      if (lVar5 == 0) goto LAB_036380a8;
      lVar6 = lVar6 + lVar4;
      uVar17 = (ulong)*(uint *)(lVar6 + 0x24);
      uVar3 = (ulong)*(uint *)(lVar6 + 0x28);
      uVar14 = FUN_07a17248(*(undefined4 *)(lVar6 + 0x20),lVar5,0);
      if (bVar1) {
        fVar18 = (float)uVar23 - fVar22;
        fVar22 = fVar22 + (float)uVar23;
        fVar12 = (float)uVar25 - fStack0000000000000014;
        fVar16 = (float)uVar24 - fStack0000000000000010;
        fVar21 = (float)uVar14;
        if (fVar21 <= fVar12) {
          fVar12 = fVar21;
        }
        fVar19 = (float)uVar17;
        fStack0000000000000014 = fStack0000000000000014 + (float)uVar25;
        if (fVar19 <= fVar16) {
          fVar16 = fVar19;
        }
        fVar20 = (float)uVar3;
        fStack0000000000000010 = fStack0000000000000010 + (float)uVar24;
        if (fVar20 <= fVar18) {
          fVar18 = fVar20;
        }
        if (fStack0000000000000014 <= fVar21) {
          fStack0000000000000014 = fVar21;
        }
        if (fStack0000000000000010 <= fVar19) {
          fStack0000000000000010 = fVar19;
        }
        if (fVar22 <= fVar20) {
          fVar22 = fVar20;
        }
        fStack0000000000000014 = (fStack0000000000000014 - fVar12) * 0.5;
        fStack0000000000000010 = (fStack0000000000000010 - fVar16) * 0.5;
        fVar22 = (fVar22 - fVar18) * 0.5;
        uVar14 = (ulong)(uint)(fVar12 + fStack0000000000000014);
        uVar17 = (ulong)(uint)(fVar16 + fStack0000000000000010);
        uVar3 = (ulong)(uint)(fVar18 + fVar22);
        bVar1 = true;
      }
      else {
        if (DAT_086d7c54 == '\0') {
          FUN_0335b6c8(&DAT_083d2c90,1);
          DataMemoryBarrier(2,3);
          DAT_086d7c54 = '\x01';
        }
        bVar1 = true;
        lVar6 = *(long *)(DAT_083d2c90 + 0xb8);
        fVar18 = *(float *)(lVar6 + 0x14) * fVar13;
        fStack0000000000000014 = *(float *)(lVar6 + 0xc) * fVar13 * 0.5;
        fStack0000000000000010 = *(float *)(lVar6 + 0x10) * fVar13 * 0.5;
        fVar22 = fVar18 * 0.5;
      }
    }
  }
LAB_03637c6c:
  if (unaff_x20 == 0) goto LAB_036380a8;
  fVar12 = *(float *)(unaff_x21 + 0x20);
  fVar13 = (float)FUN_07a1bb0c();
  FUN_07a1bb0c();
  if (fVar13 <= fVar18) {
    fVar13 = fVar18;
  }
  fVar18 = fStack0000000000000014 + fStack0000000000000014;
  if (fStack0000000000000014 + fStack0000000000000014 <= fVar22 + fVar22) {
    fVar18 = fVar22 + fVar22;
  }
  fVar18 = fVar18 * 0.5 * 100.0;
  dVar15 = modf((double)fVar18,&stack0x00000018);
  if (0.0 <= fVar18) {
    if (dVar15 == 0.5) {
      fVar18 = 1.0;
      goto LAB_03637d08;
    }
    fVar22 = (float)(int)(fVar18 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar18 = -1.0;
LAB_03637d08:
    fVar22 = (float)in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      fVar22 = (float)in_stack_00000018 + fVar18;
    }
  }
  else {
    fVar22 = (float)(int)(fVar18 + -0.5);
  }
  if (fVar12 * fVar13 < fVar22 / 100.0) {
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079ca678(DAT_08442d28,0);
    return;
  }
  fVar18 = (fStack0000000000000010 + fStack0000000000000010) * 100.0;
  dVar15 = modf((double)fVar18,&stack0x00000018);
  if (0.0 <= fVar18) {
    if (dVar15 == 0.5) {
      fVar18 = 1.0;
      goto LAB_03637df4;
    }
    fVar13 = (float)(int)(fVar18 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar18 = -1.0;
LAB_03637df4:
    fVar13 = (float)in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      fVar13 = (float)in_stack_00000018 + fVar18;
    }
  }
  else {
    fVar13 = (float)(int)(fVar18 + -0.5);
  }
  if (in_stack_00000000 == 0) {
LAB_036380a8:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (DAT_086f20c8 == (code *)0x0) {
    DAT_086f20c8 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_height(System.Single)");
  }
  (*DAT_086f20c8)(fVar13 / 100.0,in_stack_00000000);
  if (DAT_086f20b8 == (code *)0x0) {
    DAT_086f20b8 = (code *)FUN_033d1b68("UnityEngine.CapsuleCollider::set_radius(System.Single)");
  }
  (*DAT_086f20b8)(fVar22 / 100.0,in_stack_00000000);
  fVar18 = (float)FUN_07a1b4e0(uVar14,uVar17,uVar3);
  fVar18 = fVar18 * 100.0;
  dVar15 = modf((double)fVar18,&stack0x00000018);
  if (0.0 <= fVar18) {
    if (dVar15 == 0.5) {
      fVar18 = 1.0;
      goto LAB_03637ef8;
    }
    fVar22 = (float)(int)(fVar18 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar18 = -1.0;
LAB_03637ef8:
    fVar22 = (float)in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      fVar22 = (float)in_stack_00000018 + fVar18;
    }
  }
  else {
    fVar22 = (float)(int)(fVar18 + -0.5);
  }
  uVar11 = uVar17;
  FUN_07a1b4e0(uVar14,uVar17,uVar3);
  fVar18 = (float)uVar11 * 100.0;
  dVar15 = modf((double)fVar18,&stack0x00000018);
  if (0.0 <= fVar18) {
    if (dVar15 == 0.5) {
      fVar18 = 1.0;
      goto LAB_03637f90;
    }
    fVar13 = (float)(int)(fVar18 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar18 = -1.0;
LAB_03637f90:
    fVar13 = (float)in_stack_00000018;
    if (((long)in_stack_00000018 & 1U) != 0) {
      fVar13 = (float)in_stack_00000018 + fVar18;
    }
  }
  else {
    fVar13 = (float)(int)(fVar18 + -0.5);
  }
  FUN_07a1b4e0(uVar14,uVar17);
  fVar18 = (float)uVar3 * 100.0;
  dVar15 = modf((double)fVar18,&stack0x00000018);
  if (0.0 <= fVar18) {
    if (dVar15 != 0.5) {
      fVar18 = (float)(int)(fVar18 + 0.5);
      goto LAB_0363805c;
    }
    fVar12 = 1.0;
  }
  else {
    if (dVar15 != -0.5) {
      fVar18 = (float)(int)(fVar18 + -0.5);
      goto LAB_0363805c;
    }
    fVar12 = -1.0;
  }
  fVar18 = (float)in_stack_00000018;
  if (((long)in_stack_00000018 & 1U) != 0) {
    fVar18 = (float)in_stack_00000018 + fVar12;
  }
LAB_0363805c:
  FUN_07a873d8(fVar22 / 100.0,fVar13 / 100.0,fVar18 / 100.0,in_stack_00000000,0);
  return;
}


