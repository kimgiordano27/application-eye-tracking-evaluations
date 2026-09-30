/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 0316a978
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
System_Array__InternalArray__ICollection_Contains<OVRPlugin_VirtualKeyboardModelAnimationState>
          (long *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,undefined1 *param_9,
          undefined8 *param_10)

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
  undefined8 uVar19;
  float *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined1 *puVar20;
  long *plVar21;
  int iVar22;
  long unaff_x22;
  undefined8 uVar23;
  byte bVar24;
  int iVar25;
  long unaff_x23;
  undefined8 uVar26;
  ulong unaff_x24;
  float *unaff_x25;
  undefined4 *puVar27;
  undefined1 *unaff_x26;
  float *unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  ulong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined8 unaff_d8;
  float unaff_s9;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float unaff_s15;
  undefined4 uVar51;
  float fVar52;
  int iVar53;
  undefined1 *puStack0000000000000000;
  long *plStack0000000000000008;
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
  float in_stack_000001b8;
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
  
  do {
    puStack0000000000000000 = &stack0x00000210;
    plStack0000000000000008 = param_1;
    FUN_0316f6a0(param_2,param_3,param_4,param_4,param_6,param_7,param_8,param_9,param_10,
                 &stack0x00000214);
LAB_0316a990:
    puVar2 = PTR_DAT_069fbee0;
    lVar9 = *(long *)(unaff_x26 + 0x20);
    uVar19 = _uStack00000000000001b0;
    if (lVar9 == 0) goto LAB_03168190;
    lVar14 = *(long *)(lVar9 + 0x10);
    uVar15 = (ulong)(uint)in_stack_000001b8;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    uVar42 = *(uint *)(lVar9 + 0x18);
    if (uVar42 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)uVar42 * 0xc;
      *(uint *)(lVar9 + 0x18) = uVar42 + 1;
      *(undefined4 *)(lVar14 + 0x20) = uStack00000000000001b0;
      *(undefined4 *)(lVar14 + 0x24) = uStack00000000000001b4;
      *(float *)(lVar14 + 0x28) = in_stack_000001b8;
    }
    else {
      FUN_0409f624(lVar9,*(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70)
                  );
    }
    uVar19 = _uStack00000000000001b0;
    if (unaff_x22 == 0) goto LAB_03168190;
    lVar9 = *(long *)(unaff_x22 + 0x10);
    lVar14 = *(long *)PTR_DAT_069ff178;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_03168190;
    uVar42 = *(uint *)(unaff_x22 + 0x18);
    if (uVar42 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar42 + 1;
      *(undefined4 *)(lVar9 + (long)(int)uVar42 * 4 + 0x20) = in_stack_00000214;
    }
    else {
      FUN_04059d64(unaff_x22,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *in_stack_000000b8;
    uVar19 = _uStack00000000000001b0;
    if (lVar9 == 0) goto LAB_03168190;
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar17 = *(long *)PTR_DAT_069ff178;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    uVar42 = *(uint *)(lVar9 + 0x18);
    if (uVar42 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar42 + 1;
      *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0;
    }
    else {
      FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(unaff_x26 + 0x28);
    uVar19 = _uStack00000000000001b0;
    if (lVar9 == 0) goto LAB_03168190;
    lVar14 = *(long *)(lVar9 + 0x10);
    lVar17 = *(long *)PTR_DAT_069ff178;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar14 == 0) goto LAB_03168190;
    uVar42 = *(uint *)(lVar9 + 0x18);
    if (uVar42 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar42 + 1;
      *(float *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) =
           (float)in_stack_00000150 / fStack00000000000001d4;
    }
    else {
      FUN_04059d64(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    do {
      uVar37 = (ulong)(uint)fStack000000000000010c;
      fVar40 = (float)in_stack_00000150 + fStack000000000000010c;
      in_stack_00000150 = (ulong)(uint)fVar40;
      if (fStack00000000000001d4 - fStack000000000000010c <= fVar40) {
        do {
          fStack000000000000012c = (float)uVar15;
          fVar40 = (float)uVar37;
          if (*(char *)(unaff_x23 + 0x5d6) == '\0') {
            uVar19 = _uStack00000000000001b0;
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                 *(undefined8 *)PTR_DAT_06a0b440);
            fStack000000000000012c = (float)uVar15;
            fVar40 = (float)uVar37;
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            if (*(int *)(lVar9 + 0x6c) == 1) {
              if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
              iVar53 = 0;
              puVar27 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
              lVar9 = *(long *)(unaff_x26 + 0x28);
              while( true ) {
                fStack000000000000012c = (float)uVar15;
                fVar40 = (float)uVar37;
                if (*(int *)(lVar9 + 0x18) <= iVar53) break;
                uVar15 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                if ((((uVar15 <= unaff_x20) || (uVar15 <= unaff_x24)) ||
                    (uVar15 <= in_stack_00000168)) || (uVar15 <= unaff_x24 + 2)) goto LAB_0316f2c4;
                uVar41 = *puVar27;
                fVar40 = (float)puVar27[1];
                uVar42 = puVar27[2];
                fVar43 = *unaff_x19;
                fVar47 = unaff_x19[1];
                fVar50 = unaff_x19[2];
                fVar45 = unaff_x27[2];
                puVar20 = *(undefined1 **)unaff_x27;
                FUN_04059a68(lVar9,iVar53,*(undefined8 *)PTR_DAT_06a0a108);
                plStack0000000000000008 = (long *)CONCAT44(plStack0000000000000008._4_4_,fVar45);
                puStack0000000000000000 = puVar20;
                FUN_0316f340(uVar41,fVar40,uVar42,fVar43,fVar47,fVar50);
                unaff_x26 = &stack0x00000218;
                uVar19 = _uStack00000000000001b0;
                if (((in_stack_00000238 == 0) ||
                    (uVar41 = FUN_0409f2f4(in_stack_00000238,iVar53,*(undefined8 *)PTR_DAT_069fd088)
                    , uVar19 = _uStack00000000000001b0, unaff_x22 == 0)) ||
                   (fVar43 = (float)FUN_04059a68(unaff_x22,iVar53,*(undefined8 *)PTR_DAT_06a0a108),
                   uVar19 = _uStack00000000000001b0, in_stack_00000238 == 0)) goto LAB_03168190;
                uVar37 = (ulong)(uint)(fVar40 + fVar43);
                uVar15 = (ulong)uVar42;
                FUN_0409f350(uVar41,in_stack_00000238,iVar53,*(undefined8 *)PTR_DAT_06a0b7d0);
                iVar53 = iVar53 + 1;
                lVar9 = in_stack_00000240;
                unaff_s15 = in_stack_00000120._4_4_;
                uVar19 = _uStack00000000000001b0;
                if (in_stack_00000240 == 0) goto LAB_03168190;
              }
            }
          }
          puVar2 = PTR_DAT_069fbee0;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          uVar19 = _uStack00000000000001b0;
          if (lVar9 == 0) goto LAB_03168190;
          if (*(int *)(lVar9 + 0x18) == 0) {
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            lVar14 = *(long *)(lVar9 + 0x10);
            fVar40 = *unaff_x27;
            fVar43 = unaff_x27[1];
            fVar45 = unaff_x27[2];
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            if (*(int *)(lVar14 + 0x18) == 0) {
              FUN_0409f624(lVar9,*(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
            }
            else {
              *(undefined4 *)(lVar9 + 0x18) = 1;
              *(float *)(lVar14 + 0x20) = fVar40;
              *(float *)(lVar14 + 0x24) = fVar43;
              *(float *)(lVar14 + 0x28) = fVar45;
            }
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            fVar43 = *unaff_x27;
            fVar45 = unaff_x27[1];
            fStack000000000000012c = unaff_x27[2];
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            lVar9 = *(long *)(unaff_x26 + 0x28);
            fVar43 = (float)in_stack_00000110 - fVar43;
            fStack000000000000012c = in_stack_00000160._4_4_ - fStack000000000000012c;
            fVar40 = fStack000000000000012c * fStack000000000000012c;
            fStack00000000000001d4 =
                 SQRT(fVar40 + fVar43 * fVar43 +
                               (in_stack_0000027c - fVar45) * (in_stack_0000027c - fVar45));
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar42 = *(uint *)(lVar9 + 0x18);
            if (uVar42 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar42 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0x3f800000;
            }
            else {
              FUN_04059d64(0x3f800000,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *in_stack_000000e0;
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar42 = *(uint *)(lVar9 + 0x18);
            if (uVar42 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar42 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *in_stack_000000b8;
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar17 = *(long *)PTR_DAT_069ff178;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_03168190;
            uVar42 = *(uint *)(lVar9 + 0x18);
            if (uVar42 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar42 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0;
            }
            else {
              FUN_04059d64(0,lVar9,*(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
            }
          }
          unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          puVar2 = PTR_DAT_069fd088;
          plVar21 = (long *)PTR_DAT_069fb978;
          lVar9 = *(long *)(unaff_x26 + 0x20);
          uVar19 = _uStack00000000000001b0;
          if (lVar9 == 0) goto LAB_03168190;
          fStack0000000000000128 = fVar40;
          if (0 < *(int *)(lVar9 + 0x18)) {
            fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                         *(undefined8 *)PTR_DAT_069fd088);
            if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
            fStack000000000000012c = fStack000000000000012c - unaff_x27[2];
            fStack0000000000000128 = fStack00000000000000a4;
            if (fStack00000000000000a4 <=
                fStack000000000000012c * fStack000000000000012c +
                (fVar43 - *unaff_x27) * (fVar43 - *unaff_x27) +
                (fVar40 - unaff_x27[1]) * (fVar40 - unaff_x27[1])) {
              lVar9 = *(long *)(unaff_x26 + 0x20);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              fVar40 = fStack00000000000000a4;
              fVar43 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2);
              if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
              fVar45 = *unaff_x27;
              fVar50 = unaff_x27[1];
              fVar47 = unaff_x27[2];
              if (DAT_06db4c77 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c77 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              puVar3 = PTR_DAT_069fbee0;
              lVar9 = *(long *)(unaff_x26 + 0x20);
              uVar19 = _uStack00000000000001b0;
              if (fStack00000000000000b0 <=
                  SQRT((fStack000000000000012c - fVar47) * (fStack000000000000012c - fVar47) +
                       (fVar43 - fVar45) * (fVar43 - fVar45) + (fVar40 - fVar50) * (fVar40 - fVar50)
                      )) {
                if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                fVar40 = *unaff_x27;
                fVar43 = unaff_x27[1];
                fStack000000000000012c = unaff_x27[2];
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar9 + 0x18);
                if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)uVar42 * 0xc;
                  *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                  *(float *)(lVar14 + 0x20) = fVar40;
                  *(float *)(lVar14 + 0x24) = fVar43;
                  *(float *)(lVar14 + 0x28) = fStack000000000000012c;
                }
                else {
                  FUN_0409f624(lVar9,*(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                }
                fVar40 = fStack00000000000001d4;
                lVar9 = *(long *)(unaff_x26 + 0x20);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar45 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2
                                            );
                if (*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) goto LAB_0316f2c4;
                fVar47 = *unaff_x27;
                fVar28 = unaff_x27[1];
                fVar50 = unaff_x27[2];
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar9 = *(long *)(unaff_x26 + 0x28);
                fStack000000000000012c = fStack000000000000012c - fVar50;
                fStack0000000000000128 = fStack000000000000012c * fStack000000000000012c;
                fStack00000000000001d4 =
                     fVar40 + SQRT(fStack0000000000000128 +
                                   (fVar45 - fVar47) * (fVar45 - fVar47) +
                                   (fVar43 - fVar28) * (fVar43 - fVar28));
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar9 + 0x18);
                if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0x3f800000;
                }
                else {
                  FUN_04059d64(0x3f800000,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar9 = *in_stack_000000e0;
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar9 + 0x18);
                if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0;
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
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                FUN_04059abc(0x3f800000,lVar9,*(int *)(lVar9 + 0x18) + -1,
                             *(undefined8 *)PTR_DAT_06a0b5c0);
              }
            }
          }
          lVar9 = *(long *)(unaff_x26 + 0x20);
          uVar19 = _uStack00000000000001b0;
          if (lVar9 == 0) goto LAB_03168190;
          iVar53 = *(int *)(lVar9 + 0x18);
          fVar40 = (float)FUN_0409f2f4(lVar9,iVar53 + -1,*(undefined8 *)PTR_DAT_069fd088);
          lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
          *(float *)(in_stack_00000148 + 0x2c0) =
               *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
          uVar19 = _uStack00000000000001b0;
          if (lVar9 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar9 + 0x10);
          lVar17 = *(long *)PTR_DAT_069fc3e0;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar42 = *(uint *)(lVar9 + 0x18);
          in_stack_000000d0._4_4_ = iVar53 + in_stack_000000d0._4_4_;
          if (uVar42 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar42 + 1;
            *(int *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = in_stack_000000d0._4_4_;
          }
          else {
            FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          uVar19 = _uStack00000000000001b0;
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                   *unaff_x21), uVar19 = _uStack00000000000001b0, lVar9 == 0))
          goto LAB_03168190;
          iStack0000000000000108 = *(int *)(lVar9 + 0x6c);
          in_stack_0000027c = fStack0000000000000128;
          fVar45 = fStack000000000000012c;
          fVar43 = fVar40;
LAB_0316c620:
          uVar19 = _uStack00000000000001b0;
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                   *unaff_x21), fVar47 = fStack00000000000001d4,
             uVar19 = _uStack00000000000001b0, lVar9 == 0)) goto LAB_03168190;
          if (*(char *)(lVar9 + 0xb8) != '\0') {
            if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
            uVar23 = *(undefined8 *)(in_stack_00000148 + 0x20);
            uVar26 = *(undefined8 *)(unaff_x26 + 0x28);
            uVar41 = *(undefined4 *)(in_stack_00000148 + 0x128);
            lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x24 & 0xffffffff,
                                 *(undefined8 *)PTR_DAT_06a0b440);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            puStack0000000000000000 = (undefined1 *)0x0;
            FUN_031098f4(uVar41,uStack000000000000006c,fVar47,uVar23,&stack0x00000238,uVar26,
                         &stack0x00000248,*(undefined1 *)(lVar9 + 0xb8),
                         *(undefined8 *)(unaff_x26 + 0x78),in_stack_00000070,in_stack_000000e0);
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
          }
          uVar19 = _uStack00000000000001b0;
          if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
          FUN_0409f858(*(long *)(unaff_x26 + 0x78),*(undefined8 *)(unaff_x26 + 0x20),
                       *(undefined8 *)PTR_DAT_06a0b3a0);
          uVar19 = _uStack00000000000001b0;
          if (*in_stack_00000078 == 0) goto LAB_03168190;
          FUN_04059f70(*in_stack_00000078,*(undefined8 *)(unaff_x26 + 0x28),
                       *(undefined8 *)PTR_DAT_06a0b3d8);
          fVar50 = fStack0000000000000088;
          fVar47 = in_stack_00000080._4_4_;
          FUN_0316fb80(fStack000000000000008c,in_stack_00000148,extraout_x1,unaff_x24 & 0xffffffff,
                       in_stack_00000170,&stack0x00000268,0,*(undefined8 *)(unaff_x26 + 0x78));
          if ((int)unaff_x24 + 3 < *(int *)(in_stack_00000170 + 0x18)) {
            FUN_0317018c(in_stack_00000148,*(undefined8 *)(in_stack_00000148 + 0x68),
                         unaff_x24 & 0xffffffff,in_stack_00000170,&stack0x00000258,0);
          }
          puVar3 = PTR_DAT_069ff178;
          puVar2 = PTR_DAT_069fd088;
          lVar9 = *in_stack_00000090;
          uVar19 = _uStack00000000000001b0;
          if (lVar9 == 0) goto LAB_03168190;
          lVar14 = *(long *)(lVar9 + 0x10);
          fVar28 = *in_stack_000000d8;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_03168190;
          uVar42 = *(uint *)(lVar9 + 0x18);
          if (uVar42 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar42 + 1;
            *(float *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = fVar28;
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
            fVar28 = (float)FUN_0409f2f4(lVar17,*(int *)(lVar17 + 0x18) + -1,*(undefined8 *)puVar2);
            lVar17 = *(long *)(unaff_x26 + 0x78);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            fVar39 = fVar50;
            fVar31 = fVar47;
            fVar29 = (float)FUN_0409f2f4(lVar17,*(int *)(lVar17 + 0x18) + -2,*(undefined8 *)puVar2);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar28 = fVar28 - fVar29;
            fVar50 = fVar50 - fVar39;
            fVar47 = fVar47 - fVar31;
            fVar39 = SQRT(fVar47 * fVar47 + fVar28 * fVar28 + fVar50 * fVar50);
            if (fVar39 <= DAT_010fd13c) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(plVar21);
                DAT_06db4c71 = '\x01';
              }
              pfVar16 = *(float **)(*plVar21 + 0xb8);
              fVar28 = *pfVar16;
              fVar50 = pfVar16[1];
              fVar47 = pfVar16[2];
            }
            else {
              fVar28 = fVar28 / fVar39;
              fVar50 = fVar50 / fVar39;
              fVar47 = fVar47 / fVar39;
            }
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(float *)(lVar14 + 0x94) = fVar28;
            *(float *)(lVar14 + 0x98) = fVar50;
            *(float *)(lVar14 + 0x9c) = fVar47;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(float *)(lVar9 + 0x88) = fVar28;
            *(float *)(lVar9 + 0x8c) = fVar50;
            *(float *)(lVar9 + 0x90) = fVar47;
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
              fVar28 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),1,*(undefined8 *)puVar2);
              if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              fVar39 = fVar50;
              fVar31 = fVar47;
              fVar29 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fVar28 = fVar28 - fVar29;
              fVar50 = fVar50 - fVar39;
              fVar47 = fVar47 - fVar31;
              fVar39 = SQRT(fVar47 * fVar47 + fVar28 * fVar28 + fVar50 * fVar50);
              if (fVar39 <= DAT_010fd13c) {
                if (DAT_06db4c71 == '\0') {
                  FUN_02d965b8(plVar21);
                  DAT_06db4c71 = '\x01';
                }
                pfVar16 = *(float **)(*plVar21 + 0xb8);
                fVar28 = *pfVar16;
                fVar50 = pfVar16[1];
                fVar47 = pfVar16[2];
              }
              else {
                fVar28 = fVar28 / fVar39;
                fVar50 = fVar50 / fVar39;
                fVar47 = fVar47 / fVar39;
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              *(float *)(lVar14 + 0x94) = fVar28;
              *(float *)(lVar14 + 0x98) = fVar50;
              *(float *)(lVar14 + 0x9c) = fVar47;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              *(float *)(lVar9 + 0x88) = fVar28;
              *(float *)(lVar9 + 0x8c) = fVar50;
              *(float *)(lVar9 + 0x90) = fVar47;
            }
          }
          else if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
            if (*(long *)(unaff_x26 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar53 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            puVar2 = PTR_DAT_069fd088;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(int *)(lVar9 + 0xbc) + 1 < iVar53) {
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
                fVar31 = (float)FUN_0409f2f4(lVar14,*(int *)(lVar9 + 0xbc) + 1,*(undefined8 *)puVar2
                                            );
                lVar14 = *(long *)(unaff_x26 + 0x78);
                fVar28 = fVar50;
                fVar39 = fVar47;
                lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                fVar29 = (float)FUN_0409f2f4(lVar14,*(undefined4 *)(lVar9 + 0xbc),
                                             *(undefined8 *)puVar2);
                lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar34 = DAT_010fd13c;
                fVar31 = fVar31 - fVar29;
                fVar29 = fVar50 - fVar28;
                fVar39 = fVar47 - fVar39;
                fVar47 = SQRT(fVar39 * fVar39 + fVar31 * fVar31 + fVar29 * fVar29);
                if (fVar47 <= DAT_010fd13c) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar21);
                    DAT_06db4c71 = '\x01';
                  }
                  pfVar16 = *(float **)(*plVar21 + 0xb8);
                  fVar32 = *pfVar16;
                  fVar29 = pfVar16[1];
                  fVar47 = pfVar16[2];
                }
                else {
                  fVar32 = fVar31 / fVar47;
                  fVar29 = fVar29 / fVar47;
                  fVar47 = fVar39 / fVar47;
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                *(float *)(lVar9 + 0x88) = fVar32;
                *(float *)(lVar9 + 0x8c) = fVar29;
                uVar19 = *unaff_x21;
                *(float *)(lVar9 + 0x90) = fVar47;
                uVar42 = *(uint *)(in_stack_00000098 + 0x18);
                lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar19);
                if (unaff_x24 != uVar42) {
                  fVar50 = fVar28;
                }
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar50 = fVar50 - fVar28;
                fVar28 = SQRT(fVar39 * fVar39 + fVar31 * fVar31 + fVar50 * fVar50);
                if (fVar28 <= fVar34) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar21);
                    DAT_06db4c71 = '\x01';
                  }
                  uVar19 = **(undefined8 **)(*plVar21 + 0xb8);
                  fVar39 = *(float *)(*(undefined8 **)(*plVar21 + 0xb8) + 1);
                }
                else {
                  fVar39 = fVar39 / fVar28;
                  uVar19 = CONCAT44(fVar50 / fVar28,fVar31 / fVar28);
                  fVar47 = fVar31;
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                *(undefined8 *)(lVar9 + 0x94) = uVar19;
                *(float *)(lVar9 + 0x9c) = fVar39;
              }
            }
          }
          if ((long)unaff_x24 < (long)*(int *)(in_stack_00000098 + 0x18)) {
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
            lVar14 = FUN_0400ff1c(in_stack_00000098,unaff_x24 & 0xffffffff,*unaff_x21);
            uVar19 = _uStack00000000000001b0;
            if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
            uVar19 = *(undefined8 *)(lVar14 + 0x48);
            *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(lVar14 + 0x50);
            *(undefined8 *)(lVar9 + 0x54) = uVar19;
          }
          if ((long)(*(int *)(in_stack_00000170 + 0x18) + -2) <= (long)in_stack_00000168) {
            if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                   *unaff_x21);
              uVar19 = _uStack00000000000001b0;
              if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
              uVar19 = *unaff_x21;
              *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar19)
              ;
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              uVar19 = *unaff_x21;
              *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar19);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              uVar19 = *unaff_x21;
              *(undefined4 *)(lVar9 + 0xbc) = 0;
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar19);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              *(undefined4 *)(lVar9 + 0xc0) = 0;
              if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                fVar40 = *in_stack_000000d8;
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                      *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
                uVar19 = *unaff_x21;
                *(float *)(lVar9 + 200) = fVar40 - *(float *)(lVar14 + 0xc0);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     uVar19);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar40 = *(float *)(lVar9 + 200);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                      *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (1000.0 <= fVar40) {
                  if (lVar14 == 0) goto LAB_03168190;
                  fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
                  uVar19 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                  uVar23 = FUN_05362cb4(uVar19,*(undefined8 *)PTR_DAT_06a0c488,0);
                }
                else {
                  if (lVar14 == 0) goto LAB_03168190;
                  uVar19 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                  uVar23 = FUN_05362cb4(uVar19,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                }
                uVar19 = _uStack00000000000001b0;
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0xd0) = uVar23;
                  LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar23);
                  lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                       *unaff_x21);
                  uVar19 = _uStack00000000000001b0;
                  if (lVar9 != 0) {
                    fVar40 = *(float *)(lVar9 + 0x4c);
                    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                         *unaff_x21);
                    uVar19 = _uStack00000000000001b0;
                    if (lVar9 != 0) {
                      fVar43 = *(float *)(lVar9 + 0x4c);
                      fVar45 = fVar40 - fVar43;
                      if (DAT_06db4ece == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4ece = '\x01';
                      }
                      puVar2 = PTR_DAT_069fbb48;
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      fVar50 = 0.0;
                      fVar45 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar45 * fVar45) *
                                    DAT_010fd194);
                      fVar47 = DAT_010fcd14;
                      if (DAT_010fcd14 <= fVar45) {
                        fVar47 = -1.0;
                        fVar45 = (in_stack_00000230 * 0.0 + ABS(fVar40 - fVar43) * 50.0 + 0.0) /
                                 fVar45;
                        fVar40 = 1.0;
                        if (fVar45 <= 1.0) {
                          fVar40 = fVar45;
                        }
                        fVar43 = -1.0;
                        if (-1.0 <= fVar45) {
                          fVar43 = fVar40;
                        }
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          fVar47 = -1.0;
                          thunk_FUN_02df485c();
                        }
                        dVar36 = acos((double)fVar43);
                        fVar50 = (float)dVar36 * DAT_010fcf40;
                      }
                      fVar50 = 90.0 - fVar50;
                      lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2
                                           ,*unaff_x21);
                      if (fVar50 <= 10.0) {
                        uVar23 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                      }
                      else {
                        dVar36 = modf((double)fVar50,(double *)&stack0x00000298);
                        if (0.0 <= fVar50) {
                          if (dVar36 == 0.5) {
                            dVar36 = *(double *)(unaff_x26 + 0x80);
                            fVar47 = 1.0;
                            goto LAB_0316e5fc;
                          }
                          fStack00000000000001d0 = (float)(int)(fVar50 + 0.5);
                        }
                        else if (dVar36 == -0.5) {
                          dVar36 = *(double *)(unaff_x26 + 0x80);
                          fVar47 = -1.0;
LAB_0316e5fc:
                          fStack00000000000001d0 = (float)dVar36;
                          if (((long)dVar36 & 1U) != 0) {
                            fStack00000000000001d0 = (float)dVar36 + fVar47;
                          }
                        }
                        else {
                          fStack00000000000001d0 = (float)(int)(fVar50 + -0.5);
                        }
                        uVar23 = FUN_054fabf8(&stack0x000001d0,0);
                      }
                      uVar19 = _uStack00000000000001b0;
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0xd8) = uVar23;
                        LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar23);
                        lVar9 = FUN_0400ff1c(in_stack_00000098,
                                             *(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21);
                        uVar19 = _uStack00000000000001b0;
                        if (lVar9 != 0) {
                          fVar40 = *(float *)(lVar9 + 0x4c);
                          lVar9 = FUN_0400ff1c(in_stack_00000098,
                                               *(int *)(in_stack_00000098 + 0x18) + -1,*unaff_x21);
                          uVar19 = _uStack00000000000001b0;
                          if (lVar9 != 0) {
                            fVar43 = *(float *)(lVar9 + 0x4c);
                            lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                 *(int *)(in_stack_00000098 + 0x18) + -2,*unaff_x21)
                            ;
                            uVar19 = _uStack00000000000001b0;
                            if (lVar9 != 0) {
                              fVar45 = *(float *)(lVar9 + 0x48);
                              lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                   *(int *)(in_stack_00000098 + 0x18) + -2,
                                                   *unaff_x21);
                              uVar19 = _uStack00000000000001b0;
                              if (lVar9 != 0) {
                                fVar50 = *(float *)(lVar9 + 0x50);
                                lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                     *(int *)(in_stack_00000098 + 0x18) + -1,
                                                     *unaff_x21);
                                uVar19 = _uStack00000000000001b0;
                                if (lVar9 != 0) {
                                  fVar28 = *(float *)(lVar9 + 0x48);
                                  lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                       *(int *)(in_stack_00000098 + 0x18) + -1,
                                                       *unaff_x21);
                                  uVar19 = _uStack00000000000001b0;
                                  if (lVar9 != 0) {
                                    fVar39 = *(float *)(lVar9 + 0x50);
                                    if (DAT_06db4c77 == '\0') {
                                      FUN_02d965b8(PTR_DAT_069fbb48);
                                      DAT_06db4c77 = '\x01';
                                    }
                                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                                      thunk_FUN_02df485c();
                                    }
                                    fVar50 = fVar50 - fVar39;
                                    fVar45 = fVar45 - fVar28;
                                    lVar9 = FUN_0400ff1c(in_stack_00000098,
                                                         *(int *)(in_stack_00000098 + 0x18) + -2,
                                                         *unaff_x21);
                                    fStack00000000000001d0 =
                                         (ABS(fVar40 - fVar43) /
                                         SQRT(fVar45 * fVar45 + fVar50 * fVar50)) * 100.0;
                                    uVar23 = FUN_054fad00(&stack0x000001d0,
                                                          *(undefined8 *)PTR_DAT_06a0c498,0);
                                    uVar19 = _uStack00000000000001b0;
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
              uVar19 = _uStack00000000000001b0;
              if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
              uVar19 = *unaff_x21;
              *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,uVar19);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
              if (2 < *(int *)(in_stack_00000098 + 0x18)) {
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                fVar40 = *in_stack_000000d8;
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                      *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
                uVar19 = *unaff_x21;
                *(float *)(lVar9 + 200) = fVar40 - *(float *)(lVar14 + 0xc0);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     uVar19);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar40 = *(float *)(lVar9 + 200);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                      *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (1000.0 <= fVar40) {
                  if (lVar14 == 0) goto LAB_03168190;
                  fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
                  uVar19 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                  uVar23 = FUN_05362cb4(uVar19,*(undefined8 *)PTR_DAT_06a0c488,0);
                }
                else {
                  if (lVar14 == 0) goto LAB_03168190;
                  uVar19 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                  uVar23 = FUN_05362cb4(uVar19,*(undefined8 *)PTR_DAT_06a0c4f0,0);
                }
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                *(undefined8 *)(lVar9 + 0xd0) = uVar23;
                LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar23);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar40 = *(float *)(lVar9 + 0x4c);
                lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar43 = *(float *)(lVar9 + 0x4c);
                fVar45 = fVar40 - fVar43;
                if (DAT_06db4ece == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4ece = '\x01';
                }
                puVar2 = PTR_DAT_069fbb48;
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar50 = 0.0;
                fVar45 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar45 * fVar45) *
                              DAT_010fd194);
                fVar47 = DAT_010fcd14;
                if (DAT_010fcd14 <= fVar45) {
                  fVar47 = -1.0;
                  fVar45 = (in_stack_00000230 * 0.0 + ABS(fVar40 - fVar43) * 50.0 + 0.0) / fVar45;
                  fVar40 = 1.0;
                  if (fVar45 <= 1.0) {
                    fVar40 = fVar45;
                  }
                  fVar43 = -1.0;
                  if (-1.0 <= fVar45) {
                    fVar43 = fVar40;
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    fVar47 = -1.0;
                    thunk_FUN_02df485c();
                  }
                  dVar36 = acos((double)fVar43);
                  fVar50 = (float)dVar36 * DAT_010fcf40;
                }
                fVar50 = 90.0 - fVar50;
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                if (fVar50 <= 10.0) {
                  uVar23 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
                }
                else {
                  dVar36 = modf((double)fVar50,(double *)&stack0x00000298);
                  if (0.0 <= fVar50) {
                    if (dVar36 == 0.5) {
                      dVar36 = *(double *)(unaff_x26 + 0x80);
                      fVar47 = 1.0;
                      goto LAB_0316e5d0;
                    }
                    fStack00000000000001d0 = (float)(int)(fVar50 + 0.5);
                  }
                  else if (dVar36 == -0.5) {
                    dVar36 = *(double *)(unaff_x26 + 0x80);
                    fVar47 = -1.0;
LAB_0316e5d0:
                    fStack00000000000001d0 = (float)dVar36;
                    if (((long)dVar36 & 1U) != 0) {
                      fStack00000000000001d0 = (float)dVar36 + fVar47;
                    }
                  }
                  else {
                    fStack00000000000001d0 = (float)(int)(fVar50 + -0.5);
                  }
                  uVar23 = FUN_054fabf8(&stack0x000001d0,0);
                }
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                *(undefined8 *)(lVar9 + 0xd8) = uVar23;
                LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar23);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar40 = *(float *)(lVar9 + 0x4c);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar43 = *(float *)(lVar9 + 0x4c);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar45 = *(float *)(lVar9 + 0x48);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                                     *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar50 = *(float *)(lVar9 + 0x50);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar28 = *(float *)(lVar9 + 0x48);
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar39 = *(float *)(lVar9 + 0x50);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar50 = fVar50 - fVar39;
                fVar45 = fVar45 - fVar28;
                lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                     *unaff_x21);
                fStack00000000000001d0 =
                     (ABS(fVar40 - fVar43) / SQRT(fVar45 * fVar45 + fVar50 * fVar50)) * 100.0;
                uVar23 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
LAB_0316ea58:
                *(undefined8 *)(lVar9 + 0xe0) = uVar23;
                LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar23);
              }
            }
            fVar40 = 1000.0;
            if (1000.0 <= *in_stack_000000d8) {
              fVar40 = 1000.0;
              fStack00000000000001d0 = *in_stack_000000d8 / 1000.0;
              uVar19 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c488;
            }
            else {
              uVar19 = FUN_054fad00(in_stack_000000d8,*(undefined8 *)PTR_DAT_06a0c498,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
            }
            uVar19 = FUN_05362cb4(uVar19,*puVar13,0);
            *(undefined8 *)(in_stack_00000148 + 0x2d0) = uVar19;
            LeanTween__value(in_stack_00000148 + 0x2d0,uVar19);
            if (*(int *)(in_stack_00000098 + 0x18) == 2) {
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              fVar43 = *(float *)(lVar9 + 200);
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              lVar14 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              uVar19 = _uStack00000000000001b0;
              if (1000.0 <= fVar43) {
                if (lVar14 == 0) goto LAB_03168190;
                fVar40 = 1000.0;
                fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
                uVar19 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
                uVar23 = FUN_05362cb4(uVar19,*(undefined8 *)PTR_DAT_06a0c488,0);
              }
              else {
                if (lVar14 == 0) goto LAB_03168190;
                uVar19 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
                uVar23 = FUN_05362cb4(uVar19,*(undefined8 *)PTR_DAT_06a0c4f0,0);
              }
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              *(undefined8 *)(lVar9 + 0xd0) = uVar23;
              LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar23);
            }
            if (*(char *)(in_stack_00000148 + 0x84) == '\0') {
              lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                   *unaff_x21);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)PTR_DAT_069fcde0;
              LeanTween__value();
            }
            puVar3 = PTR_DAT_06a0b440;
            puVar2 = PTR_DAT_069fd088;
            fVar43 = fVar40;
            if (iStack0000000000000058 == 0) goto LAB_0316ee54;
            uVar19 = _uStack00000000000001b0;
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            fVar45 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,
                                         *(undefined8 *)PTR_DAT_069fd088);
            uVar19 = _uStack00000000000001b0;
            if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
            FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
            lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar3);
            puVar4 = PTR_DAT_06a0b7d0;
            puVar3 = PTR_DAT_069fbb48;
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            lVar14 = *(long *)(unaff_x26 + 0x78);
            fVar43 = *(float *)(lVar9 + 200) * 0.5;
            fVar50 = 5.0;
            if (fVar43 <= 5.0) {
              fVar50 = fVar43;
            }
            if (lVar14 == 0) goto LAB_03168190;
            uVar37 = (ulong)(uint)fStack0000000000000054;
            iVar53 = 1;
            fVar45 = fStack0000000000000050 * 10.0 + fVar45;
            uVar15 = (ulong)(uint)fVar45;
            fVar28 = fStack0000000000000054 * 10.0 + fVar47;
            fVar39 = 0.0;
            goto LAB_0316ecc4;
          }
          unaff_x20 = in_stack_00000168 - 1;
          fStack00000000000001d4 = 0.0;
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
          uVar19 = _uStack00000000000001b0;
          if ((*(long *)(unaff_x26 + 0x78) == 0) || (lVar9 == 0)) goto LAB_03168190;
          uVar19 = *unaff_x21;
          *(undefined4 *)(lVar9 + 0xbc) = *(undefined4 *)(*(long *)(unaff_x26 + 0x78) + 0x18);
          lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,uVar19);
          uVar19 = _uStack00000000000001b0;
          if (lVar9 == 0) goto LAB_03168190;
          *(float *)(lVar9 + 0xc0) = *in_stack_000000d8;
          iVar53 = (int)in_stack_00000168;
          if (1 < in_stack_00000168) {
            if (in_stack_00000168 == 2) {
              lVar9 = FUN_0400ff1c(in_stack_00000098,0,*unaff_x21);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              iVar22 = 0;
              fVar47 = *in_stack_000000d8;
            }
            else {
              iVar22 = iVar53 + -2;
              lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
              fVar47 = *in_stack_000000d8;
              lVar14 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
              uVar19 = _uStack00000000000001b0;
              if ((lVar14 == 0) || (lVar9 == 0)) goto LAB_03168190;
              fVar47 = fVar47 - *(float *)(lVar14 + 0xc0);
            }
            puVar2 = PTR_DAT_06a0b440;
            *(float *)(lVar9 + 200) = fVar47;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar47 = *(float *)(lVar9 + 200);
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
            lVar14 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
            uVar19 = _uStack00000000000001b0;
            if (1000.0 <= fVar47) {
              if (lVar14 == 0) goto LAB_03168190;
              fStack00000000000001d0 = *(float *)(lVar14 + 200) / 1000.0;
              uVar19 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c4e0,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c488;
            }
            else {
              if (lVar14 == 0) goto LAB_03168190;
              uVar19 = FUN_054fad00(lVar14 + 200,*(undefined8 *)PTR_DAT_06a0c498,0);
              puVar13 = (undefined8 *)PTR_DAT_06a0c4f0;
            }
            uVar23 = FUN_05362cb4(uVar19,*puVar13,0);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            *(undefined8 *)(lVar9 + 0xd0) = uVar23;
            LeanTween__value((undefined8 *)(lVar9 + 0xd0),uVar23);
            puVar2 = PTR_DAT_06a0b440;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)PTR_DAT_06a0b440);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar47 = *(float *)(lVar9 + 0x4c);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*(undefined8 *)puVar2);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar50 = *(float *)(lVar9 + 0x4c);
            if (DAT_06db4ece == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4ece = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar28 = fVar47 - fVar50;
            fVar31 = 0.0;
            fVar39 = SQRT((in_stack_00000230 * in_stack_00000230 + fVar28 * fVar28) * DAT_010fd194);
            fVar28 = DAT_010fcd14;
            if (DAT_010fcd14 <= fVar39) {
              fVar28 = -1.0;
              fVar39 = (in_stack_00000230 * 0.0 + ABS(fVar47 - fVar50) * 50.0 + 0.0) / fVar39;
              fVar47 = 1.0;
              if (fVar39 <= 1.0) {
                fVar47 = fVar39;
              }
              fVar50 = -1.0;
              if (-1.0 <= fVar39) {
                fVar50 = fVar47;
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                fVar28 = -1.0;
                thunk_FUN_02df485c();
              }
              dVar36 = acos((double)fVar50);
              fVar31 = (float)dVar36 * DAT_010fcf40;
            }
            fVar31 = 90.0 - fVar31;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)puVar2);
            if (fVar31 <= 10.0) {
              uVar23 = FUN_054fad00(&stack0x00000234,*(undefined8 *)PTR_DAT_06a0c498,0);
              puVar13 = (undefined8 *)PTR_DAT_069fd088;
            }
            else {
              dVar36 = modf((double)fVar31,(double *)&stack0x00000298);
              puVar13 = (undefined8 *)PTR_DAT_069fd088;
              if (0.0 <= fVar31) {
                if (dVar36 == 0.5) {
                  dVar36 = *(double *)(unaff_x26 + 0x80);
                  fVar47 = 1.0;
                  goto LAB_0316a098;
                }
                fStack00000000000001d0 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar36 == -0.5) {
                dVar36 = *(double *)(unaff_x26 + 0x80);
                fVar47 = -1.0;
LAB_0316a098:
                fStack00000000000001d0 = (float)dVar36;
                if (((long)dVar36 & 1U) != 0) {
                  fStack00000000000001d0 = (float)dVar36 + fVar47;
                }
              }
              else {
                fStack00000000000001d0 = (float)(int)(fVar31 + -0.5);
              }
              uVar23 = FUN_054fabf8(&stack0x000001d0,0);
            }
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            *(undefined8 *)(lVar9 + 0xd8) = uVar23;
            LeanTween__value((undefined8 *)(lVar9 + 0xd8),uVar23);
            unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*(undefined8 *)PTR_DAT_06a0b440);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar47 = *(float *)(lVar9 + 0x4c);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar50 = *(float *)(lVar9 + 0x4c);
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar39 = *(float *)(lVar9 + 0x48);
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar31 = *(float *)(lVar9 + 0x50);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar29 = *(float *)(lVar9 + 0x48);
            lVar9 = FUN_0400ff1c(in_stack_00000098,unaff_x20 & 0xffffffff,*unaff_x21);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            fVar34 = *(float *)(lVar9 + 0x50);
            if (DAT_06db4c77 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c77 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar31 = fVar31 - fVar34;
            fVar39 = fVar39 - fVar29;
            lVar9 = FUN_0400ff1c(in_stack_00000098,iVar22,*unaff_x21);
            fVar29 = 100.0;
            fStack00000000000001d0 =
                 (ABS(fVar47 - fVar50) / SQRT(fVar39 * fVar39 + fVar31 * fVar31)) * 100.0;
            uVar23 = FUN_054fad00(&stack0x000001d0,*(undefined8 *)PTR_DAT_06a0c498,0);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            *(undefined8 *)(lVar9 + 0xe0) = uVar23;
            LeanTween__value((undefined8 *)(lVar9 + 0xe0),uVar23);
            lVar9 = *(long *)(unaff_x26 + 0x78);
            uVar19 = _uStack00000000000001b0;
            if (lVar9 == 0) goto LAB_03168190;
            if (2 < *(int *)(lVar9 + 0x18)) {
              fStack0000000000000104 =
                   (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*puVar13);
              lVar9 = *(long *)(unaff_x26 + 0x78);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              fVar47 = fVar29;
              fVar50 = fVar28;
              fVar39 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,*puVar13);
              if (DAT_06db4c75 == '\0') {
                FUN_02d965b8(PTR_DAT_069fbb48);
                DAT_06db4c75 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              fStack0000000000000104 = fStack0000000000000104 - fVar39;
              fVar29 = fVar29 - fVar47;
              fVar28 = fVar28 - fVar50;
              fStack00000000000000fc =
                   SQRT(fVar28 * fVar28 +
                        fStack0000000000000104 * fStack0000000000000104 + fVar29 * fVar29);
              if (fStack00000000000000fc <= DAT_010fd13c) {
                if (DAT_06db4c71 == '\0') {
                  FUN_02d965b8(plVar21);
                  DAT_06db4c71 = '\x01';
                }
                pfVar16 = *(float **)(*plVar21 + 0xb8);
                fStack0000000000000104 = *pfVar16;
                fStack0000000000000100 = pfVar16[1];
                fStack00000000000000fc = pfVar16[2];
              }
              else {
                fStack0000000000000104 = fStack0000000000000104 / fStack00000000000000fc;
                fStack0000000000000100 = fVar29 / fStack00000000000000fc;
                fStack00000000000000fc = fVar28 / fStack00000000000000fc;
              }
            }
          }
          lVar9 = *(long *)(unaff_x26 + 0x28);
          uVar19 = _uStack00000000000001b0;
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
          fVar28 = *unaff_x19;
          fVar47 = *(float *)(lVar9 + 0x24);
          fVar50 = *(float *)(lVar9 + 0x28);
          unaff_x27 = (float *)(lVar14 + 0x20);
          fVar39 = *unaff_x27;
          fVar29 = *(float *)(lVar14 + 0x24);
          fVar31 = *(float *)(lVar14 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar19 = _uStack00000000000001b0;
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *unaff_x21), uVar19 = _uStack00000000000001b0, lVar17 == 0))
          goto LAB_03168190;
          fVar47 = fVar47 - fVar29;
          fVar50 = fVar50 - fVar31;
          uVar37 = (ulong)(uint)fVar50;
          uVar15 = (ulong)(uint)(fVar50 * fVar50);
          fStack00000000000000b4 =
               fStack00000000000000b4 +
               SQRT(fVar50 * fVar50 + (fVar28 - fVar39) * (fVar28 - fVar39) + fVar47 * fVar47);
          unaff_x24 = in_stack_00000168;
          if (*(int *)(lVar17 + 0x6c) == 0) {
            if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
               (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29)) goto LAB_0316f2c4;
            fVar28 = *unaff_x19;
            fVar47 = *(float *)(lVar9 + 0x24);
            fVar39 = *unaff_x27;
            fVar29 = *(float *)(lVar14 + 0x24);
            fVar50 = *(float *)(lVar9 + 0x28);
            fVar31 = *(float *)(lVar14 + 0x28);
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
              uVar19 = _uStack00000000000001b0;
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar53 + -2,*unaff_x21);
              uVar19 = _uStack00000000000001b0;
              if (lVar17 == 0) goto LAB_03168190;
              if (*(int *)(lVar17 + 0x6c) == 1) {
                bVar7 = true;
              }
              else {
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),iVar53 + -2,*unaff_x21
                                         ), uVar19 = _uStack00000000000001b0, lVar17 == 0))
                goto LAB_03168190;
                bVar7 = *(int *)(lVar17 + 0x6c) == 2;
              }
            }
            fVar34 = 0.0;
            if (in_stack_00000168 == 1) {
              fVar34 = fStack0000000000000064;
            }
            fVar32 = fStack0000000000000068;
            if (in_stack_00000168 != *(int *)(in_stack_00000170 + 0x18) - 3) {
              fVar32 = 1.0;
            }
            if (fVar32 <= fVar34) {
              iStack0000000000000108 = 0;
              in_stack_00000168 = unaff_x29;
            }
            else {
              fVar47 = fVar47 - fVar29;
              fVar50 = fVar50 - fVar31;
              fVar47 = DAT_010fcf10 /
                       SQRT(fVar50 * fVar50 +
                            (fVar28 - fVar39) * (fVar28 - fVar39) + fVar47 * fVar47);
              do {
                uVar15 = *(ulong *)(in_stack_00000170 + 0x18);
                if (fVar47 + fVar34 <= 1.0) {
                  bVar24 = 0;
                }
                else if (in_stack_00000168 == (int)uVar15 - 3) {
                  bVar24 = *(byte *)(in_stack_00000148 + 0x84) ^ 1;
                }
                else {
                  bVar24 = 0;
                }
                bVar8 = bVar24 != 0;
                fVar50 = 1.0;
                if (!bVar8) {
                  fVar50 = fVar34;
                }
                if (((uVar15 & 0xffffffff) <= in_stack_00000168) ||
                   ((uVar15 & 0xffffffff) <= unaff_x29)) goto LAB_0316f2c4;
                uVar46 = *(undefined4 *)(lVar9 + 0x24);
                uVar33 = *(undefined4 *)(lVar9 + 0x28);
                fVar28 = *unaff_x19;
                puVar20 = *(undefined1 **)unaff_x27;
                uVar41 = *(undefined4 *)(lVar14 + 0x28);
                FUN_04059a68(in_stack_000000c8,in_stack_00000168 & 0xffffffff,
                             *(undefined8 *)PTR_DAT_06a0a108);
                plStack0000000000000008 = (long *)CONCAT44(plStack0000000000000008._4_4_,uVar41);
                puStack0000000000000000 = puVar20;
                fVar31 = in_stack_0000026c;
                fVar29 = in_stack_00000270;
                fVar34 = (float)FUN_0316f340(in_stack_00000268,in_stack_0000026c,in_stack_00000270,
                                             fVar28,uVar46,uVar33);
                _fStack00000000000001c0 = CONCAT44(fVar31,fVar34);
                fVar28 = in_stack_00000160._4_4_;
                fVar39 = (float)in_stack_00000110;
                if (iStack0000000000000108 == 3) {
                  iStack0000000000000108 = 0;
                  fVar28 = fVar29;
                  fVar39 = fVar34;
                  fStack0000000000000128 = fVar31;
                  fStack000000000000012c = fVar29;
                  fVar43 = fVar34;
                }
                in_stack_000001c8 = fVar29;
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar35 = in_stack_000001c8;
                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                fVar49 = *unaff_x27;
                fVar44 = *(float *)(lVar14 + 0x24);
                fVar30 = fStack00000000000001c0;
                fVar38 = fStack00000000000001c4;
                fVar52 = *(float *)(lVar14 + 0x28);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar17 = *(long *)(unaff_x26 + 0x20);
                uVar19 = _uStack00000000000001b0;
                if (lVar17 == 0) goto LAB_03168190;
                fVar38 = fVar38 - fVar44;
                iVar53 = *(int *)(lVar17 + 0x18);
                fVar35 = fVar35 - fVar52;
                fVar44 = fVar35 * fVar35;
                fVar30 = SQRT(fVar44 + (fVar30 - fVar49) * (fVar30 - fVar49) + fVar38 * fVar38);
                if (iVar53 < 1) {
                  lVar17 = *(long *)(unaff_x26 + 0x78);
                  if (lVar17 == 0) goto LAB_03168190;
                  iVar53 = *(int *)(lVar17 + 0x18);
                  if (0 < iVar53) goto LAB_0316b4d8;
                }
                else {
LAB_0316b4d8:
                  fVar38 = (float)FUN_0409f2f4(lVar17,iVar53 + -1,*(undefined8 *)PTR_DAT_069fd088);
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
                  plVar21 = (long *)PTR_DAT_069fb978;
                  fStack00000000000000f8 = fStack00000000000000f8 - fVar38;
                  fStack00000000000000f4 = fStack00000000000000f4 - fVar44;
                  fStack00000000000000f0 = fStack00000000000000f0 - fVar35;
                  fVar35 = SQRT(fStack00000000000000f0 * fStack00000000000000f0 +
                                fStack00000000000000f8 * fStack00000000000000f8 +
                                fStack00000000000000f4 * fStack00000000000000f4);
                  if (fVar35 <= DAT_010fd13c) {
                    if (DAT_06db4c71 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fb978);
                      DAT_06db4c71 = '\x01';
                    }
                    pfVar16 = *(float **)(*(long *)PTR_DAT_069fb978 + 0xb8);
                    fStack00000000000000f8 = *pfVar16;
                    fStack00000000000000f4 = pfVar16[1];
                    fStack00000000000000f0 = pfVar16[2];
                    plVar21 = (long *)PTR_DAT_069fb978;
                  }
                  else {
                    fStack00000000000000f8 = fStack00000000000000f8 / fVar35;
                    fStack00000000000000f4 = fStack00000000000000f4 / fVar35;
                    fStack00000000000000f0 = fStack00000000000000f0 / fVar35;
                    if (DAT_06db4c71 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fb978);
                      DAT_06db4c71 = '\x01';
                    }
                  }
                  pfVar16 = *(float **)(*plVar21 + 0xb8);
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
                    fVar35 = SQRT((fStack00000000000000fc * fStack00000000000000fc +
                                  fStack0000000000000100 * fStack0000000000000100 +
                                  fStack0000000000000104 * fStack0000000000000104) *
                                  (fStack00000000000000f0 * fStack00000000000000f0 +
                                  fStack00000000000000f8 * fStack00000000000000f8 +
                                  fStack00000000000000f4 * fStack00000000000000f4));
                    if (DAT_010fcd14 <= fVar35) {
                      fVar35 = (fStack00000000000000fc * fStack00000000000000f0 +
                               fStack0000000000000104 * fStack00000000000000f8 +
                               fStack0000000000000100 * fStack00000000000000f4) / fVar35;
                      fVar38 = 1.0;
                      if (fVar35 <= 1.0) {
                        fVar38 = fVar35;
                      }
                      fVar44 = -1.0;
                      if (-1.0 <= fVar35) {
                        fVar44 = fVar38;
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      dVar36 = acos((double)fVar44);
                      unaff_s15 = (float)dVar36 * DAT_010fcf40;
                    }
                    bVar8 = false;
                    bVar5 = true;
                    bVar6 = false;
                    if (*(float *)(in_stack_00000148 + 0x80) < unaff_s15) {
                      bVar8 = false;
                      bVar5 = false;
                      bVar6 = true;
                      if (!NAN(fVar30)) {
                        bVar8 = fVar30 < 1.5;
                        bVar5 = fVar30 == 1.5;
                        bVar6 = false;
                      }
                    }
                    bVar8 = bVar24 != 0 ||
                            (!bVar5 && bVar8 == bVar6) &&
                            1.0 <= SQRT((fStack000000000000012c - fVar29) *
                                        (fStack000000000000012c - fVar29) +
                                        (fStack0000000000000128 - fVar31) *
                                        (fStack0000000000000128 - fVar31) +
                                        (fVar43 - fVar34) * (fVar43 - fVar34));
                  }
                }
                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                if (*(char *)(in_stack_00000148 + 0x5d6) != '\0') {
                  uVar19 = _uStack00000000000001b0;
                  if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                  FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001c0,0);
                }
                bVar5 = bVar8;
                if (fVar32 < fVar47 + fVar50 + DAT_010fd060) {
                  bVar6 = bVar8;
                  if (fStack00000000000000a0 <= fVar30) {
                    bVar6 = true;
                  }
                  if (bVar6 == false && (in_stack_000000c0._4_1_ & 1) == 0) {
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                    fVar50 = 1.0;
                    _fStack00000000000001c0 = *(ulong *)unaff_x27;
                    in_stack_000001c8 = *(float *)(lVar14 + 0x28);
                    bVar5 = true;
                  }
                }
                if (fVar47 + fVar50 <= fVar32) {
                  fVar31 = fStack00000000000001c0;
                  fVar29 = fStack00000000000001c4;
                }
                else {
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                  _fStack00000000000001c0 = *(ulong *)unaff_x27;
                  fVar50 = 1.0;
                  in_stack_000001c8 = *(float *)(lVar14 + 0x28);
                  bVar5 = true;
                  fVar31 = *unaff_x27;
                  fVar29 = *(float *)(lVar14 + 0x24);
                }
                fVar34 = in_stack_000001c8;
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar35 = in_stack_000001c8;
                bVar6 = bVar5;
                if (fStack000000000000010c <
                    SQRT((fStack000000000000012c - fVar34) * (fStack000000000000012c - fVar34) +
                         (fVar43 - fVar31) * (fVar43 - fVar31) +
                         (fStack0000000000000128 - fVar29) * (fStack0000000000000128 - fVar29))) {
                  bVar6 = true;
                }
                bVar1 = bVar6;
                if (in_stack_00000168 != 1) {
                  bVar1 = true;
                }
                if (bVar1 == false) {
                  bVar6 = fVar50 == 0.0;
                }
                if (bVar6 == true) {
                  fVar45 = fStack00000000000001c0;
                  fVar31 = fStack00000000000001c4;
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
                  fVar29 = in_stack_000001c8;
                  uVar15 = _fStack00000000000001c0;
                  in_stack_00000110 = _fStack00000000000001c0 & 0xffffffff;
                  fVar31 = SQRT((fStack000000000000012c - fVar35) *
                                (fStack000000000000012c - fVar35) +
                                (fVar43 - fVar45) * (fVar43 - fVar45) +
                                (fStack0000000000000128 - fVar31) *
                                (fStack0000000000000128 - fVar31));
                  in_stack_00000160._4_4_ = in_stack_000001c8;
                  fStack00000000000001d4 = fVar31 + fStack00000000000001d4;
                  *in_stack_000000d8 = fVar31 + *in_stack_000000d8;
                  if (cVar12 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar45 = in_stack_000001c8;
                  lVar17 = *(long *)(in_stack_00000148 + 0x68);
                  *(ulong *)(unaff_x26 + 0x60) = _fStack00000000000001c0;
                  fVar39 = (float)uVar15 - fVar39;
                  fVar43 = fStack00000000000001c0;
                  in_stack_00000230 =
                       in_stack_00000230 +
                       SQRT(fVar39 * fVar39 + (fVar29 - fVar28) * (fVar29 - fVar28));
                  fStack0000000000000128 = fStack00000000000001c4;
                  fStack000000000000012c = in_stack_000001c8;
                  uVar19 = _uStack00000000000001b0;
                  if ((lVar17 == 0) ||
                     (lVar17 = FUN_0400ff1c(lVar17,unaff_x20 & 0xffffffff,*unaff_x21),
                     uVar19 = _uStack00000000000001b0, lVar17 == 0)) goto LAB_03168190;
                  if (*(float *)(lVar17 + 0x100) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*unaff_x21),
                       uVar19 = _uStack00000000000001b0, lVar17 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x104) != 0.0) goto LAB_0316bb78;
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*unaff_x21),
                       uVar19 = _uStack00000000000001b0, lVar17 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x110) != 0.0) goto LAB_0316bb78;
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*unaff_x21),
                       uVar19 = _uStack00000000000001b0, lVar17 == 0)) goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x114) != 0.0) goto LAB_0316bb78;
                    lVar17 = *in_stack_000000e0;
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar42 = *(uint *)(lVar17 + 0x18);
                    if (uVar42 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                      *(undefined4 *)(lVar11 + (long)(int)uVar42 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_04059d64(0,lVar17,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                  else {
LAB_0316bb78:
                    uVar19 = _uStack00000000000001b0;
                    if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                    fVar28 = *in_stack_000000d8;
                    uVar19 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff
                                          ,*unaff_x21);
                    plStack0000000000000008 = (long *)&stack0x0000020c;
                    puStack0000000000000000 = &stack0x00000210;
                    FUN_0316f6a0(fVar28,fStack00000000000000b4,uVar19,uVar19,&stack0x0000022c,
                                 &stack0x00000228,&stack0x00000224,&stack0x00000218,&stack0x00000278
                                 ,&stack0x00000214);
                  }
                  lVar17 = *in_stack_000000b8;
                  uVar19 = _uStack00000000000001b0;
                  if (fVar31 <= 5.0) {
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar42 = *(uint *)(lVar17 + 0x18);
                    fVar28 = (unaff_s15 / fVar31) * 5.0;
                    if (*(uint *)(lVar11 + 0x18) <= uVar42) {
                      lVar11 = *(long *)(lVar18 + 0x20);
                      goto LAB_0316bcb0;
                    }
                    *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                    *(float *)(lVar11 + (long)(int)uVar42 * 4 + 0x20) = fVar28;
                  }
                  else {
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069ff178;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar42 = *(uint *)(lVar17 + 0x18);
                    if (uVar42 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                      *(float *)(lVar11 + (long)(int)uVar42 * 4 + 0x20) = unaff_s15;
                    }
                    else {
                      lVar11 = *(long *)(lVar18 + 0x20);
                      fVar28 = unaff_s15;
LAB_0316bcb0:
                      FUN_04059d64(fVar28,lVar17,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x70));
                    }
                  }
                  if (bVar7) {
                    lVar17 = *in_stack_000000b8;
                    uVar19 = _uStack00000000000001b0;
                    if (lVar17 == 0) goto LAB_03168190;
                    iVar53 = *(int *)(lVar17 + 0x18);
                    if (1 < iVar53) {
                      FUN_04059a68(lVar17,iVar53 + -1,*(undefined8 *)PTR_DAT_06a0a108);
                      FUN_04059abc(lVar17,iVar53 + -2,*(undefined8 *)PTR_DAT_06a0b5c0);
                    }
                  }
                  puVar2 = PTR_DAT_069fbee0;
                  lVar17 = *(long *)(unaff_x26 + 0x20);
                  uVar19 = _uStack00000000000001b0;
                  if (lVar17 == 0) goto LAB_03168190;
                  lVar11 = *(long *)(lVar17 + 0x10);
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_03168190;
                  uVar42 = *(uint *)(lVar17 + 0x18);
                  if (uVar42 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)uVar42 * 0xc;
                    *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                    *(float *)(lVar11 + 0x20) = fVar40;
                    *(float *)(lVar11 + 0x24) = in_stack_0000027c;
                    *(float *)(lVar11 + 0x28) = fVar45;
                  }
                  else {
                    FUN_0409f624(lVar17,*(undefined8 *)
                                         (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70
                                         ));
                  }
                  unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                  lVar17 = *(long *)(unaff_x26 + 0x28);
                  uVar19 = _uStack00000000000001b0;
                  if (lVar17 == 0) goto LAB_03168190;
                  lVar11 = *(long *)(lVar17 + 0x10);
                  lVar18 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_03168190;
                  uVar42 = *(uint *)(lVar17 + 0x18);
                  if (uVar42 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                    *(float *)(lVar11 + (long)(int)uVar42 * 4 + 0x20) = fVar50;
                  }
                  else {
                    FUN_04059d64(fVar50,lVar17,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (bVar5 != false) {
                    lVar17 = *(long *)(in_stack_00000148 + 0x2c8);
                    uVar19 = _uStack00000000000001b0;
                    if (lVar17 == 0) goto LAB_03168190;
                    lVar11 = *(long *)(lVar17 + 0x10);
                    lVar18 = *(long *)PTR_DAT_069fc3e0;
                    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_03168190;
                    uVar42 = *(uint *)(lVar17 + 0x18);
                    if (uVar42 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                      *(int *)(lVar11 + (long)(int)uVar42 * 4 + 0x20) = in_stack_000000d0._4_4_;
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
                  in_stack_00000110 = (ulong)(uint)fVar39;
                  in_stack_00000160._4_4_ = fVar28;
                }
                fVar34 = fVar47 + fVar50;
              } while (fVar34 < fVar32);
              iStack0000000000000108 = 0;
              plVar21 = (long *)PTR_DAT_069fb978;
              in_stack_00000168 = unaff_x29;
            }
            goto LAB_0316c620;
          }
          if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
             (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                    *unaff_x21), uVar19 = _uStack00000000000001b0, lVar17 == 0))
          goto LAB_03168190;
          if (*(int *)(lVar17 + 0x6c) != 1) {
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *unaff_x21), uVar19 = _uStack00000000000001b0, lVar17 == 0))
            goto LAB_03168190;
            if (*(int *)(lVar17 + 0x6c) == 2) goto LAB_0316a48c;
            if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
               (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                      *unaff_x21), uVar19 = _uStack00000000000001b0, lVar17 == 0))
            goto LAB_03168190;
            if (*(int *)(lVar17 + 0x6c) == 3) {
              uStack00000000000001ac = 0;
              if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
              if (((long)(*(int *)(*(long *)(in_stack_00000148 + 0x68) + 0x18) + -2) <
                   (long)in_stack_00000168) && (*(char *)(in_stack_00000148 + 0x84) == '\0')) {
                uVar19 = *(undefined8 *)(in_stack_00000148 + 0x2e0);
                if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                uVar10 = FUN_0634eb94(uVar19,0,0);
                if ((uVar10 & 1) != 0) goto LAB_0316adcc;
                plStack0000000000000008 = in_stack_000000b8;
                puStack0000000000000000 =
                     (undefined1 *)((ulong)puStack0000000000000000 & 0xffffffffffffff00);
                FUN_030fd644(&stack0x00000290,in_stack_00000148,in_stack_00000168 & 0xffffffff,
                             &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,0,
                             &stack0x00000230);
              }
              else {
LAB_0316adcc:
                plStack0000000000000008 = (long *)((long)&stack0x000001a8 + 4);
                puStack0000000000000000 =
                     (undefined1 *)((ulong)puStack0000000000000000 & 0xffffffffffffff00);
                FUN_030faa2c(&stack0x00000290,in_stack_00000148,in_stack_00000168 & 0xffffffff,
                             &stack0x00000238,&stack0x00000240,(long)&stack0x000001d0 + 4,0,
                             &stack0x00000230);
              }
              uVar19 = _uStack00000000000001b0;
              if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                 (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *unaff_x21), uVar19 = _uStack00000000000001b0, lVar17 == 0))
              goto LAB_03168190;
              lVar11 = *(long *)(unaff_x26 + 0x28);
              *(undefined4 *)(lVar17 + 0x34) = uStack00000000000001ac;
              if (lVar11 == 0) goto LAB_03168190;
              fVar40 = 0.0;
              iVar22 = 0;
              puVar27 = (undefined4 *)(in_stack_00000170 + 0x20 + unaff_x20 * 0xc);
              while( true ) {
                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                puVar2 = PTR_DAT_069fbee0;
                plVar21 = (long *)PTR_DAT_069fb978;
                fVar45 = (float)uVar15;
                in_stack_00000160._4_4_ = (float)uVar37;
                iVar25 = *(int *)(lVar11 + 0x18);
                uVar19 = _uStack00000000000001b0;
                if (iVar25 <= iVar22) break;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                uStack00000000000001a0 =
                     FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar22,*(undefined8 *)PTR_DAT_069fd088
                                 );
                fStack00000000000001a4 = fVar45;
                fStack00000000000001a8 = in_stack_00000160._4_4_;
                uVar19 = _uStack00000000000001b0;
                if (*(char *)(in_stack_00000148 + 0x5d6) == '\0') {
                  uVar15 = (ulong)*(uint *)(in_stack_00000170 + 0x18);
                  if ((((uVar15 <= unaff_x20) || (uVar15 <= in_stack_00000168)) ||
                      (uVar15 <= unaff_x29)) || (uVar15 <= in_stack_00000168 + 2))
                  goto LAB_0316f2c4;
                  if (*(long *)(unaff_x26 + 0x28) == 0) goto LAB_03168190;
                  uVar41 = *puVar27;
                  fVar45 = (float)puVar27[1];
                  uVar33 = puVar27[2];
                  fVar47 = *unaff_x19;
                  uVar46 = *(undefined4 *)(lVar9 + 0x24);
                  uVar48 = *(undefined4 *)(lVar9 + 0x28);
                  uVar51 = *(undefined4 *)(lVar14 + 0x28);
                  puVar20 = *(undefined1 **)unaff_x27;
                  FUN_04059a68(*(long *)(unaff_x26 + 0x28),iVar22,*(undefined8 *)PTR_DAT_06a0a108);
                  plStack0000000000000008 = (long *)CONCAT44(plStack0000000000000008._4_4_,uVar51);
                  puStack0000000000000000 = puVar20;
                  FUN_0316f340(uVar41,fVar45,uVar33,fVar47,uVar46,uVar48);
                  fStack00000000000001a4 = fVar45;
                  uVar19 = _uStack00000000000001b0;
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  in_stack_00000160._4_4_ = fStack00000000000001a8;
                  FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar22,
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                  if (iVar22 != 0) goto LAB_0316af8c;
LAB_0316b04c:
                  lVar17 = *in_stack_000000e0;
                  uVar19 = _uStack00000000000001b0;
                  if (lVar17 == 0) goto LAB_03168190;
                  lVar11 = *(long *)(lVar17 + 0x10);
                  lVar18 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_03168190;
                  uVar42 = *(uint *)(lVar17 + 0x18);
                  if (uVar42 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                    *(undefined4 *)(lVar11 + (long)(int)uVar42 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_04059d64(0,lVar17,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                  }
                }
                else {
                  if (*(long *)(in_stack_00000148 + 0x20) == 0) goto LAB_03168190;
                  FUN_03199614(*(long *)(in_stack_00000148 + 0x20),&stack0x000001a0,0);
                  if (iVar22 == 0) goto LAB_0316b04c;
LAB_0316af8c:
                  uVar19 = _uStack00000000000001b0;
                  if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                     (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                            unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440),
                     uVar19 = _uStack00000000000001b0, lVar17 == 0)) goto LAB_03168190;
                  if (*(float *)(lVar17 + 0x100) == 0.0) {
                    if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                       (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                              unaff_x20 & 0xffffffff,*(undefined8 *)PTR_DAT_06a0b440
                                             ), uVar19 = _uStack00000000000001b0, lVar17 == 0))
                    goto LAB_03168190;
                    if (*(float *)(lVar17 + 0x104) == 0.0) {
                      if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                         (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                unaff_x20 & 0xffffffff,
                                                *(undefined8 *)PTR_DAT_06a0b440),
                         uVar19 = _uStack00000000000001b0, lVar17 == 0)) goto LAB_03168190;
                      if (*(float *)(lVar17 + 0x110) == 0.0) {
                        if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                           (lVar17 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),
                                                  unaff_x20 & 0xffffffff,
                                                  *(undefined8 *)PTR_DAT_06a0b440),
                           uVar19 = _uStack00000000000001b0, lVar17 == 0)) goto LAB_03168190;
                        if (*(float *)(lVar17 + 0x114) == 0.0) goto LAB_0316b04c;
                      }
                    }
                  }
                  puVar2 = PTR_DAT_069fd088;
                  uVar19 = _uStack00000000000001b0;
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  fVar47 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar22 + -1,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  uVar19 = _uStack00000000000001b0;
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  fVar50 = fVar45;
                  fVar28 = in_stack_00000160._4_4_;
                  fVar39 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar22,
                                               *(undefined8 *)puVar2);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar19 = _uStack00000000000001b0;
                  if (*(long *)(in_stack_00000148 + 0x68) == 0) goto LAB_03168190;
                  fVar31 = *in_stack_000000d8;
                  fVar40 = fVar40 + SQRT((in_stack_00000160._4_4_ - fVar28) *
                                         (in_stack_00000160._4_4_ - fVar28) +
                                         (fVar47 - fVar39) * (fVar47 - fVar39) +
                                         (fVar45 - fVar50) * (fVar45 - fVar50));
                  uVar19 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                        *(undefined8 *)PTR_DAT_06a0b440);
                  plStack0000000000000008 = (long *)&stack0x0000020c;
                  puStack0000000000000000 = &stack0x00000210;
                  FUN_0316f6a0(fVar40 + fVar31,fStack00000000000000b4,uVar19,uVar19,&stack0x0000022c
                               ,&stack0x00000228,&stack0x00000224,&stack0x00000218,&stack0x000001a0,
                               &stack0x00000214);
                }
                uVar19 = _uStack00000000000001b0;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                uVar37 = (ulong)(uint)fStack00000000000001a8;
                uVar15 = (ulong)(uint)fStack00000000000001a4;
                FUN_0409f350(uStack00000000000001a0,*(long *)(unaff_x26 + 0x20),iVar22,
                             *(undefined8 *)PTR_DAT_06a0b7d0);
                lVar11 = *(long *)(unaff_x26 + 0x28);
                iVar22 = iVar22 + 1;
                uVar19 = _uStack00000000000001b0;
                if (lVar11 == 0) goto LAB_03168190;
              }
              uVar15 = (ulong)(iVar25 - 1);
              if (iVar25 < 1) {
                if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                lVar17 = *(long *)(unaff_x26 + 0x20);
                if (lVar17 == 0) goto LAB_03168190;
                lVar11 = *(long *)(lVar17 + 0x10);
                fVar40 = *unaff_x27;
                uVar41 = *(undefined4 *)(lVar14 + 0x24);
                in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
                *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                if (lVar11 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar17 + 0x18);
                if (uVar42 < *(uint *)(lVar11 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)uVar42 * 0xc;
                  *(uint *)(lVar17 + 0x18) = uVar42 + 1;
                  *(float *)(lVar11 + 0x20) = fVar40;
                  *(undefined4 *)(lVar11 + 0x24) = uVar41;
                  *(float *)(lVar11 + 0x28) = in_stack_00000160._4_4_;
                }
                else {
                  FUN_0409f624(lVar17,*(undefined8 *)
                                       (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70))
                  ;
                  uVar15 = extraout_x1_00;
                }
                fVar40 = fStack00000000000001d4;
                if ((*(uint *)(in_stack_00000170 + 0x18) <= in_stack_00000168) ||
                   (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29)) goto LAB_0316f2c4;
                uVar19 = *(undefined8 *)unaff_x19;
                fVar45 = *(float *)(lVar9 + 0x28);
                lVar9 = *(long *)unaff_x27;
                fVar47 = *(float *)(lVar14 + 0x28);
                if (DAT_06db4c77 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48,uVar15);
                  DAT_06db4c77 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar50 = (float)uVar19 - (float)lVar9;
                fVar28 = (float)((ulong)uVar19 >> 0x20) - (float)((ulong)lVar9 >> 0x20);
                fVar45 = fVar45 - fVar47;
                in_stack_0000027c = fVar45 * fVar45;
                fStack00000000000001d4 =
                     fVar40 + SQRT(in_stack_0000027c + fVar50 * fVar50 + fVar28 * fVar28);
LAB_0316d2dc:
                lVar9 = *(long *)(unaff_x26 + 0x28);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar9 + 0x18);
                if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0x3f800000;
                }
                else {
                  FUN_04059d64(0x3f800000,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar9 = *in_stack_000000e0;
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar9 + 0x18);
                if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar9,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                fVar40 = (float)FUN_04059a68(lVar11,uVar15,*(undefined8 *)PTR_DAT_06a0a108);
                unaff_x21 = (undefined8 *)PTR_DAT_06a0b440;
                puVar2 = PTR_DAT_069fd088;
                plVar21 = (long *)PTR_DAT_069fb978;
                fVar45 = 1.0;
                uVar19 = _uStack00000000000001b0;
                if (fVar40 <= 1.0) {
                  lVar9 = *(long *)(unaff_x26 + 0x20);
                  if (lVar9 == 0) goto LAB_03168190;
                  fVar40 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                               *(undefined8 *)PTR_DAT_069fd088);
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                  fVar45 = fVar45 - *(float *)(lVar14 + 0x24);
                  in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - *(float *)(lVar14 + 0x28);
                  in_stack_0000027c = fStack00000000000000a4;
                  if (fStack00000000000000a4 <=
                      in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                      (fVar40 - *unaff_x27) * (fVar40 - *unaff_x27) + fVar45 * fVar45) {
                    lVar9 = *(long *)(unaff_x26 + 0x20);
                    uVar19 = _uStack00000000000001b0;
                    if (lVar9 == 0) goto LAB_03168190;
                    fVar40 = fStack00000000000000a4;
                    fVar45 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                 *(undefined8 *)puVar2);
                    if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                    fVar47 = *unaff_x27;
                    fVar28 = *(float *)(lVar14 + 0x24);
                    fVar50 = *(float *)(lVar14 + 0x28);
                    if (DAT_06db4c77 == '\0') {
                      FUN_02d965b8(PTR_DAT_069fbb48);
                      DAT_06db4c77 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    puVar3 = PTR_DAT_069fbee0;
                    fVar40 = fVar40 - fVar28;
                    lVar9 = *(long *)(unaff_x26 + 0x20);
                    in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar50;
                    uVar19 = _uStack00000000000001b0;
                    if (fStack00000000000000b0 <=
                        SQRT(in_stack_00000160._4_4_ * in_stack_00000160._4_4_ +
                             (fVar45 - fVar47) * (fVar45 - fVar47) + fVar40 * fVar40)) {
                      if (unaff_x29 < *(uint *)(in_stack_00000170 + 0x18)) {
                        if (lVar9 != 0) {
                          lVar17 = *(long *)(lVar9 + 0x10);
                          fVar40 = *unaff_x27;
                          fVar45 = *(float *)(lVar14 + 0x24);
                          in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar17 != 0) {
                            uVar42 = *(uint *)(lVar9 + 0x18);
                            if (uVar42 < *(uint *)(lVar17 + 0x18)) {
                              lVar17 = lVar17 + (long)(int)uVar42 * 0xc;
                              *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                              *(float *)(lVar17 + 0x20) = fVar40;
                              *(float *)(lVar17 + 0x24) = fVar45;
                              *(float *)(lVar17 + 0x28) = in_stack_00000160._4_4_;
                            }
                            else {
                              FUN_0409f624(lVar9,*(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                            0xc0) + 0x70));
                            }
                            fVar40 = fStack00000000000001d4;
                            lVar9 = *(long *)(unaff_x26 + 0x20);
                            uVar19 = _uStack00000000000001b0;
                            if (lVar9 != 0) {
                              fVar47 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                                           *(undefined8 *)puVar2);
                              if (unaff_x29 < *(uint *)(in_stack_00000170 + 0x18)) {
                                fVar50 = *unaff_x27;
                                fVar39 = *(float *)(lVar14 + 0x24);
                                fVar28 = *(float *)(lVar14 + 0x28);
                                if (DAT_06db4c77 == '\0') {
                                  FUN_02d965b8(PTR_DAT_069fbb48);
                                  DAT_06db4c77 = '\x01';
                                }
                                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                                  thunk_FUN_02df485c();
                                }
                                fVar45 = fVar45 - fVar39;
                                in_stack_00000160._4_4_ = in_stack_00000160._4_4_ - fVar28;
                                in_stack_0000027c =
                                     in_stack_00000160._4_4_ * in_stack_00000160._4_4_;
                                fStack00000000000001d4 =
                                     fVar40 + SQRT(in_stack_0000027c +
                                                   (fVar47 - fVar50) * (fVar47 - fVar50) +
                                                   fVar45 * fVar45);
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
                    uVar19 = _uStack00000000000001b0;
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
                  uVar19 = _uStack00000000000001b0;
                  if (lVar9 == 0) goto LAB_03168190;
                  if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
                  in_stack_00000160._4_4_ = *(float *)(lVar14 + 0x28);
                  in_stack_0000027c = *(float *)(lVar14 + 0x24);
                  FUN_0409f350(*unaff_x27,lVar9,*(int *)(lVar9 + 0x18) + -1,
                               *(undefined8 *)PTR_DAT_06a0b7d0);
                }
              }
              lVar9 = *(long *)(unaff_x26 + 0x20);
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              iVar22 = *(int *)(lVar9 + 0x18);
              in_stack_00000110 = FUN_0409f2f4(lVar9,iVar22 + -1,*(undefined8 *)PTR_DAT_069fd088);
              puVar2 = PTR_DAT_069fd088;
              lVar9 = *(long *)(unaff_x26 + 0x20);
              fVar40 = (float)in_stack_00000110;
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              fVar47 = in_stack_00000160._4_4_;
              if (1 < *(int *)(lVar9 + 0x18)) {
                fStack0000000000000088 = in_stack_0000027c;
                fStack000000000000008c =
                     (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                         *(undefined8 *)PTR_DAT_069fd088);
                lVar9 = *(long *)(unaff_x26 + 0x20);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar45 = fStack0000000000000088;
                fVar50 = fVar47;
                fVar28 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2
                                            );
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fStack000000000000008c = fStack000000000000008c - fVar28;
                fStack0000000000000088 = fStack0000000000000088 - fVar45;
                fVar47 = fVar47 - fVar50;
                in_stack_00000080._4_4_ =
                     SQRT(fVar47 * fVar47 +
                          fStack000000000000008c * fStack000000000000008c +
                          fStack0000000000000088 * fStack0000000000000088);
                if (in_stack_00000080._4_4_ <= DAT_010fd13c) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar21);
                    DAT_06db4c71 = '\x01';
                  }
                  pfVar16 = *(float **)(*plVar21 + 0xb8);
                  fStack000000000000008c = *pfVar16;
                  fStack0000000000000088 = pfVar16[1];
                  in_stack_00000080._4_4_ = pfVar16[2];
                }
                else {
                  fStack000000000000008c = fStack000000000000008c / in_stack_00000080._4_4_;
                  fStack0000000000000088 = fStack0000000000000088 / in_stack_00000080._4_4_;
                  in_stack_00000080._4_4_ = fVar47 / in_stack_00000080._4_4_;
                }
              }
              lVar9 = *(long *)(in_stack_00000148 + 0x2c8);
              *(float *)(in_stack_00000148 + 0x2c0) =
                   *(float *)(in_stack_00000148 + 0x2c0) + fStack00000000000001d4;
              uVar19 = _uStack00000000000001b0;
              if (lVar9 == 0) goto LAB_03168190;
              lVar14 = *(long *)(lVar9 + 0x10);
              lVar17 = *(long *)PTR_DAT_069fc3e0;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_03168190;
              uVar42 = *(uint *)(lVar9 + 0x18);
              in_stack_000000d0._4_4_ = iVar22 + in_stack_000000d0._4_4_;
              fVar50 = fStack00000000000001d4;
              if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                *(int *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = in_stack_000000d0._4_4_;
              }
              else {
                FUN_03fb3e1c(lVar9,in_stack_000000d0._4_4_,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              uVar19 = _uStack00000000000001b0;
              if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
              iVar22 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
              fVar45 = in_stack_00000160._4_4_;
              if (iVar22 < 1) {
                iStack0000000000000108 = 3;
                in_stack_00000168 = unaff_x29;
              }
              else {
                lVar9 = FUN_0400ff1c(in_stack_00000098,iVar53 + -2,*unaff_x21);
                uVar19 = _uStack00000000000001b0;
                if ((lVar9 == 0) || (lVar14 = *in_stack_00000090, lVar14 == 0)) goto LAB_03168190;
                iVar53 = *(int *)(lVar9 + 0xbc);
                fVar28 = (float)FUN_04059a68(lVar14,*(int *)(lVar14 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_06a0a108);
                lVar9 = *in_stack_00000090;
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                if (1 < *(int *)(lVar9 + 0x18)) {
                  fVar50 = (float)FUN_04059a68(lVar9,*(int *)(lVar9 + 0x18) + -2,
                                               *(undefined8 *)PTR_DAT_06a0a108);
                  fVar50 = fVar28 - fVar50;
                  fVar28 = fVar50;
                }
                puVar2 = PTR_DAT_069fd088;
                lVar9 = *(long *)(unaff_x26 + 0x78);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar39 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,
                                             *(undefined8 *)PTR_DAT_069fd088);
                uVar19 = _uStack00000000000001b0;
                if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                fVar31 = fVar50;
                fVar29 = fVar47;
                fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),0,*(undefined8 *)puVar2);
                if (DAT_06db4c75 == '\0') {
                  FUN_02d965b8(PTR_DAT_069fbb48);
                  DAT_06db4c75 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                fVar50 = fVar50 - fVar31;
                uVar15 = (ulong)(uint)DAT_010fd13c;
                fVar47 = SQRT((fVar47 - fVar29) * (fVar47 - fVar29) +
                              (fVar39 - fVar34) * (fVar39 - fVar34) + fVar50 * fVar50);
                if (fVar47 <= DAT_010fd13c) {
                  if (DAT_06db4c71 == '\0') {
                    FUN_02d965b8(plVar21);
                    DAT_06db4c71 = '\x01';
                  }
                  fVar50 = *(float *)(*(long *)(*plVar21 + 0xb8) + 4);
                }
                else {
                  fVar50 = fVar50 / fVar47;
                }
                puVar2 = PTR_DAT_069fd088;
                lVar9 = *(long *)(unaff_x26 + 0x78);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
                lVar9 = *(long *)(unaff_x26 + 0x78);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                fVar31 = fVar47;
                fVar39 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)puVar2
                                            );
                uVar19 = _uStack00000000000001b0;
                if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
                uVar37 = (ulong)(uint)(float)iVar53;
                fVar29 = (float)iVar22 - (float)iVar53;
                if (1.0 <= fVar29) {
                  fVar34 = 0.0;
                  iVar22 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
                  iVar53 = 2;
                  iVar25 = -2;
                  do {
                    fVar32 = (float)uVar37;
                    if ((iVar53 - iVar22) + -1 < 0) {
                      lVar9 = *(long *)(unaff_x26 + 0x78);
                      uVar19 = _uStack00000000000001b0;
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar35 = (float)uVar15;
                      fVar30 = (float)FUN_0409f2f4(lVar9,iVar25 + *(int *)(lVar9 + 0x18),
                                                   *(undefined8 *)PTR_DAT_069fd088);
                      if (DAT_06db4c77 == '\0') {
                        FUN_02d965b8(PTR_DAT_069fbb48);
                        DAT_06db4c77 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      lVar9 = *(long *)(unaff_x26 + 0x78);
                      uVar19 = _uStack00000000000001b0;
                      if (lVar9 == 0) goto LAB_03168190;
                      fVar38 = fVar35 - (float)uVar15;
                      fVar34 = fVar34 + SQRT(fVar38 * fVar38 +
                                             (fVar30 - fVar39) * (fVar30 - fVar39) +
                                             (fVar32 - fVar31) * (fVar32 - fVar31));
                      fVar47 = (fVar28 / fVar29) * fVar50 + fVar47;
                      fVar39 = 1.0;
                      if (SQRT(fVar34 / fVar28) <= 1.0) {
                        fVar39 = SQRT(fVar34 / fVar28);
                      }
                      fVar31 = fVar47 + (fVar32 - fVar47) * fVar39;
                      uVar37 = (ulong)(uint)fVar31;
                      FUN_0409f350(fVar30,uVar37,fVar35,lVar9,iVar25 + *(int *)(lVar9 + 0x18),
                                   *(undefined8 *)PTR_DAT_06a0b7d0);
                      uVar15 = (ulong)(uint)fVar35;
                      fVar39 = fVar30;
                    }
                    fVar32 = (float)iVar53;
                    iVar53 = iVar53 + 1;
                    iVar25 = iVar25 + -1;
                  } while (fVar32 <= fVar29);
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
                                       *unaff_x21), puVar2 = PTR_DAT_069fd088,
                 uVar19 = _uStack00000000000001b0, lVar9 == 0)) goto LAB_03168190;
              in_stack_00000168 = unaff_x29;
              if (*(int *)(lVar9 + 0x6c) == 4) {
                if ((*(long *)(in_stack_00000148 + 0x68) == 0) ||
                   (lVar9 = FUN_0400ff1c(*(long *)(in_stack_00000148 + 0x68),unaff_x20 & 0xffffffff,
                                         *unaff_x21), uVar19 = _uStack00000000000001b0, lVar9 == 0))
                goto LAB_03168190;
                fStack00000000000001d4 = 0.0;
                *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar9 + 0x1d8);
                lVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
                FUN_040594d0(lVar9,*(undefined8 *)PTR_DAT_069ff180);
                uVar19 = _uStack00000000000001b0;
                if (lVar9 == 0) goto LAB_03168190;
                lVar14 = *(long *)(lVar9 + 0x10);
                lVar17 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar14 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar9 + 0x18);
                if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                  *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar9,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                }
                lVar14 = *(long *)(unaff_x26 + 0x20);
                uVar19 = _uStack00000000000001b0;
                if (lVar14 == 0) goto LAB_03168190;
                iVar53 = 1;
                while( true ) {
                  fVar47 = fStack00000000000001d4;
                  fVar28 = (float)uVar37;
                  fVar50 = (float)uVar15;
                  if (*(int *)(lVar14 + 0x18) <= iVar53) break;
                  fVar39 = (float)FUN_0409f2f4(lVar14,iVar53 + -1,*(undefined8 *)puVar2);
                  uVar19 = _uStack00000000000001b0;
                  if (*(long *)(unaff_x26 + 0x20) == 0) goto LAB_03168190;
                  fVar31 = fVar50;
                  fVar29 = fVar28;
                  fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x20),iVar53,
                                               *(undefined8 *)puVar2);
                  if (DAT_06db4c77 == '\0') {
                    FUN_02d965b8(PTR_DAT_069fbb48);
                    DAT_06db4c77 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  fVar28 = fVar28 - fVar29;
                  uVar37 = (ulong)(uint)fVar28;
                  lVar14 = *(long *)(lVar9 + 0x10);
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  uVar15 = (ulong)(uint)(fVar28 * fVar28);
                  fStack00000000000001d4 =
                       fVar47 + SQRT(fVar28 * fVar28 +
                                     (fVar39 - fVar34) * (fVar39 - fVar34) +
                                     (fVar50 - fVar31) * (fVar50 - fVar31));
                  uVar19 = _uStack00000000000001b0;
                  if (lVar14 == 0) goto LAB_03168190;
                  uVar42 = *(uint *)(lVar9 + 0x18);
                  if (uVar42 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar42 + 1;
                    *(float *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = fStack00000000000001d4;
                  }
                  else {
                    FUN_04059d64(lVar9,*(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)PTR_DAT_069ff178 + 0x20) +
                                                  0xc0) + 0x70));
                  }
                  lVar14 = *(long *)(unaff_x26 + 0x20);
                  iVar53 = iVar53 + 1;
                  uVar19 = _uStack00000000000001b0;
                  if (lVar14 == 0) goto LAB_03168190;
                }
                lVar14 = *(long *)(unaff_x26 + 0x28);
                *in_stack_000000d8 = *in_stack_000000d8 + fStack00000000000001d4;
                uVar19 = _uStack00000000000001b0;
                if (lVar14 == 0) goto LAB_03168190;
                lVar17 = *(long *)(lVar14 + 0x10);
                lVar11 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar14 + 0x18);
                if (uVar42 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar42 + 1;
                  *(undefined4 *)(lVar17 + (long)(int)uVar42 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar14,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                lVar14 = *in_stack_000000e0;
                uVar19 = _uStack00000000000001b0;
                if (lVar14 == 0) goto LAB_03168190;
                lVar17 = *(long *)(lVar14 + 0x10);
                lVar11 = *(long *)PTR_DAT_069ff178;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar17 == 0) goto LAB_03168190;
                uVar42 = *(uint *)(lVar14 + 0x18);
                if (uVar42 < *(uint *)(lVar17 + 0x18)) {
                  *(uint *)(lVar14 + 0x18) = uVar42 + 1;
                  *(undefined4 *)(lVar17 + (long)(int)uVar42 * 4 + 0x20) = 0;
                }
                else {
                  FUN_04059d64(0,lVar14,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                lVar14 = *(long *)(unaff_x26 + 0x20);
                uVar19 = _uStack00000000000001b0;
                if (lVar14 == 0) goto LAB_03168190;
                iVar53 = 0;
                while (iVar53 < *(int *)(lVar14 + 0x18)) {
                  lVar14 = *(long *)(unaff_x26 + 0x28);
                  fVar47 = (float)FUN_04059a68(lVar9,iVar53,*(undefined8 *)PTR_DAT_06a0a108);
                  uVar19 = _uStack00000000000001b0;
                  if (lVar14 == 0) goto LAB_03168190;
                  lVar17 = *(long *)(lVar14 + 0x10);
                  lVar11 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_03168190;
                  uVar42 = *(uint *)(lVar14 + 0x18);
                  if (uVar42 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar42 + 1;
                    *(float *)(lVar17 + (long)(int)uVar42 * 4 + 0x20) =
                         fVar47 / fStack00000000000001d4;
                  }
                  else {
                    FUN_04059d64(lVar14,*(undefined8 *)
                                         (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar14 = *in_stack_000000e0;
                  uVar19 = _uStack00000000000001b0;
                  if (lVar14 == 0) goto LAB_03168190;
                  lVar17 = *(long *)(lVar14 + 0x10);
                  lVar11 = *(long *)PTR_DAT_069ff178;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_03168190;
                  uVar42 = *(uint *)(lVar14 + 0x18);
                  if (uVar42 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar42 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar42 * 4 + 0x20) = 0;
                  }
                  else {
                    FUN_04059d64(0,lVar14,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar14 = *(long *)(unaff_x26 + 0x20);
                  iVar53 = iVar53 + 1;
                  uVar19 = _uStack00000000000001b0;
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
          uVar42 = *(uint *)(in_stack_00000170 + 0x18);
          in_stack_00000160._4_4_ = fVar45;
          if (in_stack_00000168 == 1) {
            if ((ulong)uVar42 < 2) goto LAB_0316f2c4;
            in_stack_00000160._4_4_ = *(float *)(lVar9 + 0x28);
            *(undefined8 *)(unaff_x26 + 0x60) = *(undefined8 *)unaff_x19;
          }
          if (uVar42 <= unaff_x29) goto LAB_0316f2c4;
          fVar43 = *(float *)(lVar14 + 0x28);
          lVar17 = *(long *)unaff_x27;
          uVar19 = *(undefined8 *)unaff_x19;
          fVar45 = *(float *)(lVar9 + 0x28);
          if (DAT_06db4c75 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c75 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar47 = (float)lVar17 - (float)uVar19;
          fVar50 = (float)((ulong)lVar17 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
          fVar43 = fVar43 - fVar45;
          fVar45 = SQRT(fVar43 * fVar43 + fVar47 * fVar47 + fVar50 * fVar50);
          uVar15 = (ulong)(uint)fVar45;
          if (fVar45 <= DAT_010fd13c) {
            if (DAT_06db4c71 == '\0') {
              FUN_02d965b8(plVar21);
              DAT_06db4c71 = '\x01';
            }
            unaff_d8 = **(undefined8 **)(*plVar21 + 0xb8);
            unaff_s9 = *(float *)(*(undefined8 **)(*plVar21 + 0xb8) + 1);
          }
          else {
            unaff_s9 = fVar43 / fVar45;
            unaff_d8 = CONCAT44(fVar50 / fVar45,fVar47 / fVar45);
          }
          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
          fVar43 = *(float *)(lVar14 + 0x28);
          lVar17 = *(long *)unaff_x27;
          uVar19 = *(undefined8 *)unaff_x19;
          fVar45 = *(float *)(lVar9 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar47 = (float)lVar17 - (float)uVar19;
          fVar50 = (float)((ulong)lVar17 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
          fVar43 = fVar43 - fVar45;
          fStack00000000000001d4 = SQRT(fVar43 * fVar43 + fVar47 * fVar47 + fVar50 * fVar50);
          if (*(uint *)(in_stack_00000170 + 0x18) <= unaff_x29) goto LAB_0316f2c4;
          in_stack_00000110 = (ulong)(uint)fVar40;
          fVar45 = *unaff_x27;
          fVar43 = *(float *)(lVar14 + 0x28);
          if (DAT_06db4c77 == '\0') {
            FUN_02d965b8(PTR_DAT_069fbb48);
            DAT_06db4c77 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          fVar43 = fVar43 - in_stack_00000160._4_4_;
          in_stack_00000230 = SQRT((fVar45 - fVar40) * (fVar45 - fVar40) + fVar43 * fVar43) + 0.0;
          fVar43 = 0.0;
          if (in_stack_00000168 != 1) {
            fVar43 = fStack000000000000010c;
          }
          in_stack_00000150 = (ulong)(uint)fVar43;
          uVar37 = in_stack_00000150;
          unaff_x22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff188);
          FUN_040594d0(unaff_x22,*(undefined8 *)PTR_DAT_069ff180);
          unaff_x23 = in_stack_00000148;
          in_stack_00000120._4_4_ = unaff_s15;
          in_stack_00000168 = unaff_x29;
        } while (fStack00000000000001d4 - fStack000000000000010c <= fVar43);
        in_stack_00000130 = CONCAT44(*(undefined4 *)((ulong)&stack0x00000278 | 4),fVar40);
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
      lVar9 = *(long *)unaff_x27;
      fVar40 = unaff_x27[2];
      if (DAT_06db4c77 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c77 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar50 = (float)in_stack_00000150;
      fVar43 = (float)unaff_d8 * fVar50 + (float)in_stack_00000130;
      fVar45 = (float)((ulong)unaff_d8 >> 0x20) * fVar50 + (float)((ulong)in_stack_00000130 >> 0x20)
      ;
      uVar19 = CONCAT44(fVar45,fVar43);
      fVar47 = unaff_s9 * fVar50 + in_stack_00000160._4_4_;
      fVar43 = fVar43 - (float)lVar9;
      fVar45 = fVar45 - (float)((ulong)lVar9 >> 0x20);
      fVar40 = SQRT((fVar47 - fVar40) * (fVar47 - fVar40) + fVar43 * fVar43 + fVar45 * fVar45);
      uVar15 = (ulong)(uint)fVar40;
    } while (fVar40 <= fStack00000000000000b0);
    _uStack00000000000001b0 = uVar19;
    in_stack_000001b8 = fVar47;
    if (*(char *)(unaff_x23 + 0x5d6) != '\0') {
      if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_03168190;
      FUN_03199614(*(long *)(unaff_x23 + 0x20),&stack0x000001b0,0);
    }
    uVar19 = _uStack00000000000001b0;
    if ((*(long *)(unaff_x23 + 0x68) == 0) ||
       (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
       uVar19 = _uStack00000000000001b0, lVar9 == 0)) goto LAB_03168190;
    if (*(float *)(lVar9 + 0x100) == 0.0) {
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         uVar19 = _uStack00000000000001b0, lVar9 == 0)) goto LAB_03168190;
      if (*(float *)(lVar9 + 0x104) != 0.0) goto LAB_0316a920;
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         uVar19 = _uStack00000000000001b0, lVar9 == 0)) goto LAB_03168190;
      if (*(float *)(lVar9 + 0x110) != 0.0) goto LAB_0316a920;
      if ((*(long *)(unaff_x23 + 0x68) == 0) ||
         (lVar9 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21),
         uVar19 = _uStack00000000000001b0, lVar9 == 0)) goto LAB_03168190;
      if (*(float *)(lVar9 + 0x114) != 0.0) goto LAB_0316a920;
      lVar9 = *in_stack_000000e0;
      if (lVar9 == 0) goto LAB_03168190;
      lVar14 = *(long *)(lVar9 + 0x10);
      lVar17 = *(long *)PTR_DAT_069ff178;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar14 == 0) goto LAB_03168190;
      uVar42 = *(uint *)(lVar9 + 0x18);
      if (uVar42 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar42 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar42 * 4 + 0x20) = 0;
      }
      else {
        FUN_04059d64(0,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_0316a990;
    }
LAB_0316a920:
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x23 + 0x68) == 0) goto LAB_03168190;
    fVar40 = *unaff_x25;
    param_4 = FUN_0400ff1c(*(long *)(unaff_x23 + 0x68),unaff_x20 & 0xffffffff,*unaff_x21);
    param_3 = (ulong)(uint)fStack00000000000000b4;
    param_6 = &stack0x0000022c;
    param_7 = &stack0x00000228;
    param_2 = (ulong)(uint)(fVar50 + fVar40);
    param_8 = &stack0x00000224;
    param_1 = (long *)&stack0x0000020c;
    param_9 = &stack0x00000218;
    param_10 = (undefined8 *)&stack0x000001b0;
  } while( true );
  while( true ) {
    fVar29 = fVar43;
    fVar34 = fVar47;
    fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
    if (DAT_06db4c77 == '\0') {
      FUN_02d965b8(puVar3);
      DAT_06db4c77 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    fVar29 = fVar43 - fVar29;
    fVar47 = fVar47 - fVar34;
    fVar43 = fVar47 * fVar47;
    fVar39 = fVar39 + SQRT(fVar43 + (fVar31 - fVar32) * (fVar31 - fVar32) + fVar29 * fVar29);
    if (fVar50 < fVar39) goto LAB_0316ee54;
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar41 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar31 = fVar43;
    fVar29 = fVar47;
    uVar33 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
    plStack0000000000000008 = (long *)CONCAT44(plStack0000000000000008._4_4_,fVar29);
    puStack0000000000000000 = (undefined1 *)CONCAT44(fVar31,uVar33);
    fVar43 = (float)FUN_031765b0(uVar41,fVar43,fVar47,fVar45,fVar40,fVar28,0);
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    fVar29 = fVar47;
    fVar34 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
    fVar32 = fVar39 / fVar50;
    fVar31 = 1.0;
    if (fVar32 <= 1.0) {
      fVar31 = fVar32;
    }
    uVar15 = (ulong)(uint)fVar31;
    fVar35 = 0.0;
    if (0.0 <= fVar32) {
      fVar35 = fVar31;
    }
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
    uVar37 = (ulong)(uint)(fVar47 + fVar35 * (fVar29 - fVar47));
    FUN_0409f350(fVar43 + fVar35 * (fVar34 - fVar43),*(long *)(unaff_x26 + 0x78),iVar53,
                 *(undefined8 *)puVar4);
    lVar14 = *(long *)(unaff_x26 + 0x78);
    iVar53 = iVar53 + 1;
    uVar19 = _uStack00000000000001b0;
    if (lVar14 == 0) break;
LAB_0316ecc4:
    fVar47 = (float)uVar37;
    fVar43 = (float)uVar15;
    if (*(int *)(lVar14 + 0x18) <= iVar53) goto LAB_0316ee54;
    fVar31 = (float)FUN_0409f2f4(lVar14,iVar53 + -1,*(undefined8 *)puVar2);
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x26 + 0x78) == 0) break;
  }
  goto LAB_03168190;
LAB_0316ee54:
  puVar2 = PTR_DAT_069fd088;
  if (in_stack_00000048._4_4_ != 0) {
    lVar9 = *(long *)(unaff_x26 + 0x78);
    uVar19 = _uStack00000000000001b0;
    if (lVar9 == 0) goto LAB_03168190;
    fVar40 = (float)FUN_0409f2f4(lVar9,*(int *)(lVar9 + 0x18) + -1,*(undefined8 *)PTR_DAT_069fd088);
    puVar3 = PTR_DAT_06a0b440;
    uVar19 = _uStack00000000000001b0;
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    fVar45 = fVar43;
    FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),0,*(undefined8 *)puVar2);
    lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -2,
                         *(undefined8 *)puVar3);
    puVar4 = PTR_DAT_06a0b7d0;
    puVar3 = PTR_DAT_069fbb48;
    uVar19 = _uStack00000000000001b0;
    if (lVar9 == 0) goto LAB_03168190;
    fVar28 = *(float *)(lVar9 + 200) * 0.5;
    fVar50 = 5.0;
    if (fVar28 <= 5.0) {
      fVar50 = fVar28;
    }
    if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
    iVar53 = *(int *)(*(long *)(unaff_x26 + 0x78) + 0x18);
    if (0 < iVar53 + -2) {
      fVar28 = 0.0;
      iVar53 = iVar53 + -1;
      uVar15 = (ulong)(uint)fVar40;
      uVar37 = (ulong)(uint)fVar47;
      do {
        fVar31 = (float)uVar15;
        fVar39 = (float)uVar37;
        uVar19 = _uStack00000000000001b0;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar29 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
        uVar19 = _uStack00000000000001b0;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        iVar53 = iVar53 + -1;
        fVar34 = fVar39;
        fVar32 = fVar31;
        fVar35 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
        if (DAT_06db4c77 == '\0') {
          FUN_02d965b8(puVar3);
          DAT_06db4c77 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        fVar31 = fVar31 - fVar32;
        fVar32 = fVar31 * fVar31;
        fVar28 = fVar28 + SQRT(fVar32 + (fVar29 - fVar35) * (fVar29 - fVar35) +
                                        (fVar39 - fVar34) * (fVar39 - fVar34));
        if (fVar50 < fVar28) break;
        uVar19 = _uStack00000000000001b0;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar41 = FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
        plStack0000000000000008 = (long *)CONCAT44(plStack0000000000000008._4_4_,fVar31);
        puStack0000000000000000 = (undefined1 *)CONCAT44(fVar32,uVar41);
        fVar39 = fVar47;
        fVar31 = (float)FUN_031765b0(fVar40,fVar43,fVar47,fStack0000000000000060 * 10.0 + fVar40,
                                     fVar45,fStack000000000000005c * 10.0 + fVar47,0);
        uVar19 = _uStack00000000000001b0;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        fVar34 = fVar39;
        fVar32 = (float)FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
        fVar35 = fVar28 / fVar50;
        fVar29 = 1.0;
        if (fVar35 <= 1.0) {
          fVar29 = fVar35;
        }
        uVar37 = (ulong)(uint)fVar29;
        fVar30 = 0.0;
        if (0.0 <= fVar35) {
          fVar30 = fVar29;
        }
        uVar19 = _uStack00000000000001b0;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        FUN_0409f2f4(*(long *)(unaff_x26 + 0x78),iVar53,*(undefined8 *)puVar2);
        uVar19 = _uStack00000000000001b0;
        if (*(long *)(unaff_x26 + 0x78) == 0) goto LAB_03168190;
        uVar15 = (ulong)(uint)(fVar39 + fVar30 * (fVar34 - fVar39));
        FUN_0409f350(fVar31 + fVar30 * (fVar32 - fVar31),*(long *)(unaff_x26 + 0x78),iVar53,
                     *(undefined8 *)puVar4);
      } while (1 < iVar53);
    }
  }
  puVar2 = PTR_DAT_06a0b440;
  lVar9 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)PTR_DAT_06a0b440);
  lVar14 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
  uVar19 = _uStack00000000000001b0;
  if (lVar14 != 0) {
    fVar40 = *(float *)(lVar14 + 0x94);
    lVar14 = FUN_0400ff1c(in_stack_00000098,0,*(undefined8 *)puVar2);
    uVar19 = _uStack00000000000001b0;
    if (lVar14 != 0) {
      fVar43 = *(float *)(lVar14 + 0x9c);
      if (DAT_06db4c75 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbb48);
        DAT_06db4c75 = '\x01';
      }
      puVar3 = PTR_DAT_069fbb48;
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar45 = DAT_010fd13c;
      fVar47 = SQRT(fVar40 * fVar40 + fVar43 * fVar43);
      if (fVar47 <= DAT_010fd13c) {
        if (DAT_06db4c71 == '\0') {
          FUN_02d965b8(PTR_DAT_069fb978);
          DAT_06db4c71 = '\x01';
        }
        uVar23 = **(undefined8 **)(*plVar21 + 0xb8);
        fVar43 = *(float *)(*(undefined8 **)(*plVar21 + 0xb8) + 1);
      }
      else {
        fVar43 = fVar43 / fVar47;
        uVar23 = CONCAT44(0.0 / fVar47,fVar40 / fVar47);
      }
      uVar19 = _uStack00000000000001b0;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x94) = uVar23;
        uVar19 = *(undefined8 *)puVar2;
        *(float *)(lVar9 + 0x9c) = fVar43;
        lVar9 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,uVar19);
        lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                              *(undefined8 *)puVar2);
        uVar19 = _uStack00000000000001b0;
        if (lVar14 != 0) {
          fVar40 = *(float *)(lVar14 + 0x94);
          lVar14 = FUN_0400ff1c(in_stack_00000098,*(int *)(in_stack_00000098 + 0x18) + -1,
                                *(undefined8 *)puVar2);
          uVar19 = _uStack00000000000001b0;
          if (lVar14 != 0) {
            fVar43 = *(float *)(lVar14 + 0x9c);
            if (DAT_06db4c75 == '\0') {
              FUN_02d965b8(PTR_DAT_069fbb48);
              DAT_06db4c75 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            fVar47 = SQRT(fVar40 * fVar40 + fVar43 * fVar43);
            if (fVar47 <= fVar45) {
              if (DAT_06db4c71 == '\0') {
                FUN_02d965b8(PTR_DAT_069fb978);
                DAT_06db4c71 = '\x01';
              }
              uVar23 = **(undefined8 **)(*plVar21 + 0xb8);
              fVar43 = *(float *)(*(undefined8 **)(*plVar21 + 0xb8) + 1);
            }
            else {
              fVar43 = fVar43 / fVar47;
              uVar23 = CONCAT44(0.0 / fVar47,fVar40 / fVar47);
            }
            uVar19 = _uStack00000000000001b0;
            if (lVar9 != 0) {
              uVar19 = *(undefined8 *)(unaff_x26 + 0x78);
              *(undefined8 *)(lVar9 + 0x94) = uVar23;
              *(float *)(lVar9 + 0x9c) = fVar43;
              return uVar19;
            }
          }
        }
      }
    }
  }
LAB_03168190:
  _uStack00000000000001b0 = uVar19;
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


