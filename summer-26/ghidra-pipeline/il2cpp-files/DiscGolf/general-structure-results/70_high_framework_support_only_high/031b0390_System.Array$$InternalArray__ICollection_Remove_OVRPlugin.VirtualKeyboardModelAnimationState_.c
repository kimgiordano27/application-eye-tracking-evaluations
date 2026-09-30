/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 031b0390
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_VirtualKeyboardModelAnimationState>
               (undefined1 param_1 [16],ulong param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  char in_NG;
  char in_OV;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  long unaff_x19;
  long lVar13;
  long unaff_x23;
  long *unaff_x24;
  int iVar14;
  long *unaff_x25;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  long in_stack_00000020;
  int iStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int iStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_000000a0;
  long *in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  long in_stack_000000b8;
  
  do {
    puVar6 = PTR_DAT_069fd088;
    fStack00000000000000b0 = (float)param_2;
    if (in_NG == in_OV) {
      return;
    }
    if (unaff_w29 == 0) {
      fVar16 = (float)FUN_0409f2f4(in_stack_000000b8,1,*(undefined8 *)PTR_DAT_069fd088);
      fVar22 = param_3;
      fVar26 = fStack00000000000000b0;
      fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,0,*(undefined8 *)puVar6);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(unaff_x25);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar16 = fVar16 - fVar15;
      fStack00000000000000b0 = fStack00000000000000b0 - fVar26;
      fVar22 = param_3 - fVar22;
      fVar26 = SQRT(fVar22 * fVar22 +
                    fVar16 * fVar16 + fStack00000000000000b0 * fStack00000000000000b0);
      if (in_stack_00000050._4_4_ < fVar26) goto LAB_031af758;
LAB_031af5cc:
      if (DAT_06db4c71 == '\0') {
        FUN_02d965b8(PTR_DAT_069fb978);
        DAT_06db4c71 = '\x01';
      }
      pfVar11 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
      fVar15 = pfVar11[2];
      fVar23 = pfVar11[1];
      fVar26 = *pfVar11;
    }
    else {
      iVar14 = unaff_w29 + -1;
      fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,iVar14,*(undefined8 *)PTR_DAT_069fd088);
      fVar22 = param_3;
      fVar26 = fStack00000000000000b0;
      fVar16 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)puVar6);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(unaff_x25);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar6 = PTR_DAT_069fd088;
      fVar22 = param_3 - fVar22;
      fStack00000000000000b0 =
           fStack0000000000000058 +
           SQRT(fVar22 * fVar22 +
                (fVar15 - fVar16) * (fVar15 - fVar16) +
                (fStack00000000000000b0 - fVar26) * (fStack00000000000000b0 - fVar26));
      fStack0000000000000058 = fStack00000000000000b0;
      if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
        if (in_stack_00000020 == 0) {
LAB_031b0818:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar15 = fStack0000000000000018;
        fVar23 = fStack0000000000000014;
        fVar26 = fStack0000000000000010;
        if (*(int *)(in_stack_00000020 + 0x18) == 0) {
          fVar16 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
          fVar26 = fVar22;
          fVar15 = fStack00000000000000b0;
          fVar23 = (float)FUN_0409f2f4(in_stack_000000b8,iVar14,*(undefined8 *)puVar6);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(unaff_x25);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar16 = fVar16 - fVar23;
          fStack00000000000000b0 = fStack00000000000000b0 - fVar15;
          fVar22 = fVar22 - fVar26;
          fVar26 = fVar22 * fVar22 +
                   fVar16 * fVar16 + fStack00000000000000b0 * fStack00000000000000b0;
          goto LAB_031af744;
        }
      }
      else {
        fVar16 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29 + 1,*(undefined8 *)PTR_DAT_069fd088
                                    );
        fVar26 = fVar22;
        fVar15 = fStack00000000000000b0;
        fVar23 = (float)FUN_0409f2f4(in_stack_000000b8,iVar14,*(undefined8 *)puVar6);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(unaff_x25);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar16 = fVar16 - fVar23;
        fStack00000000000000b0 = fStack00000000000000b0 - fVar15;
        fVar22 = fVar22 - fVar26;
        fVar26 = fVar22 * fVar22 + fVar16 * fVar16 + fStack00000000000000b0 * fStack00000000000000b0
        ;
LAB_031af744:
        fVar26 = SQRT(fVar26);
        if (fVar26 <= in_stack_00000050._4_4_) goto LAB_031af5cc;
LAB_031af758:
        fVar15 = fVar22 / fVar26;
        fVar23 = fStack00000000000000b0 / fVar26;
        fVar26 = fVar16 / fVar26;
      }
    }
    fStack00000000000000b4 =
         (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
    param_3 = fVar22;
    if ((unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) && (*(int *)(unaff_x23 + 0x120) == 2)
       ) {
      param_3 = fVar15 * fStack000000000000001c;
      fStack00000000000000b4 = fVar26 * fStack000000000000001c + fStack00000000000000b4;
      fVar22 = param_3 + fVar22;
      fStack00000000000000b0 = fVar23 * fStack000000000000001c + fStack00000000000000b0;
    }
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(unaff_x25);
      DAT_06db4c75 = '\x01';
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    param_2 = (ulong)(uint)in_stack_00000050._4_4_;
    fVar16 = SQRT(fVar15 * fVar15 + fVar26 * fVar26);
    if (fVar16 <= in_stack_00000050._4_4_) {
      if (DAT_06db4c71 == '\0') {
        FUN_02d965b8(PTR_DAT_069fb978);
        DAT_06db4c71 = '\x01';
      }
      pfVar11 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
      fVar15 = *pfVar11;
      fVar16 = pfVar11[1];
      fVar26 = pfVar11[2];
    }
    else {
      fVar26 = fVar26 / fVar16;
      fVar15 = -fVar15 / fVar16;
      param_2 = 0;
      fVar16 = 0.0 / fVar16;
    }
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      iVar14 = 0;
      fVar17 = fStack0000000000000058 / fStack000000000000005c;
      fVar23 = 1.0;
      if (fVar17 <= 1.0) {
        fVar23 = fVar17;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar17) {
        fVar19 = fVar23;
      }
      fVar23 = fVar17;
      if (fStack0000000000000044 != 1.0) {
        fVar23 = 1.0;
      }
      iVar4 = unaff_w29 * iStack000000000000003c;
      iVar5 = (unaff_w29 + 1) * iStack000000000000003c;
      fVar25 = fVar19 * fVar19 * 3.0 - fVar19 * fVar19 * (fVar19 + fVar19);
      fVar23 = fVar17 * fVar23;
      if (iStack0000000000000028 == 0) {
        fVar23 = fVar25 + (1.0 - fVar25) * 0.0;
      }
      fVar17 = 1.0;
      if (fVar23 <= 1.0) {
        fVar17 = fVar23;
      }
      fVar25 = 0.0;
      if (0.0 <= fVar23) {
        fVar25 = fVar17;
      }
      fVar23 = fStack0000000000000048 + fStack0000000000000030 * fVar25;
      fVar24 = fStack000000000000004c + fStack000000000000002c * fVar25;
      fVar17 = fStack0000000000000040 + fStack0000000000000034 * fVar19;
      param_2 = (ulong)(uint)(fVar16 * fVar24);
      do {
        fVar21 = (float)param_2;
        fVar18 = (float)FUN_0409cb84();
        fVar19 = (float)FUN_0409cb84();
        FUN_0409cb84();
        lVar13 = *in_stack_000000a8;
        lVar10 = FUN_0634bb04();
        if (lVar10 == 0) goto LAB_031b0818;
        fVar18 = fVar18 + fVar25 * (fVar19 * in_stack_000000a0._4_4_ - fVar18);
        param_2 = (ulong)(uint)(fVar21 + fStack00000000000000b0 + fVar16 * fVar18);
        param_3 = fVar22 + fVar26 * fVar18;
        uVar20 = FUN_0635f58c(fStack00000000000000b4 + fVar15 * fVar18,lVar10,0);
        if (lVar13 == 0) goto LAB_031b0818;
        lVar12 = *(long *)(lVar13 + 0x10);
        lVar10 = *(long *)PTR_DAT_069fbee0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar12 == 0) goto LAB_031b0818;
        uVar3 = *(uint *)(lVar13 + 0x18);
        if (uVar3 < *(uint *)(lVar12 + 0x18)) {
          lVar12 = lVar12 + (long)(int)uVar3 * 0xc;
          *(uint *)(lVar13 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar12 + 0x20) = uVar20;
          *(int *)(lVar12 + 0x24) = (int)param_2;
          *(float *)(lVar12 + 0x28) = param_3;
        }
        else {
          FUN_0409f624(lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = *in_stack_00000068;
        if (*(int *)(unaff_x23 + 0x120) == 2) {
          if ((unaff_x27 == 0) || (uVar20 = FUN_04059a68(), lVar10 == 0)) goto LAB_031b0818;
          lVar13 = *(long *)(lVar10 + 0x10);
          lVar12 = *(long *)PTR_DAT_069ff720;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_031b0818;
          uVar3 = *(uint *)(lVar10 + 0x18);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar3 * 8;
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar13 + 0x20) = uVar20;
            fVar19 = fVar17;
            goto LAB_031afb3c;
          }
          lVar13 = *(long *)(lVar12 + 0x20);
          fVar19 = fVar17;
LAB_031afb5c:
          param_2 = (ulong)(uint)fVar19;
          FUN_0409ce84(lVar10,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x70));
          fVar18 = (float)param_2;
        }
        else {
          if ((unaff_x27 == 0) || (uVar20 = FUN_04059a68(), lVar10 == 0)) goto LAB_031b0818;
          lVar13 = *(long *)(lVar10 + 0x10);
          lVar12 = *(long *)PTR_DAT_069ff720;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_031b0818;
          uVar3 = *(uint *)(lVar10 + 0x18);
          if (*(uint *)(lVar13 + 0x18) <= uVar3) {
            lVar13 = *(long *)(lVar12 + 0x20);
            fVar19 = fStack0000000000000058 / fStack0000000000000038;
            goto LAB_031afb5c;
          }
          lVar13 = lVar13 + (long)(int)uVar3 * 8;
          *(uint *)(lVar10 + 0x18) = uVar3 + 1;
          *(undefined4 *)(lVar13 + 0x20) = uVar20;
          fVar19 = fStack0000000000000058 / fStack0000000000000038;
LAB_031afb3c:
          fVar18 = (float)param_2;
          *(float *)(lVar13 + 0x24) = fVar19;
        }
        if (iVar14 == 0) {
          lVar13 = *in_stack_00000078;
          lVar10 = FUN_0634bb04();
          fVar19 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
          if (lVar10 == 0) goto LAB_031b0818;
          fVar18 = fVar16 * fVar23 + fVar18;
          param_3 = fVar26 * fVar23 + param_3;
          uVar20 = FUN_0635f58c(fVar15 * fVar23 + fVar19,lVar10,0);
          if (lVar13 == 0) goto LAB_031b0818;
          lVar10 = *(long *)(lVar13 + 0x10);
          lVar12 = *(long *)PTR_DAT_069fbee0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_031b0818;
          uVar3 = *(uint *)(lVar13 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar13 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar10 + 0x20) = uVar20;
            *(float *)(lVar10 + 0x24) = fVar18;
            *(float *)(lVar10 + 0x28) = param_3;
          }
          else {
            FUN_0409f624(lVar13,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = *in_stack_00000070;
          lVar10 = FUN_0634bb04();
          fVar19 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
          if (lVar10 == 0) goto LAB_031b0818;
          param_2 = (ulong)(uint)(fVar16 * fVar24 + fVar18);
          param_3 = fVar26 * fVar24 + param_3;
          uVar20 = FUN_0635f58c(fVar15 * fVar24 + fVar19,lVar10,0);
          puVar6 = PTR_DAT_069fbee0;
          if (lVar13 == 0) goto LAB_031b0818;
          lVar10 = *(long *)(lVar13 + 0x10);
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_031b0818;
          uVar3 = *(uint *)(lVar13 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar3 * 0xc;
            *(uint *)(lVar13 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar10 + 0x20) = uVar20;
            *(int *)(lVar10 + 0x24) = (int)param_2;
            *(float *)(lVar10 + 0x28) = param_3;
          }
          else {
            FUN_0409f624(lVar13,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (unaff_x28 == 0) goto LAB_031b0818;
        iVar8 = FUN_03fb3b24();
        if (iVar14 < *(int *)(unaff_x28 + 0x18) + -2) {
          iVar9 = FUN_03fb3b24();
          bVar7 = iVar8 == iVar9;
        }
        else {
          bVar7 = true;
        }
        if (iVar14 != *(int *)(unaff_x19 + 0x18) + -1) {
          bVar7 = (bool)(bVar7 ^ 1);
          if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
            bVar7 = true;
          }
          if (!bVar7) {
            lVar10 = *unaff_x24;
            if ((in_stack_00000060 & 1) == 0) {
              if ((lVar10 != 0) &&
                 (lVar10 = FUN_0400ff1c(lVar10,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 != 0))
              {
                lVar13 = *(long *)(lVar10 + 0x10);
                lVar12 = *(long *)PTR_DAT_069fc3e0;
                *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar3 = *(uint *)(lVar10 + 0x18);
                  if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                    *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar4 + iVar14;
                  }
                  else {
                    FUN_03fb3e1c(lVar10,iVar4 + iVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if ((*unaff_x24 != 0) &&
                     (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8),
                     lVar10 != 0)) {
                    lVar13 = *(long *)(lVar10 + 0x10);
                    lVar12 = *(long *)PTR_DAT_069fc3e0;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar13 != 0) {
                      uVar3 = *(uint *)(lVar10 + 0x18);
                      iVar14 = iVar5 + iVar14 + 1;
                      if (uVar3 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                        *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar14;
                      }
                      else {
                        FUN_03fb3e1c(lVar10,iVar14,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      if ((*unaff_x24 != 0) &&
                         (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8),
                         lVar10 != 0)) {
                        FUN_0665005c(*(undefined8 *)(lVar10 + 0x10));
                        return;
                      }
                    }
                  }
                }
              }
              goto LAB_031b0818;
            }
            if ((lVar10 == 0) ||
               (lVar10 = FUN_0400ff1c(lVar10,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0))
            goto LAB_031b0818;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_031b0818;
            uVar3 = *(uint *)(lVar10 + 0x18);
            iVar9 = iVar4 + iVar14;
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar9;
            }
            else {
              FUN_03fb3e1c(lVar10,iVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 == 0) ||
               (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0
               )) goto LAB_031b0818;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_031b0818;
            uVar3 = *(uint *)(lVar10 + 0x18);
            iVar1 = iVar4 + iVar14 + 1;
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
            }
            else {
              FUN_03fb3e1c(lVar10,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 == 0) ||
               (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0
               )) goto LAB_031b0818;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_031b0818;
            uVar3 = *(uint *)(lVar10 + 0x18);
            iVar2 = iVar5 + iVar14;
            iVar1 = iVar2 + 1;
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
            }
            else {
              FUN_03fb3e1c(lVar10,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 == 0) ||
               (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0
               )) goto LAB_031b0818;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_031b0818;
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
            }
            else {
              FUN_03fb3e1c(lVar10,iVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 == 0) ||
               (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0
               )) goto LAB_031b0818;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_031b0818;
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar9;
            }
            else {
              FUN_03fb3e1c(lVar10,iVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 == 0) ||
               (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0
               )) goto LAB_031b0818;
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar12 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_031b0818;
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar13 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
            }
            else {
              FUN_03fb3e1c(lVar10,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        iVar14 = iVar14 + 1;
        unaff_x25 = (long *)PTR_DAT_069fbb48;
      } while (iVar14 < *(int *)(unaff_x19 + 0x18));
    }
    unaff_w29 = unaff_w29 + 1;
    in_OV = SBORROW4(unaff_w29,*(int *)(in_stack_000000b8 + 0x18));
    in_NG = unaff_w29 - *(int *)(in_stack_000000b8 + 0x18) < 0;
  } while( true );
}


