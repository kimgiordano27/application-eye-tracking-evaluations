/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4s>
ENTRY_POINT: 0316a81c
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
System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4s>
          (undefined8 param_1,float param_2)

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
  ulong uVar10;
  long lVar11;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  char cVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long *plVar19;
  int iVar20;
  long unaff_x22;
  undefined8 uVar21;
  byte bVar22;
  int iVar23;
  long unaff_x23;
  undefined8 uVar24;
  ulong unaff_x24;
  float *unaff_x25;
  undefined4 *puVar25;
  undefined1 *unaff_x26;
  float *unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined8 unaff_d8;
  float unaff_s9;
  uint uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float unaff_s15;
  float fVar49;
  int iVar50;
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
  ulong in_stack_00000110;
  undefined8 in_stack_00000120;
  float fStack0000000000000128;
  float fStack000000000000012c;
  undefined8 in_stack_00000130;
  long in_stack_00000148;
  ulong in_stack_00000150;
  undefined8 in_stack_00000160;
  ulong in_stack_00000168;
  long in_stack_00000170;
  undefined4 uStack00000000000001a0;
  float fStack00000000000001a4;
  float fStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  float fStack00000000000001b8;
  float fStack00000000000001c0;
  float fStack00000000000001c4;
  float in_stack_000001c8;
  float fStack00000000000001d0;
  float fStack00000000000001d4;
  undefined4 in_stack_00000214;
  float in_stack_00000230;
  long in_stack_00000238;
  long in_stack_00000240;
  undefined4 in_stack_00000268;
  float in_stack_0000026c;
  float in_stack_00000270;
  float in_stack_0000027c;
  
  fVar37 = param_2;
  do {
    fStack00000000000001b8 = fVar37;
    _uStack00000000000001b0 = param_1;
    if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
      FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
    }
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       lVar9 == 0)) goto LAB_03168190;
    if (*(float *)(lVar9 + 0x100) == 0.0) {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         lVar9 == 0)) goto LAB_03168190;
      if (*(float *)(lVar9 + 0x104) != 0.0) goto LAB_0316a920;
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         lVar9 == 0)) goto LAB_03168190;
      if (*(float *)(lVar9 + 0x110) != 0.0) goto LAB_0316a920;
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         lVar9 == 0)) goto LAB_03168190;
      if (*(float *)(lVar9 + 0x114) != 0.0) goto LAB_0316a920;
      lVar9 = *in_stack_000000e0;
      if (lVar9 == 0) goto LAB_03168190;
      lVar14 = *(long *)(lVar9 + 0x10);
      lVar17 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_03168190;
      uVar39 = *(uint *)(lVar9 + 0x18);
      if (uVar39 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar39 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
LAB_0316a920:
      if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
      fVar37 = *unaff_x25;
      uVar21 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21);
      FUN_0316f6a0((float)in_stack_00000150 + fVar37,fStack00000000000000b4,uVar21,uVar21,
                   &stack0x0000022c,&stack0x00000228,&stack0x00000224,&stack0x00000218,
                   &stack0x000001b0,&stack0x00000214);
    }
    puVar2 = PTR_DAT_069fbee0;
    lVar9 = *(long *)(unaff_x26 + 0x20);
    if (lVar9 == 0) goto LAB_03168190;
    lVar14 = *(long *)(lVar9 + 0x10);
    uVar15 = (ulong)(uint)fStack00000000000001b8;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    uVar39 = *(uint *)(lVar9 + 0x18);
    if (uVar39 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar39 * 0xc;
      *(uint *)(lVar9 + 0x18) = uVar39 + 1;
      *(undefined4 *)(lVar14 + 0x20) = uStack00000000000001b0;
      *(undefined4 *)(lVar14 + 0x24) = uStack00000000000001b4;
      *(float *)(lVar14 + 0x28) = fStack00000000000001b8;
    }
    else {
      FUN_0409f624(lVar9,*(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                  );
    }
    if (unaff_x22 == 0) goto LAB_03168190;
    lVar9 = *(long *)(unaff_x22 + 0x10);
    lVar14 = *(long *)PTR_DAT_069ff178;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_03168190;
    uVar39 = *(uint *)(unaff_x22 + 0x18);
    if (uVar39 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar39 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar39 * 4 + 0x20) = in_stack_00000214;
    }
    else {
      FUN_04059d64(unaff_x22,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *in_stack_000000b8;
    if (lVar9 == 0) goto LAB_03168190;
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar17 = *(long *)PTR_DAT_069ff178;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    uVar39 = *(uint *)(lVar9 + 0x18);
    if (uVar39 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar39 + 1;
      *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0;
    }
    else {
      FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(unaff_x26 + 0x28);
    if (lVar9 == 0) goto LAB_03168190;
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar17 = *(long *)PTR_DAT_069ff178;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    uVar39 = *(uint *)(lVar9 + 0x18);
    if (uVar39 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar39 + 1;
      *(float *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) =
           (float)in_stack_00000150 / fStack00000000000001d4;
    }
    else {
      FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    do {
      uVar34 = (ulong)(uint)fStack000000000000010c;
      fVar37 = (float)in_stack_00000150 + fStack000000000000010c;
      in_stack_00000150 = (ulong)(uint)fVar37;
      if (fStack00000000000001d4 - fStack000000000000010c <= fVar37) {
        do {
          fStack000000000000012c = (float)uVar15;
          fVar37 = (float)uVar34;
          if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                 *(undefined8 *)PTR_DAT_06a0b440);
            fStack000000000000012c = (float)uVar15;
            fVar37 = (float)uVar34;
            if (lVar9 == 0) goto LAB_03168190;
            if (*(int *)(lVar9 + 0x6c) == 1) {
              if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
              iVar50 = 0;
              puVar25 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
              lVar9 = *(long *)(unaff_x26 + 0x28);
              while( true ) {
                fStack000000000000012c = (float)uVar15;
                fVar37 = (float)uVar34;
                if (*(int *)(lVar9 + 0x18) <= iVar50) break;
                uVar15 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                if ((((uVar15 <= unaff_x20) || (uVar15 <= unaff_x24)) ||
                    (uVar15 <= in_stack_00000168)) || (uVar15 <= unaff_x24 + 2)) goto LAB_0316f2c4;
                uVar38 = *puVar25;
                fVar37 = (float)puVar25[1];
                uVar39 = puVar25[2];
                fVar41 = *unaff_x19;
                fVar44 = unaff_x19[1];
                fVar48 = unaff_x19[2];
                FUN_04059a68(lVar9,iVar50,*(undefined8 *)PTR_DAT_06a0a108);
                FUN_0316f340(uVar38,fVar37,uVar39,fVar41,fVar44,fVar48);
                unaff_x26 = &stack0x00000218;
                if (((in_stack_00000238 == 0) ||
                    (uVar38 = FUN_0409f2f4(in_stack_00000238,iVar50,*(undefined8 *)PTR_DAT_069fd088)
                    , unaff_x22 == 0)) ||
                   (fVar41 = (float)FUN_04059a68(unaff_x22,iVar50,*(undefined8 *)PTR_DAT_06a0a108),
                   in_stack_00000238 == 0)) goto LAB_03168190;
                uVar34 = (ulong)(uint)(fVar37 + fVar41);
                uVar15 = (ulong)uVar39;
                FUN_0409f350(uVar38,in_stack_00000238,iVar50,*(undefined8 *)PTR_DAT_06a0b7d0);
                iVar50 = iVar50 + 1;
                lVar9 = in_stack_00000240;
                unaff_s15 = in_stack_00000120._4_4_;
                if (in_stack_00000240 == 0) goto LAB_03168190;
              }
            }
          }
          puVar2 = PTR_DAT_069fbee0;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          if (*(int *)(lVar9 + 0x18) == 0) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            lVar14 = *(long *)(lVar9 + 0x10);
            fVar37 = *unaff_x27;
            fVar41 = unaff_x27[1];
            fVar44 = unaff_x27[2];
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            if (*(int *)(lVar14 + 0x18) == 0) {
              FUN_0409f624(lVar9,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
            }
            else {
              *(undefined4 *)(lVar9 + 0x18) = 1;
              *(float *)(lVar14 + 0x20) = fVar37;
              *(float *)(lVar14 + 0x24) = fVar41;
              *(float *)(lVar14 + 0x28) = fVar44;
            }
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            fVar41 = *unaff_x27;
            fVar44 = unaff_x27[1];
            fStack000000000000012c = unaff_x27[2];
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar9 = *(long *)(unaff_x26 + 0x28);
            fVar41 = (float)in_stack_00000110 - fVar41;
            fStack000000000000012c = in_stack_00000160._4_4_ - fStack000000000000012c;
            fVar37 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 SQRT(fVar37 + fVar41 * fVar41 +
                               (in_stack_0000027c - fVar44) * (in_stack_0000027c - fVar44));
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar39 = *(uint *)(lVar9 + 0x18);
            if (uVar39 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar39 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *in_stack_000000e0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar39 = *(uint *)(lVar9 + 0x18);
            if (uVar39 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar39 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *in_stack_000000b8;
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar39 = *(uint *)(lVar9 + 0x18);
            if (uVar39 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar39 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          puVar2 = PTR_DAT_069fd088;
          plVar19 = (long *)PTR_DAT_069fb978;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          fStack0000000000000128 = fVar37;
          if (0 < *(int *)(lVar9 + 0x18)) {
            fVar41 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            fStack000000000000012c = fStack000000000000012c - unaff_x27[2];
            fStack0000000000000128 = fStack00000000000000a4;
            if (fStack00000000000000a4 <=
                fStack000000000000012c * fStack000000000000012c +
                (fVar41 - *unaff_x27) * (fVar41 - *unaff_x27) +
                (fVar37 - unaff_x27[1]) * (fVar37 - unaff_x27[1])) {
              lVar9 = *(long *)(unaff_x26 + 0x20);
              if (lVar9 == 0) goto LAB_03168190;
              fVar37 = fStack00000000000000a4;
              fVar41 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
              if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
              fVar44 = *unaff_x27;
              fVar47 = unaff_x27[1];
              fVar48 = unaff_x27[2];
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
                  SQRT((fStack000000000000012c - fVar48) * (fStack000000000000012c - fVar48) +
                       (fVar41 - fVar44) * (fVar41 - fVar44) + (fVar37 - fVar47) * (fVar37 - fVar47)
                      )) {
                if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                fVar37 = *unaff_x27;
                fVar41 = unaff_x27[1];
                fStack000000000000012c = unaff_x27[2];
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar9 + 0x18);
                if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)uVar39 * 0xc;
                  *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                  *(float *)(lVar14 + 0x20) = fVar37;
                  *(float *)(lVar14 + 0x24) = fVar41;
                  *(float *)(lVar14 + 0x28) = fStack000000000000012c;
                }
                else {
                  FUN_0409f624(lVar9,*(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                }
                fVar37 = fStack00000000000001d4;
                lVar9 = *(long *)(unaff_x26 + 0x20);
                if (lVar9 == 0) goto LAB_03168190;
                fVar44 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2
                                            );
                if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
                fVar48 = *unaff_x27;
                fVar26 = unaff_x27[1];
                fVar47 = unaff_x27[2];
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar9 = *(long *)(unaff_x26 + 0x28);
                fStack000000000000012c = fStack000000000000012c - fVar47;
                fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
                fStack00000000000001d4 =
                     fVar37 + SQRT(fStack0000000000000128 +
                                   (fVar44 - fVar48) * (fVar44 - fVar48) +
                                   (fVar41 - fVar26) * (fVar41 - fVar26));
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar9 + 0x18);
                if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0x3f800000;
                }
                else {
                  FUN_04059d64(0x3f800000,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar9 = *in_stack_000000e0;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar9 + 0x18);
                if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar9,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (lVar9 == 0) goto LAB_03168190;
                if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
                fStack000000000000012c = unaff_x27[2];
                fStack0000000000000128 = unaff_x27[1];
                FUN_0409f350(*unaff_x27,lVar9,*(int *)(lVar9 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                lVar9 = *(long *)(unaff_x26 + 0x28);
                if (lVar9 == 0) goto LAB_03168190;
                FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
          }
          lVar9 = *(long *)(unaff_x26 + 0x20);
          if (lVar9 == 0) goto LAB_03168190;
          iVar50 = *(int *)(lVar9 + 0x18);
          fVar37 = (float)FUN_0409f2f4(lVar9,iVar50 + -1,*(undefined8 *)PTR_DAT_069fd088);
          lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
          *(float *)(in_stack_00000148 + 0x2c0) =
               *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
          if (lVar9 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar9 + 0x10);
          lVar17 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar39 = *(uint *)(lVar9 + 0x18);
          in_stack_000000d0._4_4_ = iVar50 + in_stack_000000d0._4_4_;
          if (uVar39 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar39 + 1;
            *(int *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = in_stack_000000d0._4_4_;
          }
          else {
            FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                   *unaff_x21), lVar9 == 0)) goto LAB_03168190;
          iStack0000000000000108 = *(int *)(lVar9 + 0x6c);
          in_stack_0000027c = fStack0000000000000128;
          fVar44 = fStack000000000000012c;
          fVar41 = fVar37;
LAB_0316c620:
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                   *unaff_x21), fVar48 = fStack00000000000001d4, lVar9 == 0))
          goto LAB_03168190;
          if (*(char *)(lVar9 + 0xb8) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            uVar21 = *(undefined8 *)(in_stack_00000148 + 0x20);
            uVar24 = *(undefined8 *)(unaff_x26 + 0x28);
            uVar38 = *(undefined4 *)(in_stack_00000148 + 0x128);
            lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x24 & 0xffffffff,
                                 *(undefined8 *)PTR_DAT_06a0b440);
            if (lVar9 == 0) goto LAB_03168190;
            FUN_031098f4(uVar38,uStack000000000000006c,fVar48,uVar21,&stack0x00000238,uVar24,
                         &stack0x00000248,*(undefined1 *)(lVar9 + 0xb8),
                         *(undefined8 *)(unaff_x26 + 0x78),in_stack_00000070,in_stack_000000e0);
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          }
          if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
          FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                       *(undefined8 *)PTR_DAT_06a0b3a0);
          if (*in_stack_00000078 == 0) goto LAB_03168190;
          FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                       *(undefined8 *)PTR_DAT_06a0b3d8);
          fVar47 = fStack0000000000000088;
          fVar48 = in_stack_00000080._4_4_;
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
          lVar14 = *(long *)(lVar9 + 0x10);
          fVar26 = *in_stack_000000d8;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar39 = *(uint *)(lVar9 + 0x18);
          if (uVar39 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar39 + 1;
            *(float *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = fVar26;
          }
          else {
            FUN_04059d64(lVar9,*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
          }
          if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
            lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
            lVar17 = *(long *)(unaff_x26 + 0x78);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            fVar26 = (float)FUN_0409f2f4(lVar17,*(int *)(lVar17 + 0x18) + -1,*(undefined8 *)puVar2);
            lVar17 = *(long *)(unaff_x26 + 0x78);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            fVar36 = fVar47;
            fVar29 = fVar48;
            fVar27 = (float)FUN_0409f2f4(lVar17,*(int *)(lVar17 + 0x18) + -2,*(undefined8 *)puVar2);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar26 = fVar26 - fVar27;
            fVar47 = fVar47 - fVar36;
            fVar48 = fVar48 - fVar29;
            fVar36 = SQRT(fVar48 * fVar48 + fVar26 * fVar26 + fVar47 * fVar47);
            if (fVar36 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(plVar19);
                DAT_06db4c71 = '\x01';
              }
              pfVar16 = *(float **)(*plVar19 + 0xb8);
              fVar26 = *pfVar16;
              fVar47 = pfVar16[1];
              fVar48 = pfVar16[2];
            }
            else {
              fVar26 = fVar26 / fVar36;
              fVar47 = fVar47 / fVar36;
              fVar48 = fVar48 / fVar36;
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(float *)(lVar14 + 0x94) = fVar26;
            *(float *)(lVar14 + 0x98) = fVar47;
            *(float *)(lVar14 + 0x9c) = fVar48;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(float *)(lVar9 + 0x88) = fVar26;
            *(float *)(lVar9 + 0x8c) = fVar47;
            *(float *)(lVar9 + 0x90) = fVar48;
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          }
          if (unaff_x24 < 2) {
            if (unaff_x24 == 1) {
              lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
              lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
              if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              fVar26 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              fVar36 = fVar47;
              fVar29 = fVar48;
              fVar27 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar26 = fVar26 - fVar27;
              fVar47 = fVar47 - fVar36;
              fVar48 = fVar48 - fVar29;
              fVar36 = SQRT(fVar48 * fVar48 + fVar26 * fVar26 + fVar47 * fVar47);
              if (fVar36 <= DAT_010fd13c) {
                if (DAT_06db4c71 == '\0') {
                  FUN_02d965b8(plVar19);
                  DAT_06db4c71 = '\x01';
                }
                pfVar16 = *(float **)(*plVar19 + 0xb8);
                fVar26 = *pfVar16;
                fVar47 = pfVar16[1];
                fVar48 = pfVar16[2];
              }
              else {
                fVar26 = fVar26 / fVar36;
                fVar47 = fVar47 / fVar36;
                fVar48 = fVar48 / fVar36;
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              *(float *)(lVar14 + 0x94) = fVar26;
              *(float *)(lVar14 + 0x98) = fVar47;
              *(float *)(lVar14 + 0x9c) = fVar48;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              *(float *)(lVar9 + 0x88) = fVar26;
              *(float *)(lVar9 + 0x8c) = fVar47;
              *(float *)(lVar9 + 0x90) = fVar48;
            }
          }
          else if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
            if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar50 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            puVar2 = PTR_DAT_069fd088;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(int *)(lVar9 + 0xbc) + 1 < iVar50) {
              lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(int *)(lVar9 + 0x6c) != 3) {
                lVar14 = *(long *)(unaff_x26 + 0x78);
                lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                fVar29 = (float)FUN_0409f2f4(lVar14,*(int *)(lVar9 + 0xbc) + 1,*(undefined8 *)puVar2
                                            );
                lVar14 = *(long *)(unaff_x26 + 0x78);
                fVar26 = fVar47;
                fVar36 = fVar48;
                lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                fVar27 = (float)FUN_0409f2f4(lVar14,*(undefined4 *)(lVar9 + 0xbc),
                                             *(undefined8 *)puVar2);
                lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar31 = DAT_010fd13c;
                fVar29 = fVar29 - fVar27;
                fVar27 = fVar47 - fVar26;
                fVar36 = fVar48 - fVar36;
                fVar48 = SQRT(fVar36 * fVar36 + fVar29 * fVar29 + fVar27 * fVar27);
                if (fVar48 <= DAT_010fd13c) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar19);
                    DAT_06db4c71 = '\x01';
                  }
                  pfVar16 = *(float **)(*plVar19 + 0xb8);
                  fVar30 = *pfVar16;
                  fVar27 = pfVar16[1];
                  fVar48 = pfVar16[2];
                }
                else {
                  fVar30 = fVar29 / fVar48;
                  fVar27 = fVar27 / fVar48;
                  fVar48 = fVar36 / fVar48;
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                *(float *)(lVar9 + 0x88) = fVar30;
                *(float *)(lVar9 + 0x8c) = fVar27;
                uVar21 = *unaff_x21;
                *(float *)(lVar9 + 0x90) = fVar48;
                uVar39 = *(uint *)(in_stack_00000098 + 0x18);
                lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar21);
                if (unaff_x24 != uVar39) {
                  fVar47 = fVar26;
                }
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar47 = fVar47 - fVar26;
                fVar26 = SQRT(fVar36 * fVar36 + fVar29 * fVar29 + fVar47 * fVar47);
                if (fVar26 <= fVar31) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar19);
                    DAT_06db4c71 = '\x01';
                  }
                  uVar21 = **(undefined8 **)(*plVar19 + 0xb8);
                  fVar36 = *(float *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
                }
                else {
                  fVar36 = fVar36 / fVar26;
                  uVar21 = CONCAT44(fVar47 / fVar26,fVar29 / fVar26);
                  fVar48 = fVar29;
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                *(undefined8 *)(lVar9 + 0x94) = uVar21;
                *(float *)(lVar9 + 0x9c) = fVar36;
              }
            }
          }
          if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
            lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
            if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
            uVar21 = *(undefined8 *)(lVar14 + 0x48);
            *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar14 + 0x50);
            *(undefined8 *)(lVar9 + 0x54) = uVar21;
          }
          if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)in_stack_00000168) {
            if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                   *unaff_x21);
              if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
              uVar21 = *unaff_x21;
              *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar21)
              ;
              if (lVar9 == 0) goto LAB_03168190;
              uVar21 = *unaff_x21;
              *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar21);
              if (lVar9 == 0) goto LAB_03168190;
              uVar21 = *unaff_x21;
              *(undefined4 *)(lVar9 + 0xbc) = 0;
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar21);
              if (lVar9 == 0) goto LAB_03168190;
              *(undefined4 *)(lVar9 + 0xc0) = 0;
              if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                fVar37 = *in_stack_000000d8;
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                      *unaff_x21);
                if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
                uVar21 = *unaff_x21;
                *(float *)(lVar9 + 200) = fVar37 - *(float *)(lVar14 + 0xc0);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     uVar21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar37 = *(float *)(lVar9 + 200);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                      *unaff_x21);
                if (1000.0 <= fVar37) {
                  if (lVar14 == 0) goto LAB_03168190;
                  fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
                  uVar21 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                  uVar21 = FUN_05362cb4(uVar21,*(undefined8 *)PTR_DAT_06a0c488,0);
                }
                else {
                  if (lVar14 == 0) goto LAB_03168190;
                  uVar21 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                  uVar21 = FUN_05362cb4(uVar21,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                }
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0xd0) = uVar21;
                  LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar21);
                  lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                       *unaff_x21);
                  if (lVar9 != 0) {
                    fVar37 = *(float *)(lVar9 + 0x4c);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                         *unaff_x21);
                    if (lVar9 != 0) {
                      fVar41 = *(float *)(lVar9 + 0x4c);
                      fVar44 = fVar37 - fVar41;
                      if (DAT_06db4ece == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4ece = '\x01';
                      }
                      puVar2 = PTR_DAT_069fbb48;
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar47 = 0.0;
                      fVar44 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar44 * fVar44) *
                                    DAT_010fd194);
                      fVar48 = DAT_010fcd14;
                      if (DAT_010fcd14 <= fVar44) {
                        fVar48 = -1.0;
                        fVar44 = (in_stack_00000230 * 0.0 + ABS(fVar37 - fVar41) * 50.0 + 0.0) /
                                 fVar44;
                        fVar37 = 1.0;
                        if (fVar44 <= 1.0) {
                          fVar37 = fVar44;
                        }
                        fVar41 = -1.0;
                        if (-1.0 <= fVar44) {
                          fVar41 = fVar37;
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          fVar48 = -1.0;
                          thunk_FUN_02df485c();
                        }
                        dVar33 = acos((double)fVar41);
                        fVar47 = (float)dVar33 * DAT_010fcf40;
                      }
                      fVar47 = 90.0 - fVar47;
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*unaff_x21);
                      if (fVar47 <= 10.0) {
                        uVar21 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                      }
                      else {
                        dVar33 = modf((double)fVar47,(double *)&stack0x00000298);
                        if (0.0 <= fVar47) {
                          if (dVar33 == 0.5) {
                            dVar33 = *(double *)(unaff_x26 + 0x80);
                            fVar48 = 1.0;
                            goto LAB_0316e5fc;
                          }
                          fStack00000000000001d0 = (float)(int)(fVar47 + 0.5);
                        }
                        else if (dVar33 == -0.5) {
                          dVar33 = *(double *)(unaff_x26 + 0x80);
                          fVar48 = -1.0;
LAB_0316e5fc:
                          fStack00000000000001d0 = (float)dVar33;
                          if (((long)dVar33 & 1U) != 0) {
                            fStack00000000000001d0 = (float)dVar33 + fVar48;
                          }
                        }
                        else {
                          fStack00000000000001d0 = (float)(int)(fVar47 + -0.5);
                        }
                        uVar21 = FUN_054fabf8(&stack0x000001d0,0);
                      }
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0xd8) = uVar21;
                        LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar21);
                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                             *(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
                        if (lVar9 != 0) {
                          fVar37 = *(float *)(lVar9 + 0x4c);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                               *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
                          if (lVar9 != 0) {
                            fVar41 = *(float *)(lVar9 + 0x4c);
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
                            ;
                            if (lVar9 != 0) {
                              fVar44 = *(float *)(lVar9 + 0x48);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,
                                                   *unaff_x21);
                              if (lVar9 != 0) {
                                fVar47 = *(float *)(lVar9 + 0x50);
                                lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                     *(int *)(in_stack_00000098 + 0x18) + -1,
                                                     *unaff_x21);
                                if (lVar9 != 0) {
                                  fVar26 = *(float *)(lVar9 + 0x48);
                                  lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                       *(int *)(in_stack_00000098 + 0x18) + -1,
                                                       *unaff_x21);
                                  if (lVar9 != 0) {
                                    fVar36 = *(float *)(lVar9 + 0x50);
                                    if (DAT_06db4c77 == '\0') {
                                      FUN_02d965b8(PTR_DAT_069fbb48);
                                      DAT_06db4c77 = '\x01';
                                    }
                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                    }
                                    fVar47 = fVar47 - fVar36;
                                    fVar44 = fVar44 - fVar26;
                                    lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                         *(int *)(in_stack_00000098 + 0x18) + -2,
                                                         *unaff_x21);
                                    fStack00000000000001d0 =
                                         (ABS(fVar37 - fVar41) /
                                         SQRT(fVar44 * fVar44 + fVar47 * fVar47)) * 100.0;
                                    uVar21 = FUN_054fad00(&stack0x000001d0,
                                                          *(undefined8 *)PTR_DAT_06a0c498,0);
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
              uVar21 = *unaff_x21;
              *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar21);
              if (lVar9 == 0) goto LAB_03168190;
              *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
              if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                fVar37 = *in_stack_000000d8;
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                      *unaff_x21);
                if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
                uVar21 = *unaff_x21;
                *(float *)(lVar9 + 200) = fVar37 - *(float *)(lVar14 + 0xc0);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     uVar21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar37 = *(float *)(lVar9 + 200);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                      *unaff_x21);
                if (1000.0 <= fVar37) {
                  if (lVar14 == 0) goto LAB_03168190;
                  fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
                  uVar21 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                  uVar21 = FUN_05362cb4(uVar21,*(undefined8 *)PTR_DAT_06a0c488,0);
                }
                else {
                  if (lVar14 == 0) goto LAB_03168190;
                  uVar21 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                  uVar21 = FUN_05362cb4(uVar21,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                }
                if (lVar9 == 0) goto LAB_03168190;
                *(undefined8 *)(lVar9 + 0xd0) = uVar21;
                LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar21);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar37 = *(float *)(lVar9 + 0x4c);
                lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar41 = *(float *)(lVar9 + 0x4c);
                fVar44 = fVar37 - fVar41;
                if (DAT_06db4ece == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4ece = '\x01';
                }
                puVar2 = PTR_DAT_069fbb48;
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar47 = 0.0;
                fVar44 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar44 * fVar44) *
                              DAT_010fd194);
                fVar48 = DAT_010fcd14;
                if (DAT_010fcd14 <= fVar44) {
                  fVar48 = -1.0;
                  fVar44 = (in_stack_00000230 * 0.0 + ABS(fVar37 - fVar41) * 50.0 + 0.0) / fVar44;
                  fVar37 = 1.0;
                  if (fVar44 <= 1.0) {
                    fVar37 = fVar44;
                  }
                  fVar41 = -1.0;
                  if (-1.0 <= fVar44) {
                    fVar41 = fVar37;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    fVar48 = -1.0;
                    thunk_FUN_02df485c();
                  }
                  dVar33 = acos((double)fVar41);
                  fVar47 = (float)dVar33 * DAT_010fcf40;
                }
                fVar47 = 90.0 - fVar47;
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                if (fVar47 <= 10.0) {
                  uVar21 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                }
                else {
                  dVar33 = modf((double)fVar47,(double *)&stack0x00000298);
                  if (0.0 <= fVar47) {
                    if (dVar33 == 0.5) {
                      dVar33 = *(double *)(unaff_x26 + 0x80);
                      fVar48 = 1.0;
                      goto LAB_0316e5d0;
                    }
                    fStack00000000000001d0 = (float)(int)(fVar47 + 0.5);
                  }
                  else if (dVar33 == -0.5) {
                    dVar33 = *(double *)(unaff_x26 + 0x80);
                    fVar48 = -1.0;
LAB_0316e5d0:
                    fStack00000000000001d0 = (float)dVar33;
                    if (((long)dVar33 & 1U) != 0) {
                      fStack00000000000001d0 = (float)dVar33 + fVar48;
                    }
                  }
                  else {
                    fStack00000000000001d0 = (float)(int)(fVar47 + -0.5);
                  }
                  uVar21 = FUN_054fabf8(&stack0x000001d0,0);
                }
                if (lVar9 == 0) goto LAB_03168190;
                *(undefined8 *)(lVar9 + 0xd8) = uVar21;
                LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar21);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar37 = *(float *)(lVar9 + 0x4c);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar41 = *(float *)(lVar9 + 0x4c);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar44 = *(float *)(lVar9 + 0x48);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar47 = *(float *)(lVar9 + 0x50);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar26 = *(float *)(lVar9 + 0x48);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                if (lVar9 == 0) goto LAB_03168190;
                fVar36 = *(float *)(lVar9 + 0x50);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar47 = fVar47 - fVar36;
                fVar44 = fVar44 - fVar26;
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                fStack00000000000001d0 =
                     (ABS(fVar37 - fVar41) / SQRT(fVar44 * fVar44 + fVar47 * fVar47)) * 100.0;
                uVar21 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
                if (lVar9 == 0) goto LAB_03168190;
LAB_0316ea58:
                *(undefined8 *)(lVar9 + 0xe0) = uVar21;
                LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar21);
              }
            }
            fVar37 = 1000.0;
            if (1000.0 <= *in_stack_000000d8) {
              fVar37 = 1000.0;
              fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
              uVar21 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c488;
            }
            else {
              uVar21 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
            }
            uVar21 = FUN_05362cb4(uVar21,*puVar13,0);
            *(undefined8 *)(in_stack_00000148 + 0x2d0) = uVar21;
            LeanTween__value(in_stack_00000148 + 0x2d0,uVar21);
            if (*(int *)(in_stack_00000098 + 0x18) == 2) {
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              if (lVar9 == 0) goto LAB_03168190;
              fVar41 = *(float *)(lVar9 + 200);
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              lVar14 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              if (1000.0 <= fVar41) {
                if (lVar14 == 0) goto LAB_03168190;
                fVar37 = 1000.0;
                fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
                uVar21 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                uVar21 = FUN_05362cb4(uVar21,*(undefined8 *)PTR_DAT_06a0c488,0);
              }
              else {
                if (lVar14 == 0) goto LAB_03168190;
                uVar21 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                uVar21 = FUN_05362cb4(uVar21,*(undefined8 *)PTR_DAT_06a0c4f0,0);
              }
              if (lVar9 == 0) goto LAB_03168190;
              *(undefined8 *)(lVar9 + 0xd0) = uVar21;
              LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar21);
            }
            if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                   *unaff_x21);
              if (lVar9 == 0) goto LAB_03168190;
              *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
              LeanTween__value();
            }
            puVar3 = PTR_DAT_06a0b440;
            puVar2 = PTR_DAT_069fd088;
            fVar41 = fVar37;
            if (iStack0000000000000058 == 0) goto LAB_0316ee54;
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            fVar44 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
            lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
            puVar4 = PTR_DAT_06a0b7d0;
            puVar3 = PTR_DAT_069fbb48;
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(unaff_x26 + 0x78);
            fVar41 = *(float *)(lVar9 + 200) * 0.5;
            fVar47 = 5.0;
            if (fVar41 <= 5.0) {
              fVar47 = fVar41;
            }
            if (lVar14 == 0) goto LAB_03168190;
            uVar34 = (ulong)(uint)fStack0000000000000054;
            iVar50 = 1;
            fVar44 = fStack0000000000000050 * 10.0 + fVar44;
            uVar15 = (ulong)(uint)fVar44;
            fVar26 = fStack0000000000000054 * 10.0 + fVar48;
            fVar36 = 0.0;
            goto LAB_0316ecc4;
          }
          unaff_x20 = in_stack_00000168 - 1;
          fStack00000000000001d4 = 0.0;
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
          uVar21 = *unaff_x21;
          *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar21);
          if (lVar9 == 0) goto LAB_03168190;
          *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
          iVar50 = (int)in_stack_00000168;
          if (1 < in_stack_00000168) {
            if (in_stack_00000168 == 2) {
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              if (lVar9 == 0) goto LAB_03168190;
              iVar20 = 0;
              fVar48 = *in_stack_000000d8;
            }
            else {
              iVar20 = iVar50 + -2;
              lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*unaff_x21);
              fVar48 = *in_stack_000000d8;
              lVar14 = FUN_0400ff1c(in_stack_00000098,iVar20,*unaff_x21);
              if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
              fVar48 = fVar48 - *(float *)(lVar14 + 0xc0);
            }
            puVar2 = PTR_DAT_06a0b440;
            *(float *)(lVar9 + 200) = fVar48;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*(undefined8 *)puVar2);
            if (lVar9 == 0) goto LAB_03168190;
            fVar48 = *(float *)(lVar9 + 200);
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*(undefined8 *)puVar2);
            lVar14 = FUN_0400ff1c(in_stack_00000098,iVar20,*(undefined8 *)puVar2);
            if (1000.0 <= fVar48) {
              if (lVar14 == 0) goto LAB_03168190;
              fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
              uVar21 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c488;
            }
            else {
              if (lVar14 == 0) goto LAB_03168190;
              uVar21 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
            }
            uVar21 = FUN_05362cb4(uVar21,*puVar13,0);
            if (lVar9 == 0) goto LAB_03168190;
            *(undefined8 *)(lVar9 + 0xd0) = uVar21;
            LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar21);
            puVar2 = PTR_DAT_06a0b440;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*(undefined8 *)PTR_DAT_06a0b440);
            if (lVar9 == 0) goto LAB_03168190;
            fVar48 = *(float *)(lVar9 + 0x4c);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*(undefined8 *)puVar2);
            if (lVar9 == 0) goto LAB_03168190;
            fVar47 = *(float *)(lVar9 + 0x4c);
            if (DAT_06db4ece == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4ece = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar26 = fVar48 - fVar47;
            fVar29 = 0.0;
            fVar36 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar26 * fVar26) * DAT_010fd194);
            fVar26 = DAT_010fcd14;
            if (DAT_010fcd14 <= fVar36) {
              fVar26 = -1.0;
              fVar36 = (in_stack_00000230 * 0.0 + ABS(fVar48 - fVar47) * 50.0 + 0.0) / fVar36;
              fVar48 = 1.0;
              if (fVar36 <= 1.0) {
                fVar48 = fVar36;
              }
              fVar47 = -1.0;
              if (-1.0 <= fVar36) {
                fVar47 = fVar48;
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                fVar26 = -1.0;
                thunk_FUN_02df485c();
              }
              dVar33 = acos((double)fVar47);
              fVar29 = (float)dVar33 * DAT_010fcf40;
            }
            fVar29 = 90.0 - fVar29;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*(undefined8 *)puVar2);
            if (fVar29 <= 10.0) {
              uVar21 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
              puVar13 = (undefined8 *)PTR_DAT_069fd088;
            }
            else {
              dVar33 = modf((double)fVar29,(double *)&stack0x00000298);
              puVar13 = (undefined8 *)PTR_DAT_069fd088;
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  dVar33 = *(double *)(unaff_x26 + 0x80);
                  fVar48 = 1.0;
                  goto LAB_0316a098;
                }
                fStack00000000000001d0 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                dVar33 = *(double *)(unaff_x26 + 0x80);
                fVar48 = -1.0;
LAB_0316a098:
                fStack00000000000001d0 = (float)dVar33;
                if (((long)dVar33 & 1U) != 0) {
                  fStack00000000000001d0 = (float)dVar33 + fVar48;
                }
              }
              else {
                fStack00000000000001d0 = (float)(int)(fVar29 + -0.5);
              }
              uVar21 = FUN_054fabf8(&stack0x000001d0,0);
            }
            if (lVar9 == 0) goto LAB_03168190;
            *(undefined8 *)(lVar9 + 0xd8) = uVar21;
            LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar21);
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*(undefined8 *)PTR_DAT_06a0b440);
            if (lVar9 == 0) goto LAB_03168190;
            fVar48 = *(float *)(lVar9 + 0x4c);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            if (lVar9 == 0) goto LAB_03168190;
            fVar47 = *(float *)(lVar9 + 0x4c);
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*unaff_x21);
            if (lVar9 == 0) goto LAB_03168190;
            fVar36 = *(float *)(lVar9 + 0x48);
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*unaff_x21);
            if (lVar9 == 0) goto LAB_03168190;
            fVar29 = *(float *)(lVar9 + 0x50);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            if (lVar9 == 0) goto LAB_03168190;
            fVar27 = *(float *)(lVar9 + 0x48);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            if (lVar9 == 0) goto LAB_03168190;
            fVar31 = *(float *)(lVar9 + 0x50);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar29 = fVar29 - fVar31;
            fVar36 = fVar36 - fVar27;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar20,*unaff_x21);
            fVar27 = 100.0;
            fStack00000000000001d0 =
                 (ABS(fVar48 - fVar47) / SQRT(fVar36 * fVar36 + fVar29 * fVar29)) * 100.0;
            uVar21 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
            if (lVar9 == 0) goto LAB_03168190;
            *(undefined8 *)(lVar9 + 0xe0) = uVar21;
            LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar21);
            lVar9 = *(long *)(unaff_x26 + 0x78);
            if (lVar9 == 0) goto LAB_03168190;
            if (2 < *(int *)(lVar9 + 0x18)) {
              fStack0000000000000104 =
                   (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*puVar13);
              lVar9 = *(long *)(unaff_x26 + 0x78);
              if (lVar9 == 0) goto LAB_03168190;
              fVar48 = fVar27;
              fVar47 = fVar26;
              fVar36 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*puVar13);
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack0000000000000104 = fStack0000000000000104 - fVar36;
              fVar27 = fVar27 - fVar48;
              fVar26 = fVar26 - fVar47;
              fStack00000000000000fc =
                   SQRT(fVar26 * fVar26 +
                        fStack0000000000000104 * fStack0000000000000104 + fVar27 * fVar27);
              if (fStack00000000000000fc <= DAT_010fd13c) {
                if (DAT_06db4c71 == '\0') {
                  FUN_02d965b8(plVar19);
                  DAT_06db4c71 = '\x01';
                }
                pfVar16 = *(float **)(*plVar19 + 0xb8);
                fStack0000000000000104 = *pfVar16;
                fStack0000000000000100 = pfVar16[1];
                fStack00000000000000fc = pfVar16[2];
              }
              else {
                fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
                fStack0000000000000100 = fVar27 / fStack00000000000000fc;
                fStack00000000000000fc = fVar26 / fStack00000000000000fc;
              }
            }
          }
          lVar9 = *(long *)(unaff_x26 + 0x28);
          if (lVar9 == 0) goto LAB_03168190;
          lVar14 = *(long *)(unaff_x26 + 0x20);
          *(undefined4 *)(lVar9 + 0x18) = 0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          in_stack_00000230 = 0.0;
          *(undefined4 *)(lVar14 + 0x18) = 0;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
             (unaff_x29 = in_stack_00000168 + 1, *(uint *)(in_stack_00000170 + 0x18) <= unaff_x29))
          goto LAB_0316f2c4;
          lVar9 = in_stack_00000170 + in_stack_00000168 * 0xc;
          lVar14 = in_stack_00000170 + unaff_x29 * 0xc;
          fStack00000000000000b4 = *in_stack_000000d8;
          unaff_x19 = (float *)(lVar9 + 0x20);
          fVar26 = *unaff_x19;
          fVar48 = *(float *)(lVar9 + 0x24);
          fVar47 = *(float *)(lVar9 + 0x28);
          unaff_x27 = (float *)(lVar14 + 0x20);
          fVar36 = *unaff_x27;
          fVar27 = *(float *)(lVar14 + 0x24);
          fVar29 = *(float *)(lVar14 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *unaff_x21), lVar17 == 0)) goto LAB_03168190;
          fVar48 = fVar48 - fVar27;
          fVar47 = fVar47 - fVar29;
          uVar34 = (ulong)(uint)fVar47;
          uVar15 = (ulong)(uint)(fVar47 * fVar47);
          fStack00000000000000b4 =
               fStack00000000000000b4 +
               SQRT(fVar47 * fVar47 + (fVar26 - fVar36) * (fVar26 - fVar36) + fVar48 * fVar48);
          unaff_x24 = in_stack_00000168;
          if (*(int *)(lVar17 + 0x6c) == 0) {
            if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
               (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29)) goto LAB_0316f2c4;
            fVar26 = *unaff_x19;
            fVar48 = *(float *)(lVar9 + 0x24);
            fVar36 = *unaff_x27;
            fVar27 = *(float *)(lVar14 + 0x24);
            fVar47 = *(float *)(lVar9 + 0x28);
            fVar29 = *(float *)(lVar14 + 0x28);
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
              lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar50 + -2,*unaff_x21);
              if (lVar17 == 0) goto LAB_03168190;
              if (*(int *)(lVar17 + 0x6c) == 1) {
                bVar7 = true;
              }
              else {
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar50 + -2,*unaff_x21
                                         ), lVar17 == 0)) goto LAB_03168190;
                bVar7 = *(int *)(lVar17 + 0x6c) == 2;
              }
            }
            fVar31 = 0.0;
            if (in_stack_00000168 == 1) {
              fVar31 = fStack0000000000000064;
            }
            fVar30 = fStack0000000000000068;
            if (in_stack_00000168 != *(int *)(in_stack_00000170 + 0x18) - 3) {
              fVar30 = 1.0;
            }
            if (fVar30 <= fVar31) {
              iStack0000000000000108 = 0;
              in_stack_00000168 = unaff_x29;
            }
            else {
              fVar48 = fVar48 - fVar27;
              fVar47 = fVar47 - fVar29;
              fVar48 = DAT_010fcf10 /
                       SQRT(fVar47 * fVar47 +
                            (fVar26 - fVar36) * (fVar26 - fVar36) + fVar48 * fVar48);
              do {
                uVar15 = *(ulong *)(in_stack_00000170 + 0x18);
                if (fVar48 + fVar31 <= 1.0) {
                  bVar22 = 0;
                }
                else if (in_stack_00000168 == (int)uVar15 - 3) {
                  bVar22 = *(byte *)(in_stack_00000148 + 0x84) ^ 1;
                }
                else {
                  bVar22 = 0;
                }
                bVar8 = bVar22 != 0;
                fVar47 = 1.0;
                if (!bVar8) {
                  fVar47 = fVar31;
                }
                if (((uVar15 & 0xffffffff) <= in_stack_00000168) ||
                   ((uVar15 & 0xffffffff) <= unaff_x29)) goto LAB_0316f2c4;
                uVar40 = *(undefined4 *)(lVar9 + 0x24);
                uVar38 = *(undefined4 *)(lVar9 + 0x28);
                fVar26 = *unaff_x19;
                FUN_04059a68(in_stack_000000c8,in_stack_00000168 & 0xffffffff,
                             *(undefined8 *)PTR_DAT_06a0a108);
                fVar29 = in_stack_0000026c;
                fVar27 = in_stack_00000270;
                fVar31 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,
                                             fVar26,uVar40,uVar38);
                _fStack00000000000001c0 = CONCAT44(fVar29,fVar31);
                fVar26 = in_stack_00000160._4_4_;
                fVar36 = (float)in_stack_00000110;
                if (iStack0000000000000108 == 3) {
                  iStack0000000000000108 = 0;
                  fVar26 = fVar27;
                  fVar36 = fVar31;
                  fStack0000000000000128 = fVar29;
                  fStack000000000000012c = fVar27;
                  fVar41 = fVar31;
                }
                in_stack_000001c8 = fVar27;
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar32 = in_stack_000001c8;
                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                fVar46 = *unaff_x27;
                fVar42 = *(float *)(lVar14 + 0x24);
                fVar28 = fStack00000000000001c0;
                fVar35 = fStack00000000000001c4;
                fVar49 = *(float *)(lVar14 + 0x28);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar17 = *(long *)(unaff_x26 + 0x20);
                if (lVar17 == 0) goto LAB_03168190;
                fVar35 = fVar35 - fVar42;
                iVar50 = *(int *)(lVar17 + 0x18);
                fVar32 = fVar32 - fVar49;
                fVar42 = fVar32 * fVar32;
                fVar28 = SQRT(fVar42 + (fVar28 - fVar46) * (fVar28 - fVar46) + fVar35 * fVar35);
                if (iVar50 < 1) {
                  lVar17 = *(long *)(unaff_x26 + 0x78);
                  if (lVar17 == 0) goto LAB_03168190;
                  iVar50 = *(int *)(lVar17 + 0x18);
                  if (0 < iVar50) goto LAB_0316b4d8;
                }
                else {
LAB_0316b4d8:
                  fVar35 = (float)FUN_0409f2f4(lVar17,iVar50 + -1,*(undefined8 *)PTR_DAT_069fd088);
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
                  plVar19 = (long *)PTR_DAT_069fb978;
                  fStack00000000000000f8 = fStack00000000000000f8 - fVar35;
                  fStack00000000000000f4 = fStack00000000000000f4 - fVar42;
                  fStack00000000000000f0 = fStack00000000000000f0 - fVar32;
                  fVar32 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                                fStack00000000000000f8 * fStack00000000000000f8 +
                                fStack00000000000000f4 * fStack00000000000000f4);
                  if (fVar32 <= DAT_010fd13c) {
                    if (DAT_06db4c71 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fb978);
                      DAT_06db4c71 = '\x01';
                    }
                    pfVar16 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                    fStack00000000000000f8 = *pfVar16;
                    fStack00000000000000f4 = pfVar16[1];
                    fStack00000000000000f0 = pfVar16[2];
                    plVar19 = (long *)PTR_DAT_069fb978;
                  }
                  else {
                    fStack00000000000000f8 = fStack00000000000000f8 / fVar32;
                    fStack00000000000000f4 = fStack00000000000000f4 / fVar32;
                    fStack00000000000000f0 = fStack00000000000000f0 / fVar32;
                    if (DAT_06db4c71 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fb978);
                      DAT_06db4c71 = '\x01';
                    }
                  }
                  pfVar16 = *(float **)(*plVar19 + 0xb8);
                  if (fStack00000000000000a4 <=
                      (fStack00000000000000fc - pfVar16[2]) * (fStack00000000000000fc - pfVar16[2])
                      + (fStack0000000000000104 - *pfVar16) * (fStack0000000000000104 - *pfVar16) +
                        (fStack0000000000000100 - pfVar16[1]) *
                        (fStack0000000000000100 - pfVar16[1])) {
                    if (DAT_06db4ece == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4ece = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    unaff_s15 = 0.0;
                    fVar32 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                                  fStack0000000000000100 * fStack0000000000000100 +
                                  fStack0000000000000104 * fStack0000000000000104) *
                                  (fStack00000000000000f0 * fStack00000000000000f0 +
                                  fStack00000000000000f8 * fStack00000000000000f8 +
                                  fStack00000000000000f4 * fStack00000000000000f4));
                    if (DAT_010fcd14 <= fVar32) {
                      fVar32 = (fStack00000000000000fc * fStack00000000000000f0 +
                               fStack0000000000000104 * fStack00000000000000f8 +
                               fStack0000000000000100 * fStack00000000000000f4) / fVar32;
                      fVar35 = 1.0;
                      if (fVar32 <= 1.0) {
                        fVar35 = fVar32;
                      }
                      fVar42 = -1.0;
                      if (-1.0 <= fVar32) {
                        fVar42 = fVar35;
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      dVar33 = acos((double)fVar42);
                      unaff_s15 = (float)dVar33 * DAT_010fcf40;
                    }
                    bVar8 = false;
                    bVar5 = true;
                    bVar6 = false;
                    if (*(float *)(in_stack_00000148 + 0x80) < unaff_s15) {
                      bVar8 = false;
                      bVar5 = false;
                      bVar6 = true;
                      if (!NAN(fVar28)) {
                        bVar8 = fVar28 < 1.5;
                        bVar5 = fVar28 == 1.5;
                        bVar6 = false;
                      }
                    }
                    bVar8 = bVar22 != 0 ||
                            (!bVar5 && bVar8 == bVar6) &&
                            1.0 <= SQRT((fStack000000000000012c - fVar27) *
                                        (fStack000000000000012c - fVar27) +
                                        (fStack0000000000000128 - fVar29) *
                                        (fStack0000000000000128 - fVar29) +
                                        (fVar41 - fVar31) * (fVar41 - fVar31));
                  }
                }
                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                  if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                  FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
                }
                bVar5 = bVar8;
                if (fVar30 < fVar48 + fVar47 + DAT_010fd060) {
                  bVar6 = bVar8;
                  if (fStack00000000000000a0 <= fVar28) {
                    bVar6 = true;
                  }
                  if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                    fVar47 = 1.0;
                    _fStack00000000000001c0 = *(ulong *)unaff_x27;
                    in_stack_000001c8 = *(float *)(lVar14 + 0x28);
                    bVar5 = true;
                  }
                }
                if (fVar48 + fVar47 <= fVar30) {
                  fVar29 = fStack00000000000001c0;
                  fVar27 = fStack00000000000001c4;
                }
                else {
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                  _fStack00000000000001c0 = *(ulong *)unaff_x27;
                  fVar47 = 1.0;
                  in_stack_000001c8 = *(float *)(lVar14 + 0x28);
                  bVar5 = true;
                  fVar29 = *unaff_x27;
                  fVar27 = *(float *)(lVar14 + 0x24);
                }
                fVar31 = in_stack_000001c8;
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar32 = in_stack_000001c8;
                bVar6 = bVar5;
                if (fStack000000000000010c <
                    SQRT((fStack000000000000012c - fVar31) * (fStack000000000000012c - fVar31) +
                         (fVar41 - fVar29) * (fVar41 - fVar29) +
                         (fStack0000000000000128 - fVar27) * (fStack0000000000000128 - fVar27))) {
                  bVar6 = true;
                }
                bVar1 = bVar6;
                if (in_stack_00000168 != 1) {
                  bVar1 = true;
                }
                if (bVar1 == false) {
                  bVar6 = fVar47 == 0.0;
                }
                if (bVar6 == true) {
                  fVar44 = fStack00000000000001c0;
                  fVar29 = fStack00000000000001c4;
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
                  uVar15 = _fStack00000000000001c0;
                  in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
                  fVar29 = SQRT((fStack000000000000012c - fVar32) *
                                (fStack000000000000012c - fVar32) +
                                (fVar41 - fVar44) * (fVar41 - fVar44) +
                                (fStack0000000000000128 - fVar29) *
                                (fStack0000000000000128 - fVar29));
                  in_stack_00000160._4_4_ = in_stack_000001c8;
                  fStack00000000000001d4 = fVar29 + fStack00000000000001d4;
                  *in_stack_000000d8 = fVar29 + *in_stack_000000d8;
                  if (cVar12 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar44 = in_stack_000001c8;
                  lVar17 = *(long *)(in_stack_00000148 + 0x68);
                  *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
                  fVar36 = (float)uVar15 - fVar36;
                  fVar41 = fStack00000000000001c0;
                  in_stack_00000230 =
                       in_stack_00000230 +
                       SQRT(fVar36 * fVar36 + (fVar27 - fVar26) * (fVar27 - fVar26));
                  fStack0000000000000128 = fStack00000000000001c4;
                  fStack000000000000012c = in_stack_000001c8;
                  if ((lVar17 == 0) ||
                     (lVar17 = FUN_0400ff1c(lVar17,unaff_x20 & 0xffffffff,*unaff_x21), lVar17 == 0))
                  goto LAB_03168190;
                  if (*(float *)(lVar17 + 0x100) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*unaff_x21), lVar17 == 0))
                    goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x104) != 0.0) goto LAB_0316bb78;
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*unaff_x21), lVar17 == 0))
                    goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x110) != 0.0) goto LAB_0316bb78;
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*unaff_x21), lVar17 == 0))
                    goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x114) != 0.0) goto LAB_0316bb78;
                    lVar17 = *in_stack_000000e0;
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar39 = *(uint *)(lVar17 + 0x18);
                    if (uVar39 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                      *(undefined4 *)(lVar11 + (long)(int)uVar39 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar17,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  else {
LAB_0316bb78:
                    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                    fVar26 = *in_stack_000000d8;
                    uVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff
                                          ,*unaff_x21);
                    FUN_0316f6a0(fVar26,fStack00000000000000b4,uVar21,uVar21,&stack0x0000022c,
                                 &stack0x00000228,&stack0x00000224,&stack0x00000218,&stack0x00000278
                                 ,&stack0x00000214);
                  }
                  lVar17 = *in_stack_000000b8;
                  if (fVar29 <= 5.0) {
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar39 = *(uint *)(lVar17 + 0x18);
                    fVar26 = (unaff_s15 / fVar29) * 5.0;
                    if (*(uint *)(lVar11 + 0x18) <= uVar39) {
                      lVar11 = *(long *)(lVar18 + 0x20);
                      goto LAB_0316bcb0;
                    }
                    *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                    *(float *)(lVar11 + (long)(int)uVar39 * 4 + 0x20) = fVar26;
                  }
                  else {
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar39 = *(uint *)(lVar17 + 0x18);
                    if (uVar39 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                      *(float *)(lVar11 + (long)(int)uVar39 * 4 + 0x20) = unaff_s15;
                    }
                    else {
                      lVar11 = *(long *)(lVar18 + 0x20);
                      fVar26 = unaff_s15;
LAB_0316bcb0:
                      FUN_04059d64(fVar26,lVar17,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
                    }
                  }
                  if (bVar7) {
                    lVar17 = *in_stack_000000b8;
                    if (lVar17 == 0) goto LAB_03168190;
                    iVar50 = *(int *)(lVar17 + 0x18);
                    if (1 < iVar50) {
                      FUN_04059a68(lVar17,iVar50 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                      FUN_04059abc(lVar17,iVar50 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
                    }
                  }
                  puVar2 = PTR_DAT_069fbee0;
                  lVar17 = *(long *)(unaff_x26 + 0x20);
                  if (lVar17 == 0) goto LAB_03168190;
                  lVar11 = *(long *)(lVar17 + 0x10);
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_03168190;
                  uVar39 = *(uint *)(lVar17 + 0x18);
                  if (uVar39 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)uVar39 * 0xc;
                    *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                    *(float *)(lVar11 + 0x20) = fVar37;
                    *(float *)(lVar11 + 0x24) = in_stack_0000027c;
                    *(float *)(lVar11 + 0x28) = fVar44;
                  }
                  else {
                    FUN_0409f624(lVar17,*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70
                                         ));
                  }
                  unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                  lVar17 = *(long *)(unaff_x26 + 0x28);
                  if (lVar17 == 0) goto LAB_03168190;
                  lVar11 = *(long *)(lVar17 + 0x10);
                  lVar18 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_03168190;
                  uVar39 = *(uint *)(lVar17 + 0x18);
                  if (uVar39 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                    *(float *)(lVar11 + (long)(int)uVar39 * 4 + 0x20) = fVar47;
                  }
                  else {
                    FUN_04059d64(fVar47,lVar17,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (bVar5 != false) {
                    lVar17 = *(long *)(in_stack_00000148 + 0x2c8);
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069fc3e0;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar39 = *(uint *)(lVar17 + 0x18);
                    if (uVar39 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                      *(int *)(lVar11 + (long)(int)uVar39 * 4 + 0x20) = in_stack_000000d0._4_4_;
                    }
                    else {
                      FUN_03fb3e1c(lVar17,in_stack_000000d0._4_4_,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
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
                  in_stack_00000110 = (ulong)(uint)fVar36;
                  in_stack_00000160._4_4_ = fVar26;
                }
                fVar31 = fVar48 + fVar47;
              } while (fVar31 < fVar30);
              iStack0000000000000108 = 0;
              plVar19 = (long *)PTR_DAT_069fb978;
              in_stack_00000168 = unaff_x29;
            }
            goto LAB_0316c620;
          }
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *unaff_x21), lVar17 == 0)) goto LAB_03168190;
          if (*(int *)(lVar17 + 0x6c) != 1) {
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *unaff_x21), lVar17 == 0)) goto LAB_03168190;
            if (*(int *)(lVar17 + 0x6c) == 2) goto LAB_0316a48c;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *unaff_x21), lVar17 == 0)) goto LAB_03168190;
            if (*(int *)(lVar17 + 0x6c) == 3) {
              uStack00000000000001ac = 0;
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              if (((long)(*(int *)(*(long *)(in_stack_00000148 + 0x68) + 0x18) + -2) <
                   (long)in_stack_00000168) && (*(char *)(in_stack_00000148 + 0x84) == '\0')) {
                uVar21 = *(undefined8 *)(in_stack_00000148 + 0x2e0);
                if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar10 = FUN_0634eb94(uVar21,0,0);
                if ((uVar10 & 1) != 0) goto LAB_0316adcc;
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
                 (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), lVar17 == 0)) goto LAB_03168190;
              lVar11 = *(long *)(unaff_x26 + 0x28);
              *(undefined4 *)(lVar17 + 0x34) = uStack00000000000001ac;
              if (lVar11 == 0) goto LAB_03168190;
              fVar37 = 0.0;
              iVar20 = 0;
              puVar25 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
              while( true ) {
                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                puVar2 = PTR_DAT_069fbee0;
                plVar19 = (long *)PTR_DAT_069fb978;
                fVar44 = (float)uVar15;
                in_stack_00000160._4_4_ = (float)uVar34;
                iVar23 = *(int *)(lVar11 + 0x18);
                if (iVar23 <= iVar20) break;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                uStack00000000000001a0 =
                     FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar20,*(undefined8 *)PTR_DAT_069fd088
                                 );
                fStack00000000000001a4 = fVar44;
                fStack00000000000001a8 = in_stack_00000160._4_4_;
                if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                  uVar15 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                  if ((((uVar15 <= unaff_x20) || (uVar15 <= in_stack_00000168)) ||
                      (uVar15 <= unaff_x29)) || (uVar15 <= in_stack_00000168 + 2))
                  goto LAB_0316f2c4;
                  if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                  uVar38 = *puVar25;
                  fVar44 = (float)puVar25[1];
                  uVar40 = puVar25[2];
                  fVar48 = *unaff_x19;
                  uVar43 = *(undefined4 *)(lVar9 + 0x24);
                  uVar45 = *(undefined4 *)(lVar9 + 0x28);
                  FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar20,*(undefined8 *)PTR_DAT_06a0a108);
                  FUN_0316f340(uVar38,fVar44,uVar40,fVar48,uVar43,uVar45);
                  fStack00000000000001a4 = fVar44;
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  in_stack_00000160._4_4_ = fStack00000000000001a8;
                  FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar20,
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                  if (iVar20 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                  lVar17 = *in_stack_000000e0;
                  if (lVar17 == 0) goto LAB_03168190;
                  lVar11 = *(long *)(lVar17 + 0x10);
                  lVar18 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_03168190;
                  uVar39 = *(uint *)(lVar17 + 0x18);
                  if (uVar39 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                    *(undefined4 *)(lVar11 + (long)(int)uVar39 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_04059d64(0,lVar17,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                  }
                }
                else {
                  if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                  FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                  if (iVar20 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                            unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                     lVar17 == 0)) goto LAB_03168190;
                  if (*(float *)(lVar17 + 0x100) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440
                                             ), lVar17 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x104) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                unaff_x20 & 0xffffffff,
                                                *(undefined8 *)PTR_DAT_06a0b440), lVar17 == 0))
                      goto LAB_03168190;
                      if (*(float *)(lVar17 + 0x110) == 0.0) {
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  unaff_x20 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_06a0b440), lVar17 == 0))
                        goto LAB_03168190;
                        if (*(float *)(lVar17 + 0x114) == 0.0) goto LAB_0316b04c;
                      }
                    }
                  }
                  puVar2 = PTR_DAT_069fd088;
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  fVar48 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar20 + -1,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  fVar47 = fVar44;
                  fVar26 = in_stack_00000160._4_4_;
                  fVar36 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar20,
                                               *(undefined8 *)puVar2);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                  fVar29 = *in_stack_000000d8;
                  fVar37 = fVar37 + SQRT((in_stack_00000160._4_4_ - fVar26) *
                                         (in_stack_00000160._4_4_ - fVar26) +
                                         (fVar48 - fVar36) * (fVar48 - fVar36) +
                                         (fVar44 - fVar47) * (fVar44 - fVar47));
                  uVar21 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *(undefined8 *)PTR_DAT_06a0b440);
                  FUN_0316f6a0(fVar37 + fVar29,fStack00000000000000b4,uVar21,uVar21,&stack0x0000022c
                               ,&stack0x00000228,&stack0x00000224,&stack0x00000218,&stack0x000001a0,
                               &stack0x00000214);
                }
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                uVar34 = (ulong)(uint)fStack00000000000001a8;
                uVar15 = (ulong)(uint)fStack00000000000001a4;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar20,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                lVar11 = *(long *)(unaff_x26 + 0x28);
                iVar20 = iVar20 + 1;
                if (lVar11 == 0) goto LAB_03168190;
              }
              uVar15 = (ulong)(iVar23 - 1);
              if (iVar23 < 1) {
                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                lVar17 = *(long *)(unaff_x26 + 0x20);
                if (lVar17 == 0) goto LAB_03168190;
                lVar11 = *(long *)(lVar17 + 0x10);
                fVar37 = *unaff_x27;
                uVar38 = *(undefined4 *)(lVar14 + 0x24);
                in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar17 + 0x18);
                if (uVar39 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)uVar39 * 0xc;
                  *(uint *)(lVar17 + 0x18) = uVar39 + 1;
                  *(float *)(lVar11 + 0x20) = fVar37;
                  *(undefined4 *)(lVar11 + 0x24) = uVar38;
                  *(float *)(lVar11 + 0x28) = in_stack_00000160._4_4_;
                }
                else {
                  FUN_0409f624(lVar17,*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70))
                  ;
                  uVar15 = extraout_x1_00;
                }
                fVar37 = fStack00000000000001d4;
                if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
                   (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29)) goto LAB_0316f2c4;
                uVar21 = *(undefined8 *)unaff_x19;
                fVar44 = *(float *)(lVar9 + 0x28);
                uVar24 = *(undefined8 *)unaff_x27;
                fVar48 = *(float *)(lVar14 + 0x28);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48,uVar15);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar47 = (float)uVar21 - (float)uVar24;
                fVar26 = (float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar24 >> 0x20);
                fVar44 = fVar44 - fVar48;
                in_stack_0000027c = fVar44 * fVar44;
                fStack00000000000001d4 =
                     fVar37 + SQRT(in_stack_0000027c + fVar47 * fVar47 + fVar26 * fVar26);
LAB_0316d2dc:
                lVar9 = *(long *)(unaff_x26 + 0x28);
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar9 + 0x18);
                if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0x3f800000;
                }
                else {
                  FUN_04059d64(0x3f800000,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar9 = *in_stack_000000e0;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar9 + 0x18);
                if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar9,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                fVar37 = (float)FUN_04059a68(lVar11,uVar15,*(undefined8 *)PTR_DAT_06a0a108);
                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                puVar2 = PTR_DAT_069fd088;
                plVar19 = (long *)PTR_DAT_069fb978;
                fVar44 = 1.0;
                if (fVar37 <= 1.0) {
                  lVar9 = *(long *)(unaff_x26 + 0x20);
                  if (lVar9 == 0) goto LAB_03168190;
                  fVar37 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                  fVar44 = fVar44 - *(float *)(lVar14 + 0x24);
                  in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - *(float *)(lVar14 + 0x28);
                  in_stack_0000027c = fStack00000000000000a4;
                  if (fStack00000000000000a4 <=
                      in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                      (fVar37 - *unaff_x27) * (fVar37 - *unaff_x27) + fVar44 * fVar44) {
                    lVar9 = *(long *)(unaff_x26 + 0x20);
                    if (lVar9 == 0) goto LAB_03168190;
                    fVar37 = fStack00000000000000a4;
                    fVar44 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                 *(undefined8 *)puVar2);
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                    fVar48 = *unaff_x27;
                    fVar26 = *(float *)(lVar14 + 0x24);
                    fVar47 = *(float *)(lVar14 + 0x28);
                    if (DAT_06db4c77 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4c77 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    puVar3 = PTR_DAT_069fbee0;
                    fVar37 = fVar37 - fVar26;
                    lVar9 = *(long *)(unaff_x26 + 0x20);
                    in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar47;
                    if (fStack00000000000000b0 <=
                        SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                             (fVar44 - fVar48) * (fVar44 - fVar48) + fVar37 * fVar37)) {
                      if (unaff_x29 < *(uint *)(in_stack_00000170 + 0x18)) {
                        if (lVar9 != 0) {
                          lVar17 = *(long *)(lVar9 + 0x10);
                          fVar37 = *unaff_x27;
                          fVar44 = *(float *)(lVar14 + 0x24);
                          in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar17 != 0) {
                            uVar39 = *(uint *)(lVar9 + 0x18);
                            if (uVar39 < *(uint *)(lVar17 + 0x18)) {
                              lVar17 = lVar17 + (long)(int)uVar39 * 0xc;
                              *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                              *(float *)(lVar17 + 0x20) = fVar37;
                              *(float *)(lVar17 + 0x24) = fVar44;
                              *(float *)(lVar17 + 0x28) = in_stack_00000160._4_4_;
                            }
                            else {
                              FUN_0409f624(lVar9,*(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                            0xc0) + 0x70));
                            }
                            fVar37 = fStack00000000000001d4;
                            lVar9 = *(long *)(unaff_x26 + 0x20);
                            if (lVar9 != 0) {
                              fVar48 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                           *(undefined8 *)puVar2);
                              if (unaff_x29 < *(uint *)(in_stack_00000170 + 0x18)) {
                                fVar47 = *unaff_x27;
                                fVar36 = *(float *)(lVar14 + 0x24);
                                fVar26 = *(float *)(lVar14 + 0x28);
                                if (DAT_06db4c77 == '\0') {
                                  FUN_02d965b8(PTR_DAT_069fbb48);
                                  DAT_06db4c77 = '\x01';
                                }
                                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                }
                                fVar44 = fVar44 - fVar36;
                                in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar26;
                                in_stack_0000027c =
                                     in_stack_00000160._4_4_ * in_stack_00000160._4_4_;
                                fStack00000000000001d4 =
                                     fVar37 + SQRT(in_stack_0000027c +
                                                   (fVar48 - fVar47) * (fVar48 - fVar47) +
                                                   fVar44 * fVar44);
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
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                    in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
                    in_stack_0000027c = *(float *)(lVar14 + 0x24);
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
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                  in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
                  in_stack_0000027c = *(float *)(lVar14 + 0x24);
                  FUN_0409f350(*unaff_x27,lVar9,*(int *)(lVar9 + 0x18) + -1,
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                }
              }
              lVar9 = *(long *)(unaff_x26 + 0x20);
              if (lVar9 == 0) goto LAB_03168190;
              iVar20 = *(int *)(lVar9 + 0x18);
              in_stack_00000110 = FUN_0409f2f4(lVar9,iVar20 + -1,*(undefined8 *)PTR_DAT_069fd088);
              puVar2 = PTR_DAT_069fd088;
              lVar9 = *(long *)(unaff_x26 + 0x20);
              fVar37 = (float)in_stack_00000110;
              if (lVar9 == 0) goto LAB_03168190;
              fVar48 = in_stack_00000160._4_4_;
              if (1 < *(int *)(lVar9 + 0x18)) {
                fStack0000000000000088 = in_stack_0000027c;
                fStack000000000000008c =
                     (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                         *(undefined8 *)PTR_DAT_069fd088);
                lVar9 = *(long *)(unaff_x26 + 0x20);
                if (lVar9 == 0) goto LAB_03168190;
                fVar44 = fStack0000000000000088;
                fVar47 = fVar48;
                fVar26 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2
                                            );
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fStack000000000000008c = fStack000000000000008c - fVar26;
                fStack0000000000000088 = fStack0000000000000088 - fVar44;
                fVar48 = fVar48 - fVar47;
                in_stack_00000080._4_4_ =
                     SQRT(fVar48 * fVar48 +
                          fStack000000000000008c * fStack000000000000008c +
                          fStack0000000000000088 * fStack0000000000000088);
                if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar19);
                    DAT_06db4c71 = '\x01';
                  }
                  pfVar16 = *(float **)(*plVar19 + 0xb8);
                  fStack000000000000008c = *pfVar16;
                  fStack0000000000000088 = pfVar16[1];
                  in_stack_00000080._4_4_ = pfVar16[2];
                }
                else {
                  fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
                  fStack0000000000000088 = fStack0000000000000088 / in_stack_00000080._4_4_;
                  in_stack_00000080._4_4_ = fVar48 / in_stack_00000080._4_4_;
                }
              }
              lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
              *(float *)(in_stack_00000148 + 0x2c0) =
                   *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
              if (lVar9 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar9 + 0x10);
              lVar17 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar39 = *(uint *)(lVar9 + 0x18);
              in_stack_000000d0._4_4_ = iVar20 + in_stack_000000d0._4_4_;
              fVar47 = fStack00000000000001d4;
              if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                *(int *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = in_stack_000000d0._4_4_;
              }
              else {
                FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
              iVar20 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              fVar44 = in_stack_00000160._4_4_;
              if (iVar20 < 1) {
                iStack0000000000000108 = 3;
                in_stack_00000168 = unaff_x29;
              }
              else {
                lVar9 = FUN_0400ff1c(in_stack_00000098,iVar50 + -2,*unaff_x21);
                if ((lVar9 == 0) || (lVar14 = *in_stack_00000090, lVar14 == 0)) goto LAB_03168190;
                iVar50 = *(int *)(lVar9 + 0xbc);
                fVar26 = (float)FUN_04059a68(lVar14,*(int *)(lVar14 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_06a0a108);
                lVar9 = *in_stack_00000090;
                if (lVar9 == 0) goto LAB_03168190;
                if (1 < *(int *)(lVar9 + 0x18)) {
                  fVar47 = (float)FUN_04059a68(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                               *(undefined8 *)PTR_DAT_06a0a108);
                  fVar47 = fVar26 - fVar47;
                  fVar26 = fVar47;
                }
                puVar2 = PTR_DAT_069fd088;
                lVar9 = *(long *)(unaff_x26 + 0x78);
                if (lVar9 == 0) goto LAB_03168190;
                fVar36 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar29 = fVar47;
                fVar27 = fVar48;
                fVar31 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,*(undefined8 *)puVar2);
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar47 = fVar47 - fVar29;
                uVar15 = (ulong)(uint)DAT_010fd13c;
                fVar48 = SQRT((fVar48 - fVar27) * (fVar48 - fVar27) +
                              (fVar36 - fVar31) * (fVar36 - fVar31) + fVar47 * fVar47);
                if (fVar48 <= DAT_010fd13c) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar19);
                    DAT_06db4c71 = '\x01';
                  }
                  fVar47 = *(float *)(*(long *)(*plVar19 + 0xb8) + 4);
                }
                else {
                  fVar47 = fVar47 / fVar48;
                }
                puVar2 = PTR_DAT_069fd088;
                lVar9 = *(long *)(unaff_x26 + 0x78);
                if (lVar9 == 0) goto LAB_03168190;
                FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
                lVar9 = *(long *)(unaff_x26 + 0x78);
                if (lVar9 == 0) goto LAB_03168190;
                fVar29 = fVar48;
                fVar36 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2
                                            );
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                uVar34 = (ulong)(uint)(float)iVar50;
                fVar27 = (float)iVar20 - (float)iVar50;
                if (1.0 <= fVar27) {
                  fVar31 = 0.0;
                  iVar20 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                  iVar50 = 2;
                  iVar23 = -2;
                  do {
                    fVar30 = (float)uVar34;
                    if ((iVar50 - iVar20) + -1 < 0) {
                      lVar9 = *(long *)(unaff_x26 + 0x78);
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar32 = (float)uVar15;
                      fVar28 = (float)FUN_0409f2f4(lVar9,iVar23 + *(int *)(lVar9 + 0x18),
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
                      fVar35 = fVar32 - (float)uVar15;
                      fVar31 = fVar31 + SQRT(fVar35 * fVar35 +
                                             (fVar28 - fVar36) * (fVar28 - fVar36) +
                                             (fVar30 - fVar29) * (fVar30 - fVar29));
                      fVar48 = (fVar26 / fVar27) * fVar47 + fVar48;
                      fVar36 = 1.0;
                      if (SQRT(fVar31 / fVar26) <= 1.0) {
                        fVar36 = SQRT(fVar31 / fVar26);
                      }
                      fVar29 = fVar48 + (fVar30 - fVar48) * fVar36;
                      uVar34 = (ulong)(uint)fVar29;
                      FUN_0409f350(fVar28,uVar34,fVar32,lVar9,iVar23 + *(int *)(lVar9 + 0x18),
                                   *(undefined8 *)PTR_DAT_06a0b7d0);
                      uVar15 = (ulong)(uint)fVar32;
                      fVar36 = fVar28;
                    }
                    fVar30 = (float)iVar50;
                    iVar50 = iVar50 + 1;
                    iVar23 = iVar23 + -1;
                  } while (fVar30 <= fVar27);
                  iStack0000000000000108 = 3;
                  unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                  in_stack_00000168 = unaff_x29;
                }
                else {
                  iStack0000000000000108 = 3;
                  in_stack_00000168 = unaff_x29;
                }
              }
            }
            else {
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                       *unaff_x21), puVar2 = PTR_DAT_069fd088, lVar9 == 0))
              goto LAB_03168190;
              in_stack_00000168 = unaff_x29;
              if (*(int *)(lVar9 + 0x6c) == 4) {
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                         *unaff_x21), lVar9 == 0)) goto LAB_03168190;
                fStack00000000000001d4 = 0.0;
                *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar9 + 0x1d8);
                lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar9 + 0x18);
                if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar9,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar14 = *(long *)(unaff_x26 + 0x20);
                if (lVar14 == 0) goto LAB_03168190;
                iVar50 = 1;
                while( true ) {
                  fVar48 = fStack00000000000001d4;
                  fVar26 = (float)uVar34;
                  fVar47 = (float)uVar15;
                  if (*(int *)(lVar14 + 0x18) <= iVar50) break;
                  fVar36 = (float)FUN_0409f2f4(lVar14,iVar50 + -1,*(undefined8 *)puVar2);
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  fVar29 = fVar47;
                  fVar27 = fVar26;
                  fVar31 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar50,
                                               *(undefined8 *)puVar2);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar26 = fVar26 - fVar27;
                  uVar34 = (ulong)(uint)fVar26;
                  lVar14 = *(long *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  uVar15 = (ulong)(uint)(fVar26 * fVar26);
                  fStack00000000000001d4 =
                       fVar48 + SQRT(fVar26 * fVar26 +
                                     (fVar36 - fVar31) * (fVar36 - fVar31) +
                                     (fVar47 - fVar29) * (fVar47 - fVar29));
                  if (lVar14 == 0) goto LAB_03168190;
                  uVar39 = *(uint *)(lVar9 + 0x18);
                  if (uVar39 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar39 + 1;
                    *(float *)(lVar14 + (long)(int)uVar39 * 4 + 0x20) = fStack00000000000001d4;
                  }
                  else {
                    FUN_04059d64(lVar9,*(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) +
                                                  0xc0) + 0x70));
                  }
                  lVar14 = *(long *)(unaff_x26 + 0x20);
                  iVar50 = iVar50 + 1;
                  if (lVar14 == 0) goto LAB_03168190;
                }
                lVar14 = *(long *)(unaff_x26 + 0x28);
                *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
                if (lVar14 == 0) goto LAB_03168190;
                lVar17 = *(long *)(lVar14 + 0x10);
                lVar11 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar14 + 0x18);
                if (uVar39 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar39 + 1;
                  *(undefined4 *)(lVar17 + (long)(int)uVar39 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar14,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                lVar14 = *in_stack_000000e0;
                if (lVar14 == 0) goto LAB_03168190;
                lVar17 = *(long *)(lVar14 + 0x10);
                lVar11 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_03168190;
                uVar39 = *(uint *)(lVar14 + 0x18);
                if (uVar39 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar39 + 1;
                  *(undefined4 *)(lVar17 + (long)(int)uVar39 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar14,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                lVar14 = *(long *)(unaff_x26 + 0x20);
                if (lVar14 == 0) goto LAB_03168190;
                iVar50 = 0;
                while (iVar50 < *(int *)(lVar14 + 0x18)) {
                  lVar14 = *(long *)(unaff_x26 + 0x28);
                  fVar48 = (float)FUN_04059a68(lVar9,iVar50,*(undefined8 *)PTR_DAT_06a0a108);
                  if (lVar14 == 0) goto LAB_03168190;
                  lVar17 = *(long *)(lVar14 + 0x10);
                  lVar11 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_03168190;
                  uVar39 = *(uint *)(lVar14 + 0x18);
                  if (uVar39 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar39 + 1;
                    *(float *)(lVar17 + (long)(int)uVar39 * 4 + 0x20) =
                         fVar48 / fStack00000000000001d4;
                  }
                  else {
                    FUN_04059d64(lVar14,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar14 = *in_stack_000000e0;
                  if (lVar14 == 0) goto LAB_03168190;
                  lVar17 = *(long *)(lVar14 + 0x10);
                  lVar11 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_03168190;
                  uVar39 = *(uint *)(lVar14 + 0x18);
                  if (uVar39 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar39 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar39 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_04059d64(0,lVar14,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar14 = *(long *)(unaff_x26 + 0x20);
                  iVar50 = iVar50 + 1;
                  if (lVar14 == 0) goto LAB_03168190;
                }
                iStack0000000000000108 = 4;
                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                in_stack_00000168 = unaff_x29;
              }
            }
            goto LAB_0316c620;
          }
LAB_0316a48c:
          uVar39 = *(uint *)(in_stack_00000170 + 0x18);
          in_stack_00000160._4_4_ = fVar44;
          if (in_stack_00000168 == 1) {
            if ((ulong)uVar39 < 2) goto LAB_0316f2c4;
            in_stack_00000160._4_4_ = *(float *)(lVar9 + 0x28);
            *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)unaff_x19;
          }
          if (uVar39 <= unaff_x29) goto LAB_0316f2c4;
          fVar41 = *(float *)(lVar14 + 0x28);
          uVar21 = *(undefined8 *)unaff_x27;
          uVar24 = *(undefined8 *)unaff_x19;
          fVar44 = *(float *)(lVar9 + 0x28);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar48 = (float)uVar21 - (float)uVar24;
          fVar47 = (float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar24 >> 0x20);
          fVar41 = fVar41 - fVar44;
          fVar44 = SQRT(fVar41 * fVar41 + fVar48 * fVar48 + fVar47 * fVar47);
          uVar15 = (ulong)(uint)fVar44;
          if (fVar44 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(plVar19);
              DAT_06db4c71 = '\x01';
            }
            unaff_d8 = **(undefined8 **)(*plVar19 + 0xb8);
            unaff_s9 = *(float *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
          }
          else {
            unaff_s9 = fVar41 / fVar44;
            unaff_d8 = CONCAT44(fVar47 / fVar44,fVar48 / fVar44);
          }
          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
          fVar41 = *(float *)(lVar14 + 0x28);
          uVar21 = *(undefined8 *)unaff_x27;
          uVar24 = *(undefined8 *)unaff_x19;
          fVar44 = *(float *)(lVar9 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar48 = (float)uVar21 - (float)uVar24;
          fVar47 = (float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar24 >> 0x20);
          fVar41 = fVar41 - fVar44;
          fStack00000000000001d4 = SQRT(fVar41 * fVar41 + fVar48 * fVar48 + fVar47 * fVar47);
          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
          in_stack_00000110 = (ulong)(uint)fVar37;
          fVar44 = *unaff_x27;
          fVar41 = *(float *)(lVar14 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar41 = fVar41 - in_stack_00000160._4_4_;
          in_stack_00000230 = SQRT((fVar44 - fVar37) * (fVar44 - fVar37) + fVar41 * fVar41) + 0.0;
          fVar41 = 0.0;
          if (in_stack_00000168 != 1) {
            fVar41 = fStack000000000000010c;
          }
          in_stack_00000150 = (ulong)(uint)fVar41;
          uVar34 = in_stack_00000150;
          unaff_x22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
          FUN_040594d0(unaff_x22,*(undefined8 *)PTR_DAT_069ff180);
          unaff_x23 = in_stack_00000148;
          in_stack_00000120._4_4_ = unaff_s15;
          in_stack_00000168 = unaff_x29;
        } while (fStack00000000000001d4 - fStack000000000000010c <= fVar41);
        in_stack_00000130 = CONCAT44(*(undefined4 *)((ulong)&stack0x00000278 | 4),fVar37);
        unaff_x25 = in_stack_000000d8;
        unaff_x28 = in_stack_00000170;
        in_stack_00000168 = unaff_x29;
      }
      in_stack_00000214 = 0;
      if (*(uint *)(unaff_x28 + 0x18) <= unaff_x29) {
LAB_0316f2c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar21 = *(undefined8 *)unaff_x27;
      fVar41 = unaff_x27[2];
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar37 = (float)in_stack_00000150;
      fVar44 = (float)unaff_d8 * fVar37 + (float)in_stack_00000130;
      fVar48 = (float)((ulong)unaff_d8 >> 0x20) * fVar37 + (float)((ulong)in_stack_00000130 >> 0x20)
      ;
      param_1 = CONCAT44(fVar48,fVar44);
      fVar37 = unaff_s9 * fVar37 + in_stack_00000160._4_4_;
      fVar44 = fVar44 - (float)uVar21;
      fVar48 = fVar48 - (float)((ulong)uVar21 >> 0x20);
      fVar41 = fVar37 - fVar41;
      fVar41 = SQRT(fVar41 * fVar41 + fVar44 * fVar44 + fVar48 * fVar48);
      uVar15 = (ulong)(uint)fVar41;
    } while (fVar41 <= fStack00000000000000b0);
  } while( true );
  while( true ) {
    fVar27 = fVar41;
    fVar31 = fVar48;
    fVar30 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar27 = fVar41 - fVar27;
    fVar48 = fVar48 - fVar31;
    fVar41 = fVar48 * fVar48;
    fVar36 = fVar36 + SQRT(fVar41 + (fVar29 - fVar30) * (fVar29 - fVar30) + fVar27 * fVar27);
    if (fVar47 < fVar36) goto LAB_0316ee54;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar38 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
    fVar41 = (float)FUN_031765b0(uVar38,fVar41,fVar48,fVar44,fVar37,fVar26,0);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar27 = fVar48;
    fVar31 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
    fVar30 = fVar36 / fVar47;
    fVar29 = 1.0;
    if (fVar30 <= 1.0) {
      fVar29 = fVar30;
    }
    uVar15 = (ulong)(uint)fVar29;
    fVar32 = 0.0;
    if (0.0 <= fVar30) {
      fVar32 = fVar29;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar34 = (ulong)(uint)(fVar48 + fVar32 * (fVar27 - fVar48));
    FUN_0409f350(fVar41 + fVar32 * (fVar31 - fVar41),*(long *)(unaff_x26 + 0x78),iVar50,
                 *(undefined8 *)puVar4);
    lVar14 = *(long *)(unaff_x26 + 0x78);
    iVar50 = iVar50 + 1;
    if (lVar14 == 0) break;
LAB_0316ecc4:
    fVar48 = (float)uVar34;
    fVar41 = (float)uVar15;
    if (*(int *)(lVar14 + 0x18) <= iVar50) goto LAB_0316ee54;
    fVar29 = (float)FUN_0409f2f4(lVar14,iVar50 + -1,*(undefined8 *)puVar2);
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
    fVar44 = fVar41;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                         *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    if (lVar9 == 0) goto LAB_03168190;
    fVar26 = *(float *)(lVar9 + 200) * 0.5;
    fVar47 = 5.0;
    if (fVar26 <= 5.0) {
      fVar47 = fVar26;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar50 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar50 + -2) {
      fVar26 = 0.0;
      iVar50 = iVar50 + -1;
      uVar15 = (ulong)(uint)fVar37;
      uVar34 = (ulong)(uint)fVar48;
      do {
        fVar29 = (float)uVar15;
        fVar36 = (float)uVar34;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar27 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar50 = iVar50 + -1;
        fVar31 = fVar36;
        fVar30 = fVar29;
        fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar26 = fVar26 + SQRT((fVar29 - fVar30) * (fVar29 - fVar30) +
                               (fVar27 - fVar32) * (fVar27 - fVar32) +
                               (fVar36 - fVar31) * (fVar36 - fVar31));
        if (fVar47 < fVar26) break;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
        fVar36 = fVar48;
        fVar29 = (float)FUN_031765b0(fVar37,fVar41,fVar48,fStack0000000000000060 * 10.0 + fVar37,
                                     fVar44,fStack000000000000005c * 10.0 + fVar48,0);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar31 = fVar36;
        fVar30 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
        fVar32 = fVar26 / fVar47;
        fVar27 = 1.0;
        if (fVar32 <= 1.0) {
          fVar27 = fVar32;
        }
        uVar34 = (ulong)(uint)fVar27;
        fVar28 = 0.0;
        if (0.0 <= fVar32) {
          fVar28 = fVar27;
        }
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar50,*(undefined8 *)puVar2);
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar15 = (ulong)(uint)(fVar36 + fVar28 * (fVar31 - fVar36));
        FUN_0409f350(fVar29 + fVar28 * (fVar30 - fVar29),*(long *)(unaff_x26 + 0x78),iVar50,
                     *(undefined8 *)puVar4);
      } while (1 < iVar50);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar14 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  if (lVar14 != 0) {
    fVar37 = *(float *)(lVar14 + 0x94);
    lVar14 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    if (lVar14 != 0) {
      fVar41 = *(float *)(lVar14 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar44 = DAT_010fd13c;
      fVar48 = SQRT(fVar37 * fVar37 + fVar41 * fVar41);
      if (fVar48 <= DAT_010fd13c) {
        if (DAT_06db4c71 == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          DAT_06db4c71 = '\x01';
        }
        uVar21 = **(undefined8 **)(*plVar19 + 0xb8);
        fVar41 = *(float *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
      }
      else {
        fVar41 = fVar41 / fVar48;
        uVar21 = CONCAT44(0.0 / fVar48,fVar37 / fVar48);
      }
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x94) = uVar21;
        uVar21 = *(undefined8 *)puVar2;
        *(float *)(lVar9 + 0x9c) = fVar41;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar21);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        if (lVar14 != 0) {
          fVar37 = *(float *)(lVar14 + 0x94);
          lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          if (lVar14 != 0) {
            fVar41 = *(float *)(lVar14 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar48 = SQRT(fVar37 * fVar37 + fVar41 * fVar41);
            if (fVar48 <= fVar44) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              uVar21 = **(undefined8 **)(*plVar19 + 0xb8);
              fVar41 = *(float *)(*(undefined8 **)(*plVar19 + 0xb8) + 1);
            }
            else {
              fVar41 = fVar41 / fVar48;
              uVar21 = CONCAT44(0.0 / fVar48,fVar37 / fVar48);
            }
            if (lVar9 != 0) {
              uVar24 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar9 + 0x94) = uVar21;
              *(float *)(lVar9 + 0x9c) = fVar41;
              return uVar24;
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


