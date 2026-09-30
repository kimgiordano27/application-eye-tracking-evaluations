/*
FUNCTION_NAME: Unity.VisualScripting.SubtractionHandler.<>c$$<.ctor>b__0_79
ENTRY_POINT: 036a9474
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_11
*/


void Unity_VisualScripting_SubtractionHandler_<>c__<_ctor>b__0_79(long param_1)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  float *pfVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar39;
  uint unaff_w23;
  ulong unaff_x24;
  long lVar40;
  long *plVar41;
  uint unaff_w26;
  undefined4 unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  uint uVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  ulong uVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined4 uVar66;
  float fVar67;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  int iStack0000000000000034;
  undefined8 in_stack_00000038;
  float fStack0000000000000040;
  float fStack000000000000004c;
  float in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  ulong in_stack_00000068;
  int iStack0000000000000074;
  byte bStack0000000000000078;
  byte bStack000000000000007c;
  float fStack0000000000000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000124;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float in_stack_00000150;
  long *in_stack_00000168;
  float fStack0000000000000174;
  long *in_stack_00000178;
  undefined8 in_stack_00000188;
  long *in_stack_00000190;
  undefined8 in_stack_00000198;
  float fStack00000000000001a0;
  float fStack00000000000001a4;
  float in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  float in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined4 in_stack_000001e0;
  long in_stack_00000fb8;
  uint in_stack_0000104c;
  uint in_stack_00001068;
  undefined8 in_stack_00001070;
  undefined8 in_stack_00001078;
  float in_stack_00001080;
  undefined8 in_stack_00001088;
  char in_stack_00001094;
  float in_stack_00001098;
  uint in_stack_0000109c;
  
code_r0x036a9474:
  *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(param_1 + 0x68);
LAB_036a947c:
  if (unaff_x19[0x20] != 0) {
    fVar57 = *(float *)(unaff_x19 + 0x3d);
    memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
    iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
    if (*unaff_x21 != 0) {
      memmove(&stack0x00000fe0,(void *)(*unaff_x21 + 0x50),0x60);
      fVar42 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar67 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar67 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar67 = (fVar57 / (float)iVar12) * fVar42 * fVar67;
      iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar51 = (float)FUN_0396ac34(*unaff_x21 + 0x50,0);
        fVar42 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar42 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar62 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(unaff_x29 + 0x20),0);
        fVar43 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_036afadc;
        fVar63 = *(float *)(unaff_x29 + 0x2c);
        fVar45 = (float)FUN_0396b17c(*(long *)(unaff_x29 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_0396ac54(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar59 = (float)FUN_0396ac84(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar60 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_0396ac34(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar46 = fVar67 * fVar59 * fVar60 * fVar46;
        fVar42 = (fVar57 / (float)iVar12) * fVar51 * fVar42;
        fVar57 = fVar42 * (fVar62 / fVar43) * fVar63 * fVar45;
        fVar42 = fVar42 / fVar57;
        fVar44 = fVar42 * fVar44;
        fVar67 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar42 = fVar42 * fVar67;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar42 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_036afadc;
        fVar62 = *(float *)(unaff_x29 + 0x2c);
        fVar51 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar51 = 1.0;
        }
        fVar43 = (float)FUN_0396b17c(*(long *)(unaff_x29 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar63 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar46 = fVar67 * fVar45 * fVar63 * fVar46;
        fVar57 = (fVar57 / (float)iVar12) * fVar42 * fVar51 * fVar62 * fVar43;
        fVar42 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = unaff_x29;
      thunk_FUN_01b4f09c(in_stack_000000f8,unaff_x29);
      if ((*unaff_x28 != 0) && (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 != 0)) {
        if (*unaff_x20 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)(lVar23 + 0x2c) = 1;
          *(float *)(lVar23 + 0x160) = fVar57;
          *(long *)(lVar23 + 0x40) = *in_stack_000000b8;
          thunk_FUN_01b4f09c();
          if ((*unaff_x28 != 0) && (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 != 0)) {
            if (*unaff_x20 < *(uint *)(lVar23 + 0x18)) {
              *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
              thunk_FUN_01b4f09c();
              lVar23 = *unaff_x28;
              if ((lVar23 != 0) && (lVar26 = *(long *)(lVar23 + 0x38), lVar26 != 0)) {
                if (*unaff_x20 < *(uint *)(lVar26 + 0x18)) {
                  fStack0000000000000174 = 0.0;
                  *(int *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24]
                  ;
                  *(undefined4 *)(unaff_x19 + 0x24) = unaff_w27;
FUN_036a9b34:
                  fVar67 = 0.0;
                  uVar19 = in_stack_00001088;
                  if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
                    fVar67 = fVar57;
                  }
LAB_036a9b50:
                  fVar51 = fVar67;
                  lVar23 = *(long *)(lVar23 + 0x38);
                  if (lVar23 == 0) goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
                  *(short *)(lVar23 + 0x20) = (short)in_stack_0000109c;
                  *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3d];
                  *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  *(int *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) =
                       (int)unaff_x19[0x2b];
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
                       *(undefined4 *)((long)unaff_x19 + 0x15c);
                  if ((unaff_x19[0x6d] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0)) goto LAB_036afadc;
                  uVar11 = *unaff_x20;
                  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,
                               *(undefined8 *)PTR_DAT_03d9c918);
                  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_036afbe8;
                  lVar23 = lVar23 + (long)(int)uVar11 * unaff_x24;
                  *(undefined4 *)(lVar23 + 0x18c) = in_stack_000001e0;
                  *(undefined8 *)(lVar23 + 0x184) = in_stack_000001d8;
                  *(undefined8 *)(lVar23 + 0x17c) = in_stack_000001d0;
                  if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
                       *(undefined4 *)((long)unaff_x19 + 0x25c);
                  if ((unaff_x19[0xc9] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0)) goto LAB_036afadc;
                  FUN_0396b140(&stack0x000001d0,lVar23,0);
                  puVar7 = StringLiteral_455;
                  if ((int)in_stack_0000109c < 0x10000) {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar11 = FUN_02fdb080(in_stack_0000109c,0);
                    uVar11 = uVar11 & 1;
                  }
                  else {
                    uVar11 = 0;
                  }
                  uVar47 = *(uint *)(unaff_x19 + 0x55);
                  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
                  iVar12 = (int)unaff_x24;
                  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
                    _fStack0000000000000138 = (ulong)uVar47 << 0x20;
                    fVar62 = 0.0;
                    fVar67 = 0.0;
                  }
                  else {
                    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
                    uVar13 = *unaff_x20;
                    uVar55 = *(uint *)(*in_stack_000000f8 + 0x28);
                    if ((int)uVar13 < (int)in_stack_00000090._4_4_) {
                      if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 == 0))
                      goto LAB_036afadc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar13 + 1) goto LAB_036afbe8;
                      lVar23 = *(long *)(lVar23 + (long)(int)(uVar13 + 1) * (long)iVar12 + 0x30);
                      if ((((lVar23 == 0) || (*in_stack_00000178 == 0)) ||
                          (lVar26 = *(long *)(*in_stack_00000178 + 0x128), lVar26 == 0)) ||
                         (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_036afadc;
                      uVar18 = FUN_02630bd0(lVar26,uVar55 | *(int *)(lVar23 + 0x28) << 0x10,
                                            &stack0x00000fb8,*(undefined8 *)PTR_DAT_03d9c868);
                      uVar66 = 0;
                      if ((uVar18 & 1) == 0) {
                        _fStack0000000000000138 = (ulong)uVar47 << 0x20;
                        fVar62 = 0.0;
                        fVar67 = 0.0;
                      }
                      else {
                        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
                        uVar66 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
                        fVar67 = *(float *)(in_stack_00000fb8 + 0x14);
                        fVar62 = *(float *)(in_stack_00000fb8 + 0x18);
                        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
                          uVar47 = 0;
                        }
                        _fStack0000000000000138 =
                             CONCAT44(uVar47,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
                      }
                      uVar13 = *unaff_x20;
                    }
                    else {
                      uVar66 = 0;
                      _fStack0000000000000138 = (ulong)uVar47 << 0x20;
                      fVar62 = 0.0;
                      fVar67 = 0.0;
                    }
                    if (0 < (int)uVar13) {
                      if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 == 0))
                      goto LAB_036afadc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar13 - 1) goto LAB_036afbe8;
                      lVar23 = *(long *)(lVar23 + (ulong)(uVar13 - 1) * (unaff_x24 & 0xffffffff) +
                                        0x30);
                      if (((lVar23 == 0) || (*in_stack_00000178 == 0)) ||
                         ((lVar26 = *(long *)(*in_stack_00000178 + 0x128), lVar26 == 0 ||
                          (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_036afadc;
                      uVar18 = FUN_02630bd0(lVar26,*(uint *)(lVar23 + 0x28) | uVar55 << 0x10,
                                            &stack0x00000fb8,*(undefined8 *)PTR_DAT_03d9c868);
                      if ((uVar18 & 1) != 0) {
                        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
                        uVar50 = (undefined4)_fStack0000000000000138;
                        fVar67 = (float)FUN_036d2d10(fVar67,fVar62,
                                                     _fStack0000000000000138 & 0xffffffff,uVar66,
                                                     *(undefined4 *)(in_stack_00000fb8 + 0x28),
                                                     *(undefined4 *)(in_stack_00000fb8 + 0x2c),
                                                     *(undefined4 *)(in_stack_00000fb8 + 0x30),
                                                     *(undefined4 *)(in_stack_00000fb8 + 0x34),0);
                        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
                        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
                          fStack000000000000013c = 0.0;
                        }
                        _fStack0000000000000138 = CONCAT44(fStack000000000000013c,uVar50);
                      }
                    }
                    *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
                  }
                  if ((char)unaff_x19[0x1e] != '\0') {
                    fVar45 = *(float *)(unaff_x19 + 200);
                    fVar43 = (float)FUN_0396af88(&stack0x00001050,0);
                    fVar45 = fVar45 - fVar51 * fVar43 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
                    *(float *)(unaff_x19 + 200) = fVar45;
                    if ((in_stack_0000109c == 0x200b) || (uVar11 != 0)) {
                      *(float *)(unaff_x19 + 200) =
                           fVar45 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
                    }
                  }
                  fVar45 = *(float *)(unaff_x19 + 0x56);
                  fVar43 = 0.0;
                  if (fVar45 != 0.0) {
                    fVar43 = (float)FUN_0396af68(&stack0x00001050,0);
                    fVar63 = (float)FUN_0396af78(&stack0x00001050,0);
                    fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (fVar45 * 0.5 - fVar51 * (fVar43 * 0.5 + fVar63));
                    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar43;
                  }
                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
                    lVar23 = *in_stack_00000168;
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar18 = FUN_0391f968(lVar23,0,0);
                    fVar63 = 0.0;
                    if ((uVar18 & 1) != 0) {
                      lVar23 = *in_stack_00000168;
                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      if (lVar23 == 0) goto LAB_036afadc;
                      uVar18 = FUN_038ffa04(lVar23,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
                      fVar63 = 0.0;
                      if ((uVar18 & 1) != 0) {
                        lVar23 = *in_stack_00000168;
                        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        if (lVar23 == 0) goto LAB_036afadc;
                        fVar45 = (float)FUN_03900954(lVar23,*(undefined4 *)
                                                             (*(long *)(*(long *)puVar7 + 0xb8) +
                                                             0x54),0);
                        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0))
                        goto LAB_036afadc;
                        fVar59 = *(float *)(*in_stack_00000178 + 0x1b0);
                        fVar63 = (float)FUN_03900954(*in_stack_00000168,
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
                        fVar63 = fVar63 * fVar45 * fVar59 * 0.25;
                        if (fVar45 < fStack0000000000000174 + fVar63) {
                          fStack0000000000000174 = fVar45 - fVar63;
                        }
                      }
                    }
                    if (*in_stack_00000178 == 0) goto LAB_036afadc;
                    fStack00000000000000e4 = *(float *)(*in_stack_00000178 + 0x1b4);
                  }
                  else {
                    lVar23 = *in_stack_00000168;
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar18 = FUN_0391f968(lVar23,0,0);
                    fStack00000000000000e4 = 0.0;
                    if ((uVar18 & 1) != 0) {
                      lVar23 = *in_stack_00000168;
                      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      if (lVar23 == 0) goto LAB_036afadc;
                      uVar18 = FUN_038ffa04(lVar23,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar7 + 0xb8) + 0x54),0);
                      if ((uVar18 & 1) != 0) {
                        lVar23 = *in_stack_00000168;
                        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        if (lVar23 == 0) goto LAB_036afadc;
                        uVar18 = FUN_038ffa04(lVar23,*(undefined4 *)
                                                      (*(long *)(*(long *)puVar7 + 0xb8) + 0xcc),0);
                        if ((uVar18 & 1) != 0) {
                          lVar23 = *in_stack_00000168;
                          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          if (lVar23 != 0) {
                            fVar45 = (float)FUN_03900954(lVar23,*(undefined4 *)
                                                                 (*(long *)(*(long *)puVar7 + 0xb8)
                                                                 + 0x54),0);
                            if ((*in_stack_00000178 != 0) && (*in_stack_00000168 != 0)) {
                              fVar59 = *(float *)(*in_stack_00000178 + 0x1a8);
                              fVar63 = (float)FUN_03900954(*in_stack_00000168,
                                                           *(undefined4 *)
                                                            (*(long *)(*(long *)puVar7 + 0xb8) +
                                                            0xcc),0);
                              fVar63 = fVar63 * fVar45 * fVar59 * 0.25;
                              if (fVar45 < fStack0000000000000174 + fVar63) {
                                fStack0000000000000174 = fVar45 - fVar63;
                              }
                              goto LAB_036aa254;
                            }
                          }
                          goto LAB_036afadc;
                        }
                      }
                    }
                    fVar63 = 0.0;
                  }
LAB_036aa254:
                  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
                  fVar45 = (float)FUN_0396af78(&stack0x00001050,0);
                  fStack0000000000000124 =
                       fStack0000000000000124 +
                       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                       fVar51 * (fVar67 + ((fVar45 - fStack0000000000000174) - fVar63));
                  fVar67 = (float)FUN_0396af80(&stack0x00001050,0);
                  fVar59 = *(float *)((long)unaff_x19 + 0x61c) +
                           ((fVar46 + fVar51 * (fVar62 + fStack0000000000000174 + fVar67)) -
                           *(float *)(unaff_x19 + 0x9b));
                  fVar67 = (float)FUN_0396af70(&stack0x00001050,0);
                  fVar60 = fVar59 - fVar51 * (fStack0000000000000174 + fStack0000000000000174 +
                                             fVar67);
                  fVar67 = (float)FUN_0396af68(&stack0x00001050,0);
                  fVar45 = fStack0000000000000124 +
                           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                           fVar51 * (fVar63 + fVar63 +
                                    fStack0000000000000174 + fStack0000000000000174 + fVar67);
                  fVar67 = fStack0000000000000124;
                  fVar62 = fVar45;
                  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (unaff_w26 == 0)) &&
                     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
                    fVar48 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
                    fVar67 = (float)FUN_0396af80(&stack0x00001050,0);
                    fVar58 = fVar48 * fVar51 * (fVar63 + fStack0000000000000174 + fVar67);
                    fVar67 = (float)FUN_0396af80(&stack0x00001050,0);
                    fVar62 = (float)FUN_0396af70(&stack0x00001050,0);
                    fVar59 = fVar59 + 0.0;
                    fVar60 = fVar60 + 0.0;
                    fVar65 = fStack0000000000000124 + fVar58;
                    fVar48 = fVar48 * fVar51 * (((fVar67 - fVar62) - fStack0000000000000174) -
                                               fVar63);
                    fVar62 = fVar45 + fVar48;
                    fVar49 = (fVar58 - fVar48) * 0.5;
                    fStack0000000000000124 = (fStack0000000000000124 + fVar48) - fVar49;
                    fVar45 = (fVar45 + fVar58) - fVar49;
                    fVar67 = fVar65 - fVar49;
                    fVar62 = fVar62 - fVar49;
                  }
                  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                    fVar48 = 0.0;
                    fVar49 = 0.0;
                    fVar58 = 0.0;
                    fStack0000000000000110 = 0.0;
                    fVar65 = fVar60;
                    fStack0000000000000114 = fVar59;
                  }
                  else {
                    thunk_FUN_03910e24(_fStack0000000000000080,0);
                    fVar64 = (fVar60 + fVar59) * 0.5;
                    fVar61 = (fVar45 + fStack0000000000000124) * 0.5;
                    fVar59 = fVar59 - fVar64;
                    fStack0000000000000110 = 0.0;
                    fVar52 = fVar59;
                    fVar67 = (float)FUN_03911ddc(fVar67 - fVar61,_fStack0000000000000080,0);
                    fVar67 = fVar61 + fVar67;
                    fStack0000000000000110 = fStack0000000000000110 + 0.0;
                    fVar60 = fVar60 - fVar64;
                    fVar48 = 0.0;
                    fVar65 = fVar60;
                    fStack0000000000000124 =
                         (float)FUN_03911ddc(fStack0000000000000124 - fVar61,_fStack0000000000000080
                                             ,0);
                    fStack0000000000000124 = fVar61 + fStack0000000000000124;
                    fVar48 = fVar48 + 0.0;
                    fVar58 = 0.0;
                    fVar45 = (float)FUN_03911ddc(fVar45 - fVar61,_fStack0000000000000080,0);
                    fVar45 = fVar61 + fVar45;
                    fVar59 = fVar64 + fVar59;
                    fVar58 = fVar58 + 0.0;
                    fVar49 = 0.0;
                    fVar62 = (float)FUN_03911ddc(fVar62 - fVar61,_fStack0000000000000080,0);
                    fVar62 = fVar61 + fVar62;
                    fVar60 = fVar64 + fVar60;
                    fVar49 = fVar49 + 0.0;
                    fVar65 = fVar64 + fVar65;
                    fStack0000000000000114 = fVar64 + fVar52;
                  }
                  if (*unaff_x28 == 0) goto LAB_036afadc;
                  lVar23 = *(long *)(*unaff_x28 + 0x38);
                  uVar18 = (ulong)(uint)fVar51;
                  if (lVar23 == 0) goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar23 + 0x11c) = fStack0000000000000124;
                  *(float *)(lVar23 + 0x120) = fVar65;
                  *(float *)(lVar23 + 0x124) = fVar48;
                  if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar23 + 0x110) = fVar67;
                  *(float *)(lVar23 + 0x114) = fStack0000000000000114;
                  *(float *)(lVar23 + 0x118) = fStack0000000000000110;
                  if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar23 + 0x128) = fVar45;
                  *(float *)(lVar23 + 300) = fVar59;
                  *(float *)(lVar23 + 0x130) = fVar58;
                  if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
                  *(float *)(lVar23 + 0x134) = fVar62;
                  *(float *)(lVar23 + 0x138) = fVar60;
                  *(float *)(lVar23 + 0x13c) = fVar49;
                  if ((*unaff_x28 == 0) || (lVar23 = *(long *)(*unaff_x28 + 0x38), lVar23 == 0))
                  goto LAB_036afadc;
                  uVar47 = *unaff_x20;
                  lVar26 = (long)(int)uVar47;
                  if (*(uint *)(lVar23 + 0x18) <= uVar47) goto LAB_036afbe8;
                  lVar27 = lVar23 + lVar26 * unaff_x24;
                  *(int *)(lVar27 + 0x140) = (int)unaff_x19[200];
                  fVar62 = *(float *)(unaff_x19 + 0x9b);
                  uVar53 = (ulong)(uint)fVar62;
                  fVar67 = *(float *)((long)unaff_x19 + 0x61c);
                  *(float *)(lVar27 + 0x15c) =
                       (fVar45 - fStack0000000000000124) / (fStack0000000000000114 - fVar65);
                  *(float *)(lVar27 + 0x14c) = (fVar46 - fVar62) + fVar67;
                  fVar44 = fVar44 * fVar51;
                  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                    fVar44 = fVar44 / in_stack_00000150;
                    fVar42 = (fVar42 * fVar51) / in_stack_00000150;
                  }
                  else {
                    fVar42 = fVar42 * fVar51;
                  }
                  uVar55 = *(uint *)(unaff_x19 + 0x93);
                  if ((uVar11 == 0) || (uVar47 == uVar55)) {
                    fVar42 = fVar67 + fVar42;
                    fVar44 = fVar67 + fVar44;
                    fVar59 = fVar42;
                    fVar45 = fVar44;
                    if (fVar67 != 0.0) {
                      fVar45 = (fVar44 - fVar67) / *(float *)((long)unaff_x19 + 0x404);
                      fVar59 = (fVar42 - fVar67) / *(float *)((long)unaff_x19 + 0x404);
                      if (fVar45 <= fVar44) {
                        fVar45 = fVar44;
                      }
                      if (fVar42 <= fVar59) {
                        fVar59 = fVar42;
                      }
                    }
                    lVar23 = lVar23 + lVar26 * unaff_x24;
                    fVar67 = fVar45;
                    if (fVar45 <= *(float *)(unaff_x19 + 0x99)) {
                      fVar67 = *(float *)(unaff_x19 + 0x99);
                    }
                    fVar46 = fVar59;
                    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar59) {
                      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
                    }
                    *(float *)((long)unaff_x19 + 0x4cc) = fVar46;
                    *(float *)(unaff_x19 + 0x99) = fVar67;
                    *(float *)(lVar23 + 0x154) = fVar45;
                    *(float *)(lVar23 + 0x158) = fVar59;
                    *(float *)(lVar23 + 0x148) = fVar44 - fVar62;
                    *(float *)(unaff_x19 + 0x98) = fVar44 - fVar62;
                    *(float *)(lVar23 + 0x150) = fVar42 - fVar62;
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar42 - fVar62;
                    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0'))
                    {
                      *(float *)(unaff_x19 + 0x97) = fVar67;
                      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
                      fVar67 = *(float *)((long)unaff_x19 + 0x4bc);
                      fVar42 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
                      in_stack_00000150 = (fVar51 * fVar42) / in_stack_00000150;
                      uVar53 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                      if (fVar67 <= in_stack_00000150) {
                        fVar67 = in_stack_00000150;
                      }
                      *(float *)((long)unaff_x19 + 0x4bc) = fVar67;
                    }
                    if ((float)uVar53 == 0.0) {
                      fVar67 = *(float *)(in_stack_00000088 + 0x208);
                      if (*(float *)(in_stack_00000088 + 0x208) <= fVar44) {
                        fVar67 = fVar44;
                      }
                      *(float *)(in_stack_00000088 + 0x208) = fVar67;
                    }
                  }
                  else {
                    fVar67 = *(float *)(unaff_x19 + 0x99);
                    lVar23 = lVar23 + lVar26 * unaff_x24;
                    *(float *)(lVar23 + 0x154) = fVar67;
                    fVar42 = *(float *)((long)unaff_x19 + 0x4cc);
                    fVar67 = fVar67 - fVar62;
                    *(float *)(lVar23 + 0x148) = fVar67;
                    *(float *)(lVar23 + 0x158) = fVar42;
                    *(float *)(unaff_x19 + 0x98) = fVar67;
                    fVar42 = fVar42 - fVar62;
                    *(float *)(lVar23 + 0x150) = fVar42;
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar42;
                  }
                  lVar23 = *unaff_x28;
                  if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0))
                  goto LAB_036afadc;
                  uVar13 = *unaff_x20;
                  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_036afbe8;
                  lVar26 = lVar26 + (long)(int)uVar13 * unaff_x24;
                  *(undefined1 *)(lVar26 + 0x194) = 0;
                  uVar30 = *(uint *)(unaff_x19 + 0x4f);
                  if ((in_stack_0000109c == 9) ||
                     (((((uVar11 == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b))
                       && (in_stack_0000109c != 0xad)) ||
                      (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) != 0 ||
                       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
                    *(undefined1 *)(lVar26 + 0x194) = 1;
                    pfVar28 = _fStack00000000000000a8;
                    pfVar31 = _fStack00000000000000b0;
                    if (unaff_w23 != 0) {
                      lVar23 = *(long *)(lVar23 + 0x50);
                      if (lVar23 == 0) goto LAB_036afadc;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_036afbe8;
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      pfVar31 = (float *)(lVar23 + 0x60);
                      pfVar28 = (float *)(lVar23 + 100);
                    }
                    fVar42 = *pfVar31;
                    fVar62 = *pfVar28;
                    fVar67 = *(float *)(unaff_x19 + 0x6c);
                    fVar45 = *(float *)(unaff_x19 + 200);
                    in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar42) - fVar62;
                    bVar9 = true;
                    if ((fVar67 <= in_stack_00000108._4_4_) && (bVar9 = false, !NAN(fVar67))) {
                      bVar9 = fVar67 == -1.0;
                    }
                    if (!bVar9) {
                      in_stack_00000108._4_4_ = fVar67;
                    }
                    fVar67 = 0.0;
                    if ((char)unaff_x19[0x1e] == '\0') {
                      fVar67 = (float)FUN_0396af88(&stack0x00001050,0);
                      uVar53 = (ulong)*(uint *)(unaff_x19 + 0x9b);
                    }
                    fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
                    fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
                    if (in_stack_0000109c != 0xad) {
                      fVar57 = fVar51;
                    }
                    fVar60 = (float)uVar53;
                    fVar46 = 0.0;
                    if ((0.0 < fVar60) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')
                       ) {
                      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                    }
                    uVar13 = *unaff_x20;
                    fVar46 = (*(float *)(unaff_x19 + 0x97) - (fVar59 - fVar60)) + fVar46;
                    if (fStack00000000000000c8 < fVar46) {
                      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                        *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                      }
                      puVar7 = PTR_DAT_03d9c920;
                      in_stack_00001088 = DAT_00b92750;
                      if ((char)unaff_x19[0x47] != '\0') {
                        fVar48 = *(float *)(unaff_x19 + 0x59);
                        if (((fVar48 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar60)) &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar57 = *(float *)((long)unaff_x19 + 700) +
                                   ((in_stack_00000018._4_4_ - fVar46) / (float)(int)unaff_x19[0x95]
                                   ) / in_stack_00000058._4_4_;
                          if (fVar57 <= fVar48) {
                            fVar57 = fVar48;
                          }
                          goto LAB_036ad184;
                        }
                        fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
                        fVar46 = *(float *)(unaff_x19 + 0x4a);
                        uVar53 = (ulong)(uint)fVar46;
                        if ((fVar46 < fVar60) &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar57 = (fVar60 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                          if (fVar57 <= DAT_00b55428) {
                            fVar57 = DAT_00b55428;
                          }
                          fVar67 = (fVar60 - fVar57) * 20.0 + 0.5;
                          *(float *)((long)unaff_x19 + 0x23c) = fVar60;
                          fVar57 = DAT_00b556b4;
                          if (fVar67 != INFINITY) {
                            fVar57 = (float)(int)fVar67 / 20.0;
                          }
                          if (fVar57 <= fVar46) {
                            fVar57 = fVar46;
                          }
                          goto LAB_036acc94;
                        }
                      }
                      switch((int)unaff_x19[0x5c]) {
                      case 1:
                        lVar23 = *(long *)PTR_DAT_03d9c920;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar23 = *(long *)puVar7;
                        }
                        lVar26 = *(long *)(lVar23 + 0xb8);
                        if (*(int *)(lVar26 + 0x1580) == 0) {
LAB_036acbbc:
                          in_stack_00001088 = DAT_00b92750;
                          unaff_x20[0] = 0;
                          unaff_x20[1] = 0;
                          in_stack_00001068 = 0xffffffff;
                          goto LAB_036a9250;
                        }
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                        }
                        FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,
                                     *(undefined8 *)PTR_DAT_03d9c8c0);
                        memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
LAB_036ab014:
                        iVar14 = FUN_036ecf20();
LAB_036ab020:
                        iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
                        *(int *)((long)unaff_x19 + 0x494) = iVar15;
                        in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
                        in_stack_00001068 = iVar14 - 1;
                        in_stack_00001088 = CONCAT44(0x2026,iVar15);
                        goto LAB_036a9250;
                      default:
                        goto switchD_036aaa24_caseD_2;
                      case 3:
                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
LAB_036aabc0:
                        in_stack_00001068 = FUN_036ecf20();
                        break;
                      case 5:
                        if ((uVar13 == 0) || ((int)in_stack_00001068 < 0)) {
                          *unaff_x20 = 0;
                          in_stack_00001068 = 0xffffffff;
                          goto LAB_036a9250;
                        }
                        fVar57 = *(float *)(unaff_x19 + 0x99);
                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        in_stack_00001068 = FUN_036ecf20();
                        if (fVar57 - fVar59 <= fStack00000000000000c8) {
                          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                          *(undefined4 *)(unaff_x19 + 0x93) =
                               *(undefined4 *)((long)unaff_x19 + 0x494);
                          uVar53 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
                          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                          lVar23 = NEON_rev64(uVar53,4);
                          unaff_x19[0x99] = lVar23;
                          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                          *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
                          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                          in_stack_00001088 = uVar19;
                          goto LAB_036a9250;
                        }
                        break;
                      case 6:
                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        in_stack_00001068 = FUN_036ecf20();
                        lVar23 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)
                                      Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                    + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)
                                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                            );
                        }
                        uVar18 = FUN_0391f968(lVar23,0,0);
                        if ((uVar18 & 1) != 0) {
                          plVar41 = (long *)unaff_x19[0x5d];
                          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                          if (plVar41 == (long *)0x0) goto LAB_036afadc;
                          (**(code **)(*plVar41 + 0x558))
                                    (plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
                          lVar23 = unaff_x19[0x5d];
                          if (lVar23 == 0) goto LAB_036afadc;
                          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                          FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                          plVar41 = (long *)unaff_x19[0x5d];
                          if (plVar41 == (long *)0x0) goto LAB_036afadc;
                          (**(code **)(*plVar41 + 0x7d8))
                                    (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                        }
                      }
LAB_036aad90:
                      in_stack_00001088 = CONCAT44(3,uVar13);
                      goto LAB_036a9250;
                    }
switchD_036aaa24_caseD_2:
                    puVar7 = PTR_DAT_03d9c920;
                    fVar59 = 1.0 - fVar44;
                    uVar53 = (ulong)(uint)fVar59;
                    fVar67 = ABS(fVar45) + fVar67 * fVar59 * fVar57;
                    fVar57 = 1.0;
                    if ((uVar30 & 0x18) != 0) {
                      fVar57 = DAT_00b55374;
                    }
                    fVar45 = fVar57 * in_stack_00000108._4_4_;
                    if (fVar45 < fVar67) {
                      if (((char)unaff_x19[0x5b] == '\0') || (uVar13 == *(uint *)(unaff_x19 + 0x93))
                         ) {
                        if (((char)unaff_x19[0x47] != '\0') &&
                           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                          if (fVar44 < fVar45) {
                            fVar42 = fVar67 / fVar59;
                            if (fVar44 <= 0.0) {
                              fVar42 = fVar67;
                            }
                            fVar44 = fVar44 + (fVar67 - fVar57 * (in_stack_00000108._4_4_ +
                                                                 DAT_00b5556c)) / fVar42;
                            goto LAB_036afb6c;
                          }
                          fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
                          uVar53 = (ulong)(uint)fVar44;
                          fVar45 = *(float *)(unaff_x19 + 0x4a);
                          if (fVar44 <= fVar45) goto LAB_036aab40;
LAB_036afae0:
                          fVar57 = (fVar44 - *(float *)(unaff_x19 + 0x48)) * 0.5;
                          if (fVar57 <= DAT_00b55428) {
                            fVar57 = DAT_00b55428;
                          }
                          *(float *)((long)unaff_x19 + 0x23c) = fVar44;
                          fVar67 = (fVar44 - fVar57) * 20.0 + 0.5;
                          fVar57 = DAT_00b556b4;
                          if (fVar67 != INFINITY) {
                            fVar57 = (float)(int)fVar67 / 20.0;
                          }
                          if (fVar57 <= fVar45) {
                            fVar57 = fVar45;
                          }
LAB_036acc94:
                          *(float *)((long)unaff_x19 + 0x1e4) = fVar57;
                          return;
                        }
LAB_036aab40:
                        iVar14 = (int)unaff_x19[0x5c];
                        if (iVar14 == 1) {
                          lVar23 = *(long *)PTR_DAT_03d9c920;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                            lVar23 = *(long *)puVar7;
                          }
                          lVar26 = *(long *)(lVar23 + 0xb8);
                          if (*(int *)(lVar26 + 0x1580) == 0) goto LAB_036acbbc;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                            lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                          }
                          FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,
                                       *(undefined8 *)PTR_DAT_03d9c8c0);
                          memcpy(&stack0x00000550,&stack0x000010a0,0x378);
                          goto LAB_036ab014;
                        }
                        if (iVar14 != 6) {
                          if (iVar14 == 3) {
                            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            goto LAB_036aabc0;
                          }
                          goto LAB_036ab54c;
                        }
                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        in_stack_00001068 = FUN_036ecf20();
                        lVar23 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)
                                      Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                    + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)
                                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                            );
                        }
                        uVar18 = FUN_0391f968(lVar23,0,0);
                        if ((uVar18 & 1) != 0) {
                          plVar41 = (long *)unaff_x19[0x5d];
                          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                          if (plVar41 == (long *)0x0) goto LAB_036afadc;
                          (**(code **)(*plVar41 + 0x558))
                                    (plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
                          lVar23 = unaff_x19[0x5d];
                          if (lVar23 == 0) goto LAB_036afadc;
                          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                          FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                          plVar41 = (long *)unaff_x19[0x5d];
                          if (plVar41 == (long *)0x0) goto LAB_036afadc;
                          (**(code **)(*plVar41 + 0x7d8))
                                    (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                        }
LAB_036ab13c:
                        in_stack_00001088 = CONCAT44(3,*unaff_x20);
                        goto LAB_036a9250;
                      }
                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      in_stack_00001068 = FUN_036ecf20();
                      if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                        lVar23 = *in_stack_00000190;
                        if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0))
                        goto LAB_036afadc;
                        if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                        fVar45 = *(float *)(unaff_x19 + 0x9b);
                        fVar44 = 0.0;
                        if ((0.0 < fVar45) &&
                           (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                          fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                        }
                        fVar44 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                                 *(float *)(lVar26 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                                 (fVar44 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                 in_stack_00000058._4_4_ *
                                 (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
                      }
                      else {
                        lVar23 = unaff_x19[0x6d];
                        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
                        if (lVar23 == 0) goto LAB_036afadc;
                        fVar45 = *(float *)(unaff_x19 + 0x9b);
                        fVar44 = *(float *)(unaff_x19 + 0x58) +
                                 in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
                      }
                      puVar7 = PTR_DAT_03d9c920;
                      lVar23 = *(long *)(lVar23 + 0x38);
                      if (lVar23 != 0) {
                        uVar33 = *(uint *)((long)unaff_x19 + 0x494);
                        if ((*(uint *)(lVar23 + 0x18) <= uVar33) ||
                           (uVar5 = uVar33 - 1, *(uint *)(lVar23 + 0x18) <= uVar5))
                        goto LAB_036afbe8;
                        uVar53 = (ulong)(uint)(fVar44 + *(float *)(unaff_x19 + 0x97));
                        fVar59 = (fVar44 + *(float *)(unaff_x19 + 0x97) + fVar45) -
                                 *(float *)(lVar23 + (long)(int)uVar33 * unaff_x24 + 0x158);
                        if (((bStack000000000000007c & 1) == 0 &&
                             *(short *)(lVar23 + (long)(int)uVar5 * (long)iVar12 + 0x20) == 0xad) &&
                           ((fVar59 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
                          bStack000000000000007c = 0;
                          in_stack_00001088 = CONCAT44(0x2d,uVar5);
                          *unaff_x20 = uVar5;
                          in_stack_00001068 = in_stack_00001068 - 1;
                          goto LAB_036a9250;
                        }
                        if (*(short *)(lVar23 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad) {
                          bStack000000000000007c = 1;
                          in_stack_00001088 = uVar19;
                          goto LAB_036a9250;
                        }
                        if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
                          fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
                          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                          if ((fVar45 <= fVar44) ||
                             ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
                            fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
                            uVar53 = (ulong)(uint)fVar44;
                            fVar45 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar45 < fVar44) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_036afae0;
                            goto LAB_036ab340;
                          }
LAB_036afb7c:
                          fVar42 = fVar67;
                          if (0.0 < fVar44) {
                            fVar42 = fVar67 / (1.0 - fVar44);
                          }
                          fVar44 = fVar44 + (fVar67 - fVar57 * (in_stack_00000108._4_4_ +
                                                               DAT_00b5556c)) / fVar42;
LAB_036afb6c:
                          if (fVar45 <= fVar44) {
                            fVar44 = fVar45;
                          }
                          *(float *)((long)unaff_x19 + 0x2d4) = fVar44;
                          return;
                        }
LAB_036ab340:
                        lVar23 = *(long *)PTR_DAT_03d9c920;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar23 = *(long *)puVar7;
                        }
                        iVar14 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
                        if (((iVar14 != iStack0000000000000034) && (iVar14 != -1)) &&
                           (((bStack0000000000000078 ^ 1) & 1) == 0)) {
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          in_stack_00001068 = FUN_036ecf20();
                          if ((unaff_x19[0x6d] == 0) ||
                             (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
                          goto LAB_036afadc;
                          uVar33 = *unaff_x20 - 1;
                          if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_036afbe8;
                          iStack0000000000000034 = iVar14;
                          if (*(short *)(lVar23 + (long)(int)uVar33 * (long)iVar12 + 0x20) == 0xad)
                          {
                            bStack000000000000007c = 0;
                            *unaff_x20 = uVar33;
                            in_stack_00001068 = in_stack_00001068 - 1;
                            in_stack_00001088 = CONCAT44(0x2d,uVar33);
                            goto LAB_036a9250;
                          }
                        }
                        if (fVar59 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
                          FUN_036ed998(in_stack_00000058._4_4_,uVar18,in_stack_000000f0,
                                       *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                       fStack00000000000000e4,fStack000000000000013c,
                                       in_stack_00000108._4_4_,in_stack_00000050);
                          uVar53 = uVar18;
                        }
                        else {
                          if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                            *(undefined4 *)((long)unaff_x19 + 0x2e4) =
                                 *(undefined4 *)((long)unaff_x19 + 0x494);
                          }
                          fVar45 = fStack00000000000000c8;
                          if ((char)unaff_x19[0x47] != '\0') {
                            fVar45 = *(float *)(unaff_x19 + 0x59);
                            if ((fVar45 < *(float *)((long)unaff_x19 + 700)) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                              fVar57 = *(float *)((long)unaff_x19 + 700) +
                                       ((in_stack_00000018._4_4_ - fVar59) /
                                       (float)((int)unaff_x19[0x95] + 1)) / in_stack_00000058._4_4_;
                              if (fVar57 <= fVar45) {
                                fVar57 = fVar45;
                              }
LAB_036ad184:
                              *(float *)((long)unaff_x19 + 700) = fVar57;
                              return;
                            }
                            fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
                            fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
                            if ((fVar44 < fVar45) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_036afb7c;
                            fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
                            uVar53 = (ulong)(uint)fVar44;
                            fVar45 = *(float *)(unaff_x19 + 0x4a);
                            if ((fVar45 < fVar44) &&
                               (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
                            goto LAB_036afae0;
                          }
                          switch((int)unaff_x19[0x5c]) {
                          case 0:
                          case 2:
                          case 4:
                            goto switchD_036ab4e4_caseD_0;
                          case 1:
                            lVar23 = *(long *)PTR_DAT_03d9c920;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                              lVar23 = *(long *)PTR_DAT_03d9c920;
                            }
                            lVar26 = *(long *)(lVar23 + 0xb8);
                            if (*(int *)(lVar26 + 0x1580) == 0) {
                              bStack000000000000007c = 0;
                              goto LAB_036acbbc;
                            }
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                              lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                            }
                            FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,
                                         *(undefined8 *)PTR_DAT_03d9c8c0);
                            memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
                            iVar14 = FUN_036ecf20();
                            bStack000000000000007c = 0;
                            goto LAB_036ab020;
                          case 3:
                            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            in_stack_00001068 = FUN_036ecf20();
                            bStack000000000000007c = 0;
                            goto LAB_036aad90;
                          case 5:
                            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
                            FUN_036ed998(in_stack_00000058._4_4_,uVar18,in_stack_000000f0,
                                         *(undefined4 *)((long)unaff_x19 + 0x2fc),
                                         fStack00000000000000e4,fStack000000000000013c,
                                         in_stack_00000108._4_4_,in_stack_00000050);
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
                            *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
                            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                            uVar53 = uVar18;
                            break;
                          case 6:
                            lVar23 = unaff_x19[0x5d];
                            if (*(int *)(*(long *)
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                        + 0xe0) == 0) {
                              thunk_FUN_01ac7298();
                            }
                            uVar18 = FUN_0391f968(lVar23,0,0);
                            if ((uVar18 & 1) != 0) {
                              plVar41 = (long *)unaff_x19[0x5d];
                              uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                              if (plVar41 == (long *)0x0) goto LAB_036afadc;
                              (**(code **)(*plVar41 + 0x558))
                                        (plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
                              lVar23 = unaff_x19[0x5d];
                              if (lVar23 == 0) goto LAB_036afadc;
                              *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                              FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                              plVar41 = (long *)unaff_x19[0x5d];
                              if (plVar41 == (long *)0x0) goto LAB_036afadc;
                              (**(code **)(*plVar41 + 0x7d8))
                                        (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                            }
                            bStack000000000000007c = 0;
                            goto LAB_036ab13c;
                          default:
                            bStack000000000000007c = 0;
                            goto LAB_036ab54c;
                          }
                        }
                        bStack0000000000000078 = 1;
                        bStack000000000000007c = 0;
                        in_stack_00000068 = 1;
                        in_stack_00001088 = uVar19;
                        goto LAB_036a9250;
                      }
                      goto LAB_036afadc;
                    }
LAB_036ab54c:
                    if (in_stack_0000109c != 0xad) {
                      if (in_stack_0000109c != 9) {
                        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
                          (**(code **)(*unaff_x19 + 0x8c8))(fVar45,fVar63);
                        }
                        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
                          (**(code **)(*unaff_x19 + 0x8b8))(fStack0000000000000174);
                        }
                        uVar13 = *unaff_x20;
                        if ((in_stack_00000068 & 1) != 0) {
                          *(uint *)(in_stack_00000088 + 0x1f0) = uVar13;
                        }
                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
                        if ((unaff_x19[0x6d] != 0) &&
                           (lVar23 = *(long *)(unaff_x19[0x6d] + 0x50), lVar23 != 0)) {
                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar23 + 0x18)) {
                            lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            in_stack_00000068 = 0;
                            *(float *)(lVar23 + 0x60) = fVar42;
                            *(float *)(lVar23 + 100) = fVar62;
                            goto LAB_036ab6c0;
                          }
                          goto LAB_036afbe8;
                        }
                        goto LAB_036afadc;
                      }
                      lVar23 = *in_stack_00000190;
                      if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0))
                      goto LAB_036afadc;
                      uVar13 = *unaff_x20;
                      if (uVar13 < *(uint *)(lVar26 + 0x18)) {
                        *(undefined1 *)(lVar26 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
                        *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
                        lVar26 = *(long *)(lVar23 + 0x50);
                        if (lVar26 != 0) {
                          if (*(uint *)(unaff_x19 + 0x95) < *(uint *)(lVar26 + 0x18)) {
                            lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                            *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                            goto LAB_036ab5c8;
                          }
                          goto LAB_036afbe8;
                        }
                        goto LAB_036afadc;
                      }
                      goto LAB_036afbe8;
                    }
                    if ((*in_stack_00000190 == 0) ||
                       (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
                    goto LAB_036afadc;
                    if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                    *(undefined1 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
                  }
                  else {
                    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
                      fVar67 = (float)uVar53;
                      fVar57 = 0.0;
                      if ((0.0 < fVar67) &&
                         (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
                        fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                      }
                      uVar53 = _fStack00000000000000c8 & 0xffffffff;
                      if (fStack00000000000000c8 <
                          (*(float *)(unaff_x19 + 0x97) -
                          (*(float *)((long)unaff_x19 + 0x4cc) - fVar67)) + fVar57) {
                        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
                        }
                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        in_stack_00001068 = FUN_036ecf20();
                        lVar23 = unaff_x19[0x5d];
                        if (*(int *)(*(long *)
                                      Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                    + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)
                                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                            );
                        }
                        uVar18 = FUN_0391f968(lVar23,0,0);
                        if ((uVar18 & 1) != 0) {
                          plVar41 = (long *)unaff_x19[0x5d];
                          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
                          if (plVar41 != (long *)0x0) {
                            (**(code **)(*plVar41 + 0x558))
                                      (plVar41,uVar19,*(undefined8 *)(*plVar41 + 0x560));
                            lVar23 = unaff_x19[0x5d];
                            if (lVar23 != 0) {
                              *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
                              FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
                              plVar41 = (long *)unaff_x19[0x5d];
                              if (plVar41 != (long *)0x0) {
                                (**(code **)(*plVar41 + 0x7d8))
                                          (plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
                                *(undefined1 *)(unaff_x19 + 0x5f) = 1;
                                goto LAB_036aad90;
                              }
                            }
                          }
                          goto LAB_036afadc;
                        }
                        goto LAB_036aad90;
                      }
                    }
                    if ((((in_stack_0000109c - 0x2007 < 0x23) &&
                         ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x600000001U) != 0))
                        || (in_stack_0000109c - 10 < 2)) || (in_stack_0000109c == 0xa0)) {
LAB_036ab188:
                      if (((in_stack_0000109c != 0xad) && (in_stack_0000109c != 0x200b)) &&
                         (in_stack_0000109c != 0x2060)) {
                        lVar23 = *in_stack_00000190;
                        if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x50), lVar26 == 0))
                        goto LAB_036afadc;
                        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                        goto LAB_036afbe8;
                        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                        *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
                        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                      }
                    }
                    else {
                      if (*(int *)(*(long *)
                                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar18 = FUN_02fdea78(in_stack_0000109c,0);
                      if ((uVar18 & 1) != 0) goto LAB_036ab188;
                    }
                    if (in_stack_0000109c == 0xa0) {
                      if ((*in_stack_00000190 == 0) ||
                         (lVar23 = *(long *)(*in_stack_00000190 + 0x50), lVar23 == 0))
                      goto LAB_036afadc;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_036afbe8;
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
                      *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                    }
                  }
LAB_036ab6c0:
                  if (((int)unaff_x19[0x5c] == 1) &&
                     ((in_stack_0000109c == 0x2d || (unaff_w23 != 1)))) {
                    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                    fVar57 = *(float *)(unaff_x19 + 0x3d);
                    iVar14 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
                    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                    fVar42 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
                    lVar23 = unaff_x19[0xca];
                    fVar67 = fStack00000000000000a0;
                    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                      fVar67 = 1.0;
                    }
                    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_036afadc;
                    fVar45 = *(float *)((long)unaff_x19 + 0x404);
                    fVar44 = *(float *)(lVar23 + 0x2c);
                    fVar62 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
                    fVar63 = *_fStack00000000000000b0;
                    fVar62 = fVar45 * (fVar57 / (float)iVar14) * fVar42 * fVar67 * fVar44 * fVar62;
                    fVar57 = *_fStack00000000000000a8;
                    if ((in_stack_0000109c == 10) &&
                       (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
                      if ((*in_stack_00000190 == 0) ||
                         (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
                      goto LAB_036afadc;
                      uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
                      if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_036afbe8;
                      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                      fVar67 = *(float *)(lVar23 + (long)(int)uVar13 * (long)iVar12 + 0x60);
                      iVar14 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
                      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
                      fVar45 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
                      lVar23 = unaff_x19[0xca];
                      fVar42 = fStack00000000000000a0;
                      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
                        fVar42 = 1.0;
                      }
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_036afadc;
                      fVar44 = *(float *)((long)unaff_x19 + 0x404);
                      fVar59 = *(float *)(lVar23 + 0x2c);
                      fVar62 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
                      if ((*in_stack_00000190 == 0) ||
                         (lVar23 = *(long *)(*in_stack_00000190 + 0x50), lVar23 == 0))
                      goto LAB_036afadc;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95))
                      goto LAB_036afbe8;
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                      fVar63 = *(float *)(lVar23 + 0x60);
                      fVar57 = *(float *)(lVar23 + 100);
                      fVar62 = fVar44 * (fVar67 / (float)iVar14) * fVar45 * fVar42 * fVar59 * fVar62
                      ;
                    }
                    fVar45 = *(float *)(unaff_x19 + 0x9b);
                    fVar67 = 0.0;
                    fVar42 = 0.0;
                    if ((0.0 < fVar45) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')
                       ) {
                      fVar42 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
                    }
                    fVar59 = *(float *)(unaff_x19 + 0x97);
                    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
                    fVar44 = *(float *)(unaff_x19 + 200);
                    if ((char)unaff_x19[0x1e] == '\0') {
                      if ((unaff_x19[0xca] == 0) ||
                         (lVar23 = *(long *)(unaff_x19[0xca] + 0x20), lVar23 == 0))
                      goto LAB_036afadc;
                      FUN_0396b140(&stack0x000010a0,lVar23,0);
                      fVar67 = (float)FUN_0396af88(&stack0x00000fc0,0);
                    }
                    puVar7 = PTR_DAT_03d9c920;
                    fVar60 = *(float *)(unaff_x19 + 0x6c);
                    fVar57 = (fStack00000000000000a4 - fVar63) - fVar57;
                    bVar9 = true;
                    if ((fVar60 <= fVar57) && (bVar9 = false, !NAN(fVar60))) {
                      bVar9 = fVar60 == -1.0;
                    }
                    if (!bVar9) {
                      fVar57 = fVar60;
                    }
                    fVar63 = 1.0;
                    if ((uVar30 & 0x18) != 0) {
                      fVar63 = DAT_00b55374;
                    }
                    if (((fVar59 - (fVar46 - fVar45)) + fVar42 < fStack00000000000000c8) &&
                       (ABS(fVar44) + fVar62 * fVar67 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4))
                        < fVar63 * fVar57)) {
                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_036ed2b4();
                      lVar23 = *(long *)(*(long *)puVar7 + 0xb8);
                      uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
                      memcpy(&stack0x000010a0,(void *)(lVar23 + 0x788),0x378);
                      FUN_02178ef4(lVar23 + 0x11f0,&stack0x000010a0,uVar17);
                    }
                  }
                  lVar23 = *in_stack_00000190;
                  if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0))
                  goto LAB_036afadc;
                  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
                  uVar13 = *(uint *)(unaff_x19 + 0x95);
                  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
                  *(uint *)(lVar26 + 100) = uVar13;
                  *(int *)(lVar26 + 0x68) = (int)unaff_x19[0x96];
                  if (((unaff_w23 & 1) == 0) &&
                     ((0xd < in_stack_0000109c ||
                      ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0)))) {
                    lVar23 = *(long *)(lVar23 + 0x50);
                    if (lVar23 == 0) goto LAB_036afadc;
LAB_036aba84:
                    if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_036afbe8;
                    *(int *)(lVar23 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                  }
                  else {
                    lVar23 = *(long *)(lVar23 + 0x50);
                    if (lVar23 == 0) goto LAB_036afadc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_036afbe8;
                    if (*(int *)(lVar23 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_036aba84;
                  }
                  if (in_stack_0000109c == 9) {
                    if (*in_stack_00000178 == 0) goto LAB_036afadc;
                    fVar57 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
                    if (*in_stack_00000178 == 0) goto LAB_036afadc;
                    fVar42 = *(float *)(unaff_x19 + 200);
                    fVar67 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
                    fVar57 = fVar51 * fVar57 * fVar67;
                    fVar67 = fVar57 * (float)(int)(fVar42 / fVar57);
                    uVar53 = (ulong)(uint)fVar67;
                    if (fVar67 <= fVar42) {
                      fVar67 = fVar42 + fVar57;
                    }
LAB_036abca4:
                    *(float *)(unaff_x19 + 200) = fVar67;
                  }
                  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
                    if ((char)unaff_x19[0x1e] == '\0') {
                      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
                        fVar42 = 1.0;
                      }
                      else {
                        fVar42 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
                      }
                      fVar67 = *(float *)(unaff_x19 + 200);
                      fVar62 = (float)FUN_0396af88(&stack0x00001050,0);
                      if (unaff_x19[0x20] != 0) {
                        fVar57 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
                        fVar67 = fVar67 + fVar57 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                                   fVar51 * (fStack0000000000000138 +
                                                            fVar42 * fVar62) +
                                                   in_stack_000000f0 *
                                                   (fStack00000000000000e4 +
                                                   fStack000000000000013c +
                                                   *(float *)(unaff_x19[0x20] + 0x1ac)));
                        *(float *)(unaff_x19 + 200) = fVar67;
                        goto joined_r0x036abbe8;
                      }
                      goto LAB_036afadc;
                    }
                    if (*in_stack_00000178 == 0) goto LAB_036afadc;
                    fVar67 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (*(float *)((long)unaff_x19 + 0x2ac) +
                             fVar51 * fStack0000000000000138 +
                             in_stack_000000f0 *
                             (fStack00000000000000e4 +
                             fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
                    uVar53 = (ulong)(uint)fVar67;
                    fVar67 = *(float *)(unaff_x19 + 200) - fVar67;
                    *(float *)(unaff_x19 + 200) = fVar67;
                    if ((in_stack_0000109c == 0x200b) || (uVar11 != 0)) {
                      fVar57 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
                      uVar53 = (ulong)(uint)fVar57;
                      fVar67 = fVar67 - fVar57;
                      goto LAB_036abca4;
                    }
                  }
                  else {
                    if (*in_stack_00000178 == 0) goto LAB_036afadc;
                    fVar57 = *(float *)(unaff_x19 + 200);
                    fVar67 = fVar57 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                                      (*(float *)((long)unaff_x19 + 0x2ac) +
                                      (*(float *)(unaff_x19 + 0x56) - fVar43) +
                                      in_stack_000000f0 *
                                      (fStack000000000000013c +
                                      *(float *)(*in_stack_00000178 + 0x1ac)));
                    *(float *)(unaff_x19 + 200) = fVar67;
joined_r0x036abbe8:
                    if ((in_stack_0000109c == 0x200b) || (uVar53 = (ulong)(uint)fVar57, uVar11 != 0)
                       ) {
                      fVar57 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
                      uVar53 = (ulong)(uint)fVar57;
                      fVar67 = fVar67 + fVar57;
                      goto LAB_036abca4;
                    }
                  }
                  lVar23 = *in_stack_00000190;
                  if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0))
                  goto LAB_036afadc;
                  uVar13 = *unaff_x20;
                  uVar30 = (uint)*(undefined8 *)(lVar26 + 0x18);
                  if (uVar30 <= uVar13) goto LAB_036afbe8;
                  *(float *)(lVar26 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar67;
                  uVar33 = in_stack_0000109c;
                  if ((int)in_stack_0000109c < 0xd) {
                    if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
                    if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) ||
                       ((float)uVar13 == in_stack_00000090._4_4_)) goto LAB_036abd48;
                  }
                  else {
                    if (1 < in_stack_0000109c - 0x2028) {
                      if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
                      uVar53 = 0;
                      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
                      if ((float)uVar13 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
                    }
LAB_036abd48:
                    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
                      fVar57 = *(float *)(unaff_x19 + 0x99);
                      fVar67 = *(float *)(unaff_x19 + 0x9a);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      fVar57 = fVar57 - fVar67;
                      if (((fStack0000000000000060 < ABS(fVar57)) &&
                          (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
                         (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
                        FUN_036ed624(fVar57);
                        *(float *)((long)unaff_x19 + 0x4c4) =
                             *(float *)((long)unaff_x19 + 0x4c4) - fVar57;
                        *(float *)(unaff_x19 + 0x9b) = fVar57 + *(float *)(unaff_x19 + 0x9b);
                        puVar7 = PTR_DAT_03d9c920;
                        lVar23 = *(long *)PTR_DAT_03d9c920;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar23 = *(long *)puVar7;
                        }
                        lVar26 = *(long *)(lVar23 + 0xb8);
                        if (*(int *)(lVar26 + 0x7ac) == (int)unaff_x19[0x95]) {
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                            lVar26 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
                          }
                          FUN_0217900c(&stack0x000010a0,lVar26 + 0x11f0,
                                       *(undefined8 *)PTR_DAT_03d9c8c0);
                          memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
                          puVar7 = PTR_DAT_03d9c920;
                          lVar23 = *(long *)PTR_DAT_03d9c920;
                          memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x000001d0,0x378);
                          thunk_FUN_01b4f09c(*(long *)(lVar23 + 0xb8) + 0x818,0);
                          lVar23 = *(long *)(*(long *)puVar7 + 0xb8);
                          *(float *)(lVar23 + 0x7bc) = fVar57 + *(float *)(lVar23 + 0x7bc);
                          *(float *)(lVar23 + 0x800) = fVar57 + *(float *)(lVar23 + 0x800);
                          uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
                          memcpy(&stack0x000010a0,(void *)(lVar23 + 0x788),0x378);
                          FUN_02178ef4(lVar23 + 0x11f0,&stack0x000010a0,uVar17);
                        }
                      }
                    }
                    fVar42 = *(float *)(unaff_x19 + 0x9b);
                    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
                    fVar67 = *(float *)((long)unaff_x19 + 0x4cc) - fVar42;
                    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
                    if (fVar67 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                      fVar57 = fVar67;
                    }
                    *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
                    fVar62 = *(float *)(unaff_x19 + 0x99);
                    if (in_stack_00001094 == '\0') {
                      in_stack_00001098 = fVar57;
                    }
                    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
                       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
                        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
                      in_stack_00001094 = '\x01';
                    }
                    lVar23 = *in_stack_00000190;
                    if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x50), lVar26 == 0))
                    goto LAB_036afadc;
                    uVar13 = *(uint *)(unaff_x19 + 0x95);
                    if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_036afbe8;
                    lVar27 = unaff_x19[0x93];
                    lVar32 = lVar26 + (long)(int)uVar13 * 0x5c;
                    *(int *)(lVar32 + 0x34) = (int)lVar27;
                    uVar30 = *(uint *)(unaff_x19 + 0x93);
                    if ((int)lVar27 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
                      uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
                    }
                    *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
                    *(uint *)(lVar32 + 0x38) = uVar30;
                    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
                    *(undefined4 *)(lVar32 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
                    iVar14 = *(int *)((long)unaff_x19 + 0x49c);
                    if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
                      iVar14 = *(int *)((long)unaff_x19 + 0x4a4);
                    }
                    *(int *)((long)unaff_x19 + 0x4a4) = iVar14;
                    *(int *)(lVar32 + 0x40) = iVar14;
                    *(int *)(lVar32 + 0x24) =
                         (*(int *)(lVar32 + 0x3c) - *(int *)(lVar32 + 0x34)) + 1;
                    *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_036afadc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar30) goto LAB_036afbe8;
                    uVar66 = *(undefined4 *)(lVar23 + (long)(int)uVar30 * (long)iVar12 + 0x11c);
                    lVar26 = lVar26 + (long)(int)uVar13 * 0x5c;
                    *(float *)(lVar26 + 0x70) = fVar67;
                    *(undefined4 *)(lVar26 + 0x6c) = uVar66;
                    lVar23 = *in_stack_00000190;
                    if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x50), lVar26 == 0))
                    goto LAB_036afadc;
                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_036afadc;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4))
                    goto LAB_036afbe8;
                    fVar62 = fVar62 - fVar42;
                    uVar53 = (ulong)(uint)fVar62;
                    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
                    *(undefined4 *)(lVar26 + 0x74) =
                         *(undefined4 *)
                          (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 +
                          0x128);
                    *(float *)(lVar26 + 0x78) = fVar62;
                    lVar23 = *in_stack_00000190;
                    if ((lVar23 == 0) || (lVar27 = *(long *)(lVar23 + 0x50), lVar27 == 0))
                    goto LAB_036afadc;
                    lVar32 = (long)(int)*(uint *)(unaff_x19 + 0x95);
                    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
                    lVar26 = lVar27 + lVar32 * 0x5c;
                    *(float *)(lVar26 + 0x44) =
                         *(float *)(lVar26 + 0x74) - fVar51 * fStack0000000000000174;
                    *(float *)(lVar26 + 0x5c) = in_stack_00000108._4_4_;
                    if (*(int *)(lVar26 + 0x24) == 1) {
                      *(int *)(lVar27 + lVar32 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
                    }
                    if ((*in_stack_00000178 == 0) ||
                       (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0)) goto LAB_036afadc;
                    lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
                    uVar30 = (uint)*(undefined8 *)(lVar26 + 0x18);
                    if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
                    if ((*(char *)(lVar26 + lVar40 * unaff_x24 + 0x194) == '\0') &&
                       (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x94),
                       uVar30 <= *(uint *)(unaff_x19 + 0x94))) goto LAB_036afbe8;
                    lVar27 = lVar27 + lVar32 * 0x5c;
                    fVar42 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                             (in_stack_000000f0 *
                              (fStack00000000000000e4 +
                              fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
                             *(float *)((long)unaff_x19 + 0x2ac));
                    fVar57 = -fVar42;
                    if ((char)unaff_x19[0x1e] != '\0') {
                      fVar57 = fVar42;
                    }
                    *(float *)(lVar27 + 0x58) =
                         *(float *)(lVar26 + lVar40 * unaff_x24 + 0x144) + fVar57;
                    *(float *)(lVar27 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
                    *(float *)(lVar27 + 0x54) = fVar67;
                    *(float *)(lVar27 + 0x48) = fStack0000000000000064 + (fVar62 - fVar67);
                    *(float *)(lVar27 + 0x4c) = fVar62;
                    if ((int)in_stack_0000109c < 0x2d) {
                      if (in_stack_0000109c - 10 < 2) {
LAB_036ac1c4:
                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        FUN_036ed2b4();
                        lVar23 = unaff_x19[0x6d];
                        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
                        iVar14 = (int)unaff_x19[0x95] + 1;
                        *(int *)(unaff_x19 + 0x95) = iVar14;
                        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
                        if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                          if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar14) {
                            FUN_036ed7dc();
                            lVar23 = unaff_x19[0x6d];
                            if (lVar23 == 0) goto LAB_036afadc;
                          }
                          lVar23 = *(long *)(lVar23 + 0x38);
                          if (lVar23 != 0) {
                            if (*unaff_x20 < *(uint *)(lVar23 + 0x18)) {
                              fVar57 = *(float *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x154
                                                 );
                              if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
                                if ((in_stack_0000109c == 0x2029) ||
                                   (fVar67 = 0.0, in_stack_0000109c == 10)) {
                                  fVar67 = *(float *)((long)unaff_x19 + 0x2cc);
                                }
                                uVar21 = 0;
                                fVar67 = fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                                         in_stack_00000058._4_4_ *
                                         (in_stack_00000050 + *(float *)((long)unaff_x19 + 700)) +
                                         in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar67)
                                         + *(float *)(unaff_x19 + 0x9b);
                              }
                              else {
                                if ((in_stack_0000109c == 0x2029) ||
                                   (fVar67 = 0.0, in_stack_0000109c == 10)) {
                                  fVar67 = *(float *)((long)unaff_x19 + 0x2cc);
                                }
                                uVar21 = 1;
                                fVar67 = *(float *)(unaff_x19 + 0x9b) +
                                         *(float *)(unaff_x19 + 0x58) +
                                         in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar67)
                                ;
                              }
                              *(float *)(unaff_x19 + 0x9b) = fVar67;
                              *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar21;
                              puVar7 = PTR_DAT_03d9c920;
                              lVar23 = *(long *)PTR_DAT_03d9c920;
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_01ac7298();
                                lVar23 = *(long *)puVar7;
                              }
                              uVar17 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                              *(float *)(unaff_x19 + 0x9a) = fVar57;
                              uVar53 = NEON_rev64(uVar17,4);
                              unaff_x19[0x99] = uVar53;
                              *(float *)(unaff_x19 + 200) =
                                   *(float *)(unaff_x19 + 0x81) + 0.0 +
                                   *(float *)((long)unaff_x19 + 0x40c);
                              FUN_036ed2b4();
                              FUN_036ed2b4();
                              bStack0000000000000078 = 1;
                              *(int *)((long)unaff_x19 + 0x494) =
                                   *(int *)((long)unaff_x19 + 0x494) + 1;
                              in_stack_00000068 = 1;
                              in_stack_00001088 = uVar19;
                              goto LAB_036a9250;
                            }
                            goto LAB_036afbe8;
                          }
                        }
                        goto LAB_036afadc;
                      }
                      if (in_stack_0000109c == 3) {
                        if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
                        in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
                        uVar33 = 3;
                      }
                    }
                    else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d))
                    goto LAB_036ac1c4;
                  }
LAB_036ac2f4:
                  uVar13 = *unaff_x20;
                  if (uVar30 <= uVar13) goto LAB_036afbe8;
                  if (*(char *)(lVar26 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
                    lVar26 = lVar26 + (long)(int)uVar13 * unaff_x24;
                    uVar53 = *(ulong *)(lVar26 + 0x11c);
                    uVar18 = *(ulong *)(in_stack_00000088 + 0x230);
                    *(ulong *)(in_stack_00000088 + 0x230) =
                         uVar18 ^ (uVar18 ^ uVar53) &
                                  ~CONCAT44(-(uint)((float)(uVar18 >> 0x20) <
                                                   (float)(uVar53 >> 0x20)),
                                            -(uint)((float)uVar18 < (float)uVar53));
                    uVar18 = *(ulong *)(in_stack_00000088 + 0x238);
                    uVar53 = *(ulong *)(lVar26 + 0x128);
                    *(ulong *)(in_stack_00000088 + 0x238) =
                         uVar18 ^ (uVar18 ^ uVar53) &
                                  ~CONCAT44(-(uint)((float)(uVar53 >> 0x20) <
                                                   (float)(uVar18 >> 0x20)),
                                            -(uint)((float)uVar53 < (float)uVar18));
                  }
                  if (((int)unaff_x19[0x5c] == 5) &&
                     ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
                    lVar26 = *(long *)(lVar23 + 0x58);
                    if (lVar26 == 0) goto LAB_036afadc;
                    iVar14 = (int)unaff_x19[0x96] + 1;
                    if (*(int *)(lVar26 + 0x18) < iVar14) {
                      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_01f52e84((long *)(lVar23 + 0x58),iVar14,1,*(undefined8 *)PTR_DAT_03d9c890)
                      ;
                      lVar23 = *in_stack_00000190;
                      if (lVar23 == 0) goto LAB_036afadc;
                    }
                    lVar26 = *(long *)(lVar23 + 0x58);
                    if (lVar26 == 0) goto LAB_036afadc;
                    uVar30 = *(uint *)(unaff_x19 + 0x96);
                    lVar27 = (long)(int)uVar30;
                    uVar13 = *(uint *)(lVar26 + 0x18);
                    if (uVar13 <= uVar30) goto LAB_036afbe8;
                    lVar32 = lVar26 + lVar27 * 0x14;
                    fVar67 = *(float *)(lVar32 + 0x30);
                    uVar53 = (ulong)(uint)fVar67;
                    *(undefined4 *)(lVar32 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
                    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
                    if (fVar67 <= *(float *)((long)unaff_x19 + 0x4c4)) {
                      fVar57 = fVar67;
                    }
                    *(float *)(lVar32 + 0x30) = fVar57;
                    uVar33 = *(uint *)((long)unaff_x19 + 0x494);
                    if (uVar33 == 0 && uVar30 == 0) {
                      *(uint *)(lVar26 + (ulong)uVar30 * 0x14 + 0x20) = uVar33;
                    }
                    else {
                      uVar5 = uVar33 - 1;
                      if (0 < (int)uVar33) {
                        lVar23 = *(long *)(lVar23 + 0x38);
                        if (lVar23 == 0) goto LAB_036afadc;
                        if (*(uint *)(lVar23 + 0x18) <= uVar5) goto LAB_036afbe8;
                        if (uVar30 != *(uint *)(lVar23 + (ulong)uVar5 * (unaff_x24 & 0xffffffff) +
                                               0x68)) {
                          if (uVar30 - 1 < uVar13) {
                            *(uint *)(lVar26 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar5;
                            *(uint *)(lVar26 + 0x20 + lVar27 * 0x14) = uVar33;
                            goto LAB_036ac564;
                          }
                          goto LAB_036afbe8;
                        }
                      }
                      if ((float)uVar33 == in_stack_00000090._4_4_) {
                        *(float *)(lVar26 + lVar27 * 0x14 + 0x24) = in_stack_00000090._4_4_;
                      }
                    }
                  }
LAB_036ac564:
                  puVar7 = PTR_DAT_03d9c920;
                  if (((char)unaff_x19[0x5b] == '\0') &&
                     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
                      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0))))
                  goto LAB_036ac920;
                  if ((uVar11 == 0) &&
                     (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) &&
                      (in_stack_0000109c != 0xad)))) {
                    if (*(char *)((long)unaff_x19 + 0x2da) == '\0') {
LAB_036ac660:
                      if (((((0x2bfd < in_stack_0000109c - 0xac01) &&
                            (0xfd < in_stack_0000109c - 0x1101)) &&
                           (0x1d < in_stack_0000109c - 0xa961)) ||
                          (uVar18 = FUN_036fbce8(0), (uVar18 & 1) != 0)) &&
                         ((((0xed < in_stack_0000109c - 0xff01 &&
                            (0x1d < in_stack_0000109c - 0xfe31)) &&
                           (0x717d < in_stack_0000109c - 0x2e81)) &&
                          (0x1fd < in_stack_0000109c - 0xf901)))) goto LAB_036ac6e8;
                      lVar23 = FUN_036fbb7c(0);
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_036afadc;
                      uVar13 = FUN_0254f914(*(long *)(lVar23 + 0x10),in_stack_0000109c,
                                            *(undefined8 *)PTR_DAT_03d9c860);
                      if ((int)in_stack_00000090._4_4_ <= (int)*unaff_x20) {
                        if ((uVar13 & 1) == 0) {
LAB_036ac8e4:
                          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                            thunk_FUN_01ac7298();
                          }
                          FUN_036ed2b4();
                          goto LAB_036ac91c;
                        }
LAB_036ac84c:
                        if (uVar47 != uVar55 || ((bStack0000000000000078 ^ 0xff) & 1) != 0)
                        goto LAB_036ac920;
                        if (uVar11 != 0) goto LAB_036ac868;
                        goto LAB_036ac8a0;
                      }
                      lVar23 = FUN_036fbb7c(0);
                      if (((lVar23 == 0) || (*in_stack_00000190 == 0)) ||
                         (lVar26 = *(long *)(*in_stack_00000190 + 0x38), lVar26 == 0))
                      goto LAB_036afadc;
                      if (*(uint *)(lVar26 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
                      if (*(long *)(lVar23 + 0x18) == 0) goto LAB_036afadc;
                      uVar18 = FUN_0254f914(*(long *)(lVar23 + 0x18),
                                            *(undefined2 *)
                                             (lVar26 + (long)(int)(*unaff_x20 + 1) * (long)iVar12 +
                                             0x20),*(undefined8 *)PTR_DAT_03d9c860);
                      if ((uVar13 & 1) != 0) goto LAB_036ac84c;
                      if ((uVar18 & 1) == 0) goto LAB_036ac8e4;
                      if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
                      if (uVar11 != 0) {
                        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        FUN_036ed2b4();
                      }
                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_036ed2b4();
                    }
                    else {
                      if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
LAB_036ac6f8:
                      if ((bStack000000000000007c & 1) == 0 && in_stack_0000109c == 0xad)
                      goto LAB_036ac868;
LAB_036ac8a0:
                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_036ed2b4();
                    }
                    bStack0000000000000078 = 1;
                  }
                  else if (*(char *)((long)unaff_x19 + 0x2da) == '\x01') {
LAB_036ac6e8:
                    if ((bStack0000000000000078 & 1) != 0) {
                      if (uVar11 == 0) goto LAB_036ac6f8;
LAB_036ac868:
                      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_036ed2b4();
                      goto LAB_036ac8a0;
                    }
LAB_036ac91c:
                    bStack0000000000000078 = 0;
                  }
                  else {
                    if (((in_stack_0000109c - 0x2007 < 0x29) &&
                        ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x10000000401U) != 0)
                        ) || ((in_stack_0000109c == 0xa0 || (in_stack_0000109c == 0x2060))))
                    goto LAB_036ac660;
                    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_036ed2b4();
                    bStack0000000000000078 = 0;
                    *(undefined4 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xe78) = 0xffffffff;
                  }
LAB_036ac920:
                  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_036ed2b4();
                  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
                  in_stack_00001088 = uVar19;
LAB_036a9250:
                  in_stack_00001068 = in_stack_00001068 + 1;
                  lVar23 = unaff_x19[0x8f];
                  if (lVar23 != 0) {
                    if ((int)in_stack_00001068 < (int)*(uint *)(lVar23 + 0x18)) {
                      if (*(uint *)(lVar23 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
                      uVar11 = *(uint *)(lVar23 + (long)(int)in_stack_00001068 * 0xc + 0x20);
                      if (uVar11 == 0) goto LAB_036acbd8;
                      if (5 < in_stack_00000188._4_4_) {
                        uVar19 = FUN_0303de64(&stack0x0000109c,0);
                        uVar17 = FUN_0303de64(&stack0x00001068,0);
                        uVar19 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar19,
                                              *(undefined8 *)PTR_DAT_03d9c940,uVar17,0);
                        if (*(int *)(*(long *)
                                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                    + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)
                                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                            );
                        }
                        FUN_038f2e04(uVar19,0);
                        in_stack_00001088 = CONCAT44(3,*unaff_x20);
                      }
                      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (uVar11 == 0x3c))
                      goto code_r0x036a8fdc;
                      if ((*in_stack_00000190 != 0) &&
                         (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 != 0)) {
                        if (*unaff_x20 < *(uint *)(lVar23 + 0x18)) {
                          lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
                          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar23 + 0x2c);
                          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar23 + 0x58);
                          unaff_x19[0x20] = *(long *)(lVar23 + 0x38);
                          thunk_FUN_01b4f09c(in_stack_00000178);
                          goto LAB_036a9064;
                        }
                        goto LAB_036afbe8;
                      }
                      goto LAB_036afadc;
                    }
LAB_036acbd8:
                    fVar57 = (float)uVar53;
                    if (((char)unaff_x19[0x47] != '\0') &&
                       (fVar57 = DAT_00b552b8,
                       DAT_00b552b8 <
                       *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
                      fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
                      fVar67 = *(float *)((long)unaff_x19 + 0x254);
                      if ((fVar57 < fVar67) &&
                         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
                        if (*(float *)((long)unaff_x19 + 0x2d4) <
                            *(float *)(unaff_x19 + 0x5a) / 100.0) {
                          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
                        }
                        fVar42 = (*(float *)((long)unaff_x19 + 0x23c) - fVar57) * 0.5;
                        if (fVar42 <= DAT_00b55428) {
                          fVar42 = DAT_00b55428;
                        }
                        *(float *)(unaff_x19 + 0x48) = fVar57;
                        fVar42 = (fVar57 + fVar42) * 20.0 + 0.5;
                        fVar57 = DAT_00b556b4;
                        if (fVar42 != INFINITY) {
                          fVar57 = (float)(int)fVar42 / 20.0;
                        }
                        if (fVar67 <= fVar57) {
                          fVar57 = fVar67;
                        }
                        goto LAB_036acc94;
                      }
                    }
                    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
                    puVar7 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
                      uVar19 = FUN_0303de64(in_stack_00000038,0);
                      uVar17 = FUN_03052638(_fStack0000000000000040,0);
                      uVar19 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar19,
                                            *(undefined8 *)PTR_DAT_03d9c938,uVar17,0);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)
                                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                          );
                      }
                      FUN_038f2acc(uVar19,0);
                    }
                    puVar8 = PTR_DAT_03d9c920;
                    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (in_stack_0000109c == 3)))) {
                      (**(code **)(*unaff_x19 + 0x948))();
                      goto LAB_036acd60;
                    }
                    lVar23 = *(long *)PTR_DAT_03d9c920;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar23 = *(long *)puVar8;
                    }
                    plVar41 = (long *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
                    lVar23 = **(long **)(lVar23 + 0xb8);
                    if (lVar23 == 0) goto LAB_036afadc;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
                    iVar12 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54)
                             << 2;
                    if ((*in_stack_00000190 == 0) ||
                       (lVar23 = *(long *)(*in_stack_00000190 + 0x60), lVar23 == 0))
                    goto LAB_036afadc;
                    if (*(int *)(*(long *)
                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_036afbe8;
                    FUN_036fa40c(lVar23 + 0x20,0,0);
                    if (DAT_03fed257 == '\0') {
                      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
                      DAT_03fed257 = '\x01';
                    }
                    iVar14 = (int)unaff_x19[0x4e];
                    in_stack_00000108._4_4_ =
                         **(float **)
                           (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
                    in_stack_000000f8 =
                         *(long **)(*(float **)
                                     (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                     0xb8) + 1);
                    lVar23 = unaff_x19[0xe3];
                    _fStack00000000000000c8 = (ulong)in_stack_000000f8;
                    fStack00000000000000d0 = in_stack_00000108._4_4_;
                    if (iVar14 < 0x401) {
                      if (iVar14 == 0x100) {
                        if (lVar23 == 0) goto LAB_036afadc;
                        if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_036afbe8;
                        uVar19 = *(undefined8 *)(lVar23 + 0x30);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*in_stack_00000190 == 0) ||
                             (lVar26 = *(long *)(*in_stack_00000190 + 0x58), lVar26 == 0))
                          goto LAB_036afadc;
                          if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
                          fVar57 = *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 +
                                             0x28);
                        }
                        else {
                          fVar57 = *(float *)(unaff_x19 + 0x97);
                        }
                        fStack00000000000000d0 =
                             fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x2c);
                        fVar57 = (0.0 - fVar57) - fStack0000000000000020;
                      }
                      else if (iVar14 == 0x200) {
                        if (lVar23 == 0) goto LAB_036afadc;
                        if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                        goto LAB_036afbe8;
                        fStack00000000000000d0 =
                             (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                          (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) *
                                          0.5,((float)*(undefined8 *)(lVar23 + 0x24) +
                                              (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*in_stack_00000190 == 0) ||
                             (lVar23 = *(long *)(*in_stack_00000190 + 0x58), lVar23 == 0))
                          goto LAB_036afadc;
                          if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
                          lVar23 = lVar23 + (long)(int)uStack0000000000000030 * 0x14;
                          fStack00000000000000d0 =
                               fStack000000000000002c + 0.0 + fStack00000000000000d0;
                          fVar57 = ((fStack0000000000000020 + *(float *)(lVar23 + 0x28) +
                                    *(float *)(lVar23 + 0x30)) - fStack0000000000000024) * -0.5 +
                                   0.0;
                        }
                        else {
                          fStack00000000000000d0 =
                               fStack000000000000002c + 0.0 + fStack00000000000000d0;
                          fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) +
                                    in_stack_00001098) - fStack0000000000000024) * -0.5 + 0.0;
                        }
                      }
                      else {
                        if (iVar14 != 0x400) goto LAB_036ad288;
                        if (lVar23 == 0) goto LAB_036afadc;
                        if (*(int *)(lVar23 + 0x18) == 0) goto LAB_036afbe8;
                        uVar19 = *(undefined8 *)(lVar23 + 0x24);
                        if ((int)unaff_x19[0x5c] == 5) {
                          if ((*in_stack_00000190 == 0) ||
                             (lVar26 = *(long *)(*in_stack_00000190 + 0x58), lVar26 == 0))
                          goto LAB_036afadc;
                          if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
                          in_stack_00001098 =
                               *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
                        }
                        fStack00000000000000d0 =
                             fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x20);
                        fVar57 = fStack0000000000000024 + (0.0 - in_stack_00001098);
                      }
LAB_036ad278:
                      _fStack00000000000000c8 =
                           CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar57);
                    }
                    else if (iVar14 == 0x800) {
                      if (lVar23 == 0) goto LAB_036afadc;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto LAB_036afbe8;
                      fVar57 = fStack000000000000002c + 0.0 +
                               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                      _fStack00000000000000c8 =
                           CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 +
                                    0.0,((float)*(undefined8 *)(lVar23 + 0x24) +
                                        (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + 0.0);
                      fStack00000000000000d0 = fVar57;
                    }
                    else {
                      if (iVar14 == 0x1000) {
                        if (lVar23 == 0) goto LAB_036afadc;
                        if ((*(int *)(lVar23 + 0x18) != 1) && (*(int *)(lVar23 + 0x18) != 0)) {
                          uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20)
                                            + (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)
                                            ) * 0.5,((float)*(undefined8 *)(lVar23 + 0x24) +
                                                    (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                          fStack00000000000000d0 =
                               fStack000000000000002c + 0.0 +
                               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                          fVar57 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) *
                                         0.5;
                          goto LAB_036ad278;
                        }
                        goto LAB_036afbe8;
                      }
                      if (iVar14 == 0x2000) {
                        if (lVar23 == 0) goto LAB_036afadc;
                        if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                        goto LAB_036afbe8;
                        fVar57 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) -
                                        fStack0000000000000020) - fStack0000000000000024) * 0.5;
                        _fStack00000000000000c8 =
                             CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5
                                      + 0.0,((float)*(undefined8 *)(lVar23 + 0x24) +
                                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5 + fVar57);
                        fStack00000000000000d0 =
                             fStack000000000000002c + 0.0 +
                             (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                      }
                    }
LAB_036ad288:
                    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
                    uVar19 = FUN_03afb088(unaff_x19[0xe5],0);
                    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)puVar7);
                    }
                    uVar18 = FUN_03922f24(uVar19,0,0);
                    lVar23 = FUN_036dfed8();
                    if (lVar23 == 0) goto LAB_036afadc;
                    FUN_0392a7f0(lVar23,0);
                    *(float *)(unaff_x19 + 0xe2) = fVar57;
                    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
                    iVar14 = FUN_03afa68c(unaff_x19[0xe5],0);
                    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
                    fVar67 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
                    uVar66 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
                    if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
                    }
                    if (DAT_03ff747c == '\0') {
                      thunk_FUN_01ad9084(PTR_DAT_03d9c888);
                      DAT_03ff747c = '\x01';
                    }
                    puVar7 = PTR_DAT_03d9c888;
                    lVar23 = *(long *)PTR_DAT_03d9c888;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar23 = *(long *)puVar7;
                    }
                    puVar24 = *(undefined4 **)(lVar23 + 0xb8);
                    uVar53 = (ulong)(uint)puVar24[1];
                    uVar54 = (ulong)(uint)puVar24[2];
                    uVar56 = (ulong)(uint)puVar24[3];
                    FUN_036c214c(*puVar24,uVar53,uVar54,uVar56,&stack0x00001070,0x4000ffff,0);
                    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    lVar23 = *in_stack_00000190;
                    if (lVar23 == 0) goto LAB_036afadc;
                    uVar11 = *unaff_x20;
                    if ((int)uVar11 < 1) {
                      fStack00000000000000e4 = 0.0;
                      iVar12 = 0;
                      goto LAB_036af524;
                    }
                    lVar23 = *(long *)(lVar23 + 0x38);
                    fVar57 = ABS(fVar57);
                    fVar42 = 1.0;
                    if ((uVar18 & 1) == 0) {
                      fVar42 = fVar57;
                    }
                    if (lVar23 == 0) goto LAB_036afadc;
                    bVar10 = false;
                    bVar6 = false;
                    _fStack0000000000000138 = 0;
                    bVar9 = false;
                    fStack00000000000000e4 = 0.0;
                    fStack000000000000002c = 0.0;
                    fStack0000000000000174 = 0.0;
                    iStack0000000000000074 = 0;
                    lVar26 = 0x2e0;
                    fVar62 = 0.0;
                    fVar51 = 0.0;
                    fStack00000000000000d4 = fStack00000000000000e8;
                    fStack00000000000000d8 = fStack00000000000000ec;
                    fStack0000000000000114 =
                         *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
                    _bStack0000000000000078 = fStack00000000000000ec;
                    fStack00000000000000a4 = fStack00000000000000ec;
                    fStack00000000000000a8 = fStack00000000000000e8;
                    fStack0000000000000110 = 0.0;
                    in_stack_00000090._4_4_ = 0.0;
                    fStack000000000000004c = 0.0;
                    fStack00000000000000b0 = 0.0;
                    fStack0000000000000040 = 0.0;
                    _bStack000000000000007c = in_stack_000000c0._4_4_;
                    fStack0000000000000080 = fStack00000000000000e8;
                    fStack00000000000000a0 = (float)in_stack_000000c0._4_4_;
                    uVar47 = 1;
                    uVar55 = 0;
                    goto LAB_036ad4b0;
                  }
                  goto LAB_036afadc;
                }
                goto LAB_036afbe8;
              }
              goto LAB_036afadc;
            }
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
    }
  }
  goto LAB_036afadc;
code_r0x036a8fdc:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar18 = FUN_036e7318();
  if (((uVar18 & 1) != 0) &&
     (in_stack_00001068 = in_stack_0000104c, in_stack_0000109c = uVar11,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  uVar47 = *unaff_x20;
  if (*(uint *)(lVar23 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar26 = (long)(int)uVar47;
  unaff_w26 = (uint)*(byte *)(lVar23 + lVar26 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  unaff_w27 = (undefined4)unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar47) {
    uVar11 = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (uVar11 == 0x2026) {
      *(long *)(lVar23 + lVar26 * unaff_x24 + 0x30) = unaff_x19[0xca];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar23 + 0x2c) = 0;
      *(long *)(lVar23 + 0x38) = unaff_x19[0xcb];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      uVar47 = *unaff_x20;
      if (*(uint *)(lVar23 + 0x18) <= uVar47) goto LAB_036afbe8;
      unaff_w23 = 1;
      *(int *)(lVar23 + (long)(int)uVar47 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar47 + 1);
    }
    else if (uVar11 == 3) {
      if ((*in_stack_00000178 == 0) || (lVar27 = FUN_036c835c(*in_stack_00000178,0), lVar27 == 0))
      goto LAB_036afadc;
      uVar19 = FUN_0262f3a4(lVar27,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar23 + 0x18) <= uVar47) goto LAB_036afbe8;
      *(undefined8 *)(lVar23 + lVar26 * unaff_x24 + 0x30) = uVar19;
      thunk_FUN_01b4f09c();
      uVar47 = *(uint *)((long)unaff_x19 + 0x494);
      unaff_w23 = 1;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      unaff_w23 = 1;
    }
  }
  else {
    unaff_w23 = 0;
  }
  in_stack_0000109c = uVar11;
  if (((int)uVar47 < *(int *)((long)unaff_x19 + 0x324)) && (uVar11 != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar23 + 0x18) <= uVar47) goto LAB_036afbe8;
    lVar23 = lVar23 + (long)(int)uVar47 * (long)iVar12;
    *(undefined1 *)(lVar23 + 0x194) = 0;
    *(undefined2 *)(lVar23 + 0x20) = 0x200b;
    *(undefined4 *)(lVar23 + 100) = 0;
    *unaff_x20 = uVar47 + 1;
    goto LAB_036a9250;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar14 == 0) {
    uVar47 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar47 >> 4 & 1) == 0) {
      if ((uVar47 >> 3 & 1) == 0) {
        in_stack_00000150 = 1.0;
        if ((uVar47 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar18 = FUN_02fdd9e8(uVar11,0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar11 = FUN_02fddc48(uVar11,0);
            uVar11 = uVar11 & 0xffff;
            in_stack_00000150 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdd92c(uVar11,0);
        in_stack_00000150 = 1.0;
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar11 = FUN_02fdddc0(uVar11,0);
          goto LAB_036a9658;
        }
      }
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdd9e8(uVar11,0);
      in_stack_00000150 = 1.0;
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar11 = FUN_02fddc48(uVar11,0);
LAB_036a9658:
        in_stack_00000150 = 1.0;
        uVar11 = uVar11 & 0xffff;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x644);
    in_stack_0000109c = uVar11;
  }
  else {
    in_stack_00000150 = 1.0;
  }
  unaff_x28 = in_stack_00000190;
  if (iVar14 != 0) {
    if (iVar14 == 1) {
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *in_stack_000000b8 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) || (lVar23 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar23 == 0))
      goto LAB_036afadc;
      unaff_x29 = FUN_02b59714(lVar23,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                               *(undefined8 *)PTR_DAT_03d9c878);
      puVar7 = PTR_DAT_03d9c920;
      if (unaff_x29 != 0) {
        unaff_x21 = in_stack_00000178;
        if (in_stack_0000109c == 0x3c) {
          in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
          goto LAB_036a947c;
        }
        lVar23 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar23 = *(long *)puVar7;
        }
        param_1 = *(long *)(lVar23 + 0xb8);
        goto code_r0x036a9474;
      }
      goto LAB_036a9250;
    }
    lVar23 = *in_stack_00000190;
    fVar67 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar67 = fVar51;
    }
    fVar46 = 0.0;
    if (lVar23 == 0) goto LAB_036afadc;
    fVar44 = 0.0;
    fVar42 = 0.0;
    uVar19 = in_stack_00001088;
    fVar57 = fVar51;
    goto LAB_036a9b50;
  }
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *in_stack_000000f8 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
  thunk_FUN_01b4f09c(in_stack_000000f8);
  if (*in_stack_000000f8 == 0) goto LAB_036a9250;
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *in_stack_00000178 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
  thunk_FUN_01b4f09c(in_stack_00000178);
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *in_stack_00000168 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
  thunk_FUN_01b4f09c();
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  uVar47 = *unaff_x20;
  uVar11 = *(uint *)(lVar23 + 0x18);
  if (uVar11 <= uVar47) goto LAB_036afbe8;
  *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar23 + (long)(int)uVar47 * unaff_x24 + 0x58)
  ;
  if (unaff_w23 != 0) {
    lVar26 = unaff_x19[0x8f];
    if (lVar26 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
    if ((*(int *)(lVar26 + (long)(int)in_stack_00001068 * 0xc + 0x20) == 10) &&
       (uVar47 != *(uint *)(unaff_x19 + 0x93))) {
      if (uVar11 <= uVar47 - 1) goto LAB_036afbe8;
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar67 = *(float *)(lVar23 + (long)(int)(uVar47 - 1) * (long)iVar12 + 0x60);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar23 = *in_stack_00000178;
      goto joined_r0x036aa22c;
    }
  }
  if (*in_stack_00000178 == 0) goto LAB_036afadc;
  fVar67 = *(float *)(unaff_x19 + 0x3d);
  iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
  lVar23 = unaff_x19[0x20];
joined_r0x036aa22c:
  if (lVar23 == 0) goto LAB_036afadc;
  fVar62 = (float)FUN_0396ac34(lVar23 + 0x50,0);
  fVar51 = fStack00000000000000a0;
  if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
    fVar51 = 1.0;
  }
  fVar42 = 0.0;
  fVar44 = 0.0;
  if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar44 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar42 = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
  }
  lVar23 = unaff_x19[0xc9];
  if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_036afadc;
  fVar43 = *(float *)((long)unaff_x19 + 0x404);
  fVar45 = *(float *)(lVar23 + 0x2c);
  fVar57 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
  if (*in_stack_00000178 == 0) goto LAB_036afadc;
  fVar63 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
  if (*in_stack_00000178 == 0) goto LAB_036afadc;
  fVar59 = *(float *)((long)unaff_x19 + 0x404);
  fVar46 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
  lVar23 = unaff_x19[0x6d];
  if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar26 = lVar26 + (long)(int)*unaff_x20 * unaff_x24;
  *(undefined4 *)(lVar26 + 0x2c) = 0;
  fVar51 = ((in_stack_00000150 * fVar67) / (float)iVar12) * fVar62 * fVar51;
  fVar57 = fVar51 * fVar43 * fVar45 * fVar57;
  *(float *)(lVar26 + 0x160) = fVar57;
  uVar11 = *(uint *)(unaff_x19 + 0x24);
  fVar46 = fVar51 * fVar63 * fVar59 * fVar46;
  if (uVar11 == 0) {
    fStack0000000000000174 = *(float *)(unaff_x19 + 0xc3);
    goto FUN_036a9b34;
  }
  lVar26 = unaff_x19[0xe1];
  if (lVar26 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar26 + 0x18) <= uVar11) goto LAB_036afbe8;
  lVar26 = *(long *)(lVar26 + (long)(int)uVar11 * 8 + 0x20);
  if (lVar26 == 0) goto LAB_036afadc;
  fStack0000000000000174 = *(float *)(lVar26 + 0x10c);
  goto FUN_036a9b34;
LAB_036ad4b0:
  uVar11 = uVar47 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x50), lVar27 == 0))
  goto LAB_036afadc;
  lVar40 = (long)(int)uVar11;
  lVar32 = lVar23 + lVar40 * 0x178;
  uVar13 = *(uint *)(lVar32 + 100);
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_036afbe8;
  lVar38 = (long)(int)uVar13;
  lVar27 = lVar27 + lVar38 * 0x5c;
  lVar34 = *(long *)(lVar32 + 0x38);
  uVar3 = *(ushort *)(lVar32 + 0x20);
  uVar33 = *(uint *)(lVar27 + 0x3c);
  uVar30 = *(uint *)(lVar27 + 0x68);
  iVar2 = *(int *)(lVar27 + 0x20);
  iVar15 = *(int *)(lVar27 + 0x28);
  iVar16 = *(int *)(lVar27 + 0x2c);
  uVar5 = *(uint *)(lVar27 + 0x40);
  lVar32 = (long)(int)uVar5;
  fVar63 = *(float *)(lVar27 + 0x4c);
  fVar59 = *(float *)(lVar27 + 0x54);
  fVar43 = *(float *)(lVar27 + 0x58);
  fVar48 = *(float *)(lVar27 + 0x5c);
  fVar46 = *(float *)(lVar27 + 0x60);
  fVar60 = *(float *)(lVar27 + 0x6c);
  fVar65 = *(float *)(lVar27 + 0x70);
  fVar45 = *(float *)(lVar27 + 0x74);
  fVar44 = *(float *)(lVar27 + 0x78);
  uVar37 = (uint)uVar3;
  if ((int)uVar30 < 9) {
    switch(uVar30) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar46 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar43;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar46 + fVar48 * 0.5) - fVar43 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar48 + fVar46) - fVar43;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar48 + fVar46;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar30 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar23 + (long)(int)uVar33 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fde5f4(uVar4,0);
      if ((uVar18 & 1) == 0) {
        bVar1 = (int)uVar13 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar43 <= fVar48) && (!bVar1 && uVar30 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar48 + fVar46;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar47 == 1) || (uVar13 != uVar55)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar48 + fVar46;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar37,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar22 = (char)unaff_x19[0x1e];
        fVar46 = -fVar43;
        if (cVar22 != '\0') {
          fVar46 = fVar43;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar33) goto LAB_036afbe8;
        iVar16 = (int)*(char *)(lVar23 + (long)(int)uVar33 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar43 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar43 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar37 == 9) {
LAB_036af498:
          fVar43 = 1.0 - fVar43;
        }
        else {
          if (uVar37 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = FUN_02fdea78(uVar37,0);
            cVar22 = (char)unaff_x19[0x1e];
            if ((uVar18 & 1) != 0) goto LAB_036af498;
          }
          iVar16 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar15;
        }
        fVar43 = ((fVar48 + fVar46) * fVar43) / (float)iVar16;
        if (cVar22 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar43;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar43;
        }
      }
    }
  }
  else if (uVar30 == 0x20) {
    fVar43 = fVar60 + fVar45;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar30 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar30 <= uVar11) goto LAB_036afbe8;
  lVar27 = lVar23 + lVar40 * 0x178;
  fVar48 = fStack00000000000000d0 + in_stack_00000108._4_4_;
  fVar43 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar46 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar27 + 0x194) == '\0') goto LAB_036adf70;
  iVar15 = *(int *)(lVar23 + lVar40 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_036add84;
  fVar62 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar13,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar25 = lVar23 + lVar40 * 0x178;
    *(undefined4 *)(lVar25 + 0x84) = 0;
    *(undefined4 *)(lVar25 + 0xac) = 0;
    *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
    fVar62 = 1.0;
    break;
  case 1:
    fVar44 = *(float *)(lVar23 + lVar40 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar25 = lVar23 + lVar40 * 0x178;
      fVar45 = (in_stack_00000108._4_4_ + fVar44) - *(float *)(in_stack_00000088 + 0x230);
      fVar44 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar25 = lVar23 + lVar40 * 0x178;
    fVar45 = fVar45 - fVar60;
    *(float *)(lVar25 + 0x84) = fVar62 + (fVar44 - fVar60) / fVar45;
    *(float *)(lVar25 + 0xac) = fVar62 + (*(float *)(lVar25 + 0x98) - fVar60) / fVar45;
    *(float *)(lVar25 + 0xd4) = fVar62 + (*(float *)(lVar25 + 0xc0) - fVar60) / fVar45;
    fVar62 = fVar62 + (*(float *)(lVar25 + 0xe8) - fVar60) / fVar45;
    break;
  case 2:
    lVar25 = lVar23 + lVar40 * 0x178;
    fVar44 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar45 = (in_stack_00000108._4_4_ + *(float *)(lVar25 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar25 + 0x84) = fVar62 + fVar45 / fVar44;
    *(float *)(lVar25 + 0xac) =
         fVar62 + ((in_stack_00000108._4_4_ + *(float *)(lVar25 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar25 + 0xd4) =
         fVar62 + ((in_stack_00000108._4_4_ + *(float *)(lVar25 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar62 = fVar62 + ((in_stack_00000108._4_4_ + *(float *)(lVar25 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar25 = lVar23 + lVar40 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0;
      *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar25 = lVar23 + lVar40 * 0x178;
      fVar44 = fVar44 - fVar65;
      fVar45 = fVar62 + (*(float *)(lVar25 + 0x74) - fVar65) / fVar44;
      fVar44 = fVar62 + (*(float *)(lVar25 + 0x9c) - fVar65) / fVar44;
      *(float *)(lVar25 + 0x88) = fVar45;
      *(float *)(lVar25 + 0xb0) = fVar44;
      *(float *)(lVar25 + 0xd8) = fVar45;
      *(float *)(lVar25 + 0x100) = fVar44;
      break;
    case 2:
      lVar25 = lVar23 + lVar40 * 0x178;
      fVar45 = fVar62 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar25 + 0x88) = fVar45;
      fVar44 = *(float *)(unaff_x19 + 0x9c);
      fVar60 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar25 + 0xd8) = fVar45;
      fVar45 = fVar62 + (*(float *)(lVar25 + 0x9c) - fVar44) / (fVar60 - fVar44);
      *(float *)(lVar25 + 0xb0) = fVar45;
      *(float *)(lVar25 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar30 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar30 <= uVar11) goto LAB_036afbe8;
    lVar25 = lVar23 + lVar40 * 0x178;
    fVar45 = *(float *)(lVar25 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar45) * 0.5;
    fVar60 = fVar62 + *(float *)(lVar25 + 0x88) * fVar45 + fVar44;
    fVar62 = fVar62 + fVar44 + *(float *)(lVar25 + 0xb0) * fVar45;
    *(float *)(lVar25 + 0x84) = fVar60;
    *(float *)(lVar25 + 0xac) = fVar60;
    *(float *)(lVar25 + 0xd4) = fVar62;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar23 + lVar40 * 0x178 + 0xfc) = fVar62;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar30 <= uVar11) goto LAB_036afbe8;
    lVar25 = lVar23 + lVar40 * 0x178;
    *(undefined4 *)(lVar25 + 0x88) = 0;
    *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar30) {
      lVar25 = lVar23 + lVar40 * 0x178;
      fVar63 = fVar63 - fVar59;
      fVar62 = (*(float *)(lVar25 + 0x74) - fVar59) / fVar63;
      fVar63 = (*(float *)(lVar25 + 0x9c) - fVar59) / fVar63;
      *(float *)(lVar25 + 0x88) = fVar62;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar30 <= uVar11) goto LAB_036afbe8;
    lVar25 = lVar23 + lVar40 * 0x178;
    fVar62 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar25 + 0x88) = fVar62;
    fVar63 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar25 + 0xb0) = fVar63;
    *(float *)(lVar25 + 0xd8) = fVar63;
    *(float *)(lVar25 + 0x100) = fVar62;
    break;
  case 3:
    if (uVar30 <= uVar11) goto LAB_036afbe8;
    lVar25 = lVar23 + lVar40 * 0x178;
    fVar63 = *(float *)(lVar25 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar63) * 0.5;
    fVar62 = *(float *)(lVar25 + 0x84) / fVar63 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar25 + 0xd4) / fVar63;
    *(float *)(lVar25 + 0x88) = fVar62;
    *(float *)(lVar25 + 0xb0) = fVar45;
    *(float *)(lVar25 + 0x100) = fVar62;
    *(float *)(lVar25 + 0xd8) = fVar45;
  }
  if (uVar30 <= uVar11) goto LAB_036afbe8;
  lVar25 = lVar23 + lVar40 * 0x178;
  fVar62 = *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar25 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar40 * 0x178 + 400) & 1) != 0)) {
    fVar62 = -fVar62;
  }
  fVar45 = fVar57;
  if (((iVar14 == 2) || (fVar45 = fVar42, iVar14 == 1)) || (fVar45 = fVar57 / fVar67, iVar14 == 0))
  {
    fVar62 = fVar45 * fVar62;
  }
  lVar25 = lVar23 + lVar40 * 0x178;
  fVar63 = *(float *)(lVar25 + 0x88);
  fVar44 = *(float *)(lVar25 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar45 = (float)(int)fVar44;
  }
  fVar60 = *(float *)(lVar25 + 0xd4);
  fVar65 = *(float *)(lVar25 + 0xd8);
  fVar59 = -2.1474836e+09;
  if (fVar63 != INFINITY) {
    fVar59 = (float)(int)fVar63;
  }
  uVar50 = FUN_036f2b00(fVar44 - fVar45,fVar63 - fVar59);
  *(undefined4 *)(lVar25 + 0x84) = uVar50;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_036afbe8;
  fVar65 = fVar65 - fVar59;
  *(float *)(lVar25 + 0x88) = fVar62;
  uVar50 = FUN_036f2b00(fVar44 - fVar45,fVar65);
  *(undefined4 *)(lVar23 + lVar40 * 0x178 + 0xac) = uVar50;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_036afbe8;
  fVar60 = fVar60 - fVar45;
  *(float *)(lVar23 + lVar40 * 0x178 + 0xb0) = fVar62;
  fVar45 = (float)FUN_036f2b00(fVar60,fVar65);
  *(float *)(lVar25 + 0xd4) = fVar45;
  if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_036afbe8;
  *(float *)(lVar25 + 0xd8) = fVar62;
  uVar50 = FUN_036f2b00(fVar60,fVar63 - fVar59);
  *(undefined4 *)(lVar23 + lVar40 * 0x178 + 0xfc) = uVar50;
  uVar30 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar30 <= uVar11) goto LAB_036afbe8;
  *(float *)(lVar23 + lVar40 * 0x178 + 0x100) = fVar62;
LAB_036add84:
  if (((int)uVar11 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000e4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar30 <= uVar11) goto LAB_036afbe8;
      lVar27 = lVar23 + lVar40 * 0x178;
      *(ulong *)(lVar27 + 0x70) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar27 + 0x70));
      *(float *)(lVar27 + 0x78) = fVar46 + *(float *)(lVar27 + 0x78);
      *(ulong *)(lVar27 + 0x98) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar27 + 0x98));
      *(float *)(lVar27 + 0xa0) = fVar46 + *(float *)(lVar27 + 0xa0);
      *(ulong *)(lVar27 + 0xc0) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar27 + 0xc0));
      *(float *)(lVar27 + 200) = fVar46 + *(float *)(lVar27 + 200);
      *(ulong *)(lVar27 + 0xe8) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar27 + 0xe8));
      *(float *)(lVar27 + 0xf0) = fVar46 + *(float *)(lVar27 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar13 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar11 < uVar30) {
        if (*(uint *)(lVar23 + lVar40 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar27 = lVar23 + lVar40 * 0x178;
          *(ulong *)(lVar27 + 0x70) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar27 + 0x70));
          *(float *)(lVar27 + 0x78) = fVar46 + *(float *)(lVar27 + 0x78);
          *(ulong *)(lVar27 + 0x98) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar27 + 0x98));
          *(float *)(lVar27 + 0xa0) = fVar46 + *(float *)(lVar27 + 0xa0);
          *(ulong *)(lVar27 + 0xc0) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar27 + 0xc0));
          *(float *)(lVar27 + 200) = fVar46 + *(float *)(lVar27 + 200);
          *(ulong *)(lVar27 + 0xe8) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar27 + 0xe8));
          *(float *)(lVar27 + 0xf0) = fVar46 + *(float *)(lVar27 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar30 <= uVar11) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar30 = *(uint *)(lVar23 + 0x18);
  }
  puVar7 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar50 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar25 = lVar23 + lVar40 * 0x178;
  *(undefined8 *)(lVar25 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar25 + 0x78) = uVar50;
  if (uVar30 <= uVar11) goto LAB_036afbe8;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  lVar25 = lVar23 + lVar40 * 0x178;
  *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 0xa0) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 200) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 0xf0) = uVar50;
  *(undefined1 *)(lVar27 + 0x194) = 0;
LAB_036adf28:
  if (iVar15 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar29)();
  }
  else if (iVar15 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar40 * 0x178;
  uVar19 = *(undefined8 *)(lVar27 + 0x11c);
  *(undefined8 *)(lVar27 + 0x11c) =
       CONCAT44(fVar43 + (float)((ulong)uVar19 >> 0x20),fVar48 + (float)uVar19);
  *(float *)(lVar27 + 0x124) = fVar46 + *(float *)(lVar27 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar40 * 0x178;
  *(ulong *)(lVar27 + 0x110) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x110) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar27 + 0x110));
  *(float *)(lVar27 + 0x118) = fVar46 + *(float *)(lVar27 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar40 * 0x178;
  *(ulong *)(lVar27 + 0x128) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x128) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar27 + 0x128));
  *(float *)(lVar27 + 0x130) = fVar46 + *(float *)(lVar27 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
  lVar27 = lVar27 + lVar40 * 0x178;
  *(float *)(lVar27 + 0x134) = fVar48 + *(float *)(lVar27 + 0x134);
  *(ulong *)(lVar27 + 0x138) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar27 + 0x138) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar27 + 0x138));
  lVar27 = *in_stack_00000190;
  if ((lVar27 == 0) || (lVar25 = *(long *)(lVar27 + 0x38), lVar25 == 0)) goto LAB_036afadc;
  uVar30 = *(uint *)(lVar25 + 0x18);
  if (uVar30 <= uVar11) goto LAB_036afbe8;
  lVar35 = lVar25 + lVar40 * 0x178;
  uVar53 = CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar35 + 0x140));
  fVar45 = fVar43 + *(float *)(lVar35 + 0x150);
  uVar54 = (ulong)(uint)fVar45;
  uVar56 = CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar45;
  *(ulong *)(lVar35 + 0x140) = uVar53;
  *(ulong *)(lVar35 + 0x148) = uVar56;
  if (uVar13 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar11 == uVar55) goto LAB_036ae17c;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar35 = (long)(int)uVar55;
    lVar36 = lVar27 + lVar35 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar36 + 0x58);
    fVar45 = fVar43 + *(float *)(lVar36 + 0x54);
    uVar53 = (ulong)(uint)fVar45;
    fVar63 = fVar48 + *(float *)(lVar36 + 0x58);
    uVar54 = (ulong)(uint)fVar63;
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar45;
    *(float *)(lVar36 + 0x58) = fVar63;
    if (uVar30 <= *(uint *)(lVar36 + 0x34)) goto LAB_036afbe8;
    uVar50 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar27 = lVar27 + lVar35 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar45;
    *(undefined4 *)(lVar27 + 0x6c) = uVar50;
    lVar27 = *in_stack_00000190;
    if ((lVar27 == 0) || (lVar25 = *(long *)(lVar27 + 0x50), lVar25 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_036afadc;
    uVar55 = *(uint *)(lVar25 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar27 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar25 = lVar25 + lVar35 * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar11 == uVar55) {
      lVar27 = *in_stack_00000190;
      if ((lVar27 == 0) || (lVar25 = *(long *)(lVar27 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar35 = lVar25 + lVar38 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar35 + 0x58);
      uVar53 = CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                        fVar43 + (float)*(undefined8 *)(lVar35 + 0x4c));
      fVar45 = fVar43 + *(float *)(lVar35 + 0x54);
      fVar48 = fVar48 + *(float *)(lVar35 + 0x58);
      uVar54 = (ulong)(uint)fVar48;
      *(ulong *)(lVar35 + 0x4c) = uVar53;
      *(float *)(lVar35 + 0x54) = fVar45;
      *(float *)(lVar35 + 0x58) = fVar48;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(lVar35 + 0x34)) goto LAB_036afbe8;
      uVar50 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar38 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar45;
      *(undefined4 *)(lVar25 + 0x6c) = uVar50;
      lVar27 = *in_stack_00000190;
      if ((lVar27 == 0) || (lVar25 = *(long *)(lVar27 + 0x50), lVar25 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      uVar55 = *(uint *)(lVar25 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar27 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar25 = lVar25 + lVar38 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar18 = FUN_02fddb80(uVar37,0);
  if (((((uVar18 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
    if (bVar6) {
      if (((uVar47 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*unaff_x20 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar47 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar23 + lVar26 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fddb80(uVar4,0);
        if ((uVar18 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar47) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar23 + lVar26 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar18 = FUN_02fddb80(uVar4,0);
          if ((uVar18 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar47 != 1) {
LAB_036aeea4:
        bVar6 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fddab4(uVar37,0);
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdb080(uVar37,0);
        if (((uVar37 != 0x200b) && ((uVar18 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar11 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fddb80(uVar37,0);
      iVar15 = (int)fStack0000000000000138;
      if ((uVar18 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar15 = uVar47 - 2;
    }
    lVar27 = *in_stack_00000190;
    if (lVar27 == 0) goto LAB_036afadc;
    lVar25 = *(long *)(lVar27 + 0x40);
    if (lVar25 == 0) goto LAB_036afadc;
    uVar55 = *(uint *)(lVar27 + 0x24);
    iVar16 = *(int *)(lVar25 + 0x18);
    if (iVar16 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar27 + 0x40),iVar16 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar27 = *in_stack_00000190;
      if (lVar27 == 0) goto LAB_036afadc;
    }
    lVar27 = *(long *)(lVar27 + 0x40);
    if (lVar27 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar27 = lVar27 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar27 + 0x20) = unaff_x19;
    *(float *)(lVar27 + 0x28) = fStack0000000000000174;
    *(int *)(lVar27 + 0x2c) = iVar15;
    *(int *)(lVar27 + 0x30) = (iVar15 - (int)fStack0000000000000174) + 1;
    thunk_FUN_01b4f09c();
    lVar27 = unaff_x19[0x6d];
    if (lVar27 == 0) goto LAB_036afadc;
    lVar25 = *(long *)(lVar27 + 0x50);
    *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar25 = lVar25 + lVar38 * 0x5c;
    bVar6 = false;
    fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      fStack0000000000000174 = (float)uVar11;
    }
    if (uVar11 == *unaff_x20 - 1) {
      lVar27 = *in_stack_00000190;
      if (lVar27 == 0) goto LAB_036afadc;
      lVar25 = *(long *)(lVar27 + 0x40);
      if (lVar25 == 0) goto LAB_036afadc;
      uVar55 = *(uint *)(lVar27 + 0x24);
      iVar15 = *(int *)(lVar25 + 0x18);
      if (iVar15 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar27 + 0x40),iVar15 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar27 = *in_stack_00000190;
        if (lVar27 == 0) goto LAB_036afadc;
      }
      lVar27 = *(long *)(lVar27 + 0x40);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar27 = lVar27 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar27 + 0x20) = unaff_x19;
      *(float *)(lVar27 + 0x28) = fStack0000000000000174;
      *(uint *)(lVar27 + 0x2c) = uVar11;
      *(uint *)(lVar27 + 0x30) = uVar47 - (int)fStack0000000000000174;
      thunk_FUN_01b4f09c();
      lVar27 = unaff_x19[0x6d];
      if (lVar27 == 0) goto LAB_036afadc;
      lVar25 = *(long *)(lVar27 + 0x50);
      *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar25 = lVar25 + lVar38 * 0x5c;
      fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar6 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  uVar55 = *(uint *)(lVar27 + 0x18);
  if (uVar55 <= uVar11) goto LAB_036afbe8;
  if ((*(byte *)(lVar27 + lVar40 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_036ae3d8:
      if (uVar55 <= uVar47 - 2) goto LAB_036afbe8;
      lVar38 = *unaff_x19;
      uVar55 = *(uint *)(lVar27 + lVar26 + -0x330);
      uVar50 = *(undefined4 *)(lVar27 + lVar26 + -0x2f8);
LAB_036ae924:
      pcVar29 = *(code **)(lVar38 + 0x908);
LAB_036ae92c:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)_bStack0000000000000078;
      uVar54 = (ulong)_bStack000000000000007c;
      (*pcVar29)(fStack0000000000000080,uVar53,uVar54,uVar56,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar50);
      puVar7 = PTR_DAT_03d9c920;
      lVar27 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar27 = *(long *)puVar7;
      }
LAB_036ae980:
      bVar10 = false;
      fVar51 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar10 = false;
    }
  }
  else {
    lVar27 = lVar27 + lVar40 * 0x178;
    iVar15 = *(int *)(lVar27 + 0x68);
    *(int *)(lVar27 + 0x16c) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar15 + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar18 = FUN_02fdb080(uVar37,0);
    if ((uVar37 != 0x200b) && ((uVar18 & 1) == 0)) {
      lVar27 = *in_stack_00000190;
      if ((lVar27 == 0) || (lVar38 = *(long *)(lVar27 + 0x38), lVar38 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar38 + 0x18) <= uVar11) goto LAB_036afbe8;
      fVar45 = *(float *)(lVar38 + lVar40 * 0x178 + 0x160);
      if (fVar51 <= fVar45) {
        fVar51 = fVar45;
      }
      if (fStack0000000000000110 <= ABS(fVar62)) {
        fStack0000000000000110 = ABS(fVar62);
      }
      if (iVar15 != iStack0000000000000074) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar27 = *in_stack_00000190;
          if (lVar27 == 0) goto LAB_036afadc;
          lVar38 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar38 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar38 + 0x15a8);
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar63 = *(float *)(lVar27 + lVar40 * 0x178 + 0x14c);
      fVar45 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar63 = fVar63 + fVar51 * fVar45;
      if (fVar63 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar63;
      }
      uVar53 = (ulong)(uint)fStack0000000000000114;
      iStack0000000000000074 = iVar15;
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar37,0);
        if ((uVar18 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar40 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar27 + 0x160);
      fStack0000000000000080 = *(float *)(lVar27 + 0x11c);
      uVar54 = (ulong)(uint)fStack0000000000000080;
      bVar10 = fVar51 != 0.0;
      fVar45 = in_stack_00000090._4_4_;
      if (bVar10) {
        fVar45 = fVar51;
      }
      fVar51 = fVar45;
      uVar66 = *(undefined4 *)(lVar27 + 0x168);
      _bStack000000000000007c = 0;
      fVar45 = fVar62;
      if (bVar10) {
        fVar45 = fStack0000000000000110;
      }
      uVar53 = (ulong)(uint)fVar45;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar45;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        if (uVar11 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar40 * 0x178;
          lVar38 = *unaff_x19;
          uVar55 = *(uint *)(lVar27 + 0x128);
          uVar50 = *(undefined4 *)(lVar27 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar11 == uVar33) || ((int)uVar5 <= (int)uVar11)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar37,0);
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        lVar38 = lVar40;
        uVar55 = uVar11;
        if (uVar37 == 0x200b || (uVar18 & 1) != 0) {
          lVar38 = lVar32;
          uVar55 = uVar5;
        }
        if (uVar55 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar38 * 0x178;
          uVar55 = *(uint *)(lVar27 + 0x128);
          uVar50 = *(undefined4 *)(lVar27 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        uVar55 = *(uint *)(lVar27 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar11 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar47) goto LAB_036afbe8;
      uVar18 = FUN_036c0e18(uVar66,*(undefined4 *)(lVar27 + lVar26),0);
      if ((uVar18 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0)) {
          if (uVar11 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + lVar40 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar27 + 0x128);
            uVar54 = (ulong)_bStack000000000000007c;
            uVar53 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar53,uVar54,uVar56,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar27 + 0x160));
            puVar7 = PTR_DAT_03d9c920;
            lVar27 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar27 = *(long *)puVar7;
            }
            goto LAB_036ae980;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
    }
    bVar10 = true;
  }
LAB_036ae99c:
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
  if (lVar34 == 0) goto LAB_036afadc;
  uVar55 = *(uint *)(lVar27 + lVar40 * 0x178 + 400);
  fVar45 = (float)FUN_0396ad04(lVar34 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar47 - 2) goto LAB_036afbe8;
      uVar55 = *(uint *)(lVar27 + lVar26 + -0x330);
      fVar43 = *(float *)(lVar27 + lVar26 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar56 = (ulong)uVar55;
      uVar53 = (ulong)(uint)fStack00000000000000a4;
      uVar54 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar29)(fStack00000000000000a8,uVar53,uVar54,uVar56,
                 fStack00000000000000b0 * fVar45 + fVar43,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar27 = *in_stack_00000190;
    if ((lVar27 == 0) || (lVar38 = *(long *)(lVar27 + 0x38), lVar38 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar38 + 0x18) <= uVar11) goto LAB_036afbe8;
    *(int *)(lVar38 + lVar40 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar38 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar37,0);
        if ((uVar18 & 1) != 0) goto LAB_036aeb20;
        lVar27 = *in_stack_00000190;
        if (lVar27 == 0) goto LAB_036afadc;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar40 * 0x178;
      fStack000000000000004c = *(float *)(lVar27 + 0x60);
      fStack0000000000000040 = *(float *)(lVar27 + 0x14c);
      uVar53 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar27 + 0x11c);
      uVar54 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar27 + 0x160);
      fStack00000000000000a4 = fVar45 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        if (uVar11 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar40 * 0x178;
          lVar32 = *unaff_x19;
          uVar55 = *(uint *)(lVar27 + 0x128);
          fVar43 = *(float *)(lVar27 + 0x14c);
LAB_036aec8c:
          pcVar29 = *(code **)(lVar32 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar11 == uVar33) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_02fdb080(uVar37,0);
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        uVar55 = *(uint *)(lVar27 + 0x18);
        if (uVar37 == 0x200b || (uVar18 & 1) != 0) {
          if (uVar55 <= uVar5) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar32 = lVar40;
          if (uVar55 <= uVar11) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar27 = lVar27 + lVar32 * 0x178;
        fVar43 = *(float *)(lVar27 + 0x14c);
        uVar55 = *(uint *)(lVar27 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar11 < (int)uVar55) {
      lVar27 = *in_stack_00000190;
      if ((lVar27 != 0) && (lVar38 = *(long *)(lVar27 + 0x38), lVar38 != 0)) {
        if (uVar47 < *(uint *)(lVar38 + 0x18)) {
          if (*(float *)(lVar38 + lVar26 + -0x108) == fStack000000000000004c) {
            fVar63 = *(float *)(lVar38 + lVar26 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar53 = (ulong)(uint)fStack0000000000000040;
            uVar18 = FUN_036c122c(fVar43 + fVar63,uVar53,0);
            if ((uVar18 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar27 = *in_stack_00000190;
            if (lVar27 == 0) goto LAB_036afadc;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            uVar55 = *(uint *)(lVar27 + 0x18);
            if ((int)uVar11 <= (int)uVar5) goto LAB_036aef20;
            if (uVar5 < uVar55) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar11 < (int)uVar55) {
      iVar15 = FUN_03922ce0(lVar34,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar47) goto LAB_036afbe8;
      lVar27 = *(long *)(lVar23 + lVar26 + -0x130);
      if (lVar27 == 0) goto LAB_036afadc;
      iVar16 = FUN_03922ce0(lVar27,0);
      if (iVar15 != iVar16) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 != 0))
      {
        if (uVar47 - 2 < *(uint *)(lVar27 + 0x18)) {
          lVar32 = *unaff_x19;
          uVar55 = *(uint *)(lVar27 + lVar26 + -0x330);
          fVar43 = *(float *)(lVar27 + lVar26 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  uVar55 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar55 <= uVar11) goto LAB_036afbe8;
  if ((*(byte *)(lVar27 + lVar40 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar9) {
      uVar54 = (ulong)in_stack_000000c0._4_4_;
      uVar53 = (ulong)(uint)fStack00000000000000ec;
      uVar56 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar53,uVar54,uVar56,fStack00000000000000d8,uVar54);
    }
LAB_036aefe8:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar11) || ((int)unaff_x19[0x66] < (int)uVar13)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar27 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar11)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar11 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdea78(uVar37,0);
        if ((uVar18 & 1) != 0) goto LAB_036aefe8;
      }
      puVar7 = PTR_DAT_03d9c920;
      lVar32 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar32 = *(long *)puVar7;
      }
      if ((*in_stack_00000190 == 0) || (lVar27 = *(long *)(*in_stack_00000190 + 0x38), lVar27 == 0))
      goto LAB_036afadc;
      uVar55 = (uint)*(undefined8 *)(lVar27 + 0x18);
      if (uVar55 <= uVar11) goto LAB_036afbe8;
      lVar32 = *(long *)(lVar32 + 0xb8);
      lVar34 = lVar27 + lVar40 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar34 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar34 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar32 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar32 + 0x159c);
      in_stack_00001080 = *(float *)(lVar34 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar32 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar32 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar55 <= uVar11) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar40 * 0x178;
    fVar45 = *(float *)(lVar27 + 0x128);
    fVar59 = *(float *)(lVar27 + 0x188);
    uVar17 = *(undefined8 *)(lVar27 + 0x17c);
    fVar60 = *(float *)(lVar27 + 0x184);
    uVar19 = *(undefined8 *)(lVar27 + 0x184);
    fVar46 = *(float *)(lVar27 + 0x18c);
    fVar43 = *(float *)(lVar27 + 0x11c);
    fVar63 = *(float *)(lVar27 + 0x148);
    fVar44 = *(float *)(lVar27 + 0x150);
    in_stack_00000198 = uVar17;
    fStack00000000000001a0 = fVar60;
    fStack00000000000001a4 = fVar59;
    in_stack_000001a8 = fVar46;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar18 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar27 = *(long *)PTR_DAT_03d9c888;
    if ((uVar18 & 1) == 0) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar27);
      }
      fVar45 = fVar45 + (float)in_stack_00001078;
      uVar54 = (ulong)(uint)fVar45;
      fVar43 = fVar43 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar63 = fVar63 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar56 = (ulong)(uint)fVar63;
      if (fVar43 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar43;
      }
      if (fVar44 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar44 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar45) {
        fStack00000000000000d4 = fVar45;
      }
      uVar53 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar63) {
        fStack00000000000000d8 = fVar63;
      }
    }
    else {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar27);
      }
      fVar43 = (fVar43 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar56 = (ulong)(uint)fVar43;
      if (fVar44 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar44;
      }
      uVar53 = (ulong)(uint)fStack00000000000000ec;
      uVar54 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar63) {
        fStack00000000000000d8 = fVar63;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar53,uVar54,uVar56,fStack00000000000000d8,uVar54);
      fStack00000000000000ec = fVar44 - fVar46;
      fStack00000000000000d4 = fVar45 + fVar60;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar63 + fVar59;
      fStack00000000000000e8 = fVar43;
      in_stack_00001070 = uVar17;
      in_stack_00001078 = uVar19;
      in_stack_00001080 = fVar46;
    }
    if (((*unaff_x20 == 1) || (uVar11 == uVar33)) || (((int)uVar5 <= (int)uVar11 || (!bVar1)))) {
      uVar54 = (ulong)in_stack_000000c0._4_4_;
      uVar53 = (ulong)(uint)fStack00000000000000ec;
      uVar56 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar53,uVar54,uVar56,fStack00000000000000d8,uVar54);
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  uVar11 = *unaff_x20;
  lVar26 = lVar26 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar11 <= (int)uVar47;
  uVar47 = uVar47 + 1;
  uVar55 = uVar13;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar23 = *in_stack_00000190;
  if (lVar23 != 0) {
    iVar12 = uVar13 + 1;
    plVar41 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar23 + 0x18) = uVar11;
    lVar26 = unaff_x19[0xd4];
    *(int *)(lVar23 + 0x2c) = iVar12;
    if ((int)uVar11 < 1 || fStack00000000000000e4 == 0.0) {
      fStack00000000000000e4 = 1.4013e-45;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar26;
    *(float *)(lVar23 + 0x24) = fStack00000000000000e4;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar18 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar18 & 1) == 0)) {
LAB_036acd60:
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036c03d8();
      return;
    }
    lVar23 = unaff_x19[0xdf];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*in_stack_00000190,*(undefined8 *)(lVar23 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar12 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar12 != 0x19) {
      lVar23 = unaff_x19[0xe5];
      if (lVar23 == 0) goto LAB_036afadc;
      uVar11 = FUN_03afacb8(lVar23,0);
      FUN_03afacf4(lVar23,uVar11 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x60), lVar23 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar41 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar23 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
            if (*(int *)(lVar23 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                if (*(int *)(lVar23 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6d] + 0x60), lVar23 != 0)) {
                    if (*(int *)(lVar23 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar23 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar19 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar11 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar23 = *in_stack_00000190;
                              if (lVar23 != 0) {
                                lVar27 = 0;
                                lVar26 = 0;
                                do {
                                  uVar18 = lVar26 + 1;
                                  if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar18)
                                  goto LAB_036acd60;
                                  lVar23 = *(long *)(lVar23 + 0x60);
                                  if (lVar23 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  FUN_036fa544(lVar23 + lVar27 + 0x70,0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                  uVar17 = *(undefined8 *)(lVar23 + lVar26 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar20 = FUN_03922f24(uVar17,0,0);
                                  if ((uVar20 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar23 = *(long *)(*in_stack_00000190 + 0x60), lVar23 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                      FUN_036fa678(lVar23 + lVar27 + 0x70,1,0);
                                    }
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_0390262c(lVar23,*(undefined8 *)(lVar32 + lVar27 + 0x80),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_03902830(lVar23,*(undefined8 *)(lVar32 + lVar27 + 0x98),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_039028dc(lVar23,*(undefined8 *)(lVar32 + lVar27 + 0xa0),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar32 = *(long *)(*in_stack_00000190 + 0x60), lVar32 == 0))
                                    break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_03902a3c(lVar23,*(undefined8 *)(lVar32 + lVar27 + 0xa8),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_03702ba4(lVar23,0), lVar23 == 0)) break;
                                    FUN_03904ddc(lVar23,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_039add2c(lVar23,0);
                                    lVar32 = unaff_x19[0xe1];
                                    if (lVar32 == 0) break;
                                    if (*(uint *)(lVar32 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar32 = *(long *)(lVar32 + lVar26 * 8 + 0x28);
                                    if ((lVar32 == 0) ||
                                       (uVar17 = FUN_03702ba4(lVar32,0), lVar23 == 0)) break;
                                    FUN_03af8c9c(lVar23,uVar17,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_039add2c(lVar23,0), lVar23 == 0)) break;
                                    FUN_03af8894(uVar19,uVar53,uVar54,uVar56,lVar23,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar26 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_039add2c(lVar23,0), lVar23 == 0)) break;
                                    FUN_03af87d0(lVar23,uVar11 & 1,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar18) goto LAB_036afbe8;
                                    plVar39 = *(long **)(lVar23 + lVar26 * 8 + 0x28);
                                    uVar47 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar39 == (long *)0x0) break;
                                    (**(code **)(*plVar39 + 0x2c8))
                                              (plVar39,uVar47 & 1,*(undefined8 *)(*plVar39 + 0x2d0))
                                    ;
                                  }
                                  lVar23 = *in_stack_00000190;
                                  lVar26 = lVar26 + 1;
                                  lVar27 = lVar27 + 0x50;
                                } while (lVar23 != 0);
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
          }
        }
      }
    }
  }
LAB_036afadc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


