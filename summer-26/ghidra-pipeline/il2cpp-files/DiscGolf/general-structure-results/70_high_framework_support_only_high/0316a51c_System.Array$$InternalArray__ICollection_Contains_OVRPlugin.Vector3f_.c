/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector3f>
ENTRY_POINT: 0316a51c
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


undefined8
System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector3f>
          (undefined4 *param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  float *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *plVar20;
  int iVar21;
  undefined8 uVar22;
  byte bVar23;
  int iVar24;
  long unaff_x23;
  ulong unaff_x24;
  undefined4 *puVar25;
  undefined1 *unaff_x26;
  float *unaff_x27;
  long *unaff_x28;
  undefined **unaff_x29;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  double dVar32;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  uint uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined8 uVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float unaff_s15;
  float fVar50;
  int iVar51;
  undefined8 in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  long *in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  float fStack000000000000008c;
  long *in_stack_00000090;
  long in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  float *in_stack_000000d8;
  long *in_stack_000000e0;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  int iStack0000000000000108;
  float fStack000000000000010c;
  ulong uStack0000000000000110;
  undefined8 in_stack_00000120;
  float fStack0000000000000128;
  float fStack000000000000012c;
  long in_stack_00000148;
  float fStack0000000000000164;
  ulong in_stack_00000168;
  long in_stack_00000170;
  undefined4 uStack00000000000001a0;
  float fStack00000000000001a4;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  float in_stack_000001b8;
  float fStack00000000000001c0;
  float fStack00000000000001c4;
  float in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  float in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_00000278;
  float in_stack_0000027c;
  float in_stack_00000280;
  
  fStack0000000000000164 = in_stack_00000280;
  do {
    fVar37 = SQRT(param_3 * param_3 + (float)param_4 + (float)((ulong)param_4 >> 0x20));
    uVar15 = (ulong)(uint)fVar37;
    if (fVar37 <= (float)param_1[0x4f]) {
      if (*(char *)((long)unaff_x29 + 0xc71) == '\0') {
        FUN_02d965b8(unaff_x28);
        *(undefined1 *)((long)unaff_x29 + 0xc71) = 1;
      }
      uVar22 = **(undefined8 **)(*unaff_x28 + 0xb8);
      param_3 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
    }
    else {
      param_3 = param_3 / fVar37;
      uVar22 = CONCAT44((float)((ulong)param_2 >> 0x20) / fVar37,(float)param_2 / fVar37);
    }
    if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
    fVar37 = unaff_x27[2];
    uVar43 = *(undefined8 *)unaff_x27;
    uVar45 = *(undefined8 *)unaff_x19;
    fVar46 = unaff_x19[2];
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar26 = (float)uVar43 - (float)uVar45;
    fVar33 = (float)((ulong)uVar43 >> 0x20) - (float)((ulong)uVar45 >> 0x20);
    fStack00000000000001d4 =
         SQRT((fVar37 - fVar46) * (fVar37 - fVar46) + fVar26 * fVar26 + fVar33 * fVar33);
    if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
    uStack0000000000000110 = (ulong)(uint)in_stack_00000278;
    fVar37 = *unaff_x27;
    fVar46 = unaff_x27[2];
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    in_stack_00000230 =
         in_stack_00000230 +
         SQRT((fVar37 - in_stack_00000278) * (fVar37 - in_stack_00000278) +
              (fVar46 - fStack0000000000000164) * (fVar46 - fStack0000000000000164));
    fVar37 = 0.0;
    if (unaff_x24 != 1) {
      fVar37 = fStack000000000000010c;
    }
    fVar46 = fVar37;
    lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
    FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
    if (fVar37 < fStack00000000000001d4 - fStack000000000000010c) {
      fVar26 = *(float *)((ulong)&stack0x00000278 | 4);
      do {
        if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
        uVar43 = *(undefined8 *)unaff_x27;
        fVar46 = unaff_x27[2];
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar33 = (float)uVar22 * fVar37 + in_stack_00000278;
        fVar34 = (float)((ulong)uVar22 >> 0x20) * fVar37 + fVar26;
        uVar45 = CONCAT44(fVar34,fVar33);
        fVar35 = param_3 * fVar37 + fStack0000000000000164;
        fVar33 = fVar33 - (float)uVar43;
        fVar34 = fVar34 - (float)((ulong)uVar43 >> 0x20);
        fVar46 = SQRT((fVar35 - fVar46) * (fVar35 - fVar46) + fVar33 * fVar33 + fVar34 * fVar34);
        uVar15 = (ulong)(uint)fVar46;
        if (fStack00000000000000b0 < fVar46) {
          _uStack00000000000001b0 = uVar45;
          in_stack_000001b8 = fVar35;
          if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
            if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
          }
          if ((*(long *)(unaff_x23 + 0x68) == 0) ||
             (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
             lVar10 == 0)) goto LAB_03168190;
          if (*(float *)(lVar10 + 0x100) == 0.0) {
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x104) != 0.0) goto LAB_0316a920;
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x110) != 0.0) goto LAB_0316a920;
            if ((*(long *)(unaff_x23 + 0x68) == 0) ||
               (lVar10 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
               , lVar10 == 0)) goto LAB_03168190;
            if (*(float *)(lVar10 + 0x114) != 0.0) goto LAB_0316a920;
            lVar10 = *in_stack_000000e0;
            if (lVar10 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar40 = *(uint *)(lVar10 + 0x18);
            if (uVar40 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar40 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar40 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
LAB_0316a920:
            if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
            fVar46 = *in_stack_000000d8;
            uVar43 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21);
            FUN_0316f6a0(fVar37 + fVar46,fStack00000000000000b4,uVar43,uVar43,&stack0x0000022c,
                         &stack0x00000228,&stack0x00000224,&stack0x00000218,&stack0x000001b0,
                         &stack0x00000214);
          }
          puVar2 = PTR_DAT_069fbee0;
          lVar10 = *(long *)(unaff_x26 + 0x20);
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          uVar15 = (ulong)(uint)in_stack_000001b8;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar10 + 0x18);
          if (uVar40 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar40 * 0xc;
            *(uint *)(lVar10 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar14 + 0x20) = uStack00000000000001b0;
            *(undefined4 *)(lVar14 + 0x24) = uStack00000000000001b4;
            *(float *)(lVar14 + 0x28) = in_stack_000001b8;
          }
          else {
            FUN_0409f624(lVar10,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
          }
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar9 + 0x18);
          if (uVar40 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = *in_stack_000000b8;
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar18 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar10 + 0x18);
          if (uVar40 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar40 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                        );
          }
          lVar10 = *(long *)(unaff_x26 + 0x28);
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar18 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar10 + 0x18);
          if (uVar40 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar40 + 1;
            *(float *)(lVar14 + (long)(int)uVar40 * 4 + 0x20) = fVar37 / fStack00000000000001d4;
          }
          else {
            FUN_04059d64(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
          }
        }
        fVar37 = fVar37 + fStack000000000000010c;
        fVar46 = fStack000000000000010c;
      } while (fVar37 < fStack00000000000001d4 - fStack000000000000010c);
    }
    fStack000000000000012c = (float)uVar15;
    if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
      if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
      lVar10 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                            *(undefined8 *)PTR_DAT_06a0b440);
      fStack000000000000012c = (float)uVar15;
      if (lVar10 == 0) goto LAB_03168190;
      if (*(int *)(lVar10 + 0x6c) == 1) {
        if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
        iVar51 = 0;
        puVar25 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
        lVar10 = *(long *)(unaff_x26 + 0x28);
        while (fStack000000000000012c = (float)uVar15, iVar51 < *(int *)(lVar10 + 0x18)) {
          uVar15 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
          if ((((uVar15 <= unaff_x20) || (uVar15 <= unaff_x24)) || (uVar15 <= in_stack_00000168)) ||
             (uVar15 <= unaff_x24 + 2)) goto LAB_0316f2c4;
          uVar39 = *puVar25;
          fVar46 = (float)puVar25[1];
          uVar40 = puVar25[2];
          fVar37 = *unaff_x19;
          fVar26 = unaff_x19[1];
          fVar33 = unaff_x19[2];
          FUN_04059a68(lVar10,iVar51,*(undefined8 *)PTR_DAT_06a0a108);
          FUN_0316f340(uVar39,fVar46,uVar40,fVar37,fVar26,fVar33);
          unaff_x26 = &stack0x00000218;
          if (((in_stack_00000238 == 0) ||
              (uVar39 = FUN_0409f2f4(in_stack_00000238,iVar51,*(undefined8 *)PTR_DAT_069fd088),
              lVar9 == 0)) ||
             (fVar37 = (float)FUN_04059a68(lVar9,iVar51,*(undefined8 *)PTR_DAT_06a0a108),
             in_stack_00000238 == 0)) goto LAB_03168190;
          fVar46 = fVar46 + fVar37;
          uVar15 = (ulong)uVar40;
          FUN_0409f350(uVar39,in_stack_00000238,iVar51,*(undefined8 *)PTR_DAT_06a0b7d0);
          iVar51 = iVar51 + 1;
          lVar10 = in_stack_00000240;
          unaff_s15 = in_stack_00000120._4_4_;
          if (in_stack_00000240 == 0) goto LAB_03168190;
        }
      }
    }
    puVar2 = PTR_DAT_069fbee0;
    lVar9 = *(long *)(unaff_x26 + 0x20);
    if (lVar9 == 0) goto LAB_03168190;
    if (*(int *)(lVar9 + 0x18) == 0) {
      if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar10 = *(long *)(lVar9 + 0x10);
      fVar37 = *unaff_x27;
      fVar46 = unaff_x27[1];
      fVar26 = unaff_x27[2];
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      if (*(int *)(lVar10 + 0x18) == 0) {
        FUN_0409f624(lVar9,*(undefined8 *)
                            (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
      }
      else {
        *(undefined4 *)(lVar9 + 0x18) = 1;
        *(float *)(lVar10 + 0x20) = fVar37;
        *(float *)(lVar10 + 0x24) = fVar46;
        *(float *)(lVar10 + 0x28) = fVar26;
      }
      if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
      fVar37 = *unaff_x27;
      fVar26 = unaff_x27[1];
      fStack000000000000012c = unaff_x27[2];
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar9 = *(long *)(unaff_x26 + 0x28);
      fStack000000000000012c = fStack0000000000000164 - fStack000000000000012c;
      fVar46 = fStack000000000000012c * fStack000000000000012c;
      fStack00000000000001d4 =
           SQRT(fVar46 + (in_stack_00000278 - fVar37) * (in_stack_00000278 - fVar37) +
                         (in_stack_0000027c - fVar26) * (in_stack_0000027c - fVar26));
      if (lVar9 == 0) goto LAB_03168190;
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      uVar40 = *(uint *)(lVar9 + 0x18);
      if (uVar40 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar40 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0x3f800000;
      }
      else {
        FUN_04059d64(0x3f800000,lVar9,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *in_stack_000000e0;
      if (lVar9 == 0) goto LAB_03168190;
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      uVar40 = *(uint *)(lVar9 + 0x18);
      if (uVar40 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar40 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *in_stack_000000b8;
      if (lVar9 == 0) goto LAB_03168190;
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_03168190;
      uVar40 = *(uint *)(lVar9 + 0x18);
      if (uVar40 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar40 + 1;
        *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
    unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    puVar2 = PTR_DAT_069fd088;
    unaff_x28 = (long *)PTR_DAT_069fb978;
    lVar9 = *(long *)(unaff_x26 + 0x20);
    if (lVar9 == 0) goto LAB_03168190;
    fStack0000000000000128 = fVar46;
    if (0 < *(int *)(lVar9 + 0x18)) {
      fVar37 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088
                                  );
      if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
      fStack000000000000012c = fStack000000000000012c - unaff_x27[2];
      fStack0000000000000128 = fStack00000000000000a4;
      if (fStack00000000000000a4 <=
          fStack000000000000012c * fStack000000000000012c +
          (fVar37 - *unaff_x27) * (fVar37 - *unaff_x27) +
          (fVar46 - unaff_x27[1]) * (fVar46 - unaff_x27[1])) {
        lVar9 = *(long *)(unaff_x26 + 0x20);
        if (lVar9 == 0) goto LAB_03168190;
        fVar37 = fStack00000000000000a4;
        fVar46 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
        if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
        fVar26 = *unaff_x27;
        fVar34 = unaff_x27[1];
        fVar33 = unaff_x27[2];
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        puVar3 = PTR_DAT_069fbee0;
        lVar9 = *(long *)(unaff_x26 + 0x20);
        if (fStack00000000000000b0 <=
            SQRT((fStack000000000000012c - fVar33) * (fStack000000000000012c - fVar33) +
                 (fVar46 - fVar26) * (fVar46 - fVar26) + (fVar37 - fVar34) * (fVar37 - fVar34))) {
          if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          fVar37 = *unaff_x27;
          fVar46 = unaff_x27[1];
          fStack000000000000012c = unaff_x27[2];
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar9 + 0x18);
          if (uVar40 < *(uint *)(lVar10 + 0x18)) {
            lVar10 = lVar10 + (long)(int)uVar40 * 0xc;
            *(uint *)(lVar9 + 0x18) = uVar40 + 1;
            *(float *)(lVar10 + 0x20) = fVar37;
            *(float *)(lVar10 + 0x24) = fVar46;
            *(float *)(lVar10 + 0x28) = fStack000000000000012c;
          }
          else {
            FUN_0409f624(lVar9,*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
          }
          fVar37 = fStack00000000000001d4;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          fVar26 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
          if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
          fVar33 = *unaff_x27;
          fVar35 = unaff_x27[1];
          fVar34 = unaff_x27[2];
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar9 = *(long *)(unaff_x26 + 0x28);
          fStack000000000000012c = fStack000000000000012c - fVar34;
          fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
          fStack00000000000001d4 =
               fVar37 + SQRT(fStack0000000000000128 +
                             (fVar26 - fVar33) * (fVar26 - fVar33) +
                             (fVar46 - fVar35) * (fVar46 - fVar35));
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar9 + 0x18);
          if (uVar40 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0x3f800000;
          }
          else {
            FUN_04059d64(0x3f800000,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *in_stack_000000e0;
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar9 + 0x18);
          if (uVar40 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
            ;
          }
        }
        else {
          if (lVar9 == 0) goto LAB_03168190;
          if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
          fStack000000000000012c = unaff_x27[2];
          fStack0000000000000128 = unaff_x27[1];
          FUN_0409f350(*unaff_x27,lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_06a0b7d0)
          ;
          lVar9 = *(long *)(unaff_x26 + 0x28);
          if (lVar9 == 0) goto LAB_03168190;
          FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_06a0b5c0)
          ;
        }
      }
    }
    lVar9 = *(long *)(unaff_x26 + 0x20);
    if (lVar9 == 0) goto LAB_03168190;
    iVar51 = *(int *)(lVar9 + 0x18);
    in_stack_00000278 = (float)FUN_0409f2f4(lVar9,iVar51 + -1,*(undefined8 *)PTR_DAT_069fd088);
    lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
    *(float *)(in_stack_00000148 + 0x2c0) =
         *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
    if (lVar9 == 0) goto LAB_03168190;
    lVar10 = *(long *)(lVar9 + 0x10);
    lVar14 = *(long *)PTR_DAT_069fc3e0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_03168190;
    uVar40 = *(uint *)(lVar9 + 0x18);
    in_stack_000000d0._4_4_ = iVar51 + in_stack_000000d0._4_4_;
    if (uVar40 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar40 + 1;
      *(int *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = in_stack_000000d0._4_4_;
    }
    else {
      FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       lVar9 == 0)) goto LAB_03168190;
    iStack0000000000000108 = *(int *)(lVar9 + 0x6c);
    uVar15 = in_stack_00000168;
    in_stack_0000027c = fStack0000000000000128;
    fVar46 = fStack000000000000012c;
    fVar37 = in_stack_00000278;
LAB_0316c620:
    in_stack_00000168 = uVar15;
    unaff_x29 = &PTR_FUN_06db4000;
    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       fVar26 = fStack00000000000001d4, lVar9 == 0)) goto LAB_03168190;
    if (*(char *)(lVar9 + 0xb8) != '\0') {
      if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
      uVar22 = *(undefined8 *)(in_stack_00000148 + 0x20);
      uVar43 = *(undefined8 *)(unaff_x26 + 0x28);
      uVar39 = *(undefined4 *)(in_stack_00000148 + 0x128);
      lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x24 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_06a0b440);
      if (lVar9 == 0) goto LAB_03168190;
      FUN_031098f4(uVar39,uStack000000000000006c,fVar26,uVar22,&stack0x00000238,uVar43,
                   &stack0x00000248,*(undefined1 *)(lVar9 + 0xb8),*(undefined8 *)(unaff_x26 + 0x78),
                   in_stack_00000070,in_stack_000000e0);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                 *(undefined8 *)PTR_DAT_06a0b3a0);
    if (*in_stack_00000078 == 0) goto LAB_03168190;
    FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                 *(undefined8 *)PTR_DAT_06a0b3d8);
    fVar33 = fStack0000000000000088;
    fVar26 = in_stack_00000080._4_4_;
    FUN_0316fb80(fStack000000000000008c,in_stack_00000148,extraout_x1,unaff_x24 & 0xffffffff,
                 in_stack_00000170,&stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
    if ((int)unaff_x24 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
      FUN_0317018c(in_stack_00000148,*(undefined8 *)(in_stack_00000148 + 0x68),
                   unaff_x24 & 0xffffffff,in_stack_00000170,&stack0x00000258,0);
    }
    puVar3 = PTR_DAT_069ff178;
    puVar2 = PTR_DAT_069fd088;
    lVar9 = *in_stack_00000090;
    if (lVar9 == 0) goto LAB_03168190;
    lVar10 = *(long *)(lVar9 + 0x10);
    fVar34 = *in_stack_000000d8;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_03168190;
    uVar40 = *(uint *)(lVar9 + 0x18);
    if (uVar40 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar40 + 1;
      *(float *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = fVar34;
    }
    else {
      FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
      lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
      lVar14 = *(long *)(unaff_x26 + 0x78);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar34 = (float)FUN_0409f2f4(lVar14,*(int *)(lVar14 + 0x18) + -1,*(undefined8 *)puVar2);
      lVar14 = *(long *)(unaff_x26 + 0x78);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      fVar35 = fVar33;
      fVar49 = fVar26;
      fVar27 = (float)FUN_0409f2f4(lVar14,*(int *)(lVar14 + 0x18) + -2,*(undefined8 *)puVar2);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = fVar34 - fVar27;
      fVar33 = fVar33 - fVar35;
      fVar26 = fVar26 - fVar49;
      fVar35 = SQRT(fVar26 * fVar26 + fVar34 * fVar34 + fVar33 * fVar33);
      if (fVar35 <= DAT_010fd13c) {
        if (DAT_06db4c71 == '\0') {
          FUN_02d965b8(unaff_x28);
          DAT_06db4c71 = '\x01';
        }
        pfVar17 = *(float **)(*unaff_x28 + 0xb8);
        fVar34 = *pfVar17;
        fVar33 = pfVar17[1];
        fVar26 = pfVar17[2];
      }
      else {
        fVar34 = fVar34 / fVar35;
        fVar33 = fVar33 / fVar35;
        fVar26 = fVar26 / fVar35;
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar10 + 0x94) = fVar34;
      *(float *)(lVar10 + 0x98) = fVar33;
      *(float *)(lVar10 + 0x9c) = fVar26;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(float *)(lVar9 + 0x88) = fVar34;
      *(float *)(lVar9 + 0x8c) = fVar33;
      *(float *)(lVar9 + 0x90) = fVar26;
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
    }
    if (unaff_x24 < 2) {
      if (unaff_x24 == 1) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        fVar35 = fVar33;
        fVar49 = fVar26;
        fVar27 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar34 = fVar34 - fVar27;
        fVar33 = fVar33 - fVar35;
        fVar26 = fVar26 - fVar49;
        fVar35 = SQRT(fVar26 * fVar26 + fVar34 * fVar34 + fVar33 * fVar33);
        if (fVar35 <= DAT_010fd13c) {
          if (DAT_06db4c71 == '\0') {
            FUN_02d965b8(unaff_x28);
            DAT_06db4c71 = '\x01';
          }
          pfVar17 = *(float **)(*unaff_x28 + 0xb8);
          fVar34 = *pfVar17;
          fVar33 = pfVar17[1];
          fVar26 = pfVar17[2];
        }
        else {
          fVar34 = fVar34 / fVar35;
          fVar33 = fVar33 / fVar35;
          fVar26 = fVar26 / fVar35;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar10 + 0x94) = fVar34;
        *(float *)(lVar10 + 0x98) = fVar33;
        *(float *)(lVar10 + 0x9c) = fVar26;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        *(float *)(lVar9 + 0x88) = fVar34;
        *(float *)(lVar9 + 0x8c) = fVar33;
        *(float *)(lVar9 + 0x90) = fVar26;
      }
    }
    else if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar51 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      puVar2 = PTR_DAT_069fd088;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar9 + 0xbc) + 1 < iVar51) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(int *)(lVar9 + 0x6c) != 3) {
          lVar10 = *(long *)(unaff_x26 + 0x78);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar49 = (float)FUN_0409f2f4(lVar10,*(int *)(lVar9 + 0xbc) + 1,*(undefined8 *)puVar2);
          lVar10 = *(long *)(unaff_x26 + 0x78);
          fVar34 = fVar33;
          fVar35 = fVar26;
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          fVar27 = (float)FUN_0409f2f4(lVar10,*(undefined4 *)(lVar9 + 0xbc),*(undefined8 *)puVar2);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar29 = DAT_010fd13c;
          fVar49 = fVar49 - fVar27;
          fVar27 = fVar33 - fVar34;
          fVar35 = fVar26 - fVar35;
          fVar26 = SQRT(fVar35 * fVar35 + fVar49 * fVar49 + fVar27 * fVar27);
          if (fVar26 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(unaff_x28);
              DAT_06db4c71 = '\x01';
            }
            pfVar17 = *(float **)(*unaff_x28 + 0xb8);
            fVar30 = *pfVar17;
            fVar27 = pfVar17[1];
            fVar26 = pfVar17[2];
          }
          else {
            fVar30 = fVar49 / fVar26;
            fVar27 = fVar27 / fVar26;
            fVar26 = fVar35 / fVar26;
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(float *)(lVar9 + 0x88) = fVar30;
          *(float *)(lVar9 + 0x8c) = fVar27;
          uVar22 = *unaff_x21;
          *(float *)(lVar9 + 0x90) = fVar26;
          uVar40 = *(uint *)(in_stack_00000098 + 0x18);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar22);
          if (unaff_x24 != uVar40) {
            fVar33 = fVar34;
          }
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar33 = fVar33 - fVar34;
          fVar34 = SQRT(fVar35 * fVar35 + fVar49 * fVar49 + fVar33 * fVar33);
          if (fVar34 <= fVar29) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(unaff_x28);
              DAT_06db4c71 = '\x01';
            }
            uVar22 = **(undefined8 **)(*unaff_x28 + 0xb8);
            fVar35 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
          }
          else {
            fVar35 = fVar35 / fVar34;
            uVar22 = CONCAT44(fVar33 / fVar34,fVar49 / fVar34);
            fVar26 = fVar49;
          }
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          *(undefined8 *)(lVar9 + 0x94) = uVar22;
          *(float *)(lVar9 + 0x9c) = fVar35;
        }
      }
    }
    if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
      lVar10 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
      if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
      uVar22 = *(undefined8 *)(lVar10 + 0x48);
      *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar10 + 0x50);
      *(undefined8 *)(lVar9 + 0x54) = uVar22;
    }
    if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)in_stack_00000168) {
      if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
        uVar22 = *unaff_x21;
        *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar22);
        if (lVar9 == 0) goto LAB_03168190;
        uVar22 = *unaff_x21;
        *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar22);
        if (lVar9 == 0) goto LAB_03168190;
        uVar22 = *unaff_x21;
        *(undefined4 *)(lVar9 + 0xbc) = 0;
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar22);
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined4 *)(lVar9 + 0xc0) = 0;
        if (2 < *(int *)(in_stack_00000098 + 0x18)) {
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          fVar37 = *in_stack_000000d8;
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21
                               );
          if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
          uVar22 = *unaff_x21;
          *(float *)(lVar9 + 200) = fVar37 - *(float *)(lVar10 + 0xc0);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,uVar22);
          if (lVar9 == 0) goto LAB_03168190;
          fVar37 = *(float *)(lVar9 + 200);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21
                               );
          if (1000.0 <= fVar37) {
            if (lVar10 == 0) goto LAB_03168190;
            fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
            uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
            uVar22 = FUN_05362cb4(uVar22,*(undefined8 *)PTR_DAT_06a0c488,0);
          }
          else {
            if (lVar10 == 0) goto LAB_03168190;
            uVar22 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
            uVar22 = FUN_05362cb4(uVar22,*(undefined8 *)PTR_DAT_06a0c4f0,0);
          }
          if (lVar9 != 0) {
            *(undefined8 *)(lVar9 + 0xd0) = uVar22;
            LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar22);
            lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                 *unaff_x21);
            if (lVar9 != 0) {
              fVar37 = *(float *)(lVar9 + 0x4c);
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                   *unaff_x21);
              if (lVar9 != 0) {
                fVar46 = *(float *)(lVar9 + 0x4c);
                fVar26 = fVar37 - fVar46;
                if (DAT_06db4ece == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4ece = '\x01';
                }
                puVar2 = PTR_DAT_069fbb48;
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar34 = 0.0;
                fVar33 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar26 * fVar26) *
                              DAT_010fd194);
                fVar26 = DAT_010fcd14;
                if (DAT_010fcd14 <= fVar33) {
                  fVar26 = -1.0;
                  fVar33 = (in_stack_00000230 * 0.0 + ABS(fVar37 - fVar46) * 50.0 + 0.0) / fVar33;
                  fVar37 = 1.0;
                  if (fVar33 <= 1.0) {
                    fVar37 = fVar33;
                  }
                  fVar46 = -1.0;
                  if (-1.0 <= fVar33) {
                    fVar46 = fVar37;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    fVar26 = -1.0;
                    thunk_FUN_02df485c();
                  }
                  dVar32 = acos((double)fVar46);
                  fVar34 = (float)dVar32 * DAT_010fcf40;
                }
                fVar34 = 90.0 - fVar34;
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                if (fVar34 <= 10.0) {
                  uVar22 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                }
                else {
                  dVar32 = modf((double)fVar34,(double *)&stack0x00000298);
                  if (0.0 <= fVar34) {
                    if (dVar32 == 0.5) {
                      dVar32 = *(double *)(unaff_x26 + 0x80);
                      fVar26 = 1.0;
                      goto LAB_0316e5fc;
                    }
                    fStack00000000000001d0 = (float)(int)(fVar34 + 0.5);
                  }
                  else if (dVar32 == -0.5) {
                    dVar32 = *(double *)(unaff_x26 + 0x80);
                    fVar26 = -1.0;
LAB_0316e5fc:
                    fStack00000000000001d0 = (float)dVar32;
                    if (((long)dVar32 & 1U) != 0) {
                      fStack00000000000001d0 = (float)dVar32 + fVar26;
                    }
                  }
                  else {
                    fStack00000000000001d0 = (float)(int)(fVar34 + -0.5);
                  }
                  uVar22 = FUN_054fabf8(&stack0x000001d0,0);
                }
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0xd8) = uVar22;
                  LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar22);
                  lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                       *unaff_x21);
                  if (lVar9 != 0) {
                    fVar37 = *(float *)(lVar9 + 0x4c);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                         *unaff_x21);
                    if (lVar9 != 0) {
                      fVar46 = *(float *)(lVar9 + 0x4c);
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*unaff_x21);
                      if (lVar9 != 0) {
                        fVar33 = *(float *)(lVar9 + 0x48);
                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                             *(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
                        if (lVar9 != 0) {
                          fVar34 = *(float *)(lVar9 + 0x50);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                               *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
                          if (lVar9 != 0) {
                            fVar35 = *(float *)(lVar9 + 0x48);
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
                            ;
                            if (lVar9 != 0) {
                              fVar49 = *(float *)(lVar9 + 0x50);
                              if (DAT_06db4c77 == '\0') {
                                FUN_02d965b8(PTR_DAT_069fbb48);
                                DAT_06db4c77 = '\x01';
                              }
                              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              fVar34 = fVar34 - fVar49;
                              fVar33 = fVar33 - fVar35;
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,
                                                   *unaff_x21);
                              fStack00000000000001d0 =
                                   (ABS(fVar37 - fVar46) / SQRT(fVar33 * fVar33 + fVar34 * fVar34))
                                   * 100.0;
                              uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498
                                                    ,0);
                              if (lVar9 != 0) goto LAB_0316ea58;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_03168190;
        }
      }
      else {
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
        uVar22 = *unaff_x21;
        *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar22);
        if (lVar9 == 0) goto LAB_03168190;
        *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
        if (2 < *(int *)(in_stack_00000098 + 0x18)) {
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          fVar37 = *in_stack_000000d8;
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21
                               );
          if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
          uVar22 = *unaff_x21;
          *(float *)(lVar9 + 200) = fVar37 - *(float *)(lVar10 + 0xc0);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar22);
          if (lVar9 == 0) goto LAB_03168190;
          fVar37 = *(float *)(lVar9 + 200);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21
                               );
          if (1000.0 <= fVar37) {
            if (lVar10 == 0) goto LAB_03168190;
            fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
            uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
            uVar22 = FUN_05362cb4(uVar22,*(undefined8 *)PTR_DAT_06a0c488,0);
          }
          else {
            if (lVar10 == 0) goto LAB_03168190;
            uVar22 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
            uVar22 = FUN_05362cb4(uVar22,*(undefined8 *)PTR_DAT_06a0c4f0,0);
          }
          if (lVar9 == 0) goto LAB_03168190;
          *(undefined8 *)(lVar9 + 0xd0) = uVar22;
          LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar22);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar37 = *(float *)(lVar9 + 0x4c);
          lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
          if (lVar9 == 0) goto LAB_03168190;
          fVar46 = *(float *)(lVar9 + 0x4c);
          fVar26 = fVar37 - fVar46;
          if (DAT_06db4ece == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4ece = '\x01';
          }
          puVar2 = PTR_DAT_069fbb48;
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar34 = 0.0;
          fVar33 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar26 * fVar26) * DAT_010fd194);
          fVar26 = DAT_010fcd14;
          if (DAT_010fcd14 <= fVar33) {
            fVar26 = -1.0;
            fVar33 = (in_stack_00000230 * 0.0 + ABS(fVar37 - fVar46) * 50.0 + 0.0) / fVar33;
            fVar37 = 1.0;
            if (fVar33 <= 1.0) {
              fVar37 = fVar33;
            }
            fVar46 = -1.0;
            if (-1.0 <= fVar33) {
              fVar46 = fVar37;
            }
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              fVar26 = -1.0;
              thunk_FUN_02df485c();
            }
            dVar32 = acos((double)fVar46);
            fVar34 = (float)dVar32 * DAT_010fcf40;
          }
          fVar34 = 90.0 - fVar34;
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (fVar34 <= 10.0) {
            uVar22 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
          }
          else {
            dVar32 = modf((double)fVar34,(double *)&stack0x00000298);
            if (0.0 <= fVar34) {
              if (dVar32 == 0.5) {
                dVar32 = *(double *)(unaff_x26 + 0x80);
                fVar26 = 1.0;
                goto LAB_0316e5d0;
              }
              fStack00000000000001d0 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar32 == -0.5) {
              dVar32 = *(double *)(unaff_x26 + 0x80);
              fVar26 = -1.0;
LAB_0316e5d0:
              fStack00000000000001d0 = (float)dVar32;
              if (((long)dVar32 & 1U) != 0) {
                fStack00000000000001d0 = (float)dVar32 + fVar26;
              }
            }
            else {
              fStack00000000000001d0 = (float)(int)(fVar34 + -0.5);
            }
            uVar22 = FUN_054fabf8(&stack0x000001d0,0);
          }
          if (lVar9 == 0) goto LAB_03168190;
          *(undefined8 *)(lVar9 + 0xd8) = uVar22;
          LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar22);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar37 = *(float *)(lVar9 + 0x4c);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar46 = *(float *)(lVar9 + 0x4c);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar33 = *(float *)(lVar9 + 0x48);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar34 = *(float *)(lVar9 + 0x50);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar35 = *(float *)(lVar9 + 0x48);
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          if (lVar9 == 0) goto LAB_03168190;
          fVar49 = *(float *)(lVar9 + 0x50);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar34 = fVar34 - fVar49;
          fVar33 = fVar33 - fVar35;
          lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21)
          ;
          fStack00000000000001d0 =
               (ABS(fVar37 - fVar46) / SQRT(fVar33 * fVar33 + fVar34 * fVar34)) * 100.0;
          uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
          if (lVar9 == 0) goto LAB_03168190;
LAB_0316ea58:
          *(undefined8 *)(lVar9 + 0xe0) = uVar22;
          LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar22);
        }
      }
      fVar37 = 1000.0;
      if (1000.0 <= *in_stack_000000d8) {
        fVar37 = 1000.0;
        fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
        uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar13 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        uVar22 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar22 = FUN_05362cb4(uVar22,*puVar13,0);
      *(undefined8 *)(in_stack_00000148 + 0x2d0) = uVar22;
      LeanTween__value(in_stack_00000148 + 0x2d0,uVar22);
      if (*(int *)(in_stack_00000098 + 0x18) == 2) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        fVar46 = *(float *)(lVar9 + 200);
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        lVar10 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (1000.0 <= fVar46) {
          if (lVar10 == 0) goto LAB_03168190;
          fVar37 = 1000.0;
          fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
          uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
          uVar22 = FUN_05362cb4(uVar22,*(undefined8 *)PTR_DAT_06a0c488,0);
        }
        else {
          if (lVar10 == 0) goto LAB_03168190;
          uVar22 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
          uVar22 = FUN_05362cb4(uVar22,*(undefined8 *)PTR_DAT_06a0c4f0,0);
        }
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar9 + 0xd0) = uVar22;
        LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar22);
      }
      if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
        LeanTween__value();
      }
      puVar3 = PTR_DAT_06a0b440;
      puVar2 = PTR_DAT_069fd088;
      fVar46 = fVar37;
      if (iStack0000000000000058 == 0) goto LAB_0316ee54;
      if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
      fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)PTR_DAT_069fd088);
      if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
      FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
      lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
      puVar4 = PTR_DAT_06a0b7d0;
      puVar3 = PTR_DAT_069fbb48;
      if (lVar9 == 0) goto LAB_03168190;
      lVar10 = *(long *)(unaff_x26 + 0x78);
      fVar46 = *(float *)(lVar9 + 200) * 0.5;
      fVar34 = 5.0;
      if (fVar46 <= 5.0) {
        fVar34 = fVar46;
      }
      if (lVar10 == 0) goto LAB_03168190;
      uVar16 = (ulong)(uint)fStack0000000000000054;
      iVar51 = 1;
      fVar33 = fStack0000000000000050 * 10.0 + fVar33;
      uVar15 = (ulong)(uint)fVar33;
      fVar35 = fStack0000000000000054 * 10.0 + fVar26;
      fVar49 = 0.0;
      break;
    }
    unaff_x20 = in_stack_00000168 - 1;
    fStack00000000000001d4 = 0.0;
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
    if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
    uVar22 = *unaff_x21;
    *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar22);
    if (lVar9 == 0) goto LAB_03168190;
    *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
    iVar51 = (int)in_stack_00000168;
    if (1 < in_stack_00000168) {
      if (in_stack_00000168 == 2) {
        lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
        if (lVar9 == 0) goto LAB_03168190;
        iVar21 = 0;
        fVar26 = *in_stack_000000d8;
      }
      else {
        iVar21 = iVar51 + -2;
        lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*unaff_x21);
        fVar26 = *in_stack_000000d8;
        lVar10 = FUN_0400ff1c(in_stack_00000098,iVar21,*unaff_x21);
        if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_03168190;
        fVar26 = fVar26 - *(float *)(lVar10 + 0xc0);
      }
      puVar2 = PTR_DAT_06a0b440;
      *(float *)(lVar9 + 200) = fVar26;
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_03168190;
      fVar26 = *(float *)(lVar9 + 200);
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*(undefined8 *)puVar2);
      lVar10 = FUN_0400ff1c(in_stack_00000098,iVar21,*(undefined8 *)puVar2);
      if (1000.0 <= fVar26) {
        if (lVar10 == 0) goto LAB_03168190;
        fStack00000000000001d0 = *(float *)(lVar10 + 200) / 1000.0;
        uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
        puVar13 = (undefined8 *)PTR_DAT_06a0c488;
      }
      else {
        if (lVar10 == 0) goto LAB_03168190;
        uVar22 = FUN_054fad00(lVar10 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
      }
      uVar22 = FUN_05362cb4(uVar22,*puVar13,0);
      if (lVar9 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar9 + 0xd0) = uVar22;
      LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar22);
      puVar2 = PTR_DAT_06a0b440;
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar9 == 0) goto LAB_03168190;
      fVar26 = *(float *)(lVar9 + 0x4c);
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_03168190;
      fVar33 = *(float *)(lVar9 + 0x4c);
      if (DAT_06db4ece == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4ece = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar34 = fVar26 - fVar33;
      fVar49 = 0.0;
      fVar35 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar34 * fVar34) * DAT_010fd194);
      fVar34 = DAT_010fcd14;
      if (DAT_010fcd14 <= fVar35) {
        fVar34 = -1.0;
        fVar35 = (in_stack_00000230 * 0.0 + ABS(fVar26 - fVar33) * 50.0 + 0.0) / fVar35;
        fVar26 = 1.0;
        if (fVar35 <= 1.0) {
          fVar26 = fVar35;
        }
        fVar33 = -1.0;
        if (-1.0 <= fVar35) {
          fVar33 = fVar26;
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          fVar34 = -1.0;
          thunk_FUN_02df485c();
        }
        dVar32 = acos((double)fVar33);
        fVar49 = (float)dVar32 * DAT_010fcf40;
      }
      fVar49 = 90.0 - fVar49;
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*(undefined8 *)puVar2);
      if (fVar49 <= 10.0) {
        uVar22 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
        puVar13 = (undefined8 *)PTR_DAT_069fd088;
      }
      else {
        dVar32 = modf((double)fVar49,(double *)&stack0x00000298);
        puVar13 = (undefined8 *)PTR_DAT_069fd088;
        if (0.0 <= fVar49) {
          if (dVar32 == 0.5) {
            dVar32 = *(double *)(unaff_x26 + 0x80);
            fVar26 = 1.0;
            goto LAB_0316a098;
          }
          fStack00000000000001d0 = (float)(int)(fVar49 + 0.5);
        }
        else if (dVar32 == -0.5) {
          dVar32 = *(double *)(unaff_x26 + 0x80);
          fVar26 = -1.0;
LAB_0316a098:
          fStack00000000000001d0 = (float)dVar32;
          if (((long)dVar32 & 1U) != 0) {
            fStack00000000000001d0 = (float)dVar32 + fVar26;
          }
        }
        else {
          fStack00000000000001d0 = (float)(int)(fVar49 + -0.5);
        }
        uVar22 = FUN_054fabf8(&stack0x000001d0,0);
      }
      if (lVar9 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar9 + 0xd8) = uVar22;
      LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar22);
      unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*(undefined8 *)PTR_DAT_06a0b440);
      if (lVar9 == 0) goto LAB_03168190;
      fVar26 = *(float *)(lVar9 + 0x4c);
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      fVar33 = *(float *)(lVar9 + 0x4c);
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      fVar35 = *(float *)(lVar9 + 0x48);
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      fVar49 = *(float *)(lVar9 + 0x50);
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      fVar27 = *(float *)(lVar9 + 0x48);
      lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
      if (lVar9 == 0) goto LAB_03168190;
      fVar29 = *(float *)(lVar9 + 0x50);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar49 = fVar49 - fVar29;
      fVar35 = fVar35 - fVar27;
      lVar9 = FUN_0400ff1c(in_stack_00000098,iVar21,*unaff_x21);
      fVar27 = 100.0;
      fStack00000000000001d0 =
           (ABS(fVar26 - fVar33) / SQRT(fVar35 * fVar35 + fVar49 * fVar49)) * 100.0;
      uVar22 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
      if (lVar9 == 0) goto LAB_03168190;
      *(undefined8 *)(lVar9 + 0xe0) = uVar22;
      LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar22);
      lVar9 = *(long *)(unaff_x26 + 0x78);
      if (lVar9 == 0) goto LAB_03168190;
      if (2 < *(int *)(lVar9 + 0x18)) {
        fStack0000000000000104 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*puVar13);
        lVar9 = *(long *)(unaff_x26 + 0x78);
        if (lVar9 == 0) goto LAB_03168190;
        fVar26 = fVar27;
        fVar33 = fVar34;
        fVar35 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*puVar13);
        if (DAT_06db4c75 == '\0') {
          FUN_02d965b8(PTR_DAT_069fbb48);
          DAT_06db4c75 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fStack0000000000000104 = fStack0000000000000104 - fVar35;
        fVar27 = fVar27 - fVar26;
        fVar34 = fVar34 - fVar33;
        fStack00000000000000fc =
             SQRT(fVar34 * fVar34 +
                  fStack0000000000000104 * fStack0000000000000104 + fVar27 * fVar27);
        if (fStack00000000000000fc <= DAT_010fd13c) {
          if (DAT_06db4c71 == '\0') {
            FUN_02d965b8(unaff_x28);
            DAT_06db4c71 = '\x01';
          }
          pfVar17 = *(float **)(*unaff_x28 + 0xb8);
          fStack0000000000000104 = *pfVar17;
          fStack0000000000000100 = pfVar17[1];
          fStack00000000000000fc = pfVar17[2];
        }
        else {
          fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
          fStack0000000000000100 = fVar27 / fStack00000000000000fc;
          fStack00000000000000fc = fVar34 / fStack00000000000000fc;
        }
      }
    }
    lVar9 = *(long *)(unaff_x26 + 0x28);
    if (lVar9 == 0) goto LAB_03168190;
    lVar10 = *(long *)(unaff_x26 + 0x20);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_03168190;
    in_stack_00000230 = 0.0;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
       (uVar15 = in_stack_00000168 + 1, *(uint *)(in_stack_00000170 + 0x18) <= uVar15))
    goto LAB_0316f2c4;
    lVar9 = in_stack_00000170 + in_stack_00000168 * 0xc;
    lVar10 = in_stack_00000170 + uVar15 * 0xc;
    fStack00000000000000b4 = *in_stack_000000d8;
    unaff_x19 = (float *)(lVar9 + 0x20);
    fVar34 = *unaff_x19;
    fVar26 = *(float *)(lVar9 + 0x24);
    fVar33 = *(float *)(lVar9 + 0x28);
    unaff_x27 = (float *)(lVar10 + 0x20);
    fVar35 = *unaff_x27;
    fVar27 = *(float *)(lVar10 + 0x24);
    fVar49 = *(float *)(lVar10 + 0x28);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
       (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
       , lVar14 == 0)) goto LAB_03168190;
    fVar26 = fVar26 - fVar27;
    fVar33 = fVar33 - fVar49;
    uVar36 = (ulong)(uint)fVar33;
    uVar16 = (ulong)(uint)(fVar33 * fVar33);
    fStack00000000000000b4 =
         fStack00000000000000b4 +
         SQRT(fVar33 * fVar33 + (fVar34 - fVar35) * (fVar34 - fVar35) + fVar26 * fVar26);
    unaff_x24 = in_stack_00000168;
    if (*(int *)(lVar14 + 0x6c) == 0) {
      if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
         (*(uint *)(in_stack_00000170 + 0x18) <= uVar15)) goto LAB_0316f2c4;
      fVar34 = *unaff_x19;
      fVar26 = *(float *)(lVar9 + 0x24);
      fVar35 = *unaff_x27;
      fVar27 = *(float *)(lVar10 + 0x24);
      fVar33 = *(float *)(lVar9 + 0x28);
      fVar49 = *(float *)(lVar10 + 0x28);
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (in_stack_00000168 < 2) {
        bVar7 = false;
      }
      else {
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar51 + -2,*unaff_x21);
        if (lVar14 == 0) goto LAB_03168190;
        if (*(int *)(lVar14 + 0x6c) == 1) {
          bVar7 = true;
        }
        else {
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar51 + -2,*unaff_x21),
             lVar14 == 0)) goto LAB_03168190;
          bVar7 = *(int *)(lVar14 + 0x6c) == 2;
        }
      }
      fVar29 = 0.0;
      if (in_stack_00000168 == 1) {
        fVar29 = fStack0000000000000064;
      }
      fVar30 = fStack0000000000000068;
      if (in_stack_00000168 != *(int *)(in_stack_00000170 + 0x18) - 3) {
        fVar30 = 1.0;
      }
      if (fVar30 <= fVar29) {
        iStack0000000000000108 = 0;
      }
      else {
        fVar26 = fVar26 - fVar27;
        fVar33 = fVar33 - fVar49;
        fVar26 = DAT_010fcf10 /
                 SQRT(fVar33 * fVar33 + (fVar34 - fVar35) * (fVar34 - fVar35) + fVar26 * fVar26);
        do {
          uVar16 = *(ulong *)(in_stack_00000170 + 0x18);
          if (fVar26 + fVar29 <= 1.0) {
            bVar23 = 0;
          }
          else if (in_stack_00000168 == (int)uVar16 - 3) {
            bVar23 = *(byte *)(in_stack_00000148 + 0x84) ^ 1;
          }
          else {
            bVar23 = 0;
          }
          bVar8 = bVar23 != 0;
          fVar33 = 1.0;
          if (!bVar8) {
            fVar33 = fVar29;
          }
          if (((uVar16 & 0xffffffff) <= in_stack_00000168) || ((uVar16 & 0xffffffff) <= uVar15))
          goto LAB_0316f2c4;
          uVar41 = *(undefined4 *)(lVar9 + 0x24);
          uVar39 = *(undefined4 *)(lVar9 + 0x28);
          fVar34 = *unaff_x19;
          FUN_04059a68(in_stack_000000c8,in_stack_00000168 & 0xffffffff,
                       *(undefined8 *)PTR_DAT_06a0a108);
          fVar49 = in_stack_0000026c;
          fVar27 = in_stack_00000270;
          fVar29 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,fVar34,
                                       uVar41,uVar39);
          _fStack00000000000001c0 = CONCAT44(fVar49,fVar29);
          fVar34 = fStack0000000000000164;
          fVar35 = (float)uStack0000000000000110;
          if (iStack0000000000000108 == 3) {
            iStack0000000000000108 = 0;
            fVar34 = fVar27;
            fVar35 = fVar29;
            fStack0000000000000128 = fVar49;
            fStack000000000000012c = fVar27;
            fVar37 = fVar29;
          }
          in_stack_000001c8 = fVar27;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar28 = in_stack_000001c8;
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
          fVar48 = *unaff_x27;
          fVar42 = *(float *)(lVar10 + 0x24);
          fVar31 = fStack00000000000001c0;
          fVar38 = fStack00000000000001c4;
          fVar50 = *(float *)(lVar10 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar14 = *(long *)(unaff_x26 + 0x20);
          if (lVar14 == 0) goto LAB_03168190;
          fVar38 = fVar38 - fVar42;
          iVar51 = *(int *)(lVar14 + 0x18);
          fVar28 = fVar28 - fVar50;
          fVar42 = fVar28 * fVar28;
          fVar31 = SQRT(fVar42 + (fVar31 - fVar48) * (fVar31 - fVar48) + fVar38 * fVar38);
          if (iVar51 < 1) {
            lVar14 = *(long *)(unaff_x26 + 0x78);
            if (lVar14 == 0) goto LAB_03168190;
            iVar51 = *(int *)(lVar14 + 0x18);
            if (0 < iVar51) goto LAB_0316b4d8;
          }
          else {
LAB_0316b4d8:
            fVar38 = (float)FUN_0409f2f4(lVar14,iVar51 + -1,*(undefined8 *)PTR_DAT_069fd088);
            fStack00000000000000f0 = in_stack_000001c8;
            fStack00000000000000f8 = fStack00000000000001c0;
            fStack00000000000000f4 = fStack00000000000001c4;
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            plVar20 = (long *)PTR_DAT_069fb978;
            fStack00000000000000f8 = fStack00000000000000f8 - fVar38;
            fStack00000000000000f4 = fStack00000000000000f4 - fVar42;
            fStack00000000000000f0 = fStack00000000000000f0 - fVar28;
            fVar28 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                          fStack00000000000000f8 * fStack00000000000000f8 +
                          fStack00000000000000f4 * fStack00000000000000f4);
            if (fVar28 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              pfVar17 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
              fStack00000000000000f8 = *pfVar17;
              fStack00000000000000f4 = pfVar17[1];
              fStack00000000000000f0 = pfVar17[2];
              plVar20 = (long *)PTR_DAT_069fb978;
            }
            else {
              fStack00000000000000f8 = fStack00000000000000f8 / fVar28;
              fStack00000000000000f4 = fStack00000000000000f4 / fVar28;
              fStack00000000000000f0 = fStack00000000000000f0 / fVar28;
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
            }
            pfVar17 = *(float **)(*plVar20 + 0xb8);
            if (fStack00000000000000a4 <=
                (fStack00000000000000fc - pfVar17[2]) * (fStack00000000000000fc - pfVar17[2]) +
                (fStack0000000000000104 - *pfVar17) * (fStack0000000000000104 - *pfVar17) +
                (fStack0000000000000100 - pfVar17[1]) * (fStack0000000000000100 - pfVar17[1])) {
              if (DAT_06db4ece == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4ece = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              unaff_s15 = 0.0;
              fVar28 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                            fStack0000000000000100 * fStack0000000000000100 +
                            fStack0000000000000104 * fStack0000000000000104) *
                            (fStack00000000000000f0 * fStack00000000000000f0 +
                            fStack00000000000000f8 * fStack00000000000000f8 +
                            fStack00000000000000f4 * fStack00000000000000f4));
              if (DAT_010fcd14 <= fVar28) {
                fVar28 = (fStack00000000000000fc * fStack00000000000000f0 +
                         fStack0000000000000104 * fStack00000000000000f8 +
                         fStack0000000000000100 * fStack00000000000000f4) / fVar28;
                fVar38 = 1.0;
                if (fVar28 <= 1.0) {
                  fVar38 = fVar28;
                }
                fVar42 = -1.0;
                if (-1.0 <= fVar28) {
                  fVar42 = fVar38;
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                dVar32 = acos((double)fVar42);
                unaff_s15 = (float)dVar32 * DAT_010fcf40;
              }
              bVar8 = false;
              bVar5 = true;
              bVar6 = false;
              if (*(float *)(in_stack_00000148 + 0x80) < unaff_s15) {
                bVar8 = false;
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar31)) {
                  bVar8 = fVar31 < 1.5;
                  bVar5 = fVar31 == 1.5;
                  bVar6 = false;
                }
              }
              bVar8 = bVar23 != 0 ||
                      (!bVar5 && bVar8 == bVar6) &&
                      1.0 <= SQRT((fStack000000000000012c - fVar27) *
                                  (fStack000000000000012c - fVar27) +
                                  (fStack0000000000000128 - fVar49) *
                                  (fStack0000000000000128 - fVar49) +
                                  (fVar37 - fVar29) * (fVar37 - fVar29));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
          }
          bVar5 = bVar8;
          if (fVar30 < fVar26 + fVar33 + DAT_010fd060) {
            bVar6 = bVar8;
            if (fStack00000000000000a0 <= fVar31) {
              bVar6 = true;
            }
            if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
              fVar33 = 1.0;
              _fStack00000000000001c0 = *(ulong *)unaff_x27;
              in_stack_000001c8 = *(float *)(lVar10 + 0x28);
              bVar5 = true;
            }
          }
          if (fVar26 + fVar33 <= fVar30) {
            fVar49 = fStack00000000000001c0;
            fVar27 = fStack00000000000001c4;
          }
          else {
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
            _fStack00000000000001c0 = *(ulong *)unaff_x27;
            fVar33 = 1.0;
            in_stack_000001c8 = *(float *)(lVar10 + 0x28);
            bVar5 = true;
            fVar49 = *unaff_x27;
            fVar27 = *(float *)(lVar10 + 0x24);
          }
          fVar29 = in_stack_000001c8;
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar28 = in_stack_000001c8;
          bVar6 = bVar5;
          if (fStack000000000000010c <
              SQRT((fStack000000000000012c - fVar29) * (fStack000000000000012c - fVar29) +
                   (fVar37 - fVar49) * (fVar37 - fVar49) +
                   (fStack0000000000000128 - fVar27) * (fStack0000000000000128 - fVar27))) {
            bVar6 = true;
          }
          bVar1 = bVar6;
          if (in_stack_00000168 != 1) {
            bVar1 = true;
          }
          if (bVar1 == false) {
            bVar6 = fVar33 == 0.0;
          }
          if (bVar6 == true) {
            fVar46 = fStack00000000000001c0;
            fVar49 = fStack00000000000001c4;
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              cVar12 = DAT_06db4c77;
            }
            else {
              cVar12 = '\x01';
            }
            fVar27 = in_stack_000001c8;
            uVar16 = _fStack00000000000001c0;
            uStack0000000000000110 = _fStack00000000000001c0 & 0xffffffff;
            fVar49 = SQRT((fStack000000000000012c - fVar28) * (fStack000000000000012c - fVar28) +
                          (fVar37 - fVar46) * (fVar37 - fVar46) +
                          (fStack0000000000000128 - fVar49) * (fStack0000000000000128 - fVar49));
            fStack0000000000000164 = in_stack_000001c8;
            fStack00000000000001d4 = fVar49 + fStack00000000000001d4;
            *in_stack_000000d8 = fVar49 + *in_stack_000000d8;
            if (cVar12 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar46 = in_stack_000001c8;
            lVar14 = *(long *)(in_stack_00000148 + 0x68);
            *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
            fVar35 = (float)uVar16 - fVar35;
            fVar37 = fStack00000000000001c0;
            in_stack_00000230 =
                 in_stack_00000230 + SQRT(fVar35 * fVar35 + (fVar27 - fVar34) * (fVar27 - fVar34));
            fStack0000000000000128 = fStack00000000000001c4;
            fStack000000000000012c = in_stack_000001c8;
            if ((lVar14 == 0) ||
               (lVar14 = FUN_0400ff1c(lVar14,unaff_x20 & 0xffffffff,*unaff_x21), lVar14 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar14 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar14 == 0)) goto LAB_03168190;
              if (*(float *)(lVar14 + 0x104) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar14 == 0)) goto LAB_03168190;
              if (*(float *)(lVar14 + 0x110) != 0.0) goto LAB_0316bb78;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar14 == 0)) goto LAB_03168190;
              if (*(float *)(lVar14 + 0x114) != 0.0) goto LAB_0316bb78;
              lVar14 = *in_stack_000000e0;
              if (lVar14 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar14 + 0x10);
              lVar19 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar40 = *(uint *)(lVar14 + 0x18);
              if (uVar40 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar40 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar40 * 4 + 0x20) = 0;
              }
              else {
                FUN_04059d64(0,lVar14,*(undefined8 *)
                                       (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
LAB_0316bb78:
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              fVar34 = *in_stack_000000d8;
              uVar22 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *unaff_x21);
              FUN_0316f6a0(fVar34,fStack00000000000000b4,uVar22,uVar22,&stack0x0000022c,
                           &stack0x00000228,&stack0x00000224,&stack0x00000218,&stack0x00000278,
                           &stack0x00000214);
            }
            lVar14 = *in_stack_000000b8;
            if (fVar49 <= 5.0) {
              if (lVar14 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar14 + 0x10);
              lVar19 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar40 = *(uint *)(lVar14 + 0x18);
              fVar34 = (unaff_s15 / fVar49) * 5.0;
              if (*(uint *)(lVar18 + 0x18) <= uVar40) {
                lVar18 = *(long *)(lVar19 + 0x20);
                goto LAB_0316bcb0;
              }
              *(uint *)(lVar14 + 0x18) = uVar40 + 1;
              *(float *)(lVar18 + (long)(int)uVar40 * 4 + 0x20) = fVar34;
            }
            else {
              if (lVar14 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar14 + 0x10);
              lVar19 = *(long *)PTR_DAT_069ff178;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar40 = *(uint *)(lVar14 + 0x18);
              if (uVar40 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar40 + 1;
                *(float *)(lVar18 + (long)(int)uVar40 * 4 + 0x20) = unaff_s15;
              }
              else {
                lVar18 = *(long *)(lVar19 + 0x20);
                fVar34 = unaff_s15;
LAB_0316bcb0:
                FUN_04059d64(fVar34,lVar14,*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x70));
              }
            }
            if (bVar7) {
              lVar14 = *in_stack_000000b8;
              if (lVar14 == 0) goto LAB_03168190;
              iVar51 = *(int *)(lVar14 + 0x18);
              if (1 < iVar51) {
                FUN_04059a68(lVar14,iVar51 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_04059abc(lVar14,iVar51 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
            puVar2 = PTR_DAT_069fbee0;
            lVar14 = *(long *)(unaff_x26 + 0x20);
            if (lVar14 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar14 + 0x10);
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar40 = *(uint *)(lVar14 + 0x18);
            if (uVar40 < *(uint *)(lVar18 + 0x18)) {
              lVar18 = lVar18 + (long)(int)uVar40 * 0xc;
              *(uint *)(lVar14 + 0x18) = uVar40 + 1;
              *(float *)(lVar18 + 0x20) = in_stack_00000278;
              *(float *)(lVar18 + 0x24) = in_stack_0000027c;
              *(float *)(lVar18 + 0x28) = fVar46;
            }
            else {
              FUN_0409f624(lVar14,*(undefined8 *)
                                   (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
            }
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar14 = *(long *)(unaff_x26 + 0x28);
            if (lVar14 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar14 + 0x10);
            lVar19 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar40 = *(uint *)(lVar14 + 0x18);
            if (uVar40 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar40 + 1;
              *(float *)(lVar18 + (long)(int)uVar40 * 4 + 0x20) = fVar33;
            }
            else {
              FUN_04059d64(fVar33,lVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar5 != false) {
              lVar14 = *(long *)(in_stack_00000148 + 0x2c8);
              if (lVar14 == 0) goto LAB_03168190;
              lVar18 = *(long *)(lVar14 + 0x10);
              lVar19 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar18 == 0) goto LAB_03168190;
              uVar40 = *(uint *)(lVar14 + 0x18);
              if (uVar40 < *(uint *)(lVar18 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar40 + 1;
                *(int *)(lVar18 + (long)(int)uVar40 * 4 + 0x20) = in_stack_000000d0._4_4_;
              }
              else {
                FUN_03fb3e1c(lVar14,in_stack_000000d0._4_4_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
              }
            }
            bVar7 = false;
            fStack00000000000000fc = fStack00000000000000f0;
            fStack0000000000000100 = fStack00000000000000f4;
            in_stack_000000d0._4_4_ = in_stack_000000d0._4_4_ + 1;
            fStack0000000000000104 = fStack00000000000000f8;
            in_stack_000000c0._4_1_ = bVar8;
          }
          else {
            uStack0000000000000110 = (ulong)(uint)fVar35;
            fStack0000000000000164 = fVar34;
          }
          fVar29 = fVar26 + fVar33;
        } while (fVar29 < fVar30);
        iStack0000000000000108 = 0;
        unaff_x28 = (long *)PTR_DAT_069fb978;
      }
      goto LAB_0316c620;
    }
    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
       (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21)
       , lVar14 == 0)) goto LAB_03168190;
    if (*(int *)(lVar14 + 0x6c) != 1) {
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                *unaff_x21), lVar14 == 0)) goto LAB_03168190;
      if (*(int *)(lVar14 + 0x6c) == 2) goto LAB_0316a48c;
      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
         (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                *unaff_x21), lVar14 == 0)) goto LAB_03168190;
      if (*(int *)(lVar14 + 0x6c) == 3) {
        uStack00000000000001ac = 0;
        if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
        if (((long)(*(int *)(*(long *)(in_stack_00000148 + 0x68) + 0x18) + -2) <
             (long)in_stack_00000168) && (*(char *)(in_stack_00000148 + 0x84) == '\0')) {
          uVar22 = *(undefined8 *)(in_stack_00000148 + 0x2e0);
          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar11 = FUN_0634eb94(uVar22,0,0);
          if ((uVar11 & 1) != 0) goto LAB_0316adcc;
          FUN_030fd644(&stack0x00000290,in_stack_00000148,in_stack_00000168 & 0xffffffff,
                       &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,0,
                       &stack0x00000230);
        }
        else {
LAB_0316adcc:
          FUN_030faa2c(&stack0x00000290,in_stack_00000148,in_stack_00000168 & 0xffffffff,
                       &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,0,
                       &stack0x00000230);
        }
        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
           (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                  *unaff_x21), lVar14 == 0)) goto LAB_03168190;
        lVar18 = *(long *)(unaff_x26 + 0x28);
        *(undefined4 *)(lVar14 + 0x34) = uStack00000000000001ac;
        if (lVar18 == 0) goto LAB_03168190;
        fVar46 = 0.0;
        iVar21 = 0;
        puVar25 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
        while( true ) {
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          puVar2 = PTR_DAT_069fbee0;
          unaff_x28 = (long *)PTR_DAT_069fb978;
          fVar26 = (float)uVar16;
          fStack0000000000000164 = (float)uVar36;
          iVar24 = *(int *)(lVar18 + 0x18);
          if (iVar24 <= iVar21) break;
          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
          uStack00000000000001a0 =
               FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar21,*(undefined8 *)PTR_DAT_069fd088);
          fStack00000000000001a4 = fVar26;
          fStack00000000000001a8 = fStack0000000000000164;
          if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
            uVar16 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
            if ((((uVar16 <= unaff_x20) || (uVar16 <= in_stack_00000168)) || (uVar16 <= uVar15)) ||
               (uVar16 <= in_stack_00000168 + 2)) goto LAB_0316f2c4;
            if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
            uVar39 = *puVar25;
            fVar26 = (float)puVar25[1];
            uVar41 = puVar25[2];
            fVar33 = *unaff_x19;
            uVar44 = *(undefined4 *)(lVar9 + 0x24);
            uVar47 = *(undefined4 *)(lVar9 + 0x28);
            FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar21,*(undefined8 *)PTR_DAT_06a0a108);
            FUN_0316f340(uVar39,fVar26,uVar41,fVar33,uVar44,uVar47);
            fStack00000000000001a4 = fVar26;
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fStack0000000000000164 = fStack00000000000001a8;
            FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar21,
                         *(undefined8 *)PTR_DAT_06a0b7d0);
            if (iVar21 != 0) goto LAB_0316af8c;
LAB_0316b04c:
            lVar14 = *in_stack_000000e0;
            if (lVar14 == 0) goto LAB_03168190;
            lVar18 = *(long *)(lVar14 + 0x10);
            lVar19 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar18 == 0) goto LAB_03168190;
            uVar40 = *(uint *)(lVar14 + 0x18);
            if (uVar40 < *(uint *)(lVar18 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar40 + 1;
              *(undefined4 *)(lVar18 + (long)(int)uVar40 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar14,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
          }
          else {
            if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
            FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
            if (iVar21 == 0) goto LAB_0316b04c;
LAB_0316af8c:
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *(undefined8 *)PTR_DAT_06a0b440), lVar14 == 0))
            goto LAB_03168190;
            if (*(float *)(lVar14 + 0x100) == 0.0) {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *(undefined8 *)PTR_DAT_06a0b440), lVar14 == 0))
              goto LAB_03168190;
              if (*(float *)(lVar14 + 0x104) == 0.0) {
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff
                                          ,*(undefined8 *)PTR_DAT_06a0b440), lVar14 == 0))
                goto LAB_03168190;
                if (*(float *)(lVar14 + 0x110) == 0.0) {
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar14 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                            unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                     lVar14 == 0)) goto LAB_03168190;
                  if (*(float *)(lVar14 + 0x114) == 0.0) goto LAB_0316b04c;
                }
              }
            }
            puVar2 = PTR_DAT_069fd088;
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fVar33 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar21 + -1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fVar34 = fVar26;
            fVar35 = fStack0000000000000164;
            fVar49 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar21,*(undefined8 *)puVar2);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            fVar27 = *in_stack_000000d8;
            fVar46 = fVar46 + SQRT((fStack0000000000000164 - fVar35) *
                                   (fStack0000000000000164 - fVar35) +
                                   (fVar33 - fVar49) * (fVar33 - fVar49) +
                                   (fVar26 - fVar34) * (fVar26 - fVar34));
            uVar22 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                  *(undefined8 *)PTR_DAT_06a0b440);
            FUN_0316f6a0(fVar46 + fVar27,fStack00000000000000b4,uVar22,uVar22,&stack0x0000022c,
                         &stack0x00000228,&stack0x00000224,&stack0x00000218,&stack0x000001a0,
                         &stack0x00000214);
          }
          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
          uVar36 = (ulong)(uint)fStack00000000000001a8;
          uVar16 = (ulong)(uint)fStack00000000000001a4;
          FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar21,
                       *(undefined8 *)PTR_DAT_06a0b7d0);
          lVar18 = *(long *)(unaff_x26 + 0x28);
          iVar21 = iVar21 + 1;
          if (lVar18 == 0) goto LAB_03168190;
        }
        uVar16 = (ulong)(iVar24 - 1);
        if (iVar24 < 1) {
          if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
          lVar14 = *(long *)(unaff_x26 + 0x20);
          if (lVar14 == 0) goto LAB_03168190;
          lVar18 = *(long *)(lVar14 + 0x10);
          fVar46 = *unaff_x27;
          uVar39 = *(undefined4 *)(lVar10 + 0x24);
          fStack0000000000000164 = *(float *)(lVar10 + 0x28);
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar14 + 0x18);
          if (uVar40 < *(uint *)(lVar18 + 0x18)) {
            lVar18 = lVar18 + (long)(int)uVar40 * 0xc;
            *(uint *)(lVar14 + 0x18) = uVar40 + 1;
            *(float *)(lVar18 + 0x20) = fVar46;
            *(undefined4 *)(lVar18 + 0x24) = uVar39;
            *(float *)(lVar18 + 0x28) = fStack0000000000000164;
          }
          else {
            FUN_0409f624(lVar14,*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
            uVar16 = extraout_x1_00;
          }
          fVar46 = fStack00000000000001d4;
          if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
             (*(uint *)(in_stack_00000170 + 0x18) <= uVar15)) goto LAB_0316f2c4;
          uVar22 = *(undefined8 *)unaff_x19;
          fVar26 = *(float *)(lVar9 + 0x28);
          uVar43 = *(undefined8 *)unaff_x27;
          fVar33 = *(float *)(lVar10 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48,uVar16);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar34 = (float)uVar22 - (float)uVar43;
          fVar35 = (float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar43 >> 0x20);
          fVar26 = fVar26 - fVar33;
          in_stack_0000027c = fVar26 * fVar26;
          fStack00000000000001d4 =
               fVar46 + SQRT(in_stack_0000027c + fVar34 * fVar34 + fVar35 * fVar35);
LAB_0316d2dc:
          lVar9 = *(long *)(unaff_x26 + 0x28);
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar9 + 0x18);
          if (uVar40 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0x3f800000;
          }
          else {
            FUN_04059d64(0x3f800000,lVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *in_stack_000000e0;
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar9 + 0x18);
          if (uVar40 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
            ;
          }
        }
        else {
          fVar46 = (float)FUN_04059a68(lVar18,uVar16,*(undefined8 *)PTR_DAT_06a0a108);
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          puVar2 = PTR_DAT_069fd088;
          unaff_x28 = (long *)PTR_DAT_069fb978;
          fVar26 = 1.0;
          if (fVar46 <= 1.0) {
            lVar9 = *(long *)(unaff_x26 + 0x20);
            if (lVar9 == 0) goto LAB_03168190;
            fVar46 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
            fVar26 = fVar26 - *(float *)(lVar10 + 0x24);
            fStack0000000000000164 = fStack0000000000000164 - *(float *)(lVar10 + 0x28);
            in_stack_0000027c = fStack00000000000000a4;
            if (fStack00000000000000a4 <=
                fStack0000000000000164 * fStack0000000000000164 +
                (fVar46 - *unaff_x27) * (fVar46 - *unaff_x27) + fVar26 * fVar26) {
              lVar9 = *(long *)(unaff_x26 + 0x20);
              if (lVar9 == 0) goto LAB_03168190;
              fVar46 = fStack00000000000000a4;
              fVar26 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
              fVar33 = *unaff_x27;
              fVar35 = *(float *)(lVar10 + 0x24);
              fVar34 = *(float *)(lVar10 + 0x28);
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              puVar3 = PTR_DAT_069fbee0;
              fVar46 = fVar46 - fVar35;
              lVar9 = *(long *)(unaff_x26 + 0x20);
              fStack0000000000000164 = fStack0000000000000164 - fVar34;
              if (fStack00000000000000b0 <=
                  SQRT(fStack0000000000000164 * fStack0000000000000164 +
                       (fVar26 - fVar33) * (fVar26 - fVar33) + fVar46 * fVar46)) {
                if (uVar15 < *(uint *)(in_stack_00000170 + 0x18)) {
                  if (lVar9 != 0) {
                    lVar14 = *(long *)(lVar9 + 0x10);
                    fVar46 = *unaff_x27;
                    fVar26 = *(float *)(lVar10 + 0x24);
                    fStack0000000000000164 = *(float *)(lVar10 + 0x28);
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar14 != 0) {
                      uVar40 = *(uint *)(lVar9 + 0x18);
                      if (uVar40 < *(uint *)(lVar14 + 0x18)) {
                        lVar14 = lVar14 + (long)(int)uVar40 * 0xc;
                        *(uint *)(lVar9 + 0x18) = uVar40 + 1;
                        *(float *)(lVar14 + 0x20) = fVar46;
                        *(float *)(lVar14 + 0x24) = fVar26;
                        *(float *)(lVar14 + 0x28) = fStack0000000000000164;
                      }
                      else {
                        FUN_0409f624(lVar9,*(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                            0x70));
                      }
                      fVar46 = fStack00000000000001d4;
                      lVar9 = *(long *)(unaff_x26 + 0x20);
                      if (lVar9 != 0) {
                        fVar33 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                     *(undefined8 *)puVar2);
                        if (uVar15 < *(uint *)(in_stack_00000170 + 0x18)) {
                          fVar34 = *unaff_x27;
                          fVar49 = *(float *)(lVar10 + 0x24);
                          fVar35 = *(float *)(lVar10 + 0x28);
                          if (DAT_06db4c77 == '\0') {
                            FUN_02d965b8(PTR_DAT_069fbb48);
                            DAT_06db4c77 = '\x01';
                          }
                          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                            thunk_FUN_02df485c();
                          }
                          fVar26 = fVar26 - fVar49;
                          fStack0000000000000164 = fStack0000000000000164 - fVar35;
                          in_stack_0000027c = fStack0000000000000164 * fStack0000000000000164;
                          fStack00000000000001d4 =
                               fVar46 + SQRT(in_stack_0000027c +
                                             (fVar33 - fVar34) * (fVar33 - fVar34) + fVar26 * fVar26
                                            );
                          goto LAB_0316d2dc;
                        }
                        goto LAB_0316f2c4;
                      }
                    }
                  }
                  goto LAB_03168190;
                }
                goto LAB_0316f2c4;
              }
              if (lVar9 == 0) goto LAB_03168190;
              if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
              fStack0000000000000164 = *(float *)(lVar10 + 0x28);
              in_stack_0000027c = *(float *)(lVar10 + 0x24);
              FUN_0409f350(*unaff_x27,lVar9,*(int *)(lVar9 + 0x18) + -1,
                           *(undefined8 *)PTR_DAT_06a0b7d0);
              lVar9 = *(long *)(unaff_x26 + 0x28);
              if (lVar9 == 0) goto LAB_03168190;
              FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                           *(undefined8 *)PTR_DAT_06a0b5c0);
            }
          }
          else {
            lVar9 = *(long *)(unaff_x26 + 0x28);
            if (lVar9 == 0) goto LAB_03168190;
            FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                         *(undefined8 *)PTR_DAT_06a0b5c0);
            lVar9 = *(long *)(unaff_x26 + 0x20);
            if (lVar9 == 0) goto LAB_03168190;
            if (*(uint *)(in_stack_00000170 + 0x18) <= uVar15) goto LAB_0316f2c4;
            fStack0000000000000164 = *(float *)(lVar10 + 0x28);
            in_stack_0000027c = *(float *)(lVar10 + 0x24);
            FUN_0409f350(*unaff_x27,lVar9,*(int *)(lVar9 + 0x18) + -1,
                         *(undefined8 *)PTR_DAT_06a0b7d0);
          }
        }
        lVar9 = *(long *)(unaff_x26 + 0x20);
        if (lVar9 == 0) goto LAB_03168190;
        iVar21 = *(int *)(lVar9 + 0x18);
        uStack0000000000000110 = FUN_0409f2f4(lVar9,iVar21 + -1,*(undefined8 *)PTR_DAT_069fd088);
        puVar2 = PTR_DAT_069fd088;
        lVar9 = *(long *)(unaff_x26 + 0x20);
        in_stack_00000278 = (float)uStack0000000000000110;
        if (lVar9 == 0) goto LAB_03168190;
        fVar26 = fStack0000000000000164;
        if (1 < *(int *)(lVar9 + 0x18)) {
          fStack0000000000000088 = in_stack_0000027c;
          fStack000000000000008c =
               (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*(undefined8 *)PTR_DAT_069fd088
                                  );
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          fVar46 = fStack0000000000000088;
          fVar33 = fVar26;
          fVar34 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fStack000000000000008c = fStack000000000000008c - fVar34;
          fStack0000000000000088 = fStack0000000000000088 - fVar46;
          fVar26 = fVar26 - fVar33;
          in_stack_00000080._4_4_ =
               SQRT(fVar26 * fVar26 +
                    fStack000000000000008c * fStack000000000000008c +
                    fStack0000000000000088 * fStack0000000000000088);
          if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(unaff_x28);
              DAT_06db4c71 = '\x01';
            }
            pfVar17 = *(float **)(*unaff_x28 + 0xb8);
            fStack000000000000008c = *pfVar17;
            fStack0000000000000088 = pfVar17[1];
            in_stack_00000080._4_4_ = pfVar17[2];
          }
          else {
            fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
            fStack0000000000000088 = fStack0000000000000088 / in_stack_00000080._4_4_;
            in_stack_00000080._4_4_ = fVar26 / in_stack_00000080._4_4_;
          }
        }
        lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
        *(float *)(in_stack_00000148 + 0x2c0) =
             *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
        if (lVar9 == 0) goto LAB_03168190;
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar14 = *(long *)PTR_DAT_069fc3e0;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_03168190;
        uVar40 = *(uint *)(lVar9 + 0x18);
        in_stack_000000d0._4_4_ = iVar21 + in_stack_000000d0._4_4_;
        fVar33 = fStack00000000000001d4;
        if (uVar40 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar40 + 1;
          *(int *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = in_stack_000000d0._4_4_;
        }
        else {
          FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar21 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
        fVar46 = fStack0000000000000164;
        if (iVar21 < 1) {
          iStack0000000000000108 = 3;
        }
        else {
          lVar9 = FUN_0400ff1c(in_stack_00000098,iVar51 + -2,*unaff_x21);
          if ((lVar9 == 0) || (lVar10 = *in_stack_00000090, lVar10 == 0)) goto LAB_03168190;
          iVar51 = *(int *)(lVar9 + 0xbc);
          fVar34 = (float)FUN_04059a68(lVar10,*(int *)(lVar10 + 0x18) + -1,
                                       *(undefined8 *)PTR_DAT_06a0a108);
          lVar9 = *in_stack_00000090;
          if (lVar9 == 0) goto LAB_03168190;
          if (1 < *(int *)(lVar9 + 0x18)) {
            fVar33 = (float)FUN_04059a68(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                         *(undefined8 *)PTR_DAT_06a0a108);
            fVar33 = fVar34 - fVar33;
            fVar34 = fVar33;
          }
          puVar2 = PTR_DAT_069fd088;
          lVar9 = *(long *)(unaff_x26 + 0x78);
          if (lVar9 == 0) goto LAB_03168190;
          fVar35 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                       *(undefined8 *)PTR_DAT_069fd088);
          if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
          fVar49 = fVar33;
          fVar27 = fVar26;
          fVar29 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,*(undefined8 *)puVar2);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar33 = fVar33 - fVar49;
          uVar16 = (ulong)(uint)DAT_010fd13c;
          fVar26 = SQRT((fVar26 - fVar27) * (fVar26 - fVar27) +
                        (fVar35 - fVar29) * (fVar35 - fVar29) + fVar33 * fVar33);
          if (fVar26 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(unaff_x28);
              DAT_06db4c71 = '\x01';
            }
            fVar33 = *(float *)(*(long *)(*unaff_x28 + 0xb8) + 4);
          }
          else {
            fVar33 = fVar33 / fVar26;
          }
          puVar2 = PTR_DAT_069fd088;
          lVar9 = *(long *)(unaff_x26 + 0x78);
          if (lVar9 == 0) goto LAB_03168190;
          FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
          lVar9 = *(long *)(unaff_x26 + 0x78);
          if (lVar9 == 0) goto LAB_03168190;
          fVar49 = fVar26;
          fVar35 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
          if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
          uVar36 = (ulong)(uint)(float)iVar51;
          fVar27 = (float)iVar21 - (float)iVar51;
          if (1.0 <= fVar27) {
            fVar29 = 0.0;
            iVar21 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            iVar51 = 2;
            iVar24 = -2;
            do {
              fVar30 = (float)uVar36;
              if ((iVar51 - iVar21) + -1 < 0) {
                lVar9 = *(long *)(unaff_x26 + 0x78);
                if (lVar9 == 0) goto LAB_03168190;
                fVar28 = (float)uVar16;
                fVar31 = (float)FUN_0409f2f4(lVar9,iVar24 + *(int *)(lVar9 + 0x18),
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar9 = *(long *)(unaff_x26 + 0x78);
                if (lVar9 == 0) goto LAB_03168190;
                fVar38 = fVar28 - (float)uVar16;
                fVar29 = fVar29 + SQRT(fVar38 * fVar38 +
                                       (fVar31 - fVar35) * (fVar31 - fVar35) +
                                       (fVar30 - fVar49) * (fVar30 - fVar49));
                fVar26 = (fVar34 / fVar27) * fVar33 + fVar26;
                fVar35 = 1.0;
                if (SQRT(fVar29 / fVar34) <= 1.0) {
                  fVar35 = SQRT(fVar29 / fVar34);
                }
                fVar49 = fVar26 + (fVar30 - fVar26) * fVar35;
                uVar36 = (ulong)(uint)fVar49;
                FUN_0409f350(fVar31,uVar36,fVar28,lVar9,iVar24 + *(int *)(lVar9 + 0x18),
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                uVar16 = (ulong)(uint)fVar28;
                fVar35 = fVar31;
              }
              fVar30 = (float)iVar51;
              iVar51 = iVar51 + 1;
              iVar24 = iVar24 + -1;
            } while (fVar30 <= fVar27);
            iStack0000000000000108 = 3;
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          }
          else {
            iStack0000000000000108 = 3;
          }
        }
      }
      else {
        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
           (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                 *unaff_x21), puVar2 = PTR_DAT_069fd088, lVar9 == 0))
        goto LAB_03168190;
        if (*(int *)(lVar9 + 0x6c) == 4) {
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                   *unaff_x21), lVar9 == 0)) goto LAB_03168190;
          fStack00000000000001d4 = 0.0;
          *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar9 + 0x1d8);
          lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
          FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
          if (lVar9 == 0) goto LAB_03168190;
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar9 + 0x18);
          if (uVar40 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
            ;
          }
          lVar10 = *(long *)(unaff_x26 + 0x20);
          if (lVar10 == 0) goto LAB_03168190;
          iVar51 = 1;
          while( true ) {
            fVar26 = fStack00000000000001d4;
            fVar34 = (float)uVar36;
            fVar33 = (float)uVar16;
            if (*(int *)(lVar10 + 0x18) <= iVar51) break;
            fVar35 = (float)FUN_0409f2f4(lVar10,iVar51 + -1,*(undefined8 *)puVar2);
            if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
            fVar49 = fVar33;
            fVar27 = fVar34;
            fVar29 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar51,*(undefined8 *)puVar2);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar34 = fVar34 - fVar27;
            uVar36 = (ulong)(uint)fVar34;
            lVar10 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            uVar16 = (ulong)(uint)(fVar34 * fVar34);
            fStack00000000000001d4 =
                 fVar26 + SQRT(fVar34 * fVar34 +
                               (fVar35 - fVar29) * (fVar35 - fVar29) +
                               (fVar33 - fVar49) * (fVar33 - fVar49));
            if (lVar10 == 0) goto LAB_03168190;
            uVar40 = *(uint *)(lVar9 + 0x18);
            if (uVar40 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar40 + 1;
              *(float *)(lVar10 + (long)(int)uVar40 * 4 + 0x20) = fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar9,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) + 0xc0) +
                                  0x70));
            }
            lVar10 = *(long *)(unaff_x26 + 0x20);
            iVar51 = iVar51 + 1;
            if (lVar10 == 0) goto LAB_03168190;
          }
          lVar10 = *(long *)(unaff_x26 + 0x28);
          *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar18 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar10 + 0x18);
          if (uVar40 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar40 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                        );
          }
          lVar10 = *in_stack_000000e0;
          if (lVar10 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar18 = *(long *)PTR_DAT_069ff178;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar40 = *(uint *)(lVar10 + 0x18);
          if (uVar40 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar40 + 1;
            *(undefined4 *)(lVar14 + (long)(int)uVar40 * 4 + 0x20) = 0;
          }
          else {
            FUN_04059d64(0,lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                        );
          }
          lVar10 = *(long *)(unaff_x26 + 0x20);
          if (lVar10 == 0) goto LAB_03168190;
          iVar51 = 0;
          while (iVar51 < *(int *)(lVar10 + 0x18)) {
            lVar10 = *(long *)(unaff_x26 + 0x28);
            fVar26 = (float)FUN_04059a68(lVar9,iVar51,*(undefined8 *)PTR_DAT_06a0a108);
            if (lVar10 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar40 = *(uint *)(lVar10 + 0x18);
            if (uVar40 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar40 + 1;
              *(float *)(lVar14 + (long)(int)uVar40 * 4 + 0x20) = fVar26 / fStack00000000000001d4;
            }
            else {
              FUN_04059d64(lVar10,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70)
                          );
            }
            lVar10 = *in_stack_000000e0;
            if (lVar10 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar18 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar40 = *(uint *)(lVar10 + 0x18);
            if (uVar40 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar40 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar40 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = *(long *)(unaff_x26 + 0x20);
            iVar51 = iVar51 + 1;
            if (lVar10 == 0) goto LAB_03168190;
          }
          iStack0000000000000108 = 4;
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
        }
      }
      goto LAB_0316c620;
    }
LAB_0316a48c:
    uVar40 = *(uint *)(in_stack_00000170 + 0x18);
    fStack0000000000000164 = fVar46;
    if (in_stack_00000168 == 1) {
      if ((ulong)uVar40 < 2) goto LAB_0316f2c4;
      fStack0000000000000164 = *(float *)(lVar9 + 0x28);
      *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)unaff_x19;
    }
    if (uVar40 <= uVar15) goto LAB_0316f2c4;
    param_3 = *(float *)(lVar10 + 0x28);
    uVar22 = *(undefined8 *)unaff_x27;
    uVar43 = *(undefined8 *)unaff_x19;
    fVar37 = *(float *)(lVar9 + 0x28);
    if (DAT_06db4c75 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbb48);
      DAT_06db4c75 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar46 = (float)uVar22 - (float)uVar43;
    fVar26 = (float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar43 >> 0x20);
    param_2 = CONCAT44(fVar26,fVar46);
    param_3 = param_3 - fVar37;
    param_1 = &DAT_010fd000;
    param_4 = CONCAT44(fVar26 * fVar26,fVar46 * fVar46);
    unaff_x23 = in_stack_00000148;
    in_stack_00000120._4_4_ = unaff_s15;
    in_stack_00000168 = uVar15;
  } while( true );
  while( true ) {
    fVar29 = fVar46;
    fVar30 = fVar26;
    fVar28 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar29 = fVar46 - fVar29;
    fVar26 = fVar26 - fVar30;
    fVar46 = fVar26 * fVar26;
    fVar49 = fVar49 + SQRT(fVar46 + (fVar27 - fVar28) * (fVar27 - fVar28) + fVar29 * fVar29);
    if (fVar34 < fVar49) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar39 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
    fVar46 = (float)FUN_031765b0(uVar39,fVar46,fVar26,fVar33,fVar37,fVar35,0);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar29 = fVar26;
    fVar30 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
    fVar28 = fVar49 / fVar34;
    fVar27 = 1.0;
    if (fVar28 <= 1.0) {
      fVar27 = fVar28;
    }
    uVar15 = (ulong)(uint)fVar27;
    fVar31 = 0.0;
    if (0.0 <= fVar28) {
      fVar31 = fVar27;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar16 = (ulong)(uint)(fVar26 + fVar31 * (fVar29 - fVar26));
    FUN_0409f350(fVar46 + fVar31 * (fVar30 - fVar46),*(long *)(unaff_x26 + 0x78),iVar51,
                 *(undefined8 *)puVar4);
    lVar10 = *(long *)(unaff_x26 + 0x78);
    iVar51 = iVar51 + 1;
    if (lVar10 == 0) break;
    fVar26 = (float)uVar16;
    fVar46 = (float)uVar15;
    if (*(int *)(lVar10 + 0x18) <= iVar51) goto LAB_0316ee54;
    fVar27 = (float)FUN_0409f2f4(lVar10,iVar51 + -1,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
  }
  goto LAB_03168190;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar9 = *(long *)(unaff_x26 + 0x78);
    if (lVar9 == 0) goto LAB_03168190;
    fVar37 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
    puVar3 = PTR_DAT_06a0b440;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar33 = fVar46;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                         *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar9 == 0) goto LAB_03168190;
    fVar35 = *(float *)(lVar9 + 200) * 0.5;
    fVar34 = 5.0;
    if (fVar35 <= 5.0) {
      fVar34 = fVar35;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar51 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar51 + -2) {
      fVar35 = 0.0;
      iVar51 = iVar51 + -1;
      uVar15 = (ulong)(uint)fVar37;
      uVar16 = (ulong)(uint)fVar26;
      do {
        fVar27 = (float)uVar15;
        fVar49 = (float)uVar16;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar29 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar51 = iVar51 + -1;
        fVar30 = fVar49;
        fVar28 = fVar27;
        fVar31 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar35 = fVar35 + SQRT((fVar27 - fVar28) * (fVar27 - fVar28) +
                               (fVar29 - fVar31) * (fVar29 - fVar31) +
                               (fVar49 - fVar30) * (fVar49 - fVar30));
        if (fVar34 < fVar35) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
        fVar49 = fVar26;
        fVar27 = (float)FUN_031765b0(fVar37,fVar46,fVar26,fStack0000000000000060 * 10.0 + fVar37,
                                     fVar33,fStack000000000000005c * 10.0 + fVar26,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar30 = fVar49;
        fVar28 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
        fVar31 = fVar35 / fVar34;
        fVar29 = 1.0;
        if (fVar31 <= 1.0) {
          fVar29 = fVar31;
        }
        uVar16 = (ulong)(uint)fVar29;
        fVar38 = 0.0;
        if (0.0 <= fVar31) {
          fVar38 = fVar29;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar51,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar15 = (ulong)(uint)(fVar49 + fVar38 * (fVar30 - fVar49));
        FUN_0409f350(fVar27 + fVar38 * (fVar28 - fVar27),*(long *)(unaff_x26 + 0x78),iVar51,
                     *(undefined8 *)puVar4);
      } while (1 < iVar51);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar10 != 0) {
    fVar37 = *(float *)(lVar10 + 0x94);
    lVar10 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar10 != 0) {
      fVar46 = *(float *)(lVar10 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar26 = DAT_010fd13c;
      fVar33 = SQRT(fVar37 * fVar37 + fVar46 * fVar46);
      if (fVar33 <= DAT_010fd13c) {
        if (DAT_06db4c71 == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          DAT_06db4c71 = '\x01';
        }
        uVar22 = **(undefined8 **)(*unaff_x28 + 0xb8);
        fVar46 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
      }
      else {
        fVar46 = fVar46 / fVar33;
        uVar22 = CONCAT44(0.0 / fVar33,fVar37 / fVar33);
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x94) = uVar22;
        uVar22 = *(undefined8 *)puVar2;
        *(float *)(lVar9 + 0x9c) = fVar46;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar22);
        lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar10 != 0) {
          fVar37 = *(float *)(lVar10 + 0x94);
          lVar10 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar10 != 0) {
            fVar46 = *(float *)(lVar10 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar33 = SQRT(fVar37 * fVar37 + fVar46 * fVar46);
            if (fVar33 <= fVar26) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              uVar22 = **(undefined8 **)(*unaff_x28 + 0xb8);
              fVar46 = *(float *)(*(undefined8 **)(*unaff_x28 + 0xb8) + 1);
            }
            else {
              fVar46 = fVar46 / fVar33;
              uVar22 = CONCAT44(0.0 / fVar33,fVar37 / fVar33);
            }
            if (lVar9 != 0) {
              uVar43 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar9 + 0x94) = uVar22;
              *(float *)(lVar9 + 0x9c) = fVar46;
              return uVar43;
            }
          }
        }
      }
    }
  }
LAB_03168190:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


