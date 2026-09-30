/*
FUNCTION_NAME: Unity.VisualScripting.OptimizedReflection$$get_safeMode
ENTRY_POINT: 036ab318
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


void Unity_VisualScripting_OptimizedReflection__get_safeMode(float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  int in_w8;
  undefined4 *puVar27;
  long lVar28;
  int in_w9;
  long lVar29;
  float *pfVar30;
  code *pcVar31;
  uint uVar32;
  float *pfVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar40;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar41;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long lVar42;
  uint uVar43;
  undefined1 *unaff_x29;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulong uVar56;
  ulong uVar57;
  float fVar58;
  float unaff_s8;
  float fVar59;
  float unaff_s9;
  float fVar60;
  float unaff_s10;
  float unaff_s11;
  float fVar61;
  float unaff_s12;
  float fVar62;
  float fVar63;
  ulong unaff_d13;
  undefined4 uVar64;
  float fVar65;
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
  uint uStack0000000000000074;
  byte in_stack_00000078;
  uint uStack000000000000007c;
  float fStack0000000000000080;
  long in_stack_00000088;
  undefined8 in_stack_00000090;
  float in_stack_00000098;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000b0;
  long *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float in_stack_000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000d8;
  undefined8 in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  long *in_stack_000000f8;
  undefined8 in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float fStack0000000000000124;
  float fStack000000000000012c;
  float fStack0000000000000138;
  float fStack000000000000013c;
  float fStack0000000000000140;
  long *in_stack_00000168;
  undefined8 in_stack_00000170;
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
  
code_r0x036ab318:
  if (in_w8 < in_w9) {
LAB_036afb7c:
    fVar51 = unaff_s11;
    if (0.0 < param_2) {
      fVar51 = unaff_s11 / (1.0 - param_2);
    }
    param_2 = param_2 + (unaff_s11 - unaff_s12 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar51;
LAB_036afb6c:
    if (param_1 <= param_2) {
      param_2 = param_1;
    }
    *(float *)((long)unaff_x19 + 0x2d4) = param_2;
    return;
  }
LAB_036ab320:
  fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
  uVar22 = (ulong)(uint)fVar55;
  fVar51 = *(float *)(unaff_x19 + 0x4a);
  if ((fVar51 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_036afae0:
    fVar65 = (fVar55 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar65 <= DAT_00b55428) {
      fVar65 = DAT_00b55428;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar55;
    fVar65 = (fVar55 - fVar65) * 20.0 + 0.5;
    fVar55 = DAT_00b556b4;
    if (fVar65 != INFINITY) {
      fVar55 = (float)(int)fVar65 / 20.0;
    }
    if (fVar55 <= fVar51) {
      fVar55 = fVar51;
    }
LAB_036acc94:
    *(float *)((long)unaff_x19 + 0x1e4) = fVar55;
    return;
  }
LAB_036ab340:
  puVar8 = PTR_DAT_03d9c920;
  uVar49 = (uint)unaff_x26;
  lVar23 = *(long *)PTR_DAT_03d9c920;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar23 = *(long *)puVar8;
  }
  iVar12 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
  iVar14 = (int)unaff_x24;
  uVar17 = in_stack_0000109c;
  if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) && (((in_stack_00000078 ^ 1) & 1) == 0)
     ) {
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    in_stack_00001068 = FUN_036ecf20();
    if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
    goto LAB_036afadc;
    uVar13 = *unaff_x20 - 1;
    if (*(uint *)(lVar23 + 0x18) <= uVar13) goto LAB_036afbe8;
    iStack0000000000000034 = iVar12;
    if (*(short *)(lVar23 + (long)(int)uVar13 * (long)iVar14 + 0x20) == 0xad) {
      bVar7 = false;
      *unaff_x20 = uVar13;
      in_stack_00001068 = in_stack_00001068 - 1;
      in_stack_00001088 = CONCAT44(0x2d,uVar13);
      goto LAB_036a9250;
    }
  }
  if (unaff_s10 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
    uVar22 = unaff_d13;
    FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                 *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                 fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
  }
  else {
    if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
      *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
    }
    fVar51 = fStack00000000000000c8;
    if ((char)unaff_x19[0x47] != '\0') {
      fVar51 = *(float *)(unaff_x19 + 0x59);
      if ((fVar51 < *(float *)((long)unaff_x19 + 700)) &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar55 = *(float *)((long)unaff_x19 + 700) +
                 ((in_stack_00000018._4_4_ - unaff_s10) / (float)((int)unaff_x19[0x95] + 1)) /
                 in_stack_00000058._4_4_;
        if (fVar55 <= fVar51) {
          fVar55 = fVar51;
        }
LAB_036ad184:
        *(float *)((long)unaff_x19 + 700) = fVar55;
        return;
      }
      param_2 = *(float *)((long)unaff_x19 + 0x2d4);
      param_1 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if ((param_2 < param_1) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_036afb7c;
      fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
      uVar22 = (ulong)(uint)fVar55;
      fVar51 = *(float *)(unaff_x19 + 0x4a);
      if ((fVar51 < fVar55) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
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
      lVar29 = *(long *)(lVar23 + 0xb8);
      if (*(int *)(lVar29 + 0x1580) == 0) {
        bVar7 = false;
        goto LAB_036acbbc;
      }
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar29 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
      }
      FUN_0217900c(&stack0x000010a0,lVar29 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
      memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
      iVar12 = FUN_036ecf20();
      bVar7 = false;
      goto LAB_036ab020;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      bVar7 = false;
      goto LAB_036aad90;
    case 5:
      *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
      uVar22 = unaff_d13;
      FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                   *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                   fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
      *(undefined4 *)(unaff_x19 + 0x9a) = 0;
      *(undefined4 *)(unaff_x19 + 0x9b) = 0;
      *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
      *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
      break;
    case 6:
      lVar23 = unaff_x19[0x5d];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_0391f968(lVar23,0,0);
      if ((uVar20 & 1) != 0) {
        plVar41 = (long *)unaff_x19[0x5d];
        uVar18 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar41 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar41 + 0x558))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x560));
        lVar23 = unaff_x19[0x5d];
        if (lVar23 == 0) goto LAB_036afadc;
        *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
        FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
        plVar41 = (long *)unaff_x19[0x5d];
        if (plVar41 == (long *)0x0) goto LAB_036afadc;
        (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      }
      bVar7 = false;
      goto LAB_036ab13c;
    default:
      bVar7 = false;
      goto LAB_036ab54c;
    }
  }
  in_stack_00000078 = 1;
  bVar7 = false;
  in_stack_00000068 = 1;
LAB_036a9250:
  fVar51 = (float)unaff_d13;
  in_stack_00001068 = in_stack_00001068 + 1;
  lVar23 = unaff_x19[0x8f];
  if (lVar23 != 0) {
    if ((int)in_stack_00001068 < (int)*(uint *)(lVar23 + 0x18)) {
      if (*(uint *)(lVar23 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      in_stack_0000109c = *(uint *)(lVar23 + (long)(int)in_stack_00001068 * 0xc + 0x20);
      if (in_stack_0000109c == 0) goto LAB_036acbd8;
      if (5 < in_stack_00000188._4_4_) {
        uVar18 = FUN_0303de64(&stack0x0000109c,0);
        uVar19 = FUN_0303de64(&stack0x00001068,0);
        uVar18 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar18,*(undefined8 *)PTR_DAT_03d9c940
                              ,uVar19,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2e04(uVar18,0);
        in_stack_00001088 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_0000109c == 0x3c))
      goto code_r0x036a8fdc;
      if ((*in_stack_00000190 != 0) && (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 != 0))
      {
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
    fVar51 = (float)uVar22;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar51 = DAT_00b552b8,
       DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar51 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar65 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar51 < fVar65) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar55 = (*(float *)((long)unaff_x19 + 0x23c) - fVar51) * 0.5;
        if (fVar55 <= DAT_00b55428) {
          fVar55 = DAT_00b55428;
        }
        *(float *)(unaff_x19 + 0x48) = fVar51;
        fVar51 = (fVar51 + fVar55) * 20.0 + 0.5;
        fVar55 = DAT_00b556b4;
        if (fVar51 != INFINITY) {
          fVar55 = (float)(int)fVar51 / 20.0;
        }
        if (fVar65 <= fVar55) {
          fVar55 = fVar65;
        }
        goto LAB_036acc94;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar8 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar18 = FUN_0303de64(in_stack_00000038,0);
      uVar19 = FUN_03052638(_fStack0000000000000040,0);
      uVar18 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar18,*(undefined8 *)PTR_DAT_03d9c938,
                            uVar19,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f2acc(uVar18,0);
    }
    puVar9 = PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar17 == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_036acd60;
    }
    lVar23 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar23 = *(long *)puVar9;
    }
    plVar41 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    lVar23 = **(long **)(lVar23 + 0xb8);
    if (lVar23 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
    iVar12 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x60), lVar23 == 0))
    goto LAB_036afadc;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                0xe0) == 0) {
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
         **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    in_stack_000000f8 =
         *(long **)(*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) +
                   1);
    lVar23 = unaff_x19[0xe3];
    in_stack_000000d0 = in_stack_00000108._4_4_;
    _fStack00000000000000c8 = (ulong)in_stack_000000f8;
    if (iVar14 < 0x401) {
      if (iVar14 == 0x100) {
        if (lVar23 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar23 + 0x18) < 2) goto LAB_036afbe8;
        uVar18 = *(undefined8 *)(lVar23 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000190 + 0x58), lVar29 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          fVar51 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar51 = *(float *)(unaff_x19 + 0x97);
        }
        in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x2c);
        fVar51 = (0.0 - fVar51) - fStack0000000000000020;
      }
      else if (iVar14 == 0x200) {
        if (lVar23 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_036afbe8;
        in_stack_000000d0 = (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
        uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar23 + 0x24) +
                          (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000190 + 0x58), lVar23 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          lVar23 = lVar23 + (long)(int)uStack0000000000000030 * 0x14;
          in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
          fVar51 = ((fStack0000000000000020 + *(float *)(lVar23 + 0x28) + *(float *)(lVar23 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
          fVar51 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar14 != 0x400) goto LAB_036ad288;
        if (lVar23 == 0) goto LAB_036afadc;
        if (*(int *)(lVar23 + 0x18) == 0) goto LAB_036afbe8;
        uVar18 = *(undefined8 *)(lVar23 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000190 + 0x58), lVar29 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          in_stack_00001098 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x20);
        fVar51 = fStack0000000000000024 + (0.0 - in_stack_00001098);
      }
LAB_036ad278:
      _fStack00000000000000c8 =
           CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar51);
    }
    else if (iVar14 == 0x800) {
      if (lVar23 == 0) goto LAB_036afadc;
      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_036afbe8;
      fVar51 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
      _fStack00000000000000c8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30))
                    * 0.5 + 0.0);
      in_stack_000000d0 = fVar51;
    }
    else {
      if (iVar14 == 0x1000) {
        if (lVar23 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar23 + 0x18) != 1) && (*(int *)(lVar23 + 0x18) != 0)) {
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar23 + 0x24) +
                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
          in_stack_000000d0 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
          fVar51 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_036ad278;
        }
        goto LAB_036afbe8;
      }
      if (iVar14 == 0x2000) {
        if (lVar23 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0)) goto LAB_036afbe8;
        fVar51 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        _fStack00000000000000c8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30)
                      ) * 0.5 + fVar51);
        in_stack_000000d0 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
      }
    }
LAB_036ad288:
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    uVar18 = FUN_03afb088(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar8);
    }
    uVar22 = FUN_03922f24(uVar18,0,0);
    lVar23 = FUN_036dfed8();
    if (lVar23 == 0) goto LAB_036afadc;
    FUN_0392a7f0(lVar23,0);
    *(float *)(unaff_x19 + 0xe2) = fVar51;
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar14 = FUN_03afa68c(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    fVar55 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
    uVar64 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
    }
    if (DAT_03ff747c == '\0') {
      thunk_FUN_01ad9084(PTR_DAT_03d9c888);
      DAT_03ff747c = '\x01';
    }
    puVar8 = PTR_DAT_03d9c888;
    lVar23 = *(long *)PTR_DAT_03d9c888;
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar23 = *(long *)puVar8;
    }
    puVar27 = *(undefined4 **)(lVar23 + 0xb8);
    uVar20 = (ulong)(uint)puVar27[1];
    uVar56 = (ulong)(uint)puVar27[2];
    uVar57 = (ulong)(uint)puVar27[3];
    FUN_036c214c(*puVar27,uVar20,uVar56,uVar57,&stack0x00001070,0x4000ffff,0);
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar23 = *in_stack_00000190;
    if (lVar23 == 0) goto LAB_036afadc;
    uVar49 = *unaff_x20;
    if ((int)uVar49 < 1) {
      in_stack_000000e0._4_4_ = 0.0;
      iVar12 = 0;
      goto LAB_036af524;
    }
    lVar23 = *(long *)(lVar23 + 0x38);
    fVar51 = ABS(fVar51);
    fVar65 = 1.0;
    if ((uVar22 & 1) == 0) {
      fVar65 = fVar51;
    }
    if (lVar23 == 0) goto LAB_036afadc;
    bVar11 = false;
    bVar10 = false;
    _fStack0000000000000138 = 0;
    bVar7 = false;
    in_stack_000000e0._4_4_ = 0.0;
    fStack000000000000002c = 0.0;
    in_stack_00000170._4_4_ = 0.0;
    uStack0000000000000074 = 0;
    lVar29 = 0x2e0;
    fVar59 = 0.0;
    fVar44 = 0.0;
    fStack00000000000000d4 = fStack00000000000000e8;
    fStack00000000000000d8 = fStack00000000000000ec;
    fStack0000000000000114 = *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
    _in_stack_00000078 = fStack00000000000000ec;
    fStack00000000000000a4 = fStack00000000000000ec;
    fStack00000000000000a8 = fStack00000000000000e8;
    fStack0000000000000110 = 0.0;
    in_stack_00000090._4_4_ = 0.0;
    fStack000000000000004c = 0.0;
    fStack00000000000000b0 = 0.0;
    fStack0000000000000040 = 0.0;
    uStack000000000000007c = in_stack_000000c0._4_4_;
    fStack0000000000000080 = fStack00000000000000e8;
    fStack00000000000000a0 = (float)in_stack_000000c0._4_4_;
    uVar17 = 1;
    uVar13 = 0;
    goto LAB_036ad4b0;
  }
  goto LAB_036afadc;
code_r0x036a8fdc:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar20 = FUN_036e7318();
  if (((uVar20 & 1) != 0) &&
     (in_stack_00001068 = in_stack_0000104c, uVar17 = in_stack_0000109c,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  uVar49 = *unaff_x20;
  if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
  lVar42 = (long)(int)uVar49;
  cVar26 = *(char *)(lVar23 + lVar42 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar29 = unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar49) {
    in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_0000109c == 0x2026) {
      *(long *)(lVar23 + lVar42 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
      uVar49 = *unaff_x20;
      if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
      unaff_w23 = 1;
      *(int *)(lVar23 + (long)(int)uVar49 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar49 + 1);
    }
    else if (in_stack_0000109c == 3) {
      if ((*in_stack_00000178 == 0) || (lVar21 = FUN_036c835c(*in_stack_00000178,0), lVar21 == 0))
      goto LAB_036afadc;
      uVar18 = FUN_0262f3a4(lVar21,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
      *(undefined8 *)(lVar23 + lVar42 * unaff_x24 + 0x30) = uVar18;
      thunk_FUN_01b4f09c();
      uVar49 = *(uint *)((long)unaff_x19 + 0x494);
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
  if (((int)uVar49 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
    lVar23 = lVar23 + (long)(int)uVar49 * (long)iVar14;
    *(undefined1 *)(lVar23 + 0x194) = 0;
    *(undefined2 *)(lVar23 + 0x20) = 0x200b;
    *(undefined4 *)(lVar23 + 100) = 0;
    *unaff_x20 = uVar49 + 1;
    uVar17 = in_stack_0000109c;
    goto LAB_036a9250;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar49 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar49 >> 4 & 1) == 0) {
      if ((uVar49 >> 3 & 1) == 0) {
        fVar55 = 1.0;
        if ((uVar49 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_02fdd9e8(in_stack_0000109c,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar49 = FUN_02fddc48(in_stack_0000109c,0);
            in_stack_0000109c = uVar49 & 0xffff;
            fVar55 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdd92c(in_stack_0000109c,0);
        fVar55 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar49 = FUN_02fdddc0(in_stack_0000109c,0);
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
      uVar20 = FUN_02fdd9e8(in_stack_0000109c,0);
      fVar55 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar49 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
        fVar55 = 1.0;
        in_stack_0000109c = uVar49 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_036a9280;
LAB_036a9668:
    if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
    uVar17 = in_stack_0000109c;
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
    uVar17 = *unaff_x20;
    uVar49 = *(uint *)(lVar23 + 0x18);
    if (uVar49 <= uVar17) goto LAB_036afbe8;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar23 + (long)(int)uVar17 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_036a9778:
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar65 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar23 = unaff_x19[0x20];
    }
    else {
      lVar29 = unaff_x19[0x8f];
      if (lVar29 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      if ((*(int *)(lVar29 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
      if (uVar49 <= uVar17 - 1) goto LAB_036afbe8;
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar65 = *(float *)(lVar23 + (long)(int)(uVar17 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar23 = *in_stack_00000178;
    }
    if (lVar23 == 0) goto LAB_036afadc;
    fVar59 = (float)FUN_0396ac34(lVar23 + 0x50,0);
    fVar44 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar44 = 1.0;
    }
    fVar61 = 0.0;
    fVar46 = 0.0;
    if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar46 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar61 = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
    }
    lVar23 = unaff_x19[0xc9];
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_036afadc;
    fVar45 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = *(float *)(lVar23 + 0x2c);
    fVar51 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar62 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar54 = *(float *)((long)unaff_x19 + 0x404);
    fVar48 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
    lVar23 = unaff_x19[0x6d];
    if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar44 = ((fVar55 * fVar65) / (float)iVar12) * fVar59 * fVar44;
    fVar51 = fVar44 * fVar45 * fVar47 * fVar51;
    *(float *)(lVar29 + 0x160) = fVar51;
    uVar49 = *(uint *)(unaff_x19 + 0x24);
    fVar48 = fVar44 * fVar62 * fVar54 * fVar48;
    fStack000000000000012c = fVar61;
    if (uVar49 == 0) {
      in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar29 = unaff_x19[0xe1];
      if (lVar29 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar29 + 0x18) <= uVar49) goto LAB_036afbe8;
      lVar29 = *(long *)(lVar29 + (long)(int)uVar49 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_036afadc;
      in_stack_00000170._4_4_ = *(float *)(lVar29 + 0x10c);
    }
FUN_036a9b34:
    unaff_x29 = &stack0x00000fc0;
    fVar65 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar65 = fVar51;
    }
  }
  else {
    fVar55 = 1.0;
    if (iVar12 == 0) goto LAB_036a9668;
LAB_036a9280:
    if (iVar12 == 1) {
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
      lVar23 = FUN_02b59714(lVar23,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      puVar8 = PTR_DAT_03d9c920;
      if (lVar23 == 0) {
        unaff_x29 = &stack0x00000fc0;
        uVar17 = in_stack_0000109c;
        goto LAB_036a9250;
      }
      if (in_stack_0000109c == 0x3c) {
        in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar42 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar42 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar42 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar44 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar65 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar65 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar65 = (fVar51 / (float)iVar12) * fVar44 * fVar65;
      iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar51 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar59 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        fVar44 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar44 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar23 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(lVar23 + 0x20),0);
        fVar45 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(lVar23 + 0x20) == 0) goto LAB_036afadc;
        fVar62 = *(float *)(lVar23 + 0x2c);
        fVar47 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar46 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar54 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar50 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar48 = fVar65 * fVar54 * fVar50 * fVar48;
        fVar44 = (fVar51 / (float)iVar12) * fVar59 * fVar44;
        fVar51 = fVar44 * (fVar61 / fVar45) * fVar62 * fVar47;
        fVar44 = fVar44 / fVar51;
        fVar46 = fVar44 * fVar46;
        fVar65 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar44 = fVar44 * fVar65;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar23 + 0x20) == 0) goto LAB_036afadc;
        fVar61 = *(float *)(lVar23 + 0x2c);
        fVar59 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar59 = 1.0;
        }
        fVar45 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar46 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar47 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar48 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar48 = fVar65 * fVar47 * fVar62 * fVar48;
        fVar51 = (fVar51 / (float)iVar12) * fVar44 * fVar59 * fVar61 * fVar45;
        fVar44 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = lVar23;
      thunk_FUN_01b4f09c(in_stack_000000f8,lVar23);
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar23 + 0x2c) = 1;
      *(float *)(lVar23 + 0x160) = fVar51;
      *(long *)(lVar23 + 0x40) = *in_stack_000000b8;
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      thunk_FUN_01b4f09c();
      lVar23 = *in_stack_00000190;
      if ((lVar23 == 0) || (lVar42 = *(long *)(lVar23 + 0x38), lVar42 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      in_stack_00000170._4_4_ = 0.0;
      *(int *)(lVar42 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar29;
      fStack000000000000012c = fVar44;
      goto FUN_036a9b34;
    }
    lVar23 = *in_stack_00000190;
    fVar65 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar65 = fVar51;
    }
    fVar48 = 0.0;
    if (lVar23 == 0) goto LAB_036afadc;
    fVar46 = 0.0;
    fStack000000000000012c = 0.0;
  }
  lVar23 = *(long *)(lVar23 + 0x38);
  if (lVar23 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar23 + 0x20) = (short)in_stack_0000109c;
  *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(int *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  uVar49 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  *(undefined8 *)(unaff_x29 + 0xe8) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0xe0) = in_stack_000001d0;
  if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
  uVar19 = *(undefined8 *)(unaff_x29 + 0xe8);
  uVar18 = *(undefined8 *)(unaff_x29 + 0xe0);
  lVar23 = lVar23 + (long)(int)uVar49 * unaff_x24;
  *(undefined4 *)(lVar23 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar23 + 0x184) = uVar19;
  *(undefined8 *)(lVar23 + 0x17c) = uVar18;
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar23,0);
  puVar8 = StringLiteral_455;
  *(undefined8 *)(unaff_x29 + 0x98) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0x90) = in_stack_000001d0;
  if ((int)in_stack_0000109c < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar49 = FUN_02fdb080(in_stack_0000109c,0);
    unaff_w21 = uVar49 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  uVar49 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar49 << 0x20;
    fVar59 = 0.0;
    fVar44 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar13 = *unaff_x20;
    uVar17 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar13 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= uVar13 + 1) goto LAB_036afbe8;
      lVar23 = *(long *)(lVar23 + (long)(int)(uVar13 + 1) * (long)iVar14 + 0x30);
      if ((((lVar23 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar29 = *(long *)(*in_stack_00000178 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_036afadc;
      uVar22 = FUN_02630bd0(lVar29,uVar17 | *(int *)(lVar23 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar64 = 0;
      if ((uVar22 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar49 << 0x20;
        fVar59 = 0.0;
        fVar44 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar64 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar44 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar59 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar49 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar49,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar13 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000138 = (ulong)uVar49 << 0x20;
      fVar59 = 0.0;
      fVar44 = 0.0;
    }
    if (0 < (int)uVar13) {
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= uVar13 - 1) goto LAB_036afbe8;
      lVar23 = *(long *)(lVar23 + (ulong)(uVar13 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar23 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar29 = *(long *)(*in_stack_00000178 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_036afadc;
      uVar22 = FUN_02630bd0(lVar29,*(uint *)(lVar23 + 0x28) | uVar17 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar22 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar52 = (undefined4)_fStack0000000000000138;
        fVar44 = (float)FUN_036d2d10(fVar44,fVar59,_fStack0000000000000138 & 0xffffffff,uVar64,
                                     *(undefined4 *)(in_stack_00000fb8 + 0x28),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x2c),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x30),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x34),0);
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          fStack000000000000013c = 0.0;
        }
        _fStack0000000000000138 = CONCAT44(fStack000000000000013c,uVar52);
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar45 = *(float *)(unaff_x19 + 200);
    fVar61 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar45 = fVar45 - fVar65 * fVar61 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar45;
    if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) = fVar45 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar61 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000098 = 0.0;
  if (fVar61 != 0.0) {
    fVar45 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar47 = (float)FUN_0396af78(&stack0x00001050,0);
    in_stack_00000098 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar61 * 0.5 - fVar65 * (fVar45 * 0.5 + fVar47));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000098;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar23 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar22 = FUN_0391f968(lVar23,0,0);
    in_stack_000000d0 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar23 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar23 == 0) goto LAB_036afadc;
      uVar22 = FUN_038ffa04(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      in_stack_000000d0 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar23 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar23 == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_03900954(lVar23,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar45 = *(float *)(*in_stack_00000178 + 0x1b0);
        in_stack_000000d0 =
             (float)FUN_03900954(*in_stack_00000168,
                                 *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        in_stack_000000d0 = in_stack_000000d0 * fVar61 * fVar45 * 0.25;
        if (fVar61 < in_stack_00000170._4_4_ + in_stack_000000d0) {
          in_stack_00000170._4_4_ = fVar61 - in_stack_000000d0;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_000000e0._4_4_ = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar23 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar22 = FUN_0391f968(lVar23,0,0);
    in_stack_000000e0._4_4_ = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar23 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar23 == 0) goto LAB_036afadc;
      uVar22 = FUN_038ffa04(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar22 & 1) != 0) {
        lVar23 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar23 == 0) goto LAB_036afadc;
        uVar22 = FUN_038ffa04(lVar23,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar22 & 1) != 0) {
          lVar23 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar23 == 0) goto LAB_036afadc;
          fVar61 = (float)FUN_03900954(lVar23,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
          fVar45 = *(float *)(*in_stack_00000178 + 0x1a8);
          in_stack_000000d0 =
               (float)FUN_03900954(*in_stack_00000168,
                                   *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          in_stack_000000d0 = in_stack_000000d0 * fVar61 * fVar45 * 0.25;
          if (fVar61 < in_stack_00000170._4_4_ + in_stack_000000d0) {
            in_stack_00000170._4_4_ = fVar61 - in_stack_000000d0;
          }
          goto LAB_036aa254;
        }
      }
    }
    in_stack_000000d0 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar61 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar65 * (fVar44 + ((fVar61 - in_stack_00000170._4_4_) - in_stack_000000d0));
  fVar44 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar45 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar48 + fVar65 * (fVar59 + in_stack_00000170._4_4_ + fVar44)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar44 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar47 = fVar45 - fVar65 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar44);
  fVar44 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar61 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar65 * (in_stack_000000d0 + in_stack_000000d0 +
                    in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar44);
  fVar44 = fStack0000000000000124;
  fVar59 = fVar61;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar62 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar44 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar58 = fVar62 * fVar65 * (in_stack_000000d0 + in_stack_00000170._4_4_ + fVar44);
    fVar44 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar59 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar45 = fVar45 + 0.0;
    fVar47 = fVar47 + 0.0;
    fVar54 = fStack0000000000000124 + fVar58;
    fVar62 = fVar62 * fVar65 * (((fVar44 - fVar59) - in_stack_00000170._4_4_) - in_stack_000000d0);
    fVar59 = fVar61 + fVar62;
    fVar50 = (fVar58 - fVar62) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar62) - fVar50;
    fVar61 = (fVar61 + fVar58) - fVar50;
    fVar44 = fVar54 - fVar50;
    fVar59 = fVar59 - fVar50;
  }
  _fStack0000000000000140 = (ulong)(uint)fVar65;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar62 = 0.0;
    fVar50 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar54 = fVar47;
    fStack0000000000000114 = fVar45;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar63 = (fVar47 + fVar45) * 0.5;
    fVar60 = (fVar61 + fStack0000000000000124) * 0.5;
    fVar45 = fVar45 - fVar63;
    fStack0000000000000110 = 0.0;
    fVar53 = fVar45;
    fVar44 = (float)FUN_03911ddc(fVar44 - fVar60,_fStack0000000000000080,0);
    fVar44 = fVar60 + fVar44;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar47 = fVar47 - fVar63;
    fVar62 = 0.0;
    fVar54 = fVar47;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar60,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar60 + fStack0000000000000124;
    fVar62 = fVar62 + 0.0;
    fVar58 = 0.0;
    fVar61 = (float)FUN_03911ddc(fVar61 - fVar60,_fStack0000000000000080,0);
    fVar61 = fVar60 + fVar61;
    fVar45 = fVar63 + fVar45;
    fVar58 = fVar58 + 0.0;
    fVar50 = 0.0;
    fVar59 = (float)FUN_03911ddc(fVar59 - fVar60,_fStack0000000000000080,0);
    fVar59 = fVar60 + fVar59;
    fVar47 = fVar63 + fVar47;
    fVar50 = fVar50 + 0.0;
    fVar54 = fVar63 + fVar54;
    fStack0000000000000114 = fVar63 + fVar53;
  }
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar23 = *(long *)(*in_stack_00000190 + 0x38);
  unaff_d13 = (ulong)(uint)fVar65;
  if (lVar23 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar23 + 0x120) = fVar54;
  *(float *)(lVar23 + 0x124) = fVar62;
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x110) = fVar44;
  *(float *)(lVar23 + 0x114) = fStack0000000000000114;
  *(float *)(lVar23 + 0x118) = fStack0000000000000110;
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x128) = fVar61;
  *(float *)(lVar23 + 300) = fVar45;
  *(float *)(lVar23 + 0x130) = fVar58;
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar23 = lVar23 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar23 + 0x134) = fVar59;
  *(float *)(lVar23 + 0x138) = fVar47;
  *(float *)(lVar23 + 0x13c) = fVar50;
  if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
  goto LAB_036afadc;
  uVar49 = *unaff_x20;
  unaff_x26 = (long)(int)uVar49;
  if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
  lVar29 = lVar23 + unaff_x26 * unaff_x24;
  *(int *)(lVar29 + 0x140) = (int)unaff_x19[200];
  fVar59 = *(float *)(unaff_x19 + 0x9b);
  uVar22 = (ulong)(uint)fVar59;
  fVar44 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar29 + 0x15c) = (fVar61 - fStack0000000000000124) / (fStack0000000000000114 - fVar54)
  ;
  *(float *)(lVar29 + 0x14c) = (fVar48 - fVar59) + fVar44;
  fVar46 = fVar46 * fVar65;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar46 = fVar46 / fVar55;
    fStack000000000000012c = (fStack000000000000012c * fVar65) / fVar55;
  }
  else {
    fStack000000000000012c = fStack000000000000012c * fVar65;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar49 == unaff_w25)) {
    fStack000000000000012c = fVar44 + fStack000000000000012c;
    fVar46 = fVar44 + fVar46;
    fVar45 = fStack000000000000012c;
    fVar61 = fVar46;
    if (fVar44 != 0.0) {
      fVar61 = (fVar46 - fVar44) / *(float *)((long)unaff_x19 + 0x404);
      fVar45 = (fStack000000000000012c - fVar44) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar61 <= fVar46) {
        fVar61 = fVar46;
      }
      if (fStack000000000000012c <= fVar45) {
        fVar45 = fStack000000000000012c;
      }
    }
    lVar23 = lVar23 + unaff_x26 * unaff_x24;
    fVar44 = fVar61;
    if (fVar61 <= *(float *)(unaff_x19 + 0x99)) {
      fVar44 = *(float *)(unaff_x19 + 0x99);
    }
    fVar47 = fVar45;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar45) {
      fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar47;
    *(float *)(unaff_x19 + 0x99) = fVar44;
    *(float *)(lVar23 + 0x154) = fVar61;
    *(float *)(lVar23 + 0x158) = fVar45;
    *(float *)(lVar23 + 0x148) = fVar46 - fVar59;
    *(float *)(unaff_x19 + 0x98) = fVar46 - fVar59;
    *(float *)(lVar23 + 0x150) = fStack000000000000012c - fVar59;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack000000000000012c - fVar59;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar44;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar44 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar59 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      fVar55 = (fVar65 * fVar59) / fVar55;
      uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar44 <= fVar55) {
        fVar44 = fVar55;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar44;
    }
    if ((float)uVar22 == 0.0) {
      fVar55 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= fVar46) {
        fVar55 = fVar46;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar55;
    }
  }
  else {
    fVar55 = *(float *)(unaff_x19 + 0x99);
    lVar23 = lVar23 + unaff_x26 * unaff_x24;
    *(float *)(lVar23 + 0x154) = fVar55;
    fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar55 = fVar55 - fVar59;
    *(float *)(lVar23 + 0x148) = fVar55;
    *(float *)(lVar23 + 0x158) = fVar44;
    *(float *)(unaff_x19 + 0x98) = fVar55;
    fVar44 = fVar44 - fVar59;
    *(float *)(lVar23 + 0x150) = fVar44;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar44;
  }
  lVar23 = *in_stack_00000190;
  if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_036afadc;
  unaff_w27 = *unaff_x20;
  if (*(uint *)(lVar29 + 0x18) <= unaff_w27) goto LAB_036afbe8;
  lVar29 = lVar29 + (long)(int)unaff_w27 * unaff_x24;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  if ((in_stack_0000109c == 9) ||
     (((((unaff_w21 == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b)) &&
       (in_stack_0000109c != 0xad)) ||
      (((bool)(in_stack_0000109c == 0xad & (bVar7 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x644) == 1)
       ))))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar30 = _fStack00000000000000a8;
    pfVar33 = _fStack00000000000000b0;
    if (unaff_w23 != 0) {
      lVar23 = *(long *)(lVar23 + 0x50);
      if (lVar23 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar33 = (float *)(lVar23 + 0x60);
      pfVar30 = (float *)(lVar23 + 100);
    }
    unaff_s8 = *pfVar33;
    unaff_s9 = *pfVar30;
    fVar55 = *(float *)(unaff_x19 + 0x6c);
    fVar44 = *(float *)(unaff_x19 + 200);
    in_stack_00000108._4_4_ = (fStack00000000000000a4 - unaff_s8) - unaff_s9;
    bVar10 = true;
    if ((fVar55 <= in_stack_00000108._4_4_) && (bVar10 = false, !NAN(fVar55))) {
      bVar10 = fVar55 == -1.0;
    }
    if (!bVar10) {
      in_stack_00000108._4_4_ = fVar55;
    }
    fVar55 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar55 = (float)FUN_0396af88(&stack0x00001050,0);
      uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    param_2 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar59 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_0000109c != 0xad) {
      fVar51 = fVar65;
    }
    fVar46 = (float)uVar22;
    fVar65 = 0.0;
    if ((0.0 < fVar46) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar65 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    unaff_w27 = *unaff_x20;
    fVar65 = (*(float *)(unaff_x19 + 0x97) - (fVar59 - fVar46)) + fVar65;
    uVar17 = in_stack_0000109c;
    if (fStack00000000000000c8 < fVar65) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
      }
      puVar8 = PTR_DAT_03d9c920;
      uVar18 = DAT_00b92750;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar61 = *(float *)(unaff_x19 + 0x59);
        if (((fVar61 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar46)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar55 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar65) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000058._4_4_;
          if (fVar55 <= fVar61) {
            fVar55 = fVar61;
          }
          goto LAB_036ad184;
        }
        fVar46 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar65 = *(float *)(unaff_x19 + 0x4a);
        uVar22 = (ulong)(uint)fVar65;
        if ((fVar65 < fVar46) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar51 = (fVar46 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar51 <= DAT_00b55428) {
            fVar51 = DAT_00b55428;
          }
          fVar51 = (fVar46 - fVar51) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar46;
          fVar55 = DAT_00b556b4;
          if (fVar51 != INFINITY) {
            fVar55 = (float)(int)fVar51 / 20.0;
          }
          if (fVar55 <= fVar65) {
            fVar55 = fVar65;
          }
          goto LAB_036acc94;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar23 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar23 = *(long *)puVar8;
        }
        lVar29 = *(long *)(lVar23 + 0xb8);
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(lVar29 + 0x1580) == 0) goto LAB_036acbbc;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar29 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar29 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
        goto LAB_036ab014;
      default:
        goto switchD_036aaa24_caseD_2;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
LAB_036aabc0:
        unaff_x29 = &stack0x00000fc0;
        in_stack_00001068 = FUN_036ecf20();
        break;
      case 5:
        if ((unaff_w27 == 0) || ((int)in_stack_00001068 < 0)) {
          *unaff_x20 = 0;
          unaff_x29 = &stack0x00000fc0;
          in_stack_00001068 = 0xffffffff;
          in_stack_00001088 = uVar18;
          goto LAB_036a9250;
        }
        fVar51 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if (fVar51 - fVar59 <= fStack00000000000000c8) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar22 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar23 = NEON_rev64(uVar22,4);
          unaff_x19[0x99] = lVar23;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          goto LAB_036a9250;
        }
        break;
      case 6:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar23 = unaff_x19[0x5d];
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar20 = FUN_0391f968(lVar23,0,0);
        if ((uVar20 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x560));
          lVar23 = unaff_x19[0x5d];
          if (lVar23 == 0) goto LAB_036afadc;
          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_036aad90:
      in_stack_00001088 = CONCAT44(3,unaff_w27);
      uVar17 = in_stack_0000109c;
      goto LAB_036a9250;
    }
switchD_036aaa24_caseD_2:
    puVar8 = PTR_DAT_03d9c920;
    unaff_s12 = 1.0;
    fVar65 = 1.0 - param_2;
    uVar22 = (ulong)(uint)fVar65;
    unaff_s11 = ABS(fVar44) + fVar55 * fVar65 * fVar51;
    if (unaff_w28 != 0) {
      unaff_s12 = DAT_00b55374;
    }
    fVar51 = unaff_s12 * in_stack_00000108._4_4_;
    if (fVar51 < unaff_s11) {
      if (((char)unaff_x19[0x5b] != '\0') && (unaff_w27 != *(uint *)(unaff_x19 + 0x93))) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        unaff_x29 = &stack0x00000fc0;
        in_stack_00001068 = FUN_036ecf20();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
          lVar23 = *in_stack_00000190;
          if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
          fVar51 = *(float *)(unaff_x19 + 0x9b);
          fVar55 = 0.0;
          if ((0.0 < fVar51) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar55 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar55 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar29 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar55 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700))
          ;
        }
        else {
          lVar23 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar23 == 0) goto LAB_036afadc;
          fVar51 = *(float *)(unaff_x19 + 0x9b);
          fVar55 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
        }
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_036afadc;
        uVar49 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar23 + 0x18) <= uVar49) ||
           (uVar13 = uVar49 - 1, *(uint *)(lVar23 + 0x18) <= uVar13)) goto LAB_036afbe8;
        uVar22 = (ulong)(uint)(fVar55 + *(float *)(unaff_x19 + 0x97));
        unaff_s10 = (fVar55 + *(float *)(unaff_x19 + 0x97) + fVar51) -
                    *(float *)(lVar23 + (long)(int)uVar49 * unaff_x24 + 0x158);
        if ((!bVar7 && *(short *)(lVar23 + (long)(int)uVar13 * (long)iVar14 + 0x20) == 0xad) &&
           ((unaff_s10 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
          bVar7 = false;
          *unaff_x20 = uVar13;
          in_stack_00001068 = in_stack_00001068 - 1;
          in_stack_00001088 = CONCAT44(0x2d,uVar13);
          goto LAB_036a9250;
        }
        if (*(short *)(lVar23 + (long)(int)uVar49 * unaff_x24 + 0x20) == 0xad) {
          bVar7 = true;
          goto LAB_036a9250;
        }
        if ((in_stack_00000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) goto code_r0x036ab2f4;
        goto LAB_036ab340;
      }
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        param_1 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (param_2 < param_1) {
          fVar51 = unaff_s11 / fVar65;
          if (param_2 <= 0.0) {
            fVar51 = unaff_s11;
          }
          param_2 = param_2 + (unaff_s11 - unaff_s12 * (in_stack_00000108._4_4_ + DAT_00b5556c)) /
                              fVar51;
          goto LAB_036afb6c;
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar22 = (ulong)(uint)fVar55;
        fVar51 = *(float *)(unaff_x19 + 0x4a);
        if (fVar51 < fVar55) goto LAB_036afae0;
      }
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar23 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar23 = *(long *)puVar8;
        }
        lVar29 = *(long *)(lVar23 + 0xb8);
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(lVar29 + 0x1580) == 0) {
LAB_036acbbc:
          in_stack_00001088 = DAT_00b92750;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_00001068 = 0xffffffff;
          uVar17 = in_stack_0000109c;
          goto LAB_036a9250;
        }
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar29 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar29 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x00000550,&stack0x000010a0,0x378);
LAB_036ab014:
        unaff_x29 = &stack0x00000fc0;
        iVar12 = FUN_036ecf20();
LAB_036ab020:
        iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
        *(int *)((long)unaff_x19 + 0x494) = iVar15;
        in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
        in_stack_00001068 = iVar12 - 1;
        in_stack_00001088 = CONCAT44(0x2026,iVar15);
        uVar17 = in_stack_0000109c;
        goto LAB_036a9250;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        unaff_x29 = &stack0x00000fc0;
        in_stack_00001068 = FUN_036ecf20();
        lVar23 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar20 = FUN_0391f968(lVar23,0,0);
        if ((uVar20 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x560));
          lVar23 = unaff_x19[0x5d];
          if (lVar23 == 0) goto LAB_036afadc;
          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
LAB_036ab13c:
        in_stack_00001088 = CONCAT44(3,*unaff_x20);
        uVar17 = in_stack_0000109c;
        goto LAB_036a9250;
      }
      if (iVar12 == 3) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        goto LAB_036aabc0;
      }
    }
LAB_036ab54c:
    uStack0000000000000074 = unaff_w21;
    if (in_stack_0000109c == 0xad) {
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined1 *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_0000109c == 9) {
        lVar23 = *in_stack_00000190;
        if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_036afadc;
        uVar17 = *unaff_x20;
        if (*(uint *)(lVar29 + 0x18) <= uVar17) goto LAB_036afbe8;
        *(undefined1 *)(lVar29 + (long)(int)uVar17 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
        lVar29 = *(long *)(lVar23 + 0x50);
        if (lVar29 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        goto LAB_036ab5c8;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))(fVar51,in_stack_000000d0);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
      }
      uVar17 = *unaff_x20;
      if ((in_stack_00000068 & 1) != 0) {
        *(uint *)(in_stack_00000088 + 0x1f0) = uVar17;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar23 = *(long *)(unaff_x19[0x6d] + 0x50), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068 = 0;
      *(float *)(lVar23 + 0x60) = unaff_s8;
      *(float *)(lVar23 + 100) = unaff_s9;
    }
  }
  else {
    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar55 = (float)uVar22;
      fVar51 = 0.0;
      if ((0.0 < fVar55) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar51 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar22 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar55)) + fVar51)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
        }
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar23 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar20 = FUN_0391f968(lVar23,0,0);
        if ((uVar20 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar18,*(undefined8 *)(*plVar41 + 0x560));
          lVar23 = unaff_x19[0x5d];
          if (lVar23 == 0) goto LAB_036afadc;
          *(int *)(lVar23 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar23,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_036aad90;
      }
    }
    if ((((in_stack_0000109c - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_0000109c - 10 < 2)) || (in_stack_0000109c == 0xa0)) {
LAB_036ab188:
      if (((in_stack_0000109c != 0xad) && (in_stack_0000109c != 0x200b)) &&
         (in_stack_0000109c != 0x2060)) {
        lVar23 = *in_stack_00000190;
        if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x50), lVar29 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar22 = FUN_02fdea78(in_stack_0000109c,0);
      if ((uVar22 & 1) != 0) goto LAB_036ab188;
    }
    uStack0000000000000074 = unaff_w21;
    if (in_stack_0000109c == 0xa0) {
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x50), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
      uStack0000000000000074 = unaff_w21;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar51 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar65 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
    lVar23 = unaff_x19[0xca];
    fVar55 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar55 = 1.0;
    }
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_036afadc;
    fVar59 = *(float *)((long)unaff_x19 + 0x404);
    fVar61 = *(float *)(lVar23 + 0x2c);
    fVar44 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
    fVar46 = *_fStack00000000000000b0;
    fVar44 = fVar59 * (fVar51 / (float)iVar12) * fVar65 * fVar55 * fVar61 * fVar44;
    fVar51 = *_fStack00000000000000a8;
    if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x38), lVar23 == 0))
      goto LAB_036afadc;
      uVar17 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_036afbe8;
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar55 = *(float *)(lVar23 + (long)(int)uVar17 * (long)iVar14 + 0x60);
      iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar59 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
      lVar23 = unaff_x19[0xca];
      fVar65 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar65 = 1.0;
      }
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_036afadc;
      fVar61 = *(float *)((long)unaff_x19 + 0x404);
      fVar45 = *(float *)(lVar23 + 0x2c);
      fVar44 = (float)FUN_0396b17c(*(long *)(lVar23 + 0x20),0);
      if ((*in_stack_00000190 == 0) || (lVar23 = *(long *)(*in_stack_00000190 + 0x50), lVar23 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar46 = *(float *)(lVar23 + 0x60);
      fVar51 = *(float *)(lVar23 + 100);
      fVar44 = fVar61 * (fVar55 / (float)iVar12) * fVar59 * fVar65 * fVar45 * fVar44;
    }
    fVar59 = *(float *)(unaff_x19 + 0x9b);
    fVar55 = 0.0;
    fVar65 = 0.0;
    if ((0.0 < fVar59) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar65 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar45 = *(float *)(unaff_x19 + 0x97);
    fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar61 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar23 = *(long *)(unaff_x19[0xca] + 0x20), lVar23 == 0))
      goto LAB_036afadc;
      FUN_0396b140(&stack0x000010a0,lVar23,0);
      fVar55 = (float)FUN_0396af88(&stack0x00000fc0,0);
    }
    puVar8 = PTR_DAT_03d9c920;
    fVar62 = *(float *)(unaff_x19 + 0x6c);
    fVar51 = (fStack00000000000000a4 - fVar46) - fVar51;
    bVar10 = true;
    if ((fVar62 <= fVar51) && (bVar10 = false, !NAN(fVar62))) {
      bVar10 = fVar62 == -1.0;
    }
    if (!bVar10) {
      fVar51 = fVar62;
    }
    fVar46 = 1.0;
    if (unaff_w28 != 0) {
      fVar46 = DAT_00b55374;
    }
    if (((fVar45 - (fVar47 - fVar59)) + fVar65 < fStack00000000000000c8) &&
       (ABS(fVar61) + fVar44 * fVar55 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar46 * fVar51)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      lVar23 = *(long *)(*(long *)puVar8 + 0xb8);
      uVar18 = *(undefined8 *)PTR_DAT_03d9c8c8;
      memcpy(&stack0x000010a0,(void *)(lVar23 + 0x788),0x378);
      FUN_02178ef4(lVar23 + 0x11f0,&stack0x000010a0,uVar18);
    }
  }
  lVar23 = *in_stack_00000190;
  if (lVar23 == 0) goto LAB_036afadc;
  lVar29 = *(long *)(lVar23 + 0x38);
  unaff_d13 = _fStack0000000000000140 & 0xffffffff;
  if (lVar29 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar29 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  uVar17 = *(uint *)(unaff_x19 + 0x95);
  lVar29 = lVar29 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar29 + 100) = uVar17;
  *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x96];
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_0000109c || ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0)))) {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_036afadc;
LAB_036aba84:
    if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_036afbe8;
    *(int *)(lVar23 + (long)(int)uVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_036afbe8;
    if (*(int *)(lVar23 + (long)(int)uVar17 * 0x5c + 0x24) == 1) goto LAB_036aba84;
  }
  if (in_stack_0000109c == 9) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar51 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar65 = *(float *)(unaff_x19 + 200);
    fVar55 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar51 = fStack0000000000000140 * fVar51 * fVar55;
    fVar55 = fVar51 * (float)(int)(fVar65 / fVar51);
    uVar22 = (ulong)(uint)fVar55;
    if (fVar55 <= fVar65) {
      fVar55 = fVar65 + fVar51;
    }
LAB_036abca4:
    *(float *)(unaff_x19 + 200) = fVar55;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar65 = 1.0;
      }
      else {
        fVar65 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
      }
      fVar55 = *(float *)(unaff_x19 + 200);
      fVar44 = (float)FUN_0396af88(&stack0x00001050,0);
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar51 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar55 = fVar55 + fVar51 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fStack0000000000000140 * (fStack0000000000000138 + fVar65 * fVar44)
                                 + in_stack_000000f0 *
                                   (in_stack_000000e0._4_4_ +
                                   fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar55;
      goto joined_r0x036abbe8;
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar55 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fStack0000000000000140 * fStack0000000000000138 +
             in_stack_000000f0 *
             (in_stack_000000e0._4_4_ +
             fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    uVar22 = (ulong)(uint)fVar55;
    fVar55 = *(float *)(unaff_x19 + 200) - fVar55;
    *(float *)(unaff_x19 + 200) = fVar55;
    if ((in_stack_0000109c == 0x200b) || (uStack0000000000000074 != 0)) {
      fVar51 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar22 = (ulong)(uint)fVar51;
      fVar55 = fVar55 - fVar51;
      goto LAB_036abca4;
    }
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar51 = *(float *)(unaff_x19 + 200);
    fVar55 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000098) +
                      in_stack_000000f0 *
                      (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar55;
joined_r0x036abbe8:
    if ((in_stack_0000109c == 0x200b) || (uVar22 = (ulong)(uint)fVar51, uStack0000000000000074 != 0)
       ) {
      fVar51 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar22 = (ulong)(uint)fVar51;
      fVar55 = fVar55 + fVar51;
      goto LAB_036abca4;
    }
  }
  lVar23 = *in_stack_00000190;
  if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0)) goto LAB_036afadc;
  uVar13 = *unaff_x20;
  uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar32 <= uVar13) goto LAB_036afbe8;
  *(float *)(lVar29 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar55;
  uVar43 = in_stack_0000109c;
  uVar17 = in_stack_0000109c;
  if ((int)in_stack_0000109c < 0xd) {
    if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
    if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) || ((float)uVar13 == in_stack_00000090._4_4_)
       ) goto LAB_036abd48;
  }
  else {
    if (1 < in_stack_0000109c - 0x2028) {
      if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
      uVar22 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar13 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
    }
LAB_036abd48:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar51 = *(float *)(unaff_x19 + 0x99);
      fVar55 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar51 = fVar51 - fVar55;
      if (((fStack0000000000000060 < ABS(fVar51)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_036ed624(fVar51);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar51;
        *(float *)(unaff_x19 + 0x9b) = fVar51 + *(float *)(unaff_x19 + 0x9b);
        puVar8 = PTR_DAT_03d9c920;
        lVar23 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar23 = *(long *)puVar8;
        }
        lVar29 = *(long *)(lVar23 + 0xb8);
        if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar29 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar29 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
          puVar8 = PTR_DAT_03d9c920;
          lVar23 = *(long *)PTR_DAT_03d9c920;
          memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x000001d0,0x378);
          thunk_FUN_01b4f09c(*(long *)(lVar23 + 0xb8) + 0x818,0);
          lVar23 = *(long *)(*(long *)puVar8 + 0xb8);
          *(float *)(lVar23 + 0x7bc) = fVar51 + *(float *)(lVar23 + 0x7bc);
          *(float *)(lVar23 + 0x800) = fVar51 + *(float *)(lVar23 + 0x800);
          uVar18 = *(undefined8 *)PTR_DAT_03d9c8c8;
          memcpy(&stack0x000010a0,(void *)(lVar23 + 0x788),0x378);
          FUN_02178ef4(lVar23 + 0x11f0,&stack0x000010a0,uVar18);
        }
      }
    }
    unaff_x29 = &stack0x00000fc0;
    fVar65 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar55 = *(float *)((long)unaff_x19 + 0x4cc) - fVar65;
    fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar55 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar51 = fVar55;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar51;
    fVar44 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_00001094 == '\0') {
      in_stack_00001098 = fVar51;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_00001094 = '\x01';
    }
    lVar23 = *in_stack_00000190;
    if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x50), lVar29 == 0)) goto LAB_036afadc;
    uVar13 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar42 = unaff_x19[0x93];
    lVar21 = lVar29 + (long)(int)uVar13 * 0x5c;
    *(int *)(lVar21 + 0x34) = (int)lVar42;
    uVar32 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar42 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar32 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar32;
    *(uint *)(lVar21 + 0x38) = uVar32;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar21 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar32 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar21 + 0x40) = iVar12;
    *(int *)(lVar21 + 0x24) = (*(int *)(lVar21 + 0x3c) - *(int *)(lVar21 + 0x34)) + 1;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_036afbe8;
    uVar64 = *(undefined4 *)(lVar23 + (long)(int)uVar32 * (long)iVar14 + 0x11c);
    lVar29 = lVar29 + (long)(int)uVar13 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar55;
    *(undefined4 *)(lVar29 + 0x6c) = uVar64;
    lVar23 = *in_stack_00000190;
    if ((lVar23 == 0) || (lVar29 = *(long *)(lVar23 + 0x50), lVar29 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    fVar44 = fVar44 - fVar65;
    uVar22 = (ulong)(uint)fVar44;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) =
         *(undefined4 *)(lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar29 + 0x78) = fVar44;
    lVar23 = *in_stack_00000190;
    if ((lVar23 == 0) || (lVar42 = *(long *)(lVar23 + 0x50), lVar42 == 0)) goto LAB_036afadc;
    lVar21 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar29 = lVar42 + lVar21 * 0x5c;
    *(float *)(lVar29 + 0x44) =
         *(float *)(lVar29 + 0x74) - fStack0000000000000140 * in_stack_00000170._4_4_;
    *(float *)(lVar29 + 0x5c) = in_stack_00000108._4_4_;
    if (*(int *)(lVar29 + 0x24) == 1) {
      *(int *)(lVar42 + lVar21 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*in_stack_00000178 == 0) || (lVar29 = *(long *)(lVar23 + 0x38), lVar29 == 0))
    goto LAB_036afadc;
    lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar32 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    if ((*(char *)(lVar29 + lVar36 * unaff_x24 + 0x194) == '\0') &&
       (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar32 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_036afbe8;
    lVar42 = lVar42 + lVar21 * 0x5c;
    fVar65 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (in_stack_000000f0 *
              (in_stack_000000e0._4_4_ +
              fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar51 = -fVar65;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar51 = fVar65;
    }
    *(float *)(lVar42 + 0x58) = *(float *)(lVar29 + lVar36 * unaff_x24 + 0x144) + fVar51;
    *(float *)(lVar42 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar42 + 0x54) = fVar55;
    *(float *)(lVar42 + 0x48) = fStack0000000000000064 + (fVar44 - fVar55);
    *(float *)(lVar42 + 0x4c) = fVar44;
    if ((int)in_stack_0000109c < 0x2d) {
      if (in_stack_0000109c - 10 < 2) {
LAB_036ac1c4:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        lVar23 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar12 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar12;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x50) == 0)) goto LAB_036afadc;
        if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar12) {
          FUN_036ed7dc();
          lVar23 = unaff_x19[0x6d];
          if (lVar23 == 0) goto LAB_036afadc;
        }
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar23 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        fVar51 = *(float *)(lVar23 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
          if ((in_stack_0000109c == 0x2029) || (fVar55 = 0.0, in_stack_0000109c == 10)) {
            fVar55 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar25 = 0;
          fVar55 = fVar51 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700))
                   + in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar55) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_0000109c == 0x2029) || (fVar55 = 0.0, in_stack_0000109c == 10)) {
            fVar55 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar25 = 1;
          fVar55 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar55);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar55;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar25;
        puVar8 = PTR_DAT_03d9c920;
        lVar23 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar23 = *(long *)puVar8;
        }
        uVar18 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar51;
        uVar22 = NEON_rev64(uVar18,4);
        unaff_x19[0x99] = uVar22;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_036ed2b4();
        FUN_036ed2b4();
        in_stack_00000078 = 1;
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068 = 1;
        goto LAB_036a9250;
      }
      if (in_stack_0000109c == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
        in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar43 = 3;
      }
    }
    else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d)) goto LAB_036ac1c4;
  }
LAB_036ac2f4:
  uVar13 = *unaff_x20;
  if (uVar32 <= uVar13) goto LAB_036afbe8;
  if (*(char *)(lVar29 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
    lVar29 = lVar29 + (long)(int)uVar13 * unaff_x24;
    uVar20 = *(ulong *)(lVar29 + 0x11c);
    uVar22 = *(ulong *)(in_stack_00000088 + 0x230);
    *(ulong *)(in_stack_00000088 + 0x230) =
         uVar22 ^ (uVar22 ^ uVar20) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar20));
    uVar20 = *(ulong *)(in_stack_00000088 + 0x238);
    uVar22 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000088 + 0x238) =
         uVar20 ^ (uVar20 ^ uVar22) &
                  ~CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)uVar22 < (float)uVar20));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar43 || ((1 << (ulong)(uVar43 & 0x1f) & 0x2c00U) == 0)))) {
    lVar29 = *(long *)(lVar23 + 0x58);
    if (lVar29 == 0) goto LAB_036afadc;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar29 + 0x18) < iVar12) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52e84((long *)(lVar23 + 0x58),iVar12,1,*(undefined8 *)PTR_DAT_03d9c890);
      lVar23 = *in_stack_00000190;
      if (lVar23 == 0) goto LAB_036afadc;
    }
    lVar29 = *(long *)(lVar23 + 0x58);
    if (lVar29 == 0) goto LAB_036afadc;
    uVar32 = *(uint *)(unaff_x19 + 0x96);
    lVar42 = (long)(int)uVar32;
    uVar13 = *(uint *)(lVar29 + 0x18);
    if (uVar13 <= uVar32) goto LAB_036afbe8;
    lVar21 = lVar29 + lVar42 * 0x14;
    fVar55 = *(float *)(lVar21 + 0x30);
    uVar22 = (ulong)(uint)fVar55;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar55 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar51 = fVar55;
    }
    *(float *)(lVar21 + 0x30) = fVar51;
    uVar43 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar43 == 0 && uVar32 == 0) {
      *(uint *)(lVar29 + (ulong)uVar32 * 0x14 + 0x20) = uVar43;
    }
    else {
      uVar6 = uVar43 - 1;
      if (0 < (int)uVar43) {
        lVar23 = *(long *)(lVar23 + 0x38);
        if (lVar23 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_036afbe8;
        if (uVar32 != *(uint *)(lVar23 + (ulong)uVar6 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar13 <= uVar32 - 1) goto LAB_036afbe8;
          *(uint *)(lVar29 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar6;
          *(uint *)(lVar29 + 0x20 + lVar42 * 0x14) = uVar43;
          goto LAB_036ac564;
        }
      }
      if ((float)uVar43 == in_stack_00000090._4_4_) {
        *(float *)(lVar29 + lVar42 * 0x14 + 0x24) = in_stack_00000090._4_4_;
      }
    }
  }
LAB_036ac564:
  puVar8 = PTR_DAT_03d9c920;
  unaff_x29 = &stack0x00000fc0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_036ac920;
  if ((uStack0000000000000074 == 0) &&
     (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) && (in_stack_0000109c != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((in_stack_00000078 & 1) != 0) goto LAB_036ac6f8;
      goto LAB_036ac91c;
    }
LAB_036ac660:
    if (((((0x2bfd < in_stack_0000109c - 0xac01) && (0xfd < in_stack_0000109c - 0x1101)) &&
         (0x1d < in_stack_0000109c - 0xa961)) || (uVar20 = FUN_036fbce8(0), (uVar20 & 1) != 0)) &&
       ((((0xed < in_stack_0000109c - 0xff01 && (0x1d < in_stack_0000109c - 0xfe31)) &&
         (0x717d < in_stack_0000109c - 0x2e81)) && (0x1fd < in_stack_0000109c - 0xf901))))
    goto LAB_036ac6e8;
    lVar23 = FUN_036fbb7c(0);
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_036afadc;
    uVar13 = FUN_0254f914(*(long *)(lVar23 + 0x10),in_stack_0000109c,*(undefined8 *)PTR_DAT_03d9c860
                         );
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
      if (uVar49 != unaff_w25 || ((in_stack_00000078 ^ 0xff) & 1) != 0) goto LAB_036ac920;
      if (uStack0000000000000074 == 0) goto LAB_036ac8a0;
      goto LAB_036ac868;
    }
    lVar23 = FUN_036fbb7c(0);
    if (((lVar23 == 0) || (*in_stack_00000190 == 0)) ||
       (lVar29 = *(long *)(*in_stack_00000190 + 0x38), lVar29 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
    if (*(long *)(lVar23 + 0x18) == 0) goto LAB_036afadc;
    uVar20 = FUN_0254f914(*(long *)(lVar23 + 0x18),
                          *(undefined2 *)
                           (lVar29 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20),
                          *(undefined8 *)PTR_DAT_03d9c860);
    if ((uVar13 & 1) != 0) goto LAB_036ac84c;
    if ((uVar20 & 1) == 0) goto LAB_036ac8e4;
    if ((in_stack_00000078 & 1) == 0) goto LAB_036ac91c;
    if (uStack0000000000000074 != 0) {
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
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_0000109c - 0x2007) ||
          ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_0000109c != 0xa0 && (in_stack_0000109c != 0x2060)))) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        in_stack_00000078 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_036ac920;
      }
      goto LAB_036ac660;
    }
LAB_036ac6e8:
    if ((in_stack_00000078 & 1) == 0) {
LAB_036ac91c:
      in_stack_00000078 = 0;
      goto LAB_036ac920;
    }
    if (uStack0000000000000074 == 0) {
LAB_036ac6f8:
      if (!bVar7 && in_stack_0000109c == 0xad) goto LAB_036ac868;
    }
    else {
LAB_036ac868:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
    }
LAB_036ac8a0:
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_036ed2b4();
  }
  in_stack_00000078 = 1;
LAB_036ac920:
  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_036ed2b4();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_036a9250;
code_r0x036ab2f4:
  param_2 = *(float *)((long)unaff_x19 + 0x2d4);
  param_1 = *(float *)(unaff_x19 + 0x5a) / 100.0;
  if (param_2 < param_1) goto code_r0x036ab310;
  goto LAB_036ab320;
code_r0x036ab310:
  in_w8 = *(int *)((long)unaff_x19 + 0x244);
  in_w9 = (int)unaff_x19[0x49];
  goto code_r0x036ab318;
LAB_036ad4b0:
  uVar49 = uVar17 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x50), lVar42 == 0))
  goto LAB_036afadc;
  lVar36 = (long)(int)uVar49;
  lVar21 = lVar23 + lVar36 * 0x178;
  uVar32 = *(uint *)(lVar21 + 100);
  if (*(uint *)(lVar42 + 0x18) <= uVar32) goto LAB_036afbe8;
  lVar39 = (long)(int)uVar32;
  lVar42 = lVar42 + lVar39 * 0x5c;
  lVar34 = *(long *)(lVar21 + 0x38);
  uVar3 = *(ushort *)(lVar21 + 0x20);
  uVar6 = *(uint *)(lVar42 + 0x3c);
  uVar43 = *(uint *)(lVar42 + 0x68);
  iVar2 = *(int *)(lVar42 + 0x20);
  iVar15 = *(int *)(lVar42 + 0x28);
  iVar16 = *(int *)(lVar42 + 0x2c);
  uVar5 = *(uint *)(lVar42 + 0x40);
  lVar21 = (long)(int)uVar5;
  fVar45 = *(float *)(lVar42 + 0x4c);
  fVar62 = *(float *)(lVar42 + 0x54);
  fVar46 = *(float *)(lVar42 + 0x58);
  fVar50 = *(float *)(lVar42 + 0x5c);
  fVar48 = *(float *)(lVar42 + 0x60);
  fVar54 = *(float *)(lVar42 + 0x6c);
  fVar58 = *(float *)(lVar42 + 0x70);
  fVar61 = *(float *)(lVar42 + 0x74);
  fVar47 = *(float *)(lVar42 + 0x78);
  uVar38 = (uint)uVar3;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar48 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar46;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar48 + fVar50 * 0.5) - fVar46 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar50 + fVar48) - fVar46;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar50 + fVar48;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar43 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar23 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar22 = FUN_02fde5f4(uVar4,0);
      if ((uVar22 & 1) == 0) {
        bVar1 = (int)uVar32 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar46 <= fVar50) && (!bVar1 && uVar43 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar48;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar50 + fVar48;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar17 == 1) || (uVar32 != uVar13)) || (uVar49 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar48;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar50 + fVar48;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar38,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar26 = (char)unaff_x19[0x1e];
        fVar48 = -fVar46;
        if (cVar26 != '\0') {
          fVar48 = fVar46;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_036afbe8;
        iVar16 = (int)*(char *)(lVar23 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar46 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar46 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_036af498:
          fVar46 = 1.0 - fVar46;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar22 = FUN_02fdea78(uVar38,0);
            cVar26 = (char)unaff_x19[0x1e];
            if ((uVar22 & 1) != 0) goto LAB_036af498;
          }
          iVar16 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar15;
        }
        fVar46 = ((fVar50 + fVar48) * fVar46) / (float)iVar16;
        if (cVar26 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar46;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar46;
        }
      }
    }
  }
  else if (uVar43 == 0x20) {
    fVar46 = fVar54 + fVar61;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar43 <= uVar49) goto LAB_036afbe8;
  lVar42 = lVar23 + lVar36 * 0x178;
  fVar50 = in_stack_000000d0 + in_stack_00000108._4_4_;
  fVar46 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar48 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar42 + 0x194) == '\0') goto LAB_036adf70;
  iVar15 = *(int *)(lVar23 + lVar36 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_036add84;
  fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar32,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar28 = lVar23 + lVar36 * 0x178;
    *(undefined4 *)(lVar28 + 0x84) = 0;
    *(undefined4 *)(lVar28 + 0xac) = 0;
    *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
    fVar59 = 1.0;
    break;
  case 1:
    fVar47 = *(float *)(lVar23 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar28 = lVar23 + lVar36 * 0x178;
      fVar61 = (in_stack_00000108._4_4_ + fVar47) - *(float *)(in_stack_00000088 + 0x230);
      fVar47 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar28 = lVar23 + lVar36 * 0x178;
    fVar61 = fVar61 - fVar54;
    *(float *)(lVar28 + 0x84) = fVar59 + (fVar47 - fVar54) / fVar61;
    *(float *)(lVar28 + 0xac) = fVar59 + (*(float *)(lVar28 + 0x98) - fVar54) / fVar61;
    *(float *)(lVar28 + 0xd4) = fVar59 + (*(float *)(lVar28 + 0xc0) - fVar54) / fVar61;
    fVar59 = fVar59 + (*(float *)(lVar28 + 0xe8) - fVar54) / fVar61;
    break;
  case 2:
    lVar28 = lVar23 + lVar36 * 0x178;
    fVar47 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar61 = (in_stack_00000108._4_4_ + *(float *)(lVar28 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar28 + 0x84) = fVar59 + fVar61 / fVar47;
    *(float *)(lVar28 + 0xac) =
         fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar28 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar28 + 0xd4) =
         fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar28 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar59 = fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar28 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar28 = lVar23 + lVar36 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0;
      *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar28 = lVar23 + lVar36 * 0x178;
      fVar47 = fVar47 - fVar58;
      fVar61 = fVar59 + (*(float *)(lVar28 + 0x74) - fVar58) / fVar47;
      fVar47 = fVar59 + (*(float *)(lVar28 + 0x9c) - fVar58) / fVar47;
      *(float *)(lVar28 + 0x88) = fVar61;
      *(float *)(lVar28 + 0xb0) = fVar47;
      *(float *)(lVar28 + 0xd8) = fVar61;
      *(float *)(lVar28 + 0x100) = fVar47;
      break;
    case 2:
      lVar28 = lVar23 + lVar36 * 0x178;
      fVar61 = fVar59 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar28 + 0x88) = fVar61;
      fVar47 = *(float *)(unaff_x19 + 0x9c);
      fVar54 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar28 + 0xd8) = fVar61;
      fVar61 = fVar59 + (*(float *)(lVar28 + 0x9c) - fVar47) / (fVar54 - fVar47);
      *(float *)(lVar28 + 0xb0) = fVar61;
      *(float *)(lVar28 + 0x100) = fVar61;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar43 <= uVar49) goto LAB_036afbe8;
    lVar28 = lVar23 + lVar36 * 0x178;
    fVar61 = *(float *)(lVar28 + 0x15c);
    fVar47 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar61) * 0.5;
    fVar54 = fVar59 + *(float *)(lVar28 + 0x88) * fVar61 + fVar47;
    fVar59 = fVar59 + fVar47 + *(float *)(lVar28 + 0xb0) * fVar61;
    *(float *)(lVar28 + 0x84) = fVar54;
    *(float *)(lVar28 + 0xac) = fVar54;
    *(float *)(lVar28 + 0xd4) = fVar59;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar23 + lVar36 * 0x178 + 0xfc) = fVar59;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar43 <= uVar49) goto LAB_036afbe8;
    lVar28 = lVar23 + lVar36 * 0x178;
    *(undefined4 *)(lVar28 + 0x88) = 0;
    *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar28 + 0x100) = 0;
    break;
  case 1:
    if (uVar49 < uVar43) {
      lVar28 = lVar23 + lVar36 * 0x178;
      fVar45 = fVar45 - fVar62;
      fVar59 = (*(float *)(lVar28 + 0x74) - fVar62) / fVar45;
      fVar45 = (*(float *)(lVar28 + 0x9c) - fVar62) / fVar45;
      *(float *)(lVar28 + 0x88) = fVar59;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar43 <= uVar49) goto LAB_036afbe8;
    lVar28 = lVar23 + lVar36 * 0x178;
    fVar59 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar28 + 0x88) = fVar59;
    fVar45 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar28 + 0xb0) = fVar45;
    *(float *)(lVar28 + 0xd8) = fVar45;
    *(float *)(lVar28 + 0x100) = fVar59;
    break;
  case 3:
    if (uVar43 <= uVar49) goto LAB_036afbe8;
    lVar28 = lVar23 + lVar36 * 0x178;
    fVar45 = *(float *)(lVar28 + 0x15c);
    fVar61 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar45) * 0.5;
    fVar59 = *(float *)(lVar28 + 0x84) / fVar45 + fVar61;
    fVar61 = fVar61 + *(float *)(lVar28 + 0xd4) / fVar45;
    *(float *)(lVar28 + 0x88) = fVar59;
    *(float *)(lVar28 + 0xb0) = fVar61;
    *(float *)(lVar28 + 0x100) = fVar59;
    *(float *)(lVar28 + 0xd8) = fVar61;
  }
  if (uVar43 <= uVar49) goto LAB_036afbe8;
  lVar28 = lVar23 + lVar36 * 0x178;
  fVar59 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar59 = -fVar59;
  }
  fVar61 = fVar51;
  if (((iVar14 == 2) || (fVar61 = fVar65, iVar14 == 1)) || (fVar61 = fVar51 / fVar55, iVar14 == 0))
  {
    fVar59 = fVar61 * fVar59;
  }
  lVar28 = lVar23 + lVar36 * 0x178;
  fVar45 = *(float *)(lVar28 + 0x88);
  fVar47 = *(float *)(lVar28 + 0x84);
  fVar61 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar61 = (float)(int)fVar47;
  }
  fVar54 = *(float *)(lVar28 + 0xd4);
  fVar58 = *(float *)(lVar28 + 0xd8);
  fVar62 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar62 = (float)(int)fVar45;
  }
  uVar52 = FUN_036f2b00(fVar47 - fVar61,fVar45 - fVar62);
  *(undefined4 *)(lVar28 + 0x84) = uVar52;
  if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
  fVar58 = fVar58 - fVar62;
  *(float *)(lVar28 + 0x88) = fVar59;
  uVar52 = FUN_036f2b00(fVar47 - fVar61,fVar58);
  *(undefined4 *)(lVar23 + lVar36 * 0x178 + 0xac) = uVar52;
  if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
  fVar54 = fVar54 - fVar61;
  *(float *)(lVar23 + lVar36 * 0x178 + 0xb0) = fVar59;
  fVar61 = (float)FUN_036f2b00(fVar54,fVar58);
  *(float *)(lVar28 + 0xd4) = fVar61;
  if (*(uint *)(lVar23 + 0x18) <= uVar49) goto LAB_036afbe8;
  *(float *)(lVar28 + 0xd8) = fVar59;
  uVar52 = FUN_036f2b00(fVar54,fVar45 - fVar62);
  *(undefined4 *)(lVar23 + lVar36 * 0x178 + 0xfc) = uVar52;
  uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar43 <= uVar49) goto LAB_036afbe8;
  *(float *)(lVar23 + lVar36 * 0x178 + 0x100) = fVar59;
LAB_036add84:
  if (((int)uVar49 < (int)unaff_x19[0x65]) &&
     ((int)in_stack_000000e0._4_4_ < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar43 <= uVar49) goto LAB_036afbe8;
      lVar42 = lVar23 + lVar36 * 0x178;
      *(ulong *)(lVar42 + 0x70) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar42 + 0x70));
      *(float *)(lVar42 + 0x78) = fVar48 + *(float *)(lVar42 + 0x78);
      *(ulong *)(lVar42 + 0x98) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar42 + 0x98));
      *(float *)(lVar42 + 0xa0) = fVar48 + *(float *)(lVar42 + 0xa0);
      *(ulong *)(lVar42 + 0xc0) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar42 + 0xc0));
      *(float *)(lVar42 + 200) = fVar48 + *(float *)(lVar42 + 200);
      *(ulong *)(lVar42 + 0xe8) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar42 + 0xe8));
      *(float *)(lVar42 + 0xf0) = fVar48 + *(float *)(lVar42 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar32 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar49 < uVar43) {
        if (*(uint *)(lVar23 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar42 = lVar23 + lVar36 * 0x178;
          *(ulong *)(lVar42 + 0x70) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar42 + 0x70));
          *(float *)(lVar42 + 0x78) = fVar48 + *(float *)(lVar42 + 0x78);
          *(ulong *)(lVar42 + 0x98) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar42 + 0x98));
          *(float *)(lVar42 + 0xa0) = fVar48 + *(float *)(lVar42 + 0xa0);
          *(ulong *)(lVar42 + 0xc0) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar42 + 0xc0));
          *(float *)(lVar42 + 200) = fVar48 + *(float *)(lVar42 + 200);
          *(ulong *)(lVar42 + 0xe8) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar42 + 0xe8));
          *(float *)(lVar42 + 0xf0) = fVar48 + *(float *)(lVar42 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar43 <= uVar49) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar43 = *(uint *)(lVar23 + 0x18);
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar52 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar28 = lVar23 + lVar36 * 0x178;
  *(undefined8 *)(lVar28 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar28 + 0x78) = uVar52;
  if (uVar43 <= uVar49) goto LAB_036afbe8;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar28 = lVar23 + lVar36 * 0x178;
  *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar28 + 0xa0) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar28 + 200) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar28 + 0xf0) = uVar52;
  *(undefined1 *)(lVar42 + 0x194) = 0;
LAB_036adf28:
  if (iVar15 == 0) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar31)();
  }
  else if (iVar15 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  uVar18 = *(undefined8 *)(lVar42 + 0x11c);
  *(undefined8 *)(lVar42 + 0x11c) =
       CONCAT44(fVar46 + (float)((ulong)uVar18 >> 0x20),fVar50 + (float)uVar18);
  *(float *)(lVar42 + 0x124) = fVar48 + *(float *)(lVar42 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(ulong *)(lVar42 + 0x110) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0x110) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar42 + 0x110));
  *(float *)(lVar42 + 0x118) = fVar48 + *(float *)(lVar42 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(ulong *)(lVar42 + 0x128) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar42 + 0x128) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar42 + 0x128));
  *(float *)(lVar42 + 0x130) = fVar48 + *(float *)(lVar42 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(float *)(lVar42 + 0x134) = fVar50 + *(float *)(lVar42 + 0x134);
  *(ulong *)(lVar42 + 0x138) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar42 + 0x138) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar42 + 0x138));
  lVar42 = *in_stack_00000190;
  if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_036afadc;
  uVar43 = *(uint *)(lVar28 + 0x18);
  if (uVar43 <= uVar49) goto LAB_036afbe8;
  lVar35 = lVar28 + lVar36 * 0x178;
  uVar20 = CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar35 + 0x140));
  fVar61 = fVar46 + *(float *)(lVar35 + 0x150);
  uVar56 = (ulong)(uint)fVar61;
  uVar57 = CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar61;
  *(ulong *)(lVar35 + 0x140) = uVar20;
  *(ulong *)(lVar35 + 0x148) = uVar57;
  if (uVar32 == uVar13) {
    uVar13 = *unaff_x20 - 1;
    if (uVar49 == uVar13) goto LAB_036ae17c;
  }
  else {
    lVar42 = *(long *)(lVar42 + 0x50);
    if (lVar42 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar35 = (long)(int)uVar13;
    lVar37 = lVar42 + lVar35 * 0x5c;
    uVar57 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar61 = fVar46 + *(float *)(lVar37 + 0x54);
    uVar20 = (ulong)(uint)fVar61;
    fVar45 = fVar50 + *(float *)(lVar37 + 0x58);
    uVar56 = (ulong)(uint)fVar45;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar61;
    *(float *)(lVar37 + 0x58) = fVar45;
    if (uVar43 <= *(uint *)(lVar37 + 0x34)) goto LAB_036afbe8;
    uVar52 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar42 = lVar42 + lVar35 * 0x5c;
    *(float *)(lVar42 + 0x70) = fVar61;
    *(undefined4 *)(lVar42 + 0x6c) = uVar52;
    lVar42 = *in_stack_00000190;
    if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar42 = *(long *)(lVar42 + 0x38);
    if (lVar42 == 0) goto LAB_036afadc;
    uVar13 = *(uint *)(lVar28 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar28 = lVar28 + lVar35 * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar13 * 0x178 + 0x128);
    *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    uVar13 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar49 == uVar13) {
      lVar42 = *in_stack_00000190;
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_036afbe8;
      lVar35 = lVar28 + lVar39 * 0x5c;
      uVar57 = (ulong)(uint)*(float *)(lVar35 + 0x58);
      uVar20 = CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                        fVar46 + (float)*(undefined8 *)(lVar35 + 0x4c));
      fVar61 = fVar46 + *(float *)(lVar35 + 0x54);
      fVar50 = fVar50 + *(float *)(lVar35 + 0x58);
      uVar56 = (ulong)(uint)fVar50;
      *(ulong *)(lVar35 + 0x4c) = uVar20;
      *(float *)(lVar35 + 0x54) = fVar61;
      *(float *)(lVar35 + 0x58) = fVar50;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(lVar35 + 0x34)) goto LAB_036afbe8;
      uVar52 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar28 = lVar28 + lVar39 * 0x5c;
      *(float *)(lVar28 + 0x70) = fVar61;
      *(undefined4 *)(lVar28 + 0x6c) = uVar52;
      lVar42 = *in_stack_00000190;
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_036afbe8;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_036afadc;
      uVar13 = *(uint *)(lVar28 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar28 = lVar28 + lVar39 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar13 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar22 = FUN_02fddb80(uVar38,0);
  if (((((uVar22 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar10) {
      if (((uVar17 != 1) && ((int)uVar49 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar49 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar17 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar23 + lVar29 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar22 = FUN_02fddb80(uVar4,0);
        if ((uVar22 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar23 + lVar29 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar22 = FUN_02fddb80(uVar4,0);
          if ((uVar22 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_036aeea4:
        bVar10 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar22 = FUN_02fddab4(uVar38,0);
      if ((uVar22 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar22 = FUN_02fdb080(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar22 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar49 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar22 = FUN_02fddb80(uVar38,0);
      iVar15 = (int)fStack0000000000000138;
      if ((uVar22 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar15 = uVar17 - 2;
    }
    lVar42 = *in_stack_00000190;
    if (lVar42 == 0) goto LAB_036afadc;
    lVar28 = *(long *)(lVar42 + 0x40);
    if (lVar28 == 0) goto LAB_036afadc;
    uVar13 = *(uint *)(lVar42 + 0x24);
    iVar16 = *(int *)(lVar28 + 0x18);
    if (iVar16 < (int)(uVar13 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar42 + 0x40),iVar16 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar42 = *in_stack_00000190;
      if (lVar42 == 0) goto LAB_036afadc;
    }
    lVar42 = *(long *)(lVar42 + 0x40);
    if (lVar42 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar42 = lVar42 + (long)(int)uVar13 * 0x18;
    *(long **)(lVar42 + 0x20) = unaff_x19;
    *(float *)(lVar42 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar42 + 0x2c) = iVar15;
    *(int *)(lVar42 + 0x30) = (iVar15 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar42 = unaff_x19[0x6d];
    if (lVar42 == 0) goto LAB_036afadc;
    lVar28 = *(long *)(lVar42 + 0x50);
    *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
    if (lVar28 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_036afbe8;
    lVar28 = lVar28 + lVar39 * 0x5c;
    bVar10 = false;
    in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
    *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      in_stack_00000170._4_4_ = (float)uVar49;
    }
    if (uVar49 == *unaff_x20 - 1) {
      lVar42 = *in_stack_00000190;
      if (lVar42 == 0) goto LAB_036afadc;
      lVar28 = *(long *)(lVar42 + 0x40);
      if (lVar28 == 0) goto LAB_036afadc;
      uVar13 = *(uint *)(lVar42 + 0x24);
      iVar15 = *(int *)(lVar28 + 0x18);
      if (iVar15 < (int)(uVar13 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar42 + 0x40),iVar15 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar42 = *in_stack_00000190;
        if (lVar42 == 0) goto LAB_036afadc;
      }
      lVar42 = *(long *)(lVar42 + 0x40);
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar42 = lVar42 + (long)(int)uVar13 * 0x18;
      *(long **)(lVar42 + 0x20) = unaff_x19;
      *(float *)(lVar42 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar42 + 0x2c) = uVar49;
      *(uint *)(lVar42 + 0x30) = uVar17 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar42 = unaff_x19[0x6d];
      if (lVar42 == 0) goto LAB_036afadc;
      lVar28 = *(long *)(lVar42 + 0x50);
      *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar32) goto LAB_036afbe8;
      lVar28 = lVar28 + lVar39 * 0x5c;
      in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar10 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  uVar13 = *(uint *)(lVar42 + 0x18);
  if (uVar13 <= uVar49) goto LAB_036afbe8;
  if ((*(byte *)(lVar42 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_036ae3d8:
      if (uVar13 <= uVar17 - 2) goto LAB_036afbe8;
      lVar39 = *unaff_x19;
      uVar13 = *(uint *)(lVar42 + lVar29 + -0x330);
      uVar52 = *(undefined4 *)(lVar42 + lVar29 + -0x2f8);
LAB_036ae924:
      pcVar31 = *(code **)(lVar39 + 0x908);
LAB_036ae92c:
      uVar57 = (ulong)uVar13;
      uVar20 = (ulong)(uint)_in_stack_00000078;
      uVar56 = (ulong)uStack000000000000007c;
      (*pcVar31)(fStack0000000000000080,uVar20,uVar56,uVar57,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar52);
      puVar8 = PTR_DAT_03d9c920;
      lVar42 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar42 = *(long *)puVar8;
      }
LAB_036ae980:
      bVar11 = false;
      fVar44 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar42 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar11 = false;
    }
  }
  else {
    lVar42 = lVar42 + lVar36 * 0x178;
    iVar15 = *(int *)(lVar42 + 0x68);
    *(int *)(lVar42 + 0x16c) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar49) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
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
    uVar22 = FUN_02fdb080(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar22 & 1) == 0)) {
      lVar42 = *in_stack_00000190;
      if ((lVar42 == 0) || (lVar39 = *(long *)(lVar42 + 0x38), lVar39 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar39 + 0x18) <= uVar49) goto LAB_036afbe8;
      fVar61 = *(float *)(lVar39 + lVar36 * 0x178 + 0x160);
      if (fVar44 <= fVar61) {
        fVar44 = fVar61;
      }
      if (fStack0000000000000110 <= ABS(fVar59)) {
        fStack0000000000000110 = ABS(fVar59);
      }
      if (iVar15 != uStack0000000000000074) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar42 = *in_stack_00000190;
          if (lVar42 == 0) goto LAB_036afadc;
          lVar39 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar39 + 0x15a8);
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar45 = *(float *)(lVar42 + lVar36 * 0x178 + 0x14c);
      fVar61 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar45 = fVar45 + fVar44 * fVar61;
      if (fVar45 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar45;
      }
      uVar20 = (ulong)(uint)fStack0000000000000114;
      uStack0000000000000074 = iVar15;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar49)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar49 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar22 = FUN_02fdea78(uVar38,0);
        if ((uVar22 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
      lVar42 = lVar42 + lVar36 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar42 + 0x160);
      fStack0000000000000080 = *(float *)(lVar42 + 0x11c);
      uVar56 = (ulong)(uint)fStack0000000000000080;
      bVar11 = fVar44 != 0.0;
      fVar61 = in_stack_00000090._4_4_;
      if (bVar11) {
        fVar61 = fVar44;
      }
      fVar44 = fVar61;
      uVar64 = *(undefined4 *)(lVar42 + 0x168);
      uStack000000000000007c = 0;
      fVar61 = fVar59;
      if (bVar11) {
        fVar61 = fStack0000000000000110;
      }
      uVar20 = (ulong)(uint)fVar61;
      _in_stack_00000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar61;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        if (uVar49 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar36 * 0x178;
          lVar39 = *unaff_x19;
          uVar13 = *(uint *)(lVar42 + 0x128);
          uVar52 = *(undefined4 *)(lVar42 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar49 == uVar6) || ((int)uVar5 <= (int)uVar49)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar22 = FUN_02fdb080(uVar38,0);
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        lVar39 = lVar36;
        uVar13 = uVar49;
        if (uVar38 == 0x200b || (uVar22 & 1) != 0) {
          lVar39 = lVar21;
          uVar13 = uVar5;
        }
        if (uVar13 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar39 * 0x178;
          uVar13 = *(uint *)(lVar42 + 0x128);
          uVar52 = *(undefined4 *)(lVar42 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        uVar13 = *(uint *)(lVar42 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar49 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar17) goto LAB_036afbe8;
      uVar22 = FUN_036c0e18(uVar64,*(undefined4 *)(lVar42 + lVar29),0);
      if ((uVar22 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0)) {
          if (uVar49 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar36 * 0x178;
            uVar57 = (ulong)*(uint *)(lVar42 + 0x128);
            uVar56 = (ulong)uStack000000000000007c;
            uVar20 = (ulong)(uint)_in_stack_00000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar20,uVar56,uVar57,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar42 + 0x160));
            puVar8 = PTR_DAT_03d9c920;
            lVar42 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar42 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar42 = *(long *)puVar8;
            }
            goto LAB_036ae980;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
    }
    bVar11 = true;
  }
LAB_036ae99c:
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
  if (lVar34 == 0) goto LAB_036afadc;
  uVar13 = *(uint *)(lVar42 + lVar36 * 0x178 + 400);
  fVar61 = (float)FUN_0396ad04(lVar34 + 0x50,0);
  if ((uVar13 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar17 - 2) goto LAB_036afbe8;
      uVar13 = *(uint *)(lVar42 + lVar29 + -0x330);
      fVar46 = *(float *)(lVar42 + lVar29 + -0x30c);
      pcVar31 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar57 = (ulong)uVar13;
      uVar20 = (ulong)(uint)fStack00000000000000a4;
      uVar56 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar31)(fStack00000000000000a8,uVar20,uVar56,uVar57,
                 fStack00000000000000b0 * fVar61 + fVar46,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar42 = *in_stack_00000190;
    if ((lVar42 == 0) || (lVar39 = *(long *)(lVar42 + 0x38), lVar39 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar39 + 0x18) <= uVar49) goto LAB_036afbe8;
    *(int *)(lVar39 + lVar36 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar49) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar49)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar49 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar22 = FUN_02fdea78(uVar38,0);
        if ((uVar22 & 1) != 0) goto LAB_036aeb20;
        lVar42 = *in_stack_00000190;
        if (lVar42 == 0) goto LAB_036afadc;
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar49) goto LAB_036afbe8;
      lVar42 = lVar42 + lVar36 * 0x178;
      fStack000000000000004c = *(float *)(lVar42 + 0x60);
      fStack0000000000000040 = *(float *)(lVar42 + 0x14c);
      uVar20 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar42 + 0x11c);
      uVar56 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar42 + 0x160);
      fStack00000000000000a4 = fVar61 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar13 = *unaff_x20;
    if (uVar13 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        if (uVar49 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar36 * 0x178;
          lVar21 = *unaff_x19;
          uVar13 = *(uint *)(lVar42 + 0x128);
          fVar46 = *(float *)(lVar42 + 0x14c);
LAB_036aec8c:
          pcVar31 = *(code **)(lVar21 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar49 == uVar6) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar22 = FUN_02fdb080(uVar38,0);
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        uVar13 = *(uint *)(lVar42 + 0x18);
        if (uVar38 == 0x200b || (uVar22 & 1) != 0) {
          if (uVar13 <= uVar5) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar21 = lVar36;
          if (uVar13 <= uVar49) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar42 = lVar42 + lVar21 * 0x178;
        fVar46 = *(float *)(lVar42 + 0x14c);
        uVar13 = *(uint *)(lVar42 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar49 < (int)uVar13) {
      lVar42 = *in_stack_00000190;
      if ((lVar42 != 0) && (lVar39 = *(long *)(lVar42 + 0x38), lVar39 != 0)) {
        if (uVar17 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar29 + -0x108) == fStack000000000000004c) {
            fVar45 = *(float *)(lVar39 + lVar29 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar20 = (ulong)(uint)fStack0000000000000040;
            uVar22 = FUN_036c122c(fVar46 + fVar45,uVar20,0);
            if ((uVar22 & 1) != 0) {
              uVar13 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar42 = *in_stack_00000190;
            if (lVar42 == 0) goto LAB_036afadc;
          }
          lVar42 = *(long *)(lVar42 + 0x38);
          if (lVar42 != 0) {
            uVar13 = *(uint *)(lVar42 + 0x18);
            if ((int)uVar49 <= (int)uVar5) goto LAB_036aef20;
            if (uVar5 < uVar13) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar49 < (int)uVar13) {
      iVar15 = FUN_03922ce0(lVar34,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar17) goto LAB_036afbe8;
      lVar42 = *(long *)(lVar23 + lVar29 + -0x130);
      if (lVar42 == 0) goto LAB_036afadc;
      iVar16 = FUN_03922ce0(lVar42,0);
      if (iVar15 != iVar16) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar42 + 0x18)) {
          lVar21 = *unaff_x19;
          uVar13 = *(uint *)(lVar42 + lVar29 + -0x330);
          fVar46 = *(float *)(lVar42 + lVar29 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  uVar13 = (uint)*(undefined8 *)(lVar42 + 0x18);
  if (uVar13 <= uVar49) goto LAB_036afbe8;
  if ((*(byte *)(lVar42 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      uVar56 = (ulong)in_stack_000000c0._4_4_;
      uVar20 = (ulong)(uint)fStack00000000000000ec;
      uVar57 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar20,uVar56,uVar57,fStack00000000000000d8,uVar56);
    }
LAB_036aefe8:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar49) || ((int)unaff_x19[0x66] < (int)uVar32)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar42 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar49)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar49 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar22 = FUN_02fdea78(uVar38,0);
        if ((uVar22 & 1) != 0) goto LAB_036aefe8;
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar21 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar21 = *(long *)puVar8;
      }
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      uVar13 = (uint)*(undefined8 *)(lVar42 + 0x18);
      if (uVar13 <= uVar49) goto LAB_036afbe8;
      lVar21 = *(long *)(lVar21 + 0xb8);
      lVar34 = lVar42 + lVar36 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar34 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar34 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar21 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar21 + 0x159c);
      in_stack_00001080 = *(float *)(lVar34 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar21 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar21 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar13 <= uVar49) goto LAB_036afbe8;
    lVar42 = lVar42 + lVar36 * 0x178;
    fVar61 = *(float *)(lVar42 + 0x128);
    fVar62 = *(float *)(lVar42 + 0x188);
    uVar19 = *(undefined8 *)(lVar42 + 0x17c);
    fVar54 = *(float *)(lVar42 + 0x184);
    uVar18 = *(undefined8 *)(lVar42 + 0x184);
    fVar48 = *(float *)(lVar42 + 0x18c);
    fVar46 = *(float *)(lVar42 + 0x11c);
    fVar45 = *(float *)(lVar42 + 0x148);
    fVar47 = *(float *)(lVar42 + 0x150);
    in_stack_00000198 = uVar19;
    fStack00000000000001a0 = fVar54;
    fStack00000000000001a4 = fVar62;
    in_stack_000001a8 = fVar48;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar22 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar42 = *(long *)PTR_DAT_03d9c888;
    if ((uVar22 & 1) == 0) {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar42);
      }
      fVar61 = fVar61 + (float)in_stack_00001078;
      uVar56 = (ulong)(uint)fVar61;
      fVar46 = fVar46 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar45 = fVar45 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar57 = (ulong)(uint)fVar45;
      if (fVar46 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar46;
      }
      if (fVar47 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar47 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar61) {
        fStack00000000000000d4 = fVar61;
      }
      uVar20 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar45) {
        fStack00000000000000d8 = fVar45;
      }
    }
    else {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar42);
      }
      fVar46 = (fVar46 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar57 = (ulong)(uint)fVar46;
      if (fVar47 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar47;
      }
      uVar20 = (ulong)(uint)fStack00000000000000ec;
      uVar56 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar45) {
        fStack00000000000000d8 = fVar45;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar20,uVar56,uVar57,fStack00000000000000d8,uVar56);
      fStack00000000000000ec = fVar47 - fVar48;
      fStack00000000000000d4 = fVar61 + fVar54;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar45 + fVar62;
      fStack00000000000000e8 = fVar46;
      in_stack_00001070 = uVar19;
      in_stack_00001078 = uVar18;
      in_stack_00001080 = fVar48;
    }
    if (((*unaff_x20 == 1) || (uVar49 == uVar6)) || (((int)uVar5 <= (int)uVar49 || (!bVar1)))) {
      uVar56 = (ulong)in_stack_000000c0._4_4_;
      uVar20 = (ulong)(uint)fStack00000000000000ec;
      uVar57 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar20,uVar56,uVar57,fStack00000000000000d8,uVar56);
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  uVar49 = *unaff_x20;
  lVar29 = lVar29 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar49 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar13 = uVar32;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar23 = *in_stack_00000190;
  if (lVar23 != 0) {
    iVar12 = uVar32 + 1;
    plVar41 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar23 + 0x18) = uVar49;
    lVar29 = unaff_x19[0xd4];
    *(int *)(lVar23 + 0x2c) = iVar12;
    if ((int)uVar49 < 1 || in_stack_000000e0._4_4_ == 0.0) {
      in_stack_000000e0._4_4_ = 1.4013e-45;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar29;
    *(float *)(lVar23 + 0x24) = in_stack_000000e0._4_4_;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar22 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar22 & 1) == 0)) {
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
      uVar49 = FUN_03afacb8(lVar23,0);
      FUN_03afacf4(lVar23,uVar49 | 0x19,0);
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
                            uVar18 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar49 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar23 = *in_stack_00000190;
                              if (lVar23 != 0) {
                                lVar42 = 0;
                                lVar29 = 0;
                                do {
                                  uVar22 = lVar29 + 1;
                                  if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar22)
                                  goto LAB_036acd60;
                                  lVar23 = *(long *)(lVar23 + 0x60);
                                  if (lVar23 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                  FUN_036fa544(lVar23 + lVar42 + 0x70,0);
                                  lVar23 = unaff_x19[0xe1];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                  uVar19 = *(undefined8 *)(lVar23 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar24 = FUN_03922f24(uVar19,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar23 = *(long *)(*in_stack_00000190 + 0x60), lVar23 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                      FUN_036fa678(lVar23 + lVar42 + 0x70,1,0);
                                    }
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_0390262c(lVar23,*(undefined8 *)(lVar21 + lVar42 + 0x80),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_03902830(lVar23,*(undefined8 *)(lVar21 + lVar42 + 0x98),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_039028dc(lVar23,*(undefined8 *)(lVar21 + lVar42 + 0xa0),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_03702ba4(lVar23,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    if (lVar23 == 0) break;
                                    FUN_03902a3c(lVar23,*(undefined8 *)(lVar21 + lVar42 + 0xa8),0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_03702ba4(lVar23,0), lVar23 == 0)) break;
                                    FUN_03904ddc(lVar23,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_039add2c(lVar23,0);
                                    lVar21 = unaff_x19[0xe1];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar21 = *(long *)(lVar21 + lVar29 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (uVar19 = FUN_03702ba4(lVar21,0), lVar23 == 0)) break;
                                    FUN_03af8c9c(lVar23,uVar19,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_039add2c(lVar23,0), lVar23 == 0)) break;
                                    FUN_03af8894(uVar18,uVar20,uVar56,uVar57,lVar23,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    lVar23 = *(long *)(lVar23 + lVar29 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_039add2c(lVar23,0), lVar23 == 0)) break;
                                    FUN_03af87d0(lVar23,uVar49 & 1,0);
                                    lVar23 = unaff_x19[0xe1];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22) goto LAB_036afbe8;
                                    plVar40 = *(long **)(lVar23 + lVar29 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar17 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar23 = *in_stack_00000190;
                                  lVar29 = lVar29 + 1;
                                  lVar42 = lVar42 + 0x50;
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


