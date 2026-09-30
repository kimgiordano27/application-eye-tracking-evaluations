/*
FUNCTION_NAME: Unity.VisualScripting.OptimizedReflection$$get_useJit
ENTRY_POINT: 036aab38
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


void Unity_VisualScripting_OptimizedReflection__get_useJit(ulong param_1,ulong param_2)

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
  undefined1 uVar23;
  char cVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  uint uVar31;
  float *pfVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar39;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar40;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long lVar41;
  uint unaff_w29;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float unaff_s8;
  float fVar59;
  float unaff_s9;
  float fVar60;
  float fVar61;
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
  byte bStack0000000000000078;
  byte bStack000000000000007c;
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
  
code_r0x036aab38:
  fVar57 = (float)param_2;
  if ((float)param_1 < fVar57) {
LAB_036afae0:
    fVar50 = (fVar57 - *(float *)(unaff_x19 + 0x48)) * 0.5;
    if (fVar50 <= DAT_00b55428) {
      fVar50 = DAT_00b55428;
    }
    *(float *)((long)unaff_x19 + 0x23c) = fVar57;
    fVar50 = (fVar57 - fVar50) * 20.0 + 0.5;
    fVar57 = DAT_00b556b4;
    if (fVar50 != INFINITY) {
      fVar57 = (float)(int)fVar50 / 20.0;
    }
    if (fVar57 <= (float)param_1) {
      fVar57 = (float)param_1;
    }
LAB_036acc94:
    *(float *)((long)unaff_x19 + 0x1e4) = fVar57;
    return;
  }
LAB_036aab40:
  puVar8 = PTR_DAT_03d9c920;
  uVar48 = (uint)unaff_x26;
  iVar12 = (int)unaff_x19[0x5c];
  iVar14 = (int)unaff_x24;
  if (iVar12 == 1) {
    lVar25 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar25 = *(long *)puVar8;
    }
    lVar28 = *(long *)(lVar25 + 0xb8);
    unaff_w29 = in_stack_0000109c;
    if (*(int *)(lVar28 + 0x1580) == 0) goto LAB_036acbbc;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
    }
    FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
    memcpy(&stack0x00000550,&stack0x000010a0,0x378);
    goto LAB_036ab014;
  }
  if (iVar12 != 6) {
    if (iVar12 != 3) goto LAB_036ab54c;
    unaff_w29 = in_stack_0000109c;
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) != 0) goto LAB_036aabc0;
    thunk_FUN_01ac7298();
    goto LAB_036aabc0;
  }
  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  in_stack_00001068 = FUN_036ecf20();
  lVar25 = unaff_x19[0x5d];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  }
  uVar20 = FUN_0391f968(lVar25,0,0);
  unaff_w29 = in_stack_0000109c;
  if ((uVar20 & 1) != 0) {
    plVar40 = (long *)unaff_x19[0x5d];
    uVar18 = (**(code **)(*unaff_x19 + 0x548))();
    if (plVar40 == (long *)0x0) goto LAB_036afadc;
    (**(code **)(*plVar40 + 0x558))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x560));
    lVar25 = unaff_x19[0x5d];
    if (lVar25 == 0) goto LAB_036afadc;
    *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
    FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar40 = (long *)unaff_x19[0x5d];
    if (plVar40 == (long *)0x0) goto LAB_036afadc;
    (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
LAB_036ab13c:
  in_stack_00001088 = CONCAT44(3,*unaff_x20);
  uVar17 = unaff_w29;
LAB_036a9250:
  fVar57 = (float)unaff_d13;
  in_stack_00001068 = in_stack_00001068 + 1;
  lVar25 = unaff_x19[0x8f];
  if (lVar25 != 0) {
    if ((int)in_stack_00001068 < (int)*(uint *)(lVar25 + 0x18)) {
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      unaff_w29 = *(uint *)(lVar25 + (long)(int)in_stack_00001068 * 0xc + 0x20);
      if (unaff_w29 == 0) goto LAB_036acbd8;
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
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (unaff_w29 == 0x3c))
      goto code_r0x036a8fdc;
      if ((*in_stack_00000190 != 0) && (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0))
      {
        if (*unaff_x20 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
          *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar25 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar25 + 0x58);
          unaff_x19[0x20] = *(long *)(lVar25 + 0x38);
          thunk_FUN_01b4f09c(in_stack_00000178);
          goto LAB_036a9064;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036acbd8:
    fVar57 = (float)param_2;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar57 = DAT_00b552b8,
       DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar50 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar57 < fVar50) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar65 = (*(float *)((long)unaff_x19 + 0x23c) - fVar57) * 0.5;
        if (fVar65 <= DAT_00b55428) {
          fVar65 = DAT_00b55428;
        }
        *(float *)(unaff_x19 + 0x48) = fVar57;
        fVar65 = (fVar57 + fVar65) * 20.0 + 0.5;
        fVar57 = DAT_00b556b4;
        if (fVar65 != INFINITY) {
          fVar57 = (float)(int)fVar65 / 20.0;
        }
        if (fVar50 <= fVar57) {
          fVar57 = fVar50;
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
    lVar25 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar25 = *(long *)puVar9;
    }
    plVar40 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
    iVar12 = *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x60), lVar25 == 0))
    goto LAB_036afadc;
    if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
    FUN_036fa40c(lVar25 + 0x20,0,0);
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
    lVar25 = unaff_x19[0xe3];
    in_stack_000000d0 = in_stack_00000108._4_4_;
    _fStack00000000000000c8 = (ulong)in_stack_000000f8;
    if (iVar14 < 0x401) {
      if (iVar14 == 0x100) {
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) < 2) goto LAB_036afbe8;
        uVar18 = *(undefined8 *)(lVar25 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000190 + 0x58), lVar28 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          fVar57 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar57 = *(float *)(unaff_x19 + 0x97);
        }
        in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x2c);
        fVar57 = (0.0 - fVar57) - fStack0000000000000020;
      }
      else if (iVar14 == 0x200) {
        if (lVar25 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
        in_stack_000000d0 = (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar25 + 0x24) +
                          (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar25 = *(long *)(*in_stack_00000190 + 0x58), lVar25 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          lVar25 = lVar25 + (long)(int)uStack0000000000000030 * 0x14;
          in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
          fVar57 = ((fStack0000000000000020 + *(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
          fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar14 != 0x400) goto LAB_036ad288;
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
        uVar18 = *(undefined8 *)(lVar25 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000190 + 0x58), lVar28 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          in_stack_00001098 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x20);
        fVar57 = fStack0000000000000024 + (0.0 - in_stack_00001098);
      }
LAB_036ad278:
      _fStack00000000000000c8 =
           CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar57);
    }
    else if (iVar14 == 0x800) {
      if (lVar25 == 0) goto LAB_036afadc;
      if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
      fVar57 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      _fStack00000000000000c8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30))
                    * 0.5 + 0.0);
      in_stack_000000d0 = fVar57;
    }
    else {
      if (iVar14 == 0x1000) {
        if (lVar25 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar25 + 0x18) != 1) && (*(int *)(lVar25 + 0x18) != 0)) {
          uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar25 + 0x24) +
                            (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
          in_stack_000000d0 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
          fVar57 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_036ad278;
        }
        goto LAB_036afbe8;
      }
      if (iVar14 == 0x2000) {
        if (lVar25 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
        fVar57 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        _fStack00000000000000c8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30)
                      ) * 0.5 + fVar57);
        in_stack_000000d0 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      }
    }
LAB_036ad288:
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    uVar18 = FUN_03afb088(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar8);
    }
    uVar20 = FUN_03922f24(uVar18,0,0);
    lVar25 = FUN_036dfed8();
    if (lVar25 == 0) goto LAB_036afadc;
    FUN_0392a7f0(lVar25,0);
    *(float *)(unaff_x19 + 0xe2) = fVar57;
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar14 = FUN_03afa68c(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    fVar50 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
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
    lVar25 = *(long *)PTR_DAT_03d9c888;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar25 = *(long *)puVar8;
    }
    puVar26 = *(undefined4 **)(lVar25 + 0xb8);
    uVar54 = (ulong)(uint)puVar26[1];
    uVar55 = (ulong)(uint)puVar26[2];
    uVar56 = (ulong)(uint)puVar26[3];
    FUN_036c214c(*puVar26,uVar54,uVar55,uVar56,&stack0x00001070,0x4000ffff,0);
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar25 = *in_stack_00000190;
    if (lVar25 == 0) goto LAB_036afadc;
    uVar48 = *unaff_x20;
    if ((int)uVar48 < 1) {
      in_stack_000000e0._4_4_ = 0.0;
      iVar12 = 0;
      goto LAB_036af524;
    }
    lVar25 = *(long *)(lVar25 + 0x38);
    fVar57 = ABS(fVar57);
    fVar65 = 1.0;
    if ((uVar20 & 1) == 0) {
      fVar65 = fVar57;
    }
    if (lVar25 == 0) goto LAB_036afadc;
    bVar11 = false;
    bVar7 = false;
    _fStack0000000000000138 = 0;
    bVar10 = false;
    in_stack_000000e0._4_4_ = 0.0;
    fStack000000000000002c = 0.0;
    in_stack_00000170._4_4_ = 0.0;
    uStack0000000000000074 = 0;
    lVar28 = 0x2e0;
    fVar59 = 0.0;
    fVar43 = 0.0;
    fStack00000000000000d4 = fStack00000000000000e8;
    fStack00000000000000d8 = fStack00000000000000ec;
    fStack0000000000000114 = *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
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
     (in_stack_00001068 = in_stack_0000104c, uVar17 = unaff_w29,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar48 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar41 = (long)(int)uVar48;
  cVar24 = *(char *)(lVar25 + lVar41 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar28 = unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar48) {
    unaff_w29 = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (unaff_w29 == 0x2026) {
      *(long *)(lVar25 + lVar41 * unaff_x24 + 0x30) = unaff_x19[0xca];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar25 + 0x2c) = 0;
      *(long *)(lVar25 + 0x38) = unaff_x19[0xcb];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      uVar48 = *unaff_x20;
      if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
      unaff_w23 = 1;
      *(int *)(lVar25 + (long)(int)uVar48 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar48 + 1);
    }
    else if (unaff_w29 == 3) {
      if ((*in_stack_00000178 == 0) || (lVar21 = FUN_036c835c(*in_stack_00000178,0), lVar21 == 0))
      goto LAB_036afadc;
      uVar18 = FUN_0262f3a4(lVar21,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
      *(undefined8 *)(lVar25 + lVar41 * unaff_x24 + 0x30) = uVar18;
      thunk_FUN_01b4f09c();
      uVar48 = *(uint *)((long)unaff_x19 + 0x494);
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
  if (((int)uVar48 < *(int *)((long)unaff_x19 + 0x324)) && (unaff_w29 != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
    lVar25 = lVar25 + (long)(int)uVar48 * (long)iVar14;
    *(undefined1 *)(lVar25 + 0x194) = 0;
    *(undefined2 *)(lVar25 + 0x20) = 0x200b;
    *(undefined4 *)(lVar25 + 100) = 0;
    *unaff_x20 = uVar48 + 1;
    uVar17 = unaff_w29;
    goto LAB_036a9250;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar48 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar48 >> 4 & 1) == 0) {
      if ((uVar48 >> 3 & 1) == 0) {
        fVar50 = 1.0;
        if ((uVar48 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_02fdd9e8(unaff_w29,0);
          if ((uVar20 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar48 = FUN_02fddc48(unaff_w29,0);
            unaff_w29 = uVar48 & 0xffff;
            fVar50 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdd92c(unaff_w29,0);
        fVar50 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar48 = FUN_02fdddc0(unaff_w29,0);
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
      uVar20 = FUN_02fdd9e8(unaff_w29,0);
      fVar50 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar48 = FUN_02fddc48(unaff_w29,0);
LAB_036a9658:
        fVar50 = 1.0;
        unaff_w29 = uVar48 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_036a9280;
LAB_036a9668:
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
    uVar17 = unaff_w29;
    if (*in_stack_000000f8 == 0) goto LAB_036a9250;
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_00000178 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    thunk_FUN_01b4f09c(in_stack_00000178);
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_00000168 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    thunk_FUN_01b4f09c();
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    uVar17 = *unaff_x20;
    uVar48 = *(uint *)(lVar25 + 0x18);
    if (uVar48 <= uVar17) goto LAB_036afbe8;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar25 + (long)(int)uVar17 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_036a9778:
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar65 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar25 = unaff_x19[0x20];
    }
    else {
      lVar28 = unaff_x19[0x8f];
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      if ((*(int *)(lVar28 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
         (uVar17 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
      if (uVar48 <= uVar17 - 1) goto LAB_036afbe8;
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar65 = *(float *)(lVar25 + (long)(int)(uVar17 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar25 = *in_stack_00000178;
    }
    if (lVar25 == 0) goto LAB_036afadc;
    fVar59 = (float)FUN_0396ac34(lVar25 + 0x50,0);
    fVar43 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar43 = 1.0;
    }
    fVar61 = 0.0;
    fVar45 = 0.0;
    if ((unaff_w23 & unaff_w29 == 0x2026) == 0) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar45 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar61 = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
    }
    lVar25 = unaff_x19[0xc9];
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
    fVar44 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = *(float *)(lVar25 + 0x2c);
    fVar57 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar62 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar53 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
    lVar25 = unaff_x19[0x6d];
    if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar43 = ((fVar50 * fVar65) / (float)iVar12) * fVar59 * fVar43;
    fVar57 = fVar43 * fVar44 * fVar46 * fVar57;
    *(float *)(lVar28 + 0x160) = fVar57;
    uVar48 = *(uint *)(unaff_x19 + 0x24);
    fVar47 = fVar43 * fVar62 * fVar53 * fVar47;
    fStack000000000000012c = fVar61;
    if (uVar48 == 0) {
      in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar28 = unaff_x19[0xe1];
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar48) goto LAB_036afbe8;
      lVar28 = *(long *)(lVar28 + (long)(int)uVar48 * 8 + 0x20);
      if (lVar28 == 0) goto LAB_036afadc;
      in_stack_00000170._4_4_ = *(float *)(lVar28 + 0x10c);
    }
FUN_036a9b34:
    fVar65 = 0.0;
    if (unaff_w29 != 3 && unaff_w29 != 0xad) {
      fVar65 = fVar57;
    }
  }
  else {
    fVar50 = 1.0;
    if (iVar12 == 0) goto LAB_036a9668;
LAB_036a9280:
    if (iVar12 == 1) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *in_stack_000000b8 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) || (lVar25 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar25 == 0))
      goto LAB_036afadc;
      lVar25 = FUN_02b59714(lVar25,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      puVar8 = PTR_DAT_03d9c920;
      uVar17 = unaff_w29;
      if (lVar25 == 0) goto LAB_036a9250;
      if (unaff_w29 == 0x3c) {
        unaff_w29 = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar41 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar41 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar41 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar41 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar43 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar65 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar65 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar65 = (fVar57 / (float)iVar12) * fVar43 * fVar65;
      iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar59 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        fVar43 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar43 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(lVar25 + 0x20),0);
        fVar44 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        fVar62 = *(float *)(lVar25 + 0x2c);
        fVar46 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar53 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar49 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar47 = fVar65 * fVar53 * fVar49 * fVar47;
        fVar43 = (fVar57 / (float)iVar12) * fVar59 * fVar43;
        fVar57 = fVar43 * (fVar61 / fVar44) * fVar62 * fVar46;
        fVar43 = fVar43 / fVar57;
        fVar45 = fVar43 * fVar45;
        fVar65 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar43 = fVar43 * fVar65;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar43 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        fVar61 = *(float *)(lVar25 + 0x2c);
        fVar59 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar59 = 1.0;
        }
        fVar44 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar46 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar62 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar47 = fVar65 * fVar46 * fVar62 * fVar47;
        fVar57 = (fVar57 / (float)iVar12) * fVar43 * fVar59 * fVar61 * fVar44;
        fVar43 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = lVar25;
      thunk_FUN_01b4f09c(in_stack_000000f8,lVar25);
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar25 + 0x2c) = 1;
      *(float *)(lVar25 + 0x160) = fVar57;
      *(long *)(lVar25 + 0x40) = *in_stack_000000b8;
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      thunk_FUN_01b4f09c();
      lVar25 = *in_stack_00000190;
      if ((lVar25 == 0) || (lVar41 = *(long *)(lVar25 + 0x38), lVar41 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      in_stack_00000170._4_4_ = 0.0;
      *(int *)(lVar41 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
      fStack000000000000012c = fVar43;
      goto FUN_036a9b34;
    }
    lVar25 = *in_stack_00000190;
    fVar65 = 0.0;
    if (unaff_w29 != 3 && unaff_w29 != 0xad) {
      fVar65 = fVar57;
    }
    fVar47 = 0.0;
    if (lVar25 == 0) goto LAB_036afadc;
    fVar45 = 0.0;
    fStack000000000000012c = 0.0;
  }
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar25 + 0x20) = (short)unaff_w29;
  *(int *)(lVar25 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar25 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(int *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar48 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)uVar48 * unaff_x24;
  *(undefined4 *)(lVar25 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar25 + 0x184) = in_stack_000001d8;
  *(undefined8 *)(lVar25 + 0x17c) = in_stack_000001d0;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar25,0);
  puVar8 = StringLiteral_455;
  if ((int)unaff_w29 < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar48 = FUN_02fdb080(unaff_w29,0);
    unaff_w21 = uVar48 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  uVar48 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar48 << 0x20;
    fVar59 = 0.0;
    fVar43 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar13 = *unaff_x20;
    uVar17 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar13 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar13 + 1) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + (long)(int)(uVar13 + 1) * (long)iVar14 + 0x30);
      if ((((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar28 = *(long *)(*in_stack_00000178 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_036afadc;
      uVar20 = FUN_02630bd0(lVar28,uVar17 | *(int *)(lVar25 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar64 = 0;
      if ((uVar20 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar48 << 0x20;
        fVar59 = 0.0;
        fVar43 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar64 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar43 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar59 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar48 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar48,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar13 = *unaff_x20;
    }
    else {
      uVar64 = 0;
      _fStack0000000000000138 = (ulong)uVar48 << 0x20;
      fVar59 = 0.0;
      fVar43 = 0.0;
    }
    if (0 < (int)uVar13) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar13 - 1) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + (ulong)(uVar13 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar28 = *(long *)(*in_stack_00000178 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_036afadc;
      uVar20 = FUN_02630bd0(lVar28,*(uint *)(lVar25 + 0x28) | uVar17 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar20 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar51 = (undefined4)_fStack0000000000000138;
        fVar43 = (float)FUN_036d2d10(fVar43,fVar59,_fStack0000000000000138 & 0xffffffff,uVar64,
                                     *(undefined4 *)(in_stack_00000fb8 + 0x28),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x2c),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x30),
                                     *(undefined4 *)(in_stack_00000fb8 + 0x34),0);
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          fStack000000000000013c = 0.0;
        }
        _fStack0000000000000138 = CONCAT44(fStack000000000000013c,uVar51);
      }
    }
    *(float *)((long)unaff_x19 + 0x2fc) = fStack0000000000000138;
  }
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar44 = *(float *)(unaff_x19 + 200);
    fVar61 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar44 = fVar44 - fVar65 * fVar61 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar44;
    if ((unaff_w29 == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) = fVar44 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar61 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000098 = 0.0;
  if (fVar61 != 0.0) {
    fVar44 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar46 = (float)FUN_0396af78(&stack0x00001050,0);
    in_stack_00000098 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar61 * 0.5 - fVar65 * (fVar44 * 0.5 + fVar46));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000098;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar25 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_0391f968(lVar25,0,0);
    in_stack_000000d0 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar25 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar25 == 0) goto LAB_036afadc;
      uVar20 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      in_stack_000000d0 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar25 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar25 == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_03900954(lVar25,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar44 = *(float *)(*in_stack_00000178 + 0x1b0);
        in_stack_000000d0 =
             (float)FUN_03900954(*in_stack_00000168,
                                 *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        in_stack_000000d0 = in_stack_000000d0 * fVar61 * fVar44 * 0.25;
        if (fVar61 < in_stack_00000170._4_4_ + in_stack_000000d0) {
          in_stack_00000170._4_4_ = fVar61 - in_stack_000000d0;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    in_stack_000000e0._4_4_ = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar25 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_0391f968(lVar25,0,0);
    in_stack_000000e0._4_4_ = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar25 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar25 == 0) goto LAB_036afadc;
      uVar20 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar25 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar25 == 0) goto LAB_036afadc;
        uVar20 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar25 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar25 == 0) goto LAB_036afadc;
          fVar61 = (float)FUN_03900954(lVar25,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
          fVar44 = *(float *)(*in_stack_00000178 + 0x1a8);
          in_stack_000000d0 =
               (float)FUN_03900954(*in_stack_00000168,
                                   *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          in_stack_000000d0 = in_stack_000000d0 * fVar61 * fVar44 * 0.25;
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
       fVar65 * (fVar43 + ((fVar61 - in_stack_00000170._4_4_) - in_stack_000000d0));
  fVar43 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar44 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar47 + fVar65 * (fVar59 + in_stack_00000170._4_4_ + fVar43)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar43 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar46 = fVar44 - fVar65 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar43);
  fVar43 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar61 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar65 * (in_stack_000000d0 + in_stack_000000d0 +
                    in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar43);
  fVar43 = fStack0000000000000124;
  fVar59 = fVar61;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar62 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar43 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar58 = fVar62 * fVar65 * (in_stack_000000d0 + in_stack_00000170._4_4_ + fVar43);
    fVar43 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar59 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar44 = fVar44 + 0.0;
    fVar46 = fVar46 + 0.0;
    fVar53 = fStack0000000000000124 + fVar58;
    fVar62 = fVar62 * fVar65 * (((fVar43 - fVar59) - in_stack_00000170._4_4_) - in_stack_000000d0);
    fVar59 = fVar61 + fVar62;
    fVar49 = (fVar58 - fVar62) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar62) - fVar49;
    fVar61 = (fVar61 + fVar58) - fVar49;
    fVar43 = fVar53 - fVar49;
    fVar59 = fVar59 - fVar49;
  }
  _fStack0000000000000140 = (ulong)(uint)fVar65;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar62 = 0.0;
    fVar49 = 0.0;
    fVar58 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar53 = fVar46;
    fStack0000000000000114 = fVar44;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar63 = (fVar46 + fVar44) * 0.5;
    fVar60 = (fVar61 + fStack0000000000000124) * 0.5;
    fVar44 = fVar44 - fVar63;
    fStack0000000000000110 = 0.0;
    fVar52 = fVar44;
    fVar43 = (float)FUN_03911ddc(fVar43 - fVar60,_fStack0000000000000080,0);
    fVar43 = fVar60 + fVar43;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar46 = fVar46 - fVar63;
    fVar62 = 0.0;
    fVar53 = fVar46;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar60,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar60 + fStack0000000000000124;
    fVar62 = fVar62 + 0.0;
    fVar58 = 0.0;
    fVar61 = (float)FUN_03911ddc(fVar61 - fVar60,_fStack0000000000000080,0);
    fVar61 = fVar60 + fVar61;
    fVar44 = fVar63 + fVar44;
    fVar58 = fVar58 + 0.0;
    fVar49 = 0.0;
    fVar59 = (float)FUN_03911ddc(fVar59 - fVar60,_fStack0000000000000080,0);
    fVar59 = fVar60 + fVar59;
    fVar46 = fVar63 + fVar46;
    fVar49 = fVar49 + 0.0;
    fVar53 = fVar63 + fVar53;
    fStack0000000000000114 = fVar63 + fVar52;
  }
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar25 = *(long *)(*in_stack_00000190 + 0x38);
  unaff_d13 = (ulong)(uint)fVar65;
  if (lVar25 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar25 + 0x120) = fVar53;
  *(float *)(lVar25 + 0x124) = fVar62;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x110) = fVar43;
  *(float *)(lVar25 + 0x114) = fStack0000000000000114;
  *(float *)(lVar25 + 0x118) = fStack0000000000000110;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x128) = fVar61;
  *(float *)(lVar25 + 300) = fVar44;
  *(float *)(lVar25 + 0x130) = fVar58;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x134) = fVar59;
  *(float *)(lVar25 + 0x138) = fVar46;
  *(float *)(lVar25 + 0x13c) = fVar49;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar48 = *unaff_x20;
  unaff_x26 = (long)(int)uVar48;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar28 = lVar25 + unaff_x26 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar59 = *(float *)(unaff_x19 + 0x9b);
  param_2 = (ulong)(uint)fVar59;
  fVar43 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar61 - fStack0000000000000124) / (fStack0000000000000114 - fVar53)
  ;
  *(float *)(lVar28 + 0x14c) = (fVar47 - fVar59) + fVar43;
  fVar45 = fVar45 * fVar65;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar45 = fVar45 / fVar50;
    fStack000000000000012c = (fStack000000000000012c * fVar65) / fVar50;
  }
  else {
    fStack000000000000012c = fStack000000000000012c * fVar65;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar48 == unaff_w25)) {
    fStack000000000000012c = fVar43 + fStack000000000000012c;
    fVar45 = fVar43 + fVar45;
    fVar44 = fStack000000000000012c;
    fVar61 = fVar45;
    if (fVar43 != 0.0) {
      fVar61 = (fVar45 - fVar43) / *(float *)((long)unaff_x19 + 0x404);
      fVar44 = (fStack000000000000012c - fVar43) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar61 <= fVar45) {
        fVar61 = fVar45;
      }
      if (fStack000000000000012c <= fVar44) {
        fVar44 = fStack000000000000012c;
      }
    }
    lVar25 = lVar25 + unaff_x26 * unaff_x24;
    fVar43 = fVar61;
    if (fVar61 <= *(float *)(unaff_x19 + 0x99)) {
      fVar43 = *(float *)(unaff_x19 + 0x99);
    }
    fVar46 = fVar44;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar44) {
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar46;
    *(float *)(unaff_x19 + 0x99) = fVar43;
    *(float *)(lVar25 + 0x154) = fVar61;
    *(float *)(lVar25 + 0x158) = fVar44;
    *(float *)(lVar25 + 0x148) = fVar45 - fVar59;
    *(float *)(unaff_x19 + 0x98) = fVar45 - fVar59;
    *(float *)(lVar25 + 0x150) = fStack000000000000012c - fVar59;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack000000000000012c - fVar59;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar43;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar43 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar59 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      fVar50 = (fVar65 * fVar59) / fVar50;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar43 <= fVar50) {
        fVar43 = fVar50;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar43;
    }
    if ((float)param_2 == 0.0) {
      fVar50 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= fVar45) {
        fVar50 = fVar45;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar50;
    }
  }
  else {
    fVar50 = *(float *)(unaff_x19 + 0x99);
    lVar25 = lVar25 + unaff_x26 * unaff_x24;
    *(float *)(lVar25 + 0x154) = fVar50;
    fVar43 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar50 = fVar50 - fVar59;
    *(float *)(lVar25 + 0x148) = fVar50;
    *(float *)(lVar25 + 0x158) = fVar43;
    *(float *)(unaff_x19 + 0x98) = fVar50;
    fVar43 = fVar43 - fVar59;
    *(float *)(lVar25 + 0x150) = fVar43;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
  }
  lVar25 = *in_stack_00000190;
  if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
  unaff_w27 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= unaff_w27) goto LAB_036afbe8;
  lVar28 = lVar28 + (long)(int)unaff_w27 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  in_stack_0000109c = unaff_w29;
  if ((unaff_w29 == 9) ||
     (((((unaff_w21 == 0 && (unaff_w29 != 3)) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0xad)) ||
      (((unaff_w29 == 0xad & (bStack000000000000007c ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar28 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a8;
    pfVar32 = _fStack00000000000000b0;
    if (unaff_w23 != 0) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar25 + 0x60);
      pfVar29 = (float *)(lVar25 + 100);
    }
    unaff_s8 = *pfVar32;
    unaff_s9 = *pfVar29;
    fVar50 = *(float *)(unaff_x19 + 0x6c);
    fVar43 = *(float *)(unaff_x19 + 200);
    in_stack_00000108._4_4_ = (fStack00000000000000a4 - unaff_s8) - unaff_s9;
    bVar10 = true;
    if ((fVar50 <= in_stack_00000108._4_4_) && (bVar10 = false, !NAN(fVar50))) {
      bVar10 = fVar50 == -1.0;
    }
    if (!bVar10) {
      in_stack_00000108._4_4_ = fVar50;
    }
    fVar50 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar50 = (float)FUN_0396af88(&stack0x00001050,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    if (unaff_w29 != 0xad) {
      fVar57 = fVar65;
    }
    fVar61 = (float)param_2;
    fVar65 = 0.0;
    if ((0.0 < fVar61) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar65 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    unaff_w27 = *unaff_x20;
    fVar65 = (*(float *)(unaff_x19 + 0x97) - (fVar45 - fVar61)) + fVar65;
    uVar17 = unaff_w29;
    if (fStack00000000000000c8 < fVar65) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
      }
      puVar8 = PTR_DAT_03d9c920;
      uVar18 = DAT_00b92750;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar44 = *(float *)(unaff_x19 + 0x59);
        if (((fVar44 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar61)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar65) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000058._4_4_;
          if (fVar57 <= fVar44) {
            fVar57 = fVar44;
          }
          goto LAB_036ad184;
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar65 = *(float *)(unaff_x19 + 0x4a);
        param_2 = (ulong)(uint)fVar65;
        if ((fVar65 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = (fVar61 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar57 <= DAT_00b55428) {
            fVar57 = DAT_00b55428;
          }
          fVar50 = (fVar61 - fVar57) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar61;
          fVar57 = DAT_00b556b4;
          if (fVar50 != INFINITY) {
            fVar57 = (float)(int)fVar50 / 20.0;
          }
          if (fVar57 <= fVar65) {
            fVar57 = fVar65;
          }
          goto LAB_036acc94;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar25 + 0xb8);
        if (*(int *)(lVar28 + 0x1580) == 0) goto LAB_036acbbc;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
LAB_036ab014:
        iVar12 = FUN_036ecf20();
        goto LAB_036ab020;
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
        if ((unaff_w27 == 0) || ((int)in_stack_00001068 < 0)) {
          *unaff_x20 = 0;
          in_stack_00001068 = 0xffffffff;
          in_stack_00001088 = uVar18;
          goto LAB_036a9250;
        }
        fVar57 = *(float *)(unaff_x19 + 0x99);
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if (fVar57 - fVar45 <= fStack00000000000000c8) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          param_2 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar25 = NEON_rev64(param_2,4);
          unaff_x19[0x99] = lVar25;
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
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar20 = FUN_0391f968(lVar25,0,0);
        if ((uVar20 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_036aad90:
      in_stack_00001088 = CONCAT44(3,unaff_w27);
      uVar17 = unaff_w29;
      goto LAB_036a9250;
    }
switchD_036aaa24_caseD_2:
    fVar65 = 1.0 - fVar59;
    param_2 = (ulong)(uint)fVar65;
    fVar43 = ABS(fVar43) + fVar50 * fVar65 * fVar57;
    fVar50 = 1.0;
    if (unaff_w28 != 0) {
      fVar50 = DAT_00b55374;
    }
    param_1 = (ulong)(uint)(fVar50 * in_stack_00000108._4_4_);
    if (fVar50 * in_stack_00000108._4_4_ < fVar43) {
      if (((char)unaff_x19[0x5b] == '\0') || (unaff_w27 == *(uint *)(unaff_x19 + 0x93))) {
        if (((char)unaff_x19[0x47] == '\0') ||
           ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) goto LAB_036aab40;
        fVar57 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar57 <= fVar59) {
          param_2 = (ulong)*(uint *)((long)unaff_x19 + 0x1e4);
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x4a);
          goto code_r0x036aab38;
        }
        fVar65 = fVar43 / fVar65;
        if (fVar59 <= 0.0) {
          fVar65 = fVar43;
        }
        fVar59 = fVar59 + (fVar43 - fVar50 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar65;
LAB_036afb6c:
        if (fVar57 <= fVar59) {
          fVar59 = fVar57;
        }
        *(float *)((long)unaff_x19 + 0x2d4) = fVar59;
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
        lVar25 = *in_stack_00000190;
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        fVar57 = *(float *)(unaff_x19 + 0x9b);
        fVar65 = 0.0;
        if ((0.0 < fVar57) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar65 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar65 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar65 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar25 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar25 == 0) goto LAB_036afadc;
        fVar57 = *(float *)(unaff_x19 + 0x9b);
        fVar65 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_036afadc;
      uVar13 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar25 + 0x18) <= uVar13) ||
         (uVar31 = uVar13 - 1, *(uint *)(lVar25 + 0x18) <= uVar31)) goto LAB_036afbe8;
      param_2 = (ulong)(uint)(fVar65 + *(float *)(unaff_x19 + 0x97));
      fVar65 = (fVar65 + *(float *)(unaff_x19 + 0x97) + fVar57) -
               *(float *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x158);
      if (((bStack000000000000007c & 1) == 0 &&
           *(short *)(lVar25 + (long)(int)uVar31 * (long)iVar14 + 0x20) == 0xad) &&
         ((fVar65 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
        bStack000000000000007c = 0;
        *unaff_x20 = uVar31;
        in_stack_00001068 = in_stack_00001068 - 1;
        in_stack_00001088 = CONCAT44(0x2d,uVar31);
        goto LAB_036a9250;
      }
      if (*(short *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x20) == 0xad) {
        bStack000000000000007c = 1;
        goto LAB_036a9250;
      }
      if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
        fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar57 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar59 < fVar57) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
        goto LAB_036afb7c;
        fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
        param_2 = (ulong)(uint)fVar57;
        param_1 = (ulong)(uint)*(float *)(unaff_x19 + 0x4a);
        if ((*(float *)(unaff_x19 + 0x4a) < fVar57) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) goto LAB_036afae0;
      }
      lVar25 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar25 = *(long *)puVar8;
      }
      iVar12 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xe78);
      if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack0000000000000078 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
        goto LAB_036afadc;
        uVar13 = *unaff_x20 - 1;
        if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
        iStack0000000000000034 = iVar12;
        if (*(short *)(lVar25 + (long)(int)uVar13 * (long)iVar14 + 0x20) == 0xad) {
          bStack000000000000007c = 0;
          *unaff_x20 = uVar13;
          in_stack_00001068 = in_stack_00001068 - 1;
          in_stack_00001088 = CONCAT44(0x2d,uVar13);
          goto LAB_036a9250;
        }
      }
      param_1 = _fStack00000000000000c8 & 0xffffffff;
      if (fVar65 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
        param_2 = unaff_d13;
        FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                     fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
LAB_036ab530:
        bStack0000000000000078 = 1;
        bStack000000000000007c = 0;
        in_stack_00000068 = 1;
        goto LAB_036a9250;
      }
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
      }
      if ((char)unaff_x19[0x47] != '\0') {
        fVar59 = *(float *)(unaff_x19 + 0x59);
        if ((fVar59 < *(float *)((long)unaff_x19 + 700)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar57 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar65) / (float)((int)unaff_x19[0x95] + 1)) /
                   in_stack_00000058._4_4_;
          if (fVar57 <= fVar59) {
            fVar57 = fVar59;
          }
LAB_036ad184:
          *(float *)((long)unaff_x19 + 700) = fVar57;
          return;
        }
        fVar59 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar57 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar59 < fVar57) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_036afb7c:
          fVar65 = fVar43;
          if (0.0 < fVar59) {
            fVar65 = fVar43 / (1.0 - fVar59);
          }
          fVar59 = fVar59 + (fVar43 - fVar50 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar65;
          goto LAB_036afb6c;
        }
        fVar57 = *(float *)((long)unaff_x19 + 0x1e4);
        param_2 = (ulong)(uint)fVar57;
        param_1 = (ulong)(uint)*(float *)(unaff_x19 + 0x4a);
        if ((*(float *)(unaff_x19 + 0x4a) < fVar57) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) goto LAB_036afae0;
      }
      switch((int)unaff_x19[0x5c]) {
      case 0:
      case 2:
      case 4:
        goto switchD_036ab4e4_caseD_0;
      case 1:
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)PTR_DAT_03d9c920;
        }
        lVar28 = *(long *)(lVar25 + 0xb8);
        if (*(int *)(lVar28 + 0x1580) == 0) {
          bStack000000000000007c = 0;
LAB_036acbbc:
          in_stack_00001088 = DAT_00b92750;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_00001068 = 0xffffffff;
          uVar17 = unaff_w29;
          goto LAB_036a9250;
        }
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
        iVar12 = FUN_036ecf20();
        bStack000000000000007c = 0;
LAB_036ab020:
        iVar15 = *(int *)((long)unaff_x19 + 0x494) + -1;
        *(int *)((long)unaff_x19 + 0x494) = iVar15;
        in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
        in_stack_00001068 = iVar12 - 1;
        in_stack_00001088 = CONCAT44(0x2026,iVar15);
        uVar17 = unaff_w29;
        goto LAB_036a9250;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        bStack000000000000007c = 0;
        goto LAB_036aad90;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
        param_2 = unaff_d13;
        FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                     fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        goto LAB_036ab530;
      case 6:
        goto switchD_036ab4e4_caseD_6;
      default:
        bStack000000000000007c = 0;
      }
    }
LAB_036ab54c:
    uStack0000000000000074 = unaff_w21;
    if (unaff_w29 != 0xad) {
      if (unaff_w29 != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))(param_1,in_stack_000000d0);
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
        if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x50), lVar25 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        in_stack_00000068 = 0;
        *(float *)(lVar25 + 0x60) = unaff_s8;
        *(float *)(lVar25 + 100) = unaff_s9;
        unaff_w29 = in_stack_0000109c;
        goto LAB_036ab6c0;
      }
      lVar25 = *in_stack_00000190;
      if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
      uVar17 = *unaff_x20;
      if (*(uint *)(lVar28 + 0x18) <= uVar17) goto LAB_036afbe8;
      *(undefined1 *)(lVar28 + (long)(int)uVar17 * unaff_x24 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar17;
      lVar28 = *(long *)(lVar25 + 0x50);
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
      goto LAB_036ab5c8;
    }
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *(undefined1 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    unaff_w29 = in_stack_0000109c;
  }
  else {
    if (((unaff_w29 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar50 = (float)param_2;
      fVar57 = 0.0;
      if ((0.0 < fVar50) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_2 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar50)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
        }
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar20 = FUN_0391f968(lVar25,0,0);
        if ((uVar20 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5d];
          uVar18 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar40 = (long *)unaff_x19[0x5d];
          if (plVar40 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_036aad90;
      }
    }
    if ((((unaff_w29 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(unaff_w29 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (unaff_w29 - 10 < 2)
        ) || (unaff_w29 == 0xa0)) {
LAB_036ab188:
      if (((unaff_w29 != 0xad) && (unaff_w29 != 0x200b)) && (unaff_w29 != 0x2060)) {
        lVar25 = *in_stack_00000190;
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fdea78(unaff_w29,0);
      if ((uVar20 & 1) != 0) goto LAB_036ab188;
    }
    uStack0000000000000074 = unaff_w21;
    if (unaff_w29 == 0xa0) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
      uStack0000000000000074 = unaff_w21;
      unaff_w29 = in_stack_0000109c;
    }
  }
LAB_036ab6c0:
  if (((int)unaff_x19[0x5c] == 1) && ((unaff_w29 == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar57 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar65 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
    lVar25 = unaff_x19[0xca];
    fVar50 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar50 = 1.0;
    }
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
    fVar59 = *(float *)((long)unaff_x19 + 0x404);
    fVar61 = *(float *)(lVar25 + 0x2c);
    fVar43 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
    fVar45 = *_fStack00000000000000b0;
    fVar43 = fVar59 * (fVar57 / (float)iVar12) * fVar65 * fVar50 * fVar61 * fVar43;
    fVar57 = *_fStack00000000000000a8;
    if ((unaff_w29 == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      uVar17 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_036afbe8;
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar50 = *(float *)(lVar25 + (long)(int)uVar17 * (long)iVar14 + 0x60);
      iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar59 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
      lVar25 = unaff_x19[0xca];
      fVar65 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar65 = 1.0;
      }
      if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
      fVar61 = *(float *)((long)unaff_x19 + 0x404);
      fVar44 = *(float *)(lVar25 + 0x2c);
      fVar43 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar45 = *(float *)(lVar25 + 0x60);
      fVar57 = *(float *)(lVar25 + 100);
      fVar43 = fVar61 * (fVar50 / (float)iVar12) * fVar59 * fVar65 * fVar44 * fVar43;
    }
    fVar59 = *(float *)(unaff_x19 + 0x9b);
    fVar50 = 0.0;
    fVar65 = 0.0;
    if ((0.0 < fVar59) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar65 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar44 = *(float *)(unaff_x19 + 0x97);
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar61 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar25 = *(long *)(unaff_x19[0xca] + 0x20), lVar25 == 0))
      goto LAB_036afadc;
      FUN_0396b140(&stack0x000010a0,lVar25,0);
      fVar50 = (float)FUN_0396af88(&stack0x00000fc0,0);
    }
    puVar8 = PTR_DAT_03d9c920;
    fVar62 = *(float *)(unaff_x19 + 0x6c);
    fVar57 = (fStack00000000000000a4 - fVar45) - fVar57;
    bVar10 = true;
    if ((fVar62 <= fVar57) && (bVar10 = false, !NAN(fVar62))) {
      bVar10 = fVar62 == -1.0;
    }
    if (!bVar10) {
      fVar57 = fVar62;
    }
    fVar45 = 1.0;
    if (unaff_w28 != 0) {
      fVar45 = DAT_00b55374;
    }
    if (((fVar44 - (fVar46 - fVar59)) + fVar65 < fStack00000000000000c8) &&
       (ABS(fVar61) + fVar43 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar45 * fVar57)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      lVar25 = *(long *)(*(long *)puVar8 + 0xb8);
      uVar18 = *(undefined8 *)PTR_DAT_03d9c8c8;
      memcpy(&stack0x000010a0,(void *)(lVar25 + 0x788),0x378);
      FUN_02178ef4(lVar25 + 0x11f0,&stack0x000010a0,uVar18);
    }
  }
  lVar25 = *in_stack_00000190;
  if (lVar25 == 0) goto LAB_036afadc;
  lVar28 = *(long *)(lVar25 + 0x38);
  unaff_d13 = _fStack0000000000000140 & 0xffffffff;
  if (lVar28 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  uVar17 = *(uint *)(unaff_x19 + 0x95);
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar28 + 100) = uVar17;
  *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < unaff_w29 || ((1 << (ulong)(unaff_w29 & 0x1f) & 0x2c00U) == 0)))) {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_036afadc;
LAB_036aba84:
    if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_036afbe8;
    *(int *)(lVar25 + (long)(int)uVar17 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_036afbe8;
    if (*(int *)(lVar25 + (long)(int)uVar17 * 0x5c + 0x24) == 1) goto LAB_036aba84;
  }
  if (unaff_w29 == 9) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar57 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar65 = *(float *)(unaff_x19 + 200);
    fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar57 = fStack0000000000000140 * fVar57 * fVar50;
    fVar50 = fVar57 * (float)(int)(fVar65 / fVar57);
    param_2 = (ulong)(uint)fVar50;
    if (fVar50 <= fVar65) {
      fVar50 = fVar65 + fVar57;
    }
LAB_036abca4:
    *(float *)(unaff_x19 + 200) = fVar50;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar65 = 1.0;
      }
      else {
        fVar65 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
      }
      fVar50 = *(float *)(unaff_x19 + 200);
      fVar43 = (float)FUN_0396af88(&stack0x00001050,0);
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar57 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar50 = fVar50 + fVar57 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fStack0000000000000140 * (fStack0000000000000138 + fVar65 * fVar43)
                                 + in_stack_000000f0 *
                                   (in_stack_000000e0._4_4_ +
                                   fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar50;
      goto joined_r0x036abbe8;
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fStack0000000000000140 * fStack0000000000000138 +
             in_stack_000000f0 *
             (in_stack_000000e0._4_4_ +
             fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    param_2 = (ulong)(uint)fVar50;
    fVar50 = *(float *)(unaff_x19 + 200) - fVar50;
    *(float *)(unaff_x19 + 200) = fVar50;
    if ((unaff_w29 == 0x200b) || (uStack0000000000000074 != 0)) {
      fVar57 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar57;
      fVar50 = fVar50 - fVar57;
      goto LAB_036abca4;
    }
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar57 = *(float *)(unaff_x19 + 200);
    fVar50 = fVar57 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000098) +
                      in_stack_000000f0 *
                      (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar50;
joined_r0x036abbe8:
    if ((unaff_w29 == 0x200b) || (param_2 = (ulong)(uint)fVar57, uStack0000000000000074 != 0)) {
      fVar57 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      param_2 = (ulong)(uint)fVar57;
      fVar50 = fVar50 + fVar57;
      goto LAB_036abca4;
    }
  }
  lVar25 = *in_stack_00000190;
  if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
  uVar13 = *unaff_x20;
  uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar31 <= uVar13) goto LAB_036afbe8;
  *(float *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar50;
  uVar42 = unaff_w29;
  uVar17 = unaff_w29;
  if ((int)unaff_w29 < 0xd) {
    if ((unaff_w29 - 10 < 2) || (unaff_w29 == 3)) goto LAB_036abd48;
LAB_036abd2c:
    if (((unaff_w23 & unaff_w29 == 0x2d) != 0) || ((float)uVar13 == in_stack_00000090._4_4_))
    goto LAB_036abd48;
  }
  else {
    if (1 < unaff_w29 - 0x2028) {
      if (unaff_w29 != 0xd) goto LAB_036abd2c;
      param_2 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar13 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
    }
LAB_036abd48:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar57 = *(float *)(unaff_x19 + 0x99);
      fVar50 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar57 = fVar57 - fVar50;
      if (((fStack0000000000000060 < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_036ed624(fVar57);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar57;
        *(float *)(unaff_x19 + 0x9b) = fVar57 + *(float *)(unaff_x19 + 0x9b);
        puVar8 = PTR_DAT_03d9c920;
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar25 + 0xb8);
        if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
          puVar8 = PTR_DAT_03d9c920;
          lVar25 = *(long *)PTR_DAT_03d9c920;
          memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&stack0x000001d0,0x378);
          thunk_FUN_01b4f09c(*(long *)(lVar25 + 0xb8) + 0x818,0);
          lVar25 = *(long *)(*(long *)puVar8 + 0xb8);
          *(float *)(lVar25 + 0x7bc) = fVar57 + *(float *)(lVar25 + 0x7bc);
          *(float *)(lVar25 + 0x800) = fVar57 + *(float *)(lVar25 + 0x800);
          uVar18 = *(undefined8 *)PTR_DAT_03d9c8c8;
          memcpy(&stack0x000010a0,(void *)(lVar25 + 0x788),0x378);
          FUN_02178ef4(lVar25 + 0x11f0,&stack0x000010a0,uVar18);
        }
      }
    }
    fVar65 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar50 = *(float *)((long)unaff_x19 + 0x4cc) - fVar65;
    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar57 = fVar50;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar57;
    fVar43 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_00001094 == '\0') {
      in_stack_00001098 = fVar57;
    }
    if ((*(char *)((long)unaff_x19 + 0x334) != '\0') &&
       (((int)unaff_x19[0x65] <= *(int *)((long)unaff_x19 + 0x494) ||
        ((int)unaff_x19[0x66] <= (int)unaff_x19[0x95])))) {
      in_stack_00001094 = '\x01';
    }
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_036afadc;
    uVar13 = *(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar41 = unaff_x19[0x93];
    lVar21 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(int *)(lVar21 + 0x34) = (int)lVar41;
    uVar31 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar41 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar31 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar31;
    *(uint *)(lVar21 + 0x38) = uVar31;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar21 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar31 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar21 + 0x40) = iVar12;
    *(int *)(lVar21 + 0x24) = (*(int *)(lVar21 + 0x3c) - *(int *)(lVar21 + 0x34)) + 1;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar31) goto LAB_036afbe8;
    uVar64 = *(undefined4 *)(lVar25 + (long)(int)uVar31 * (long)iVar14 + 0x11c);
    lVar28 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar50;
    *(undefined4 *)(lVar28 + 0x6c) = uVar64;
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    fVar43 = fVar43 - fVar65;
    param_2 = (ulong)(uint)fVar43;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) =
         *(undefined4 *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar28 + 0x78) = fVar43;
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar41 = *(long *)(lVar25 + 0x50), lVar41 == 0)) goto LAB_036afadc;
    lVar21 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar28 = lVar41 + lVar21 * 0x5c;
    *(float *)(lVar28 + 0x44) =
         *(float *)(lVar28 + 0x74) - fStack0000000000000140 * in_stack_00000170._4_4_;
    *(float *)(lVar28 + 0x5c) = in_stack_00000108._4_4_;
    if (*(int *)(lVar28 + 0x24) == 1) {
      *(int *)(lVar41 + lVar21 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*in_stack_00000178 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0))
    goto LAB_036afadc;
    lVar35 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar31 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    if ((*(char *)(lVar28 + lVar35 * unaff_x24 + 0x194) == '\0') &&
       (lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar31 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_036afbe8;
    lVar41 = lVar41 + lVar21 * 0x5c;
    fVar65 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (in_stack_000000f0 *
              (in_stack_000000e0._4_4_ +
              fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar57 = -fVar65;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar57 = fVar65;
    }
    *(float *)(lVar41 + 0x58) = *(float *)(lVar28 + lVar35 * unaff_x24 + 0x144) + fVar57;
    *(float *)(lVar41 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar41 + 0x54) = fVar50;
    *(float *)(lVar41 + 0x48) = fStack0000000000000064 + (fVar43 - fVar50);
    *(float *)(lVar41 + 0x4c) = fVar43;
    if ((int)unaff_w29 < 0x2d) {
      if (unaff_w29 - 10 < 2) {
LAB_036ac1c4:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        lVar25 = unaff_x19[0x6d];
        *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
        iVar12 = (int)unaff_x19[0x95] + 1;
        *(int *)(unaff_x19 + 0x95) = iVar12;
        *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
        if ((lVar25 == 0) || (*(long *)(lVar25 + 0x50) == 0)) goto LAB_036afadc;
        if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar12) {
          FUN_036ed7dc();
          lVar25 = unaff_x19[0x6d];
          if (lVar25 == 0) goto LAB_036afadc;
        }
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        fVar57 = *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
          if ((unaff_w29 == 0x2029) || (fVar50 = 0.0, unaff_w29 == 10)) {
            fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 0;
          fVar50 = fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700))
                   + in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar50) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((unaff_w29 == 0x2029) || (fVar50 = 0.0, unaff_w29 == 10)) {
            fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 1;
          fVar50 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar50);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar50;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
        puVar8 = PTR_DAT_03d9c920;
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar8;
        }
        uVar18 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar57;
        param_2 = NEON_rev64(uVar18,4);
        unaff_x19[0x99] = param_2;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_036ed2b4();
        FUN_036ed2b4();
        bStack0000000000000078 = 1;
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068 = 1;
        goto LAB_036a9250;
      }
      if (unaff_w29 == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
        in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar42 = 3;
      }
    }
    else if ((unaff_w29 - 0x2028 < 2) || (unaff_w29 == 0x2d)) goto LAB_036ac1c4;
  }
LAB_036ac2f4:
  uVar13 = *unaff_x20;
  if (uVar31 <= uVar13) goto LAB_036afbe8;
  if (*(char *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
    lVar28 = lVar28 + (long)(int)uVar13 * unaff_x24;
    uVar54 = *(ulong *)(lVar28 + 0x11c);
    uVar20 = *(ulong *)(in_stack_00000088 + 0x230);
    *(ulong *)(in_stack_00000088 + 0x230) =
         uVar20 ^ (uVar20 ^ uVar54) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar54 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar54));
    uVar20 = *(ulong *)(in_stack_00000088 + 0x238);
    param_2 = *(ulong *)(lVar28 + 0x128);
    *(ulong *)(in_stack_00000088 + 0x238) =
         uVar20 ^ (uVar20 ^ param_2) &
                  ~CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar20));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(lVar25 + 0x58);
    if (lVar28 == 0) goto LAB_036afadc;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar28 + 0x18) < iVar12) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52e84((long *)(lVar25 + 0x58),iVar12,1,*(undefined8 *)PTR_DAT_03d9c890);
      lVar25 = *in_stack_00000190;
      if (lVar25 == 0) goto LAB_036afadc;
    }
    lVar28 = *(long *)(lVar25 + 0x58);
    if (lVar28 == 0) goto LAB_036afadc;
    uVar31 = *(uint *)(unaff_x19 + 0x96);
    lVar41 = (long)(int)uVar31;
    uVar13 = *(uint *)(lVar28 + 0x18);
    if (uVar13 <= uVar31) goto LAB_036afbe8;
    lVar21 = lVar28 + lVar41 * 0x14;
    fVar50 = *(float *)(lVar21 + 0x30);
    param_2 = (ulong)(uint)fVar50;
    *(undefined4 *)(lVar21 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar57 = fVar50;
    }
    *(float *)(lVar21 + 0x30) = fVar57;
    uVar42 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar42 == 0 && uVar31 == 0) {
      *(uint *)(lVar28 + (ulong)uVar31 * 0x14 + 0x20) = uVar42;
    }
    else {
      uVar6 = uVar42 - 1;
      if (0 < (int)uVar42) {
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_036afbe8;
        if (uVar31 != *(uint *)(lVar25 + (ulong)uVar6 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar13 <= uVar31 - 1) goto LAB_036afbe8;
          *(uint *)(lVar28 + 0x20 + (long)(int)(uVar31 - 1) * 0x14 + 4) = uVar6;
          *(uint *)(lVar28 + 0x20 + lVar41 * 0x14) = uVar42;
          goto LAB_036ac564;
        }
      }
      if ((float)uVar42 == in_stack_00000090._4_4_) {
        *(float *)(lVar28 + lVar41 * 0x14 + 0x24) = in_stack_00000090._4_4_;
      }
    }
  }
LAB_036ac564:
  puVar8 = PTR_DAT_03d9c920;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_036ac920;
  if ((uStack0000000000000074 == 0) &&
     (((unaff_w29 != 0x2d && (unaff_w29 != 0x200b)) && (unaff_w29 != 0xad)))) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if ((bStack0000000000000078 & 1) != 0) goto LAB_036ac6f8;
      goto LAB_036ac91c;
    }
LAB_036ac660:
    if (((((0x2bfd < unaff_w29 - 0xac01) && (0xfd < unaff_w29 - 0x1101)) &&
         (0x1d < unaff_w29 - 0xa961)) || (uVar20 = FUN_036fbce8(0), (uVar20 & 1) != 0)) &&
       ((((0xed < unaff_w29 - 0xff01 && (0x1d < unaff_w29 - 0xfe31)) &&
         (0x717d < unaff_w29 - 0x2e81)) && (0x1fd < unaff_w29 - 0xf901)))) goto LAB_036ac6e8;
    lVar25 = FUN_036fbb7c(0);
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_036afadc;
    uVar13 = FUN_0254f914(*(long *)(lVar25 + 0x10),unaff_w29,*(undefined8 *)PTR_DAT_03d9c860);
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
      if (uVar48 != unaff_w25 || ((bStack0000000000000078 ^ 0xff) & 1) != 0) goto LAB_036ac920;
      if (uStack0000000000000074 == 0) goto LAB_036ac8a0;
      goto LAB_036ac868;
    }
    lVar25 = FUN_036fbb7c(0);
    if (((lVar25 == 0) || (*in_stack_00000190 == 0)) ||
       (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_036afadc;
    uVar20 = FUN_0254f914(*(long *)(lVar25 + 0x18),
                          *(undefined2 *)
                           (lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar14 + 0x20),
                          *(undefined8 *)PTR_DAT_03d9c860);
    if ((uVar13 & 1) != 0) goto LAB_036ac84c;
    if ((uVar20 & 1) == 0) goto LAB_036ac8e4;
    if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
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
      if (((0x28 < unaff_w29 - 0x2007) ||
          ((1L << ((ulong)(unaff_w29 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((unaff_w29 != 0xa0 && (unaff_w29 != 0x2060)))) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        bStack0000000000000078 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_036ac920;
      }
      goto LAB_036ac660;
    }
LAB_036ac6e8:
    if ((bStack0000000000000078 & 1) == 0) {
LAB_036ac91c:
      bStack0000000000000078 = 0;
      goto LAB_036ac920;
    }
    if (uStack0000000000000074 == 0) {
LAB_036ac6f8:
      if ((bStack000000000000007c & 1) == 0 && unaff_w29 == 0xad) goto LAB_036ac868;
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
  bStack0000000000000078 = 1;
LAB_036ac920:
  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_036ed2b4();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_036a9250;
switchD_036ab4e4_caseD_6:
  lVar25 = unaff_x19[0x5d];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar20 = FUN_0391f968(lVar25,0,0);
  if ((uVar20 & 1) != 0) {
    plVar40 = (long *)unaff_x19[0x5d];
    uVar18 = (**(code **)(*unaff_x19 + 0x548))();
    if (plVar40 == (long *)0x0) goto LAB_036afadc;
    (**(code **)(*plVar40 + 0x558))(plVar40,uVar18,*(undefined8 *)(*plVar40 + 0x560));
    lVar25 = unaff_x19[0x5d];
    if (lVar25 == 0) goto LAB_036afadc;
    *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
    FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
    plVar40 = (long *)unaff_x19[0x5d];
    if (plVar40 == (long *)0x0) goto LAB_036afadc;
    (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
    *(undefined1 *)(unaff_x19 + 0x5f) = 1;
  }
  bStack000000000000007c = 0;
  goto LAB_036ab13c;
LAB_036ad4b0:
  uVar48 = uVar17 - 1;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x50), lVar41 == 0))
  goto LAB_036afadc;
  lVar35 = (long)(int)uVar48;
  lVar21 = lVar25 + lVar35 * 0x178;
  uVar31 = *(uint *)(lVar21 + 100);
  if (*(uint *)(lVar41 + 0x18) <= uVar31) goto LAB_036afbe8;
  lVar38 = (long)(int)uVar31;
  lVar41 = lVar41 + lVar38 * 0x5c;
  lVar33 = *(long *)(lVar21 + 0x38);
  uVar3 = *(ushort *)(lVar21 + 0x20);
  uVar6 = *(uint *)(lVar41 + 0x3c);
  uVar42 = *(uint *)(lVar41 + 0x68);
  iVar2 = *(int *)(lVar41 + 0x20);
  iVar15 = *(int *)(lVar41 + 0x28);
  iVar16 = *(int *)(lVar41 + 0x2c);
  uVar5 = *(uint *)(lVar41 + 0x40);
  lVar21 = (long)(int)uVar5;
  fVar44 = *(float *)(lVar41 + 0x4c);
  fVar62 = *(float *)(lVar41 + 0x54);
  fVar45 = *(float *)(lVar41 + 0x58);
  fVar49 = *(float *)(lVar41 + 0x5c);
  fVar47 = *(float *)(lVar41 + 0x60);
  fVar53 = *(float *)(lVar41 + 0x6c);
  fVar58 = *(float *)(lVar41 + 0x70);
  fVar61 = *(float *)(lVar41 + 0x74);
  fVar46 = *(float *)(lVar41 + 0x78);
  uVar37 = (uint)uVar3;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar47 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar45;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar47 + fVar49 * 0.5) - fVar45 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar49 + fVar47) - fVar45;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_00000108._4_4_ = fVar49 + fVar47;
      }
      break;
    case 8:
      goto switchD_036ad590_caseD_8;
    }
LAB_036ad6c0:
    in_stack_000000f8 = (long *)0x0;
  }
  else if (uVar42 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar25 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fde5f4(uVar4,0);
      if ((uVar20 & 1) == 0) {
        bVar1 = (int)uVar31 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar45 <= fVar49) && (!bVar1 && uVar42 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar49 + fVar47;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar17 == 1) || (uVar31 != uVar13)) || (uVar48 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar49 + fVar47;
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
        cVar24 = (char)unaff_x19[0x1e];
        fVar47 = -fVar45;
        if (cVar24 != '\0') {
          fVar47 = fVar45;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_036afbe8;
        iVar16 = (int)*(char *)(lVar25 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar16 + -1;
        if (iVar16 < 1) {
          fVar45 = 1.0;
          iVar16 = 1;
        }
        else {
          fVar45 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar37 == 9) {
LAB_036af498:
          fVar45 = 1.0 - fVar45;
        }
        else {
          if (uVar37 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar20 = FUN_02fdea78(uVar37,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_036af498;
          }
          iVar16 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar15;
        }
        fVar45 = ((fVar49 + fVar47) * fVar45) / (float)iVar16;
        if (cVar24 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar45;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar45;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar45 = fVar53 + fVar61;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar42 <= uVar48) goto LAB_036afbe8;
  lVar41 = lVar25 + lVar35 * 0x178;
  fVar49 = in_stack_000000d0 + in_stack_00000108._4_4_;
  fVar45 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar47 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar41 + 0x194) == '\0') goto LAB_036adf70;
  iVar15 = *(int *)(lVar25 + lVar35 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_036add84;
  fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar31,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar25 + lVar35 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar59 = 1.0;
    break;
  case 1:
    fVar46 = *(float *)(lVar25 + lVar35 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar25 + lVar35 * 0x178;
      fVar61 = (in_stack_00000108._4_4_ + fVar46) - *(float *)(in_stack_00000088 + 0x230);
      fVar46 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar27 = lVar25 + lVar35 * 0x178;
    fVar61 = fVar61 - fVar53;
    *(float *)(lVar27 + 0x84) = fVar59 + (fVar46 - fVar53) / fVar61;
    *(float *)(lVar27 + 0xac) = fVar59 + (*(float *)(lVar27 + 0x98) - fVar53) / fVar61;
    *(float *)(lVar27 + 0xd4) = fVar59 + (*(float *)(lVar27 + 0xc0) - fVar53) / fVar61;
    fVar59 = fVar59 + (*(float *)(lVar27 + 0xe8) - fVar53) / fVar61;
    break;
  case 2:
    lVar27 = lVar25 + lVar35 * 0x178;
    fVar46 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar61 = (in_stack_00000108._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar27 + 0x84) = fVar59 + fVar61 / fVar46;
    *(float *)(lVar27 + 0xac) =
         fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar59 = fVar59 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar25 + lVar35 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar25 + lVar35 * 0x178;
      fVar46 = fVar46 - fVar58;
      fVar61 = fVar59 + (*(float *)(lVar27 + 0x74) - fVar58) / fVar46;
      fVar46 = fVar59 + (*(float *)(lVar27 + 0x9c) - fVar58) / fVar46;
      *(float *)(lVar27 + 0x88) = fVar61;
      *(float *)(lVar27 + 0xb0) = fVar46;
      *(float *)(lVar27 + 0xd8) = fVar61;
      *(float *)(lVar27 + 0x100) = fVar46;
      break;
    case 2:
      lVar27 = lVar25 + lVar35 * 0x178;
      fVar61 = fVar59 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar61;
      fVar46 = *(float *)(unaff_x19 + 0x9c);
      fVar53 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar61;
      fVar61 = fVar59 + (*(float *)(lVar27 + 0x9c) - fVar46) / (fVar53 - fVar46);
      *(float *)(lVar27 + 0xb0) = fVar61;
      *(float *)(lVar27 + 0x100) = fVar61;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar42 = (uint)*(undefined8 *)(lVar25 + 0x18);
    }
    if (uVar42 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar35 * 0x178;
    fVar61 = *(float *)(lVar27 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar61) * 0.5;
    fVar53 = fVar59 + *(float *)(lVar27 + 0x88) * fVar61 + fVar46;
    fVar59 = fVar59 + fVar46 + *(float *)(lVar27 + 0xb0) * fVar61;
    *(float *)(lVar27 + 0x84) = fVar53;
    *(float *)(lVar27 + 0xac) = fVar53;
    *(float *)(lVar27 + 0xd4) = fVar59;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar25 + lVar35 * 0x178 + 0xfc) = fVar59;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar42 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar35 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar48 < uVar42) {
      lVar27 = lVar25 + lVar35 * 0x178;
      fVar44 = fVar44 - fVar62;
      fVar59 = (*(float *)(lVar27 + 0x74) - fVar62) / fVar44;
      fVar44 = (*(float *)(lVar27 + 0x9c) - fVar62) / fVar44;
      *(float *)(lVar27 + 0x88) = fVar59;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar42 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar35 * 0x178;
    fVar59 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar59;
    fVar44 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar27 + 0xb0) = fVar44;
    *(float *)(lVar27 + 0xd8) = fVar44;
    *(float *)(lVar27 + 0x100) = fVar59;
    break;
  case 3:
    if (uVar42 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar35 * 0x178;
    fVar44 = *(float *)(lVar27 + 0x15c);
    fVar61 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar44) * 0.5;
    fVar59 = *(float *)(lVar27 + 0x84) / fVar44 + fVar61;
    fVar61 = fVar61 + *(float *)(lVar27 + 0xd4) / fVar44;
    *(float *)(lVar27 + 0x88) = fVar59;
    *(float *)(lVar27 + 0xb0) = fVar61;
    *(float *)(lVar27 + 0x100) = fVar59;
    *(float *)(lVar27 + 0xd8) = fVar61;
  }
  if (uVar42 <= uVar48) goto LAB_036afbe8;
  lVar27 = lVar25 + lVar35 * 0x178;
  fVar59 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar25 + lVar35 * 0x178 + 400) & 1) != 0)) {
    fVar59 = -fVar59;
  }
  fVar61 = fVar57;
  if (((iVar14 == 2) || (fVar61 = fVar65, iVar14 == 1)) || (fVar61 = fVar57 / fVar50, iVar14 == 0))
  {
    fVar59 = fVar61 * fVar59;
  }
  lVar27 = lVar25 + lVar35 * 0x178;
  fVar44 = *(float *)(lVar27 + 0x88);
  fVar46 = *(float *)(lVar27 + 0x84);
  fVar61 = -2.1474836e+09;
  if (fVar46 != INFINITY) {
    fVar61 = (float)(int)fVar46;
  }
  fVar53 = *(float *)(lVar27 + 0xd4);
  fVar58 = *(float *)(lVar27 + 0xd8);
  fVar62 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar62 = (float)(int)fVar44;
  }
  uVar51 = FUN_036f2b00(fVar46 - fVar61,fVar44 - fVar62);
  *(undefined4 *)(lVar27 + 0x84) = uVar51;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  fVar58 = fVar58 - fVar62;
  *(float *)(lVar27 + 0x88) = fVar59;
  uVar51 = FUN_036f2b00(fVar46 - fVar61,fVar58);
  *(undefined4 *)(lVar25 + lVar35 * 0x178 + 0xac) = uVar51;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  fVar53 = fVar53 - fVar61;
  *(float *)(lVar25 + lVar35 * 0x178 + 0xb0) = fVar59;
  fVar61 = (float)FUN_036f2b00(fVar53,fVar58);
  *(float *)(lVar27 + 0xd4) = fVar61;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  *(float *)(lVar27 + 0xd8) = fVar59;
  uVar51 = FUN_036f2b00(fVar53,fVar44 - fVar62);
  *(undefined4 *)(lVar25 + lVar35 * 0x178 + 0xfc) = uVar51;
  uVar42 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar42 <= uVar48) goto LAB_036afbe8;
  *(float *)(lVar25 + lVar35 * 0x178 + 0x100) = fVar59;
LAB_036add84:
  if (((int)uVar48 < (int)unaff_x19[0x65]) &&
     ((int)in_stack_000000e0._4_4_ < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar31 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar42 <= uVar48) goto LAB_036afbe8;
      lVar41 = lVar25 + lVar35 * 0x178;
      *(ulong *)(lVar41 + 0x70) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0x70) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar41 + 0x70));
      *(float *)(lVar41 + 0x78) = fVar47 + *(float *)(lVar41 + 0x78);
      *(ulong *)(lVar41 + 0x98) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0x98) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar41 + 0x98));
      *(float *)(lVar41 + 0xa0) = fVar47 + *(float *)(lVar41 + 0xa0);
      *(ulong *)(lVar41 + 0xc0) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0xc0) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar41 + 0xc0));
      *(float *)(lVar41 + 200) = fVar47 + *(float *)(lVar41 + 200);
      *(ulong *)(lVar41 + 0xe8) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0xe8) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar41 + 0xe8));
      *(float *)(lVar41 + 0xf0) = fVar47 + *(float *)(lVar41 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar31 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar48 < uVar42) {
        if (*(uint *)(lVar25 + lVar35 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar41 = lVar25 + lVar35 * 0x178;
          *(ulong *)(lVar41 + 0x70) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0x70) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar41 + 0x70));
          *(float *)(lVar41 + 0x78) = fVar47 + *(float *)(lVar41 + 0x78);
          *(ulong *)(lVar41 + 0x98) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0x98) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar41 + 0x98));
          *(float *)(lVar41 + 0xa0) = fVar47 + *(float *)(lVar41 + 0xa0);
          *(ulong *)(lVar41 + 0xc0) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0xc0) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar41 + 0xc0));
          *(float *)(lVar41 + 200) = fVar47 + *(float *)(lVar41 + 200);
          *(ulong *)(lVar41 + 0xe8) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0xe8) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar41 + 0xe8));
          *(float *)(lVar41 + 0xf0) = fVar47 + *(float *)(lVar41 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar42 <= uVar48) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar42 = *(uint *)(lVar25 + 0x18);
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar51 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar27 = lVar25 + lVar35 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar51;
  if (uVar42 <= uVar48) goto LAB_036afbe8;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar27 = lVar25 + lVar35 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar51;
  *(undefined1 *)(lVar41 + 0x194) = 0;
LAB_036adf28:
  if (iVar15 == 0) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar30)();
  }
  else if (iVar15 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar41 = lVar41 + lVar35 * 0x178;
  uVar18 = *(undefined8 *)(lVar41 + 0x11c);
  *(undefined8 *)(lVar41 + 0x11c) =
       CONCAT44(fVar45 + (float)((ulong)uVar18 >> 0x20),fVar49 + (float)uVar18);
  *(float *)(lVar41 + 0x124) = fVar47 + *(float *)(lVar41 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar41 = lVar41 + lVar35 * 0x178;
  *(ulong *)(lVar41 + 0x110) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0x110) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar41 + 0x110));
  *(float *)(lVar41 + 0x118) = fVar47 + *(float *)(lVar41 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar41 = lVar41 + lVar35 * 0x178;
  *(ulong *)(lVar41 + 0x128) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar41 + 0x128) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar41 + 0x128));
  *(float *)(lVar41 + 0x130) = fVar47 + *(float *)(lVar41 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar41 = lVar41 + lVar35 * 0x178;
  *(float *)(lVar41 + 0x134) = fVar49 + *(float *)(lVar41 + 0x134);
  *(ulong *)(lVar41 + 0x138) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar41 + 0x138) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar41 + 0x138));
  lVar41 = *in_stack_00000190;
  if ((lVar41 == 0) || (lVar27 = *(long *)(lVar41 + 0x38), lVar27 == 0)) goto LAB_036afadc;
  uVar42 = *(uint *)(lVar27 + 0x18);
  if (uVar42 <= uVar48) goto LAB_036afbe8;
  lVar34 = lVar27 + lVar35 * 0x178;
  uVar54 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar34 + 0x140));
  fVar61 = fVar45 + *(float *)(lVar34 + 0x150);
  uVar55 = (ulong)(uint)fVar61;
  uVar56 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar61;
  *(ulong *)(lVar34 + 0x140) = uVar54;
  *(ulong *)(lVar34 + 0x148) = uVar56;
  if (uVar31 == uVar13) {
    uVar13 = *unaff_x20 - 1;
    if (uVar48 == uVar13) goto LAB_036ae17c;
  }
  else {
    lVar41 = *(long *)(lVar41 + 0x50);
    if (lVar41 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar34 = (long)(int)uVar13;
    lVar36 = lVar41 + lVar34 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar36 + 0x58);
    fVar61 = fVar45 + *(float *)(lVar36 + 0x54);
    uVar54 = (ulong)(uint)fVar61;
    fVar44 = fVar49 + *(float *)(lVar36 + 0x58);
    uVar55 = (ulong)(uint)fVar44;
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar61;
    *(float *)(lVar36 + 0x58) = fVar44;
    if (uVar42 <= *(uint *)(lVar36 + 0x34)) goto LAB_036afbe8;
    uVar51 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar41 = lVar41 + lVar34 * 0x5c;
    *(float *)(lVar41 + 0x70) = fVar61;
    *(undefined4 *)(lVar41 + 0x6c) = uVar51;
    lVar41 = *in_stack_00000190;
    if ((lVar41 == 0) || (lVar27 = *(long *)(lVar41 + 0x50), lVar27 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar41 = *(long *)(lVar41 + 0x38);
    if (lVar41 == 0) goto LAB_036afadc;
    uVar13 = *(uint *)(lVar27 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar34 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar41 + (long)(int)uVar13 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar13 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar48 == uVar13) {
      lVar41 = *in_stack_00000190;
      if ((lVar41 == 0) || (lVar27 = *(long *)(lVar41 + 0x50), lVar27 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_036afbe8;
      lVar34 = lVar27 + lVar38 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar34 + 0x58);
      uVar54 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar34 + 0x4c));
      fVar61 = fVar45 + *(float *)(lVar34 + 0x54);
      fVar49 = fVar49 + *(float *)(lVar34 + 0x58);
      uVar55 = (ulong)(uint)fVar49;
      *(ulong *)(lVar34 + 0x4c) = uVar54;
      *(float *)(lVar34 + 0x54) = fVar61;
      *(float *)(lVar34 + 0x58) = fVar49;
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(lVar34 + 0x34)) goto LAB_036afbe8;
      uVar51 = *(undefined4 *)(lVar41 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar38 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar61;
      *(undefined4 *)(lVar27 + 0x6c) = uVar51;
      lVar41 = *in_stack_00000190;
      if ((lVar41 == 0) || (lVar27 = *(long *)(lVar41 + 0x50), lVar27 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_036afbe8;
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_036afadc;
      uVar13 = *(uint *)(lVar27 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar41 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar38 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar41 + (long)(int)uVar13 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar20 = FUN_02fddb80(uVar37,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar37 - 0x2010)) && (uVar37 != 0xad)) && (uVar37 != 0x2d)) {
    if (bVar7) {
      if (((uVar17 != 1) && ((int)uVar48 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
         (((int)uVar48 < (int)*unaff_x20 && ((uVar37 == 0x2019 || (uVar37 == 0x27)))))) {
        if (*(uint *)(lVar25 + 0x18) <= uVar17 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar25 + lVar28 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fddb80(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar25 + lVar28 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_02fddb80(uVar4,0);
          if ((uVar20 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_036aeea4:
        bVar7 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fddab4(uVar37,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdb080(uVar37,0);
        if (((uVar37 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar48 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fddb80(uVar37,0);
      iVar15 = (int)fStack0000000000000138;
      if ((uVar20 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar15 = uVar17 - 2;
    }
    lVar41 = *in_stack_00000190;
    if (lVar41 == 0) goto LAB_036afadc;
    lVar27 = *(long *)(lVar41 + 0x40);
    if (lVar27 == 0) goto LAB_036afadc;
    uVar13 = *(uint *)(lVar41 + 0x24);
    iVar16 = *(int *)(lVar27 + 0x18);
    if (iVar16 < (int)(uVar13 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar41 + 0x40),iVar16 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar41 = *in_stack_00000190;
      if (lVar41 == 0) goto LAB_036afadc;
    }
    lVar41 = *(long *)(lVar41 + 0x40);
    if (lVar41 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar41 + 0x18) <= uVar13) goto LAB_036afbe8;
    lVar41 = lVar41 + (long)(int)uVar13 * 0x18;
    *(long **)(lVar41 + 0x20) = unaff_x19;
    *(float *)(lVar41 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar41 + 0x2c) = iVar15;
    *(int *)(lVar41 + 0x30) = (iVar15 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar41 = unaff_x19[0x6d];
    if (lVar41 == 0) goto LAB_036afadc;
    lVar27 = *(long *)(lVar41 + 0x50);
    *(int *)(lVar41 + 0x24) = *(int *)(lVar41 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar38 * 0x5c;
    bVar7 = false;
    in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      in_stack_00000170._4_4_ = (float)uVar48;
    }
    if (uVar48 == *unaff_x20 - 1) {
      lVar41 = *in_stack_00000190;
      if (lVar41 == 0) goto LAB_036afadc;
      lVar27 = *(long *)(lVar41 + 0x40);
      if (lVar27 == 0) goto LAB_036afadc;
      uVar13 = *(uint *)(lVar41 + 0x24);
      iVar15 = *(int *)(lVar27 + 0x18);
      if (iVar15 < (int)(uVar13 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar41 + 0x40),iVar15 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar41 = *in_stack_00000190;
        if (lVar41 == 0) goto LAB_036afadc;
      }
      lVar41 = *(long *)(lVar41 + 0x40);
      if (lVar41 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar41 = lVar41 + (long)(int)uVar13 * 0x18;
      *(long **)(lVar41 + 0x20) = unaff_x19;
      *(float *)(lVar41 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar41 + 0x2c) = uVar48;
      *(uint *)(lVar41 + 0x30) = uVar17 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar41 = unaff_x19[0x6d];
      if (lVar41 == 0) goto LAB_036afadc;
      lVar27 = *(long *)(lVar41 + 0x50);
      *(int *)(lVar41 + 0x24) = *(int *)(lVar41 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar31) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar38 * 0x5c;
      in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar7 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
  goto LAB_036afadc;
  uVar13 = *(uint *)(lVar41 + 0x18);
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  if ((*(byte *)(lVar41 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_036ae3d8:
      if (uVar13 <= uVar17 - 2) goto LAB_036afbe8;
      lVar38 = *unaff_x19;
      uVar13 = *(uint *)(lVar41 + lVar28 + -0x330);
      uVar51 = *(undefined4 *)(lVar41 + lVar28 + -0x2f8);
LAB_036ae924:
      pcVar30 = *(code **)(lVar38 + 0x908);
LAB_036ae92c:
      uVar56 = (ulong)uVar13;
      uVar54 = (ulong)(uint)_bStack0000000000000078;
      uVar55 = (ulong)_bStack000000000000007c;
      (*pcVar30)(fStack0000000000000080,uVar54,uVar55,uVar56,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar51);
      puVar8 = PTR_DAT_03d9c920;
      lVar41 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar41 = *(long *)puVar8;
      }
LAB_036ae980:
      bVar11 = false;
      fVar43 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar41 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar11 = false;
    }
  }
  else {
    lVar41 = lVar41 + lVar35 * 0x178;
    iVar15 = *(int *)(lVar41 + 0x68);
    *(int *)(lVar41 + 0x16c) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar48) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
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
    uVar20 = FUN_02fdb080(uVar37,0);
    if ((uVar37 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar41 = *in_stack_00000190;
      if ((lVar41 == 0) || (lVar38 = *(long *)(lVar41 + 0x38), lVar38 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar38 + 0x18) <= uVar48) goto LAB_036afbe8;
      fVar61 = *(float *)(lVar38 + lVar35 * 0x178 + 0x160);
      if (fVar43 <= fVar61) {
        fVar43 = fVar61;
      }
      if (fStack0000000000000110 <= ABS(fVar59)) {
        fStack0000000000000110 = ABS(fVar59);
      }
      if (iVar15 != uStack0000000000000074) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar41 = *in_stack_00000190;
          if (lVar41 == 0) goto LAB_036afadc;
          lVar38 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar38 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar38 + 0x15a8);
      }
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar44 = *(float *)(lVar41 + lVar35 * 0x178 + 0x14c);
      fVar61 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar44 = fVar44 + fVar43 * fVar61;
      if (fVar44 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar44;
      }
      uVar54 = (ulong)(uint)fStack0000000000000114;
      uStack0000000000000074 = iVar15;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar48)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar48 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar37,0);
        if ((uVar20 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
      lVar41 = lVar41 + lVar35 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar41 + 0x160);
      fStack0000000000000080 = *(float *)(lVar41 + 0x11c);
      uVar55 = (ulong)(uint)fStack0000000000000080;
      bVar11 = fVar43 != 0.0;
      fVar61 = in_stack_00000090._4_4_;
      if (bVar11) {
        fVar61 = fVar43;
      }
      fVar43 = fVar61;
      uVar64 = *(undefined4 *)(lVar41 + 0x168);
      _bStack000000000000007c = 0;
      fVar61 = fVar59;
      if (bVar11) {
        fVar61 = fStack0000000000000110;
      }
      uVar54 = (ulong)(uint)fVar61;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar61;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 != 0))
      {
        if (uVar48 < *(uint *)(lVar41 + 0x18)) {
          lVar41 = lVar41 + lVar35 * 0x178;
          lVar38 = *unaff_x19;
          uVar13 = *(uint *)(lVar41 + 0x128);
          uVar51 = *(undefined4 *)(lVar41 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar48 == uVar6) || ((int)uVar5 <= (int)uVar48)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fdb080(uVar37,0);
      if ((*in_stack_00000190 != 0) && (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 != 0))
      {
        lVar38 = lVar35;
        uVar13 = uVar48;
        if (uVar37 == 0x200b || (uVar20 & 1) != 0) {
          lVar38 = lVar21;
          uVar13 = uVar5;
        }
        if (uVar13 < *(uint *)(lVar41 + 0x18)) {
          lVar41 = lVar41 + lVar38 * 0x178;
          uVar13 = *(uint *)(lVar41 + 0x128);
          uVar51 = *(undefined4 *)(lVar41 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 != 0))
      {
        uVar13 = *(uint *)(lVar41 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar48 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= uVar17) goto LAB_036afbe8;
      uVar20 = FUN_036c0e18(uVar64,*(undefined4 *)(lVar41 + lVar28),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 != 0)) {
          if (uVar48 < *(uint *)(lVar41 + 0x18)) {
            lVar41 = lVar41 + lVar35 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar41 + 0x128);
            uVar55 = (ulong)_bStack000000000000007c;
            uVar54 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar54,uVar55,uVar56,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar41 + 0x160));
            puVar8 = PTR_DAT_03d9c920;
            lVar41 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar41 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar41 = *(long *)puVar8;
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
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
  if (lVar33 == 0) goto LAB_036afadc;
  uVar13 = *(uint *)(lVar41 + lVar35 * 0x178 + 400);
  fVar61 = (float)FUN_0396ad04(lVar33 + 0x50,0);
  if ((uVar13 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= uVar17 - 2) goto LAB_036afbe8;
      uVar13 = *(uint *)(lVar41 + lVar28 + -0x330);
      fVar45 = *(float *)(lVar41 + lVar28 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar56 = (ulong)uVar13;
      uVar54 = (ulong)(uint)fStack00000000000000a4;
      uVar55 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar30)(fStack00000000000000a8,uVar54,uVar55,uVar56,
                 fStack00000000000000b0 * fVar61 + fVar45,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar41 = *in_stack_00000190;
    if ((lVar41 == 0) || (lVar38 = *(long *)(lVar41 + 0x38), lVar38 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar38 + 0x18) <= uVar48) goto LAB_036afbe8;
    *(int *)(lVar38 + lVar35 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar48) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar38 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar48)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar48 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar37,0);
        if ((uVar20 & 1) != 0) goto LAB_036aeb20;
        lVar41 = *in_stack_00000190;
        if (lVar41 == 0) goto LAB_036afadc;
      }
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar41 + 0x18) <= uVar48) goto LAB_036afbe8;
      lVar41 = lVar41 + lVar35 * 0x178;
      fStack000000000000004c = *(float *)(lVar41 + 0x60);
      fStack0000000000000040 = *(float *)(lVar41 + 0x14c);
      uVar54 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar41 + 0x11c);
      uVar55 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar41 + 0x160);
      fStack00000000000000a4 = fVar61 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar13 = *unaff_x20;
    if (uVar13 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 != 0))
      {
        if (uVar48 < *(uint *)(lVar41 + 0x18)) {
          lVar41 = lVar41 + lVar35 * 0x178;
          lVar21 = *unaff_x19;
          uVar13 = *(uint *)(lVar41 + 0x128);
          fVar45 = *(float *)(lVar41 + 0x14c);
LAB_036aec8c:
          pcVar30 = *(code **)(lVar21 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar48 == uVar6) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fdb080(uVar37,0);
      if ((*in_stack_00000190 != 0) && (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 != 0))
      {
        uVar13 = *(uint *)(lVar41 + 0x18);
        if (uVar37 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar13 <= uVar5) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar21 = lVar35;
          if (uVar13 <= uVar48) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar41 = lVar41 + lVar21 * 0x178;
        fVar45 = *(float *)(lVar41 + 0x14c);
        uVar13 = *(uint *)(lVar41 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar48 < (int)uVar13) {
      lVar41 = *in_stack_00000190;
      if ((lVar41 != 0) && (lVar38 = *(long *)(lVar41 + 0x38), lVar38 != 0)) {
        if (uVar17 < *(uint *)(lVar38 + 0x18)) {
          if (*(float *)(lVar38 + lVar28 + -0x108) == fStack000000000000004c) {
            fVar44 = *(float *)(lVar38 + lVar28 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar54 = (ulong)(uint)fStack0000000000000040;
            uVar20 = FUN_036c122c(fVar45 + fVar44,uVar54,0);
            if ((uVar20 & 1) != 0) {
              uVar13 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar41 = *in_stack_00000190;
            if (lVar41 == 0) goto LAB_036afadc;
          }
          lVar41 = *(long *)(lVar41 + 0x38);
          if (lVar41 != 0) {
            uVar13 = *(uint *)(lVar41 + 0x18);
            if ((int)uVar48 <= (int)uVar5) goto LAB_036aef20;
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
    if ((int)uVar48 < (int)uVar13) {
      iVar15 = FUN_03922ce0(lVar33,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar17) goto LAB_036afbe8;
      lVar41 = *(long *)(lVar25 + lVar28 + -0x130);
      if (lVar41 == 0) goto LAB_036afadc;
      iVar16 = FUN_03922ce0(lVar41,0);
      if (iVar15 != iVar16) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 != 0))
      {
        if (uVar17 - 2 < *(uint *)(lVar41 + 0x18)) {
          lVar21 = *unaff_x19;
          uVar13 = *(uint *)(lVar41 + lVar28 + -0x330);
          fVar45 = *(float *)(lVar41 + lVar28 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
  goto LAB_036afadc;
  uVar13 = (uint)*(undefined8 *)(lVar41 + 0x18);
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  if ((*(byte *)(lVar41 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      uVar54 = (ulong)(uint)fStack00000000000000ec;
      uVar56 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar54,uVar55,uVar56,fStack00000000000000d8,uVar55);
    }
LAB_036aefe8:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar48) || ((int)unaff_x19[0x66] < (int)uVar31)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar41 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar37 == 0xd) || ((uVar37 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar48)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar48 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar37,0);
        if ((uVar20 & 1) != 0) goto LAB_036aefe8;
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar21 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar21 = *(long *)puVar8;
      }
      if ((*in_stack_00000190 == 0) || (lVar41 = *(long *)(*in_stack_00000190 + 0x38), lVar41 == 0))
      goto LAB_036afadc;
      uVar13 = (uint)*(undefined8 *)(lVar41 + 0x18);
      if (uVar13 <= uVar48) goto LAB_036afbe8;
      lVar21 = *(long *)(lVar21 + 0xb8);
      lVar33 = lVar41 + lVar35 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar21 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar21 + 0x159c);
      in_stack_00001080 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar21 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar21 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar13 <= uVar48) goto LAB_036afbe8;
    lVar41 = lVar41 + lVar35 * 0x178;
    fVar61 = *(float *)(lVar41 + 0x128);
    fVar62 = *(float *)(lVar41 + 0x188);
    uVar19 = *(undefined8 *)(lVar41 + 0x17c);
    fVar53 = *(float *)(lVar41 + 0x184);
    uVar18 = *(undefined8 *)(lVar41 + 0x184);
    fVar47 = *(float *)(lVar41 + 0x18c);
    fVar45 = *(float *)(lVar41 + 0x11c);
    fVar44 = *(float *)(lVar41 + 0x148);
    fVar46 = *(float *)(lVar41 + 0x150);
    in_stack_00000198 = uVar19;
    fStack00000000000001a0 = fVar53;
    fStack00000000000001a4 = fVar62;
    in_stack_000001a8 = fVar47;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar20 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar41 = *(long *)PTR_DAT_03d9c888;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar41);
      }
      fVar61 = fVar61 + (float)in_stack_00001078;
      uVar55 = (ulong)(uint)fVar61;
      fVar45 = fVar45 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar44 = fVar44 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar56 = (ulong)(uint)fVar44;
      if (fVar45 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar45;
      }
      if (fVar46 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar46 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar61) {
        fStack00000000000000d4 = fVar61;
      }
      uVar54 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar44) {
        fStack00000000000000d8 = fVar44;
      }
    }
    else {
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar41);
      }
      fVar45 = (fVar45 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar56 = (ulong)(uint)fVar45;
      if (fVar46 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar46;
      }
      uVar54 = (ulong)(uint)fStack00000000000000ec;
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar44) {
        fStack00000000000000d8 = fVar44;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar54,uVar55,uVar56,fStack00000000000000d8,uVar55);
      fStack00000000000000ec = fVar46 - fVar47;
      fStack00000000000000d4 = fVar61 + fVar53;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar44 + fVar62;
      fStack00000000000000e8 = fVar45;
      in_stack_00001070 = uVar19;
      in_stack_00001078 = uVar18;
      in_stack_00001080 = fVar47;
    }
    if (((*unaff_x20 == 1) || (uVar48 == uVar6)) || (((int)uVar5 <= (int)uVar48 || (!bVar1)))) {
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      uVar54 = (ulong)(uint)fStack00000000000000ec;
      uVar56 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar54,uVar55,uVar56,fStack00000000000000d8,uVar55);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar48 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar48 <= (int)uVar17;
  uVar17 = uVar17 + 1;
  uVar13 = uVar31;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar25 = *in_stack_00000190;
  if (lVar25 != 0) {
    iVar12 = uVar31 + 1;
    plVar40 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar25 + 0x18) = uVar48;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar25 + 0x2c) = iVar12;
    if ((int)uVar48 < 1 || in_stack_000000e0._4_4_ == 0.0) {
      in_stack_000000e0._4_4_ = 1.4013e-45;
    }
    *(int *)(lVar25 + 0x1c) = (int)lVar28;
    *(float *)(lVar25 + 0x24) = in_stack_000000e0._4_4_;
    *(int *)(lVar25 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar20 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar20 & 1) == 0)) {
LAB_036acd60:
      if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_45__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036c03d8();
      return;
    }
    lVar25 = unaff_x19[0xdf];
    if (lVar25 != 0) {
      (**(code **)(lVar25 + 0x18))
                (*(undefined8 *)(lVar25 + 0x40),*in_stack_00000190,*(undefined8 *)(lVar25 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar12 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar12 != 0x19) {
      lVar25 = unaff_x19[0xe5];
      if (lVar25 == 0) goto LAB_036afadc;
      uVar48 = FUN_03afacb8(lVar25,0);
      FUN_03afacf4(lVar25,uVar48 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x60), lVar25 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar40 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar25 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
        if (*(int *)(lVar25 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
            if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
                if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar25 = *(long *)(unaff_x19[0x6d] + 0x60), lVar25 != 0)) {
                    if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar25 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar18 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar48 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar25 = *in_stack_00000190;
                              if (lVar25 != 0) {
                                lVar41 = 0;
                                lVar28 = 0;
                                do {
                                  uVar20 = lVar28 + 1;
                                  if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar20)
                                  goto LAB_036acd60;
                                  lVar25 = *(long *)(lVar25 + 0x60);
                                  if (lVar25 == 0) break;
                                  if (*(int *)(*plVar40 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                  FUN_036fa544(lVar25 + lVar41 + 0x70,0);
                                  lVar25 = unaff_x19[0xe1];
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                  uVar19 = *(undefined8 *)(lVar25 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar22 = FUN_03922f24(uVar19,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar25 = *(long *)(*in_stack_00000190 + 0x60), lVar25 == 0
                                         )) break;
                                      if (*(int *)(*plVar40 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                      FUN_036fa678(lVar25 + lVar41 + 0x70,1,0);
                                    }
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_0390262c(lVar25,*(undefined8 *)(lVar21 + lVar41 + 0x80),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_03902830(lVar25,*(undefined8 *)(lVar21 + lVar41 + 0x98),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_039028dc(lVar25,*(undefined8 *)(lVar21 + lVar41 + 0xa0),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar21 = *(long *)(*in_stack_00000190 + 0x60), lVar21 == 0))
                                    break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_03902a3c(lVar25,*(undefined8 *)(lVar21 + lVar41 + 0xa8),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_03702ba4(lVar25,0), lVar25 == 0)) break;
                                    FUN_03904ddc(lVar25,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_039add2c(lVar25,0);
                                    lVar21 = unaff_x19[0xe1];
                                    if (lVar21 == 0) break;
                                    if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar21 = *(long *)(lVar21 + lVar28 * 8 + 0x28);
                                    if ((lVar21 == 0) ||
                                       (uVar19 = FUN_03702ba4(lVar21,0), lVar25 == 0)) break;
                                    FUN_03af8c9c(lVar25,uVar19,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_039add2c(lVar25,0), lVar25 == 0)) break;
                                    FUN_03af8894(uVar18,uVar54,uVar55,uVar56,lVar25,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_039add2c(lVar25,0), lVar25 == 0)) break;
                                    FUN_03af87d0(lVar25,uVar48 & 1,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    plVar39 = *(long **)(lVar25 + lVar28 * 8 + 0x28);
                                    uVar17 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar39 == (long *)0x0) break;
                                    (**(code **)(*plVar39 + 0x2c8))
                                              (plVar39,uVar17 & 1,*(undefined8 *)(*plVar39 + 0x2d0))
                                    ;
                                  }
                                  lVar25 = *in_stack_00000190;
                                  lVar28 = lVar28 + 1;
                                  lVar41 = lVar41 + 0x50;
                                } while (lVar25 != 0);
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


