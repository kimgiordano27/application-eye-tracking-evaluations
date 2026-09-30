/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector2f>
ENTRY_POINT: 031b0270
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


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector2f>
               (long param_1,undefined1 param_2 [16],ulong param_3,float param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  long *in_x9;
  long lVar11;
  int in_w10;
  long unaff_x19;
  long lVar12;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
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
  
  uVar5 = in_stack_00000060;
code_r0x031b0270:
  lVar11 = *in_x9;
  *(int *)(param_5 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_5 + 0x18);
    if (uVar2 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_5 + 0x18) = uVar2 + 1;
      *(int *)(param_1 + (long)(int)uVar2 * 4 + 0x20) = unaff_w21;
    }
    else {
      FUN_03fb3e1c(param_5,unaff_w21,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
LAB_031b0358:
    puVar3 = PTR_DAT_069fbb48;
    fVar17 = (float)param_3;
    unaff_w25 = unaff_w25 + 1;
    iVar7 = iStack0000000000000050;
    if (*(int *)(unaff_x19 + 0x18) <= unaff_w25) {
      do {
        unaff_w29 = iVar7;
        puVar4 = PTR_DAT_069fd088;
        fStack00000000000000b0 = (float)param_3;
        if (*(int *)(in_stack_000000b8 + 0x18) <= unaff_w29) {
          return;
        }
        if (unaff_w29 == 0) {
          fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,1,*(undefined8 *)PTR_DAT_069fd088);
          fVar17 = param_4;
          fVar15 = fStack00000000000000b0;
          fVar13 = (float)FUN_0409f2f4(in_stack_000000b8,0,*(undefined8 *)puVar4);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(puVar3);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar14 = fVar14 - fVar13;
          fStack00000000000000b0 = fStack00000000000000b0 - fVar15;
          unaff_s9 = param_4 - fVar17;
          fVar17 = SQRT(unaff_s9 * unaff_s9 +
                        fVar14 * fVar14 + fStack00000000000000b0 * fStack00000000000000b0);
          if (fStack0000000000000054 < fVar17) goto LAB_031af758;
LAB_031af5cc:
          if (DAT_06db4c71 == '\0') {
            FUN_02d965b8(PTR_DAT_069fb978);
            DAT_06db4c71 = '\x01';
          }
          pfVar9 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
          fVar15 = pfVar9[2];
          fVar13 = pfVar9[1];
          fVar17 = *pfVar9;
        }
        else {
          iVar7 = unaff_w29 + -1;
          fVar13 = (float)FUN_0409f2f4(in_stack_000000b8,iVar7,*(undefined8 *)PTR_DAT_069fd088);
          fVar17 = param_4;
          fVar15 = fStack00000000000000b0;
          fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)puVar4);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(puVar3);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          puVar4 = PTR_DAT_069fd088;
          unaff_s9 = param_4 - fVar17;
          fStack00000000000000b0 =
               fStack0000000000000058 +
               SQRT(unaff_s9 * unaff_s9 +
                    (fVar13 - fVar14) * (fVar13 - fVar14) +
                    (fStack00000000000000b0 - fVar15) * (fStack00000000000000b0 - fVar15));
          fStack0000000000000058 = fStack00000000000000b0;
          if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
            if (in_stack_00000020 == 0) goto LAB_031b0818;
            fVar15 = fStack0000000000000018;
            fVar13 = fStack0000000000000014;
            fVar17 = fStack0000000000000010;
            if (*(int *)(in_stack_00000020 + 0x18) == 0) {
              fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,
                                           *(undefined8 *)PTR_DAT_069fd088);
              fVar17 = unaff_s9;
              fVar15 = fStack00000000000000b0;
              fVar13 = (float)FUN_0409f2f4(in_stack_000000b8,iVar7,*(undefined8 *)puVar4);
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(puVar3);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar14 = fVar14 - fVar13;
              fStack00000000000000b0 = fStack00000000000000b0 - fVar15;
              unaff_s9 = unaff_s9 - fVar17;
              fVar17 = unaff_s9 * unaff_s9 +
                       fVar14 * fVar14 + fStack00000000000000b0 * fStack00000000000000b0;
              goto LAB_031af744;
            }
          }
          else {
            fVar14 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29 + 1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            fVar17 = unaff_s9;
            fVar15 = fStack00000000000000b0;
            fVar13 = (float)FUN_0409f2f4(in_stack_000000b8,iVar7,*(undefined8 *)puVar4);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(puVar3);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar14 = fVar14 - fVar13;
            fStack00000000000000b0 = fStack00000000000000b0 - fVar15;
            unaff_s9 = unaff_s9 - fVar17;
            fVar17 = unaff_s9 * unaff_s9 +
                     fVar14 * fVar14 + fStack00000000000000b0 * fStack00000000000000b0;
LAB_031af744:
            fVar17 = SQRT(fVar17);
            if (fVar17 <= fStack0000000000000054) goto LAB_031af5cc;
LAB_031af758:
            fVar15 = unaff_s9 / fVar17;
            fVar13 = fStack00000000000000b0 / fVar17;
            fVar17 = fVar14 / fVar17;
          }
        }
        fStack00000000000000b4 =
             (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
        param_4 = unaff_s9;
        if ((unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) &&
           (*(int *)(unaff_x23 + 0x120) == 2)) {
          param_4 = fVar15 * fStack000000000000001c;
          fStack00000000000000b4 = fVar17 * fStack000000000000001c + fStack00000000000000b4;
          unaff_s9 = param_4 + unaff_s9;
          fStack00000000000000b0 = fVar13 * fStack000000000000001c + fStack00000000000000b0;
        }
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        param_3 = (ulong)(uint)fStack0000000000000054;
        fVar13 = SQRT(fVar15 * fVar15 + fVar17 * fVar17);
        if (fVar13 <= fStack0000000000000054) {
          if (DAT_06db4c71 == '\0') {
            FUN_02d965b8(PTR_DAT_069fb978);
            DAT_06db4c71 = '\x01';
          }
          pfVar9 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
          unaff_s11 = *pfVar9;
          unaff_s12 = pfVar9[1];
          unaff_s15 = pfVar9[2];
        }
        else {
          unaff_s15 = fVar17 / fVar13;
          unaff_s11 = -fVar15 / fVar13;
          param_3 = 0;
          unaff_s12 = 0.0 / fVar13;
        }
        if (0 < *(int *)(unaff_x19 + 0x18)) goto code_r0x031af878;
        iVar7 = unaff_w29 + 1;
      } while( true );
    }
    goto LAB_031af96c;
  }
  goto LAB_031b0818;
code_r0x031af878:
  unaff_w25 = 0;
  fVar15 = fStack0000000000000058 / fStack000000000000005c;
  fVar17 = 1.0;
  if (fVar15 <= 1.0) {
    fVar17 = fVar15;
  }
  fVar13 = 0.0;
  if (0.0 <= fVar15) {
    fVar13 = fVar17;
  }
  fVar17 = fVar15;
  if (fStack0000000000000044 != 1.0) {
    fVar17 = 1.0;
  }
  iStack0000000000000098 = unaff_w29 * iStack000000000000003c;
  iStack0000000000000050 = unaff_w29 + 1;
  in_stack_00000060._4_4_ = iStack0000000000000050 * iStack000000000000003c;
  fVar14 = fVar13 * fVar13 * 3.0 - fVar13 * fVar13 * (fVar13 + fVar13);
  fVar17 = fVar15 * fVar17;
  if (iStack0000000000000028 == 0) {
    fVar17 = fVar14 + (1.0 - fVar14) * 0.0;
  }
  fVar15 = 1.0;
  if (fVar17 <= 1.0) {
    fVar15 = fVar17;
  }
  unaff_s8 = 0.0;
  if (0.0 <= fVar17) {
    unaff_s8 = fVar15;
  }
  fStack00000000000000a0 = fStack0000000000000058 / fStack0000000000000038;
  fStack000000000000008c = fStack0000000000000048 + fStack0000000000000030 * unaff_s8;
  fStack0000000000000080 = fStack000000000000004c + fStack000000000000002c * unaff_s8;
  fStack0000000000000094 = unaff_s15 * fStack000000000000008c;
  fStack0000000000000090 = unaff_s12 * fStack000000000000008c;
  fStack000000000000009c = fStack0000000000000040 + fStack0000000000000034 * fVar13;
  fStack000000000000008c = unaff_s11 * fStack000000000000008c;
  fStack0000000000000088 = unaff_s15 * fStack0000000000000080;
  fVar17 = unaff_s12 * fStack0000000000000080;
  fStack0000000000000080 = unaff_s11 * fStack0000000000000080;
  unaff_x22 = in_stack_00000068;
  fStack0000000000000084 = fVar17;
LAB_031af96c:
  fVar13 = (float)FUN_0409cb84();
  fVar15 = (float)FUN_0409cb84();
  FUN_0409cb84();
  lVar12 = *in_stack_000000a8;
  lVar11 = FUN_0634bb04();
  if (lVar11 == 0) goto LAB_031b0818;
  fVar13 = fVar13 + unaff_s8 * (fVar15 * fStack00000000000000a4 - fVar13);
  param_3 = (ulong)(uint)(fVar17 + fStack00000000000000b0 + unaff_s12 * fVar13);
  param_4 = unaff_s9 + unaff_s15 * fVar13;
  uVar16 = FUN_0635f58c(fStack00000000000000b4 + unaff_s11 * fVar13,lVar11,0);
  if (lVar12 == 0) goto LAB_031b0818;
  lVar10 = *(long *)(lVar12 + 0x10);
  lVar11 = *(long *)PTR_DAT_069fbee0;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar10 == 0) goto LAB_031b0818;
  uVar2 = *(uint *)(lVar12 + 0x18);
  if (uVar2 < *(uint *)(lVar10 + 0x18)) {
    lVar10 = lVar10 + (long)(int)uVar2 * 0xc;
    *(uint *)(lVar12 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar10 + 0x20) = uVar16;
    *(int *)(lVar10 + 0x24) = (int)param_3;
    *(float *)(lVar10 + 0x28) = param_4;
  }
  else {
    FUN_0409f624(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
  }
  lVar11 = *unaff_x22;
  if (*(int *)(unaff_x23 + 0x120) == 2) {
    if ((unaff_x27 == 0) || (uVar16 = FUN_04059a68(), lVar11 == 0)) goto LAB_031b0818;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar10 = *(long *)PTR_DAT_069ff720;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_031b0818;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (*(uint *)(lVar12 + 0x18) <= uVar2) {
      lVar12 = *(long *)(lVar10 + 0x20);
      fVar17 = fStack000000000000009c;
LAB_031afb5c:
      param_3 = (ulong)(uint)fVar17;
      FUN_0409ce84(lVar11,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x70));
      fVar15 = (float)param_3;
      goto joined_r0x031afb40;
    }
    lVar12 = lVar12 + (long)(int)uVar2 * 8;
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar12 + 0x20) = uVar16;
    fVar17 = fStack000000000000009c;
  }
  else {
    if ((unaff_x27 == 0) || (uVar16 = FUN_04059a68(), lVar11 == 0)) goto LAB_031b0818;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar10 = *(long *)PTR_DAT_069ff720;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_031b0818;
    uVar2 = *(uint *)(lVar11 + 0x18);
    if (*(uint *)(lVar12 + 0x18) <= uVar2) {
      lVar12 = *(long *)(lVar10 + 0x20);
      fVar17 = fStack00000000000000a0;
      goto LAB_031afb5c;
    }
    lVar12 = lVar12 + (long)(int)uVar2 * 8;
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    *(undefined4 *)(lVar12 + 0x20) = uVar16;
    fVar17 = fStack00000000000000a0;
  }
  fVar15 = (float)param_3;
  *(float *)(lVar12 + 0x24) = fVar17;
joined_r0x031afb40:
  if (unaff_w25 == 0) {
    lVar12 = *in_stack_00000078;
    lVar11 = FUN_0634bb04();
    fVar17 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
    if (lVar11 == 0) goto LAB_031b0818;
    fVar15 = fStack0000000000000090 + fVar15;
    param_4 = fStack0000000000000094 + param_4;
    uVar16 = FUN_0635f58c(fStack000000000000008c + fVar17,lVar11,0);
    if (lVar12 == 0) goto LAB_031b0818;
    lVar11 = *(long *)(lVar12 + 0x10);
    lVar10 = *(long *)PTR_DAT_069fbee0;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_031b0818;
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar11 + 0x20) = uVar16;
      *(float *)(lVar11 + 0x24) = fVar15;
      *(float *)(lVar11 + 0x28) = param_4;
    }
    else {
      FUN_0409f624(lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar12 = *in_stack_00000070;
    lVar11 = FUN_0634bb04();
    fVar17 = (float)FUN_0409f2f4(in_stack_000000b8,unaff_w29,*(undefined8 *)PTR_DAT_069fd088);
    if (lVar11 == 0) goto LAB_031b0818;
    param_3 = (ulong)(uint)(fStack0000000000000084 + fVar15);
    param_4 = fStack0000000000000088 + param_4;
    uVar16 = FUN_0635f58c(fStack0000000000000080 + fVar17,lVar11,0);
    puVar3 = PTR_DAT_069fbee0;
    if (lVar12 == 0) goto LAB_031b0818;
    lVar11 = *(long *)(lVar12 + 0x10);
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_031b0818;
    uVar2 = *(uint *)(lVar12 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar2 * 0xc;
      *(uint *)(lVar12 + 0x18) = uVar2 + 1;
      *(undefined4 *)(lVar11 + 0x20) = uVar16;
      *(int *)(lVar11 + 0x24) = (int)param_3;
      *(float *)(lVar11 + 0x28) = param_4;
    }
    else {
      FUN_0409f624(lVar12,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (unaff_x28 == 0) goto LAB_031b0818;
  iVar7 = FUN_03fb3b24();
  if (unaff_w25 < *(int *)(unaff_x28 + 0x18) + -2) {
    iVar8 = FUN_03fb3b24();
    bVar6 = iVar7 == iVar8;
  }
  else {
    bVar6 = true;
  }
  if (unaff_w25 == *(int *)(unaff_x19 + 0x18) + -1) goto LAB_031b0358;
  bVar6 = (bool)(bVar6 ^ 1);
  if (unaff_w29 == *(int *)(in_stack_000000b8 + 0x18) + -1) {
    bVar6 = true;
  }
  if (!bVar6) goto System_Array__InternalArray__ICollection_Remove<OVRDisplay_EyeRenderDesc>;
  goto LAB_031b0358;
System_Array__InternalArray__ICollection_Remove<OVRDisplay_EyeRenderDesc>:
  lVar11 = *unaff_x24;
  if ((uVar5 & 1) == 0) {
    if ((lVar11 != 0) &&
       (lVar11 = FUN_0400ff1c(lVar11,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 != 0)) {
      lVar12 = *(long *)(lVar11 + 0x10);
      lVar10 = *(long *)PTR_DAT_069fc3e0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iStack0000000000000098 + unaff_w25;
        }
        else {
          FUN_03fb3e1c(lVar11,iStack0000000000000098 + unaff_w25,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        if ((*unaff_x24 != 0) &&
           (lVar11 = FUN_0400ff1c(*unaff_x24,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 != 0)) {
          lVar12 = *(long *)(lVar11 + 0x10);
          lVar10 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar2 = *(uint *)(lVar11 + 0x18);
            iVar8 = in_stack_00000060._4_4_ + unaff_w25 + 1;
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iVar8;
            }
            else {
              FUN_03fb3e1c(lVar11,iVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if ((*unaff_x24 != 0) &&
               (lVar11 = FUN_0400ff1c(*unaff_x24,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 != 0
               )) {
              FUN_0665005c(*(undefined8 *)(lVar11 + 0x10));
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
  if ((lVar11 == 0) ||
     (lVar11 = FUN_0400ff1c(lVar11,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 == 0))
  goto LAB_031b0818;
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_031b0818;
  uVar2 = *(uint *)(lVar11 + 0x18);
  iVar8 = iStack0000000000000098 + unaff_w25;
  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iVar8;
  }
  else {
    FUN_03fb3e1c(lVar11,iVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  if ((*unaff_x24 == 0) ||
     (lVar11 = FUN_0400ff1c(*unaff_x24,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 == 0))
  goto LAB_031b0818;
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_031b0818;
  uVar2 = *(uint *)(lVar11 + 0x18);
  iVar1 = iStack0000000000000098 + unaff_w25 + 1;
  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
  }
  else {
    FUN_03fb3e1c(lVar11,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  if ((*unaff_x24 == 0) ||
     (lVar11 = FUN_0400ff1c(*unaff_x24,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 == 0))
  goto LAB_031b0818;
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_031b0818;
  uVar2 = *(uint *)(lVar11 + 0x18);
  iVar1 = in_stack_00000060._4_4_ + unaff_w25;
  unaff_w21 = iVar1 + 1;
  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = unaff_w21;
  }
  else {
    FUN_03fb3e1c(lVar11,unaff_w21,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                );
  }
  if ((*unaff_x24 == 0) ||
     (lVar11 = FUN_0400ff1c(*unaff_x24,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 == 0))
  goto LAB_031b0818;
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_031b0818;
  uVar2 = *(uint *)(lVar11 + 0x18);
  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
  }
  else {
    FUN_03fb3e1c(lVar11,iVar1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  if ((*unaff_x24 == 0) ||
     (lVar11 = FUN_0400ff1c(*unaff_x24,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), lVar11 == 0))
  goto LAB_031b0818;
  lVar12 = *(long *)(lVar11 + 0x10);
  lVar10 = *(long *)PTR_DAT_069fc3e0;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_031b0818;
  uVar2 = *(uint *)(lVar11 + 0x18);
  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
    *(int *)(lVar12 + (long)(int)uVar2 * 4 + 0x20) = iVar8;
  }
  else {
    FUN_03fb3e1c(lVar11,iVar8,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  if ((*unaff_x24 == 0) ||
     (param_5 = FUN_0400ff1c(*unaff_x24,iVar7,*(undefined8 *)PTR_DAT_06a0b3b8), param_5 == 0))
  goto LAB_031b0818;
  in_w10 = *(int *)(param_5 + 0x1c);
  param_1 = *(long *)(param_5 + 0x10);
  in_x9 = (long *)PTR_DAT_069fc3e0;
  unaff_x22 = in_stack_00000068;
  goto code_r0x031b0270;
}


