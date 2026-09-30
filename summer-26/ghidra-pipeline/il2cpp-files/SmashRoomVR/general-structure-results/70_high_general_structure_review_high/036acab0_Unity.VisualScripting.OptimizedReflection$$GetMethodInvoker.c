/*
FUNCTION_NAME: Unity.VisualScripting.OptimizedReflection$$GetMethodInvoker
ENTRY_POINT: 036acab0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_11
*/


void Unity_VisualScripting_OptimizedReflection__GetMethodInvoker
               (ulong param_1,undefined1 param_2 [16],ulong param_3,ulong param_4,ulong param_5,
               ulong param_6,ulong param_7,ulong param_8)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  uint uVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  uint uVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long *unaff_x19;
  uint *unaff_x20;
  long *plVar40;
  ulong unaff_x24;
  long *plVar41;
  long lVar42;
  undefined1 *unaff_x29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  ulong uVar55;
  uint uVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulong unaff_d13;
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
  int iStack0000000000000074;
  float fStack0000000000000078;
  uint uStack000000000000007c;
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
  float fStack000000000000012c;
  float fStack0000000000000138;
  float fStack000000000000013c;
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
  
code_r0x036acab0:
  fStack0000000000000078 = 1.4013e-45;
  uVar20 = unaff_d13;
  FUN_036ed998(param_1,unaff_d13,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
  *(undefined4 *)(unaff_x19 + 0x9b) = 0;
  *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
  *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
LAB_036ab530:
  bVar4 = false;
  bVar5 = true;
  uVar48 = in_stack_0000109c;
LAB_036a9250:
  fVar58 = (float)unaff_d13;
  in_stack_00001068 = in_stack_00001068 + 1;
  lVar25 = unaff_x19[0x8f];
  if (lVar25 != 0) {
    if ((int)in_stack_00001068 < (int)*(uint *)(lVar25 + 0x18)) {
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      in_stack_0000109c = *(uint *)(lVar25 + (long)(int)in_stack_00001068 * 0xc + 0x20);
      if (in_stack_0000109c == 0) goto LAB_036acbd8;
      if (5 < in_stack_00000188._4_4_) {
        uVar16 = FUN_0303de64(&stack0x0000109c,0);
        uVar17 = FUN_0303de64(&stack0x00001068,0);
        uVar16 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar16,*(undefined8 *)PTR_DAT_03d9c940
                              ,uVar17,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2e04(uVar16,0);
        in_stack_00001088 = CONCAT44(3,*unaff_x20);
      }
      if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_0000109c == 0x3c))
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
    fVar58 = (float)uVar20;
    if (((char)unaff_x19[0x47] != '\0') &&
       (fVar58 = DAT_00b552b8,
       DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
      fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
      fVar51 = *(float *)((long)unaff_x19 + 0x254);
      if ((fVar58 < fVar51) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
        }
        fVar67 = (*(float *)((long)unaff_x19 + 0x23c) - fVar58) * 0.5;
        if (fVar67 <= DAT_00b55428) {
          fVar67 = DAT_00b55428;
        }
        *(float *)(unaff_x19 + 0x48) = fVar58;
        fVar67 = (fVar58 + fVar67) * 20.0 + 0.5;
        fVar58 = DAT_00b556b4;
        if (fVar67 != INFINITY) {
          fVar58 = (float)(int)fVar67 / 20.0;
        }
        if (fVar51 <= fVar58) {
          fVar58 = fVar51;
        }
        goto LAB_036acc94;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
    puVar6 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
      uVar16 = FUN_0303de64(in_stack_00000038,0);
      uVar17 = FUN_03052638(_fStack0000000000000040,0);
      uVar16 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar16,*(undefined8 *)PTR_DAT_03d9c938,
                            uVar17,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          );
      }
      FUN_038f2acc(uVar16,0);
    }
    puVar7 = PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar48 == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_036acd60;
    }
    lVar25 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar25 = *(long *)puVar7;
    }
    plVar41 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
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
    iVar10 = (int)unaff_x19[0x4e];
    in_stack_00000108._4_4_ =
         **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    in_stack_000000f8 =
         *(long **)(*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) +
                   1);
    lVar25 = unaff_x19[0xe3];
    _fStack00000000000000c8 = (ulong)in_stack_000000f8;
    fStack00000000000000d0 = in_stack_00000108._4_4_;
    if (iVar10 < 0x401) {
      if (iVar10 == 0x100) {
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) < 2) goto LAB_036afbe8;
        uVar16 = *(undefined8 *)(lVar25 + 0x30);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000190 + 0x58), lVar28 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          fVar58 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar58 = *(float *)(unaff_x19 + 0x97);
        }
        fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x2c);
        fVar58 = (0.0 - fVar58) - fStack0000000000000020;
      }
      else if (iVar10 == 0x200) {
        if (lVar25 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
        fStack00000000000000d0 = (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar25 + 0x24) +
                          (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar25 = *(long *)(*in_stack_00000190 + 0x58), lVar25 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          lVar25 = lVar25 + (long)(int)uStack0000000000000030 * 0x14;
          fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
          fVar58 = ((fStack0000000000000020 + *(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
          fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar10 != 0x400) goto LAB_036ad288;
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
        uVar16 = *(undefined8 *)(lVar25 + 0x24);
        if ((int)unaff_x19[0x5c] == 5) {
          if ((*in_stack_00000190 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000190 + 0x58), lVar28 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
          in_stack_00001098 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x20);
        fVar58 = fStack0000000000000024 + (0.0 - in_stack_00001098);
      }
LAB_036ad278:
      _fStack00000000000000c8 =
           CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar58);
    }
    else if (iVar10 == 0x800) {
      if (lVar25 == 0) goto LAB_036afadc;
      if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
      fVar58 = fStack000000000000002c + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      _fStack00000000000000c8 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                    ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30))
                    * 0.5 + 0.0);
      fStack00000000000000d0 = fVar58;
    }
    else {
      if (iVar10 == 0x1000) {
        if (lVar25 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar25 + 0x18) != 1) && (*(int *)(lVar25 + 0x18) != 0)) {
          uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar25 + 0x24) +
                            (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
          fStack00000000000000d0 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
          fVar58 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                          *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
          goto LAB_036ad278;
        }
        goto LAB_036afbe8;
      }
      if (iVar10 == 0x2000) {
        if (lVar25 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
        fVar58 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                       fStack0000000000000024) * 0.5;
        _fStack00000000000000c8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30)
                      ) * 0.5 + fVar58);
        fStack00000000000000d0 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      }
    }
LAB_036ad288:
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    uVar16 = FUN_03afb088(unaff_x19[0xe5],0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar6);
    }
    uVar20 = FUN_03922f24(uVar16,0,0);
    lVar25 = FUN_036dfed8();
    if (lVar25 == 0) goto LAB_036afadc;
    FUN_0392a7f0(lVar25,0);
    *(float *)(unaff_x19 + 0xe2) = fVar58;
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar10 = FUN_03afa68c(unaff_x19[0xe5],0);
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    fVar51 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
    uVar66 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
    if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
    }
    if (DAT_03ff747c == '\0') {
      thunk_FUN_01ad9084(PTR_DAT_03d9c888);
      DAT_03ff747c = '\x01';
    }
    puVar6 = PTR_DAT_03d9c888;
    lVar25 = *(long *)PTR_DAT_03d9c888;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar25 = *(long *)puVar6;
    }
    puVar26 = *(undefined4 **)(lVar25 + 0xb8);
    uVar18 = (ulong)(uint)puVar26[1];
    uVar55 = (ulong)(uint)puVar26[2];
    uVar57 = (ulong)(uint)puVar26[3];
    FUN_036c214c(*puVar26,uVar18,uVar55,uVar57,&stack0x00001070,0x4000ffff,0);
    if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar25 = *in_stack_00000190;
    if (lVar25 == 0) goto LAB_036afadc;
    uVar48 = *unaff_x20;
    if ((int)uVar48 < 1) {
      fStack00000000000000e4 = 0.0;
      iVar12 = 0;
      goto LAB_036af524;
    }
    lVar25 = *(long *)(lVar25 + 0x38);
    fVar58 = ABS(fVar58);
    fVar67 = 1.0;
    if ((uVar20 & 1) == 0) {
      fVar67 = fVar58;
    }
    if (lVar25 == 0) goto LAB_036afadc;
    bVar9 = false;
    bVar5 = false;
    _fStack0000000000000138 = 0;
    bVar4 = false;
    fStack00000000000000e4 = 0.0;
    fStack000000000000002c = 0.0;
    in_stack_00000170._4_4_ = 0.0;
    iStack0000000000000074 = 0;
    lVar28 = 0x2e0;
    fVar60 = 0.0;
    fVar43 = 0.0;
    fStack00000000000000d4 = fStack00000000000000e8;
    fStack00000000000000d8 = fStack00000000000000ec;
    fStack0000000000000114 = *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
    fStack0000000000000078 = fStack00000000000000ec;
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
    uVar11 = 1;
    uVar56 = 0;
    goto LAB_036ad4b0;
  }
  goto LAB_036afadc;
code_r0x036a8fdc:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar18 = FUN_036e7318();
  if (((uVar18 & 1) != 0) &&
     (in_stack_00001068 = in_stack_0000104c, uVar48 = in_stack_0000109c,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar48 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar42 = (long)(int)uVar48;
  cVar23 = *(char *)(lVar25 + lVar42 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar28 = unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar48) {
    in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_0000109c == 0x2026) {
      *(long *)(lVar25 + lVar42 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
      bVar9 = true;
      *(int *)(lVar25 + (long)(int)uVar48 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar48 + 1);
    }
    else if (in_stack_0000109c == 3) {
      if ((*in_stack_00000178 == 0) || (lVar19 = FUN_036c835c(*in_stack_00000178,0), lVar19 == 0))
      goto LAB_036afadc;
      uVar16 = FUN_0262f3a4(lVar19,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
      *(undefined8 *)(lVar25 + lVar42 * unaff_x24 + 0x30) = uVar16;
      thunk_FUN_01b4f09c();
      uVar48 = *(uint *)((long)unaff_x19 + 0x494);
      bVar9 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar9 = true;
    }
  }
  else {
    bVar9 = false;
  }
  iVar12 = (int)unaff_x24;
  if (((int)uVar48 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
    lVar25 = lVar25 + (long)(int)uVar48 * (long)iVar12;
    *(undefined1 *)(lVar25 + 0x194) = 0;
    *(undefined2 *)(lVar25 + 0x20) = 0x200b;
    *(undefined4 *)(lVar25 + 100) = 0;
    *unaff_x20 = uVar48 + 1;
    uVar48 = in_stack_0000109c;
    goto LAB_036a9250;
  }
  iVar10 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar10 == 0) {
    uVar48 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar48 >> 4 & 1) == 0) {
      if ((uVar48 >> 3 & 1) == 0) {
        fVar51 = 1.0;
        if ((uVar48 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar18 = FUN_02fdd9e8(in_stack_0000109c,0);
          if ((uVar18 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar48 = FUN_02fddc48(in_stack_0000109c,0);
            in_stack_0000109c = uVar48 & 0xffff;
            fVar51 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar18 = FUN_02fdd92c(in_stack_0000109c,0);
        fVar51 = 1.0;
        if ((uVar18 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar48 = FUN_02fdddc0(in_stack_0000109c,0);
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
      uVar18 = FUN_02fdd9e8(in_stack_0000109c,0);
      fVar51 = 1.0;
      if ((uVar18 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar48 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
        fVar51 = 1.0;
        in_stack_0000109c = uVar48 & 0xffff;
      }
    }
    iVar10 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar10 != 0) goto LAB_036a9280;
LAB_036a9668:
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
    uVar48 = in_stack_0000109c;
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
    uVar11 = *unaff_x20;
    uVar48 = *(uint *)(lVar25 + 0x18);
    if (uVar48 <= uVar11) goto LAB_036afbe8;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar25 + (long)(int)uVar11 * unaff_x24 + 0x58);
    if (bVar9) {
      lVar28 = unaff_x19[0x8f];
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      if ((*(int *)(lVar28 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
         (uVar11 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
      if (uVar48 <= uVar11 - 1) goto LAB_036afbe8;
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar67 = *(float *)(lVar25 + (long)(int)(uVar11 - 1) * (long)iVar12 + 0x60);
      iVar10 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar25 = *in_stack_00000178;
    }
    else {
LAB_036a9778:
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar67 = *(float *)(unaff_x19 + 0x3d);
      iVar10 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar25 = unaff_x19[0x20];
    }
    if (lVar25 == 0) goto LAB_036afadc;
    fVar60 = (float)FUN_0396ac34(lVar25 + 0x50,0);
    fVar43 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar43 = 1.0;
    }
    fVar63 = 0.0;
    fVar45 = 0.0;
    if (!(bool)(bVar9 & in_stack_0000109c == 0x2026)) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar45 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar63 = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
    }
    lVar25 = unaff_x19[0xc9];
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
    fVar44 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = *(float *)(lVar25 + 0x2c);
    fVar58 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar64 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar61 = *(float *)((long)unaff_x19 + 0x404);
    fVar47 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
    lVar25 = unaff_x19[0x6d];
    if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar43 = ((fVar51 * fVar67) / (float)iVar10) * fVar60 * fVar43;
    fVar58 = fVar43 * fVar44 * fVar46 * fVar58;
    *(float *)(lVar28 + 0x160) = fVar58;
    uVar48 = *(uint *)(unaff_x19 + 0x24);
    fVar47 = fVar43 * fVar64 * fVar61 * fVar47;
    fStack000000000000012c = fVar63;
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
    unaff_x29 = &stack0x00000fc0;
    fVar67 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar67 = fVar58;
    }
  }
  else {
    fVar51 = 1.0;
    if (iVar10 == 0) goto LAB_036a9668;
LAB_036a9280:
    if (iVar10 == 1) {
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
      puVar6 = PTR_DAT_03d9c920;
      if (lVar25 == 0) {
        unaff_x29 = &stack0x00000fc0;
        uVar48 = in_stack_0000109c;
        goto LAB_036a9250;
      }
      if (in_stack_0000109c == 0x3c) {
        in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar42 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar42 = *(long *)puVar6;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar42 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar10 = FUN_0396ac24(&stack0x00000fe0,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar43 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar67 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar67 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar67 = (fVar58 / (float)iVar10) * fVar43 * fVar67;
      iVar10 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      if (iVar10 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        iVar10 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        fVar43 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar43 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar63 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(lVar25 + 0x20),0);
        fVar44 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        fVar64 = *(float *)(lVar25 + 0x2c);
        fVar46 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar49 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar47 = fVar67 * fVar61 * fVar49 * fVar47;
        fVar43 = (fVar58 / (float)iVar10) * fVar60 * fVar43;
        fVar58 = fVar43 * (fVar63 / fVar44) * fVar64 * fVar46;
        fVar43 = fVar43 / fVar58;
        fVar45 = fVar43 * fVar45;
        fVar67 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar43 = fVar43 * fVar67;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar10 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar43 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        fVar63 = *(float *)(lVar25 + 0x2c);
        fVar60 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar60 = 1.0;
        }
        fVar44 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar46 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar64 = *(float *)((long)unaff_x19 + 0x404);
        fVar47 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar47 = fVar67 * fVar46 * fVar64 * fVar47;
        fVar58 = (fVar58 / (float)iVar10) * fVar43 * fVar60 * fVar63 * fVar44;
        fVar43 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = lVar25;
      thunk_FUN_01b4f09c(in_stack_000000f8,lVar25);
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar25 + 0x2c) = 1;
      *(float *)(lVar25 + 0x160) = fVar58;
      *(long *)(lVar25 + 0x40) = *in_stack_000000b8;
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      thunk_FUN_01b4f09c();
      lVar25 = *in_stack_00000190;
      if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      in_stack_00000170._4_4_ = 0.0;
      *(int *)(lVar42 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
      fStack000000000000012c = fVar43;
      goto FUN_036a9b34;
    }
    lVar25 = *in_stack_00000190;
    fVar67 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar67 = fVar58;
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
  *(short *)(lVar25 + 0x20) = (short)in_stack_0000109c;
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
  *(undefined8 *)(unaff_x29 + 0xe8) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0xe0) = in_stack_000001d0;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  uVar17 = *(undefined8 *)(unaff_x29 + 0xe8);
  uVar16 = *(undefined8 *)(unaff_x29 + 0xe0);
  lVar25 = lVar25 + (long)(int)uVar48 * unaff_x24;
  *(undefined4 *)(lVar25 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar25 + 0x184) = uVar17;
  *(undefined8 *)(lVar25 + 0x17c) = uVar16;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar25,0);
  puVar6 = StringLiteral_455;
  *(undefined8 *)(unaff_x29 + 0x98) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0x90) = in_stack_000001d0;
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
  uVar48 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar48 << 0x20;
    fVar60 = 0.0;
    fVar43 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar24 = *unaff_x20;
    uVar56 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar24 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar24 + 1) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + (long)(int)(uVar24 + 1) * (long)iVar12 + 0x30);
      if ((((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar28 = *(long *)(*in_stack_00000178 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_036afadc;
      uVar20 = FUN_02630bd0(lVar28,uVar56 | *(int *)(lVar25 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar66 = 0;
      if ((uVar20 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar48 << 0x20;
        fVar60 = 0.0;
        fVar43 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar66 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar43 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar60 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar48 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar48,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar24 = *unaff_x20;
    }
    else {
      uVar66 = 0;
      _fStack0000000000000138 = (ulong)uVar48 << 0x20;
      fVar60 = 0.0;
      fVar43 = 0.0;
    }
    if (0 < (int)uVar24) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar24 - 1) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + (ulong)(uVar24 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar28 = *(long *)(*in_stack_00000178 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_036afadc;
      uVar20 = FUN_02630bd0(lVar28,*(uint *)(lVar25 + 0x28) | uVar56 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar20 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar52 = (undefined4)_fStack0000000000000138;
        fVar43 = (float)FUN_036d2d10(fVar43,fVar60,_fStack0000000000000138 & 0xffffffff,uVar66,
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
    fVar44 = *(float *)(unaff_x19 + 200);
    fVar63 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar44 = fVar44 - fVar67 * fVar63 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar44;
    if ((in_stack_0000109c == 0x200b) || (uVar11 != 0)) {
      *(float *)(unaff_x19 + 200) = fVar44 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar44 = *(float *)(unaff_x19 + 0x56);
  fVar63 = 0.0;
  if (fVar44 != 0.0) {
    fVar63 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar46 = (float)FUN_0396af78(&stack0x00001050,0);
    fVar63 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar44 * 0.5 - fVar67 * (fVar63 * 0.5 + fVar46));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar63;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar25 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_0391f968(lVar25,0,0);
    fVar46 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar25 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar25 == 0) goto LAB_036afadc;
      uVar20 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      fVar46 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar25 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar25 == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_03900954(lVar25,*(undefined4 *)
                                             (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar64 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar46 = (float)FUN_03900954(*in_stack_00000168,
                                     *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        fVar46 = fVar46 * fVar44 * fVar64 * 0.25;
        if (fVar44 < in_stack_00000170._4_4_ + fVar46) {
          in_stack_00000170._4_4_ = fVar44 - fVar46;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fStack00000000000000e4 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar25 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_0391f968(lVar25,0,0);
    fStack00000000000000e4 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar25 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar25 == 0) goto LAB_036afadc;
      uVar20 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar25 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar25 == 0) goto LAB_036afadc;
        uVar20 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar25 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar25 == 0) goto LAB_036afadc;
          fVar44 = (float)FUN_03900954(lVar25,*(undefined4 *)
                                               (*(long *)(*(long *)puVar6 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
          fVar64 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar46 = (float)FUN_03900954(*in_stack_00000168,
                                       *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xcc),0);
          fVar46 = fVar46 * fVar44 * fVar64 * 0.25;
          if (fVar44 < in_stack_00000170._4_4_ + fVar46) {
            in_stack_00000170._4_4_ = fVar44 - fVar46;
          }
          goto LAB_036aa254;
        }
      }
    }
    fVar46 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar44 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar67 * (fVar43 + ((fVar44 - in_stack_00000170._4_4_) - fVar46));
  fVar43 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar64 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar47 + fVar67 * (fVar60 + in_stack_00000170._4_4_ + fVar43)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar43 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar61 = fVar64 - fVar67 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar43);
  fVar43 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar44 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar67 * (fVar46 + fVar46 + in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar43);
  fVar43 = fStack0000000000000124;
  fVar60 = fVar44;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar49 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar43 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar59 = fVar49 * fVar67 * (fVar46 + in_stack_00000170._4_4_ + fVar43);
    fVar43 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar60 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar64 = fVar64 + 0.0;
    fVar61 = fVar61 + 0.0;
    fVar54 = fStack0000000000000124 + fVar59;
    fVar49 = fVar49 * fVar67 * (((fVar43 - fVar60) - in_stack_00000170._4_4_) - fVar46);
    fVar60 = fVar44 + fVar49;
    fVar50 = (fVar59 - fVar49) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar49) - fVar50;
    fVar44 = (fVar44 + fVar59) - fVar50;
    fVar43 = fVar54 - fVar50;
    fVar60 = fVar60 - fVar50;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar49 = 0.0;
    fVar50 = 0.0;
    fVar59 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar54 = fVar61;
    fStack0000000000000114 = fVar64;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar65 = (fVar61 + fVar64) * 0.5;
    fVar62 = (fVar44 + fStack0000000000000124) * 0.5;
    fVar64 = fVar64 - fVar65;
    fStack0000000000000110 = 0.0;
    fVar53 = fVar64;
    fVar43 = (float)FUN_03911ddc(fVar43 - fVar62,_fStack0000000000000080,0);
    fVar43 = fVar62 + fVar43;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar61 = fVar61 - fVar65;
    fVar49 = 0.0;
    fVar54 = fVar61;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar62,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar62 + fStack0000000000000124;
    fVar49 = fVar49 + 0.0;
    fVar59 = 0.0;
    fVar44 = (float)FUN_03911ddc(fVar44 - fVar62,_fStack0000000000000080,0);
    fVar44 = fVar62 + fVar44;
    fVar64 = fVar65 + fVar64;
    fVar59 = fVar59 + 0.0;
    fVar50 = 0.0;
    fVar60 = (float)FUN_03911ddc(fVar60 - fVar62,_fStack0000000000000080,0);
    fVar60 = fVar62 + fVar60;
    fVar61 = fVar65 + fVar61;
    fVar50 = fVar50 + 0.0;
    fVar54 = fVar65 + fVar54;
    fStack0000000000000114 = fVar65 + fVar53;
  }
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar25 = *(long *)(*in_stack_00000190 + 0x38);
  unaff_d13 = (ulong)(uint)fVar67;
  if (lVar25 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar25 + 0x120) = fVar54;
  *(float *)(lVar25 + 0x124) = fVar49;
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
  *(float *)(lVar25 + 0x128) = fVar44;
  *(float *)(lVar25 + 300) = fVar64;
  *(float *)(lVar25 + 0x130) = fVar59;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x134) = fVar60;
  *(float *)(lVar25 + 0x138) = fVar61;
  *(float *)(lVar25 + 0x13c) = fVar50;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar56 = *unaff_x20;
  lVar28 = (long)(int)uVar56;
  if (*(uint *)(lVar25 + 0x18) <= uVar56) goto LAB_036afbe8;
  lVar42 = lVar25 + lVar28 * unaff_x24;
  *(int *)(lVar42 + 0x140) = (int)unaff_x19[200];
  fVar60 = *(float *)(unaff_x19 + 0x9b);
  uVar20 = (ulong)(uint)fVar60;
  fVar43 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar42 + 0x15c) = (fVar44 - fStack0000000000000124) / (fStack0000000000000114 - fVar54)
  ;
  *(float *)(lVar42 + 0x14c) = (fVar47 - fVar60) + fVar43;
  fVar45 = fVar45 * fVar67;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar45 = fVar45 / fVar51;
    fStack000000000000012c = (fStack000000000000012c * fVar67) / fVar51;
  }
  else {
    fStack000000000000012c = fStack000000000000012c * fVar67;
  }
  uVar24 = *(uint *)(unaff_x19 + 0x93);
  if ((uVar11 == 0) || (uVar56 == uVar24)) {
    fStack000000000000012c = fVar43 + fStack000000000000012c;
    fVar45 = fVar43 + fVar45;
    fVar64 = fStack000000000000012c;
    fVar44 = fVar45;
    if (fVar43 != 0.0) {
      fVar44 = (fVar45 - fVar43) / *(float *)((long)unaff_x19 + 0x404);
      fVar64 = (fStack000000000000012c - fVar43) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar44 <= fVar45) {
        fVar44 = fVar45;
      }
      if (fStack000000000000012c <= fVar64) {
        fVar64 = fStack000000000000012c;
      }
    }
    lVar25 = lVar25 + lVar28 * unaff_x24;
    fVar43 = fVar44;
    if (fVar44 <= *(float *)(unaff_x19 + 0x99)) {
      fVar43 = *(float *)(unaff_x19 + 0x99);
    }
    fVar47 = fVar64;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar64) {
      fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar47;
    *(float *)(unaff_x19 + 0x99) = fVar43;
    *(float *)(lVar25 + 0x154) = fVar44;
    *(float *)(lVar25 + 0x158) = fVar64;
    *(float *)(lVar25 + 0x148) = fVar45 - fVar60;
    *(float *)(unaff_x19 + 0x98) = fVar45 - fVar60;
    *(float *)(lVar25 + 0x150) = fStack000000000000012c - fVar60;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack000000000000012c - fVar60;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar43;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar43 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar60 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      fVar51 = (fVar67 * fVar60) / fVar51;
      uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar43 <= fVar51) {
        fVar43 = fVar51;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar43;
    }
    if ((float)uVar20 == 0.0) {
      fVar51 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= fVar45) {
        fVar51 = fVar45;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar51;
    }
  }
  else {
    fVar51 = *(float *)(unaff_x19 + 0x99);
    lVar25 = lVar25 + lVar28 * unaff_x24;
    *(float *)(lVar25 + 0x154) = fVar51;
    fVar43 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar51 = fVar51 - fVar60;
    *(float *)(lVar25 + 0x148) = fVar51;
    *(float *)(lVar25 + 0x158) = fVar43;
    *(float *)(unaff_x19 + 0x98) = fVar51;
    fVar43 = fVar43 - fVar60;
    *(float *)(lVar25 + 0x150) = fVar43;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
  }
  lVar25 = *in_stack_00000190;
  if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
  uVar13 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_036afbe8;
  lVar28 = lVar28 + (long)(int)uVar13 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  uVar31 = *(uint *)(unaff_x19 + 0x4f);
  uVar48 = in_stack_0000109c;
  if ((in_stack_0000109c == 9) ||
     (((((uVar11 == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b)) &&
       (in_stack_0000109c != 0xad)) ||
      (((bool)(in_stack_0000109c == 0xad & (bVar4 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x644) == 1)
       ))))) {
    *(undefined1 *)(lVar28 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a8;
    pfVar32 = _fStack00000000000000b0;
    if (bVar9) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar32 = (float *)(lVar25 + 0x60);
      pfVar29 = (float *)(lVar25 + 100);
    }
    fVar43 = *pfVar32;
    fVar60 = *pfVar29;
    fVar51 = *(float *)(unaff_x19 + 0x6c);
    fVar45 = *(float *)(unaff_x19 + 200);
    in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar43) - fVar60;
    bVar8 = true;
    if ((fVar51 <= in_stack_00000108._4_4_) && (bVar8 = false, !NAN(fVar51))) {
      bVar8 = fVar51 == -1.0;
    }
    if (!bVar8) {
      in_stack_00000108._4_4_ = fVar51;
    }
    fVar51 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar51 = (float)FUN_0396af88(&stack0x00001050,0);
      uVar20 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_0000109c != 0xad) {
      fVar58 = fVar67;
    }
    fVar61 = (float)uVar20;
    fVar47 = 0.0;
    if ((0.0 < fVar61) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar47 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar13 = *unaff_x20;
    fVar47 = (*(float *)(unaff_x19 + 0x97) - (fVar64 - fVar61)) + fVar47;
    if (fStack00000000000000c8 < fVar47) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
      }
      puVar6 = PTR_DAT_03d9c920;
      uVar16 = DAT_00b92750;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar49 = *(float *)(unaff_x19 + 0x59);
        if (((fVar49 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar61)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar47) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000058._4_4_;
          if (fVar58 <= fVar49) {
            fVar58 = fVar49;
          }
          goto LAB_036ad184;
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar47 = *(float *)(unaff_x19 + 0x4a);
        uVar20 = (ulong)(uint)fVar47;
        if ((fVar47 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = (fVar61 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar58 <= DAT_00b55428) {
            fVar58 = DAT_00b55428;
          }
          fVar51 = (fVar61 - fVar58) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar61;
          fVar58 = DAT_00b556b4;
          if (fVar51 != INFINITY) {
            fVar58 = (float)(int)fVar51 / 20.0;
          }
          if (fVar58 <= fVar47) {
            fVar58 = fVar47;
          }
          goto LAB_036acc94;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar6;
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
        if ((uVar13 == 0) || ((int)in_stack_00001068 < 0)) {
          *unaff_x20 = 0;
          unaff_x29 = &stack0x00000fc0;
          in_stack_00001068 = 0xffffffff;
          in_stack_00001088 = uVar16;
          goto LAB_036a9250;
        }
        fVar58 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if (fVar58 - fVar64 <= fStack00000000000000c8) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar20 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar25 = NEON_rev64(uVar20,4);
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
        uVar18 = FUN_0391f968(lVar25,0,0);
        if ((uVar18 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar16,*(undefined8 *)(*plVar41 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar41 = (long *)unaff_x19[0x5d];
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
      goto LAB_036aad90;
    }
switchD_036aaa24_caseD_2:
    puVar6 = PTR_DAT_03d9c920;
    fVar64 = 1.0 - fVar44;
    uVar20 = (ulong)(uint)fVar64;
    fVar51 = ABS(fVar45) + fVar51 * fVar64 * fVar58;
    fVar58 = 1.0;
    if ((uVar31 & 0x18) != 0) {
      fVar58 = DAT_00b55374;
    }
    fVar45 = fVar58 * in_stack_00000108._4_4_;
    if (fVar45 < fVar51) {
      if (((char)unaff_x19[0x5b] == '\0') || (uVar13 == *(uint *)(unaff_x19 + 0x93))) {
        if (((char)unaff_x19[0x47] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if (fVar44 < fVar45) {
            fVar67 = fVar51 / fVar64;
            if (fVar44 <= 0.0) {
              fVar67 = fVar51;
            }
            fVar44 = fVar44 + (fVar51 - fVar58 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar67;
            goto LAB_036afb6c;
          }
          fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar20 = (ulong)(uint)fVar44;
          fVar45 = *(float *)(unaff_x19 + 0x4a);
          if (fVar45 < fVar44) {
LAB_036afae0:
            fVar58 = (fVar44 - *(float *)(unaff_x19 + 0x48)) * 0.5;
            if (fVar58 <= DAT_00b55428) {
              fVar58 = DAT_00b55428;
            }
            *(float *)((long)unaff_x19 + 0x23c) = fVar44;
            fVar51 = (fVar44 - fVar58) * 20.0 + 0.5;
            fVar58 = DAT_00b556b4;
            if (fVar51 != INFINITY) {
              fVar58 = (float)(int)fVar51 / 20.0;
            }
            if (fVar58 <= fVar45) {
              fVar58 = fVar45;
            }
LAB_036acc94:
            *(float *)((long)unaff_x19 + 0x1e4) = fVar58;
            return;
          }
        }
        iVar10 = (int)unaff_x19[0x5c];
        if (iVar10 == 1) {
          lVar25 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar25 = *(long *)puVar6;
          }
          lVar28 = *(long *)(lVar25 + 0xb8);
          if (*(int *)(lVar28 + 0x1580) == 0) goto LAB_036acbbc;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x00000550,&stack0x000010a0,0x378);
          goto LAB_036ab014;
        }
        if (iVar10 == 6) {
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          in_stack_00001068 = FUN_036ecf20();
          lVar25 = unaff_x19[0x5d];
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              );
          }
          uVar18 = FUN_0391f968(lVar25,0,0);
          if ((uVar18 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5d];
            uVar16 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_036afadc;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar16,*(undefined8 *)(*plVar41 + 0x560));
            lVar25 = unaff_x19[0x5d];
            if (lVar25 == 0) goto LAB_036afadc;
            *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
            FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar41 = (long *)unaff_x19[0x5d];
            if (plVar41 == (long *)0x0) goto LAB_036afadc;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          goto LAB_036ab13c;
        }
        if (iVar10 == 3) {
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          goto LAB_036aabc0;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        unaff_x29 = &stack0x00000fc0;
        in_stack_00001068 = FUN_036ecf20();
        if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
          lVar25 = *in_stack_00000190;
          if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
          if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
          fVar45 = *(float *)(unaff_x19 + 0x9b);
          fVar44 = 0.0;
          if ((0.0 < fVar45) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
            fVar44 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
          }
          fVar44 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                   *(float *)(lVar28 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                   (fVar44 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700))
          ;
        }
        else {
          lVar25 = unaff_x19[0x6d];
          *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
          if (lVar25 == 0) goto LAB_036afadc;
          fVar45 = *(float *)(unaff_x19 + 0x9b);
          fVar44 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
        }
        puVar6 = PTR_DAT_03d9c920;
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_036afadc;
        uVar33 = *(uint *)((long)unaff_x19 + 0x494);
        if ((*(uint *)(lVar25 + 0x18) <= uVar33) ||
           (uVar38 = uVar33 - 1, *(uint *)(lVar25 + 0x18) <= uVar38)) goto LAB_036afbe8;
        uVar20 = (ulong)(uint)(fVar44 + *(float *)(unaff_x19 + 0x97));
        fVar64 = (fVar44 + *(float *)(unaff_x19 + 0x97) + fVar45) -
                 *(float *)(lVar25 + (long)(int)uVar33 * unaff_x24 + 0x158);
        if ((!bVar4 && *(short *)(lVar25 + (long)(int)uVar38 * (long)iVar12 + 0x20) == 0xad) &&
           ((fVar64 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
          bVar4 = false;
          *unaff_x20 = uVar38;
          in_stack_00001068 = in_stack_00001068 - 1;
          in_stack_00001088 = CONCAT44(0x2d,uVar38);
          goto LAB_036a9250;
        }
        if (*(short *)(lVar25 + (long)(int)uVar33 * unaff_x24 + 0x20) == 0xad) {
          bVar4 = true;
          goto LAB_036a9250;
        }
        if (((uint)fStack0000000000000078 & (uint)*(byte *)(unaff_x19 + 0x47) & 1) != 0) {
          fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar45 <= fVar44) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
            fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
            uVar20 = (ulong)(uint)fVar44;
            fVar45 = *(float *)(unaff_x19 + 0x4a);
            if ((fVar45 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
            goto LAB_036afae0;
            goto LAB_036ab340;
          }
LAB_036afb7c:
          fVar67 = fVar51;
          if (0.0 < fVar44) {
            fVar67 = fVar51 / (1.0 - fVar44);
          }
          fVar44 = fVar44 + (fVar51 - fVar58 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar67;
LAB_036afb6c:
          if (fVar45 <= fVar44) {
            fVar44 = fVar45;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar44;
          return;
        }
LAB_036ab340:
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar6;
        }
        iVar10 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xe78);
        if (((iVar10 != iStack0000000000000034) && (iVar10 != -1)) &&
           ((((uint)fStack0000000000000078 ^ 1) & 1) == 0)) {
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          in_stack_00001068 = FUN_036ecf20();
          if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
          goto LAB_036afadc;
          uVar33 = *unaff_x20 - 1;
          if (*(uint *)(lVar25 + 0x18) <= uVar33) goto LAB_036afbe8;
          iStack0000000000000034 = iVar10;
          if (*(short *)(lVar25 + (long)(int)uVar33 * (long)iVar12 + 0x20) == 0xad) {
            bVar4 = false;
            *unaff_x20 = uVar33;
            in_stack_00001068 = in_stack_00001068 - 1;
            in_stack_00001088 = CONCAT44(0x2d,uVar33);
            goto LAB_036a9250;
          }
        }
        if (fVar64 <= fStack00000000000000c8) goto switchD_036ab4e4_caseD_0;
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar45 = fStack00000000000000c8;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar45 = *(float *)(unaff_x19 + 0x59);
          if ((fVar45 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar58 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar64) / (float)((int)unaff_x19[0x95] + 1)) /
                     in_stack_00000058._4_4_;
            if (fVar58 <= fVar45) {
              fVar58 = fVar45;
            }
LAB_036ad184:
            *(float *)((long)unaff_x19 + 700) = fVar58;
            return;
          }
          fVar44 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar45 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar44 < fVar45) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_036afb7c;
          fVar44 = *(float *)((long)unaff_x19 + 0x1e4);
          uVar20 = (ulong)(uint)fVar44;
          fVar45 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar45 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_036afae0;
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
            bVar4 = false;
LAB_036acbbc:
            in_stack_00001088 = DAT_00b92750;
            unaff_x29 = &stack0x00000fc0;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            in_stack_00001068 = 0xffffffff;
            goto LAB_036a9250;
          }
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
          iVar12 = FUN_036ecf20();
          bVar4 = false;
LAB_036ab020:
          unaff_x29 = &stack0x00000fc0;
          iVar10 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar10;
          in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
          in_stack_00001068 = iVar12 - 1;
          in_stack_00001088 = CONCAT44(0x2026,iVar10);
          goto LAB_036a9250;
        case 3:
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          in_stack_00001068 = FUN_036ecf20();
          bVar4 = false;
LAB_036aad90:
          unaff_x29 = &stack0x00000fc0;
          in_stack_00001088 = CONCAT44(3,uVar13);
          goto LAB_036a9250;
        case 5:
          goto switchD_036ab4e4_caseD_5;
        case 6:
          lVar25 = unaff_x19[0x5d];
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar18 = FUN_0391f968(lVar25,0,0);
          if ((uVar18 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5d];
            uVar16 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_036afadc;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar16,*(undefined8 *)(*plVar41 + 0x560));
            lVar25 = unaff_x19[0x5d];
            if (lVar25 == 0) goto LAB_036afadc;
            *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
            FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar41 = (long *)unaff_x19[0x5d];
            if (plVar41 == (long *)0x0) goto LAB_036afadc;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bVar4 = false;
LAB_036ab13c:
          unaff_x29 = &stack0x00000fc0;
          in_stack_00001088 = CONCAT44(3,*unaff_x20);
          goto LAB_036a9250;
        default:
          bVar4 = false;
        }
      }
    }
    if (in_stack_0000109c == 0xad) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined1 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
    }
    else {
      if (in_stack_0000109c == 9) {
        lVar25 = *in_stack_00000190;
        if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
        uVar13 = *unaff_x20;
        if (*(uint *)(lVar28 + 0x18) <= uVar13) goto LAB_036afbe8;
        *(undefined1 *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
        lVar28 = *(long *)(lVar25 + 0x50);
        if (lVar28 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        goto LAB_036ab5c8;
      }
      if (*(int *)((long)unaff_x19 + 0x644) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))(fVar45,fVar46);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
      }
      uVar13 = *unaff_x20;
      if (bVar5) {
        *(uint *)(in_stack_00000088 + 0x1f0) = uVar13;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      bVar5 = false;
      *(float *)(lVar25 + 0x60) = fVar43;
      *(float *)(lVar25 + 100) = fVar60;
    }
  }
  else {
    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar51 = (float)uVar20;
      fVar58 = 0.0;
      if ((0.0 < fVar51) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar20 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar51)) + fVar58)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar13;
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
        uVar18 = FUN_0391f968(lVar25,0,0);
        if ((uVar18 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5d];
          uVar16 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar16,*(undefined8 *)(*plVar41 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
      uVar20 = FUN_02fdea78(in_stack_0000109c,0);
      if ((uVar20 & 1) != 0) goto LAB_036ab188;
    }
    if (in_stack_0000109c == 0xa0) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (!bVar9)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar58 = *(float *)(unaff_x19 + 0x3d);
    iVar10 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar43 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
    lVar25 = unaff_x19[0xca];
    fVar51 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar51 = 1.0;
    }
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
    fVar45 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = *(float *)(lVar25 + 0x2c);
    fVar60 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
    fVar44 = *_fStack00000000000000b0;
    fVar60 = fVar45 * (fVar58 / (float)iVar10) * fVar43 * fVar51 * fVar46 * fVar60;
    fVar58 = *_fStack00000000000000a8;
    if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar51 = *(float *)(lVar25 + (long)(int)uVar13 * (long)iVar12 + 0x60);
      iVar10 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar45 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
      lVar25 = unaff_x19[0xca];
      fVar43 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar43 = 1.0;
      }
      if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
      fVar46 = *(float *)((long)unaff_x19 + 0x404);
      fVar64 = *(float *)(lVar25 + 0x2c);
      fVar60 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar44 = *(float *)(lVar25 + 0x60);
      fVar58 = *(float *)(lVar25 + 100);
      fVar60 = fVar46 * (fVar51 / (float)iVar10) * fVar45 * fVar43 * fVar64 * fVar60;
    }
    fVar45 = *(float *)(unaff_x19 + 0x9b);
    fVar51 = 0.0;
    fVar43 = 0.0;
    if ((0.0 < fVar45) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar64 = *(float *)(unaff_x19 + 0x97);
    fVar47 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar46 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar25 = *(long *)(unaff_x19[0xca] + 0x20), lVar25 == 0))
      goto LAB_036afadc;
      FUN_0396b140(&stack0x000010a0,lVar25,0);
      fVar51 = (float)FUN_0396af88(&stack0x00000fc0,0);
    }
    puVar6 = PTR_DAT_03d9c920;
    fVar61 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = (fStack00000000000000a4 - fVar44) - fVar58;
    bVar8 = true;
    if ((fVar61 <= fVar58) && (bVar8 = false, !NAN(fVar61))) {
      bVar8 = fVar61 == -1.0;
    }
    if (!bVar8) {
      fVar58 = fVar61;
    }
    fVar44 = 1.0;
    if ((uVar31 & 0x18) != 0) {
      fVar44 = DAT_00b55374;
    }
    if (((fVar64 - (fVar47 - fVar45)) + fVar43 < fStack00000000000000c8) &&
       (ABS(fVar46) + fVar60 * fVar51 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar44 * fVar58)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      lVar25 = *(long *)(*(long *)puVar6 + 0xb8);
      uVar16 = *(undefined8 *)PTR_DAT_03d9c8c8;
      memcpy(&stack0x000010a0,(void *)(lVar25 + 0x788),0x378);
      FUN_02178ef4(lVar25 + 0x11f0,&stack0x000010a0,uVar16);
    }
  }
  lVar25 = *in_stack_00000190;
  if (lVar25 == 0) goto LAB_036afadc;
  lVar28 = *(long *)(lVar25 + 0x38);
  unaff_d13 = (ulong)(uint)fVar67;
  if (lVar28 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  uVar13 = *(uint *)(unaff_x19 + 0x95);
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar28 + 100) = uVar13;
  *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar9) ||
     ((in_stack_0000109c < 0xe && ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) != 0)))) {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
    if (*(int *)(lVar25 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_036aba84;
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_036afadc;
LAB_036aba84:
    if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
    *(int *)(lVar25 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_0000109c == 9) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar58 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar43 = *(float *)(unaff_x19 + 200);
    fVar51 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar58 = fVar67 * fVar58 * fVar51;
    fVar51 = fVar58 * (float)(int)(fVar43 / fVar58);
    uVar20 = (ulong)(uint)fVar51;
    if (fVar51 <= fVar43) {
      fVar51 = fVar43 + fVar58;
    }
LAB_036abca4:
    *(float *)(unaff_x19 + 200) = fVar51;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar43 = 1.0;
      }
      else {
        fVar43 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
      }
      fVar51 = *(float *)(unaff_x19 + 200);
      fVar60 = (float)FUN_0396af88(&stack0x00001050,0);
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar51 = fVar51 + fVar58 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar67 * (fStack0000000000000138 + fVar43 * fVar60) +
                                 in_stack_000000f0 *
                                 (fStack00000000000000e4 +
                                 fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar51;
      goto joined_r0x036abbe8;
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar51 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar67 * fStack0000000000000138 +
             in_stack_000000f0 *
             (fStack00000000000000e4 +
             fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    uVar20 = (ulong)(uint)fVar51;
    fVar51 = *(float *)(unaff_x19 + 200) - fVar51;
    *(float *)(unaff_x19 + 200) = fVar51;
    if ((in_stack_0000109c == 0x200b) || (uVar11 != 0)) {
      fVar58 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar20 = (ulong)(uint)fVar58;
      fVar51 = fVar51 - fVar58;
      goto LAB_036abca4;
    }
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar58 = *(float *)(unaff_x19 + 200);
    fVar51 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar63) +
                      in_stack_000000f0 *
                      (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar51;
joined_r0x036abbe8:
    if ((in_stack_0000109c == 0x200b) || (uVar20 = (ulong)(uint)fVar58, uVar11 != 0)) {
      fVar58 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar20 = (ulong)(uint)fVar58;
      fVar51 = fVar51 + fVar58;
      goto LAB_036abca4;
    }
  }
  lVar25 = *in_stack_00000190;
  if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
  uVar13 = *unaff_x20;
  uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar31 <= uVar13) goto LAB_036afbe8;
  *(float *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar51;
  uVar33 = in_stack_0000109c;
  if ((int)in_stack_0000109c < 0xd) {
    if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
    if (((bool)(bVar9 & in_stack_0000109c == 0x2d)) || ((float)uVar13 == in_stack_00000090._4_4_))
    goto LAB_036abd48;
  }
  else {
    if (1 < in_stack_0000109c - 0x2028) {
      if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
      uVar20 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar13 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
    }
LAB_036abd48:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar58 = *(float *)(unaff_x19 + 0x99);
      fVar51 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar58 = fVar58 - fVar51;
      if (((fStack0000000000000060 < ABS(fVar58)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_036ed624(fVar58);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar58;
        *(float *)(unaff_x19 + 0x9b) = fVar58 + *(float *)(unaff_x19 + 0x9b);
        puVar6 = PTR_DAT_03d9c920;
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar6;
        }
        lVar28 = *(long *)(lVar25 + 0xb8);
        if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x95]) {
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
          puVar6 = PTR_DAT_03d9c920;
          lVar25 = *(long *)PTR_DAT_03d9c920;
          memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&stack0x000001d0,0x378);
          thunk_FUN_01b4f09c(*(long *)(lVar25 + 0xb8) + 0x818,0);
          lVar25 = *(long *)(*(long *)puVar6 + 0xb8);
          *(float *)(lVar25 + 0x7bc) = fVar58 + *(float *)(lVar25 + 0x7bc);
          *(float *)(lVar25 + 0x800) = fVar58 + *(float *)(lVar25 + 0x800);
          uVar16 = *(undefined8 *)PTR_DAT_03d9c8c8;
          memcpy(&stack0x000010a0,(void *)(lVar25 + 0x788),0x378);
          FUN_02178ef4(lVar25 + 0x11f0,&stack0x000010a0,uVar16);
        }
      }
    }
    unaff_x29 = &stack0x00000fc0;
    fVar43 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar51 = *(float *)((long)unaff_x19 + 0x4cc) - fVar43;
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar51 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar58 = fVar51;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar58;
    fVar60 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_00001094 == '\0') {
      in_stack_00001098 = fVar58;
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
    lVar42 = unaff_x19[0x93];
    lVar19 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(int *)(lVar19 + 0x34) = (int)lVar42;
    uVar31 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar42 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar31 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar31;
    *(uint *)(lVar19 + 0x38) = uVar31;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar19 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar10 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar31 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar10 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar10;
    *(int *)(lVar19 + 0x40) = iVar10;
    *(int *)(lVar19 + 0x24) = (*(int *)(lVar19 + 0x3c) - *(int *)(lVar19 + 0x34)) + 1;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar31) goto LAB_036afbe8;
    uVar66 = *(undefined4 *)(lVar25 + (long)(int)uVar31 * (long)iVar12 + 0x11c);
    lVar28 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar51;
    *(undefined4 *)(lVar28 + 0x6c) = uVar66;
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    fVar60 = fVar60 - fVar43;
    uVar20 = (ulong)(uint)fVar60;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) =
         *(undefined4 *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar28 + 0x78) = fVar60;
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x50), lVar42 == 0)) goto LAB_036afadc;
    lVar19 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar28 = lVar42 + lVar19 * 0x5c;
    *(float *)(lVar28 + 0x44) = *(float *)(lVar28 + 0x74) - fVar67 * in_stack_00000170._4_4_;
    *(float *)(lVar28 + 0x5c) = in_stack_00000108._4_4_;
    if (*(int *)(lVar28 + 0x24) == 1) {
      *(int *)(lVar42 + lVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*in_stack_00000178 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0))
    goto LAB_036afadc;
    lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar31 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    if ((*(char *)(lVar28 + lVar36 * unaff_x24 + 0x194) == '\0') &&
       (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar31 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_036afbe8;
    lVar42 = lVar42 + lVar19 * 0x5c;
    fVar67 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (in_stack_000000f0 *
              (fStack00000000000000e4 +
              fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar58 = -fVar67;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar58 = fVar67;
    }
    *(float *)(lVar42 + 0x58) = *(float *)(lVar28 + lVar36 * unaff_x24 + 0x144) + fVar58;
    *(float *)(lVar42 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar42 + 0x54) = fVar51;
    *(float *)(lVar42 + 0x48) = fStack0000000000000064 + (fVar60 - fVar51);
    *(float *)(lVar42 + 0x4c) = fVar60;
    if ((int)in_stack_0000109c < 0x2d) {
      if (in_stack_0000109c - 10 < 2) {
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
        fVar58 = *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
          if ((in_stack_0000109c == 0x2029) || (fVar51 = 0.0, in_stack_0000109c == 10)) {
            fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar22 = 0;
          fVar51 = fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700))
                   + in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar51) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_0000109c == 0x2029) || (fVar51 = 0.0, in_stack_0000109c == 10)) {
            fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar22 = 1;
          fVar51 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar51);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar51;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
        puVar6 = PTR_DAT_03d9c920;
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar6;
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar58;
        uVar20 = NEON_rev64(uVar16,4);
        unaff_x19[0x99] = uVar20;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_036ed2b4();
        FUN_036ed2b4();
        fStack0000000000000078 = 1.4013e-45;
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        bVar5 = true;
        goto LAB_036a9250;
      }
      if (in_stack_0000109c == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
        in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar33 = 3;
      }
    }
    else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d)) goto LAB_036ac1c4;
  }
LAB_036ac2f4:
  uVar13 = *unaff_x20;
  if (uVar31 <= uVar13) goto LAB_036afbe8;
  if (*(char *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
    lVar28 = lVar28 + (long)(int)uVar13 * unaff_x24;
    uVar18 = *(ulong *)(lVar28 + 0x11c);
    uVar20 = *(ulong *)(in_stack_00000088 + 0x230);
    *(ulong *)(in_stack_00000088 + 0x230) =
         uVar20 ^ (uVar20 ^ uVar18) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar18 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar18));
    uVar18 = *(ulong *)(in_stack_00000088 + 0x238);
    uVar20 = *(ulong *)(lVar28 + 0x128);
    *(ulong *)(in_stack_00000088 + 0x238) =
         uVar18 ^ (uVar18 ^ uVar20) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar18 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar18));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(lVar25 + 0x58);
    if (lVar28 == 0) goto LAB_036afadc;
    iVar10 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar28 + 0x18) < iVar10) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52e84((long *)(lVar25 + 0x58),iVar10,1,*(undefined8 *)PTR_DAT_03d9c890);
      lVar25 = *in_stack_00000190;
      if (lVar25 == 0) goto LAB_036afadc;
    }
    lVar28 = *(long *)(lVar25 + 0x58);
    if (lVar28 == 0) goto LAB_036afadc;
    uVar31 = *(uint *)(unaff_x19 + 0x96);
    lVar42 = (long)(int)uVar31;
    uVar13 = *(uint *)(lVar28 + 0x18);
    if (uVar13 <= uVar31) goto LAB_036afbe8;
    lVar19 = lVar28 + lVar42 * 0x14;
    fVar51 = *(float *)(lVar19 + 0x30);
    uVar20 = (ulong)(uint)fVar51;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar51 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar58 = fVar51;
    }
    *(float *)(lVar19 + 0x30) = fVar58;
    uVar33 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar33 == 0 && uVar31 == 0) {
      *(uint *)(lVar28 + (ulong)uVar31 * 0x14 + 0x20) = uVar33;
    }
    else {
      uVar38 = uVar33 - 1;
      if (0 < (int)uVar33) {
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= uVar38) goto LAB_036afbe8;
        if (uVar31 != *(uint *)(lVar25 + (ulong)uVar38 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar13 <= uVar31 - 1) goto LAB_036afbe8;
          *(uint *)(lVar28 + 0x20 + (long)(int)(uVar31 - 1) * 0x14 + 4) = uVar38;
          *(uint *)(lVar28 + 0x20 + lVar42 * 0x14) = uVar33;
          goto LAB_036ac564;
        }
      }
      if ((float)uVar33 == in_stack_00000090._4_4_) {
        *(float *)(lVar28 + lVar42 * 0x14 + 0x24) = in_stack_00000090._4_4_;
      }
    }
  }
LAB_036ac564:
  puVar6 = PTR_DAT_03d9c920;
  unaff_x29 = &stack0x00000fc0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_036ac920;
  if ((uVar11 == 0) &&
     (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) && (in_stack_0000109c != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      if (((uint)fStack0000000000000078 & 1) != 0) goto LAB_036ac6f8;
      goto LAB_036ac91c;
    }
LAB_036ac660:
    if (((((0x2bfd < in_stack_0000109c - 0xac01) && (0xfd < in_stack_0000109c - 0x1101)) &&
         (0x1d < in_stack_0000109c - 0xa961)) || (uVar18 = FUN_036fbce8(0), (uVar18 & 1) != 0)) &&
       ((((0xed < in_stack_0000109c - 0xff01 && (0x1d < in_stack_0000109c - 0xfe31)) &&
         (0x717d < in_stack_0000109c - 0x2e81)) && (0x1fd < in_stack_0000109c - 0xf901))))
    goto LAB_036ac6e8;
    lVar25 = FUN_036fbb7c(0);
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_036afadc;
    uVar13 = FUN_0254f914(*(long *)(lVar25 + 0x10),in_stack_0000109c,*(undefined8 *)PTR_DAT_03d9c860
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
      if (uVar56 != uVar24 || (((uint)fStack0000000000000078 ^ 0xffffffff) & 1) != 0)
      goto LAB_036ac920;
      if (uVar11 == 0) goto LAB_036ac8a0;
      goto LAB_036ac868;
    }
    lVar25 = FUN_036fbb7c(0);
    if (((lVar25 == 0) || (*in_stack_00000190 == 0)) ||
       (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_036afadc;
    uVar18 = FUN_0254f914(*(long *)(lVar25 + 0x18),
                          *(undefined2 *)
                           (lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar12 + 0x20),
                          *(undefined8 *)PTR_DAT_03d9c860);
    if ((uVar13 & 1) != 0) goto LAB_036ac84c;
    if ((uVar18 & 1) == 0) goto LAB_036ac8e4;
    if (((uint)fStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
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
    if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
      if (((0x28 < in_stack_0000109c - 0x2007) ||
          ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_0000109c != 0xa0 && (in_stack_0000109c != 0x2060)))) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
        fStack0000000000000078 = 0.0;
        *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_036ac920;
      }
      goto LAB_036ac660;
    }
LAB_036ac6e8:
    if (((uint)fStack0000000000000078 & 1) == 0) {
LAB_036ac91c:
      fStack0000000000000078 = 0.0;
      goto LAB_036ac920;
    }
    if (uVar11 == 0) {
LAB_036ac6f8:
      if (!bVar4 && in_stack_0000109c == 0xad) goto LAB_036ac868;
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
  fStack0000000000000078 = 1.4013e-45;
LAB_036ac920:
  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_036ed2b4();
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  goto LAB_036a9250;
switchD_036ab4e4_caseD_5:
  *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
  param_4 = (ulong)*(uint *)((long)unaff_x19 + 0x2fc);
  param_1 = (ulong)(uint)in_stack_00000058._4_4_;
  param_3 = (ulong)(uint)in_stack_000000f0;
  param_5 = (ulong)(uint)fStack00000000000000e4;
  param_6 = (ulong)(uint)fStack000000000000013c;
  param_7 = (ulong)(uint)in_stack_00000108._4_4_;
  param_8 = (ulong)(uint)in_stack_00000050;
  goto code_r0x036acab0;
switchD_036ab4e4_caseD_0:
  uVar20 = unaff_d13;
  FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
               *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000e4,
               fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
  fStack0000000000000078 = 1.4013e-45;
  goto LAB_036ab530;
LAB_036ad4b0:
  uVar48 = uVar11 - 1;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x50), lVar42 == 0))
  goto LAB_036afadc;
  lVar36 = (long)(int)uVar48;
  lVar19 = lVar25 + lVar36 * 0x178;
  uVar24 = *(uint *)(lVar19 + 100);
  if (*(uint *)(lVar42 + 0x18) <= uVar24) goto LAB_036afbe8;
  lVar39 = (long)(int)uVar24;
  lVar42 = lVar42 + lVar39 * 0x5c;
  lVar34 = *(long *)(lVar19 + 0x38);
  uVar2 = *(ushort *)(lVar19 + 0x20);
  uVar31 = *(uint *)(lVar42 + 0x3c);
  uVar13 = *(uint *)(lVar42 + 0x68);
  iVar1 = *(int *)(lVar42 + 0x20);
  iVar14 = *(int *)(lVar42 + 0x28);
  iVar15 = *(int *)(lVar42 + 0x2c);
  uVar33 = *(uint *)(lVar42 + 0x40);
  lVar19 = (long)(int)uVar33;
  fVar44 = *(float *)(lVar42 + 0x4c);
  fVar64 = *(float *)(lVar42 + 0x54);
  fVar45 = *(float *)(lVar42 + 0x58);
  fVar49 = *(float *)(lVar42 + 0x5c);
  fVar47 = *(float *)(lVar42 + 0x60);
  fVar61 = *(float *)(lVar42 + 0x6c);
  fVar54 = *(float *)(lVar42 + 0x70);
  fVar63 = *(float *)(lVar42 + 0x74);
  fVar46 = *(float *)(lVar42 + 0x78);
  uVar38 = (uint)uVar2;
  if ((int)uVar13 < 9) {
    switch(uVar13) {
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
  else if (uVar13 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar2 < 0xad) {
      if ((uVar2 != 3) && (uVar2 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar2 != 0xad) && ((uVar2 != 0x200b && (uVar2 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar25 + 0x18) <= uVar31) goto LAB_036afbe8;
      uVar3 = *(undefined2 *)(lVar25 + (long)(int)uVar31 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fde5f4(uVar3,0);
      if ((uVar20 & 1) == 0) {
        bVar8 = (int)uVar24 < (int)unaff_x19[0x95];
      }
      else {
        bVar8 = false;
      }
      if ((fVar45 <= fVar49) && (!bVar8 && uVar13 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar49 + fVar47;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar11 == 1) || (uVar24 != uVar56)) || (uVar48 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar47;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar49 + fVar47;
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
        cVar23 = (char)unaff_x19[0x1e];
        fVar47 = -fVar45;
        if (cVar23 != '\0') {
          fVar47 = fVar45;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar31) goto LAB_036afbe8;
        iVar15 = (int)*(char *)(lVar25 + (long)(int)uVar31 * 0x178 + 0x194) +
                 (-iVar1 - ((uint)fStack000000000000002c & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar45 = 1.0;
          iVar15 = 1;
        }
        else {
          fVar45 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar38 == 9) {
LAB_036af498:
          fVar45 = 1.0 - fVar45;
        }
        else {
          if (uVar38 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar20 = FUN_02fdea78(uVar38,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_036af498;
          }
          iVar15 = (iVar1 - (~(uint)fStack000000000000002c & 1)) + iVar14;
        }
        fVar45 = ((fVar49 + fVar47) * fVar45) / (float)iVar15;
        if (cVar23 == '\0') {
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
  else if (uVar13 == 0x20) {
    fVar45 = fVar61 + fVar63;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar13 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  lVar42 = lVar25 + lVar36 * 0x178;
  fVar49 = fStack00000000000000d0 + in_stack_00000108._4_4_;
  fVar45 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar47 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar42 + 0x194) == '\0') goto LAB_036adf70;
  iVar14 = *(int *)(lVar25 + lVar36 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_036add84;
  fVar60 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar24,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar25 + lVar36 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar60 = 1.0;
    break;
  case 1:
    fVar46 = *(float *)(lVar25 + lVar36 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar25 + lVar36 * 0x178;
      fVar63 = (in_stack_00000108._4_4_ + fVar46) - *(float *)(in_stack_00000088 + 0x230);
      fVar46 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar27 = lVar25 + lVar36 * 0x178;
    fVar63 = fVar63 - fVar61;
    *(float *)(lVar27 + 0x84) = fVar60 + (fVar46 - fVar61) / fVar63;
    *(float *)(lVar27 + 0xac) = fVar60 + (*(float *)(lVar27 + 0x98) - fVar61) / fVar63;
    *(float *)(lVar27 + 0xd4) = fVar60 + (*(float *)(lVar27 + 0xc0) - fVar61) / fVar63;
    fVar60 = fVar60 + (*(float *)(lVar27 + 0xe8) - fVar61) / fVar63;
    break;
  case 2:
    lVar27 = lVar25 + lVar36 * 0x178;
    fVar46 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar63 = (in_stack_00000108._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar27 + 0x84) = fVar60 + fVar63 / fVar46;
    *(float *)(lVar27 + 0xac) =
         fVar60 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar60 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar60 = fVar60 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar25 + lVar36 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar25 + lVar36 * 0x178;
      fVar46 = fVar46 - fVar54;
      fVar63 = fVar60 + (*(float *)(lVar27 + 0x74) - fVar54) / fVar46;
      fVar46 = fVar60 + (*(float *)(lVar27 + 0x9c) - fVar54) / fVar46;
      *(float *)(lVar27 + 0x88) = fVar63;
      *(float *)(lVar27 + 0xb0) = fVar46;
      *(float *)(lVar27 + 0xd8) = fVar63;
      *(float *)(lVar27 + 0x100) = fVar46;
      break;
    case 2:
      lVar27 = lVar25 + lVar36 * 0x178;
      fVar63 = fVar60 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar63;
      fVar46 = *(float *)(unaff_x19 + 0x9c);
      fVar61 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar63;
      fVar63 = fVar60 + (*(float *)(lVar27 + 0x9c) - fVar46) / (fVar61 - fVar46);
      *(float *)(lVar27 + 0xb0) = fVar63;
      *(float *)(lVar27 + 0x100) = fVar63;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar13 = (uint)*(undefined8 *)(lVar25 + 0x18);
    }
    if (uVar13 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar36 * 0x178;
    fVar63 = *(float *)(lVar27 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar63) * 0.5;
    fVar61 = fVar60 + *(float *)(lVar27 + 0x88) * fVar63 + fVar46;
    fVar60 = fVar60 + fVar46 + *(float *)(lVar27 + 0xb0) * fVar63;
    *(float *)(lVar27 + 0x84) = fVar61;
    *(float *)(lVar27 + 0xac) = fVar61;
    *(float *)(lVar27 + 0xd4) = fVar60;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar25 + lVar36 * 0x178 + 0xfc) = fVar60;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar13 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar36 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar48 < uVar13) {
      lVar27 = lVar25 + lVar36 * 0x178;
      fVar44 = fVar44 - fVar64;
      fVar60 = (*(float *)(lVar27 + 0x74) - fVar64) / fVar44;
      fVar44 = (*(float *)(lVar27 + 0x9c) - fVar64) / fVar44;
      *(float *)(lVar27 + 0x88) = fVar60;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar13 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar36 * 0x178;
    fVar60 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar60;
    fVar44 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar27 + 0xb0) = fVar44;
    *(float *)(lVar27 + 0xd8) = fVar44;
    *(float *)(lVar27 + 0x100) = fVar60;
    break;
  case 3:
    if (uVar13 <= uVar48) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar36 * 0x178;
    fVar44 = *(float *)(lVar27 + 0x15c);
    fVar63 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar44) * 0.5;
    fVar60 = *(float *)(lVar27 + 0x84) / fVar44 + fVar63;
    fVar63 = fVar63 + *(float *)(lVar27 + 0xd4) / fVar44;
    *(float *)(lVar27 + 0x88) = fVar60;
    *(float *)(lVar27 + 0xb0) = fVar63;
    *(float *)(lVar27 + 0x100) = fVar60;
    *(float *)(lVar27 + 0xd8) = fVar63;
  }
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  lVar27 = lVar25 + lVar36 * 0x178;
  fVar60 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar25 + lVar36 * 0x178 + 400) & 1) != 0)) {
    fVar60 = -fVar60;
  }
  fVar63 = fVar58;
  if (((iVar10 == 2) || (fVar63 = fVar67, iVar10 == 1)) || (fVar63 = fVar58 / fVar51, iVar10 == 0))
  {
    fVar60 = fVar63 * fVar60;
  }
  lVar27 = lVar25 + lVar36 * 0x178;
  fVar44 = *(float *)(lVar27 + 0x88);
  fVar46 = *(float *)(lVar27 + 0x84);
  fVar63 = -2.1474836e+09;
  if (fVar46 != INFINITY) {
    fVar63 = (float)(int)fVar46;
  }
  fVar61 = *(float *)(lVar27 + 0xd4);
  fVar54 = *(float *)(lVar27 + 0xd8);
  fVar64 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar64 = (float)(int)fVar44;
  }
  uVar52 = FUN_036f2b00(fVar46 - fVar63,fVar44 - fVar64);
  *(undefined4 *)(lVar27 + 0x84) = uVar52;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  fVar54 = fVar54 - fVar64;
  *(float *)(lVar27 + 0x88) = fVar60;
  uVar52 = FUN_036f2b00(fVar46 - fVar63,fVar54);
  *(undefined4 *)(lVar25 + lVar36 * 0x178 + 0xac) = uVar52;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  fVar61 = fVar61 - fVar63;
  *(float *)(lVar25 + lVar36 * 0x178 + 0xb0) = fVar60;
  fVar63 = (float)FUN_036f2b00(fVar61,fVar54);
  *(float *)(lVar27 + 0xd4) = fVar63;
  if (*(uint *)(lVar25 + 0x18) <= uVar48) goto LAB_036afbe8;
  *(float *)(lVar27 + 0xd8) = fVar60;
  uVar52 = FUN_036f2b00(fVar61,fVar44 - fVar64);
  *(undefined4 *)(lVar25 + lVar36 * 0x178 + 0xfc) = uVar52;
  uVar13 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  *(float *)(lVar25 + lVar36 * 0x178 + 0x100) = fVar60;
LAB_036add84:
  if (((int)uVar48 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000e4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar24 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar13 <= uVar48) goto LAB_036afbe8;
      lVar42 = lVar25 + lVar36 * 0x178;
      *(ulong *)(lVar42 + 0x70) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0x70));
      *(float *)(lVar42 + 0x78) = fVar47 + *(float *)(lVar42 + 0x78);
      *(ulong *)(lVar42 + 0x98) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0x98));
      *(float *)(lVar42 + 0xa0) = fVar47 + *(float *)(lVar42 + 0xa0);
      *(ulong *)(lVar42 + 0xc0) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0xc0));
      *(float *)(lVar42 + 200) = fVar47 + *(float *)(lVar42 + 200);
      *(ulong *)(lVar42 + 0xe8) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar42 + 0xe8));
      *(float *)(lVar42 + 0xf0) = fVar47 + *(float *)(lVar42 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar24 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar48 < uVar13) {
        if (*(uint *)(lVar25 + lVar36 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar42 = lVar25 + lVar36 * 0x178;
          *(ulong *)(lVar42 + 0x70) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0x70));
          *(float *)(lVar42 + 0x78) = fVar47 + *(float *)(lVar42 + 0x78);
          *(ulong *)(lVar42 + 0x98) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0x98));
          *(float *)(lVar42 + 0xa0) = fVar47 + *(float *)(lVar42 + 0xa0);
          *(ulong *)(lVar42 + 0xc0) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0xc0));
          *(float *)(lVar42 + 200) = fVar47 + *(float *)(lVar42 + 200);
          *(ulong *)(lVar42 + 0xe8) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                        fVar49 + (float)*(undefined8 *)(lVar42 + 0xe8));
          *(float *)(lVar42 + 0xf0) = fVar47 + *(float *)(lVar42 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar13 = *(uint *)(lVar25 + 0x18);
  }
  puVar6 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar52 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar27 = lVar25 + lVar36 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar52;
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar27 = lVar25 + lVar36 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar52;
  uVar52 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar52;
  *(undefined1 *)(lVar42 + 0x194) = 0;
LAB_036adf28:
  if (iVar14 == 0) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar30)();
  }
  else if (iVar14 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  uVar16 = *(undefined8 *)(lVar42 + 0x11c);
  *(undefined8 *)(lVar42 + 0x11c) =
       CONCAT44(fVar45 + (float)((ulong)uVar16 >> 0x20),fVar49 + (float)uVar16);
  *(float *)(lVar42 + 0x124) = fVar47 + *(float *)(lVar42 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(ulong *)(lVar42 + 0x110) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0x110) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar42 + 0x110));
  *(float *)(lVar42 + 0x118) = fVar47 + *(float *)(lVar42 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(ulong *)(lVar42 + 0x128) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar42 + 0x128) >> 0x20),
                fVar49 + (float)*(undefined8 *)(lVar42 + 0x128));
  *(float *)(lVar42 + 0x130) = fVar47 + *(float *)(lVar42 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
  lVar42 = lVar42 + lVar36 * 0x178;
  *(float *)(lVar42 + 0x134) = fVar49 + *(float *)(lVar42 + 0x134);
  *(ulong *)(lVar42 + 0x138) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar42 + 0x138) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar42 + 0x138));
  lVar42 = *in_stack_00000190;
  if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x38), lVar27 == 0)) goto LAB_036afadc;
  uVar13 = *(uint *)(lVar27 + 0x18);
  if (uVar13 <= uVar48) goto LAB_036afbe8;
  lVar35 = lVar27 + lVar36 * 0x178;
  uVar18 = CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                    fVar49 + (float)*(undefined8 *)(lVar35 + 0x140));
  fVar63 = fVar45 + *(float *)(lVar35 + 0x150);
  uVar55 = (ulong)(uint)fVar63;
  uVar57 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar63;
  *(ulong *)(lVar35 + 0x140) = uVar18;
  *(ulong *)(lVar35 + 0x148) = uVar57;
  if (uVar24 == uVar56) {
    uVar56 = *unaff_x20 - 1;
    if (uVar48 == uVar56) goto LAB_036ae17c;
  }
  else {
    lVar42 = *(long *)(lVar42 + 0x50);
    if (lVar42 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar42 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar35 = (long)(int)uVar56;
    lVar37 = lVar42 + lVar35 * 0x5c;
    uVar57 = (ulong)(uint)*(float *)(lVar37 + 0x58);
    fVar63 = fVar45 + *(float *)(lVar37 + 0x54);
    uVar18 = (ulong)(uint)fVar63;
    fVar44 = fVar49 + *(float *)(lVar37 + 0x58);
    uVar55 = (ulong)(uint)fVar44;
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar63;
    *(float *)(lVar37 + 0x58) = fVar44;
    if (uVar13 <= *(uint *)(lVar37 + 0x34)) goto LAB_036afbe8;
    uVar52 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar42 = lVar42 + lVar35 * 0x5c;
    *(float *)(lVar42 + 0x70) = fVar63;
    *(undefined4 *)(lVar42 + 0x6c) = uVar52;
    lVar42 = *in_stack_00000190;
    if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x50), lVar27 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar42 = *(long *)(lVar42 + 0x38);
    if (lVar42 == 0) goto LAB_036afadc;
    uVar56 = *(uint *)(lVar27 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar42 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar35 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar56 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar56 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar48 == uVar56) {
      lVar42 = *in_stack_00000190;
      if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x50), lVar27 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_036afbe8;
      lVar35 = lVar27 + lVar39 * 0x5c;
      uVar57 = (ulong)(uint)*(float *)(lVar35 + 0x58);
      uVar18 = CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                        fVar45 + (float)*(undefined8 *)(lVar35 + 0x4c));
      fVar63 = fVar45 + *(float *)(lVar35 + 0x54);
      fVar49 = fVar49 + *(float *)(lVar35 + 0x58);
      uVar55 = (ulong)(uint)fVar49;
      *(ulong *)(lVar35 + 0x4c) = uVar18;
      *(float *)(lVar35 + 0x54) = fVar63;
      *(float *)(lVar35 + 0x58) = fVar49;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(lVar35 + 0x34)) goto LAB_036afbe8;
      uVar52 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar63;
      *(undefined4 *)(lVar27 + 0x6c) = uVar52;
      lVar42 = *in_stack_00000190;
      if ((lVar42 == 0) || (lVar27 = *(long *)(lVar42 + 0x50), lVar27 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_036afbe8;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_036afadc;
      uVar56 = *(uint *)(lVar27 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar42 + 0x18) <= uVar56) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar56 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar20 = FUN_02fddb80(uVar38,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar38 - 0x2010)) && (uVar38 != 0xad)) && (uVar38 != 0x2d)) {
    if (bVar5) {
      if (((uVar11 != 1) && ((int)uVar48 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
         (((int)uVar48 < (int)*unaff_x20 && ((uVar38 == 0x2019 || (uVar38 == 0x27)))))) {
        if (*(uint *)(lVar25 + 0x18) <= uVar11 - 2) goto LAB_036afbe8;
        uVar3 = *(undefined2 *)(lVar25 + lVar28 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fddb80(uVar3,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_036afbe8;
          uVar3 = *(undefined2 *)(lVar25 + lVar28 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_02fddb80(uVar3,0);
          if ((uVar20 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar11 != 1) {
LAB_036aeea4:
        bVar5 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fddab4(uVar38,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdb080(uVar38,0);
        if (((uVar38 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar48 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fddb80(uVar38,0);
      iVar14 = (int)fStack0000000000000138;
      if ((uVar20 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar14 = uVar11 - 2;
    }
    lVar42 = *in_stack_00000190;
    if (lVar42 == 0) goto LAB_036afadc;
    lVar27 = *(long *)(lVar42 + 0x40);
    if (lVar27 == 0) goto LAB_036afadc;
    uVar56 = *(uint *)(lVar42 + 0x24);
    iVar15 = *(int *)(lVar27 + 0x18);
    if (iVar15 < (int)(uVar56 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar42 + 0x40),iVar15 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar42 = *in_stack_00000190;
      if (lVar42 == 0) goto LAB_036afadc;
    }
    lVar42 = *(long *)(lVar42 + 0x40);
    if (lVar42 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar42 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar42 = lVar42 + (long)(int)uVar56 * 0x18;
    *(long **)(lVar42 + 0x20) = unaff_x19;
    *(float *)(lVar42 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar42 + 0x2c) = iVar14;
    *(int *)(lVar42 + 0x30) = (iVar14 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar42 = unaff_x19[0x6d];
    if (lVar42 == 0) goto LAB_036afadc;
    lVar27 = *(long *)(lVar42 + 0x50);
    *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar39 * 0x5c;
    bVar5 = false;
    fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      in_stack_00000170._4_4_ = (float)uVar48;
    }
    if (uVar48 == *unaff_x20 - 1) {
      lVar42 = *in_stack_00000190;
      if (lVar42 == 0) goto LAB_036afadc;
      lVar27 = *(long *)(lVar42 + 0x40);
      if (lVar27 == 0) goto LAB_036afadc;
      uVar56 = *(uint *)(lVar42 + 0x24);
      iVar14 = *(int *)(lVar27 + 0x18);
      if (iVar14 < (int)(uVar56 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar42 + 0x40),iVar14 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar42 = *in_stack_00000190;
        if (lVar42 == 0) goto LAB_036afadc;
      }
      lVar42 = *(long *)(lVar42 + 0x40);
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar56) goto LAB_036afbe8;
      lVar42 = lVar42 + (long)(int)uVar56 * 0x18;
      *(long **)(lVar42 + 0x20) = unaff_x19;
      *(float *)(lVar42 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar42 + 0x2c) = uVar48;
      *(uint *)(lVar42 + 0x30) = uVar11 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar42 = unaff_x19[0x6d];
      if (lVar42 == 0) goto LAB_036afadc;
      lVar27 = *(long *)(lVar42 + 0x50);
      *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar39 * 0x5c;
      fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar5 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  uVar56 = *(uint *)(lVar42 + 0x18);
  if (uVar56 <= uVar48) goto LAB_036afbe8;
  if ((*(byte *)(lVar42 + lVar36 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_036ae3d8:
      if (uVar56 <= uVar11 - 2) goto LAB_036afbe8;
      lVar39 = *unaff_x19;
      uVar56 = *(uint *)(lVar42 + lVar28 + -0x330);
      uVar52 = *(undefined4 *)(lVar42 + lVar28 + -0x2f8);
LAB_036ae924:
      pcVar30 = *(code **)(lVar39 + 0x908);
LAB_036ae92c:
      uVar57 = (ulong)uVar56;
      uVar18 = (ulong)(uint)fStack0000000000000078;
      uVar55 = (ulong)uStack000000000000007c;
      (*pcVar30)(fStack0000000000000080,uVar18,uVar55,uVar57,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar52);
      puVar6 = PTR_DAT_03d9c920;
      lVar42 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar42 = *(long *)puVar6;
      }
LAB_036ae980:
      bVar9 = false;
      fVar43 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar42 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar9 = false;
    }
  }
  else {
    lVar42 = lVar42 + lVar36 * 0x178;
    iVar14 = *(int *)(lVar42 + 0x68);
    *(int *)(lVar42 + 0x16c) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar48) || ((int)unaff_x19[0x66] < (int)uVar24)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_02fdb080(uVar38,0);
    if ((uVar38 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar42 = *in_stack_00000190;
      if ((lVar42 == 0) || (lVar39 = *(long *)(lVar42 + 0x38), lVar39 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar39 + 0x18) <= uVar48) goto LAB_036afbe8;
      fVar63 = *(float *)(lVar39 + lVar36 * 0x178 + 0x160);
      if (fVar43 <= fVar63) {
        fVar43 = fVar63;
      }
      if (fStack0000000000000110 <= ABS(fVar60)) {
        fStack0000000000000110 = ABS(fVar60);
      }
      if (iVar14 != iStack0000000000000074) {
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
      if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar44 = *(float *)(lVar42 + lVar36 * 0x178 + 0x14c);
      fVar63 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar44 = fVar44 + fVar43 * fVar63;
      if (fVar44 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar44;
      }
      uVar18 = (ulong)(uint)fStack0000000000000114;
      iStack0000000000000074 = iVar14;
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar48)) ||
         ((bool)(bVar8 ^ 1))) goto LAB_036ae99c;
      if (uVar48 == uVar33) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar38,0);
        if ((uVar20 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
      lVar42 = lVar42 + lVar36 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar42 + 0x160);
      fStack0000000000000080 = *(float *)(lVar42 + 0x11c);
      uVar55 = (ulong)(uint)fStack0000000000000080;
      bVar9 = fVar43 != 0.0;
      fVar63 = in_stack_00000090._4_4_;
      if (bVar9) {
        fVar63 = fVar43;
      }
      fVar43 = fVar63;
      uVar66 = *(undefined4 *)(lVar42 + 0x168);
      uStack000000000000007c = 0;
      fVar63 = fVar60;
      if (bVar9) {
        fVar63 = fStack0000000000000110;
      }
      uVar18 = (ulong)(uint)fVar63;
      fStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar63;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        if (uVar48 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar36 * 0x178;
          lVar39 = *unaff_x19;
          uVar56 = *(uint *)(lVar42 + 0x128);
          uVar52 = *(undefined4 *)(lVar42 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar48 == uVar31) || ((int)uVar33 <= (int)uVar48)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fdb080(uVar38,0);
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        lVar39 = lVar36;
        uVar56 = uVar48;
        if (uVar38 == 0x200b || (uVar20 & 1) != 0) {
          lVar39 = lVar19;
          uVar56 = uVar33;
        }
        if (uVar56 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar39 * 0x178;
          uVar56 = *(uint *)(lVar42 + 0x128);
          uVar52 = *(undefined4 *)(lVar42 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar8) {
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        uVar56 = *(uint *)(lVar42 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar48 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar11) goto LAB_036afbe8;
      uVar20 = FUN_036c0e18(uVar66,*(undefined4 *)(lVar42 + lVar28),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0)) {
          if (uVar48 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar36 * 0x178;
            uVar57 = (ulong)*(uint *)(lVar42 + 0x128);
            uVar55 = (ulong)uStack000000000000007c;
            uVar18 = (ulong)(uint)fStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar18,uVar55,uVar57,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar42 + 0x160));
            puVar6 = PTR_DAT_03d9c920;
            lVar42 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar42 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar42 = *(long *)puVar6;
            }
            goto LAB_036ae980;
          }
          goto LAB_036afbe8;
        }
        goto LAB_036afadc;
      }
    }
    bVar9 = true;
  }
LAB_036ae99c:
  if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
  if (lVar34 == 0) goto LAB_036afadc;
  uVar56 = *(uint *)(lVar42 + lVar36 * 0x178 + 400);
  fVar63 = (float)FUN_0396ad04(lVar34 + 0x50,0);
  if ((uVar56 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar11 - 2) goto LAB_036afbe8;
      uVar56 = *(uint *)(lVar42 + lVar28 + -0x330);
      fVar45 = *(float *)(lVar42 + lVar28 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar57 = (ulong)uVar56;
      uVar18 = (ulong)(uint)fStack00000000000000a4;
      uVar55 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar30)(fStack00000000000000a8,uVar18,uVar55,uVar57,
                 fStack00000000000000b0 * fVar63 + fVar45,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar42 = *in_stack_00000190;
    if ((lVar42 == 0) || (lVar39 = *(long *)(lVar42 + 0x38), lVar39 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar39 + 0x18) <= uVar48) goto LAB_036afbe8;
    *(int *)(lVar39 + lVar36 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[0x65] < (int)uVar48) || ((int)unaff_x19[0x66] < (int)uVar24)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar39 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar48)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar8)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar48 == uVar33) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar38,0);
        if ((uVar20 & 1) != 0) goto LAB_036aeb20;
        lVar42 = *in_stack_00000190;
        if (lVar42 == 0) goto LAB_036afadc;
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar42 + 0x18) <= uVar48) goto LAB_036afbe8;
      lVar42 = lVar42 + lVar36 * 0x178;
      fStack000000000000004c = *(float *)(lVar42 + 0x60);
      fStack0000000000000040 = *(float *)(lVar42 + 0x14c);
      uVar18 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar42 + 0x11c);
      uVar55 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar42 + 0x160);
      fStack00000000000000a4 = fVar63 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar56 = *unaff_x20;
    if (uVar56 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        if (uVar48 < *(uint *)(lVar42 + 0x18)) {
          lVar42 = lVar42 + lVar36 * 0x178;
          lVar19 = *unaff_x19;
          uVar56 = *(uint *)(lVar42 + 0x128);
          fVar45 = *(float *)(lVar42 + 0x14c);
LAB_036aec8c:
          pcVar30 = *(code **)(lVar19 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar48 == uVar31) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fdb080(uVar38,0);
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        uVar56 = *(uint *)(lVar42 + 0x18);
        if (uVar38 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar56 <= uVar33) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar19 = lVar36;
          if (uVar56 <= uVar48) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar42 = lVar42 + lVar19 * 0x178;
        fVar45 = *(float *)(lVar42 + 0x14c);
        uVar56 = *(uint *)(lVar42 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar48 < (int)uVar56) {
      lVar42 = *in_stack_00000190;
      if ((lVar42 != 0) && (lVar39 = *(long *)(lVar42 + 0x38), lVar39 != 0)) {
        if (uVar11 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lVar28 + -0x108) == fStack000000000000004c) {
            fVar44 = *(float *)(lVar39 + lVar28 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar18 = (ulong)(uint)fStack0000000000000040;
            uVar20 = FUN_036c122c(fVar45 + fVar44,uVar18,0);
            if ((uVar20 & 1) != 0) {
              uVar56 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar42 = *in_stack_00000190;
            if (lVar42 == 0) goto LAB_036afadc;
          }
          lVar42 = *(long *)(lVar42 + 0x38);
          if (lVar42 != 0) {
            uVar56 = *(uint *)(lVar42 + 0x18);
            if ((int)uVar48 <= (int)uVar33) goto LAB_036aef20;
            if (uVar33 < uVar56) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar48 < (int)uVar56) {
      iVar14 = FUN_03922ce0(lVar34,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar11) goto LAB_036afbe8;
      lVar42 = *(long *)(lVar25 + lVar28 + -0x130);
      if (lVar42 == 0) goto LAB_036afadc;
      iVar15 = FUN_03922ce0(lVar42,0);
      if (iVar14 != iVar15) goto LAB_036aec60;
    }
    if (!bVar8) {
      if ((*in_stack_00000190 != 0) && (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 != 0))
      {
        if (uVar11 - 2 < *(uint *)(lVar42 + 0x18)) {
          lVar19 = *unaff_x19;
          uVar56 = *(uint *)(lVar42 + lVar28 + -0x330);
          fVar45 = *(float *)(lVar42 + lVar28 + -0x30c);
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
  uVar56 = (uint)*(undefined8 *)(lVar42 + 0x18);
  if (uVar56 <= uVar48) goto LAB_036afbe8;
  if ((*(byte *)(lVar42 + lVar36 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar4) {
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      uVar18 = (ulong)(uint)fStack00000000000000ec;
      uVar57 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar18,uVar55,uVar57,fStack00000000000000d8,uVar55);
    }
LAB_036aefe8:
    bVar4 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar48) || ((int)unaff_x19[0x66] < (int)uVar24)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar42 + lVar36 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar4) {
      if ((((uVar38 == 0xd) || ((uVar38 & 0xfffe) == 10)) || ((int)uVar33 < (int)uVar48)) ||
         (!bVar8)) goto LAB_036aefe8;
      if (uVar48 == uVar33) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar38,0);
        if ((uVar20 & 1) != 0) goto LAB_036aefe8;
      }
      puVar6 = PTR_DAT_03d9c920;
      lVar19 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar19 = *(long *)puVar6;
      }
      if ((*in_stack_00000190 == 0) || (lVar42 = *(long *)(*in_stack_00000190 + 0x38), lVar42 == 0))
      goto LAB_036afadc;
      uVar56 = (uint)*(undefined8 *)(lVar42 + 0x18);
      if (uVar56 <= uVar48) goto LAB_036afbe8;
      lVar19 = *(long *)(lVar19 + 0xb8);
      lVar34 = lVar42 + lVar36 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar34 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar34 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar19 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar19 + 0x159c);
      in_stack_00001080 = *(float *)(lVar34 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar19 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar19 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar56 <= uVar48) goto LAB_036afbe8;
    lVar42 = lVar42 + lVar36 * 0x178;
    fVar63 = *(float *)(lVar42 + 0x128);
    fVar64 = *(float *)(lVar42 + 0x188);
    uVar17 = *(undefined8 *)(lVar42 + 0x17c);
    fVar61 = *(float *)(lVar42 + 0x184);
    uVar16 = *(undefined8 *)(lVar42 + 0x184);
    fVar47 = *(float *)(lVar42 + 0x18c);
    fVar45 = *(float *)(lVar42 + 0x11c);
    fVar44 = *(float *)(lVar42 + 0x148);
    fVar46 = *(float *)(lVar42 + 0x150);
    in_stack_00000198 = uVar17;
    fStack00000000000001a0 = fVar61;
    fStack00000000000001a4 = fVar64;
    in_stack_000001a8 = fVar47;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar20 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar42 = *(long *)PTR_DAT_03d9c888;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar42);
      }
      fVar63 = fVar63 + (float)in_stack_00001078;
      uVar55 = (ulong)(uint)fVar63;
      fVar45 = fVar45 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar44 = fVar44 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar57 = (ulong)(uint)fVar44;
      if (fVar45 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar45;
      }
      if (fVar46 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar46 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar63) {
        fStack00000000000000d4 = fVar63;
      }
      uVar18 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar44) {
        fStack00000000000000d8 = fVar44;
      }
    }
    else {
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar42);
      }
      fVar45 = (fVar45 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar57 = (ulong)(uint)fVar45;
      if (fVar46 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar46;
      }
      uVar18 = (ulong)(uint)fStack00000000000000ec;
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar44) {
        fStack00000000000000d8 = fVar44;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar18,uVar55,uVar57,fStack00000000000000d8,uVar55);
      fStack00000000000000ec = fVar46 - fVar47;
      fStack00000000000000d4 = fVar63 + fVar61;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar44 + fVar64;
      fStack00000000000000e8 = fVar45;
      in_stack_00001070 = uVar17;
      in_stack_00001078 = uVar16;
      in_stack_00001080 = fVar47;
    }
    if (((*unaff_x20 == 1) || (uVar48 == uVar31)) || (((int)uVar33 <= (int)uVar48 || (!bVar8)))) {
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      uVar18 = (ulong)(uint)fStack00000000000000ec;
      uVar57 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar18,uVar55,uVar57,fStack00000000000000d8,uVar55);
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  uVar48 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar8 = (int)uVar48 <= (int)uVar11;
  uVar11 = uVar11 + 1;
  uVar56 = uVar24;
  if (bVar8) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar25 = *in_stack_00000190;
  if (lVar25 != 0) {
    iVar12 = uVar24 + 1;
    plVar41 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar25 + 0x18) = uVar48;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar25 + 0x2c) = iVar12;
    if ((int)uVar48 < 1 || fStack00000000000000e4 == 0.0) {
      fStack00000000000000e4 = 1.4013e-45;
    }
    *(int *)(lVar25 + 0x1c) = (int)lVar28;
    *(float *)(lVar25 + 0x24) = fStack00000000000000e4;
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
      if (*(int *)(*plVar41 + 0xe0) == 0) {
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
                            uVar16 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar48 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar25 = *in_stack_00000190;
                              if (lVar25 != 0) {
                                lVar42 = 0;
                                lVar28 = 0;
                                do {
                                  uVar20 = lVar28 + 1;
                                  if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar20)
                                  goto LAB_036acd60;
                                  lVar25 = *(long *)(lVar25 + 0x60);
                                  if (lVar25 == 0) break;
                                  if (*(int *)(*plVar41 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                  FUN_036fa544(lVar25 + lVar42 + 0x70,0);
                                  lVar25 = unaff_x19[0xe1];
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                  uVar17 = *(undefined8 *)(lVar25 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar21 = FUN_03922f24(uVar17,0,0);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar25 = *(long *)(*in_stack_00000190 + 0x60), lVar25 == 0
                                         )) break;
                                      if (*(int *)(*plVar41 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                      FUN_036fa678(lVar25 + lVar42 + 0x70,1,0);
                                    }
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000190 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_0390262c(lVar25,*(undefined8 *)(lVar19 + lVar42 + 0x80),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000190 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_03902830(lVar25,*(undefined8 *)(lVar19 + lVar42 + 0x98),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000190 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_039028dc(lVar25,*(undefined8 *)(lVar19 + lVar42 + 0xa0),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar19 = *(long *)(*in_stack_00000190 + 0x60), lVar19 == 0))
                                    break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_03902a3c(lVar25,*(undefined8 *)(lVar19 + lVar42 + 0xa8),0);
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
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar19 = *(long *)(lVar19 + lVar28 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (uVar17 = FUN_03702ba4(lVar19,0), lVar25 == 0)) break;
                                    FUN_03af8c9c(lVar25,uVar17,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_039add2c(lVar25,0), lVar25 == 0)) break;
                                    FUN_03af8894(uVar16,uVar18,uVar55,uVar57,lVar25,0);
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
                                    plVar40 = *(long **)(lVar25 + lVar28 * 8 + 0x28);
                                    uVar11 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar40 == (long *)0x0) break;
                                    (**(code **)(*plVar40 + 0x2c8))
                                              (plVar40,uVar11 & 1,*(undefined8 *)(*plVar40 + 0x2d0))
                                    ;
                                  }
                                  lVar25 = *in_stack_00000190;
                                  lVar28 = lVar28 + 1;
                                  lVar42 = lVar42 + 0x50;
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


