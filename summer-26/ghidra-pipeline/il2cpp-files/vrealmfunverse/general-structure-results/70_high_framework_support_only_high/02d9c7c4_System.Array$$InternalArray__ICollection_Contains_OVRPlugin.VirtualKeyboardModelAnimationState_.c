/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 02d9c7c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_VirtualKeyboardModelAnimationState>
               (float param_1,float param_2,float param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x19;
  long lVar14;
  long unaff_x21;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  long in_stack_00000048;
  
  puVar3 = PTR_DAT_06319c00;
  puVar2 = PTR_DAT_06319bf8;
  plVar15 = *(long **)(unaff_x21 + 0xcd0);
  fStack000000000000001c = fStack000000000000001c + param_2;
  fStack0000000000000018 = fStack0000000000000018 + param_3;
  FUN_05c9a10c(param_4,0);
  fVar19 = (float)FUN_05c7bd38(0);
  lVar14 = unaff_x19[0x1d];
  uVar8 = FUN_05c8db90((int)unaff_x19[6],0);
  if (*(int *)(*plVar15 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*plVar15);
  }
  FUN_05d16f5c(unaff_s15 + param_1,fStack000000000000001c,fStack0000000000000018,
               unaff_s8 - unaff_s14 * fVar19,in_stack_00000008._4_4_ - unaff_s14 * param_2,
               unaff_s9 - unaff_s14 * param_3,in_stack_00000010,lVar14,uVar8,1,0);
  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_037a5cd0(lVar14,*(undefined8 *)puVar3);
  puVar7 = PTR_DAT_06319c48;
  puVar6 = PTR_DAT_06319c38;
  puVar5 = PTR_DAT_06319c20;
  puVar4 = PTR_DAT_06319c10;
  puVar3 = PTR_DAT_06319bd0;
  puVar2 = PTR_DAT_06312520;
  lVar12 = unaff_x19[0x1d];
  if (lVar12 != 0) {
    lVar18 = 4;
    do {
      uVar17 = lVar18 - 4;
      if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar17) {
        lVar12 = unaff_x19[0x12];
        if (lVar12 != 0) {
          iVar9 = *(int *)(lVar12 + 0x18);
          if (-1 < iVar9 + -1) goto LAB_02d9c9fc;
          if ((int)unaff_x19[7] <= *(int *)(lVar12 + 0x18)) goto LAB_02d9cb24;
          if (lVar14 != 0) goto LAB_02d9ca8c;
        }
        break;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_02d9ccc8;
      uVar16 = *(undefined8 *)(lVar12 + lVar18 * 8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05c8c45c(uVar16,0,0);
      if ((uVar10 & 1) != 0) {
        lVar12 = unaff_x19[0x1d];
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_02d9ccc8;
        uVar17 = FUN_03162688(*(undefined8 *)(lVar12 + lVar18 * 8),&stack0x00000048,
                              *(undefined8 *)puVar4);
        if ((uVar17 & 1) != 0) {
          if (in_stack_00000048 == 0) break;
          uVar16 = FUN_05c89410(in_stack_00000048,0);
          uVar11 = FUN_05c89410();
          lVar12 = *(long *)puVar2;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(lVar12);
          }
          uVar17 = FUN_05c8c45c(uVar16,uVar11,0);
          if ((uVar17 & 1) != 0) {
            if (lVar14 == 0) break;
            lVar12 = *(long *)(lVar14 + 0x10);
            lVar13 = *(long *)puVar6;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar12 == 0) break;
            uVar1 = *(uint *)(lVar14 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar1 + 1;
              *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000048;
              thunk_FUN_02bb0e9c();
            }
            else {
              FUN_037a6538(lVar14,in_stack_00000048,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      lVar12 = unaff_x19[0x1d];
      lVar18 = lVar18 + 1;
    } while (lVar12 != 0);
  }
  goto LAB_02d9cb6c;
  while( true ) {
    iVar9 = iVar9 + -1;
    uVar16 = FUN_037a6268(unaff_x19[0x12],iVar9,*(undefined8 *)puVar3);
    if (lVar14 == 0) goto LAB_02d9cb6c;
    uVar17 = FUN_037a68d4(lVar14,uVar16,*(undefined8 *)puVar7);
    if ((uVar17 & 1) == 0) {
      if (unaff_x19[0x12] == 0) goto LAB_02d9cb6c;
      FUN_037a6268(unaff_x19[0x12],iVar9,*(undefined8 *)puVar3);
      (**(code **)(*unaff_x19 + 0x198))();
    }
    if (iVar9 < 1) break;
LAB_02d9c9fc:
    if (unaff_x19[0x12] == 0) goto LAB_02d9cb6c;
  }
  if (unaff_x19[0x12] != 0) {
    if (*(int *)(unaff_x19[0x12] + 0x18) < (int)unaff_x19[7]) {
LAB_02d9ca8c:
      if (0 < *(int *)(lVar14 + 0x18)) {
        iVar9 = 0;
        do {
          lVar12 = unaff_x19[0x12];
          uVar16 = FUN_037a6268(lVar14,iVar9,*(undefined8 *)puVar3);
          if (lVar12 == 0) goto LAB_02d9cb6c;
          uVar17 = FUN_037a68d4(lVar12,uVar16,*(undefined8 *)puVar7);
          if ((uVar17 & 1) == 0) {
            plVar15 = (long *)FUN_037a6268(lVar14,iVar9,*(undefined8 *)puVar3);
            if (plVar15 == (long *)0x0) goto LAB_02d9cb6c;
            uVar17 = (**(code **)(*plVar15 + 0x198))();
            if ((uVar17 & 1) != 0) {
              FUN_037a6268(lVar14,iVar9,*(undefined8 *)puVar3);
              (**(code **)(*unaff_x19 + 0x188))();
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(lVar14 + 0x18));
      }
    }
LAB_02d9cb24:
    lVar12 = unaff_x19[0x1d];
    if (lVar12 != 0) {
      uVar17 = 0;
      lVar18 = 0x20;
      do {
        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar17) {
          if (unaff_x19[0x14] != 0) {
            iVar9 = FUN_0451be40(unaff_x19[0x14],*(undefined8 *)puVar5);
            if (iVar9 < 1) goto LAB_02d9cc70;
            if (unaff_x19[0x14] != 0) {
              uVar8 = FUN_0451be40(unaff_x19[0x14],*(undefined8 *)puVar5);
              lVar12 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06319c50,uVar8);
              if (((unaff_x19[0x14] != 0) &&
                  (lVar18 = FUN_0451be50(unaff_x19[0x14],*(undefined8 *)PTR_DAT_06319c28),
                  lVar18 != 0)) &&
                 (FUN_035f0474(lVar18,lVar12,0,*(undefined8 *)PTR_DAT_06319c30),
                 puVar2 = PTR_DAT_06319c18, lVar12 != 0)) {
                if ((int)*(ulong *)(lVar12 + 0x18) < 1) goto LAB_02d9cc70;
                uVar17 = 0;
                uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                goto LAB_02d9cc10;
              }
            }
          }
          break;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_02d9ccc8;
        *(undefined8 *)(lVar12 + uVar17 * 8 + 0x20) = 0;
        thunk_FUN_02bb0e9c(lVar12 + lVar18,0);
        lVar12 = unaff_x19[0x1d];
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 8;
      } while (lVar12 != 0);
    }
  }
  goto LAB_02d9cb6c;
  while( true ) {
    uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
    uVar17 = uVar17 + 1;
    if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar17) break;
LAB_02d9cc10:
    if (uVar10 <= uVar17) {
LAB_02d9ccc8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (unaff_x19[0x12] == 0) goto LAB_02d9cb6c;
    uVar16 = *(undefined8 *)(lVar12 + 0x20 + uVar17 * 8);
    uVar10 = FUN_037a68d4(unaff_x19[0x12],uVar16,*(undefined8 *)puVar7);
    if ((uVar10 & 1) == 0) {
      if (lVar14 == 0) goto LAB_02d9cb6c;
      uVar10 = FUN_037a68d4(lVar14,uVar16,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) {
        if (unaff_x19[0x14] == 0) goto LAB_02d9cb6c;
        FUN_0451d670(unaff_x19[0x14],uVar16,*(undefined8 *)puVar2);
      }
    }
  }
LAB_02d9cc70:
  if (lVar14 != 0) {
    iVar9 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar9) {
      FUN_04d9e084(*(undefined8 *)(lVar14 + 0x10),0,iVar9,0);
    }
    return;
  }
LAB_02d9cb6c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


