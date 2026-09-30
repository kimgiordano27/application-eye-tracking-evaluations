/*
FUNCTION_NAME: Unity.VisualScripting.OptimizedReflection$$GetValueOptimized
ENTRY_POINT: 036ac774
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


/* WARNING: Type propagation algorithm not settling */

void Unity_VisualScripting_OptimizedReflection__GetValueOptimized
               (long param_1,undefined1 param_2 [16],ulong param_3,long param_4)

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
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  uint in_w9;
  long lVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  float *pfVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long *unaff_x19;
  uint *unaff_x20;
  long *unaff_x21;
  long *plVar38;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar39;
  long unaff_x26;
  long lVar40;
  long *unaff_x28;
  uint uVar41;
  undefined1 *unaff_x29;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  uint uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  ulong uVar54;
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
  undefined8 in_stack_00000048;
  float in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
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
  
code_r0x036ac774:
  uVar47 = (uint)unaff_x26;
  if (in_w9 + 1 < *(uint *)(param_1 + 0x18)) {
    if (*(long *)(param_4 + 0x18) != 0) {
      iVar15 = (int)unaff_x24;
      uVar20 = FUN_0254f914(*(long *)(param_4 + 0x18),
                            *(undefined2 *)(param_1 + (long)(int)(in_w9 + 1) * (long)iVar15 + 0x20),
                            *(undefined8 *)PTR_DAT_03d9c860);
      if (((uint)in_stack_00000048._4_4_ & 1) != 0) goto LAB_036ac84c;
      if ((uVar20 & 1) == 0) goto LAB_036ac8e4;
      if ((bStack0000000000000078 & 1) == 0) goto LAB_036ac91c;
      if (in_stack_00000070._4_4_ != 0) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036ed2b4();
      }
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
LAB_036ac8d8:
      bStack0000000000000078 = 1;
LAB_036ac920:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
      uVar16 = in_stack_0000109c;
LAB_036a9250:
      fVar58 = (float)unaff_d13;
      in_stack_00001068 = in_stack_00001068 + 1;
      lVar24 = unaff_x19[0x8f];
      if (lVar24 != 0) {
        if ((int)in_stack_00001068 < (int)*(uint *)(lVar24 + 0x18)) {
          if (*(uint *)(lVar24 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
          in_stack_0000109c = *(uint *)(lVar24 + (long)(int)in_stack_00001068 * 0xc + 0x20);
          if (in_stack_0000109c == 0) goto LAB_036acbd8;
          if (5 < in_stack_00000188._4_4_) {
            uVar17 = FUN_0303de64(&stack0x0000109c,0);
            uVar18 = FUN_0303de64(&stack0x00001068,0);
            uVar17 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c930,uVar17,
                                  *(undefined8 *)PTR_DAT_03d9c940,uVar18,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                );
            }
            FUN_038f2e04(uVar17,0);
            in_stack_00001088 = CONCAT44(3,*unaff_x20);
          }
          if ((*(char *)((long)unaff_x19 + 0x302) != '\0') && (in_stack_0000109c == 0x3c))
          goto code_r0x036a8fdc;
          if ((*unaff_x28 != 0) && (lVar24 = *(long *)(*unaff_x28 + 0x38), lVar24 != 0)) {
            if (*unaff_x20 < *(uint *)(lVar24 + 0x18)) {
              lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
              *(undefined4 *)((long)unaff_x19 + 0x644) = *(undefined4 *)(lVar24 + 0x2c);
              *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar24 + 0x58);
              unaff_x19[0x20] = *(long *)(lVar24 + 0x38);
              thunk_FUN_01b4f09c(unaff_x21);
              goto LAB_036a9064;
            }
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
LAB_036acbd8:
        fVar58 = (float)param_3;
        if (((char)unaff_x19[0x47] != '\0') &&
           (fVar58 = DAT_00b552b8,
           DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
          fVar58 = *(float *)((long)unaff_x19 + 0x1e4);
          fVar50 = *(float *)((long)unaff_x19 + 0x254);
          if ((fVar58 < fVar50) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
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
            if (fVar50 <= fVar58) {
              fVar58 = fVar50;
            }
            goto LAB_036acc94;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
        puVar8 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
          uVar17 = FUN_0303de64(in_stack_00000038,0);
          uVar18 = FUN_03052638(_fStack0000000000000040,0);
          uVar17 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar17,
                                *(undefined8 *)PTR_DAT_03d9c938,uVar18,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                              );
          }
          FUN_038f2acc(uVar17,0);
        }
        puVar9 = PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar16 == 3)))) {
          (**(code **)(*unaff_x19 + 0x948))();
          goto LAB_036acd60;
        }
        lVar24 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar24 = *(long *)puVar9;
        }
        plVar39 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
        lVar24 = **(long **)(lVar24 + 0xb8);
        if (lVar24 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
        iVar15 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
        if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x60), lVar24 == 0))
        goto LAB_036afadc;
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
        FUN_036fa40c(lVar24 + 0x20,0,0);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        iVar12 = (int)unaff_x19[0x4e];
        in_stack_00000108._4_4_ =
             **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        in_stack_000000f8 =
             *(long **)(*(float **)
                         (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
        lVar24 = unaff_x19[0xe3];
        _fStack00000000000000c8 = (ulong)in_stack_000000f8;
        fStack00000000000000d0 = in_stack_00000108._4_4_;
        if (iVar12 < 0x401) {
          if (iVar12 == 0x100) {
            if (lVar24 == 0) goto LAB_036afadc;
            if (*(uint *)(lVar24 + 0x18) < 2) goto LAB_036afbe8;
            uVar17 = *(undefined8 *)(lVar24 + 0x30);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x58), lVar27 == 0))
              goto LAB_036afadc;
              if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
              fVar58 = *(float *)(lVar27 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
            }
            else {
              fVar58 = *(float *)(unaff_x19 + 0x97);
            }
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
            fVar58 = (0.0 - fVar58) - fStack0000000000000020;
          }
          else if (iVar12 == 0x200) {
            if (lVar24 == 0) goto LAB_036afadc;
            if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
            fStack00000000000000d0 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
            uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar24 + 0x24) +
                              (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x58), lVar24 == 0))
              goto LAB_036afadc;
              if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
              lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
              fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
              fVar58 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) +
                        *(float *)(lVar24 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack00000000000000d0 = fStack000000000000002c + 0.0 + fStack00000000000000d0;
              fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar12 != 0x400) goto LAB_036ad288;
            if (lVar24 == 0) goto LAB_036afadc;
            if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
            uVar17 = *(undefined8 *)(lVar24 + 0x24);
            if ((int)unaff_x19[0x5c] == 5) {
              if ((*unaff_x28 == 0) || (lVar27 = *(long *)(*unaff_x28 + 0x58), lVar27 == 0))
              goto LAB_036afadc;
              if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
              in_stack_00001098 =
                   *(float *)(lVar27 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
            }
            fStack00000000000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
            fVar58 = fStack0000000000000024 + (0.0 - in_stack_00001098);
          }
LAB_036ad278:
          _fStack00000000000000c8 =
               CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar58);
        }
        else if (iVar12 == 0x800) {
          if (lVar24 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
          fVar58 = fStack000000000000002c + 0.0 +
                   (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          _fStack00000000000000c8 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar24 + 0x24) +
                        (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + 0.0);
          fStack00000000000000d0 = fVar58;
        }
        else {
          if (iVar12 == 0x1000) {
            if (lVar24 == 0) goto LAB_036afadc;
            if ((*(int *)(lVar24 + 0x18) != 1) && (*(int *)(lVar24 + 0x18) != 0)) {
              uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar24 + 0x24) +
                                (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
              fStack00000000000000d0 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
              fVar58 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                              *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
              goto LAB_036ad278;
            }
            goto LAB_036afbe8;
          }
          if (iVar12 == 0x2000) {
            if (lVar24 == 0) goto LAB_036afadc;
            if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0)) goto LAB_036afbe8;
            fVar58 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                           fStack0000000000000024) * 0.5;
            _fStack00000000000000c8 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          ((float)*(undefined8 *)(lVar24 + 0x24) +
                          (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5 + fVar58);
            fStack00000000000000d0 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
          }
        }
LAB_036ad288:
        if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
        uVar17 = FUN_03afb088(unaff_x19[0xe5],0);
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar8);
        }
        uVar20 = FUN_03922f24(uVar17,0,0);
        lVar24 = FUN_036dfed8();
        if (lVar24 == 0) goto LAB_036afadc;
        FUN_0392a7f0(lVar24,0);
        *(float *)(unaff_x19 + 0xe2) = fVar58;
        if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
        iVar12 = FUN_03afa68c(unaff_x19[0xe5],0);
        if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
        fVar50 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
        uVar66 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)PTR_DAT_03d9c888 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9c888);
        }
        if (DAT_03ff747c == '\0') {
          thunk_FUN_01ad9084(PTR_DAT_03d9c888);
          DAT_03ff747c = '\x01';
        }
        puVar8 = PTR_DAT_03d9c888;
        lVar24 = *(long *)PTR_DAT_03d9c888;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar24 = *(long *)puVar8;
        }
        puVar25 = *(undefined4 **)(lVar24 + 0xb8);
        uVar54 = (ulong)(uint)puVar25[1];
        uVar55 = (ulong)(uint)puVar25[2];
        uVar57 = (ulong)(uint)puVar25[3];
        FUN_036c214c(*puVar25,uVar54,uVar55,uVar57,&stack0x00001070,0x4000ffff,0);
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar24 = *unaff_x28;
        if (lVar24 == 0) goto LAB_036afadc;
        uVar47 = *unaff_x20;
        if ((int)uVar47 < 1) {
          fStack00000000000000e4 = 0.0;
          iVar15 = 0;
          goto LAB_036af524;
        }
        lVar24 = *(long *)(lVar24 + 0x38);
        fVar58 = ABS(fVar58);
        fVar67 = 1.0;
        if ((uVar20 & 1) == 0) {
          fVar67 = fVar58;
        }
        if (lVar24 == 0) goto LAB_036afadc;
        bVar11 = false;
        bVar10 = false;
        _fStack0000000000000138 = 0;
        bVar7 = false;
        fStack00000000000000e4 = 0.0;
        fStack000000000000002c = 0.0;
        in_stack_00000170._4_4_ = 0.0;
        in_stack_00000070._4_4_ = 0;
        lVar27 = 0x2e0;
        fVar60 = 0.0;
        fVar42 = 0.0;
        fStack00000000000000d4 = fStack00000000000000e8;
        fStack00000000000000d8 = fStack00000000000000ec;
        fStack0000000000000114 = *(float *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
        _bStack0000000000000078 = fStack00000000000000ec;
        fStack00000000000000a4 = fStack00000000000000ec;
        fStack00000000000000a8 = fStack00000000000000e8;
        fStack0000000000000110 = 0.0;
        in_stack_00000090._4_4_ = 0.0;
        in_stack_00000048._4_4_ = 0.0;
        fStack00000000000000b0 = 0.0;
        fStack0000000000000040 = 0.0;
        _bStack000000000000007c = in_stack_000000c0._4_4_;
        fStack0000000000000080 = fStack00000000000000e8;
        fStack00000000000000a0 = (float)in_stack_000000c0._4_4_;
        uVar16 = 1;
        uVar56 = 0;
        goto LAB_036ad4b0;
      }
    }
    goto LAB_036afadc;
  }
  goto LAB_036afbe8;
code_r0x036a8fdc:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar20 = FUN_036e7318();
  if (((uVar20 & 1) != 0) &&
     (in_stack_00001068 = in_stack_0000104c, uVar16 = in_stack_0000109c,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar47 = *unaff_x20;
  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar40 = (long)(int)uVar47;
  cVar23 = *(char *)(lVar24 + lVar40 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar27 = unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar47) {
    in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_0000109c == 0x2026) {
      *(long *)(lVar24 + lVar40 * unaff_x24 + 0x30) = unaff_x19[0xca];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 0;
      *(long *)(lVar24 + 0x38) = unaff_x19[0xcb];
      thunk_FUN_01b4f09c();
      if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50) = unaff_x19[0xcc];
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      uVar47 = *unaff_x20;
      if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
      bVar7 = true;
      *(int *)(lVar24 + (long)(int)uVar47 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar47 + 1);
    }
    else if (in_stack_0000109c == 3) {
      if ((*unaff_x21 == 0) || (lVar19 = FUN_036c835c(*unaff_x21,0), lVar19 == 0))
      goto LAB_036afadc;
      uVar17 = FUN_0262f3a4(lVar19,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
      *(undefined8 *)(lVar24 + lVar40 * unaff_x24 + 0x30) = uVar17;
      thunk_FUN_01b4f09c();
      uVar47 = *(uint *)((long)unaff_x19 + 0x494);
      bVar7 = true;
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
    }
    else {
      bVar7 = true;
    }
  }
  else {
    bVar7 = false;
  }
  if (((int)uVar47 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
    lVar24 = lVar24 + (long)(int)uVar47 * (long)iVar15;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined2 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *unaff_x20 = uVar47 + 1;
    unaff_x28 = in_stack_00000190;
    uVar16 = in_stack_0000109c;
    goto LAB_036a9250;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar47 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar47 >> 4 & 1) == 0) {
      if ((uVar47 >> 3 & 1) == 0) {
        fVar50 = 1.0;
        if ((uVar47 >> 5 & 1) != 0) {
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
            uVar47 = FUN_02fddc48(in_stack_0000109c,0);
            in_stack_0000109c = uVar47 & 0xffff;
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
        uVar20 = FUN_02fdd92c(in_stack_0000109c,0);
        fVar50 = 1.0;
        if ((uVar20 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar47 = FUN_02fdddc0(in_stack_0000109c,0);
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
      fVar50 = 1.0;
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
        fVar50 = 1.0;
        in_stack_0000109c = uVar47 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x644);
    if (iVar12 != 0) goto LAB_036a9280;
LAB_036a9668:
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_000000f8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x30);
    thunk_FUN_01b4f09c(in_stack_000000f8);
    unaff_x28 = in_stack_00000190;
    uVar16 = in_stack_0000109c;
    if (*in_stack_000000f8 == 0) goto LAB_036a9250;
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *unaff_x21 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38);
    thunk_FUN_01b4f09c(unaff_x21);
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *in_stack_00000168 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x50);
    thunk_FUN_01b4f09c();
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    uVar16 = *unaff_x20;
    uVar47 = *(uint *)(lVar24 + 0x18);
    if (uVar47 <= uVar16) goto LAB_036afbe8;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar24 + (long)(int)uVar16 * unaff_x24 + 0x58);
    if (bVar7) {
      lVar27 = unaff_x19[0x8f];
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      if ((*(int *)(lVar27 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
         (uVar16 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
      if (uVar47 <= uVar16 - 1) goto LAB_036afbe8;
      if (*unaff_x21 == 0) goto LAB_036afadc;
      fVar67 = *(float *)(lVar24 + (long)(int)(uVar16 - 1) * (long)iVar15 + 0x60);
      iVar12 = FUN_0396ac24(*unaff_x21 + 0x50,0);
      lVar24 = *unaff_x21;
    }
    else {
LAB_036a9778:
      if (*unaff_x21 == 0) goto LAB_036afadc;
      fVar67 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_0396ac24(*unaff_x21 + 0x50,0);
      lVar24 = unaff_x19[0x20];
    }
    if (lVar24 == 0) goto LAB_036afadc;
    fVar60 = (float)FUN_0396ac34(lVar24 + 0x50,0);
    fVar42 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar42 = 1.0;
    }
    fVar63 = 0.0;
    fVar44 = 0.0;
    if (!(bool)(bVar7 & in_stack_0000109c == 0x2026)) {
      if (*unaff_x21 == 0) goto LAB_036afadc;
      fVar44 = (float)FUN_0396ac54(*unaff_x21 + 0x50,0);
      if (*unaff_x21 == 0) goto LAB_036afadc;
      fVar63 = (float)FUN_0396ac94(*unaff_x21 + 0x50,0);
    }
    lVar24 = unaff_x19[0xc9];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
    fVar43 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar24 + 0x2c);
    fVar58 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
    if (*unaff_x21 == 0) goto LAB_036afadc;
    fVar64 = (float)FUN_0396ac84(*unaff_x21 + 0x50,0);
    if (*unaff_x21 == 0) goto LAB_036afadc;
    fVar61 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = (float)FUN_0396ac34(*unaff_x21 + 0x50,0);
    lVar24 = unaff_x19[0x6d];
    if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar27 + 0x2c) = 0;
    fVar42 = ((fVar50 * fVar67) / (float)iVar12) * fVar60 * fVar42;
    fVar58 = fVar42 * fVar43 * fVar45 * fVar58;
    *(float *)(lVar27 + 0x160) = fVar58;
    uVar47 = *(uint *)(unaff_x19 + 0x24);
    fVar46 = fVar42 * fVar64 * fVar61 * fVar46;
    fStack000000000000012c = fVar63;
    if (uVar47 == 0) {
      in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar27 = unaff_x19[0xe1];
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar47) goto LAB_036afbe8;
      lVar27 = *(long *)(lVar27 + (long)(int)uVar47 * 8 + 0x20);
      if (lVar27 == 0) goto LAB_036afadc;
      in_stack_00000170._4_4_ = *(float *)(lVar27 + 0x10c);
    }
FUN_036a9b34:
    unaff_x29 = &stack0x00000fc0;
    fVar67 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar67 = fVar58;
    }
  }
  else {
    fVar50 = 1.0;
    if (iVar12 == 0) goto LAB_036a9668;
LAB_036a9280:
    if (iVar12 == 1) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *in_stack_000000b8 = *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x40);
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(undefined4 *)((long)unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x48);
      if ((unaff_x19[0xd3] == 0) || (lVar24 = FUN_036fe7c0(unaff_x19[0xd3],0), lVar24 == 0))
      goto LAB_036afadc;
      lVar24 = FUN_02b59714(lVar24,*(undefined4 *)((long)unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      puVar8 = PTR_DAT_03d9c920;
      if (lVar24 == 0) {
        unaff_x29 = &stack0x00000fc0;
        unaff_x28 = in_stack_00000190;
        uVar16 = in_stack_0000109c;
        goto LAB_036a9250;
      }
      if (in_stack_0000109c == 0x3c) {
        in_stack_0000109c = *(int *)((long)unaff_x19 + 0x6a4) + 0xe000;
      }
      else {
        lVar40 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar40 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar40 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1bc) = *(undefined4 *)(*(long *)(lVar40 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
      if (*unaff_x21 == 0) goto LAB_036afadc;
      memmove(&stack0x00000fe0,(void *)(*unaff_x21 + 0x50),0x60);
      fVar42 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar67 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar67 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar67 = (fVar58 / (float)iVar12) * fVar42 * fVar67;
      iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar58 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*unaff_x21 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_0396ac34(*unaff_x21 + 0x50,0);
        fVar42 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar42 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar63 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(lVar24 + 0x20),0);
        fVar43 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
        fVar64 = *(float *)(lVar24 + 0x2c);
        fVar45 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_0396ac54(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar61 = (float)FUN_0396ac84(*unaff_x21 + 0x50,0);
        if (*unaff_x21 == 0) goto LAB_036afadc;
        fVar48 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_0396ac34(*unaff_x21 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar46 = fVar67 * fVar61 * fVar48 * fVar46;
        fVar42 = (fVar58 / (float)iVar12) * fVar60 * fVar42;
        fVar58 = fVar42 * (fVar63 / fVar43) * fVar64 * fVar45;
        fVar42 = fVar42 / fVar58;
        fVar44 = fVar42 * fVar44;
        fVar67 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar42 = fVar42 * fVar67;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar42 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar24 + 0x20) == 0) goto LAB_036afadc;
        fVar63 = *(float *)(lVar24 + 0x2c);
        fVar60 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar60 = 1.0;
        }
        fVar43 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar64 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar46 = fVar67 * fVar45 * fVar64 * fVar46;
        fVar58 = (fVar58 / (float)iVar12) * fVar42 * fVar60 * fVar63 * fVar43;
        fVar42 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = lVar24;
      thunk_FUN_01b4f09c(in_stack_000000f8,lVar24);
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar24 + 0x2c) = 1;
      *(float *)(lVar24 + 0x160) = fVar58;
      *(long *)(lVar24 + 0x40) = *in_stack_000000b8;
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *unaff_x21;
      thunk_FUN_01b4f09c();
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar40 = *(long *)(lVar24 + 0x38), lVar40 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      in_stack_00000170._4_4_ = 0.0;
      *(int *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar27;
      fStack000000000000012c = fVar42;
      goto FUN_036a9b34;
    }
    lVar24 = *in_stack_00000190;
    fVar67 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar67 = fVar58;
    }
    fVar46 = 0.0;
    if (lVar24 == 0) goto LAB_036afadc;
    fVar44 = 0.0;
    fStack000000000000012c = 0.0;
  }
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(short *)(lVar24 + 0x20) = (short)in_stack_0000109c;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3d];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4ec);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(int *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x168) = (int)unaff_x19[0x2b];
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar47 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  *(undefined8 *)(unaff_x29 + 0xe8) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0xe0) = in_stack_000001d0;
  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
  uVar18 = *(undefined8 *)(unaff_x29 + 0xe8);
  uVar17 = *(undefined8 *)(unaff_x29 + 0xe0);
  lVar24 = lVar24 + (long)(int)uVar47 * unaff_x24;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar24 + 0x184) = uVar18;
  *(undefined8 *)(lVar24 + 0x17c) = uVar17;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar24,0);
  puVar8 = StringLiteral_455;
  *(undefined8 *)(unaff_x29 + 0x98) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0x90) = in_stack_000001d0;
  if ((int)in_stack_0000109c < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    in_stack_00000070._4_4_ = FUN_02fdb080(in_stack_0000109c,0);
    in_stack_00000070._4_4_ = in_stack_00000070._4_4_ & 1;
  }
  else {
    in_stack_00000070._4_4_ = 0;
  }
  uVar47 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar47 << 0x20;
    fVar60 = 0.0;
    fVar42 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar56 = *unaff_x20;
    uVar16 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar56 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar56 + 1) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar56 + 1) * (long)iVar15 + 0x30);
      if ((((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0)) ||
         (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)) goto LAB_036afadc;
      uVar20 = FUN_02630bd0(lVar27,uVar16 | *(int *)(lVar24 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar66 = 0;
      if ((uVar20 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar47 << 0x20;
        fVar60 = 0.0;
        fVar42 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar66 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar42 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar60 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar47 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar47,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar56 = *unaff_x20;
    }
    else {
      uVar66 = 0;
      _fStack0000000000000138 = (ulong)uVar47 << 0x20;
      fVar60 = 0.0;
      fVar42 = 0.0;
    }
    if (0 < (int)uVar56) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= uVar56 - 1) goto LAB_036afbe8;
      lVar24 = *(long *)(lVar24 + (ulong)(uVar56 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar24 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar27 = *(long *)(*in_stack_00000178 + 0x128), lVar27 == 0 ||
          (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)))) goto LAB_036afadc;
      uVar20 = FUN_02630bd0(lVar27,*(uint *)(lVar24 + 0x28) | uVar16 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar20 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar51 = (undefined4)_fStack0000000000000138;
        fVar42 = (float)FUN_036d2d10(fVar42,fVar60,_fStack0000000000000138 & 0xffffffff,uVar66,
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
    fVar43 = *(float *)(unaff_x19 + 200);
    fVar63 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar43 = fVar43 - fVar67 * fVar63 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar43;
    if ((in_stack_0000109c == 0x200b) || (in_stack_00000070._4_4_ != 0)) {
      *(float *)(unaff_x19 + 200) = fVar43 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar43 = *(float *)(unaff_x19 + 0x56);
  fVar63 = 0.0;
  if (fVar43 != 0.0) {
    fVar63 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar45 = (float)FUN_0396af78(&stack0x00001050,0);
    fVar63 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (fVar43 * 0.5 - fVar67 * (fVar63 * 0.5 + fVar45));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + fVar63;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar24 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_0391f968(lVar24,0,0);
    fVar45 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar24 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar24 == 0) goto LAB_036afadc;
      uVar20 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar45 = 0.0;
      if ((uVar20 & 1) != 0) {
        lVar24 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar24 == 0) goto LAB_036afadc;
        fVar43 = (float)FUN_03900954(lVar24,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar64 = *(float *)(*in_stack_00000178 + 0x1b0);
        fVar45 = (float)FUN_03900954(*in_stack_00000168,
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar45 = fVar45 * fVar43 * fVar64 * 0.25;
        if (fVar43 < in_stack_00000170._4_4_ + fVar45) {
          in_stack_00000170._4_4_ = fVar43 - fVar45;
        }
      }
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fStack00000000000000e4 = *(float *)(*in_stack_00000178 + 0x1b4);
  }
  else {
    lVar24 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar20 = FUN_0391f968(lVar24,0,0);
    fStack00000000000000e4 = 0.0;
    if ((uVar20 & 1) != 0) {
      lVar24 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar24 == 0) goto LAB_036afadc;
      uVar20 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar20 & 1) != 0) {
        lVar24 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar24 == 0) goto LAB_036afadc;
        uVar20 = FUN_038ffa04(lVar24,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar20 & 1) != 0) {
          lVar24 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar24 == 0) goto LAB_036afadc;
          fVar43 = (float)FUN_03900954(lVar24,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
          fVar64 = *(float *)(*in_stack_00000178 + 0x1a8);
          fVar45 = (float)FUN_03900954(*in_stack_00000168,
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar45 = fVar45 * fVar43 * fVar64 * 0.25;
          if (fVar43 < in_stack_00000170._4_4_ + fVar45) {
            in_stack_00000170._4_4_ = fVar43 - fVar45;
          }
          goto LAB_036aa254;
        }
      }
    }
    fVar45 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar43 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar67 * (fVar42 + ((fVar43 - in_stack_00000170._4_4_) - fVar45));
  fVar42 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar64 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar46 + fVar67 * (fVar60 + in_stack_00000170._4_4_ + fVar42)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar42 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar61 = fVar64 - fVar67 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar42);
  fVar42 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar43 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar67 * (fVar45 + fVar45 + in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar42);
  fVar42 = fStack0000000000000124;
  fVar60 = fVar43;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar48 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar42 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar59 = fVar48 * fVar67 * (fVar45 + in_stack_00000170._4_4_ + fVar42);
    fVar42 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar60 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar64 = fVar64 + 0.0;
    fVar61 = fVar61 + 0.0;
    fVar53 = fStack0000000000000124 + fVar59;
    fVar48 = fVar48 * fVar67 * (((fVar42 - fVar60) - in_stack_00000170._4_4_) - fVar45);
    fVar60 = fVar43 + fVar48;
    fVar49 = (fVar59 - fVar48) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar48) - fVar49;
    fVar43 = (fVar43 + fVar59) - fVar49;
    fVar42 = fVar53 - fVar49;
    fVar60 = fVar60 - fVar49;
  }
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar48 = 0.0;
    fVar49 = 0.0;
    fVar59 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar53 = fVar61;
    fStack0000000000000114 = fVar64;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar65 = (fVar61 + fVar64) * 0.5;
    fVar62 = (fVar43 + fStack0000000000000124) * 0.5;
    fVar64 = fVar64 - fVar65;
    fStack0000000000000110 = 0.0;
    fVar52 = fVar64;
    fVar42 = (float)FUN_03911ddc(fVar42 - fVar62,_fStack0000000000000080,0);
    fVar42 = fVar62 + fVar42;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar61 = fVar61 - fVar65;
    fVar48 = 0.0;
    fVar53 = fVar61;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar62,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar62 + fStack0000000000000124;
    fVar48 = fVar48 + 0.0;
    fVar59 = 0.0;
    fVar43 = (float)FUN_03911ddc(fVar43 - fVar62,_fStack0000000000000080,0);
    fVar43 = fVar62 + fVar43;
    fVar64 = fVar65 + fVar64;
    fVar59 = fVar59 + 0.0;
    fVar49 = 0.0;
    fVar60 = (float)FUN_03911ddc(fVar60 - fVar62,_fStack0000000000000080,0);
    fVar60 = fVar62 + fVar60;
    fVar61 = fVar65 + fVar61;
    fVar49 = fVar49 + 0.0;
    fVar53 = fVar65 + fVar53;
    fStack0000000000000114 = fVar65 + fVar52;
  }
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar24 = *(long *)(*in_stack_00000190 + 0x38);
  unaff_d13 = (ulong)(uint)fVar67;
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar24 + 0x120) = fVar53;
  *(float *)(lVar24 + 0x124) = fVar48;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x110) = fVar42;
  *(float *)(lVar24 + 0x114) = fStack0000000000000114;
  *(float *)(lVar24 + 0x118) = fStack0000000000000110;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x128) = fVar43;
  *(float *)(lVar24 + 300) = fVar64;
  *(float *)(lVar24 + 0x130) = fVar59;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar24 = lVar24 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar24 + 0x134) = fVar60;
  *(float *)(lVar24 + 0x138) = fVar61;
  *(float *)(lVar24 + 0x13c) = fVar49;
  if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
  goto LAB_036afadc;
  uVar47 = *unaff_x20;
  unaff_x26 = (long)(int)uVar47;
  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar27 = lVar24 + unaff_x26 * unaff_x24;
  *(int *)(lVar27 + 0x140) = (int)unaff_x19[200];
  fVar60 = *(float *)(unaff_x19 + 0x9b);
  param_3 = (ulong)(uint)fVar60;
  fVar42 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar27 + 0x15c) = (fVar43 - fStack0000000000000124) / (fStack0000000000000114 - fVar53)
  ;
  *(float *)(lVar27 + 0x14c) = (fVar46 - fVar60) + fVar42;
  fVar44 = fVar44 * fVar67;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar44 = fVar44 / fVar50;
    fStack000000000000012c = (fStack000000000000012c * fVar67) / fVar50;
  }
  else {
    fStack000000000000012c = fStack000000000000012c * fVar67;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((in_stack_00000070._4_4_ == 0) || (uVar47 == unaff_w25)) {
    fStack000000000000012c = fVar42 + fStack000000000000012c;
    fVar44 = fVar42 + fVar44;
    fVar64 = fStack000000000000012c;
    fVar43 = fVar44;
    if (fVar42 != 0.0) {
      fVar43 = (fVar44 - fVar42) / *(float *)((long)unaff_x19 + 0x404);
      fVar64 = (fStack000000000000012c - fVar42) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar43 <= fVar44) {
        fVar43 = fVar44;
      }
      if (fStack000000000000012c <= fVar64) {
        fVar64 = fStack000000000000012c;
      }
    }
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    fVar42 = fVar43;
    if (fVar43 <= *(float *)(unaff_x19 + 0x99)) {
      fVar42 = *(float *)(unaff_x19 + 0x99);
    }
    fVar46 = fVar64;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar64) {
      fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar46;
    *(float *)(unaff_x19 + 0x99) = fVar42;
    *(float *)(lVar24 + 0x154) = fVar43;
    *(float *)(lVar24 + 0x158) = fVar64;
    *(float *)(lVar24 + 0x148) = fVar44 - fVar60;
    *(float *)(unaff_x19 + 0x98) = fVar44 - fVar60;
    *(float *)(lVar24 + 0x150) = fStack000000000000012c - fVar60;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack000000000000012c - fVar60;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar42;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar42 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar60 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      fVar50 = (fVar67 * fVar60) / fVar50;
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar42 <= fVar50) {
        fVar42 = fVar50;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar42;
    }
    if ((float)param_3 == 0.0) {
      fVar50 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= fVar44) {
        fVar50 = fVar44;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar50;
    }
  }
  else {
    fVar50 = *(float *)(unaff_x19 + 0x99);
    lVar24 = lVar24 + unaff_x26 * unaff_x24;
    *(float *)(lVar24 + 0x154) = fVar50;
    fVar42 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar50 = fVar50 - fVar60;
    *(float *)(lVar24 + 0x148) = fVar50;
    *(float *)(lVar24 + 0x158) = fVar42;
    *(float *)(unaff_x19 + 0x98) = fVar50;
    fVar42 = fVar42 - fVar60;
    *(float *)(lVar24 + 0x150) = fVar42;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar42;
  }
  lVar24 = *in_stack_00000190;
  if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_036afadc;
  uVar56 = *unaff_x20;
  if (*(uint *)(lVar27 + 0x18) <= uVar56) goto LAB_036afbe8;
  lVar27 = lVar27 + (long)(int)uVar56 * unaff_x24;
  *(undefined1 *)(lVar27 + 0x194) = 0;
  uVar30 = *(uint *)(unaff_x19 + 0x4f);
  unaff_x21 = in_stack_00000178;
  uVar16 = in_stack_0000109c;
  if ((in_stack_0000109c == 9) ||
     (((((in_stack_00000070._4_4_ == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b)
        ) && (in_stack_0000109c != 0xad)) ||
      (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar27 + 0x194) = 1;
    pfVar28 = _fStack00000000000000a8;
    pfVar31 = _fStack00000000000000b0;
    if (bVar7) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar24 + 0x60);
      pfVar28 = (float *)(lVar24 + 100);
    }
    fVar42 = *pfVar31;
    fVar60 = *pfVar28;
    fVar50 = *(float *)(unaff_x19 + 0x6c);
    fVar44 = *(float *)(unaff_x19 + 200);
    in_stack_00000108._4_4_ = (fStack00000000000000a4 - fVar42) - fVar60;
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
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar64 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_0000109c != 0xad) {
      fVar58 = fVar67;
    }
    fVar61 = (float)param_3;
    fVar46 = 0.0;
    if ((0.0 < fVar61) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar46 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    uVar56 = *unaff_x20;
    fVar46 = (*(float *)(unaff_x19 + 0x97) - (fVar64 - fVar61)) + fVar46;
    if (fStack00000000000000c8 < fVar46) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = uVar56;
      }
      puVar8 = PTR_DAT_03d9c920;
      uVar17 = DAT_00b92750;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar48 = *(float *)(unaff_x19 + 0x59);
        if (((fVar48 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar61)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar46) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000058._4_4_;
          if (fVar58 <= fVar48) {
            fVar58 = fVar48;
          }
          goto LAB_036ad184;
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar46 = *(float *)(unaff_x19 + 0x4a);
        param_3 = (ulong)(uint)fVar46;
        if ((fVar46 < fVar61) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar58 = (fVar61 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar58 <= DAT_00b55428) {
            fVar58 = DAT_00b55428;
          }
          fVar50 = (fVar61 - fVar58) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar61;
          fVar58 = DAT_00b556b4;
          if (fVar50 != INFINITY) {
            fVar58 = (float)(int)fVar50 / 20.0;
          }
          if (fVar58 <= fVar46) {
            fVar58 = fVar46;
          }
          goto LAB_036acc94;
        }
      }
      switch((int)unaff_x19[0x5c]) {
      case 1:
        lVar24 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar24 = *(long *)puVar8;
        }
        lVar27 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar27 + 0x1580) == 0) goto LAB_036acbbc;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar27 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar27 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x00000c40,&stack0x000010a0,0x378);
        break;
      default:
        goto switchD_036aaa24_caseD_2;
      case 3:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
LAB_036aabc0:
        in_stack_00001068 = FUN_036ecf20();
        goto LAB_036aad90;
      case 5:
        if ((uVar56 != 0) && (-1 < (int)in_stack_00001068)) {
          fVar58 = *(float *)(unaff_x19 + 0x99);
          unaff_x29 = &stack0x00000fc0;
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          in_stack_00001068 = FUN_036ecf20();
          if (fVar58 - fVar64 <= fStack00000000000000c8) {
            *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
            *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
            param_3 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            lVar24 = NEON_rev64(param_3,4);
            unaff_x19[0x99] = lVar24;
            *(undefined4 *)(unaff_x19 + 0x9b) = 0;
            *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
            *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
            unaff_x28 = in_stack_00000190;
            goto LAB_036a9250;
          }
          goto LAB_036aad90;
        }
        in_stack_00001068 = 0xffffffff;
        *unaff_x20 = 0;
        in_stack_00001088 = uVar17;
        goto LAB_036ab538;
      case 6:
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar20 = FUN_0391f968(lVar24,0,0);
        if ((uVar20 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_036afadc;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
        goto LAB_036aad90;
      }
LAB_036ab014:
      iVar12 = FUN_036ecf20();
      goto LAB_036ab020;
    }
switchD_036aaa24_caseD_2:
    puVar8 = PTR_DAT_03d9c920;
    fVar64 = 1.0 - fVar43;
    param_3 = (ulong)(uint)fVar64;
    fVar50 = ABS(fVar44) + fVar50 * fVar64 * fVar58;
    fVar58 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar58 = DAT_00b55374;
    }
    fVar44 = fVar58 * in_stack_00000108._4_4_;
    if (fVar44 < fVar50) {
      if (((char)unaff_x19[0x5b] == '\0') || (uVar56 == *(uint *)(unaff_x19 + 0x93))) {
        if (((char)unaff_x19[0x47] == '\0') ||
           ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
LAB_036aab40:
          iVar12 = (int)unaff_x19[0x5c];
          if (iVar12 == 1) {
            lVar24 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar24 = *(long *)puVar8;
            }
            lVar27 = *(long *)(lVar24 + 0xb8);
            if (*(int *)(lVar27 + 0x1580) == 0) goto LAB_036acbbc;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar27 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
            }
            FUN_0217900c(&stack0x000010a0,lVar27 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
            memcpy(&stack0x00000550,&stack0x000010a0,0x378);
            goto LAB_036ab014;
          }
          if (iVar12 == 6) {
            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            in_stack_00001068 = FUN_036ecf20();
            lVar24 = unaff_x19[0x5d];
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                );
            }
            uVar20 = FUN_0391f968(lVar24,0,0);
            if ((uVar20 & 1) != 0) {
              plVar39 = (long *)unaff_x19[0x5d];
              uVar17 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar39 == (long *)0x0) goto LAB_036afadc;
              (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
              lVar24 = unaff_x19[0x5d];
              if (lVar24 == 0) goto LAB_036afadc;
              *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
              FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
              plVar39 = (long *)unaff_x19[0x5d];
              if (plVar39 == (long *)0x0) goto LAB_036afadc;
              (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5f) = 1;
            }
            goto LAB_036ab13c;
          }
          if (iVar12 == 3) {
            if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            goto LAB_036aabc0;
          }
          goto LAB_036ab54c;
        }
        fVar44 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar43 < fVar44) {
          fVar67 = fVar50 / fVar64;
          if (fVar43 <= 0.0) {
            fVar67 = fVar50;
          }
          fVar43 = fVar43 + (fVar50 - fVar58 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar67;
          goto LAB_036afb6c;
        }
        fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
        param_3 = (ulong)(uint)fVar43;
        fVar44 = *(float *)(unaff_x19 + 0x4a);
        if (fVar43 <= fVar44) goto LAB_036aab40;
LAB_036afae0:
        fVar58 = (fVar43 - *(float *)(unaff_x19 + 0x48)) * 0.5;
        if (fVar58 <= DAT_00b55428) {
          fVar58 = DAT_00b55428;
        }
        *(float *)((long)unaff_x19 + 0x23c) = fVar43;
        fVar50 = (fVar43 - fVar58) * 20.0 + 0.5;
        fVar58 = DAT_00b556b4;
        if (fVar50 != INFINITY) {
          fVar58 = (float)(int)fVar50 / 20.0;
        }
        if (fVar58 <= fVar44) {
          fVar58 = fVar44;
        }
LAB_036acc94:
        *(float *)((long)unaff_x19 + 0x1e4) = fVar58;
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      in_stack_00001068 = FUN_036ecf20();
      if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
        lVar24 = *in_stack_00000190;
        if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
        fVar44 = *(float *)(unaff_x19 + 0x9b);
        fVar43 = 0.0;
        if ((0.0 < fVar44) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
          fVar43 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
        }
        fVar43 = in_stack_000000f0 * *(float *)(unaff_x19 + 0x57) +
                 *(float *)(lVar27 + (long)(int)*unaff_x20 * unaff_x24 + 0x154) +
                 (fVar43 - *(float *)((long)unaff_x19 + 0x4cc)) +
                 in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700));
      }
      else {
        lVar24 = unaff_x19[0x6d];
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
        if (lVar24 == 0) goto LAB_036afadc;
        fVar44 = *(float *)(unaff_x19 + 0x9b);
        fVar43 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_036afadc;
      uVar41 = *(uint *)((long)unaff_x19 + 0x494);
      if ((*(uint *)(lVar24 + 0x18) <= uVar41) ||
         (uVar6 = uVar41 - 1, *(uint *)(lVar24 + 0x18) <= uVar6)) goto LAB_036afbe8;
      param_3 = (ulong)(uint)(fVar43 + *(float *)(unaff_x19 + 0x97));
      fVar64 = (fVar43 + *(float *)(unaff_x19 + 0x97) + fVar44) -
               *(float *)(lVar24 + (long)(int)uVar41 * unaff_x24 + 0x158);
      if (((bStack000000000000007c & 1) == 0 &&
           *(short *)(lVar24 + (long)(int)uVar6 * (long)iVar15 + 0x20) == 0xad) &&
         ((fVar64 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
        in_stack_00001068 = in_stack_00001068 - 1;
        bStack000000000000007c = 0;
        *unaff_x20 = uVar6;
        in_stack_00001088 = CONCAT44(0x2d,uVar6);
        goto LAB_036ab538;
      }
      if (*(short *)(lVar24 + (long)(int)uVar41 * unaff_x24 + 0x20) == 0xad) {
        bStack000000000000007c = 1;
        goto LAB_036ab538;
      }
      if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
        fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar44 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar44 <= fVar43) || ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244))) {
          fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
          param_3 = (ulong)(uint)fVar43;
          fVar44 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar44 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_036afae0;
          goto LAB_036ab340;
        }
LAB_036afb7c:
        fVar67 = fVar50;
        if (0.0 < fVar43) {
          fVar67 = fVar50 / (1.0 - fVar43);
        }
        fVar43 = fVar43 + (fVar50 - fVar58 * (in_stack_00000108._4_4_ + DAT_00b5556c)) / fVar67;
LAB_036afb6c:
        if (fVar44 <= fVar43) {
          fVar43 = fVar44;
        }
        *(float *)((long)unaff_x19 + 0x2d4) = fVar43;
        return;
      }
LAB_036ab340:
      lVar24 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)puVar8;
      }
      iVar12 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
      if (((iVar12 != iStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack0000000000000078 ^ 1) & 1) == 0)) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x38), lVar24 == 0))
        goto LAB_036afadc;
        uVar41 = *unaff_x20 - 1;
        if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
        iStack0000000000000034 = iVar12;
        if (*(short *)(lVar24 + (long)(int)uVar41 * (long)iVar15 + 0x20) == 0xad) {
          in_stack_00001068 = in_stack_00001068 - 1;
          bStack000000000000007c = 0;
          *unaff_x20 = uVar41;
          in_stack_00001088 = CONCAT44(0x2d,uVar41);
          goto LAB_036ab538;
        }
      }
      if (fVar64 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
        param_3 = unaff_d13;
        FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000e4,
                     fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
        }
        fVar44 = fStack00000000000000c8;
        if ((char)unaff_x19[0x47] != '\0') {
          fVar44 = *(float *)(unaff_x19 + 0x59);
          if ((fVar44 < *(float *)((long)unaff_x19 + 700)) &&
             (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
            fVar58 = *(float *)((long)unaff_x19 + 700) +
                     ((in_stack_00000018._4_4_ - fVar64) / (float)((int)unaff_x19[0x95] + 1)) /
                     in_stack_00000058._4_4_;
            if (fVar58 <= fVar44) {
              fVar58 = fVar44;
            }
LAB_036ad184:
            *(float *)((long)unaff_x19 + 700) = fVar58;
            return;
          }
          fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
          fVar44 = *(float *)(unaff_x19 + 0x5a) / 100.0;
          if ((fVar43 < fVar44) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_036afb7c;
          fVar43 = *(float *)((long)unaff_x19 + 0x1e4);
          param_3 = (ulong)(uint)fVar43;
          fVar44 = *(float *)(unaff_x19 + 0x4a);
          if ((fVar44 < fVar43) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
          goto LAB_036afae0;
        }
        switch((int)unaff_x19[0x5c]) {
        case 0:
        case 2:
        case 4:
          goto switchD_036ab4e4_caseD_0;
        case 1:
          lVar24 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar24 = *(long *)PTR_DAT_03d9c920;
          }
          lVar27 = *(long *)(lVar24 + 0xb8);
          if (*(int *)(lVar27 + 0x1580) == 0) {
            bStack000000000000007c = 0;
LAB_036acbbc:
            in_stack_00001088 = DAT_00b92750;
            unaff_x29 = &stack0x00000fc0;
            unaff_x20[0] = 0;
            unaff_x20[1] = 0;
            unaff_x28 = in_stack_00000190;
            in_stack_00001068 = 0xffffffff;
            goto LAB_036a9250;
          }
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar27 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
          }
          FUN_0217900c(&stack0x000010a0,lVar27 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
          memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
          iVar12 = FUN_036ecf20();
          bStack000000000000007c = 0;
LAB_036ab020:
          unaff_x29 = &stack0x00000fc0;
          iVar13 = *(int *)((long)unaff_x19 + 0x494) + -1;
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          in_stack_00001088 = CONCAT44(0x2026,iVar13);
          in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
          unaff_x28 = in_stack_00000190;
          in_stack_00001068 = iVar12 - 1;
          goto LAB_036a9250;
        case 3:
          if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          in_stack_00001068 = FUN_036ecf20();
          bStack000000000000007c = 0;
LAB_036aad90:
          unaff_x29 = &stack0x00000fc0;
          in_stack_00001088 = CONCAT44(3,uVar56);
          unaff_x28 = in_stack_00000190;
          goto LAB_036a9250;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          param_3 = unaff_d13;
          FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                       *(undefined4 *)((long)unaff_x19 + 0x2fc),fStack00000000000000e4,
                       fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined4 *)(unaff_x19 + 0x9b) = 0;
          *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
          break;
        case 6:
          lVar24 = unaff_x19[0x5d];
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar20 = FUN_0391f968(lVar24,0,0);
          if ((uVar20 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5d];
            uVar17 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar39 == (long *)0x0) goto LAB_036afadc;
            (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
            lVar24 = unaff_x19[0x5d];
            if (lVar24 == 0) goto LAB_036afadc;
            *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
            FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
            plVar39 = (long *)unaff_x19[0x5d];
            if (plVar39 == (long *)0x0) goto LAB_036afadc;
            (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5f) = 1;
          }
          bStack000000000000007c = 0;
LAB_036ab13c:
          unaff_x29 = &stack0x00000fc0;
          in_stack_00001088 = CONCAT44(3,*unaff_x20);
          unaff_x28 = in_stack_00000190;
          goto LAB_036a9250;
        default:
          bStack000000000000007c = 0;
          goto LAB_036ab54c;
        }
      }
      bStack0000000000000078 = 1;
      bStack000000000000007c = 0;
      in_stack_00000068 = 1;
LAB_036ab538:
      unaff_x29 = &stack0x00000fc0;
      unaff_x28 = in_stack_00000190;
      goto LAB_036a9250;
    }
LAB_036ab54c:
    if (in_stack_0000109c != 0xad) {
      if (in_stack_0000109c != 9) {
        if (*(int *)((long)unaff_x19 + 0x644) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))(fVar44,fVar45);
        }
        else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
        }
        uVar56 = *unaff_x20;
        if ((in_stack_00000068 & 1) != 0) {
          *(uint *)(in_stack_00000088 + 0x1f0) = uVar56;
        }
        *(uint *)((long)unaff_x19 + 0x4a4) = uVar56;
        *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
        if ((unaff_x19[0x6d] == 0) || (lVar24 = *(long *)(unaff_x19[0x6d] + 0x50), lVar24 == 0))
        goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        in_stack_00000068 = 0;
        *(float *)(lVar24 + 0x60) = fVar42;
        *(float *)(lVar24 + 100) = fVar60;
        goto LAB_036ab6c0;
      }
      lVar24 = *in_stack_00000190;
      if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_036afadc;
      uVar56 = *unaff_x20;
      if (*(uint *)(lVar27 + 0x18) <= uVar56) goto LAB_036afbe8;
      *(undefined1 *)(lVar27 + (long)(int)uVar56 * unaff_x24 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar56;
      lVar27 = *(long *)(lVar24 + 0x50);
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
      goto LAB_036ab5c8;
    }
    if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    *(undefined1 *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x194) = 0;
  }
  else {
    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar50 = (float)param_3;
      fVar58 = 0.0;
      if ((0.0 < fVar50) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar58 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      param_3 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar50)) + fVar58)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = uVar56;
        }
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        lVar24 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar20 = FUN_0391f968(lVar24,0,0);
        if ((uVar20 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
          lVar24 = unaff_x19[0x5d];
          if (lVar24 == 0) goto LAB_036afadc;
          *(int *)(lVar24 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar24,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
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
        lVar24 = *in_stack_00000190;
        if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_036afadc;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
        *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
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
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x50), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
  }
LAB_036ab6c0:
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (!bVar7)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar58 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar42 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
    lVar24 = unaff_x19[0xca];
    fVar50 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar50 = 1.0;
    }
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
    fVar44 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar24 + 0x2c);
    fVar60 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
    fVar43 = *_fStack00000000000000b0;
    fVar60 = fVar44 * (fVar58 / (float)iVar12) * fVar42 * fVar50 * fVar45 * fVar60;
    fVar58 = *_fStack00000000000000a8;
    if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x38), lVar24 == 0))
      goto LAB_036afadc;
      uVar56 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar24 + 0x18) <= uVar56) goto LAB_036afbe8;
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar50 = *(float *)(lVar24 + (long)(int)uVar56 * (long)iVar15 + 0x60);
      iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar44 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
      lVar24 = unaff_x19[0xca];
      fVar42 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar42 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_036afadc;
      fVar45 = *(float *)((long)unaff_x19 + 0x404);
      fVar64 = *(float *)(lVar24 + 0x2c);
      fVar60 = (float)FUN_0396b17c(*(long *)(lVar24 + 0x20),0);
      if ((*in_stack_00000190 == 0) || (lVar24 = *(long *)(*in_stack_00000190 + 0x50), lVar24 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar43 = *(float *)(lVar24 + 0x60);
      fVar58 = *(float *)(lVar24 + 100);
      fVar60 = fVar45 * (fVar50 / (float)iVar12) * fVar44 * fVar42 * fVar64 * fVar60;
    }
    fVar44 = *(float *)(unaff_x19 + 0x9b);
    fVar50 = 0.0;
    fVar42 = 0.0;
    if ((0.0 < fVar44) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar42 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar64 = *(float *)(unaff_x19 + 0x97);
    fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar45 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar24 = *(long *)(unaff_x19[0xca] + 0x20), lVar24 == 0))
      goto LAB_036afadc;
      FUN_0396b140(&stack0x000010a0,lVar24,0);
      fVar50 = (float)FUN_0396af88(&stack0x00000fc0,0);
    }
    puVar8 = PTR_DAT_03d9c920;
    fVar61 = *(float *)(unaff_x19 + 0x6c);
    fVar58 = (fStack00000000000000a4 - fVar43) - fVar58;
    bVar10 = true;
    if ((fVar61 <= fVar58) && (bVar10 = false, !NAN(fVar61))) {
      bVar10 = fVar61 == -1.0;
    }
    if (!bVar10) {
      fVar58 = fVar61;
    }
    fVar43 = 1.0;
    if ((uVar30 & 0x18) != 0) {
      fVar43 = DAT_00b55374;
    }
    if (((fVar64 - (fVar46 - fVar44)) + fVar42 < fStack00000000000000c8) &&
       (ABS(fVar45) + fVar60 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar43 * fVar58)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
      uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
      memcpy(&stack0x000010a0,(void *)(lVar24 + 0x788),0x378);
      FUN_02178ef4(lVar24 + 0x11f0,&stack0x000010a0,uVar17);
    }
  }
  lVar24 = *in_stack_00000190;
  if (lVar24 == 0) goto LAB_036afadc;
  lVar27 = *(long *)(lVar24 + 0x38);
  unaff_d13 = (ulong)(uint)fVar67;
  if (lVar27 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  uVar56 = *(uint *)(unaff_x19 + 0x95);
  lVar27 = lVar27 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar27 + 100) = uVar56;
  *(int *)(lVar27 + 0x68) = (int)unaff_x19[0x96];
  if ((bVar7) ||
     ((in_stack_0000109c < 0xe && ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) != 0)))) {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar24 + 0x18) <= uVar56) goto LAB_036afbe8;
    if (*(int *)(lVar24 + (long)(int)uVar56 * 0x5c + 0x24) == 1) goto LAB_036aba84;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_036afadc;
LAB_036aba84:
    if (*(uint *)(lVar24 + 0x18) <= uVar56) goto LAB_036afbe8;
    *(int *)(lVar24 + (long)(int)uVar56 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if (in_stack_0000109c == 9) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar58 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar42 = *(float *)(unaff_x19 + 200);
    fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar58 = fVar67 * fVar58 * fVar50;
    fVar50 = fVar58 * (float)(int)(fVar42 / fVar58);
    param_3 = (ulong)(uint)fVar50;
    if (fVar50 <= fVar42) {
      fVar50 = fVar42 + fVar58;
    }
LAB_036abca4:
    *(float *)(unaff_x19 + 200) = fVar50;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar42 = 1.0;
      }
      else {
        fVar42 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
      }
      fVar50 = *(float *)(unaff_x19 + 200);
      fVar60 = (float)FUN_0396af88(&stack0x00001050,0);
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar50 = fVar50 + fVar58 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fVar67 * (fStack0000000000000138 + fVar42 * fVar60) +
                                 in_stack_000000f0 *
                                 (fStack00000000000000e4 +
                                 fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar50;
      goto joined_r0x036abbe8;
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fVar67 * fStack0000000000000138 +
             in_stack_000000f0 *
             (fStack00000000000000e4 +
             fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    param_3 = (ulong)(uint)fVar50;
    fVar50 = *(float *)(unaff_x19 + 200) - fVar50;
    *(float *)(unaff_x19 + 200) = fVar50;
    if ((in_stack_0000109c == 0x200b) || (in_stack_00000070._4_4_ != 0)) {
      fVar58 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar58;
      fVar50 = fVar50 - fVar58;
      goto LAB_036abca4;
    }
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar58 = *(float *)(unaff_x19 + 200);
    fVar50 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - fVar63) +
                      in_stack_000000f0 *
                      (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar50;
joined_r0x036abbe8:
    if ((in_stack_0000109c == 0x200b) ||
       (param_3 = (ulong)(uint)fVar58, in_stack_00000070._4_4_ != 0)) {
      fVar58 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      param_3 = (ulong)(uint)fVar58;
      fVar50 = fVar50 + fVar58;
      goto LAB_036abca4;
    }
  }
  lVar24 = *in_stack_00000190;
  if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_036afadc;
  uVar56 = *unaff_x20;
  uVar30 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar30 <= uVar56) goto LAB_036afbe8;
  *(float *)(lVar27 + (long)(int)uVar56 * unaff_x24 + 0x144) = fVar50;
  if ((int)in_stack_0000109c < 0xd) {
    if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
    if ((bool)(bVar7 & in_stack_0000109c == 0x2d)) goto LAB_036abd48;
  }
  else {
    if (in_stack_0000109c - 0x2028 < 2) goto LAB_036abd48;
    if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
    param_3 = 0;
    *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
  }
  if ((float)uVar56 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
LAB_036abd48:
  if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
    fVar58 = *(float *)(unaff_x19 + 0x99);
    fVar50 = *(float *)(unaff_x19 + 0x9a);
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar58 = fVar58 - fVar50;
    if (((fStack0000000000000060 < ABS(fVar58)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0')) &&
       (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
      FUN_036ed624(fVar58);
      *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar58;
      *(float *)(unaff_x19 + 0x9b) = fVar58 + *(float *)(unaff_x19 + 0x9b);
      puVar8 = PTR_DAT_03d9c920;
      lVar24 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar24 = *(long *)puVar8;
      }
      lVar27 = *(long *)(lVar24 + 0xb8);
      if (*(int *)(lVar27 + 0x7ac) == (int)unaff_x19[0x95]) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar27 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar27 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x000001d0,&stack0x000010a0,0x378);
        puVar8 = PTR_DAT_03d9c920;
        lVar24 = *(long *)PTR_DAT_03d9c920;
        memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x000001d0,0x378);
        thunk_FUN_01b4f09c(*(long *)(lVar24 + 0xb8) + 0x818,0);
        lVar24 = *(long *)(*(long *)puVar8 + 0xb8);
        *(float *)(lVar24 + 0x7bc) = fVar58 + *(float *)(lVar24 + 0x7bc);
        *(float *)(lVar24 + 0x800) = fVar58 + *(float *)(lVar24 + 0x800);
        uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
        memcpy(&stack0x000010a0,(void *)(lVar24 + 0x788),0x378);
        FUN_02178ef4(lVar24 + 0x11f0,&stack0x000010a0,uVar17);
      }
    }
  }
  unaff_x29 = &stack0x00000fc0;
  fVar42 = *(float *)(unaff_x19 + 0x9b);
  *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
  fVar50 = *(float *)((long)unaff_x19 + 0x4cc) - fVar42;
  fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
  if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
    fVar58 = fVar50;
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
  lVar24 = *in_stack_00000190;
  if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_036afadc;
  uVar56 = *(uint *)(unaff_x19 + 0x95);
  if (*(uint *)(lVar27 + 0x18) <= uVar56) goto LAB_036afbe8;
  lVar40 = unaff_x19[0x93];
  lVar19 = lVar27 + (long)(int)uVar56 * 0x5c;
  *(int *)(lVar19 + 0x34) = (int)lVar40;
  uVar30 = *(uint *)(unaff_x19 + 0x93);
  if ((int)lVar40 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
    uVar30 = *(uint *)((long)unaff_x19 + 0x49c);
  }
  *(uint *)((long)unaff_x19 + 0x49c) = uVar30;
  *(uint *)(lVar19 + 0x38) = uVar30;
  *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
  *(undefined4 *)(lVar19 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
  iVar12 = *(int *)((long)unaff_x19 + 0x49c);
  if ((int)uVar30 <= *(int *)((long)unaff_x19 + 0x4a4)) {
    iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
  }
  *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
  *(int *)(lVar19 + 0x40) = iVar12;
  *(int *)(lVar19 + 0x24) = (*(int *)(lVar19 + 0x3c) - *(int *)(lVar19 + 0x34)) + 1;
  *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= uVar30) goto LAB_036afbe8;
  uVar66 = *(undefined4 *)(lVar24 + (long)(int)uVar30 * (long)iVar15 + 0x11c);
  lVar27 = lVar27 + (long)(int)uVar56 * 0x5c;
  *(float *)(lVar27 + 0x70) = fVar50;
  *(undefined4 *)(lVar27 + 0x6c) = uVar66;
  lVar24 = *in_stack_00000190;
  if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x50), lVar27 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
  fVar60 = fVar60 - fVar42;
  param_3 = (ulong)(uint)fVar60;
  lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
  *(undefined4 *)(lVar27 + 0x74) =
       *(undefined4 *)(lVar24 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128);
  *(float *)(lVar27 + 0x78) = fVar60;
  lVar24 = *in_stack_00000190;
  if ((lVar24 == 0) || (lVar40 = *(long *)(lVar24 + 0x50), lVar40 == 0)) goto LAB_036afadc;
  lVar19 = (long)(int)*(uint *)(unaff_x19 + 0x95);
  if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
  lVar27 = lVar40 + lVar19 * 0x5c;
  *(float *)(lVar27 + 0x44) = *(float *)(lVar27 + 0x74) - fVar67 * in_stack_00000170._4_4_;
  *(float *)(lVar27 + 0x5c) = in_stack_00000108._4_4_;
  if (*(int *)(lVar27 + 0x24) == 1) {
    *(int *)(lVar40 + lVar19 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  if ((*in_stack_00000178 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0))
  goto LAB_036afadc;
  lVar34 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
  uVar30 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar30 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
  if ((*(char *)(lVar27 + lVar34 * unaff_x24 + 0x194) == '\0') &&
     (lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar30 <= *(uint *)(unaff_x19 + 0x94)))
  goto LAB_036afbe8;
  lVar40 = lVar40 + lVar19 * 0x5c;
  fVar67 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           (in_stack_000000f0 *
            (fStack00000000000000e4 +
            fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
           *(float *)((long)unaff_x19 + 0x2ac));
  fVar58 = -fVar67;
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar58 = fVar67;
  }
  *(float *)(lVar40 + 0x58) = *(float *)(lVar27 + lVar34 * unaff_x24 + 0x144) + fVar58;
  *(float *)(lVar40 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
  *(float *)(lVar40 + 0x54) = fVar50;
  *(float *)(lVar40 + 0x48) = fStack0000000000000064 + (fVar60 - fVar50);
  *(float *)(lVar40 + 0x4c) = fVar60;
  if ((int)in_stack_0000109c < 0x2d) {
    if (1 < in_stack_0000109c - 10) goto code_r0x036ac18c;
  }
  else if ((1 < in_stack_0000109c - 0x2028) && (in_stack_0000109c != 0x2d)) goto LAB_036ac2f4;
  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_036ed2b4();
  lVar24 = unaff_x19[0x6d];
  *(undefined4 *)((long)unaff_x19 + 0x4ac) = 0;
  iVar12 = (int)unaff_x19[0x95] + 1;
  *(int *)(unaff_x19 + 0x95) = iVar12;
  *(int *)(unaff_x19 + 0x93) = *(int *)((long)unaff_x19 + 0x494) + 1;
  if ((lVar24 == 0) || (*(long *)(lVar24 + 0x50) == 0)) goto LAB_036afadc;
  if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar12) {
    FUN_036ed7dc();
    lVar24 = unaff_x19[0x6d];
    if (lVar24 == 0) goto LAB_036afadc;
  }
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  fVar58 = *(float *)(lVar24 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
  if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
    if ((in_stack_0000109c == 0x2029) || (fVar50 = 0.0, in_stack_0000109c == 10)) {
      fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
    }
    uVar22 = 0;
    fVar50 = fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
             in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700)) +
             in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar50) +
             *(float *)(unaff_x19 + 0x9b);
  }
  else {
    if ((in_stack_0000109c == 0x2029) || (fVar50 = 0.0, in_stack_0000109c == 10)) {
      fVar50 = *(float *)((long)unaff_x19 + 0x2cc);
    }
    uVar22 = 1;
    fVar50 = *(float *)(unaff_x19 + 0x9b) +
             *(float *)(unaff_x19 + 0x58) +
             in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar50);
  }
  *(float *)(unaff_x19 + 0x9b) = fVar50;
  *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar22;
  puVar8 = PTR_DAT_03d9c920;
  lVar24 = *(long *)PTR_DAT_03d9c920;
  if (*(int *)(lVar24 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar24 = *(long *)puVar8;
  }
  uVar17 = *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x9a) = fVar58;
  param_3 = NEON_rev64(uVar17,4);
  unaff_x19[0x99] = param_3;
  *(float *)(unaff_x19 + 200) =
       *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
  FUN_036ed2b4();
  FUN_036ed2b4();
  bStack0000000000000078 = 1;
  *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
  in_stack_00000068 = 1;
  unaff_x28 = in_stack_00000190;
  goto LAB_036a9250;
code_r0x036ac18c:
  if (in_stack_0000109c == 3) {
    if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
    in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
    uVar16 = 3;
  }
LAB_036ac2f4:
  uVar56 = *unaff_x20;
  if (uVar30 <= uVar56) goto LAB_036afbe8;
  if (*(char *)(lVar27 + (long)(int)uVar56 * unaff_x24 + 0x194) != '\0') {
    lVar27 = lVar27 + (long)(int)uVar56 * unaff_x24;
    uVar54 = *(ulong *)(lVar27 + 0x11c);
    uVar20 = *(ulong *)(in_stack_00000088 + 0x230);
    *(ulong *)(in_stack_00000088 + 0x230) =
         uVar20 ^ (uVar20 ^ uVar54) &
                  ~CONCAT44(-(uint)((float)(uVar20 >> 0x20) < (float)(uVar54 >> 0x20)),
                            -(uint)((float)uVar20 < (float)uVar54));
    uVar20 = *(ulong *)(in_stack_00000088 + 0x238);
    param_3 = *(ulong *)(lVar27 + 0x128);
    *(ulong *)(in_stack_00000088 + 0x238) =
         uVar20 ^ (uVar20 ^ param_3) &
                  ~CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar20 >> 0x20)),
                            -(uint)((float)param_3 < (float)uVar20));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar16 || ((1 << (ulong)(uVar16 & 0x1f) & 0x2c00U) == 0)))) {
    lVar27 = *(long *)(lVar24 + 0x58);
    if (lVar27 == 0) goto LAB_036afadc;
    iVar12 = (int)unaff_x19[0x96] + 1;
    if (*(int *)(lVar27 + 0x18) < iVar12) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52e84((long *)(lVar24 + 0x58),iVar12,1,*(undefined8 *)PTR_DAT_03d9c890);
      lVar24 = *in_stack_00000190;
      if (lVar24 == 0) goto LAB_036afadc;
    }
    lVar27 = *(long *)(lVar24 + 0x58);
    if (lVar27 == 0) goto LAB_036afadc;
    uVar56 = *(uint *)(unaff_x19 + 0x96);
    lVar40 = (long)(int)uVar56;
    uVar16 = *(uint *)(lVar27 + 0x18);
    if (uVar16 <= uVar56) goto LAB_036afbe8;
    lVar19 = lVar27 + lVar40 * 0x14;
    fVar50 = *(float *)(lVar19 + 0x30);
    param_3 = (ulong)(uint)fVar50;
    *(undefined4 *)(lVar19 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar50 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar58 = fVar50;
    }
    *(float *)(lVar19 + 0x30) = fVar58;
    uVar30 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar30 == 0 && uVar56 == 0) {
      *(uint *)(lVar27 + (ulong)uVar56 * 0x14 + 0x20) = uVar30;
    }
    else {
      uVar41 = uVar30 - 1;
      if (0 < (int)uVar30) {
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar24 + 0x18) <= uVar41) goto LAB_036afbe8;
        if (uVar56 != *(uint *)(lVar24 + (ulong)uVar41 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar16 <= uVar56 - 1) goto LAB_036afbe8;
          *(uint *)(lVar27 + 0x20 + (long)(int)(uVar56 - 1) * 0x14 + 4) = uVar41;
          *(uint *)(lVar27 + 0x20 + lVar40 * 0x14) = uVar30;
          goto LAB_036ac564;
        }
      }
      if ((float)uVar30 == in_stack_00000090._4_4_) {
        *(float *)(lVar27 + lVar40 * 0x14 + 0x24) = in_stack_00000090._4_4_;
      }
    }
  }
LAB_036ac564:
  puVar8 = PTR_DAT_03d9c920;
  unaff_x29 = &stack0x00000fc0;
  if (((char)unaff_x19[0x5b] == '\0') &&
     ((unaff_x28 = in_stack_00000190, 6 < *(uint *)(unaff_x19 + 0x5c) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5c) & 0x1f) & 0x4aU) == 0)))) goto LAB_036ac920;
  if ((in_stack_00000070._4_4_ == 0) &&
     (((in_stack_0000109c != 0x2d && (in_stack_0000109c != 0x200b)) && (in_stack_0000109c != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2da) != '\0') {
      unaff_x28 = in_stack_00000190;
      if ((bStack0000000000000078 & 1) != 0) goto LAB_036ac6f8;
      goto LAB_036ac91c;
    }
LAB_036ac660:
    if (((((in_stack_0000109c - 0xac01 < 0x2bfe) || (in_stack_0000109c - 0x1101 < 0xfe)) ||
         (in_stack_0000109c - 0xa961 < 0x1e)) && (uVar20 = FUN_036fbce8(0), (uVar20 & 1) == 0)) ||
       ((((in_stack_0000109c - 0xff01 < 0xee || (in_stack_0000109c - 0xfe31 < 0x1e)) ||
         (in_stack_0000109c - 0x2e81 < 0x717e)) || (in_stack_0000109c - 0xf901 < 0x1fe)))) {
      lVar24 = FUN_036fbb7c(0);
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_036afadc;
      in_stack_00000048._4_4_ =
           (float)FUN_0254f914(*(long *)(lVar24 + 0x10),in_stack_0000109c,
                               *(undefined8 *)PTR_DAT_03d9c860);
      if ((int)*unaff_x20 < (int)in_stack_00000090._4_4_) {
        param_4 = FUN_036fbb7c(0);
        if (((param_4 == 0) || (*in_stack_00000190 == 0)) ||
           (param_1 = *(long *)(*in_stack_00000190 + 0x38), param_1 == 0)) goto LAB_036afadc;
        in_w9 = *unaff_x20;
        unaff_x28 = in_stack_00000190;
        goto code_r0x036ac774;
      }
      unaff_x28 = in_stack_00000190;
      if (((uint)in_stack_00000048._4_4_ & 1) != 0) {
LAB_036ac84c:
        if (uVar47 == unaff_w25 && ((bStack0000000000000078 ^ 0xff) & 1) == 0)
        goto code_r0x036ac860;
        goto LAB_036ac920;
      }
LAB_036ac8e4:
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      goto LAB_036ac91c;
    }
  }
  else if (*(char *)((long)unaff_x19 + 0x2da) != '\x01') {
    if (((0x28 < in_stack_0000109c - 0x2007) ||
        ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
       ((in_stack_0000109c != 0xa0 && (in_stack_0000109c != 0x2060)))) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      bStack0000000000000078 = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
      unaff_x28 = in_stack_00000190;
      goto LAB_036ac920;
    }
    goto LAB_036ac660;
  }
  unaff_x28 = in_stack_00000190;
  if ((bStack0000000000000078 & 1) != 0) {
    if (in_stack_00000070._4_4_ != 0) goto LAB_036ac868;
LAB_036ac6f8:
    unaff_x28 = in_stack_00000190;
    if ((bStack000000000000007c & 1) == 0 && in_stack_0000109c == 0xad) goto LAB_036ac868;
    goto LAB_036ac8a0;
  }
LAB_036ac91c:
  bStack0000000000000078 = 0;
  goto LAB_036ac920;
code_r0x036ac860:
  if (in_stack_00000070._4_4_ != 0) {
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
  goto LAB_036ac8d8;
LAB_036ad4b0:
  uVar47 = uVar16 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
  if ((*unaff_x28 == 0) || (lVar40 = *(long *)(*unaff_x28 + 0x50), lVar40 == 0)) goto LAB_036afadc;
  lVar34 = (long)(int)uVar47;
  lVar19 = lVar24 + lVar34 * 0x178;
  uVar30 = *(uint *)(lVar19 + 100);
  if (*(uint *)(lVar40 + 0x18) <= uVar30) goto LAB_036afbe8;
  lVar37 = (long)(int)uVar30;
  lVar40 = lVar40 + lVar37 * 0x5c;
  lVar32 = *(long *)(lVar19 + 0x38);
  uVar3 = *(ushort *)(lVar19 + 0x20);
  uVar6 = *(uint *)(lVar40 + 0x3c);
  uVar41 = *(uint *)(lVar40 + 0x68);
  iVar2 = *(int *)(lVar40 + 0x20);
  iVar13 = *(int *)(lVar40 + 0x28);
  iVar14 = *(int *)(lVar40 + 0x2c);
  uVar5 = *(uint *)(lVar40 + 0x40);
  lVar19 = (long)(int)uVar5;
  fVar43 = *(float *)(lVar40 + 0x4c);
  fVar64 = *(float *)(lVar40 + 0x54);
  fVar44 = *(float *)(lVar40 + 0x58);
  fVar48 = *(float *)(lVar40 + 0x5c);
  fVar46 = *(float *)(lVar40 + 0x60);
  fVar61 = *(float *)(lVar40 + 0x6c);
  fVar53 = *(float *)(lVar40 + 0x70);
  fVar63 = *(float *)(lVar40 + 0x74);
  fVar45 = *(float *)(lVar40 + 0x78);
  uVar36 = (uint)uVar3;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_00000108._4_4_ = fVar46 + 0.0;
      }
      else {
        in_stack_00000108._4_4_ = 0.0 - fVar44;
      }
      break;
    case 2:
LAB_036ad650:
      in_stack_00000108._4_4_ = (fVar46 + fVar48 * 0.5) - fVar44 * 0.5;
      break;
    default:
      goto switchD_036ad590_caseD_3;
    case 4:
      in_stack_00000108._4_4_ = (fVar48 + fVar46) - fVar44;
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
  else if (uVar41 == 0x10) {
switchD_036ad590_caseD_8:
    if (uVar3 < 0xad) {
      if ((uVar3 != 3) && (uVar3 != 10)) goto LAB_036ad5e4;
    }
    else if ((uVar3 != 0xad) && ((uVar3 != 0x200b && (uVar3 != 0x2060)))) {
LAB_036ad5e4:
      if (*(uint *)(lVar24 + 0x18) <= uVar6) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fde5f4(uVar4,0);
      if ((uVar20 & 1) == 0) {
        bVar1 = (int)uVar30 < (int)unaff_x19[0x95];
      }
      else {
        bVar1 = false;
      }
      if ((fVar44 <= fVar48) && (!bVar1 && uVar41 >> 4 == 0)) {
        in_stack_00000108._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar48 + fVar46;
        }
        goto LAB_036ad6c0;
      }
      if (((uVar16 == 1) || (uVar30 != uVar56)) || (uVar47 == *(uint *)((long)unaff_x19 + 0x324))) {
        in_stack_00000108._4_4_ = fVar46;
        if ((char)unaff_x19[0x1e] != '\0') {
          in_stack_00000108._4_4_ = fVar48 + fVar46;
        }
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        fStack000000000000002c = (float)FUN_02fdea78(uVar36,0);
        in_stack_000000f8 = (long *)0x0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1e];
        fVar46 = -fVar44;
        if (cVar23 != '\0') {
          fVar46 = fVar44;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar6) goto LAB_036afbe8;
        iVar14 = (int)*(char *)(lVar24 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar14 + -1;
        if (iVar14 < 1) {
          fVar44 = 1.0;
          iVar14 = 1;
        }
        else {
          fVar44 = *(float *)((long)unaff_x19 + 0x2dc);
        }
        if (uVar36 == 9) {
LAB_036af498:
          fVar44 = 1.0 - fVar44;
        }
        else {
          if (uVar36 != 0xa0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar20 = FUN_02fdea78(uVar36,0);
            cVar23 = (char)unaff_x19[0x1e];
            if ((uVar20 & 1) != 0) goto LAB_036af498;
          }
          iVar14 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar13;
        }
        fVar44 = ((fVar48 + fVar46) * fVar44) / (float)iVar14;
        if (cVar23 == '\0') {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ + fVar44;
          in_stack_000000f8 =
               (long *)CONCAT44((float)((ulong)in_stack_000000f8 >> 0x20) + 0.0,
                                SUB84(in_stack_000000f8,0) + 0.0);
        }
        else {
          in_stack_00000108._4_4_ = in_stack_00000108._4_4_ - fVar44;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar44 = fVar61 + fVar63;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  lVar40 = lVar24 + lVar34 * 0x178;
  fVar48 = fStack00000000000000d0 + in_stack_00000108._4_4_;
  fVar44 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar46 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar40 + 0x194) == '\0') goto LAB_036adf70;
  iVar13 = *(int *)(lVar24 + lVar34 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_036add84;
  fVar60 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar30,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar26 = lVar24 + lVar34 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar60 = 1.0;
    break;
  case 1:
    fVar45 = *(float *)(lVar24 + lVar34 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar26 = lVar24 + lVar34 * 0x178;
      fVar63 = (in_stack_00000108._4_4_ + fVar45) - *(float *)(in_stack_00000088 + 0x230);
      fVar45 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar26 = lVar24 + lVar34 * 0x178;
    fVar63 = fVar63 - fVar61;
    *(float *)(lVar26 + 0x84) = fVar60 + (fVar45 - fVar61) / fVar63;
    *(float *)(lVar26 + 0xac) = fVar60 + (*(float *)(lVar26 + 0x98) - fVar61) / fVar63;
    *(float *)(lVar26 + 0xd4) = fVar60 + (*(float *)(lVar26 + 0xc0) - fVar61) / fVar63;
    fVar60 = fVar60 + (*(float *)(lVar26 + 0xe8) - fVar61) / fVar63;
    break;
  case 2:
    lVar26 = lVar24 + lVar34 * 0x178;
    fVar45 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar63 = (in_stack_00000108._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar26 + 0x84) = fVar60 + fVar63 / fVar45;
    *(float *)(lVar26 + 0xac) =
         fVar60 + ((in_stack_00000108._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar60 + ((in_stack_00000108._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar60 = fVar60 + ((in_stack_00000108._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar26 = lVar24 + lVar34 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar24 + lVar34 * 0x178;
      fVar45 = fVar45 - fVar53;
      fVar63 = fVar60 + (*(float *)(lVar26 + 0x74) - fVar53) / fVar45;
      fVar45 = fVar60 + (*(float *)(lVar26 + 0x9c) - fVar53) / fVar45;
      *(float *)(lVar26 + 0x88) = fVar63;
      *(float *)(lVar26 + 0xb0) = fVar45;
      *(float *)(lVar26 + 0xd8) = fVar63;
      *(float *)(lVar26 + 0x100) = fVar45;
      break;
    case 2:
      lVar26 = lVar24 + lVar34 * 0x178;
      fVar63 = fVar60 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar26 + 0x88) = fVar63;
      fVar45 = *(float *)(unaff_x19 + 0x9c);
      fVar61 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar26 + 0xd8) = fVar63;
      fVar63 = fVar60 + (*(float *)(lVar26 + 0x9c) - fVar45) / (fVar61 - fVar45);
      *(float *)(lVar26 + 0xb0) = fVar63;
      *(float *)(lVar26 + 0x100) = fVar63;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar34 * 0x178;
    fVar63 = *(float *)(lVar26 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar63) * 0.5;
    fVar61 = fVar60 + *(float *)(lVar26 + 0x88) * fVar63 + fVar45;
    fVar60 = fVar60 + fVar45 + *(float *)(lVar26 + 0xb0) * fVar63;
    *(float *)(lVar26 + 0x84) = fVar61;
    *(float *)(lVar26 + 0xac) = fVar61;
    *(float *)(lVar26 + 0xd4) = fVar60;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar24 + lVar34 * 0x178 + 0xfc) = fVar60;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar34 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar47 < uVar41) {
      lVar26 = lVar24 + lVar34 * 0x178;
      fVar43 = fVar43 - fVar64;
      fVar60 = (*(float *)(lVar26 + 0x74) - fVar64) / fVar43;
      fVar43 = (*(float *)(lVar26 + 0x9c) - fVar64) / fVar43;
      *(float *)(lVar26 + 0x88) = fVar60;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar34 * 0x178;
    fVar60 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar26 + 0x88) = fVar60;
    fVar43 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar26 + 0xb0) = fVar43;
    *(float *)(lVar26 + 0xd8) = fVar43;
    *(float *)(lVar26 + 0x100) = fVar60;
    break;
  case 3:
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar26 = lVar24 + lVar34 * 0x178;
    fVar43 = *(float *)(lVar26 + 0x15c);
    fVar63 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar43) * 0.5;
    fVar60 = *(float *)(lVar26 + 0x84) / fVar43 + fVar63;
    fVar63 = fVar63 + *(float *)(lVar26 + 0xd4) / fVar43;
    *(float *)(lVar26 + 0x88) = fVar60;
    *(float *)(lVar26 + 0xb0) = fVar63;
    *(float *)(lVar26 + 0x100) = fVar60;
    *(float *)(lVar26 + 0xd8) = fVar63;
  }
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  lVar26 = lVar24 + lVar34 * 0x178;
  fVar60 = *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar34 * 0x178 + 400) & 1) != 0)) {
    fVar60 = -fVar60;
  }
  fVar63 = fVar58;
  if (((iVar12 == 2) || (fVar63 = fVar67, iVar12 == 1)) || (fVar63 = fVar58 / fVar50, iVar12 == 0))
  {
    fVar60 = fVar63 * fVar60;
  }
  lVar26 = lVar24 + lVar34 * 0x178;
  fVar43 = *(float *)(lVar26 + 0x88);
  fVar45 = *(float *)(lVar26 + 0x84);
  fVar63 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar63 = (float)(int)fVar45;
  }
  fVar61 = *(float *)(lVar26 + 0xd4);
  fVar53 = *(float *)(lVar26 + 0xd8);
  fVar64 = -2.1474836e+09;
  if (fVar43 != INFINITY) {
    fVar64 = (float)(int)fVar43;
  }
  uVar51 = FUN_036f2b00(fVar45 - fVar63,fVar43 - fVar64);
  *(undefined4 *)(lVar26 + 0x84) = uVar51;
  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
  fVar53 = fVar53 - fVar64;
  *(float *)(lVar26 + 0x88) = fVar60;
  uVar51 = FUN_036f2b00(fVar45 - fVar63,fVar53);
  *(undefined4 *)(lVar24 + lVar34 * 0x178 + 0xac) = uVar51;
  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
  fVar61 = fVar61 - fVar63;
  *(float *)(lVar24 + lVar34 * 0x178 + 0xb0) = fVar60;
  fVar63 = (float)FUN_036f2b00(fVar61,fVar53);
  *(float *)(lVar26 + 0xd4) = fVar63;
  if (*(uint *)(lVar24 + 0x18) <= uVar47) goto LAB_036afbe8;
  *(float *)(lVar26 + 0xd8) = fVar60;
  uVar51 = FUN_036f2b00(fVar61,fVar43 - fVar64);
  *(undefined4 *)(lVar24 + lVar34 * 0x178 + 0xfc) = uVar51;
  uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  *(float *)(lVar24 + lVar34 * 0x178 + 0x100) = fVar60;
LAB_036add84:
  if (((int)uVar47 < (int)unaff_x19[0x65]) &&
     ((int)fStack00000000000000e4 < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar41 <= uVar47) goto LAB_036afbe8;
      lVar40 = lVar24 + lVar34 * 0x178;
      *(ulong *)(lVar40 + 0x70) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar40 + 0x70));
      *(float *)(lVar40 + 0x78) = fVar46 + *(float *)(lVar40 + 0x78);
      *(ulong *)(lVar40 + 0x98) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0x98) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar40 + 0x98));
      *(float *)(lVar40 + 0xa0) = fVar46 + *(float *)(lVar40 + 0xa0);
      *(ulong *)(lVar40 + 0xc0) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0xc0) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar40 + 0xc0));
      *(float *)(lVar40 + 200) = fVar46 + *(float *)(lVar40 + 200);
      *(ulong *)(lVar40 + 0xe8) =
           CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0xe8) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar40 + 0xe8));
      *(float *)(lVar40 + 0xf0) = fVar46 + *(float *)(lVar40 + 0xf0);
      goto LAB_036adf28;
    }
    if (((int)uVar30 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar47 < uVar41) {
        if (*(uint *)(lVar24 + lVar34 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar40 = lVar24 + lVar34 * 0x178;
          *(ulong *)(lVar40 + 0x70) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar40 + 0x70));
          *(float *)(lVar40 + 0x78) = fVar46 + *(float *)(lVar40 + 0x78);
          *(ulong *)(lVar40 + 0x98) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0x98) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar40 + 0x98));
          *(float *)(lVar40 + 0xa0) = fVar46 + *(float *)(lVar40 + 0xa0);
          *(ulong *)(lVar40 + 0xc0) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0xc0) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar40 + 0xc0));
          *(float *)(lVar40 + 200) = fVar46 + *(float *)(lVar40 + 200);
          *(ulong *)(lVar40 + 0xe8) =
               CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0xe8) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar40 + 0xe8));
          *(float *)(lVar40 + 0xf0) = fVar46 + *(float *)(lVar40 + 0xf0);
          goto LAB_036adf28;
        }
        goto LAB_036ade64;
      }
      goto LAB_036afbe8;
    }
  }
LAB_036ade64:
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  if (DAT_03fed257 == '\0') {
    thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
    DAT_03fed257 = '\x01';
    uVar41 = *(uint *)(lVar24 + 0x18);
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar51 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar26 = lVar24 + lVar34 * 0x178;
  *(undefined8 *)(lVar26 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar51;
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar26 = lVar24 + lVar34 * 0x178;
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar51;
  uVar51 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar51;
  *(undefined1 *)(lVar40 + 0x194) = 0;
LAB_036adf28:
  if (iVar13 == 0) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_036adf54:
    (*pcVar29)();
  }
  else if (iVar13 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_036adf54;
  }
LAB_036adf70:
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar40 = lVar40 + lVar34 * 0x178;
  uVar17 = *(undefined8 *)(lVar40 + 0x11c);
  *(undefined8 *)(lVar40 + 0x11c) =
       CONCAT44(fVar44 + (float)((ulong)uVar17 >> 0x20),fVar48 + (float)uVar17);
  *(float *)(lVar40 + 0x124) = fVar46 + *(float *)(lVar40 + 0x124);
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar40 = lVar40 + lVar34 * 0x178;
  *(ulong *)(lVar40 + 0x110) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0x110) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar40 + 0x110));
  *(float *)(lVar40 + 0x118) = fVar46 + *(float *)(lVar40 + 0x118);
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar40 = lVar40 + lVar34 * 0x178;
  *(ulong *)(lVar40 + 0x128) =
       CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar40 + 0x128) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar40 + 0x128));
  *(float *)(lVar40 + 0x130) = fVar46 + *(float *)(lVar40 + 0x130);
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar40 = lVar40 + lVar34 * 0x178;
  *(float *)(lVar40 + 0x134) = fVar48 + *(float *)(lVar40 + 0x134);
  *(ulong *)(lVar40 + 0x138) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar40 + 0x138) >> 0x20),
                fVar44 + (float)*(undefined8 *)(lVar40 + 0x138));
  lVar40 = *in_stack_00000190;
  if ((lVar40 == 0) || (lVar26 = *(long *)(lVar40 + 0x38), lVar26 == 0)) goto LAB_036afadc;
  uVar41 = *(uint *)(lVar26 + 0x18);
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  lVar33 = lVar26 + lVar34 * 0x178;
  uVar54 = CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 0x140) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar33 + 0x140));
  fVar63 = fVar44 + *(float *)(lVar33 + 0x150);
  uVar55 = (ulong)(uint)fVar63;
  uVar57 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar33 + 0x148) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar33 + 0x148));
  *(float *)(lVar33 + 0x150) = fVar63;
  *(ulong *)(lVar33 + 0x140) = uVar54;
  *(ulong *)(lVar33 + 0x148) = uVar57;
  if (uVar30 == uVar56) {
    uVar56 = *unaff_x20 - 1;
    if (uVar47 == uVar56) goto LAB_036ae17c;
  }
  else {
    lVar40 = *(long *)(lVar40 + 0x50);
    if (lVar40 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar40 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar33 = (long)(int)uVar56;
    lVar35 = lVar40 + lVar33 * 0x5c;
    uVar57 = (ulong)(uint)*(float *)(lVar35 + 0x58);
    fVar63 = fVar44 + *(float *)(lVar35 + 0x54);
    uVar54 = (ulong)(uint)fVar63;
    fVar43 = fVar48 + *(float *)(lVar35 + 0x58);
    uVar55 = (ulong)(uint)fVar43;
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar44 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar63;
    *(float *)(lVar35 + 0x58) = fVar43;
    if (uVar41 <= *(uint *)(lVar35 + 0x34)) goto LAB_036afbe8;
    uVar51 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar40 = lVar40 + lVar33 * 0x5c;
    *(float *)(lVar40 + 0x70) = fVar63;
    *(undefined4 *)(lVar40 + 0x6c) = uVar51;
    lVar40 = *in_stack_00000190;
    if ((lVar40 == 0) || (lVar26 = *(long *)(lVar40 + 0x50), lVar26 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar40 = *(long *)(lVar40 + 0x38);
    if (lVar40 == 0) goto LAB_036afadc;
    uVar56 = *(uint *)(lVar26 + lVar33 * 0x5c + 0x40);
    if (*(uint *)(lVar40 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar26 = lVar26 + lVar33 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar56 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar56 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar47 == uVar56) {
      lVar40 = *in_stack_00000190;
      if ((lVar40 == 0) || (lVar26 = *(long *)(lVar40 + 0x50), lVar26 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
      lVar33 = lVar26 + lVar37 * 0x5c;
      uVar57 = (ulong)(uint)*(float *)(lVar33 + 0x58);
      uVar54 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar33 + 0x4c));
      fVar63 = fVar44 + *(float *)(lVar33 + 0x54);
      fVar48 = fVar48 + *(float *)(lVar33 + 0x58);
      uVar55 = (ulong)(uint)fVar48;
      *(ulong *)(lVar33 + 0x4c) = uVar54;
      *(float *)(lVar33 + 0x54) = fVar63;
      *(float *)(lVar33 + 0x58) = fVar48;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(lVar33 + 0x34)) goto LAB_036afbe8;
      uVar51 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar63;
      *(undefined4 *)(lVar26 + 0x6c) = uVar51;
      lVar40 = *in_stack_00000190;
      if ((lVar40 == 0) || (lVar26 = *(long *)(lVar40 + 0x50), lVar26 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_036afadc;
      uVar56 = *(uint *)(lVar26 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar40 + 0x18) <= uVar56) goto LAB_036afbe8;
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar56 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar20 = FUN_02fddb80(uVar36,0);
  if (((((uVar20 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
    if (bVar10) {
      if (((uVar16 != 1) && ((int)uVar47 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar47 < (int)*unaff_x20 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar24 + lVar27 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fddb80(uVar4,0);
        if ((uVar20 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar24 + lVar27 + -0x148);
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
      if (uVar16 != 1) {
LAB_036aeea4:
        bVar10 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fddab4(uVar36,0);
      if ((uVar20 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdb080(uVar36,0);
        if (((uVar36 != 0x200b) && ((uVar20 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar47 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fddb80(uVar36,0);
      iVar13 = (int)fStack0000000000000138;
      if ((uVar20 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar13 = uVar16 - 2;
    }
    lVar40 = *in_stack_00000190;
    if (lVar40 == 0) goto LAB_036afadc;
    lVar26 = *(long *)(lVar40 + 0x40);
    if (lVar26 == 0) goto LAB_036afadc;
    uVar56 = *(uint *)(lVar40 + 0x24);
    iVar14 = *(int *)(lVar26 + 0x18);
    if (iVar14 < (int)(uVar56 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar40 + 0x40),iVar14 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar40 = *in_stack_00000190;
      if (lVar40 == 0) goto LAB_036afadc;
    }
    lVar40 = *(long *)(lVar40 + 0x40);
    if (lVar40 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar40 + 0x18) <= uVar56) goto LAB_036afbe8;
    lVar40 = lVar40 + (long)(int)uVar56 * 0x18;
    *(long **)(lVar40 + 0x20) = unaff_x19;
    *(float *)(lVar40 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar40 + 0x2c) = iVar13;
    *(int *)(lVar40 + 0x30) = (iVar13 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar40 = unaff_x19[0x6d];
    if (lVar40 == 0) goto LAB_036afadc;
    lVar26 = *(long *)(lVar40 + 0x50);
    *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
    lVar26 = lVar26 + lVar37 * 0x5c;
    bVar10 = false;
    fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      in_stack_00000170._4_4_ = (float)uVar47;
    }
    if (uVar47 == *unaff_x20 - 1) {
      lVar40 = *in_stack_00000190;
      if (lVar40 == 0) goto LAB_036afadc;
      lVar26 = *(long *)(lVar40 + 0x40);
      if (lVar26 == 0) goto LAB_036afadc;
      uVar56 = *(uint *)(lVar40 + 0x24);
      iVar13 = *(int *)(lVar26 + 0x18);
      if (iVar13 < (int)(uVar56 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar40 + 0x40),iVar13 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar40 = *in_stack_00000190;
        if (lVar40 == 0) goto LAB_036afadc;
      }
      lVar40 = *(long *)(lVar40 + 0x40);
      if (lVar40 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar56) goto LAB_036afbe8;
      lVar40 = lVar40 + (long)(int)uVar56 * 0x18;
      *(long **)(lVar40 + 0x20) = unaff_x19;
      *(float *)(lVar40 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar40 + 0x2c) = uVar47;
      *(uint *)(lVar40 + 0x30) = uVar16 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar40 = unaff_x19[0x6d];
      if (lVar40 == 0) goto LAB_036afadc;
      lVar26 = *(long *)(lVar40 + 0x50);
      *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar26 + 0x18) <= uVar30) goto LAB_036afbe8;
      lVar26 = lVar26 + lVar37 * 0x5c;
      fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar10 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  uVar56 = *(uint *)(lVar40 + 0x18);
  if (uVar56 <= uVar47) goto LAB_036afbe8;
  if ((*(byte *)(lVar40 + lVar34 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_036ae3d8:
      if (uVar56 <= uVar16 - 2) goto LAB_036afbe8;
      lVar37 = *unaff_x19;
      uVar56 = *(uint *)(lVar40 + lVar27 + -0x330);
      uVar51 = *(undefined4 *)(lVar40 + lVar27 + -0x2f8);
LAB_036ae924:
      pcVar29 = *(code **)(lVar37 + 0x908);
LAB_036ae92c:
      uVar57 = (ulong)uVar56;
      uVar54 = (ulong)(uint)_bStack0000000000000078;
      uVar55 = (ulong)_bStack000000000000007c;
      (*pcVar29)(fStack0000000000000080,uVar54,uVar55,uVar57,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar51);
      puVar8 = PTR_DAT_03d9c920;
      lVar40 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar40 = *(long *)puVar8;
      }
LAB_036ae980:
      bVar11 = false;
      fVar42 = 0.0;
      fStack0000000000000114 = *(float *)(*(long *)(lVar40 + 0xb8) + 0x15a8);
      fStack0000000000000110 = 0.0;
    }
    else {
LAB_036ae88c:
      bVar11 = false;
    }
  }
  else {
    lVar40 = lVar40 + lVar34 * 0x178;
    iVar13 = *(int *)(lVar40 + 0x68);
    *(int *)(lVar40 + 0x16c) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar47) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar13 + 1 != (int)unaff_x19[0x67])))) {
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
    uVar20 = FUN_02fdb080(uVar36,0);
    if ((uVar36 != 0x200b) && ((uVar20 & 1) == 0)) {
      lVar40 = *in_stack_00000190;
      if ((lVar40 == 0) || (lVar37 = *(long *)(lVar40 + 0x38), lVar37 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar47) goto LAB_036afbe8;
      fVar63 = *(float *)(lVar37 + lVar34 * 0x178 + 0x160);
      if (fVar42 <= fVar63) {
        fVar42 = fVar63;
      }
      if (fStack0000000000000110 <= ABS(fVar60)) {
        fStack0000000000000110 = ABS(fVar60);
      }
      if (iVar13 != in_stack_00000070._4_4_) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar40 = *in_stack_00000190;
          if (lVar40 == 0) goto LAB_036afadc;
          lVar37 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        fStack0000000000000114 = *(float *)(lVar37 + 0x15a8);
      }
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
      if (unaff_x19[0x1f] == 0) goto LAB_036afadc;
      fVar43 = *(float *)(lVar40 + lVar34 * 0x178 + 0x14c);
      fVar63 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar43 = fVar43 + fVar42 * fVar63;
      if (fVar43 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar43;
      }
      uVar54 = (ulong)(uint)fStack0000000000000114;
      in_stack_00000070._4_4_ = iVar13;
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar47)) ||
         ((bool)(bVar1 ^ 1))) goto LAB_036ae99c;
      if (uVar47 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar36,0);
        if ((uVar20 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
      lVar40 = lVar40 + lVar34 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar40 + 0x160);
      fStack0000000000000080 = *(float *)(lVar40 + 0x11c);
      uVar55 = (ulong)(uint)fStack0000000000000080;
      bVar11 = fVar42 != 0.0;
      fVar63 = in_stack_00000090._4_4_;
      if (bVar11) {
        fVar63 = fVar42;
      }
      fVar42 = fVar63;
      uVar66 = *(undefined4 *)(lVar40 + 0x168);
      _bStack000000000000007c = 0;
      fVar63 = fVar60;
      if (bVar11) {
        fVar63 = fStack0000000000000110;
      }
      uVar54 = (ulong)(uint)fVar63;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar63;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        if (uVar47 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar34 * 0x178;
          lVar37 = *unaff_x19;
          uVar56 = *(uint *)(lVar40 + 0x128);
          uVar51 = *(undefined4 *)(lVar40 + 0x160);
          goto LAB_036ae924;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if ((uVar47 == uVar6) || ((int)uVar5 <= (int)uVar47)) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fdb080(uVar36,0);
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        lVar37 = lVar34;
        uVar56 = uVar47;
        if (uVar36 == 0x200b || (uVar20 & 1) != 0) {
          lVar37 = lVar19;
          uVar56 = uVar5;
        }
        if (uVar56 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar37 * 0x178;
          uVar56 = *(uint *)(lVar40 + 0x128);
          uVar51 = *(undefined4 *)(lVar40 + 0x160);
          pcVar29 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        uVar56 = *(uint *)(lVar40 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar47 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar16) goto LAB_036afbe8;
      uVar20 = FUN_036c0e18(uVar66,*(undefined4 *)(lVar40 + lVar27),0);
      if ((uVar20 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0)) {
          if (uVar47 < *(uint *)(lVar40 + 0x18)) {
            lVar40 = lVar40 + lVar34 * 0x178;
            uVar57 = (ulong)*(uint *)(lVar40 + 0x128);
            uVar55 = (ulong)_bStack000000000000007c;
            uVar54 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar54,uVar55,uVar57,fStack0000000000000114,0,
                       in_stack_00000090._4_4_,*(undefined4 *)(lVar40 + 0x160));
            puVar8 = PTR_DAT_03d9c920;
            lVar40 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar40 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar40 = *(long *)puVar8;
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
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
  if (lVar32 == 0) goto LAB_036afadc;
  uVar56 = *(uint *)(lVar40 + lVar34 * 0x178 + 400);
  fVar63 = (float)FUN_0396ad04(lVar32 + 0x50,0);
  if ((uVar56 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar16 - 2) goto LAB_036afbe8;
      uVar56 = *(uint *)(lVar40 + lVar27 + -0x330);
      fVar44 = *(float *)(lVar40 + lVar27 + -0x30c);
      pcVar29 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar57 = (ulong)uVar56;
      uVar54 = (ulong)(uint)fStack00000000000000a4;
      uVar55 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar29)(fStack00000000000000a8,uVar54,uVar55,uVar57,
                 fStack00000000000000b0 * fVar63 + fVar44,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar40 = *in_stack_00000190;
    if ((lVar40 == 0) || (lVar37 = *(long *)(lVar40 + 0x38), lVar37 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar37 + 0x18) <= uVar47) goto LAB_036afbe8;
    *(int *)(lVar37 + lVar34 * 0x178 + 0x174) = iVar15;
    if ((((int)unaff_x19[0x65] < (int)uVar47) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar37 + lVar34 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar47)) ||
       ((_fStack0000000000000138 & 0x100000000) != 0 || !bVar1)) {
LAB_036aeb20:
      if ((_fStack0000000000000138 & 0x100000000) == 0) goto LAB_036aef80;
    }
    else {
      if (uVar47 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar36,0);
        if ((uVar20 & 1) != 0) goto LAB_036aeb20;
        lVar40 = *in_stack_00000190;
        if (lVar40 == 0) goto LAB_036afadc;
      }
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
      lVar40 = lVar40 + lVar34 * 0x178;
      in_stack_00000048._4_4_ = *(float *)(lVar40 + 0x60);
      fStack0000000000000040 = *(float *)(lVar40 + 0x14c);
      uVar54 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar40 + 0x11c);
      uVar55 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar40 + 0x160);
      fStack00000000000000a4 = fVar63 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar56 = *unaff_x20;
    if (uVar56 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        if (uVar47 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar34 * 0x178;
          lVar19 = *unaff_x19;
          uVar56 = *(uint *)(lVar40 + 0x128);
          fVar44 = *(float *)(lVar40 + 0x14c);
LAB_036aec8c:
          pcVar29 = *(code **)(lVar19 + 0x908);
          goto LAB_036aef4c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (uVar47 == uVar6) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar20 = FUN_02fdb080(uVar36,0);
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        uVar56 = *(uint *)(lVar40 + 0x18);
        if (uVar36 == 0x200b || (uVar20 & 1) != 0) {
          if (uVar56 <= uVar5) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar19 = lVar34;
          if (uVar56 <= uVar47) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar40 = lVar40 + lVar19 * 0x178;
        fVar44 = *(float *)(lVar40 + 0x14c);
        uVar56 = *(uint *)(lVar40 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar47 < (int)uVar56) {
      lVar40 = *in_stack_00000190;
      if ((lVar40 != 0) && (lVar37 = *(long *)(lVar40 + 0x38), lVar37 != 0)) {
        if (uVar16 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lVar27 + -0x108) == in_stack_00000048._4_4_) {
            fVar43 = *(float *)(lVar37 + lVar27 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar54 = (ulong)(uint)fStack0000000000000040;
            uVar20 = FUN_036c122c(fVar44 + fVar43,uVar54,0);
            if ((uVar20 & 1) != 0) {
              uVar56 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar40 = *in_stack_00000190;
            if (lVar40 == 0) goto LAB_036afadc;
          }
          lVar40 = *(long *)(lVar40 + 0x38);
          if (lVar40 != 0) {
            uVar56 = *(uint *)(lVar40 + 0x18);
            if ((int)uVar47 <= (int)uVar5) goto LAB_036aef20;
            if (uVar5 < uVar56) goto LAB_036aef28;
            goto LAB_036afbe8;
          }
          goto LAB_036afadc;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
LAB_036aed7c:
    if ((int)uVar47 < (int)uVar56) {
      iVar13 = FUN_03922ce0(lVar32,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar16) goto LAB_036afbe8;
      lVar40 = *(long *)(lVar24 + lVar27 + -0x130);
      if (lVar40 == 0) goto LAB_036afadc;
      iVar14 = FUN_03922ce0(lVar40,0);
      if (iVar13 != iVar14) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        if (uVar16 - 2 < *(uint *)(lVar40 + 0x18)) {
          lVar19 = *unaff_x19;
          uVar56 = *(uint *)(lVar40 + lVar27 + -0x330);
          fVar44 = *(float *)(lVar40 + lVar27 + -0x30c);
          goto LAB_036aec8c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    _fStack0000000000000138 = CONCAT44(1,fStack0000000000000138);
  }
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  uVar56 = (uint)*(undefined8 *)(lVar40 + 0x18);
  if (uVar56 <= uVar47) goto LAB_036afbe8;
  if ((*(byte *)(lVar40 + lVar34 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      uVar54 = (ulong)(uint)fStack00000000000000ec;
      uVar57 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar54,uVar55,uVar57,fStack00000000000000d8,uVar55);
    }
LAB_036aefe8:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar47) || ((int)unaff_x19[0x66] < (int)uVar30)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar40 + lVar34 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar47)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar47 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar20 = FUN_02fdea78(uVar36,0);
        if ((uVar20 & 1) != 0) goto LAB_036aefe8;
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar19 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar19 = *(long *)puVar8;
      }
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      uVar56 = (uint)*(undefined8 *)(lVar40 + 0x18);
      if (uVar56 <= uVar47) goto LAB_036afbe8;
      lVar19 = *(long *)(lVar19 + 0xb8);
      lVar32 = lVar40 + lVar34 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar32 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar32 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar19 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar19 + 0x159c);
      in_stack_00001080 = *(float *)(lVar32 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar19 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar19 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar56 <= uVar47) goto LAB_036afbe8;
    lVar40 = lVar40 + lVar34 * 0x178;
    fVar63 = *(float *)(lVar40 + 0x128);
    fVar64 = *(float *)(lVar40 + 0x188);
    uVar18 = *(undefined8 *)(lVar40 + 0x17c);
    fVar61 = *(float *)(lVar40 + 0x184);
    uVar17 = *(undefined8 *)(lVar40 + 0x184);
    fVar46 = *(float *)(lVar40 + 0x18c);
    fVar44 = *(float *)(lVar40 + 0x11c);
    fVar43 = *(float *)(lVar40 + 0x148);
    fVar45 = *(float *)(lVar40 + 0x150);
    in_stack_00000198 = uVar18;
    fStack00000000000001a0 = fVar61;
    fStack00000000000001a4 = fVar64;
    in_stack_000001a8 = fVar46;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar20 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar40 = *(long *)PTR_DAT_03d9c888;
    if ((uVar20 & 1) == 0) {
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar40);
      }
      fVar63 = fVar63 + (float)in_stack_00001078;
      uVar55 = (ulong)(uint)fVar63;
      fVar44 = fVar44 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar43 = fVar43 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar57 = (ulong)(uint)fVar43;
      if (fVar44 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar44;
      }
      if (fVar45 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar45 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar63) {
        fStack00000000000000d4 = fVar63;
      }
      uVar54 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar43) {
        fStack00000000000000d8 = fVar43;
      }
    }
    else {
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar40);
      }
      fVar44 = (fVar44 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar57 = (ulong)(uint)fVar44;
      if (fVar45 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar45;
      }
      uVar54 = (ulong)(uint)fStack00000000000000ec;
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar43) {
        fStack00000000000000d8 = fVar43;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar54,uVar55,uVar57,fStack00000000000000d8,uVar55);
      fStack00000000000000ec = fVar45 - fVar46;
      fStack00000000000000d4 = fVar63 + fVar61;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar43 + fVar64;
      fStack00000000000000e8 = fVar44;
      in_stack_00001070 = uVar18;
      in_stack_00001078 = uVar17;
      in_stack_00001080 = fVar46;
    }
    if (((*unaff_x20 == 1) || (uVar47 == uVar6)) || (((int)uVar5 <= (int)uVar47 || (!bVar1)))) {
      uVar55 = (ulong)in_stack_000000c0._4_4_;
      uVar54 = (ulong)(uint)fStack00000000000000ec;
      uVar57 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar54,uVar55,uVar57,fStack00000000000000d8,uVar55);
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  uVar47 = *unaff_x20;
  lVar27 = lVar27 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar47 <= (int)uVar16;
  unaff_x28 = in_stack_00000190;
  uVar16 = uVar16 + 1;
  uVar56 = uVar30;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar24 = *in_stack_00000190;
  if (lVar24 != 0) {
    iVar15 = uVar30 + 1;
    plVar39 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar24 + 0x18) = uVar47;
    lVar27 = unaff_x19[0xd4];
    *(int *)(lVar24 + 0x2c) = iVar15;
    if ((int)uVar47 < 1 || fStack00000000000000e4 == 0.0) {
      fStack00000000000000e4 = 1.4013e-45;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar27;
    *(float *)(lVar24 + 0x24) = fStack00000000000000e4;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x96] + 1;
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
    lVar24 = unaff_x19[0xdf];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*unaff_x28,*(undefined8 *)(lVar24 + 0x28));
    }
    if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
    iVar15 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar15 != 0x19) {
      lVar24 = unaff_x19[0xe5];
      if (lVar24 == 0) goto LAB_036afadc;
      uVar47 = FUN_03afacb8(lVar24,0);
      FUN_03afacf4(lVar24,uVar47 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar24 = *(long *)(*unaff_x28 + 0x60), lVar24 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
      FUN_036fa678(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_03904fd4(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
LAB_036afbe8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_0390262c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
            if (unaff_x19[0x74] != 0) {
              FUN_03902830(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
                if (unaff_x19[0x74] != 0) {
                  FUN_039028dc(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6d] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0) goto LAB_036afbe8;
                    if (unaff_x19[0x74] != 0) {
                      FUN_03902a3c(unaff_x19[0x74],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_03904ddc(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_03af8c9c(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar17 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar47 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar24 = *unaff_x28;
                              if (lVar24 != 0) {
                                lVar40 = 0;
                                lVar27 = 0;
                                do {
                                  uVar20 = lVar27 + 1;
                                  if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar20)
                                  goto LAB_036acd60;
                                  lVar24 = *(long *)(lVar24 + 0x60);
                                  if (lVar24 == 0) break;
                                  if (*(int *)(*plVar39 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                  FUN_036fa544(lVar24 + lVar40 + 0x70,0);
                                  lVar24 = unaff_x19[0xe1];
                                  if (lVar24 == 0) break;
                                  if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                  uVar18 = *(undefined8 *)(lVar24 + lVar27 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar21 = FUN_03922f24(uVar18,0,0);
                                  if ((uVar21 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar24 = *(long *)(*unaff_x28 + 0x60), lVar24 == 0))
                                      break;
                                      if (*(int *)(*plVar39 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                      FUN_036fa678(lVar24 + lVar40 + 0x70,1,0);
                                    }
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_0390262c(lVar24,*(undefined8 *)(lVar19 + lVar40 + 0x80),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_03902830(lVar24,*(undefined8 *)(lVar19 + lVar40 + 0x98),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_039028dc(lVar24,*(undefined8 *)(lVar19 + lVar40 + 0xa0),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_03702ba4(lVar24,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar19 = *(long *)(*unaff_x28 + 0x60), lVar19 == 0)) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    if (lVar24 == 0) break;
                                    FUN_03902a3c(lVar24,*(undefined8 *)(lVar19 + lVar40 + 0xa8),0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_03702ba4(lVar24,0), lVar24 == 0)) break;
                                    FUN_03904ddc(lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if (lVar24 == 0) break;
                                    lVar24 = FUN_039add2c(lVar24,0);
                                    lVar19 = unaff_x19[0xe1];
                                    if (lVar19 == 0) break;
                                    if (*(uint *)(lVar19 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar19 = *(long *)(lVar19 + lVar27 * 8 + 0x28);
                                    if ((lVar19 == 0) ||
                                       (uVar18 = FUN_03702ba4(lVar19,0), lVar24 == 0)) break;
                                    FUN_03af8c9c(lVar24,uVar18,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_039add2c(lVar24,0), lVar24 == 0)) break;
                                    FUN_03af8894(uVar17,uVar54,uVar55,uVar57,lVar24,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    lVar24 = *(long *)(lVar24 + lVar27 * 8 + 0x28);
                                    if ((lVar24 == 0) ||
                                       (lVar24 = FUN_039add2c(lVar24,0), lVar24 == 0)) break;
                                    FUN_03af87d0(lVar24,uVar47 & 1,0);
                                    lVar24 = unaff_x19[0xe1];
                                    if (lVar24 == 0) break;
                                    if (*(uint *)(lVar24 + 0x18) <= uVar20) goto LAB_036afbe8;
                                    plVar38 = *(long **)(lVar24 + lVar27 * 8 + 0x28);
                                    uVar16 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar38 == (long *)0x0) break;
                                    (**(code **)(*plVar38 + 0x2c8))
                                              (plVar38,uVar16 & 1,*(undefined8 *)(*plVar38 + 0x2d0))
                                    ;
                                  }
                                  lVar24 = *unaff_x28;
                                  lVar27 = lVar27 + 1;
                                  lVar40 = lVar40 + 0x50;
                                } while (lVar24 != 0);
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


