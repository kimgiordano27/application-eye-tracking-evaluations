/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 031b0030
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


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_AppPerfFrameStats>
               (long param_1,undefined1 param_2 [16],ulong param_3,float param_4,long param_5,
               undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  bool in_CY;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  long in_x9;
  long lVar13;
  long in_x10;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  undefined4 unaff_w26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
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
  
  uVar6 = in_stack_00000060;
  if (in_CY) {
    FUN_03fb3e1c(param_5,param_6,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
  }
  else {
    *(int *)(param_5 + 0x18) = (int)in_x10 + 1;
    *(int *)(param_1 + in_x10 * 4 + 0x20) = (int)param_6;
  }
  if ((*unaff_x24 != 0) &&
     (lVar10 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 != 0)) {
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)PTR_DAT_069fc3e0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = unaff_w22;
      }
      else {
        FUN_03fb3e1c(lVar10,unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      if ((*unaff_x24 != 0) &&
         (lVar10 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 != 0))
      {
        lVar12 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)PTR_DAT_069fc3e0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar12 != 0) {
          uVar3 = *(uint *)(lVar10 + 0x18);
          if (uVar3 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar3 + 1;
            *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = unaff_w21;
          }
          else {
            FUN_03fb3e1c(lVar10,unaff_w21,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          if ((*unaff_x24 != 0) &&
             (lVar10 = FUN_0400ff1c(*unaff_x24,unaff_w26,*(undefined8 *)PTR_DAT_06a0b3b8),
             lVar10 != 0)) {
            lVar12 = *(long *)(lVar10 + 0x10);
            lVar13 = *(long *)PTR_DAT_069fc3e0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 != 0) {
              uVar3 = *(uint *)(lVar10 + 0x18);
              if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = unaff_w20;
              }
              else {
                FUN_03fb3e1c(lVar10,unaff_w20,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
LAB_031b0358:
              puVar4 = PTR_DAT_069fbb48;
              fVar18 = (float)param_3;
              unaff_w25 = unaff_w25 + 1;
              iVar8 = iStack0000000000000050;
              if (*(int *)(unaff_x19 + 0x18) <= unaff_w25) {
                do {
                  unaff_w29 = iVar8;
                  puVar5 = PTR_DAT_069fd088;
                  fStack00000000000000b0 = (float)param_3;
                  if (*(int *)(in_stack_000000b8 + 0x18) <= unaff_w29) {
                    return;
                  }
                  if (unaff_w29 == 0) {
                    fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,1,*(undefined8 *)PTR_DAT_069fd088
                                                );
                    fVar18 = param_4;
                    fVar16 = fStack00000000000000b0;
                    fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,0,*(undefined8 *)puVar5);
                    if (DAT_06db4c75 == '\0') {
                      FUN_02d965b8(puVar4);
                      DAT_06db4c75 = '\x01';
                    }
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    fVar15 = fVar15 - fVar14;
                    fStack00000000000000b0 = fStack00000000000000b0 - fVar16;
                    unaff_s9 = param_4 - fVar18;
                    fVar18 = SQRT(unaff_s9 * unaff_s9 +
                                  fVar15 * fVar15 + fStack00000000000000b0 * fStack00000000000000b0)
                    ;
                    if (fStack0000000000000054 < fVar18) goto LAB_031af758;
LAB_031af5cc:
                    if (DAT_06db4c71 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fb978);
                      DAT_06db4c71 = '\x01';
                    }
                    pfVar11 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                    fVar16 = pfVar11[2];
                    fVar14 = pfVar11[1];
                    fVar18 = *pfVar11;
                  }
                  else {
                    iVar8 = unaff_w29 + -1;
                    fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,iVar8,
                                                 *(undefined8 *)PTR_DAT_069fd088);
                    fVar18 = param_4;
                    fVar16 = fStack00000000000000b0;
                    fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)puVar5);
                    if (DAT_06db4c77 == '\0') {
                      FUN_02d965b8(puVar4);
                      DAT_06db4c77 = '\x01';
                    }
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    puVar5 = PTR_DAT_069fd088;
                    unaff_s9 = param_4 - fVar18;
                    fStack00000000000000b0 =
                         fStack0000000000000058 +
                         SQRT(unaff_s9 * unaff_s9 +
                              (fVar14 - fVar15) * (fVar14 - fVar15) +
                              (fStack00000000000000b0 - fVar16) * (fStack00000000000000b0 - fVar16))
                    ;
                    fStack0000000000000058 = fStack00000000000000b0;
                    if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
                      if (in_stack_00000020 == 0) goto LAB_031b0818;
                      fVar16 = fStack0000000000000018;
                      fVar14 = fStack0000000000000014;
                      fVar18 = fStack0000000000000010;
                      if (*(int *)(in_stack_00000020 + 0x18) == 0) {
                        fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,
                                                     *(undefined8 *)PTR_DAT_069fd088);
                        fVar18 = unaff_s9;
                        fVar16 = fStack00000000000000b0;
                        fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,iVar8,*(undefined8 *)puVar5);
                        if (DAT_06db4c75 == '\0') {
                          FUN_02d965b8(puVar4);
                          DAT_06db4c75 = '\x01';
                        }
                        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                          thunk_FUN_02df485c();
                        }
                        fVar15 = fVar15 - fVar14;
                        fStack00000000000000b0 = fStack00000000000000b0 - fVar16;
                        unaff_s9 = unaff_s9 - fVar18;
                        fVar18 = unaff_s9 * unaff_s9 +
                                 fVar15 * fVar15 + fStack00000000000000b0 * fStack00000000000000b0;
                        goto LAB_031af744;
                      }
                    }
                    else {
                      fVar15 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29 + 1,
                                                   *(undefined8 *)PTR_DAT_069fd088);
                      fVar18 = unaff_s9;
                      fVar16 = fStack00000000000000b0;
                      fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,iVar8,*(undefined8 *)puVar5);
                      if (DAT_06db4c75 == '\0') {
                        FUN_02d965b8(puVar4);
                        DAT_06db4c75 = '\x01';
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar15 = fVar15 - fVar14;
                      fStack00000000000000b0 = fStack00000000000000b0 - fVar16;
                      unaff_s9 = unaff_s9 - fVar18;
                      fVar18 = unaff_s9 * unaff_s9 +
                               fVar15 * fVar15 + fStack00000000000000b0 * fStack00000000000000b0;
LAB_031af744:
                      fVar18 = SQRT(fVar18);
                      if (fVar18 <= fStack0000000000000054) goto LAB_031af5cc;
LAB_031af758:
                      fVar16 = unaff_s9 / fVar18;
                      fVar14 = fStack00000000000000b0 / fVar18;
                      fVar18 = fVar15 / fVar18;
                    }
                  }
                  fStack00000000000000b4 =
                       (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,
                                           *(undefined8 *)PTR_DAT_069fd088);
                  param_4 = unaff_s9;
                  if ((unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) &&
                     (*(int *)(unaff_x23 + 0x120) == 2)) {
                    param_4 = fVar16 * fStack000000000000001c;
                    fStack00000000000000b4 =
                         fVar18 * fStack000000000000001c + fStack00000000000000b4;
                    unaff_s9 = param_4 + unaff_s9;
                    fStack00000000000000b0 =
                         fVar14 * fStack000000000000001c + fStack00000000000000b0;
                  }
                  if (DAT_06db4c75 == '\0') {
                    FUN_02d965b8(puVar4);
                    DAT_06db4c75 = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  param_3 = (ulong)(uint)fStack0000000000000054;
                  fVar14 = SQRT(fVar16 * fVar16 + fVar18 * fVar18);
                  if (fVar14 <= fStack0000000000000054) {
                    if (DAT_06db4c71 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fb978);
                      DAT_06db4c71 = '\x01';
                    }
                    pfVar11 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                    unaff_s11 = *pfVar11;
                    unaff_s12 = pfVar11[1];
                    unaff_s15 = pfVar11[2];
                  }
                  else {
                    unaff_s15 = fVar18 / fVar14;
                    unaff_s11 = -fVar16 / fVar14;
                    param_3 = 0;
                    unaff_s12 = 0.0 / fVar14;
                  }
                  if (0 < *(int *)(unaff_x19 + 0x18)) goto code_r0x031af878;
                  iVar8 = unaff_w29 + 1;
                } while( true );
              }
              goto LAB_031af96c;
            }
          }
        }
      }
    }
  }
LAB_031b0818:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
code_r0x031af878:
  unaff_w25 = 0;
  fVar16 = fStack0000000000000058 / fStack000000000000005c;
  fVar18 = 1.0;
  if (fVar16 <= 1.0) {
    fVar18 = fVar16;
  }
  fVar14 = 0.0;
  if (0.0 <= fVar16) {
    fVar14 = fVar18;
  }
  fVar18 = fVar16;
  if (fStack0000000000000044 != 1.0) {
    fVar18 = 1.0;
  }
  iStack0000000000000098 = unaff_w29 * iStack000000000000003c;
  iStack0000000000000050 = unaff_w29 + 1;
  in_stack_00000060._4_4_ = iStack0000000000000050 * iStack000000000000003c;
  fVar15 = fVar14 * fVar14 * 3.0 - fVar14 * fVar14 * (fVar14 + fVar14);
  fVar18 = fVar16 * fVar18;
  if (iStack0000000000000028 == 0) {
    fVar18 = fVar15 + (1.0 - fVar15) * 0.0;
  }
  fVar16 = 1.0;
  if (fVar18 <= 1.0) {
    fVar16 = fVar18;
  }
  unaff_s8 = 0.0;
  if (0.0 <= fVar18) {
    unaff_s8 = fVar16;
  }
  fStack00000000000000a0 = fStack0000000000000058 / fStack0000000000000038;
  fStack000000000000008c = fStack0000000000000048 + fStack0000000000000030 * unaff_s8;
  fStack0000000000000080 = fStack000000000000004c + fStack000000000000002c * unaff_s8;
  fStack0000000000000094 = unaff_s15 * fStack000000000000008c;
  fStack0000000000000090 = unaff_s12 * fStack000000000000008c;
  fStack000000000000009c = fStack0000000000000040 + fStack0000000000000034 * fVar14;
  fStack000000000000008c = unaff_s11 * fStack000000000000008c;
  fStack0000000000000088 = unaff_s15 * fStack0000000000000080;
  fVar18 = unaff_s12 * fStack0000000000000080;
  fStack0000000000000080 = unaff_s11 * fStack0000000000000080;
  fStack0000000000000084 = fVar18;
LAB_031af96c:
  fVar14 = (float)FUN_0409cb84();
  fVar16 = (float)FUN_0409cb84();
  FUN_0409cb84();
  lVar12 = *in_stack_000000a8;
  lVar10 = FUN_0634bb04();
  if (lVar10 == 0) goto LAB_031b0818;
  fVar14 = fVar14 + unaff_s8 * (fVar16 * fStack00000000000000a4 - fVar14);
  param_3 = (ulong)(uint)(fVar18 + fStack00000000000000b0 + unaff_s12 * fVar14);
  param_4 = unaff_s9 + unaff_s15 * fVar14;
  uVar17 = FUN_0635f58c(fStack00000000000000b4 + unaff_s11 * fVar14,lVar10,0);
  if (lVar12 == 0) goto LAB_031b0818;
  lVar13 = *(long *)(lVar12 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fbee0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar13 == 0) goto LAB_031b0818;
  uVar3 = *(uint *)(lVar12 + 0x18);
  if (uVar3 < *(uint *)(lVar13 + 0x18)) {
    lVar13 = lVar13 + (long)(int)uVar3 * 0xc;
    *(uint *)(lVar12 + 0x18) = uVar3 + 1;
    *(undefined4 *)(lVar13 + 0x20) = uVar17;
    *(int *)(lVar13 + 0x24) = (int)param_3;
    *(float *)(lVar13 + 0x28) = param_4;
  }
  else {
    FUN_0409f624(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  lVar10 = *in_stack_00000068;
  if (*(int *)(unaff_x23 + 0x120) == 2) {
    if ((unaff_x27 == 0) || (uVar17 = FUN_04059a68(), lVar10 == 0)) goto LAB_031b0818;
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)PTR_DAT_069ff720;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_031b0818;
    uVar3 = *(uint *)(lVar10 + 0x18);
    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
      lVar12 = *(long *)(lVar13 + 0x20);
      fVar18 = fStack000000000000009c;
LAB_031afb5c:
      param_3 = (ulong)(uint)fVar18;
      FUN_0409ce84(lVar10,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x70));
      fVar16 = (float)param_3;
      goto joined_r0x031afb40;
    }
    lVar12 = lVar12 + (long)(int)uVar3 * 8;
    *(uint *)(lVar10 + 0x18) = uVar3 + 1;
    *(undefined4 *)(lVar12 + 0x20) = uVar17;
    fVar18 = fStack000000000000009c;
  }
  else {
    if ((unaff_x27 == 0) || (uVar17 = FUN_04059a68(), lVar10 == 0)) goto LAB_031b0818;
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar13 = *(long *)PTR_DAT_069ff720;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_031b0818;
    uVar3 = *(uint *)(lVar10 + 0x18);
    if (*(uint *)(lVar12 + 0x18) <= uVar3) {
      lVar12 = *(long *)(lVar13 + 0x20);
      fVar18 = fStack00000000000000a0;
      goto LAB_031afb5c;
    }
    lVar12 = lVar12 + (long)(int)uVar3 * 8;
    *(uint *)(lVar10 + 0x18) = uVar3 + 1;
    *(undefined4 *)(lVar12 + 0x20) = uVar17;
    fVar18 = fStack00000000000000a0;
  }
  fVar16 = (float)param_3;
  *(float *)(lVar12 + 0x24) = fVar18;
joined_r0x031afb40:
  if (unaff_w25 == 0) {
    lVar12 = *in_stack_00000078;
    lVar10 = FUN_0634bb04();
    fVar18 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
    if (lVar10 == 0) goto LAB_031b0818;
    fVar16 = fStack0000000000000090 + fVar16;
    param_4 = fStack0000000000000094 + param_4;
    uVar17 = FUN_0635f58c(fStack000000000000008c + fVar18,lVar10,0);
    if (lVar12 == 0) goto LAB_031b0818;
    lVar10 = *(long *)(lVar12 + 0x10);
    lVar13 = *(long *)PTR_DAT_069fbee0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_031b0818;
    uVar3 = *(uint *)(lVar12 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar3 * 0xc;
      *(uint *)(lVar12 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar10 + 0x20) = uVar17;
      *(float *)(lVar10 + 0x24) = fVar16;
      *(float *)(lVar10 + 0x28) = param_4;
    }
    else {
      FUN_0409f624(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    lVar12 = *in_stack_00000070;
    lVar10 = FUN_0634bb04();
    fVar18 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
    if (lVar10 == 0) goto LAB_031b0818;
    param_3 = (ulong)(uint)(fStack0000000000000084 + fVar16);
    param_4 = fStack0000000000000088 + param_4;
    uVar17 = FUN_0635f58c(fStack0000000000000080 + fVar18,lVar10,0);
    puVar4 = PTR_DAT_069fbee0;
    if (lVar12 == 0) goto LAB_031b0818;
    lVar10 = *(long *)(lVar12 + 0x10);
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_031b0818;
    uVar3 = *(uint *)(lVar12 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar3 * 0xc;
      *(uint *)(lVar12 + 0x18) = uVar3 + 1;
      *(undefined4 *)(lVar10 + 0x20) = uVar17;
      *(int *)(lVar10 + 0x24) = (int)param_3;
      *(float *)(lVar10 + 0x28) = param_4;
    }
    else {
      FUN_0409f624(lVar12,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)puVar4 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (unaff_x28 == 0) goto LAB_031b0818;
  iVar8 = FUN_03fb3b24();
  if (unaff_w25 < *(int *)(unaff_x28 + 0x18) + -2) {
    iVar9 = FUN_03fb3b24();
    bVar7 = iVar8 == iVar9;
  }
  else {
    bVar7 = true;
  }
  if (unaff_w25 != *(int *)(unaff_x19 + 0x18) + -1) {
    bVar7 = (bool)(bVar7 ^ 1);
    if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
      bVar7 = true;
    }
    if (!bVar7) {
      lVar10 = *unaff_x24;
      if ((uVar6 & 1) == 0) {
        if ((lVar10 != 0) &&
           (lVar10 = FUN_0400ff1c(lVar10,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 != 0)) {
          lVar12 = *(long *)(lVar10 + 0x10);
          lVar13 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar3 = *(uint *)(lVar10 + 0x18);
            if (uVar3 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar3 + 1;
              *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iStack0000000000000098 + unaff_w25;
            }
            else {
              FUN_03fb3e1c(lVar10,iStack0000000000000098 + unaff_w25,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 != 0) &&
               (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 != 0
               )) {
              lVar12 = *(long *)(lVar10 + 0x10);
              lVar13 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar12 != 0) {
                uVar3 = *(uint *)(lVar10 + 0x18);
                iVar9 = in_stack_00000060._4_4_ + unaff_w25 + 1;
                if (uVar3 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar10 + 0x18) = uVar3 + 1;
                  *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar9;
                }
                else {
                  FUN_03fb3e1c(lVar10,iVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_031b0818;
      uVar3 = *(uint *)(lVar10 + 0x18);
      iVar9 = iStack0000000000000098 + unaff_w25;
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar9;
      }
      else {
        FUN_03fb3e1c(lVar10,iVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if ((*unaff_x24 == 0) ||
         (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0))
      goto LAB_031b0818;
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_031b0818;
      uVar3 = *(uint *)(lVar10 + 0x18);
      iVar1 = iStack0000000000000098 + unaff_w25 + 1;
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
      }
      else {
        FUN_03fb3e1c(lVar10,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if ((*unaff_x24 == 0) ||
         (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0))
      goto LAB_031b0818;
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_031b0818;
      uVar3 = *(uint *)(lVar10 + 0x18);
      iVar2 = in_stack_00000060._4_4_ + unaff_w25;
      iVar1 = iVar2 + 1;
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
      }
      else {
        FUN_03fb3e1c(lVar10,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if ((*unaff_x24 == 0) ||
         (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0))
      goto LAB_031b0818;
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_031b0818;
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar2;
      }
      else {
        FUN_03fb3e1c(lVar10,iVar2,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if ((*unaff_x24 == 0) ||
         (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0))
      goto LAB_031b0818;
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_031b0818;
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar9;
      }
      else {
        FUN_03fb3e1c(lVar10,iVar9,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
      if ((*unaff_x24 == 0) ||
         (lVar10 = FUN_0400ff1c(*unaff_x24,iVar8,*(undefined8 *)PTR_DAT_06a0b3b8), lVar10 == 0))
      goto LAB_031b0818;
      lVar12 = *(long *)(lVar10 + 0x10);
      lVar13 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_031b0818;
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar1;
      }
      else {
        FUN_03fb3e1c(lVar10,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  goto LAB_031b0358;
}


