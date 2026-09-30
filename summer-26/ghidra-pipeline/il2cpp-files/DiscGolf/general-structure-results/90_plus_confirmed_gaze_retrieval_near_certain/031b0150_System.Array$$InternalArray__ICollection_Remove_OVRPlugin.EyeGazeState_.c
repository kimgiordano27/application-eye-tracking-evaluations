/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 031b0150
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (undefined1 param_1 [16],ulong param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float unaff_s15;
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
  int iStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  ulong in_stack_00000060;
  long *in_stack_00000068;
  long *in_stack_00000070;
  long *in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  int iStack0000000000000098;
  float fStack000000000000009c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  long *in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  long in_stack_000000b8;
  
  uVar4 = in_stack_00000060;
code_r0x031b0150:
  if ((param_4 != 0) &&
     (lVar7 = FUN_0400ff1c(param_4,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 != 0)) {
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_069fc3e0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
      }
      else {
        FUN_03fb3e1c(lVar7,unaff_w20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      if ((*unaff_x24 != 0) &&
         (lVar7 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 != 0)) {
        lVar9 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)PTR_DAT_069fc3e0;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
          }
          else {
            FUN_03fb3e1c(lVar7,unaff_w21,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
LAB_031b0358:
          puVar2 = PTR_DAT_069fbb48;
          fVar15 = (float)param_2;
          unaff_w25 = unaff_w25 + 1;
          iVar6 = iStack0000000000000050;
          if (*(int *)(unaff_x19 + 0x18) <= unaff_w25) {
            do {
              unaff_w29 = iVar6;
              puVar3 = PTR_DAT_069fd088;
              fStack00000000000000b0 = (float)param_2;
              if (*(int *)(in_stack_000000b8 + 0x18) <= unaff_w29) {
                return;
              }
              if (unaff_w29 == 0) {
                fVar12 = (float)FUN_0409f2f4(in_stack_000000b8,1,*(undefined8 *)PTR_DAT_069fd088);
                fVar15 = param_3;
                fVar13 = fStack00000000000000b0;
                fVar11 = (float)FUN_0409f2f4(in_stack_000000b8,0,*(undefined8 *)puVar3);
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(puVar2);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar12 = fVar12 - fVar11;
                fStack00000000000000b0 = fStack00000000000000b0 - fVar13;
                unaff_s9 = param_3 - fVar15;
                fVar15 = SQRT(unaff_s9 * unaff_s9 +
                              fVar12 * fVar12 + fStack00000000000000b0 * fStack00000000000000b0);
                if (fStack0000000000000054 < fVar15) goto LAB_031af758;
LAB_031af5cc:
                if (DAT_06db4c71 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fb978);
                  DAT_06db4c71 = '\x01';
                }
                pfVar8 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                fVar13 = pfVar8[2];
                fVar11 = pfVar8[1];
                fVar15 = *pfVar8;
              }
              else {
                iVar6 = unaff_w29 + -1;
                fVar11 = (float)FUN_0409f2f4(in_stack_000000b8,iVar6,*(undefined8 *)PTR_DAT_069fd088
                                            );
                fVar15 = param_3;
                fVar13 = fStack00000000000000b0;
                fVar12 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)puVar3);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(puVar2);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                puVar3 = PTR_DAT_069fd088;
                unaff_s9 = param_3 - fVar15;
                fStack00000000000000b0 =
                     fStack0000000000000058 +
                     SQRT(unaff_s9 * unaff_s9 +
                          (fVar11 - fVar12) * (fVar11 - fVar12) +
                          (fStack00000000000000b0 - fVar13) * (fStack00000000000000b0 - fVar13));
                fStack0000000000000058 = fStack00000000000000b0;
                if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
                  if (in_stack_00000020 == 0) goto LAB_031b0818;
                  fVar13 = fStack0000000000000018;
                  fVar11 = fStack0000000000000014;
                  fVar15 = fStack0000000000000010;
                  if (*(int *)(in_stack_00000020 + 0x18) == 0) {
                    fVar12 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,
                                                 *(undefined8 *)PTR_DAT_069fd088);
                    fVar15 = unaff_s9;
                    fVar13 = fStack00000000000000b0;
                    fVar11 = (float)FUN_0409f2f4(in_stack_000000b8,iVar6,*(undefined8 *)puVar3);
                    if (DAT_06db4c75 == '\0') {
                      FUN_02d965b8(puVar2);
                      DAT_06db4c75 = '\x01';
                    }
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    fVar12 = fVar12 - fVar11;
                    fStack00000000000000b0 = fStack00000000000000b0 - fVar13;
                    unaff_s9 = unaff_s9 - fVar15;
                    fVar15 = unaff_s9 * unaff_s9 +
                             fVar12 * fVar12 + fStack00000000000000b0 * fStack00000000000000b0;
                    goto LAB_031af744;
                  }
                }
                else {
                  fVar12 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29 + 1,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  fVar15 = unaff_s9;
                  fVar13 = fStack00000000000000b0;
                  fVar11 = (float)FUN_0409f2f4(in_stack_000000b8,iVar6,*(undefined8 *)puVar3);
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(puVar2);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar12 = fVar12 - fVar11;
                  fStack00000000000000b0 = fStack00000000000000b0 - fVar13;
                  unaff_s9 = unaff_s9 - fVar15;
                  fVar15 = unaff_s9 * unaff_s9 +
                           fVar12 * fVar12 + fStack00000000000000b0 * fStack00000000000000b0;
LAB_031af744:
                  fVar15 = SQRT(fVar15);
                  if (fVar15 <= fStack0000000000000054) goto LAB_031af5cc;
LAB_031af758:
                  fVar13 = unaff_s9 / fVar15;
                  fVar11 = fStack00000000000000b0 / fVar15;
                  fVar15 = fVar12 / fVar15;
                }
              }
              fStack00000000000000b4 =
                   (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
              param_3 = unaff_s9;
              if ((unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) &&
                 (*(int *)(unaff_x23 + 0x120) == 2)) {
                param_3 = fVar13 * fStack000000000000001c;
                fStack00000000000000b4 = fVar15 * fStack000000000000001c + fStack00000000000000b4;
                unaff_s9 = param_3 + unaff_s9;
                fStack00000000000000b0 = fVar11 * fStack000000000000001c + fStack00000000000000b0;
              }
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(puVar2);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              param_2 = (ulong)(uint)fStack0000000000000054;
              fVar11 = SQRT(fVar13 * fVar13 + fVar15 * fVar15);
              if (fVar11 <= fStack0000000000000054) {
                if (DAT_06db4c71 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fb978);
                  DAT_06db4c71 = '\x01';
                }
                pfVar8 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                unaff_s11 = *pfVar8;
                unaff_s12 = pfVar8[1];
                unaff_s15 = pfVar8[2];
              }
              else {
                unaff_s15 = fVar15 / fVar11;
                unaff_s11 = -fVar13 / fVar11;
                param_2 = 0;
                unaff_s12 = 0.0 / fVar11;
              }
              if (0 < *(int *)(unaff_x19 + 0x18)) goto code_r0x031af878;
              iVar6 = unaff_w29 + 1;
            } while( true );
          }
          goto LAB_031af96c;
        }
      }
    }
  }
  goto LAB_031b0818;
code_r0x031af878:
  unaff_w25 = 0;
  fVar13 = fStack0000000000000058 / fStack000000000000005c;
  fVar15 = 1.0;
  if (fVar13 <= 1.0) {
    fVar15 = fVar13;
  }
  fVar11 = 0.0;
  if (0.0 <= fVar13) {
    fVar11 = fVar15;
  }
  fVar15 = fVar13;
  if (fStack0000000000000044 != 1.0) {
    fVar15 = 1.0;
  }
  iStack0000000000000098 = unaff_w29 * iStack000000000000003c;
  iStack0000000000000050 = unaff_w29 + 1;
  in_stack_00000060._4_4_ = iStack0000000000000050 * iStack000000000000003c;
  fVar12 = fVar11 * fVar11 * 3.0 - fVar11 * fVar11 * (fVar11 + fVar11);
  fVar15 = fVar13 * fVar15;
  if (iStack0000000000000028 == 0) {
    fVar15 = fVar12 + (1.0 - fVar12) * 0.0;
  }
  fVar13 = 1.0;
  if (fVar15 <= 1.0) {
    fVar13 = fVar15;
  }
  unaff_s8 = 0.0;
  if (0.0 <= fVar15) {
    unaff_s8 = fVar13;
  }
  fStack00000000000000a0 = fStack0000000000000058 / fStack0000000000000038;
  fStack000000000000008c = fStack0000000000000048 + fStack0000000000000030 * unaff_s8;
  fStack0000000000000080 = fStack000000000000004c + fStack000000000000002c * unaff_s8;
  fStack0000000000000094 = unaff_s15 * fStack000000000000008c;
  fStack0000000000000090 = unaff_s12 * fStack000000000000008c;
  fStack000000000000009c = fStack0000000000000040 + fStack0000000000000034 * fVar11;
  fStack000000000000008c = unaff_s11 * fStack000000000000008c;
  fStack0000000000000088 = unaff_s15 * fStack0000000000000080;
  fVar15 = unaff_s12 * fStack0000000000000080;
  fStack0000000000000080 = unaff_s11 * fStack0000000000000080;
  unaff_x22 = in_stack_00000068;
  fStack0000000000000084 = fVar15;
LAB_031af96c:
  fVar11 = (float)FUN_0409cb84();
  fVar13 = (float)FUN_0409cb84();
  FUN_0409cb84();
  lVar9 = *in_stack_000000a8;
  lVar7 = FUN_0634bb04();
  if (lVar7 == 0) goto LAB_031b0818;
  fVar11 = fVar11 + unaff_s8 * (fVar13 * fStack00000000000000a4 - fVar11);
  param_2 = (ulong)(uint)(fVar15 + fStack00000000000000b0 + unaff_s12 * fVar11);
  param_3 = unaff_s9 + unaff_s15 * fVar11;
  uVar14 = FUN_0635f58c(fStack00000000000000b4 + unaff_s11 * fVar11,lVar7,0);
  if (lVar9 == 0) goto LAB_031b0818;
  lVar10 = *(long *)(lVar9 + 0x10);
  lVar7 = *(long *)PTR_DAT_069fbee0;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b0818;
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar1 * 0xc;
    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
    *(undefined4 *)(lVar10 + 0x20) = uVar14;
    *(int *)(lVar10 + 0x24) = (int)param_2;
    *(float *)(lVar10 + 0x28) = param_3;
  }
  else {
    FUN_0409f624(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
  }
  lVar7 = *unaff_x22;
  if (*(int *)(unaff_x23 + 0x120) == 2) {
    if ((unaff_x27 == 0) || (uVar14 = FUN_04059a68(), lVar7 == 0)) goto LAB_031b0818;
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_069ff720;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_031b0818;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
      lVar9 = *(long *)(lVar10 + 0x20);
      fVar15 = fStack000000000000009c;
LAB_031afb5c:
      param_2 = (ulong)(uint)fVar15;
      FUN_0409ce84(lVar7,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x70));
      fVar13 = (float)param_2;
      goto joined_r0x031afb40;
    }
    lVar9 = lVar9 + (long)(int)uVar1 * 8;
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(undefined4 *)(lVar9 + 0x20) = uVar14;
    fVar15 = fStack000000000000009c;
  }
  else {
    if ((unaff_x27 == 0) || (uVar14 = FUN_04059a68(), lVar7 == 0)) goto LAB_031b0818;
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_069ff720;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_031b0818;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
      lVar9 = *(long *)(lVar10 + 0x20);
      fVar15 = fStack00000000000000a0;
      goto LAB_031afb5c;
    }
    lVar9 = lVar9 + (long)(int)uVar1 * 8;
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(undefined4 *)(lVar9 + 0x20) = uVar14;
    fVar15 = fStack00000000000000a0;
  }
  fVar13 = (float)param_2;
  *(float *)(lVar9 + 0x24) = fVar15;
joined_r0x031afb40:
  if (unaff_w25 == 0) {
    lVar9 = *in_stack_00000078;
    lVar7 = FUN_0634bb04();
    fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
    if (lVar7 == 0) goto LAB_031b0818;
    fVar13 = fStack0000000000000090 + fVar13;
    param_3 = fStack0000000000000094 + param_3;
    uVar14 = FUN_0635f58c(fStack000000000000008c + fVar15,lVar7,0);
    if (lVar9 == 0) goto LAB_031b0818;
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar10 = *(long *)PTR_DAT_069fbee0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_031b0818;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar7 + 0x20) = uVar14;
      *(float *)(lVar7 + 0x24) = fVar13;
      *(float *)(lVar7 + 0x28) = param_3;
    }
    else {
      FUN_0409f624(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *in_stack_00000070;
    lVar7 = FUN_0634bb04();
    fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
    if (lVar7 == 0) goto LAB_031b0818;
    param_2 = (ulong)(uint)(fStack0000000000000084 + fVar13);
    param_3 = fStack0000000000000088 + param_3;
    uVar14 = FUN_0635f58c(fStack0000000000000080 + fVar15,lVar7,0);
    puVar2 = PTR_DAT_069fbee0;
    if (lVar9 == 0) goto LAB_031b0818;
    lVar7 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_031b0818;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      lVar7 = lVar7 + (long)(int)uVar1 * 0xc;
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar7 + 0x20) = uVar14;
      *(int *)(lVar7 + 0x24) = (int)param_2;
      *(float *)(lVar7 + 0x28) = param_3;
    }
    else {
      FUN_0409f624(lVar9,*(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                  );
    }
  }
  if (unaff_x28 == 0) goto LAB_031b0818;
  unaff_w26 = FUN_03fb3b24();
  if (unaff_w25 < *(int *)(unaff_x28 + 0x18) + -2) {
    iVar6 = FUN_03fb3b24();
    bVar5 = unaff_w26 == iVar6;
  }
  else {
    bVar5 = true;
  }
  if (unaff_w25 == *(int *)(unaff_x19 + 0x18) + -1) goto LAB_031b0358;
  bVar5 = (bool)(bVar5 ^ 1);
  if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
    bVar5 = true;
  }
  if (!bVar5) goto System_Array__InternalArray__ICollection_Remove<OVRDisplay_EyeRenderDesc>;
  goto LAB_031b0358;
System_Array__InternalArray__ICollection_Remove<OVRDisplay_EyeRenderDesc>:
  lVar7 = *unaff_x24;
  if ((uVar4 & 1) == 0) {
    if ((lVar7 != 0) &&
       (lVar7 = FUN_0400ff1c(lVar7,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 != 0)) {
      lVar9 = *(long *)(lVar7 + 0x10);
      lVar10 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iStack0000000000000098 + unaff_w25;
        }
        else {
          FUN_03fb3e1c(lVar7,iStack0000000000000098 + unaff_w25,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        if ((*unaff_x24 != 0) &&
           (lVar7 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 != 0))
        {
          lVar9 = *(long *)(lVar7 + 0x10);
          lVar10 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar6 = in_stack_00000060._4_4_ + unaff_w25 + 1;
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar6;
            }
            else {
              FUN_03fb3e1c(lVar7,iVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 != 0) &&
               (lVar7 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8),
               lVar7 != 0)) {
              FUN_0665005c(*(undefined8 *)(lVar7 + 0x10));
              return;
            }
          }
        }
      }
    }
LAB_031b0818:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((lVar7 == 0) ||
     (lVar7 = FUN_0400ff1c(lVar7,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 == 0))
  goto LAB_031b0818;
  lVar9 = *(long *)(lVar7 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_031b0818;
  uVar1 = *(uint *)(lVar7 + 0x18);
  unaff_w20 = iStack0000000000000098 + unaff_w25;
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
  }
  else {
    FUN_03fb3e1c(lVar7,unaff_w20,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
    ;
  }
  if ((*unaff_x24 == 0) ||
     (lVar7 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 == 0))
  goto LAB_031b0818;
  lVar9 = *(long *)(lVar7 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_031b0818;
  uVar1 = *(uint *)(lVar7 + 0x18);
  iVar6 = iStack0000000000000098 + unaff_w25 + 1;
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar6;
  }
  else {
    FUN_03fb3e1c(lVar7,iVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  if ((*unaff_x24 == 0) ||
     (lVar7 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 == 0))
  goto LAB_031b0818;
  lVar9 = *(long *)(lVar7 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_031b0818;
  uVar1 = *(uint *)(lVar7 + 0x18);
  iVar6 = in_stack_00000060._4_4_ + unaff_w25;
  unaff_w21 = iVar6 + 1;
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
  }
  else {
    FUN_03fb3e1c(lVar7,unaff_w21,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
    ;
  }
  if ((*unaff_x24 == 0) ||
     (lVar7 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar7 == 0))
  goto LAB_031b0818;
  lVar9 = *(long *)(lVar7 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_031b0818;
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar6;
  }
  else {
    FUN_03fb3e1c(lVar7,iVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  param_4 = *unaff_x24;
  unaff_x22 = in_stack_00000068;
  goto code_r0x031b0150;
}


