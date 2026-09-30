/*
FUNCTION_NAME: Unity.VisualScripting.InvokerBase$$Invoke
ENTRY_POINT: 036aaea8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_11
*/


void Unity_VisualScripting_InvokerBase__Invoke
               (long param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,uint param_8)

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
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  float *pfVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long *unaff_x19;
  uint *unaff_x20;
  uint unaff_w21;
  long *plVar38;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  long *plVar39;
  long unaff_x26;
  uint unaff_w27;
  uint unaff_w28;
  long lVar40;
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
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  ulong uVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float unaff_s8;
  float fVar58;
  float unaff_s9;
  float fVar59;
  float unaff_s11;
  float fVar60;
  float unaff_s12;
  float fVar61;
  float fVar62;
  ulong unaff_d13;
  undefined4 uVar63;
  float fVar64;
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
  uint uVar65;
  uint in_stack_0000109c;
  
code_r0x036aaea8:
  fVar52 = in_stack_000000f0 * param_7 +
           param_6 + param_3 + in_stack_00000058._4_4_ * (param_4 + param_5);
LAB_036ab258:
  puVar8 = PTR_DAT_03d9c920;
  uVar47 = (uint)unaff_x26;
  lVar25 = *(long *)(param_1 + 0x38);
  if (lVar25 != 0) {
    uVar13 = *(uint *)((long)unaff_x19 + 0x494);
    if ((*(uint *)(lVar25 + 0x18) <= uVar13) ||
       (uVar55 = uVar13 - 1, *(uint *)(lVar25 + 0x18) <= uVar55)) goto LAB_036afbe8;
    iVar16 = (int)unaff_x24;
    uVar21 = (ulong)(uint)(fVar52 + *(float *)(unaff_x19 + 0x97));
    fVar52 = (fVar52 + *(float *)(unaff_x19 + 0x97) + param_2) -
             *(float *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x158);
    uVar65 = in_stack_0000109c;
    if (((bStack000000000000007c & 1) == 0 &&
         *(short *)(lVar25 + (long)(int)uVar55 * (long)iVar16 + 0x20) == 0xad) &&
       ((fVar52 < fStack00000000000000c8 || ((int)unaff_x19[0x5c] == 0)))) {
      bStack000000000000007c = 0;
      *unaff_x20 = uVar55;
      in_stack_00001068 = param_8 - 1;
      in_stack_00001088 = CONCAT44(0x2d,uVar55);
      goto LAB_036a9250;
    }
    if (*(short *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x20) == 0xad) {
      bStack000000000000007c = 1;
      goto LAB_036a9250;
    }
    if ((bStack0000000000000078 & *(byte *)(unaff_x19 + 0x47) & 1) != 0) {
      fVar49 = *(float *)((long)unaff_x19 + 0x2d4);
      fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
      if ((fVar49 < fVar64) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_036afb7c;
      fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
      uVar21 = (ulong)(uint)fVar49;
      fVar64 = *(float *)(unaff_x19 + 0x4a);
      if ((fVar64 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49]))
      goto LAB_036afae0;
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
      if (*(short *)(lVar25 + (long)(int)uVar13 * (long)iVar16 + 0x20) == 0xad) {
        bStack000000000000007c = 0;
        *unaff_x20 = uVar13;
        in_stack_00001068 = in_stack_00001068 - 1;
        in_stack_00001088 = CONCAT44(0x2d,uVar13);
        goto LAB_036a9250;
      }
    }
    if (fVar52 <= fStack00000000000000c8) {
switchD_036ab4e4_caseD_0:
      uVar21 = unaff_d13;
      FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                   *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                   fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
    }
    else {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2e4) = *(undefined4 *)((long)unaff_x19 + 0x494);
      }
      fVar64 = fStack00000000000000c8;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar49 = *(float *)(unaff_x19 + 0x59);
        if ((fVar49 < *(float *)((long)unaff_x19 + 700)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar52) / (float)((int)unaff_x19[0x95] + 1)) /
                   in_stack_00000058._4_4_;
          if (fVar52 <= fVar49) {
            fVar52 = fVar49;
          }
LAB_036ad184:
          *(float *)((long)unaff_x19 + 700) = fVar52;
          return;
        }
        fVar49 = *(float *)((long)unaff_x19 + 0x2d4);
        fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if ((fVar49 < fVar64) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_036afb7c:
          fVar52 = unaff_s11;
          if (0.0 < fVar49) {
            fVar52 = unaff_s11 / (1.0 - fVar49);
          }
          fVar49 = fVar49 + (unaff_s11 - unaff_s12 * (in_stack_00000108._4_4_ + DAT_00b5556c)) /
                            fVar52;
LAB_036afb6c:
          if (fVar64 <= fVar49) {
            fVar49 = fVar64;
          }
          *(float *)((long)unaff_x19 + 0x2d4) = fVar49;
          return;
        }
        fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar21 = (ulong)(uint)fVar49;
        fVar64 = *(float *)(unaff_x19 + 0x4a);
        if ((fVar64 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
LAB_036afae0:
          fVar52 = (fVar49 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00b55428) {
            fVar52 = DAT_00b55428;
          }
          *(float *)((long)unaff_x19 + 0x23c) = fVar49;
          fVar49 = (fVar49 - fVar52) * 20.0 + 0.5;
          fVar52 = DAT_00b556b4;
          if (fVar49 != INFINITY) {
            fVar52 = (float)(int)fVar49 / 20.0;
          }
          if (fVar52 <= fVar64) {
            fVar52 = fVar64;
          }
LAB_036acc94:
          *(float *)((long)unaff_x19 + 0x1e4) = fVar52;
          return;
        }
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
          goto LAB_036acbbc;
        }
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x000008c8,&stack0x000010a0,0x378);
        iVar12 = FUN_036ecf20();
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
        uVar21 = unaff_d13;
        FUN_036ed998(in_stack_00000058._4_4_,unaff_d13,in_stack_000000f0,
                     *(undefined4 *)((long)unaff_x19 + 0x2fc),in_stack_000000e0._4_4_,
                     fStack000000000000013c,in_stack_00000108._4_4_,in_stack_00000050);
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined4 *)(unaff_x19 + 0x9b) = 0;
        *(undefined8 *)(in_stack_00000088 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
        break;
      case 6:
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_0391f968(lVar25,0,0);
        if ((uVar19 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
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
LAB_036a9250:
    fVar52 = (float)unaff_d13;
    in_stack_00001068 = in_stack_00001068 + 1;
    lVar25 = unaff_x19[0x8f];
    if (lVar25 != 0) {
      if ((int)in_stack_00001068 < (int)*(uint *)(lVar25 + 0x18)) {
        if (*(uint *)(lVar25 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
        in_stack_0000109c = *(uint *)(lVar25 + (long)(int)in_stack_00001068 * 0xc + 0x20);
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
        if ((*in_stack_00000190 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 != 0)) {
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
      fVar52 = (float)uVar21;
      if (((char)unaff_x19[0x47] != '\0') &&
         (fVar52 = DAT_00b552b8,
         DAT_00b552b8 < *(float *)((long)unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x48))) {
        fVar52 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar49 = *(float *)((long)unaff_x19 + 0x254);
        if ((fVar52 < fVar49) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          if (*(float *)((long)unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x5a) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
          }
          fVar64 = (*(float *)((long)unaff_x19 + 0x23c) - fVar52) * 0.5;
          if (fVar64 <= DAT_00b55428) {
            fVar64 = DAT_00b55428;
          }
          *(float *)(unaff_x19 + 0x48) = fVar52;
          fVar64 = (fVar52 + fVar64) * 20.0 + 0.5;
          fVar52 = DAT_00b556b4;
          if (fVar64 != INFINITY) {
            fVar52 = (float)(int)fVar64 / 20.0;
          }
          if (fVar49 <= fVar52) {
            fVar52 = fVar49;
          }
          goto LAB_036acc94;
        }
      }
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 1;
      puVar8 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if ((int)unaff_x19[0x49] <= *(int *)((long)unaff_x19 + 0x244)) {
        uVar17 = FUN_0303de64(in_stack_00000038,0);
        uVar18 = FUN_03052638(_fStack0000000000000040,0);
        uVar17 = FUN_02ee6d10(*(undefined8 *)PTR_DAT_03d9c950,uVar17,*(undefined8 *)PTR_DAT_03d9c938
                              ,uVar18,0);
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
      if ((*unaff_x20 == 0) || ((*unaff_x20 == 1 && (uVar65 == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_036acd60;
      }
      lVar25 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar25 = *(long *)puVar9;
      }
      plVar39 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
      lVar25 = **(long **)(lVar25 + 0xb8);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd1)) goto LAB_036afbe8;
      iVar16 = *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd1) * 0x38 + 0x54) << 2;
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
      iVar12 = (int)unaff_x19[0x4e];
      in_stack_00000108._4_4_ =
           **(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      in_stack_000000f8 =
           *(long **)(*(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                     + 1);
      lVar25 = unaff_x19[0xe3];
      in_stack_000000d0 = in_stack_00000108._4_4_;
      _fStack00000000000000c8 = (ulong)in_stack_000000f8;
      if (iVar12 < 0x401) {
        if (iVar12 == 0x100) {
          if (lVar25 == 0) goto LAB_036afadc;
          if (*(uint *)(lVar25 + 0x18) < 2) goto LAB_036afbe8;
          uVar17 = *(undefined8 *)(lVar25 + 0x30);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000190 + 0x58), lVar28 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            fVar52 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar52 = *(float *)(unaff_x19 + 0x97);
          }
          in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x2c);
          fVar52 = (0.0 - fVar52) - fStack0000000000000020;
        }
        else if (iVar12 == 0x200) {
          if (lVar25 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
          in_stack_000000d0 = (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
          uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar25 + 0x24) +
                            (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000190 + 0x58), lVar25 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            lVar25 = lVar25 + (long)(int)uStack0000000000000030 * 0x14;
            in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
            fVar52 = ((fStack0000000000000020 + *(float *)(lVar25 + 0x28) +
                      *(float *)(lVar25 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            in_stack_000000d0 = fStack000000000000002c + 0.0 + in_stack_000000d0;
            fVar52 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x97) + in_stack_00001098) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar12 != 0x400) goto LAB_036ad288;
          if (lVar25 == 0) goto LAB_036afadc;
          if (*(int *)(lVar25 + 0x18) == 0) goto LAB_036afbe8;
          uVar17 = *(undefined8 *)(lVar25 + 0x24);
          if ((int)unaff_x19[0x5c] == 5) {
            if ((*in_stack_00000190 == 0) ||
               (lVar28 = *(long *)(*in_stack_00000190 + 0x58), lVar28 == 0)) goto LAB_036afadc;
            if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030) goto LAB_036afbe8;
            in_stack_00001098 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          in_stack_000000d0 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x20);
          fVar52 = fStack0000000000000024 + (0.0 - in_stack_00001098);
        }
LAB_036ad278:
        _fStack00000000000000c8 =
             CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar52);
      }
      else if (iVar12 == 0x800) {
        if (lVar25 == 0) goto LAB_036afadc;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
        fVar52 = fStack000000000000002c + 0.0 +
                 (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        _fStack00000000000000c8 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30)
                      ) * 0.5 + 0.0);
        in_stack_000000d0 = fVar52;
      }
      else {
        if (iVar12 == 0x1000) {
          if (lVar25 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar25 + 0x18) != 1) && (*(int *)(lVar25 + 0x18) != 0)) {
            uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar25 + 0x24) +
                              (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
            in_stack_000000d0 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
            fVar52 = 0.0 - ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x9d) +
                            *(float *)(unaff_x19 + 0x9c)) - fStack0000000000000024) * 0.5;
            goto LAB_036ad278;
          }
          goto LAB_036afbe8;
        }
        if (iVar12 == 0x2000) {
          if (lVar25 == 0) goto LAB_036afadc;
          if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0)) goto LAB_036afbe8;
          fVar52 = 0.0 - ((*(float *)((long)unaff_x19 + 0x4bc) - fStack0000000000000020) -
                         fStack0000000000000024) * 0.5;
          _fStack00000000000000c8 =
               CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                        ((float)*(undefined8 *)(lVar25 + 0x24) +
                        (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5 + fVar52);
          in_stack_000000d0 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        }
      }
LAB_036ad288:
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      uVar17 = FUN_03afb088(unaff_x19[0xe5],0);
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar8);
      }
      uVar21 = FUN_03922f24(uVar17,0,0);
      lVar25 = FUN_036dfed8();
      if (lVar25 == 0) goto LAB_036afadc;
      FUN_0392a7f0(lVar25,0);
      *(float *)(unaff_x19 + 0xe2) = fVar52;
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      iVar12 = FUN_03afa68c(unaff_x19[0xe5],0);
      if (unaff_x19[0xe5] == 0) goto LAB_036afadc;
      fVar49 = (float)FUN_03afa7e4(unaff_x19[0xe5],0);
      uVar63 = FUN_01bd7168(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
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
      uVar19 = (ulong)(uint)puVar26[1];
      uVar54 = (ulong)(uint)puVar26[2];
      uVar56 = (ulong)(uint)puVar26[3];
      FUN_036c214c(*puVar26,uVar19,uVar54,uVar56,&stack0x00001070,0x4000ffff,0);
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar25 = *in_stack_00000190;
      if (lVar25 == 0) goto LAB_036afadc;
      uVar47 = *unaff_x20;
      if ((int)uVar47 < 1) {
        in_stack_000000e0._4_4_ = 0.0;
        iVar16 = 0;
        goto LAB_036af524;
      }
      lVar25 = *(long *)(lVar25 + 0x38);
      fVar52 = ABS(fVar52);
      fVar64 = 1.0;
      if ((uVar21 & 1) == 0) {
        fVar64 = fVar52;
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
      fVar58 = 0.0;
      fVar42 = 0.0;
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
      uVar13 = 1;
      uVar55 = 0;
      goto LAB_036ad4b0;
    }
  }
  goto LAB_036afadc;
code_r0x036a8fdc:
  *(undefined1 *)((long)unaff_x19 + 0x431) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
  uVar19 = FUN_036e7318();
  if (((uVar19 & 1) != 0) &&
     (in_stack_00001068 = in_stack_0000104c, uVar65 = in_stack_0000109c,
     *(int *)((long)unaff_x19 + 0x644) == 0)) goto LAB_036a9250;
LAB_036a9064:
  if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar47 = *unaff_x20;
  if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar40 = (long)(int)uVar47;
  cVar24 = *(char *)(lVar25 + lVar40 * unaff_x24 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  lVar28 = unaff_x19[0x24];
  if ((uint)in_stack_00001088 == uVar47) {
    in_stack_0000109c = (uint)((ulong)in_stack_00001088 >> 0x20);
    *(undefined4 *)((long)unaff_x19 + 0x644) = 0;
    if (in_stack_0000109c == 0x2026) {
      *(long *)(lVar25 + lVar40 * unaff_x24 + 0x30) = unaff_x19[0xca];
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
      uVar47 = *unaff_x20;
      if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
      unaff_w23 = 1;
      *(int *)(lVar25 + (long)(int)uVar47 * unaff_x24 + 0x58) = (int)unaff_x19[0xcd];
      *(undefined1 *)(unaff_x19 + 0x5f) = 1;
      in_stack_00001088 = CONCAT44(3,uVar47 + 1);
    }
    else if (in_stack_0000109c == 3) {
      if ((*in_stack_00000178 == 0) || (lVar20 = FUN_036c835c(*in_stack_00000178,0), lVar20 == 0))
      goto LAB_036afadc;
      uVar17 = FUN_0262f3a4(lVar20,3,*(undefined8 *)PTR_DAT_03d9c870);
      if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
      *(undefined8 *)(lVar25 + lVar40 * unaff_x24 + 0x30) = uVar17;
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
  if (((int)uVar47 < *(int *)((long)unaff_x19 + 0x324)) && (in_stack_0000109c != 3)) {
    if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
    goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
    lVar25 = lVar25 + (long)(int)uVar47 * (long)iVar16;
    *(undefined1 *)(lVar25 + 0x194) = 0;
    *(undefined2 *)(lVar25 + 0x20) = 0x200b;
    *(undefined4 *)(lVar25 + 100) = 0;
    *unaff_x20 = uVar47 + 1;
    uVar65 = in_stack_0000109c;
    goto LAB_036a9250;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x644);
  if (iVar12 == 0) {
    uVar47 = *(uint *)((long)unaff_x19 + 0x25c);
    if ((uVar47 >> 4 & 1) == 0) {
      if ((uVar47 >> 3 & 1) == 0) {
        fVar49 = 1.0;
        if ((uVar47 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar19 = FUN_02fdd9e8(in_stack_0000109c,0);
          if ((uVar19 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar47 = FUN_02fddc48(in_stack_0000109c,0);
            in_stack_0000109c = uVar47 & 0xffff;
            fVar49 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar19 = FUN_02fdd92c(in_stack_0000109c,0);
        fVar49 = 1.0;
        if ((uVar19 & 1) != 0) {
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
      uVar19 = FUN_02fdd9e8(in_stack_0000109c,0);
      fVar49 = 1.0;
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar47 = FUN_02fddc48(in_stack_0000109c,0);
LAB_036a9658:
        fVar49 = 1.0;
        in_stack_0000109c = uVar47 & 0xffff;
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
    uVar65 = in_stack_0000109c;
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
    uVar13 = *unaff_x20;
    uVar47 = *(uint *)(lVar25 + 0x18);
    if (uVar47 <= uVar13) goto LAB_036afbe8;
    *(undefined4 *)(unaff_x19 + 0x24) =
         *(undefined4 *)(lVar25 + (long)(int)uVar13 * unaff_x24 + 0x58);
    if (unaff_w23 == 0) {
LAB_036a9778:
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar64 = *(float *)(unaff_x19 + 0x3d);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar25 = unaff_x19[0x20];
    }
    else {
      lVar28 = unaff_x19[0x8f];
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= in_stack_00001068) goto LAB_036afbe8;
      if ((*(int *)(lVar28 + (long)(int)in_stack_00001068 * 0xc + 0x20) != 10) ||
         (uVar13 == *(uint *)(unaff_x19 + 0x93))) goto LAB_036a9778;
      if (uVar47 <= uVar13 - 1) goto LAB_036afbe8;
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar64 = *(float *)(lVar25 + (long)(int)(uVar13 - 1) * (long)iVar16 + 0x60);
      iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
      lVar25 = *in_stack_00000178;
    }
    if (lVar25 == 0) goto LAB_036afadc;
    fVar58 = (float)FUN_0396ac34(lVar25 + 0x50,0);
    fVar42 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar42 = 1.0;
    }
    fVar60 = 0.0;
    fVar44 = 0.0;
    if ((unaff_w23 & in_stack_0000109c == 0x2026) == 0) {
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar44 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      fVar60 = (float)FUN_0396ac94(*in_stack_00000178 + 0x50,0);
    }
    lVar25 = unaff_x19[0xc9];
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
    fVar43 = *(float *)((long)unaff_x19 + 0x404);
    fVar45 = *(float *)(lVar25 + 0x2c);
    fVar52 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar61 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar53 = *(float *)((long)unaff_x19 + 0x404);
    fVar46 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
    lVar25 = unaff_x19[0x6d];
    if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
    lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar42 = ((fVar49 * fVar64) / (float)iVar12) * fVar58 * fVar42;
    fVar52 = fVar42 * fVar43 * fVar45 * fVar52;
    *(float *)(lVar28 + 0x160) = fVar52;
    uVar47 = *(uint *)(unaff_x19 + 0x24);
    fVar46 = fVar42 * fVar61 * fVar53 * fVar46;
    fStack000000000000012c = fVar60;
    if (uVar47 == 0) {
      in_stack_00000170._4_4_ = *(float *)(unaff_x19 + 0xc3);
    }
    else {
      lVar28 = unaff_x19[0xe1];
      if (lVar28 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar28 + 0x18) <= uVar47) goto LAB_036afbe8;
      lVar28 = *(long *)(lVar28 + (long)(int)uVar47 * 8 + 0x20);
      if (lVar28 == 0) goto LAB_036afadc;
      in_stack_00000170._4_4_ = *(float *)(lVar28 + 0x10c);
    }
FUN_036a9b34:
    unaff_x29 = &stack0x00000fc0;
    fVar64 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar64 = fVar52;
    }
  }
  else {
    fVar49 = 1.0;
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
      if (lVar25 == 0) {
        unaff_x29 = &stack0x00000fc0;
        uVar65 = in_stack_0000109c;
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
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      memmove(&stack0x00000fe0,(void *)(unaff_x19[0x20] + 0x50),0x60);
      iVar12 = FUN_0396ac24(&stack0x00000fe0,0);
      if (*in_stack_00000178 == 0) goto LAB_036afadc;
      memmove(&stack0x00000fe0,(void *)(*in_stack_00000178 + 0x50),0x60);
      fVar42 = (float)FUN_0396ac34(&stack0x00000fe0,0);
      fVar64 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar64 = 1.0;
      }
      if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
      fVar64 = (fVar52 / (float)iVar12) * fVar42 * fVar64;
      iVar12 = FUN_0396ac24(unaff_x19[0xd3] + 0x48,0);
      fVar52 = *(float *)(unaff_x19 + 0x3d);
      if (iVar12 < 1) {
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar58 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        fVar42 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar42 = 1.0;
        }
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_0396ac54(unaff_x19[0x20] + 0x50,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        FUN_0396b140(&stack0x000010a0,*(long *)(lVar25 + 0x20),0);
        fVar43 = (float)FUN_0396af70(&stack0x00000fc0,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        fVar61 = *(float *)(lVar25 + 0x2c);
        fVar45 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_0396ac54(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar53 = (float)FUN_0396ac84(*in_stack_00000178 + 0x50,0);
        if (*in_stack_00000178 == 0) goto LAB_036afadc;
        fVar48 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_0396ac34(*in_stack_00000178 + 0x50,0);
        if (unaff_x19[0x20] == 0) goto LAB_036afadc;
        fVar46 = fVar64 * fVar53 * fVar48 * fVar46;
        fVar42 = (fVar52 / (float)iVar12) * fVar58 * fVar42;
        fVar52 = fVar42 * (fVar60 / fVar43) * fVar61 * fVar45;
        fVar42 = fVar42 / fVar52;
        fVar44 = fVar42 * fVar44;
        fVar64 = (float)FUN_0396ac94(unaff_x19[0x20] + 0x50,0);
        fVar42 = fVar42 * fVar64;
      }
      else {
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        iVar12 = FUN_0396ac24(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar42 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (*(long *)(lVar25 + 0x20) == 0) goto LAB_036afadc;
        fVar60 = *(float *)(lVar25 + 0x2c);
        fVar58 = fStack00000000000000a0;
        if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
          fVar58 = 1.0;
        }
        fVar43 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar44 = (float)FUN_0396ac54(unaff_x19[0xd3] + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar45 = (float)FUN_0396ac84(*in_stack_000000b8 + 0x48,0);
        if (*in_stack_000000b8 == 0) goto LAB_036afadc;
        fVar61 = *(float *)((long)unaff_x19 + 0x404);
        fVar46 = (float)FUN_0396ac34(*in_stack_000000b8 + 0x48,0);
        if (unaff_x19[0xd3] == 0) goto LAB_036afadc;
        fVar46 = fVar64 * fVar45 * fVar61 * fVar46;
        fVar52 = (fVar52 / (float)iVar12) * fVar42 * fVar58 * fVar60 * fVar43;
        fVar42 = (float)FUN_0396ac94(unaff_x19[0xd3] + 0x48,0);
      }
      *in_stack_000000f8 = lVar25;
      thunk_FUN_01b4f09c(in_stack_000000f8,lVar25);
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
      *(undefined4 *)(lVar25 + 0x2c) = 1;
      *(float *)(lVar25 + 0x160) = fVar52;
      *(long *)(lVar25 + 0x40) = *in_stack_000000b8;
      thunk_FUN_01b4f09c();
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      *(long *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x38) = *in_stack_00000178;
      thunk_FUN_01b4f09c();
      lVar25 = *in_stack_00000190;
      if ((lVar25 == 0) || (lVar40 = *(long *)(lVar25 + 0x38), lVar40 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
      in_stack_00000170._4_4_ = 0.0;
      *(int *)(lVar40 + (long)(int)*unaff_x20 * unaff_x24 + 0x58) = (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar28;
      fStack000000000000012c = fVar42;
      goto FUN_036a9b34;
    }
    lVar25 = *in_stack_00000190;
    fVar64 = 0.0;
    if (in_stack_0000109c != 3 && in_stack_0000109c != 0xad) {
      fVar64 = fVar52;
    }
    fVar46 = 0.0;
    if (lVar25 == 0) goto LAB_036afadc;
    fVar44 = 0.0;
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
  uVar47 = *unaff_x20;
  FUN_02176564(&stack0x000001d0,_fStack00000000000000d8,*(undefined8 *)PTR_DAT_03d9c918);
  *(undefined8 *)(unaff_x29 + 0xe8) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0xe0) = in_stack_000001d0;
  if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
  uVar18 = *(undefined8 *)(unaff_x29 + 0xe8);
  uVar17 = *(undefined8 *)(unaff_x29 + 0xe0);
  lVar25 = lVar25 + (long)(int)uVar47 * unaff_x24;
  *(undefined4 *)(lVar25 + 0x18c) = in_stack_000001e0;
  *(undefined8 *)(lVar25 + 0x184) = uVar18;
  *(undefined8 *)(lVar25 + 0x17c) = uVar17;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  *(undefined4 *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x25c);
  if ((unaff_x19[0xc9] == 0) || (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
  goto LAB_036afadc;
  FUN_0396b140(&stack0x000001d0,lVar25,0);
  puVar8 = StringLiteral_455;
  *(undefined8 *)(unaff_x29 + 0x98) = in_stack_000001d8;
  *(undefined8 *)(unaff_x29 + 0x90) = in_stack_000001d0;
  if ((int)in_stack_0000109c < 0x10000) {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar47 = FUN_02fdb080(in_stack_0000109c,0);
    unaff_w21 = uVar47 & 1;
  }
  else {
    unaff_w21 = 0;
  }
  uVar47 = *(uint *)(unaff_x19 + 0x55);
  *(undefined4 *)((long)unaff_x19 + 0x2fc) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f9) == '\0') {
    _fStack0000000000000138 = (ulong)uVar47 << 0x20;
    fVar58 = 0.0;
    fVar42 = 0.0;
  }
  else {
    if (*in_stack_000000f8 == 0) goto LAB_036afadc;
    uVar55 = *unaff_x20;
    uVar13 = *(uint *)(*in_stack_000000f8 + 0x28);
    if ((int)uVar55 < (int)in_stack_00000090._4_4_) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar55 + 1) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + (long)(int)(uVar55 + 1) * (long)iVar16 + 0x30);
      if ((((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
          (lVar28 = *(long *)(*in_stack_00000178 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_036afadc;
      uVar21 = FUN_02630bd0(lVar28,uVar13 | *(int *)(lVar25 + 0x28) << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar63 = 0;
      if ((uVar21 & 1) == 0) {
        _fStack0000000000000138 = (ulong)uVar47 << 0x20;
        fVar58 = 0.0;
        fVar42 = 0.0;
      }
      else {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar63 = *(undefined4 *)(in_stack_00000fb8 + 0x20);
        fVar42 = *(float *)(in_stack_00000fb8 + 0x14);
        fVar58 = *(float *)(in_stack_00000fb8 + 0x18);
        if ((*(byte *)(in_stack_00000fb8 + 0x39) & 1) != 0) {
          uVar47 = 0;
        }
        _fStack0000000000000138 = CONCAT44(uVar47,*(undefined4 *)(in_stack_00000fb8 + 0x1c));
      }
      uVar55 = *unaff_x20;
    }
    else {
      uVar63 = 0;
      _fStack0000000000000138 = (ulong)uVar47 << 0x20;
      fVar58 = 0.0;
      fVar42 = 0.0;
    }
    if (0 < (int)uVar55) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= uVar55 - 1) goto LAB_036afbe8;
      lVar25 = *(long *)(lVar25 + (ulong)(uVar55 - 1) * (unaff_x24 & 0xffffffff) + 0x30);
      if (((lVar25 == 0) || (*in_stack_00000178 == 0)) ||
         ((lVar28 = *(long *)(*in_stack_00000178 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_036afadc;
      uVar21 = FUN_02630bd0(lVar28,*(uint *)(lVar25 + 0x28) | uVar13 << 0x10,&stack0x00000fb8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar21 & 1) != 0) {
        if (in_stack_00000fb8 == 0) goto LAB_036afadc;
        uVar50 = (undefined4)_fStack0000000000000138;
        fVar42 = (float)FUN_036d2d10(fVar42,fVar58,_fStack0000000000000138 & 0xffffffff,uVar63,
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
    fVar43 = *(float *)(unaff_x19 + 200);
    fVar60 = (float)FUN_0396af88(&stack0x00001050,0);
    fVar43 = fVar43 - fVar64 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
    *(float *)(unaff_x19 + 200) = fVar43;
    if ((in_stack_0000109c == 0x200b) || (unaff_w21 != 0)) {
      *(float *)(unaff_x19 + 200) = fVar43 - in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4)
      ;
    }
  }
  fVar60 = *(float *)(unaff_x19 + 0x56);
  in_stack_00000098 = 0.0;
  if (fVar60 != 0.0) {
    fVar43 = (float)FUN_0396af68(&stack0x00001050,0);
    fVar45 = (float)FUN_0396af78(&stack0x00001050,0);
    in_stack_00000098 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
         (fVar60 * 0.5 - fVar64 * (fVar43 * 0.5 + fVar45));
    *(float *)(unaff_x19 + 200) = *(float *)(unaff_x19 + 200) + in_stack_00000098;
  }
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) & 1) != 0)) {
    lVar25 = *in_stack_00000168;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar21 = FUN_0391f968(lVar25,0,0);
    in_stack_000000d0 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar25 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar25 == 0) goto LAB_036afadc;
      uVar21 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      in_stack_000000d0 = 0.0;
      if ((uVar21 & 1) != 0) {
        lVar25 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar25 == 0) goto LAB_036afadc;
        fVar60 = (float)FUN_03900954(lVar25,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
        fVar43 = *(float *)(*in_stack_00000178 + 0x1b0);
        in_stack_000000d0 =
             (float)FUN_03900954(*in_stack_00000168,
                                 *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        in_stack_000000d0 = in_stack_000000d0 * fVar60 * fVar43 * 0.25;
        if (fVar60 < in_stack_00000170._4_4_ + in_stack_000000d0) {
          in_stack_00000170._4_4_ = fVar60 - in_stack_000000d0;
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
    uVar21 = FUN_0391f968(lVar25,0,0);
    in_stack_000000e0._4_4_ = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar25 = *in_stack_00000168;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (lVar25 == 0) goto LAB_036afadc;
      uVar21 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar21 & 1) != 0) {
        lVar25 = *in_stack_00000168;
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (lVar25 == 0) goto LAB_036afadc;
        uVar21 = FUN_038ffa04(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar21 & 1) != 0) {
          lVar25 = *in_stack_00000168;
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          if (lVar25 == 0) goto LAB_036afadc;
          fVar60 = (float)FUN_03900954(lVar25,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*in_stack_00000178 == 0) || (*in_stack_00000168 == 0)) goto LAB_036afadc;
          fVar43 = *(float *)(*in_stack_00000178 + 0x1a8);
          in_stack_000000d0 =
               (float)FUN_03900954(*in_stack_00000168,
                                   *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          in_stack_000000d0 = in_stack_000000d0 * fVar60 * fVar43 * 0.25;
          if (fVar60 < in_stack_00000170._4_4_ + in_stack_000000d0) {
            in_stack_00000170._4_4_ = fVar60 - in_stack_000000d0;
          }
          goto LAB_036aa254;
        }
      }
    }
    in_stack_000000d0 = 0.0;
  }
LAB_036aa254:
  fStack0000000000000124 = *(float *)(unaff_x19 + 200);
  fVar60 = (float)FUN_0396af78(&stack0x00001050,0);
  fStack0000000000000124 =
       fStack0000000000000124 +
       (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
       fVar64 * (fVar42 + ((fVar60 - in_stack_00000170._4_4_) - in_stack_000000d0));
  fVar42 = (float)FUN_0396af80(&stack0x00001050,0);
  fVar43 = *(float *)((long)unaff_x19 + 0x61c) +
           ((fVar46 + fVar64 * (fVar58 + in_stack_00000170._4_4_ + fVar42)) -
           *(float *)(unaff_x19 + 0x9b));
  fVar42 = (float)FUN_0396af70(&stack0x00001050,0);
  fVar45 = fVar43 - fVar64 * (in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar42);
  fVar42 = (float)FUN_0396af68(&stack0x00001050,0);
  fVar60 = fStack0000000000000124 +
           (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
           fVar64 * (in_stack_000000d0 + in_stack_000000d0 +
                    in_stack_00000170._4_4_ + in_stack_00000170._4_4_ + fVar42);
  fVar42 = fStack0000000000000124;
  fVar58 = fVar60;
  if (((*(int *)((long)unaff_x19 + 0x644) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x25c) >> 1 & 1) != 0)) {
    fVar61 = (float)(int)unaff_x19[0xbe] * fStack0000000000000060;
    fVar42 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar57 = fVar61 * fVar64 * (in_stack_000000d0 + in_stack_00000170._4_4_ + fVar42);
    fVar42 = (float)FUN_0396af80(&stack0x00001050,0);
    fVar58 = (float)FUN_0396af70(&stack0x00001050,0);
    fVar43 = fVar43 + 0.0;
    fVar45 = fVar45 + 0.0;
    fVar53 = fStack0000000000000124 + fVar57;
    fVar61 = fVar61 * fVar64 * (((fVar42 - fVar58) - in_stack_00000170._4_4_) - in_stack_000000d0);
    fVar58 = fVar60 + fVar61;
    fVar48 = (fVar57 - fVar61) * 0.5;
    fStack0000000000000124 = (fStack0000000000000124 + fVar61) - fVar48;
    fVar60 = (fVar60 + fVar57) - fVar48;
    fVar42 = fVar53 - fVar48;
    fVar58 = fVar58 - fVar48;
  }
  _fStack0000000000000140 = (ulong)(uint)fVar64;
  if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
    fVar61 = 0.0;
    fVar48 = 0.0;
    fVar57 = 0.0;
    fStack0000000000000110 = 0.0;
    fVar53 = fVar45;
    fStack0000000000000114 = fVar43;
  }
  else {
    thunk_FUN_03910e24(_fStack0000000000000080,0);
    fVar62 = (fVar45 + fVar43) * 0.5;
    fVar59 = (fVar60 + fStack0000000000000124) * 0.5;
    fVar43 = fVar43 - fVar62;
    fStack0000000000000110 = 0.0;
    fVar51 = fVar43;
    fVar42 = (float)FUN_03911ddc(fVar42 - fVar59,_fStack0000000000000080,0);
    fVar42 = fVar59 + fVar42;
    fStack0000000000000110 = fStack0000000000000110 + 0.0;
    fVar45 = fVar45 - fVar62;
    fVar61 = 0.0;
    fVar53 = fVar45;
    fStack0000000000000124 =
         (float)FUN_03911ddc(fStack0000000000000124 - fVar59,_fStack0000000000000080,0);
    fStack0000000000000124 = fVar59 + fStack0000000000000124;
    fVar61 = fVar61 + 0.0;
    fVar57 = 0.0;
    fVar60 = (float)FUN_03911ddc(fVar60 - fVar59,_fStack0000000000000080,0);
    fVar60 = fVar59 + fVar60;
    fVar43 = fVar62 + fVar43;
    fVar57 = fVar57 + 0.0;
    fVar48 = 0.0;
    fVar58 = (float)FUN_03911ddc(fVar58 - fVar59,_fStack0000000000000080,0);
    fVar58 = fVar59 + fVar58;
    fVar45 = fVar62 + fVar45;
    fVar48 = fVar48 + 0.0;
    fVar53 = fVar62 + fVar53;
    fStack0000000000000114 = fVar62 + fVar51;
  }
  if (*in_stack_00000190 == 0) goto LAB_036afadc;
  lVar25 = *(long *)(*in_stack_00000190 + 0x38);
  unaff_d13 = (ulong)(uint)fVar64;
  if (lVar25 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x11c) = fStack0000000000000124;
  *(float *)(lVar25 + 0x120) = fVar53;
  *(float *)(lVar25 + 0x124) = fVar61;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x110) = fVar42;
  *(float *)(lVar25 + 0x114) = fStack0000000000000114;
  *(float *)(lVar25 + 0x118) = fStack0000000000000110;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x128) = fVar60;
  *(float *)(lVar25 + 300) = fVar43;
  *(float *)(lVar25 + 0x130) = fVar57;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  lVar25 = lVar25 + (long)(int)*unaff_x20 * unaff_x24;
  *(float *)(lVar25 + 0x134) = fVar58;
  *(float *)(lVar25 + 0x138) = fVar45;
  *(float *)(lVar25 + 0x13c) = fVar48;
  if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
  goto LAB_036afadc;
  uVar47 = *unaff_x20;
  unaff_x26 = (long)(int)uVar47;
  if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
  lVar28 = lVar25 + unaff_x26 * unaff_x24;
  *(int *)(lVar28 + 0x140) = (int)unaff_x19[200];
  fVar58 = *(float *)(unaff_x19 + 0x9b);
  uVar21 = (ulong)(uint)fVar58;
  fVar42 = *(float *)((long)unaff_x19 + 0x61c);
  *(float *)(lVar28 + 0x15c) = (fVar60 - fStack0000000000000124) / (fStack0000000000000114 - fVar53)
  ;
  *(float *)(lVar28 + 0x14c) = (fVar46 - fVar58) + fVar42;
  fVar44 = fVar44 * fVar64;
  if (*(int *)((long)unaff_x19 + 0x644) == 0) {
    fVar44 = fVar44 / fVar49;
    fStack000000000000012c = (fStack000000000000012c * fVar64) / fVar49;
  }
  else {
    fStack000000000000012c = fStack000000000000012c * fVar64;
  }
  unaff_w25 = *(uint *)(unaff_x19 + 0x93);
  if ((unaff_w21 == 0) || (uVar47 == unaff_w25)) {
    fStack000000000000012c = fVar42 + fStack000000000000012c;
    fVar44 = fVar42 + fVar44;
    fVar43 = fStack000000000000012c;
    fVar60 = fVar44;
    if (fVar42 != 0.0) {
      fVar60 = (fVar44 - fVar42) / *(float *)((long)unaff_x19 + 0x404);
      fVar43 = (fStack000000000000012c - fVar42) / *(float *)((long)unaff_x19 + 0x404);
      if (fVar60 <= fVar44) {
        fVar60 = fVar44;
      }
      if (fStack000000000000012c <= fVar43) {
        fVar43 = fStack000000000000012c;
      }
    }
    lVar25 = lVar25 + unaff_x26 * unaff_x24;
    fVar42 = fVar60;
    if (fVar60 <= *(float *)(unaff_x19 + 0x99)) {
      fVar42 = *(float *)(unaff_x19 + 0x99);
    }
    fVar45 = fVar43;
    if (*(float *)((long)unaff_x19 + 0x4cc) <= fVar43) {
      fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    }
    *(float *)((long)unaff_x19 + 0x4cc) = fVar45;
    *(float *)(unaff_x19 + 0x99) = fVar42;
    *(float *)(lVar25 + 0x154) = fVar60;
    *(float *)(lVar25 + 0x158) = fVar43;
    *(float *)(lVar25 + 0x148) = fVar44 - fVar58;
    *(float *)(unaff_x19 + 0x98) = fVar44 - fVar58;
    *(float *)(lVar25 + 0x150) = fStack000000000000012c - fVar58;
    *(float *)((long)unaff_x19 + 0x4c4) = fStack000000000000012c - fVar58;
    if (((int)unaff_x19[0x95] == 0) || (*(char *)((long)unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x97) = fVar42;
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar42 = *(float *)((long)unaff_x19 + 0x4bc);
      fVar58 = (float)FUN_0396ac64(unaff_x19[0x20] + 0x50,0);
      fVar49 = (fVar64 * fVar58) / fVar49;
      uVar21 = (ulong)*(uint *)(unaff_x19 + 0x9b);
      if (fVar42 <= fVar49) {
        fVar42 = fVar49;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = fVar42;
    }
    if ((float)uVar21 == 0.0) {
      fVar49 = *(float *)(in_stack_00000088 + 0x208);
      if (*(float *)(in_stack_00000088 + 0x208) <= fVar44) {
        fVar49 = fVar44;
      }
      *(float *)(in_stack_00000088 + 0x208) = fVar49;
    }
  }
  else {
    fVar49 = *(float *)(unaff_x19 + 0x99);
    lVar25 = lVar25 + unaff_x26 * unaff_x24;
    *(float *)(lVar25 + 0x154) = fVar49;
    fVar42 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar49 = fVar49 - fVar58;
    *(float *)(lVar25 + 0x148) = fVar49;
    *(float *)(lVar25 + 0x158) = fVar42;
    *(float *)(unaff_x19 + 0x98) = fVar49;
    fVar42 = fVar42 - fVar58;
    *(float *)(lVar25 + 0x150) = fVar42;
    *(float *)((long)unaff_x19 + 0x4c4) = fVar42;
  }
  lVar25 = *in_stack_00000190;
  if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
  unaff_w27 = *unaff_x20;
  if (*(uint *)(lVar28 + 0x18) <= unaff_w27) goto LAB_036afbe8;
  lVar28 = lVar28 + (long)(int)unaff_w27 * unaff_x24;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  unaff_w28 = *(uint *)(unaff_x19 + 0x4f) & 0x18;
  if ((in_stack_0000109c == 9) ||
     (((((unaff_w21 == 0 && (in_stack_0000109c != 3)) && (in_stack_0000109c != 0x200b)) &&
       (in_stack_0000109c != 0xad)) ||
      (((in_stack_0000109c == 0xad & (bStack000000000000007c ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x644) == 1)))))) {
    *(undefined1 *)(lVar28 + 0x194) = 1;
    pfVar29 = _fStack00000000000000a8;
    pfVar31 = _fStack00000000000000b0;
    if (unaff_w23 != 0) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      pfVar31 = (float *)(lVar25 + 0x60);
      pfVar29 = (float *)(lVar25 + 100);
    }
    unaff_s8 = *pfVar31;
    unaff_s9 = *pfVar29;
    fVar49 = *(float *)(unaff_x19 + 0x6c);
    fVar42 = *(float *)(unaff_x19 + 200);
    in_stack_00000108._4_4_ = (fStack00000000000000a4 - unaff_s8) - unaff_s9;
    bVar10 = true;
    if ((fVar49 <= in_stack_00000108._4_4_) && (bVar10 = false, !NAN(fVar49))) {
      bVar10 = fVar49 == -1.0;
    }
    if (!bVar10) {
      in_stack_00000108._4_4_ = fVar49;
    }
    fVar58 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar58 = (float)FUN_0396af88(&stack0x00001050,0);
      uVar21 = (ulong)*(uint *)(unaff_x19 + 0x9b);
    }
    fVar49 = *(float *)((long)unaff_x19 + 0x2d4);
    fVar44 = *(float *)((long)unaff_x19 + 0x4cc);
    if (in_stack_0000109c != 0xad) {
      fVar52 = fVar64;
    }
    fVar60 = (float)uVar21;
    fVar64 = 0.0;
    if ((0.0 < fVar60) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar64 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    unaff_w27 = *unaff_x20;
    fVar64 = (*(float *)(unaff_x19 + 0x97) - (fVar44 - fVar60)) + fVar64;
    if (fStack00000000000000c8 < fVar64) {
      if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
        *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
      }
      puVar8 = PTR_DAT_03d9c920;
      uVar17 = DAT_00b92750;
      if ((char)unaff_x19[0x47] != '\0') {
        fVar43 = *(float *)(unaff_x19 + 0x59);
        if (((fVar43 < *(float *)((long)unaff_x19 + 700)) && (0.0 < fVar60)) &&
           (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = *(float *)((long)unaff_x19 + 700) +
                   ((in_stack_00000018._4_4_ - fVar64) / (float)(int)unaff_x19[0x95]) /
                   in_stack_00000058._4_4_;
          if (fVar52 <= fVar43) {
            fVar52 = fVar43;
          }
          goto LAB_036ad184;
        }
        fVar60 = *(float *)((long)unaff_x19 + 0x1e4);
        fVar64 = *(float *)(unaff_x19 + 0x4a);
        uVar21 = (ulong)(uint)fVar64;
        if ((fVar64 < fVar60) && (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
          fVar52 = (fVar60 - *(float *)(unaff_x19 + 0x48)) * 0.5;
          if (fVar52 <= DAT_00b55428) {
            fVar52 = DAT_00b55428;
          }
          fVar49 = (fVar60 - fVar52) * 20.0 + 0.5;
          *(float *)((long)unaff_x19 + 0x23c) = fVar60;
          fVar52 = DAT_00b556b4;
          if (fVar49 != INFINITY) {
            fVar52 = (float)(int)fVar49 / 20.0;
          }
          if (fVar52 <= fVar64) {
            fVar52 = fVar64;
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
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(lVar28 + 0x1580) == 0) goto LAB_036acbbc;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
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
        uVar65 = in_stack_0000109c;
        if ((unaff_w27 == 0) || ((int)in_stack_00001068 < 0)) {
          *unaff_x20 = 0;
          unaff_x29 = &stack0x00000fc0;
          in_stack_00001068 = 0xffffffff;
          in_stack_00001088 = uVar17;
          goto LAB_036a9250;
        }
        fVar52 = *(float *)(unaff_x19 + 0x99);
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        in_stack_00001068 = FUN_036ecf20();
        if (fVar52 - fVar44 <= fStack00000000000000c8) {
          *(undefined1 *)((long)unaff_x19 + 0x33c) = 1;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x494);
          uVar21 = *(ulong *)(*(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          lVar25 = NEON_rev64(uVar21,4);
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
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar19 = FUN_0391f968(lVar25,0,0);
        if ((uVar19 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
      }
LAB_036aad90:
      in_stack_00001088 = CONCAT44(3,unaff_w27);
      uVar65 = in_stack_0000109c;
      goto LAB_036a9250;
    }
switchD_036aaa24_caseD_2:
    puVar8 = PTR_DAT_03d9c920;
    unaff_s12 = 1.0;
    fVar44 = 1.0 - fVar49;
    uVar21 = (ulong)(uint)fVar44;
    unaff_s11 = ABS(fVar42) + fVar58 * fVar44 * fVar52;
    if (unaff_w28 != 0) {
      unaff_s12 = DAT_00b55374;
    }
    fVar64 = unaff_s12 * in_stack_00000108._4_4_;
    if (fVar64 < unaff_s11) {
      if (((char)unaff_x19[0x5b] != '\0') && (unaff_w27 != *(uint *)(unaff_x19 + 0x93)))
      goto LAB_036aadf4;
      if (((char)unaff_x19[0x47] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x244) < (int)unaff_x19[0x49])) {
        fVar64 = *(float *)(unaff_x19 + 0x5a) / 100.0;
        if (fVar49 < fVar64) {
          fVar52 = unaff_s11 / fVar44;
          if (fVar49 <= 0.0) {
            fVar52 = unaff_s11;
          }
          fVar49 = fVar49 + (unaff_s11 - unaff_s12 * (in_stack_00000108._4_4_ + DAT_00b5556c)) /
                            fVar52;
          goto LAB_036afb6c;
        }
        fVar49 = *(float *)((long)unaff_x19 + 0x1e4);
        uVar21 = (ulong)(uint)fVar49;
        fVar64 = *(float *)(unaff_x19 + 0x4a);
        if (fVar64 < fVar49) goto LAB_036afae0;
      }
      iVar12 = (int)unaff_x19[0x5c];
      if (iVar12 == 1) {
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar8;
        }
        lVar28 = *(long *)(lVar25 + 0xb8);
        unaff_x29 = &stack0x00000fc0;
        if (*(int *)(lVar28 + 0x1580) == 0) {
LAB_036acbbc:
          in_stack_00001088 = DAT_00b92750;
          unaff_x20[0] = 0;
          unaff_x20[1] = 0;
          in_stack_00001068 = 0xffffffff;
          uVar65 = in_stack_0000109c;
          goto LAB_036a9250;
        }
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar28 = *(long *)(*(long *)PTR_DAT_03d9c920 + 0xb8);
        }
        FUN_0217900c(&stack0x000010a0,lVar28 + 0x11f0,*(undefined8 *)PTR_DAT_03d9c8c0);
        memcpy(&stack0x00000550,&stack0x000010a0,0x378);
LAB_036ab014:
        unaff_x29 = &stack0x00000fc0;
        iVar12 = FUN_036ecf20();
LAB_036ab020:
        iVar14 = *(int *)((long)unaff_x19 + 0x494) + -1;
        *(int *)((long)unaff_x19 + 0x494) = iVar14;
        in_stack_00000188._4_4_ = in_stack_00000188._4_4_ + 1;
        in_stack_00001068 = iVar12 - 1;
        in_stack_00001088 = CONCAT44(0x2026,iVar14);
        uVar65 = in_stack_0000109c;
        goto LAB_036a9250;
      }
      if (iVar12 == 6) {
        if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        unaff_x29 = &stack0x00000fc0;
        in_stack_00001068 = FUN_036ecf20();
        lVar25 = unaff_x19[0x5d];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar19 = FUN_0391f968(lVar25,0,0);
        if ((uVar19 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
          plVar39 = (long *)unaff_x19[0x5d];
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5f) = 1;
        }
LAB_036ab13c:
        in_stack_00001088 = CONCAT44(3,*unaff_x20);
        uVar65 = in_stack_0000109c;
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
        (**(code **)(*unaff_x19 + 0x8c8))(fVar64,in_stack_000000d0);
      }
      else if (*(int *)((long)unaff_x19 + 0x644) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000170._4_4_);
      }
      uVar13 = *unaff_x20;
      if ((in_stack_00000068 & 1) != 0) {
        *(uint *)(in_stack_00000088 + 0x1f0) = uVar13;
      }
      *(uint *)((long)unaff_x19 + 0x4a4) = uVar13;
      *(int *)((long)unaff_x19 + 0x4ac) = *(int *)((long)unaff_x19 + 0x4ac) + 1;
      if ((unaff_x19[0x6d] == 0) || (lVar25 = *(long *)(unaff_x19[0x6d] + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      in_stack_00000068 = 0;
      *(float *)(lVar25 + 0x60) = unaff_s8;
      *(float *)(lVar25 + 100) = unaff_s9;
    }
  }
  else {
    if (((in_stack_0000109c & 0xfffffffe) == 10) && ((int)unaff_x19[0x5c] == 6)) {
      fVar49 = (float)uVar21;
      fVar52 = 0.0;
      if ((0.0 < fVar49) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
        fVar52 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
      }
      uVar21 = _fStack00000000000000c8 & 0xffffffff;
      if (fStack00000000000000c8 <
          (*(float *)(unaff_x19 + 0x97) - (*(float *)((long)unaff_x19 + 0x4cc) - fVar49)) + fVar52)
      {
        if (*(int *)((long)unaff_x19 + 0x2e4) == -1) {
          *(uint *)((long)unaff_x19 + 0x2e4) = unaff_w27;
        }
        unaff_x29 = &stack0x00000fc0;
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
        uVar19 = FUN_0391f968(lVar25,0,0);
        if ((uVar19 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5d];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_036afadc;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar17,*(undefined8 *)(*plVar39 + 0x560));
          lVar25 = unaff_x19[0x5d];
          if (lVar25 == 0) goto LAB_036afadc;
          *(int *)(lVar25 + 0x400) = (int)unaff_x19[0x80];
          FUN_036dfca8(lVar25,*(undefined4 *)((long)unaff_x19 + 0x494),0);
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
      uVar21 = FUN_02fdea78(in_stack_0000109c,0);
      if ((uVar21 & 1) != 0) goto LAB_036ab188;
    }
    uStack0000000000000074 = unaff_w21;
    if (in_stack_0000109c == 0xa0) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
LAB_036ab5c8:
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
      uStack0000000000000074 = unaff_w21;
    }
  }
  if (((int)unaff_x19[0x5c] == 1) && ((in_stack_0000109c == 0x2d || (unaff_w23 != 1)))) {
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar52 = *(float *)(unaff_x19 + 0x3d);
    iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
    if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
    fVar64 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
    lVar25 = unaff_x19[0xca];
    fVar49 = fStack00000000000000a0;
    if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
      fVar49 = 1.0;
    }
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
    fVar58 = *(float *)((long)unaff_x19 + 0x404);
    fVar60 = *(float *)(lVar25 + 0x2c);
    fVar42 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
    fVar44 = *_fStack00000000000000b0;
    fVar42 = fVar58 * (fVar52 / (float)iVar12) * fVar64 * fVar49 * fVar60 * fVar42;
    fVar52 = *_fStack00000000000000a8;
    if ((in_stack_0000109c == 10) && (*(int *)((long)unaff_x19 + 0x494) != (int)unaff_x19[0x93])) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x38), lVar25 == 0))
      goto LAB_036afadc;
      uVar13 = *(int *)((long)unaff_x19 + 0x494) - 1;
      if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar49 = *(float *)(lVar25 + (long)(int)uVar13 * (long)iVar16 + 0x60);
      iVar12 = FUN_0396ac24(unaff_x19[0xcb] + 0x50,0);
      if (unaff_x19[0xcb] == 0) goto LAB_036afadc;
      fVar58 = (float)FUN_0396ac34(unaff_x19[0xcb] + 0x50,0);
      lVar25 = unaff_x19[0xca];
      fVar64 = fStack00000000000000a0;
      if (*(char *)((long)unaff_x19 + 0x305) != '\0') {
        fVar64 = 1.0;
      }
      if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_036afadc;
      fVar60 = *(float *)((long)unaff_x19 + 0x404);
      fVar43 = *(float *)(lVar25 + 0x2c);
      fVar42 = (float)FUN_0396b17c(*(long *)(lVar25 + 0x20),0);
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x50), lVar25 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
      fVar44 = *(float *)(lVar25 + 0x60);
      fVar52 = *(float *)(lVar25 + 100);
      fVar42 = fVar60 * (fVar49 / (float)iVar12) * fVar58 * fVar64 * fVar43 * fVar42;
    }
    fVar58 = *(float *)(unaff_x19 + 0x9b);
    fVar49 = 0.0;
    fVar64 = 0.0;
    if ((0.0 < fVar58) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
      fVar64 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
    }
    fVar43 = *(float *)(unaff_x19 + 0x97);
    fVar45 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar60 = *(float *)(unaff_x19 + 200);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xca] == 0) || (lVar25 = *(long *)(unaff_x19[0xca] + 0x20), lVar25 == 0))
      goto LAB_036afadc;
      FUN_0396b140(&stack0x000010a0,lVar25,0);
      fVar49 = (float)FUN_0396af88(&stack0x00000fc0,0);
    }
    puVar8 = PTR_DAT_03d9c920;
    fVar61 = *(float *)(unaff_x19 + 0x6c);
    fVar52 = (fStack00000000000000a4 - fVar44) - fVar52;
    bVar10 = true;
    if ((fVar61 <= fVar52) && (bVar10 = false, !NAN(fVar61))) {
      bVar10 = fVar61 == -1.0;
    }
    if (!bVar10) {
      fVar52 = fVar61;
    }
    fVar44 = 1.0;
    if (unaff_w28 != 0) {
      fVar44 = DAT_00b55374;
    }
    if (((fVar43 - (fVar45 - fVar58)) + fVar64 < fStack00000000000000c8) &&
       (ABS(fVar60) + fVar42 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) <
        fVar44 * fVar52)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_036ed2b4();
      lVar25 = *(long *)(*(long *)puVar8 + 0xb8);
      uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
      memcpy(&stack0x000010a0,(void *)(lVar25 + 0x788),0x378);
      FUN_02178ef4(lVar25 + 0x11f0,&stack0x000010a0,uVar17);
    }
  }
  lVar25 = *in_stack_00000190;
  if (lVar25 == 0) goto LAB_036afadc;
  lVar28 = *(long *)(lVar25 + 0x38);
  unaff_d13 = _fStack0000000000000140 & 0xffffffff;
  if (lVar28 == 0) goto LAB_036afadc;
  if (*(uint *)(lVar28 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  uVar13 = *(uint *)(unaff_x19 + 0x95);
  lVar28 = lVar28 + (long)(int)*unaff_x20 * unaff_x24;
  *(uint *)(lVar28 + 100) = uVar13;
  *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x96];
  if (((unaff_w23 & 1) == 0) &&
     ((0xd < in_stack_0000109c || ((1 << (ulong)(in_stack_0000109c & 0x1f) & 0x2c00U) == 0)))) {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_036afadc;
LAB_036aba84:
    if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
    *(int *)(lVar25 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
    if (*(int *)(lVar25 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_036aba84;
  }
  if (in_stack_0000109c == 9) {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar52 = (float)FUN_0396ad1c(*in_stack_00000178 + 0x50,0);
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar64 = *(float *)(unaff_x19 + 200);
    fVar49 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000178 + 0x1b9));
    fVar52 = fStack0000000000000140 * fVar52 * fVar49;
    fVar49 = fVar52 * (float)(int)(fVar64 / fVar52);
    uVar21 = (ulong)(uint)fVar49;
    if (fVar49 <= fVar64) {
      fVar49 = fVar64 + fVar52;
    }
LAB_036abca4:
    *(float *)(unaff_x19 + 200) = fVar49;
  }
  else if (*(float *)(unaff_x19 + 0x56) == 0.0) {
    if ((char)unaff_x19[0x1e] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x474) == '\0') {
        fVar64 = 1.0;
      }
      else {
        fVar64 = (float)thunk_FUN_03910e24(_fStack0000000000000080,0);
      }
      fVar49 = *(float *)(unaff_x19 + 200);
      fVar42 = (float)FUN_0396af88(&stack0x00001050,0);
      if (unaff_x19[0x20] == 0) goto LAB_036afadc;
      fVar52 = 1.0 - *(float *)((long)unaff_x19 + 0x2d4);
      fVar49 = fVar49 + fVar52 * (*(float *)((long)unaff_x19 + 0x2ac) +
                                 fStack0000000000000140 * (fStack0000000000000138 + fVar64 * fVar42)
                                 + in_stack_000000f0 *
                                   (in_stack_000000e0._4_4_ +
                                   fStack000000000000013c + *(float *)(unaff_x19[0x20] + 0x1ac)));
      *(float *)(unaff_x19 + 200) = fVar49;
      goto joined_r0x036abbe8;
    }
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (*(float *)((long)unaff_x19 + 0x2ac) +
             fStack0000000000000140 * fStack0000000000000138 +
             in_stack_000000f0 *
             (in_stack_000000e0._4_4_ +
             fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    uVar21 = (ulong)(uint)fVar49;
    fVar49 = *(float *)(unaff_x19 + 200) - fVar49;
    *(float *)(unaff_x19 + 200) = fVar49;
    if ((in_stack_0000109c == 0x200b) || (uStack0000000000000074 != 0)) {
      fVar52 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar21 = (ulong)(uint)fVar52;
      fVar49 = fVar49 - fVar52;
      goto LAB_036abca4;
    }
  }
  else {
    if (*in_stack_00000178 == 0) goto LAB_036afadc;
    fVar52 = *(float *)(unaff_x19 + 200);
    fVar49 = fVar52 + (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
                      (*(float *)((long)unaff_x19 + 0x2ac) +
                      (*(float *)(unaff_x19 + 0x56) - in_stack_00000098) +
                      in_stack_000000f0 *
                      (fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)));
    *(float *)(unaff_x19 + 200) = fVar49;
joined_r0x036abbe8:
    if ((in_stack_0000109c == 0x200b) || (uVar21 = (ulong)(uint)fVar52, uStack0000000000000074 != 0)
       ) {
      fVar52 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2b4);
      uVar21 = (ulong)(uint)fVar52;
      fVar49 = fVar49 + fVar52;
      goto LAB_036abca4;
    }
  }
  lVar25 = *in_stack_00000190;
  if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0)) goto LAB_036afadc;
  uVar13 = *unaff_x20;
  uVar55 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar55 <= uVar13) goto LAB_036afbe8;
  *(float *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x144) = fVar49;
  uVar41 = in_stack_0000109c;
  uVar65 = in_stack_0000109c;
  if ((int)in_stack_0000109c < 0xd) {
    if ((in_stack_0000109c - 10 < 2) || (in_stack_0000109c == 3)) goto LAB_036abd48;
LAB_036abd2c:
    if (((unaff_w23 & in_stack_0000109c == 0x2d) != 0) || ((float)uVar13 == in_stack_00000090._4_4_)
       ) goto LAB_036abd48;
  }
  else {
    if (1 < in_stack_0000109c - 0x2028) {
      if (in_stack_0000109c != 0xd) goto LAB_036abd2c;
      uVar21 = 0;
      *(float *)(unaff_x19 + 200) = *(float *)((long)unaff_x19 + 0x40c) + 0.0;
      if ((float)uVar13 != in_stack_00000090._4_4_) goto LAB_036ac2f4;
    }
LAB_036abd48:
    if (0.0 < *(float *)(unaff_x19 + 0x9b)) {
      fVar52 = *(float *)(unaff_x19 + 0x99);
      fVar49 = *(float *)(unaff_x19 + 0x9a);
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar52 = fVar52 - fVar49;
      if (((fStack0000000000000060 < ABS(fVar52)) && (*(char *)((long)unaff_x19 + 0x2c4) == '\0'))
         && (*(char *)((long)unaff_x19 + 0x33c) == '\0')) {
        FUN_036ed624(fVar52);
        *(float *)((long)unaff_x19 + 0x4c4) = *(float *)((long)unaff_x19 + 0x4c4) - fVar52;
        *(float *)(unaff_x19 + 0x9b) = fVar52 + *(float *)(unaff_x19 + 0x9b);
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
          *(float *)(lVar25 + 0x7bc) = fVar52 + *(float *)(lVar25 + 0x7bc);
          *(float *)(lVar25 + 0x800) = fVar52 + *(float *)(lVar25 + 0x800);
          uVar17 = *(undefined8 *)PTR_DAT_03d9c8c8;
          memcpy(&stack0x000010a0,(void *)(lVar25 + 0x788),0x378);
          FUN_02178ef4(lVar25 + 0x11f0,&stack0x000010a0,uVar17);
        }
      }
    }
    unaff_x29 = &stack0x00000fc0;
    fVar64 = *(float *)(unaff_x19 + 0x9b);
    *(undefined1 *)((long)unaff_x19 + 0x33c) = 0;
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc) - fVar64;
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar49 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar49;
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar52;
    fVar42 = *(float *)(unaff_x19 + 0x99);
    if (in_stack_00001094 == '\0') {
      in_stack_00001098 = fVar52;
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
    lVar40 = unaff_x19[0x93];
    lVar20 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(int *)(lVar20 + 0x34) = (int)lVar40;
    uVar55 = *(uint *)(unaff_x19 + 0x93);
    if ((int)lVar40 <= (int)*(uint *)((long)unaff_x19 + 0x49c)) {
      uVar55 = *(uint *)((long)unaff_x19 + 0x49c);
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar55;
    *(uint *)(lVar20 + 0x38) = uVar55;
    *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x494);
    *(undefined4 *)(lVar20 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x494);
    iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    if ((int)uVar55 <= *(int *)((long)unaff_x19 + 0x4a4)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x4a4);
    }
    *(int *)((long)unaff_x19 + 0x4a4) = iVar12;
    *(int *)(lVar20 + 0x40) = iVar12;
    *(int *)(lVar20 + 0x24) = (*(int *)(lVar20 + 0x3c) - *(int *)(lVar20 + 0x34)) + 1;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= uVar55) goto LAB_036afbe8;
    uVar63 = *(undefined4 *)(lVar25 + (long)(int)uVar55 * (long)iVar16 + 0x11c);
    lVar28 = lVar28 + (long)(int)uVar13 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar49;
    *(undefined4 *)(lVar28 + 0x6c) = uVar63;
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar28 = *(long *)(lVar25 + 0x50), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    fVar42 = fVar42 - fVar64;
    uVar21 = (ulong)(uint)fVar42;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x95) * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) =
         *(undefined4 *)(lVar25 + (long)(int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x128)
    ;
    *(float *)(lVar28 + 0x78) = fVar42;
    lVar25 = *in_stack_00000190;
    if ((lVar25 == 0) || (lVar40 = *(long *)(lVar25 + 0x50), lVar40 == 0)) goto LAB_036afadc;
    lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x95);
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x95)) goto LAB_036afbe8;
    lVar28 = lVar40 + lVar20 * 0x5c;
    *(float *)(lVar28 + 0x44) =
         *(float *)(lVar28 + 0x74) - fStack0000000000000140 * in_stack_00000170._4_4_;
    *(float *)(lVar28 + 0x5c) = in_stack_00000108._4_4_;
    if (*(int *)(lVar28 + 0x24) == 1) {
      *(int *)(lVar40 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4f];
    }
    if ((*in_stack_00000178 == 0) || (lVar28 = *(long *)(lVar25 + 0x38), lVar28 == 0))
    goto LAB_036afadc;
    lVar34 = (long)(int)*(uint *)((long)unaff_x19 + 0x4a4);
    uVar55 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar55 <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_036afbe8;
    if ((*(char *)(lVar28 + lVar34 * unaff_x24 + 0x194) == '\0') &&
       (lVar34 = (long)(int)*(uint *)(unaff_x19 + 0x94), uVar55 <= *(uint *)(unaff_x19 + 0x94)))
    goto LAB_036afbe8;
    lVar40 = lVar40 + lVar20 * 0x5c;
    fVar64 = (1.0 - *(float *)((long)unaff_x19 + 0x2d4)) *
             (in_stack_000000f0 *
              (in_stack_000000e0._4_4_ +
              fStack000000000000013c + *(float *)(*in_stack_00000178 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2ac));
    fVar52 = -fVar64;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar52 = fVar64;
    }
    *(float *)(lVar40 + 0x58) = *(float *)(lVar28 + lVar34 * unaff_x24 + 0x144) + fVar52;
    *(float *)(lVar40 + 0x50) = 0.0 - *(float *)(unaff_x19 + 0x9b);
    *(float *)(lVar40 + 0x54) = fVar49;
    *(float *)(lVar40 + 0x48) = fStack0000000000000064 + (fVar42 - fVar49);
    *(float *)(lVar40 + 0x4c) = fVar42;
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
        fVar52 = *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
        if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) {
          if ((in_stack_0000109c == 0x2029) || (fVar49 = 0.0, in_stack_0000109c == 10)) {
            fVar49 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 0;
          fVar49 = fVar52 + (0.0 - *(float *)((long)unaff_x19 + 0x4cc)) +
                   in_stack_00000058._4_4_ * (in_stack_00000050 + *(float *)((long)unaff_x19 + 700))
                   + in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar49) +
                   *(float *)(unaff_x19 + 0x9b);
        }
        else {
          if ((in_stack_0000109c == 0x2029) || (fVar49 = 0.0, in_stack_0000109c == 10)) {
            fVar49 = *(float *)((long)unaff_x19 + 0x2cc);
          }
          uVar23 = 1;
          fVar49 = *(float *)(unaff_x19 + 0x9b) +
                   *(float *)(unaff_x19 + 0x58) +
                   in_stack_000000f0 * (*(float *)(unaff_x19 + 0x57) + fVar49);
        }
        *(float *)(unaff_x19 + 0x9b) = fVar49;
        *(undefined1 *)((long)unaff_x19 + 0x2c4) = uVar23;
        puVar8 = PTR_DAT_03d9c920;
        lVar25 = *(long *)PTR_DAT_03d9c920;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar25 = *(long *)puVar8;
        }
        uVar17 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x9a) = fVar52;
        uVar21 = NEON_rev64(uVar17,4);
        unaff_x19[0x99] = uVar21;
        *(float *)(unaff_x19 + 200) =
             *(float *)(unaff_x19 + 0x81) + 0.0 + *(float *)((long)unaff_x19 + 0x40c);
        FUN_036ed2b4();
        FUN_036ed2b4();
        bStack0000000000000078 = 1;
        *(int *)((long)unaff_x19 + 0x494) = *(int *)((long)unaff_x19 + 0x494) + 1;
        in_stack_00000068 = 1;
        goto LAB_036a9250;
      }
      if (in_stack_0000109c == 3) {
        if (unaff_x19[0x8f] == 0) goto LAB_036afadc;
        in_stack_00001068 = (uint)*(undefined8 *)(unaff_x19[0x8f] + 0x18);
        uVar41 = 3;
      }
    }
    else if ((in_stack_0000109c - 0x2028 < 2) || (in_stack_0000109c == 0x2d)) goto LAB_036ac1c4;
  }
LAB_036ac2f4:
  uVar13 = *unaff_x20;
  if (uVar55 <= uVar13) goto LAB_036afbe8;
  if (*(char *)(lVar28 + (long)(int)uVar13 * unaff_x24 + 0x194) != '\0') {
    lVar28 = lVar28 + (long)(int)uVar13 * unaff_x24;
    uVar19 = *(ulong *)(lVar28 + 0x11c);
    uVar21 = *(ulong *)(in_stack_00000088 + 0x230);
    *(ulong *)(in_stack_00000088 + 0x230) =
         uVar21 ^ (uVar21 ^ uVar19) &
                  ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar19 >> 0x20)),
                            -(uint)((float)uVar21 < (float)uVar19));
    uVar19 = *(ulong *)(in_stack_00000088 + 0x238);
    uVar21 = *(ulong *)(lVar28 + 0x128);
    *(ulong *)(in_stack_00000088 + 0x238) =
         uVar19 ^ (uVar19 ^ uVar21) &
                  ~CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar19 >> 0x20)),
                            -(uint)((float)uVar21 < (float)uVar19));
  }
  if (((int)unaff_x19[0x5c] == 5) &&
     ((0xd < uVar41 || ((1 << (ulong)(uVar41 & 0x1f) & 0x2c00U) == 0)))) {
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
    uVar55 = *(uint *)(unaff_x19 + 0x96);
    lVar40 = (long)(int)uVar55;
    uVar13 = *(uint *)(lVar28 + 0x18);
    if (uVar13 <= uVar55) goto LAB_036afbe8;
    lVar20 = lVar28 + lVar40 * 0x14;
    fVar49 = *(float *)(lVar20 + 0x30);
    uVar21 = (ulong)(uint)fVar49;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4b4);
    fVar52 = *(float *)((long)unaff_x19 + 0x4c4);
    if (fVar49 <= *(float *)((long)unaff_x19 + 0x4c4)) {
      fVar52 = fVar49;
    }
    *(float *)(lVar20 + 0x30) = fVar52;
    uVar41 = *(uint *)((long)unaff_x19 + 0x494);
    if (uVar41 == 0 && uVar55 == 0) {
      *(uint *)(lVar28 + (ulong)uVar55 * 0x14 + 0x20) = uVar41;
    }
    else {
      uVar6 = uVar41 - 1;
      if (0 < (int)uVar41) {
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_036afadc;
        if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_036afbe8;
        if (uVar55 != *(uint *)(lVar25 + (ulong)uVar6 * (unaff_x24 & 0xffffffff) + 0x68)) {
          if (uVar13 <= uVar55 - 1) goto LAB_036afbe8;
          *(uint *)(lVar28 + 0x20 + (long)(int)(uVar55 - 1) * 0x14 + 4) = uVar6;
          *(uint *)(lVar28 + 0x20 + lVar40 * 0x14) = uVar41;
          goto LAB_036ac564;
        }
      }
      if ((float)uVar41 == in_stack_00000090._4_4_) {
        *(float *)(lVar28 + lVar40 * 0x14 + 0x24) = in_stack_00000090._4_4_;
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
      if ((bStack0000000000000078 & 1) != 0) goto LAB_036ac6f8;
      goto LAB_036ac91c;
    }
LAB_036ac660:
    if (((((0x2bfd < in_stack_0000109c - 0xac01) && (0xfd < in_stack_0000109c - 0x1101)) &&
         (0x1d < in_stack_0000109c - 0xa961)) || (uVar19 = FUN_036fbce8(0), (uVar19 & 1) != 0)) &&
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
      if (uVar47 != unaff_w25 || ((bStack0000000000000078 ^ 0xff) & 1) != 0) goto LAB_036ac920;
      if (uStack0000000000000074 == 0) goto LAB_036ac8a0;
      goto LAB_036ac868;
    }
    lVar25 = FUN_036fbb7c(0);
    if (((lVar25 == 0) || (*in_stack_00000190 == 0)) ||
       (lVar28 = *(long *)(*in_stack_00000190 + 0x38), lVar28 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar28 + 0x18) <= *unaff_x20 + 1) goto LAB_036afbe8;
    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_036afadc;
    uVar19 = FUN_0254f914(*(long *)(lVar25 + 0x18),
                          *(undefined2 *)
                           (lVar28 + (long)(int)(*unaff_x20 + 1) * (long)iVar16 + 0x20),
                          *(undefined8 *)PTR_DAT_03d9c860);
    if ((uVar13 & 1) != 0) goto LAB_036ac84c;
    if ((uVar19 & 1) == 0) goto LAB_036ac8e4;
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
      if (((0x28 < in_stack_0000109c - 0x2007) ||
          ((1L << ((ulong)(in_stack_0000109c - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_0000109c != 0xa0 && (in_stack_0000109c != 0x2060)))) {
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
      if (bStack000000000000007c == 0 && in_stack_0000109c == 0xad) goto LAB_036ac868;
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
LAB_036aadf4:
  if (*(int *)(*(long *)PTR_DAT_03d9c920 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  unaff_x29 = &stack0x00000fc0;
  in_stack_00001068 = FUN_036ecf20();
  param_8 = in_stack_00001068;
  if (*(float *)(unaff_x19 + 0x58) == DAT_00b55468) goto code_r0x036aae40;
  param_1 = unaff_x19[0x6d];
  *(undefined1 *)((long)unaff_x19 + 0x2c4) = 1;
  if (param_1 == 0) goto LAB_036afadc;
  param_2 = *(float *)(unaff_x19 + 0x9b);
  fVar52 = *(float *)(unaff_x19 + 0x58) + in_stack_000000f0 * *(float *)(unaff_x19 + 0x57);
  goto LAB_036ab258;
code_r0x036aae40:
  param_1 = *in_stack_00000190;
  if ((param_1 == 0) || (lVar25 = *(long *)(param_1 + 0x38), lVar25 == 0)) goto LAB_036afadc;
  if (*(uint *)(lVar25 + 0x18) <= *unaff_x20) goto LAB_036afbe8;
  param_2 = *(float *)(unaff_x19 + 0x9b);
  param_3 = 0.0;
  if ((0.0 < param_2) && (param_3 = 0.0, *(char *)((long)unaff_x19 + 0x2c4) == '\0')) {
    param_3 = *(float *)(unaff_x19 + 0x99) - *(float *)(unaff_x19 + 0x9a);
  }
  param_5 = *(float *)((long)unaff_x19 + 700);
  param_6 = *(float *)(lVar25 + (long)(int)*unaff_x20 * unaff_x24 + 0x154);
  param_3 = param_3 - *(float *)((long)unaff_x19 + 0x4cc);
  param_7 = *(float *)(unaff_x19 + 0x57);
  param_4 = in_stack_00000050;
  goto code_r0x036aaea8;
LAB_036ad4b0:
  uVar47 = uVar13 - 1;
  if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x50), lVar40 == 0))
  goto LAB_036afadc;
  lVar34 = (long)(int)uVar47;
  lVar20 = lVar25 + lVar34 * 0x178;
  uVar65 = *(uint *)(lVar20 + 100);
  if (*(uint *)(lVar40 + 0x18) <= uVar65) goto LAB_036afbe8;
  lVar37 = (long)(int)uVar65;
  lVar40 = lVar40 + lVar37 * 0x5c;
  lVar32 = *(long *)(lVar20 + 0x38);
  uVar3 = *(ushort *)(lVar20 + 0x20);
  uVar6 = *(uint *)(lVar40 + 0x3c);
  uVar41 = *(uint *)(lVar40 + 0x68);
  iVar2 = *(int *)(lVar40 + 0x20);
  iVar14 = *(int *)(lVar40 + 0x28);
  iVar15 = *(int *)(lVar40 + 0x2c);
  uVar5 = *(uint *)(lVar40 + 0x40);
  lVar20 = (long)(int)uVar5;
  fVar43 = *(float *)(lVar40 + 0x4c);
  fVar61 = *(float *)(lVar40 + 0x54);
  fVar44 = *(float *)(lVar40 + 0x58);
  fVar48 = *(float *)(lVar40 + 0x5c);
  fVar46 = *(float *)(lVar40 + 0x60);
  fVar53 = *(float *)(lVar40 + 0x6c);
  fVar57 = *(float *)(lVar40 + 0x70);
  fVar60 = *(float *)(lVar40 + 0x74);
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
      if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_036afbe8;
      uVar4 = *(undefined2 *)(lVar25 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar21 = FUN_02fde5f4(uVar4,0);
      if ((uVar21 & 1) == 0) {
        bVar1 = (int)uVar65 < (int)unaff_x19[0x95];
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
      if (((uVar13 == 1) || (uVar65 != uVar55)) || (uVar47 == *(uint *)((long)unaff_x19 + 0x324))) {
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
        cVar24 = (char)unaff_x19[0x1e];
        fVar46 = -fVar44;
        if (cVar24 != '\0') {
          fVar46 = fVar44;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_036afbe8;
        iVar15 = (int)*(char *)(lVar25 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack000000000000002c & 1)) + iVar15 + -1;
        if (iVar15 < 1) {
          fVar44 = 1.0;
          iVar15 = 1;
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
            uVar21 = FUN_02fdea78(uVar36,0);
            cVar24 = (char)unaff_x19[0x1e];
            if ((uVar21 & 1) != 0) goto LAB_036af498;
          }
          iVar15 = (iVar2 - (~(uint)fStack000000000000002c & 1)) + iVar14;
        }
        fVar44 = ((fVar48 + fVar46) * fVar44) / (float)iVar15;
        if (cVar24 == '\0') {
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
    fVar44 = fVar53 + fVar60;
    goto LAB_036ad650;
  }
switchD_036ad590_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  lVar40 = lVar25 + lVar34 * 0x178;
  fVar48 = in_stack_000000d0 + in_stack_00000108._4_4_;
  fVar44 = (float)_fStack00000000000000c8 + SUB84(in_stack_000000f8,0);
  fVar46 = (float)(_fStack00000000000000c8 >> 0x20) + (float)((ulong)in_stack_000000f8 >> 0x20);
  if (*(char *)(lVar40 + 0x194) == '\0') goto LAB_036adf70;
  iVar14 = *(int *)(lVar25 + lVar34 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_036add84;
  fVar58 = fmodf(*(float *)((long)unaff_x19 + 0x314) * (float)(int)uVar65,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x30c)) {
  case 0:
    lVar27 = lVar25 + lVar34 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar58 = 1.0;
    break;
  case 1:
    fVar45 = *(float *)(lVar25 + lVar34 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x274) == 0x208) {
      lVar27 = lVar25 + lVar34 * 0x178;
      fVar60 = (in_stack_00000108._4_4_ + fVar45) - *(float *)(in_stack_00000088 + 0x230);
      fVar45 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
      goto LAB_036ad804;
    }
    lVar27 = lVar25 + lVar34 * 0x178;
    fVar60 = fVar60 - fVar53;
    *(float *)(lVar27 + 0x84) = fVar58 + (fVar45 - fVar53) / fVar60;
    *(float *)(lVar27 + 0xac) = fVar58 + (*(float *)(lVar27 + 0x98) - fVar53) / fVar60;
    *(float *)(lVar27 + 0xd4) = fVar58 + (*(float *)(lVar27 + 0xc0) - fVar53) / fVar60;
    fVar58 = fVar58 + (*(float *)(lVar27 + 0xe8) - fVar53) / fVar60;
    break;
  case 2:
    lVar27 = lVar25 + lVar34 * 0x178;
    fVar45 = *(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230);
    fVar60 = (in_stack_00000108._4_4_ + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000088 + 0x230);
LAB_036ad804:
    *(float *)(lVar27 + 0x84) = fVar58 + fVar60 / fVar45;
    *(float *)(lVar27 + 0xac) =
         fVar58 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar58 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000088 + 0x230)) /
                  (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230));
    fVar58 = fVar58 + ((in_stack_00000108._4_4_ + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000088 + 0x230)) /
                      (*(float *)(in_stack_00000088 + 0x238) - *(float *)(in_stack_00000088 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x62]) {
    case 0:
      lVar27 = lVar25 + lVar34 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar25 + lVar34 * 0x178;
      fVar45 = fVar45 - fVar57;
      fVar60 = fVar58 + (*(float *)(lVar27 + 0x74) - fVar57) / fVar45;
      fVar45 = fVar58 + (*(float *)(lVar27 + 0x9c) - fVar57) / fVar45;
      *(float *)(lVar27 + 0x88) = fVar60;
      *(float *)(lVar27 + 0xb0) = fVar45;
      *(float *)(lVar27 + 0xd8) = fVar60;
      *(float *)(lVar27 + 0x100) = fVar45;
      break;
    case 2:
      lVar27 = lVar25 + lVar34 * 0x178;
      fVar60 = fVar58 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
                        (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
      *(float *)(lVar27 + 0x88) = fVar60;
      fVar45 = *(float *)(unaff_x19 + 0x9c);
      fVar53 = *(float *)(unaff_x19 + 0x9d);
      *(float *)(lVar27 + 0xd8) = fVar60;
      fVar60 = fVar58 + (*(float *)(lVar27 + 0x9c) - fVar45) / (fVar53 - fVar45);
      *(float *)(lVar27 + 0xb0) = fVar60;
      *(float *)(lVar27 + 0x100) = fVar60;
      break;
    case 3:
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f2acc(*(undefined8 *)PTR_DAT_03d9c948,0);
      uVar41 = (uint)*(undefined8 *)(lVar25 + 0x18);
    }
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar34 * 0x178;
    fVar60 = *(float *)(lVar27 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar60) * 0.5;
    fVar53 = fVar58 + *(float *)(lVar27 + 0x88) * fVar60 + fVar45;
    fVar58 = fVar58 + fVar45 + *(float *)(lVar27 + 0xb0) * fVar60;
    *(float *)(lVar27 + 0x84) = fVar53;
    *(float *)(lVar27 + 0xac) = fVar53;
    *(float *)(lVar27 + 0xd4) = fVar58;
    break;
  default:
    goto switchD_036ad764_default;
  }
  *(float *)(lVar25 + lVar34 * 0x178 + 0xfc) = fVar58;
switchD_036ad764_default:
  switch((int)unaff_x19[0x62]) {
  case 0:
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar34 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar47 < uVar41) {
      lVar27 = lVar25 + lVar34 * 0x178;
      fVar43 = fVar43 - fVar61;
      fVar58 = (*(float *)(lVar27 + 0x74) - fVar61) / fVar43;
      fVar43 = (*(float *)(lVar27 + 0x9c) - fVar61) / fVar43;
      *(float *)(lVar27 + 0x88) = fVar58;
      goto LAB_036adb68;
    }
    goto LAB_036afbe8;
  case 2:
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar34 * 0x178;
    fVar58 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
    *(float *)(lVar27 + 0x88) = fVar58;
    fVar43 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9c)) /
             (*(float *)(unaff_x19 + 0x9d) - *(float *)(unaff_x19 + 0x9c));
LAB_036adb68:
    *(float *)(lVar27 + 0xb0) = fVar43;
    *(float *)(lVar27 + 0xd8) = fVar43;
    *(float *)(lVar27 + 0x100) = fVar58;
    break;
  case 3:
    if (uVar41 <= uVar47) goto LAB_036afbe8;
    lVar27 = lVar25 + lVar34 * 0x178;
    fVar43 = *(float *)(lVar27 + 0x15c);
    fVar60 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar43) * 0.5;
    fVar58 = *(float *)(lVar27 + 0x84) / fVar43 + fVar60;
    fVar60 = fVar60 + *(float *)(lVar27 + 0xd4) / fVar43;
    *(float *)(lVar27 + 0x88) = fVar58;
    *(float *)(lVar27 + 0xb0) = fVar60;
    *(float *)(lVar27 + 0x100) = fVar58;
    *(float *)(lVar27 + 0xd8) = fVar60;
  }
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  lVar27 = lVar25 + lVar34 * 0x178;
  fVar58 = *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2d4));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar25 + lVar34 * 0x178 + 400) & 1) != 0)) {
    fVar58 = -fVar58;
  }
  fVar60 = fVar52;
  if (((iVar12 == 2) || (fVar60 = fVar64, iVar12 == 1)) || (fVar60 = fVar52 / fVar49, iVar12 == 0))
  {
    fVar58 = fVar60 * fVar58;
  }
  lVar27 = lVar25 + lVar34 * 0x178;
  fVar43 = *(float *)(lVar27 + 0x88);
  fVar45 = *(float *)(lVar27 + 0x84);
  fVar60 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar60 = (float)(int)fVar45;
  }
  fVar53 = *(float *)(lVar27 + 0xd4);
  fVar57 = *(float *)(lVar27 + 0xd8);
  fVar61 = -2.1474836e+09;
  if (fVar43 != INFINITY) {
    fVar61 = (float)(int)fVar43;
  }
  uVar50 = FUN_036f2b00(fVar45 - fVar60,fVar43 - fVar61);
  *(undefined4 *)(lVar27 + 0x84) = uVar50;
  if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
  fVar57 = fVar57 - fVar61;
  *(float *)(lVar27 + 0x88) = fVar58;
  uVar50 = FUN_036f2b00(fVar45 - fVar60,fVar57);
  *(undefined4 *)(lVar25 + lVar34 * 0x178 + 0xac) = uVar50;
  if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
  fVar53 = fVar53 - fVar60;
  *(float *)(lVar25 + lVar34 * 0x178 + 0xb0) = fVar58;
  fVar60 = (float)FUN_036f2b00(fVar53,fVar57);
  *(float *)(lVar27 + 0xd4) = fVar60;
  if (*(uint *)(lVar25 + 0x18) <= uVar47) goto LAB_036afbe8;
  *(float *)(lVar27 + 0xd8) = fVar58;
  uVar50 = FUN_036f2b00(fVar53,fVar43 - fVar61);
  *(undefined4 *)(lVar25 + lVar34 * 0x178 + 0xfc) = uVar50;
  uVar41 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  *(float *)(lVar25 + lVar34 * 0x178 + 0x100) = fVar58;
LAB_036add84:
  if (((int)uVar47 < (int)unaff_x19[0x65]) &&
     ((int)in_stack_000000e0._4_4_ < *(int *)((long)unaff_x19 + 0x32c))) {
    if (((int)uVar65 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] != 5)) {
      if (uVar41 <= uVar47) goto LAB_036afbe8;
      lVar40 = lVar25 + lVar34 * 0x178;
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
    if (((int)uVar65 < (int)unaff_x19[0x66]) && ((int)unaff_x19[0x5c] == 5)) {
      if (uVar47 < uVar41) {
        if (*(uint *)(lVar25 + lVar34 * 0x178 + 0x68) == uStack0000000000000030) {
          lVar40 = lVar25 + lVar34 * 0x178;
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
    uVar41 = *(uint *)(lVar25 + 0x18);
  }
  puVar8 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  uVar50 = *(undefined4 *)
            (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1)
  ;
  lVar27 = lVar25 + lVar34 * 0x178;
  *(undefined8 *)(lVar27 + 0x70) =
       **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar50;
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  lVar27 = lVar25 + lVar34 * 0x178;
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar50;
  uVar50 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar50;
  *(undefined1 *)(lVar40 + 0x194) = 0;
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
  if ((lVar40 == 0) || (lVar27 = *(long *)(lVar40 + 0x38), lVar27 == 0)) goto LAB_036afadc;
  uVar41 = *(uint *)(lVar27 + 0x18);
  if (uVar41 <= uVar47) goto LAB_036afbe8;
  lVar33 = lVar27 + lVar34 * 0x178;
  uVar19 = CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar33 + 0x140) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar33 + 0x140));
  fVar60 = fVar44 + *(float *)(lVar33 + 0x150);
  uVar54 = (ulong)(uint)fVar60;
  uVar56 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar33 + 0x148) >> 0x20),
                    fVar44 + (float)*(undefined8 *)(lVar33 + 0x148));
  *(float *)(lVar33 + 0x150) = fVar60;
  *(ulong *)(lVar33 + 0x140) = uVar19;
  *(ulong *)(lVar33 + 0x148) = uVar56;
  if (uVar65 == uVar55) {
    uVar55 = *unaff_x20 - 1;
    if (uVar47 == uVar55) goto LAB_036ae17c;
  }
  else {
    lVar40 = *(long *)(lVar40 + 0x50);
    if (lVar40 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar40 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar33 = (long)(int)uVar55;
    lVar35 = lVar40 + lVar33 * 0x5c;
    uVar56 = (ulong)(uint)*(float *)(lVar35 + 0x58);
    fVar60 = fVar44 + *(float *)(lVar35 + 0x54);
    uVar19 = (ulong)(uint)fVar60;
    fVar43 = fVar48 + *(float *)(lVar35 + 0x58);
    uVar54 = (ulong)(uint)fVar43;
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar44 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar60;
    *(float *)(lVar35 + 0x58) = fVar43;
    if (uVar41 <= *(uint *)(lVar35 + 0x34)) goto LAB_036afbe8;
    uVar50 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar40 = lVar40 + lVar33 * 0x5c;
    *(float *)(lVar40 + 0x70) = fVar60;
    *(undefined4 *)(lVar40 + 0x6c) = uVar50;
    lVar40 = *in_stack_00000190;
    if ((lVar40 == 0) || (lVar27 = *(long *)(lVar40 + 0x50), lVar27 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar40 = *(long *)(lVar40 + 0x38);
    if (lVar40 == 0) goto LAB_036afadc;
    uVar55 = *(uint *)(lVar27 + lVar33 * 0x5c + 0x40);
    if (*(uint *)(lVar40 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar33 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar55 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar55 = *unaff_x20 - 1;
LAB_036ae17c:
    if (uVar47 == uVar55) {
      lVar40 = *in_stack_00000190;
      if ((lVar40 == 0) || (lVar27 = *(long *)(lVar40 + 0x50), lVar27 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar65) goto LAB_036afbe8;
      lVar33 = lVar27 + lVar37 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar33 + 0x58);
      uVar19 = CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                        fVar44 + (float)*(undefined8 *)(lVar33 + 0x4c));
      fVar60 = fVar44 + *(float *)(lVar33 + 0x54);
      fVar48 = fVar48 + *(float *)(lVar33 + 0x58);
      uVar54 = (ulong)(uint)fVar48;
      *(ulong *)(lVar33 + 0x4c) = uVar19;
      *(float *)(lVar33 + 0x54) = fVar60;
      *(float *)(lVar33 + 0x58) = fVar48;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= *(uint *)(lVar33 + 0x34)) goto LAB_036afbe8;
      uVar50 = *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar37 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar60;
      *(undefined4 *)(lVar27 + 0x6c) = uVar50;
      lVar40 = *in_stack_00000190;
      if ((lVar40 == 0) || (lVar27 = *(long *)(lVar40 + 0x50), lVar27 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar65) goto LAB_036afbe8;
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_036afadc;
      uVar55 = *(uint *)(lVar27 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar40 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar37 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar40 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar21 = FUN_02fddb80(uVar36,0);
  if (((((uVar21 & 1) == 0) && (1 < uVar36 - 0x2010)) && (uVar36 != 0xad)) && (uVar36 != 0x2d)) {
    if (bVar7) {
      if (((uVar13 != 1) && ((int)uVar47 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
         (((int)uVar47 < (int)*unaff_x20 && ((uVar36 == 0x2019 || (uVar36 == 0x27)))))) {
        if (*(uint *)(lVar25 + 0x18) <= uVar13 - 2) goto LAB_036afbe8;
        uVar4 = *(undefined2 *)(lVar25 + lVar28 + -0x438);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar21 = FUN_02fddb80(uVar4,0);
        if ((uVar21 & 1) != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
          uVar4 = *(undefined2 *)(lVar25 + lVar28 + -0x148);
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar21 = FUN_02fddb80(uVar4,0);
          if ((uVar21 & 1) != 0) goto LAB_036ae3a0;
        }
      }
    }
    else {
      if (uVar13 != 1) {
LAB_036aeea4:
        bVar7 = false;
        goto LAB_036ae3a8;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar21 = FUN_02fddab4(uVar36,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar21 = FUN_02fdb080(uVar36,0);
        if (((uVar36 != 0x200b) && ((uVar21 & 1) == 0)) && (*unaff_x20 != 1)) goto LAB_036aeea4;
      }
    }
    if (uVar47 == *unaff_x20 - 1) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar21 = FUN_02fddb80(uVar36,0);
      iVar14 = (int)fStack0000000000000138;
      if ((uVar21 & 1) == 0) goto LAB_036ae6a8;
    }
    else {
LAB_036ae6a8:
      iVar14 = uVar13 - 2;
    }
    lVar40 = *in_stack_00000190;
    if (lVar40 == 0) goto LAB_036afadc;
    lVar27 = *(long *)(lVar40 + 0x40);
    if (lVar27 == 0) goto LAB_036afadc;
    uVar55 = *(uint *)(lVar40 + 0x24);
    iVar15 = *(int *)(lVar27 + 0x18);
    if (iVar15 < (int)(uVar55 + 1)) {
      if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52be8((long *)(lVar40 + 0x40),iVar15 + 1,*(undefined8 *)PTR_DAT_03d9c898);
      lVar40 = *in_stack_00000190;
      if (lVar40 == 0) goto LAB_036afadc;
    }
    lVar40 = *(long *)(lVar40 + 0x40);
    if (lVar40 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar40 + 0x18) <= uVar55) goto LAB_036afbe8;
    lVar40 = lVar40 + (long)(int)uVar55 * 0x18;
    *(long **)(lVar40 + 0x20) = unaff_x19;
    *(float *)(lVar40 + 0x28) = in_stack_00000170._4_4_;
    *(int *)(lVar40 + 0x2c) = iVar14;
    *(int *)(lVar40 + 0x30) = (iVar14 - (int)in_stack_00000170._4_4_) + 1;
    thunk_FUN_01b4f09c();
    lVar40 = unaff_x19[0x6d];
    if (lVar40 == 0) goto LAB_036afadc;
    lVar27 = *(long *)(lVar40 + 0x50);
    *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_036afadc;
    if (*(uint *)(lVar27 + 0x18) <= uVar65) goto LAB_036afbe8;
    lVar27 = lVar27 + lVar37 * 0x5c;
    bVar7 = false;
    in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      in_stack_00000170._4_4_ = (float)uVar47;
    }
    if (uVar47 == *unaff_x20 - 1) {
      lVar40 = *in_stack_00000190;
      if (lVar40 == 0) goto LAB_036afadc;
      lVar27 = *(long *)(lVar40 + 0x40);
      if (lVar27 == 0) goto LAB_036afadc;
      uVar55 = *(uint *)(lVar40 + 0x24);
      iVar14 = *(int *)(lVar27 + 0x18);
      if (iVar14 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_03d9c8a0 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52be8((long *)(lVar40 + 0x40),iVar14 + 1,*(undefined8 *)PTR_DAT_03d9c898);
        lVar40 = *in_stack_00000190;
        if (lVar40 == 0) goto LAB_036afadc;
      }
      lVar40 = *(long *)(lVar40 + 0x40);
      if (lVar40 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar55) goto LAB_036afbe8;
      lVar40 = lVar40 + (long)(int)uVar55 * 0x18;
      *(long **)(lVar40 + 0x20) = unaff_x19;
      *(float *)(lVar40 + 0x28) = in_stack_00000170._4_4_;
      *(uint *)(lVar40 + 0x2c) = uVar47;
      *(uint *)(lVar40 + 0x30) = uVar13 - (int)in_stack_00000170._4_4_;
      thunk_FUN_01b4f09c();
      lVar40 = unaff_x19[0x6d];
      if (lVar40 == 0) goto LAB_036afadc;
      lVar27 = *(long *)(lVar40 + 0x50);
      *(int *)(lVar40 + 0x24) = *(int *)(lVar40 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar27 + 0x18) <= uVar65) goto LAB_036afbe8;
      lVar27 = lVar27 + lVar37 * 0x5c;
      in_stack_000000e0._4_4_ = (float)((int)in_stack_000000e0._4_4_ + 1);
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_036ae3a0:
    bVar7 = true;
  }
LAB_036ae3a8:
  if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
  goto LAB_036afadc;
  uVar55 = *(uint *)(lVar40 + 0x18);
  if (uVar55 <= uVar47) goto LAB_036afbe8;
  if ((*(byte *)(lVar40 + lVar34 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_036ae3d8:
      if (uVar55 <= uVar13 - 2) goto LAB_036afbe8;
      lVar37 = *unaff_x19;
      uVar55 = *(uint *)(lVar40 + lVar28 + -0x330);
      uVar50 = *(undefined4 *)(lVar40 + lVar28 + -0x2f8);
LAB_036ae924:
      pcVar30 = *(code **)(lVar37 + 0x908);
LAB_036ae92c:
      uVar56 = (ulong)uVar55;
      uVar19 = (ulong)(uint)_bStack0000000000000078;
      uVar54 = (ulong)_bStack000000000000007c;
      (*pcVar30)(fStack0000000000000080,uVar19,uVar54,uVar56,fStack0000000000000114,0,
                 in_stack_00000090._4_4_,uVar50);
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
    iVar14 = *(int *)(lVar40 + 0x68);
    *(int *)(lVar40 + 0x16c) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar47) || ((int)unaff_x19[0x66] < (int)uVar65)) ||
       (((int)unaff_x19[0x5c] == 5 && (iVar14 + 1 != (int)unaff_x19[0x67])))) {
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
    uVar21 = FUN_02fdb080(uVar36,0);
    if ((uVar36 != 0x200b) && ((uVar21 & 1) == 0)) {
      lVar40 = *in_stack_00000190;
      if ((lVar40 == 0) || (lVar37 = *(long *)(lVar40 + 0x38), lVar37 == 0)) goto LAB_036afadc;
      if (*(uint *)(lVar37 + 0x18) <= uVar47) goto LAB_036afbe8;
      fVar60 = *(float *)(lVar37 + lVar34 * 0x178 + 0x160);
      if (fVar42 <= fVar60) {
        fVar42 = fVar60;
      }
      if (fStack0000000000000110 <= ABS(fVar58)) {
        fStack0000000000000110 = ABS(fVar58);
      }
      if (iVar14 != uStack0000000000000074) {
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
      fVar60 = (float)FUN_0396ace4(unaff_x19[0x1f] + 0x50,0);
      fVar43 = fVar43 + fVar42 * fVar60;
      if (fVar43 <= fStack0000000000000114) {
        fStack0000000000000114 = fVar43;
      }
      uVar19 = (ulong)(uint)fStack0000000000000114;
      uStack0000000000000074 = iVar14;
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
        uVar21 = FUN_02fdea78(uVar36,0);
        if ((uVar21 & 1) != 0) goto LAB_036ae88c;
      }
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
      lVar40 = lVar40 + lVar34 * 0x178;
      in_stack_00000090._4_4_ = *(float *)(lVar40 + 0x160);
      fStack0000000000000080 = *(float *)(lVar40 + 0x11c);
      uVar54 = (ulong)(uint)fStack0000000000000080;
      bVar11 = fVar42 != 0.0;
      fVar60 = in_stack_00000090._4_4_;
      if (bVar11) {
        fVar60 = fVar42;
      }
      fVar42 = fVar60;
      uVar63 = *(undefined4 *)(lVar40 + 0x168);
      _bStack000000000000007c = 0;
      fVar60 = fVar58;
      if (bVar11) {
        fVar60 = fStack0000000000000110;
      }
      uVar19 = (ulong)(uint)fVar60;
      _bStack0000000000000078 = fStack0000000000000114;
      fStack0000000000000110 = fVar60;
    }
    if (*unaff_x20 == 1) {
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        if (uVar47 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar34 * 0x178;
          lVar37 = *unaff_x19;
          uVar55 = *(uint *)(lVar40 + 0x128);
          uVar50 = *(undefined4 *)(lVar40 + 0x160);
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
      uVar21 = FUN_02fdb080(uVar36,0);
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        lVar37 = lVar34;
        uVar55 = uVar47;
        if (uVar36 == 0x200b || (uVar21 & 1) != 0) {
          lVar37 = lVar20;
          uVar55 = uVar5;
        }
        if (uVar55 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar37 * 0x178;
          uVar55 = *(uint *)(lVar40 + 0x128);
          uVar50 = *(undefined4 *)(lVar40 + 0x160);
          pcVar30 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_036ae92c;
        }
        goto LAB_036afbe8;
      }
      goto LAB_036afadc;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        uVar55 = *(uint *)(lVar40 + 0x18);
        goto LAB_036ae3d8;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar47 < (int)(*unaff_x20 - 1)) {
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar13) goto LAB_036afbe8;
      uVar21 = FUN_036c0e18(uVar63,*(undefined4 *)(lVar40 + lVar28),0);
      if ((uVar21 & 1) == 0) {
        if ((*in_stack_00000190 != 0) &&
           (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0)) {
          if (uVar47 < *(uint *)(lVar40 + 0x18)) {
            lVar40 = lVar40 + lVar34 * 0x178;
            uVar56 = (ulong)*(uint *)(lVar40 + 0x128);
            uVar54 = (ulong)_bStack000000000000007c;
            uVar19 = (ulong)(uint)_bStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000080,uVar19,uVar54,uVar56,fStack0000000000000114,0,
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
  uVar55 = *(uint *)(lVar40 + lVar34 * 0x178 + 400);
  fVar60 = (float)FUN_0396ad04(lVar32 + 0x50,0);
  if ((uVar55 >> 6 & 1) == 0) {
    if ((_fStack0000000000000138 & 0x100000000) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar13 - 2) goto LAB_036afbe8;
      uVar55 = *(uint *)(lVar40 + lVar28 + -0x330);
      fVar44 = *(float *)(lVar40 + lVar28 + -0x30c);
      pcVar30 = *(code **)(*unaff_x19 + 0x908);
LAB_036aef4c:
      uVar56 = (ulong)uVar55;
      uVar19 = (ulong)(uint)fStack00000000000000a4;
      uVar54 = (ulong)(uint)fStack00000000000000a0;
      (*pcVar30)(fStack00000000000000a8,uVar19,uVar54,uVar56,
                 fStack00000000000000b0 * fVar60 + fVar44,0,fStack00000000000000b0,
                 fStack00000000000000b0);
    }
LAB_036aef80:
    _fStack0000000000000138 = _fStack0000000000000138 & 0xffffffff;
  }
  else {
    lVar40 = *in_stack_00000190;
    if ((lVar40 == 0) || (lVar37 = *(long *)(lVar40 + 0x38), lVar37 == 0)) goto LAB_036afadc;
    if (*(uint *)(lVar37 + 0x18) <= uVar47) goto LAB_036afbe8;
    *(int *)(lVar37 + lVar34 * 0x178 + 0x174) = iVar16;
    if ((((int)unaff_x19[0x65] < (int)uVar47) || ((int)unaff_x19[0x66] < (int)uVar65)) ||
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
        uVar21 = FUN_02fdea78(uVar36,0);
        if ((uVar21 & 1) != 0) goto LAB_036aeb20;
        lVar40 = *in_stack_00000190;
        if (lVar40 == 0) goto LAB_036afadc;
      }
      lVar40 = *(long *)(lVar40 + 0x38);
      if (lVar40 == 0) goto LAB_036afadc;
      if (*(uint *)(lVar40 + 0x18) <= uVar47) goto LAB_036afbe8;
      lVar40 = lVar40 + lVar34 * 0x178;
      fStack000000000000004c = *(float *)(lVar40 + 0x60);
      fStack0000000000000040 = *(float *)(lVar40 + 0x14c);
      uVar19 = (ulong)(uint)fStack0000000000000040;
      fStack00000000000000a8 = *(float *)(lVar40 + 0x11c);
      uVar54 = (ulong)(uint)fStack00000000000000a8;
      fStack00000000000000b0 = *(float *)(lVar40 + 0x160);
      fStack00000000000000a4 = fVar60 * fStack00000000000000b0 + fStack0000000000000040;
      fStack00000000000000a0 = 0.0;
    }
    uVar55 = *unaff_x20;
    if (uVar55 == 1) {
LAB_036aec60:
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        if (uVar47 < *(uint *)(lVar40 + 0x18)) {
          lVar40 = lVar40 + lVar34 * 0x178;
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar40 + 0x128);
          fVar44 = *(float *)(lVar40 + 0x14c);
LAB_036aec8c:
          pcVar30 = *(code **)(lVar20 + 0x908);
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
      uVar21 = FUN_02fdb080(uVar36,0);
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        uVar55 = *(uint *)(lVar40 + 0x18);
        if (uVar36 == 0x200b || (uVar21 & 1) != 0) {
          if (uVar55 <= uVar5) goto LAB_036afbe8;
        }
        else {
LAB_036aef20:
          lVar20 = lVar34;
          if (uVar55 <= uVar47) goto LAB_036afbe8;
        }
LAB_036aef28:
        lVar40 = lVar40 + lVar20 * 0x178;
        fVar44 = *(float *)(lVar40 + 0x14c);
        uVar55 = *(uint *)(lVar40 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_036aef4c;
      }
      goto LAB_036afadc;
    }
    if ((int)uVar47 < (int)uVar55) {
      lVar40 = *in_stack_00000190;
      if ((lVar40 != 0) && (lVar37 = *(long *)(lVar40 + 0x38), lVar37 != 0)) {
        if (uVar13 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lVar28 + -0x108) == fStack000000000000004c) {
            fVar43 = *(float *)(lVar37 + lVar28 + -0x1c);
            if (*(int *)(*(long *)PTR_DAT_03d9c880 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar19 = (ulong)(uint)fStack0000000000000040;
            uVar21 = FUN_036c122c(fVar44 + fVar43,uVar19,0);
            if ((uVar21 & 1) != 0) {
              uVar55 = *unaff_x20;
              goto LAB_036aed7c;
            }
            lVar40 = *in_stack_00000190;
            if (lVar40 == 0) goto LAB_036afadc;
          }
          lVar40 = *(long *)(lVar40 + 0x38);
          if (lVar40 != 0) {
            uVar55 = *(uint *)(lVar40 + 0x18);
            if ((int)uVar47 <= (int)uVar5) goto LAB_036aef20;
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
    if ((int)uVar47 < (int)uVar55) {
      iVar14 = FUN_03922ce0(lVar32,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar13) goto LAB_036afbe8;
      lVar40 = *(long *)(lVar25 + lVar28 + -0x130);
      if (lVar40 == 0) goto LAB_036afadc;
      iVar15 = FUN_03922ce0(lVar40,0);
      if (iVar14 != iVar15) goto LAB_036aec60;
    }
    if (!bVar1) {
      if ((*in_stack_00000190 != 0) && (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 != 0))
      {
        if (uVar13 - 2 < *(uint *)(lVar40 + 0x18)) {
          lVar20 = *unaff_x19;
          uVar55 = *(uint *)(lVar40 + lVar28 + -0x330);
          fVar44 = *(float *)(lVar40 + lVar28 + -0x30c);
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
  uVar55 = (uint)*(undefined8 *)(lVar40 + 0x18);
  if (uVar55 <= uVar47) goto LAB_036afbe8;
  if ((*(byte *)(lVar40 + lVar34 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      uVar54 = (ulong)in_stack_000000c0._4_4_;
      uVar19 = (ulong)(uint)fStack00000000000000ec;
      uVar56 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar19,uVar54,uVar56,fStack00000000000000d8,uVar54);
    }
LAB_036aefe8:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[0x65] < (int)uVar47) || ((int)unaff_x19[0x66] < (int)uVar65)) ||
       (((int)unaff_x19[0x5c] == 5 &&
        (*(int *)(lVar40 + lVar34 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x67])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar36 == 0xd) || ((uVar36 & 0xfffe) == 10)) || ((int)uVar5 < (int)uVar47)) || (!bVar1)
         ) goto LAB_036aefe8;
      if (uVar47 == uVar5) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar21 = FUN_02fdea78(uVar36,0);
        if ((uVar21 & 1) != 0) goto LAB_036aefe8;
      }
      puVar8 = PTR_DAT_03d9c920;
      lVar20 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar20 = *(long *)puVar8;
      }
      if ((*in_stack_00000190 == 0) || (lVar40 = *(long *)(*in_stack_00000190 + 0x38), lVar40 == 0))
      goto LAB_036afadc;
      uVar55 = (uint)*(undefined8 *)(lVar40 + 0x18);
      if (uVar55 <= uVar47) goto LAB_036afbe8;
      lVar20 = *(long *)(lVar20 + 0xb8);
      lVar32 = lVar40 + lVar34 * 0x178;
      in_stack_00001078 = *(undefined8 *)(lVar32 + 0x184);
      in_stack_00001070 = *(undefined8 *)(lVar32 + 0x17c);
      fStack00000000000000e8 = *(float *)(lVar20 + 0x1598);
      fStack00000000000000ec = *(float *)(lVar20 + 0x159c);
      in_stack_00001080 = *(float *)(lVar32 + 0x18c);
      fStack00000000000000d4 = *(float *)(lVar20 + 0x15a0);
      fStack00000000000000d8 = *(float *)(lVar20 + 0x15a4);
      in_stack_000000c0._4_4_ = 0;
    }
    if (uVar55 <= uVar47) goto LAB_036afbe8;
    lVar40 = lVar40 + lVar34 * 0x178;
    fVar60 = *(float *)(lVar40 + 0x128);
    fVar61 = *(float *)(lVar40 + 0x188);
    uVar18 = *(undefined8 *)(lVar40 + 0x17c);
    fVar53 = *(float *)(lVar40 + 0x184);
    uVar17 = *(undefined8 *)(lVar40 + 0x184);
    fVar46 = *(float *)(lVar40 + 0x18c);
    fVar44 = *(float *)(lVar40 + 0x11c);
    fVar43 = *(float *)(lVar40 + 0x148);
    fVar45 = *(float *)(lVar40 + 0x150);
    in_stack_00000198 = uVar18;
    fStack00000000000001a0 = fVar53;
    fStack00000000000001a4 = fVar61;
    in_stack_000001a8 = fVar46;
    in_stack_000001b0 = in_stack_00001070;
    in_stack_000001b8 = in_stack_00001078;
    in_stack_000001c0 = in_stack_00001080;
    uVar21 = FUN_036c2228(&stack0x000001b0,&stack0x00000198,0);
    lVar40 = *(long *)PTR_DAT_03d9c888;
    if ((uVar21 & 1) == 0) {
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar40);
      }
      fVar60 = fVar60 + (float)in_stack_00001078;
      uVar54 = (ulong)(uint)fVar60;
      fVar44 = fVar44 - (float)((ulong)in_stack_00001070 >> 0x20);
      fVar43 = fVar43 + (float)((ulong)in_stack_00001078 >> 0x20);
      uVar56 = (ulong)(uint)fVar43;
      if (fVar44 <= fStack00000000000000e8) {
        fStack00000000000000e8 = fVar44;
      }
      if (fVar45 - in_stack_00001080 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar45 - in_stack_00001080;
      }
      if (fStack00000000000000d4 <= fVar60) {
        fStack00000000000000d4 = fVar60;
      }
      uVar19 = (ulong)(uint)fStack00000000000000d4;
      if (fStack00000000000000d8 <= fVar43) {
        fStack00000000000000d8 = fVar43;
      }
    }
    else {
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar40);
      }
      fVar44 = (fVar44 + (fStack00000000000000d4 - (float)in_stack_00001078)) * 0.5;
      uVar56 = (ulong)(uint)fVar44;
      if (fVar45 <= fStack00000000000000ec) {
        fStack00000000000000ec = fVar45;
      }
      uVar19 = (ulong)(uint)fStack00000000000000ec;
      uVar54 = (ulong)in_stack_000000c0._4_4_;
      if (fStack00000000000000d8 <= fVar43) {
        fStack00000000000000d8 = fVar43;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar19,uVar54,uVar56,fStack00000000000000d8,uVar54);
      fStack00000000000000ec = fVar45 - fVar46;
      fStack00000000000000d4 = fVar60 + fVar53;
      in_stack_000000c0._4_4_ = 0;
      fStack00000000000000d8 = fVar43 + fVar61;
      fStack00000000000000e8 = fVar44;
      in_stack_00001070 = uVar18;
      in_stack_00001078 = uVar17;
      in_stack_00001080 = fVar46;
    }
    if (((*unaff_x20 == 1) || (uVar47 == uVar6)) || (((int)uVar5 <= (int)uVar47 || (!bVar1)))) {
      uVar54 = (ulong)in_stack_000000c0._4_4_;
      uVar19 = (ulong)(uint)fStack00000000000000ec;
      uVar56 = (ulong)(uint)fStack00000000000000d4;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000e8,uVar19,uVar54,uVar56,fStack00000000000000d8,uVar54);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar47 = *unaff_x20;
  lVar28 = lVar28 + 0x178;
  _fStack0000000000000138 = CONCAT44(fStack000000000000013c,(int)fStack0000000000000138 + 1);
  bVar1 = (int)uVar47 <= (int)uVar13;
  uVar13 = uVar13 + 1;
  uVar55 = uVar65;
  if (bVar1) goto LAB_036af4fc;
  goto LAB_036ad4b0;
LAB_036af4fc:
  lVar25 = *in_stack_00000190;
  if (lVar25 != 0) {
    iVar16 = uVar65 + 1;
    plVar39 = (long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
LAB_036af524:
    *(uint *)(lVar25 + 0x18) = uVar47;
    lVar28 = unaff_x19[0xd4];
    *(int *)(lVar25 + 0x2c) = iVar16;
    if ((int)uVar47 < 1 || in_stack_000000e0._4_4_ == 0.0) {
      in_stack_000000e0._4_4_ = 1.4013e-45;
    }
    *(int *)(lVar25 + 0x1c) = (int)lVar28;
    *(float *)(lVar25 + 0x24) = in_stack_000000e0._4_4_;
    *(int *)(lVar25 + 0x30) = (int)unaff_x19[0x96] + 1;
    if (((int)unaff_x19[99] != 0xff) ||
       (uVar21 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar21 & 1) == 0)) {
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
    iVar16 = FUN_03afacb8(unaff_x19[0xe5],0);
    if (iVar16 != 0x19) {
      lVar25 = unaff_x19[0xe5];
      if (lVar25 == 0) goto LAB_036afadc;
      uVar47 = FUN_03afacb8(lVar25,0);
      FUN_03afacf4(lVar25,uVar47 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*in_stack_00000190 == 0) || (lVar25 = *(long *)(*in_stack_00000190 + 0x60), lVar25 == 0))
      goto LAB_036afadc;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
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
                            uVar17 = FUN_03af892c(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar47 = FUN_03af8794(unaff_x19[0xe4],0);
                              lVar25 = *in_stack_00000190;
                              if (lVar25 != 0) {
                                lVar40 = 0;
                                lVar28 = 0;
                                do {
                                  uVar21 = lVar28 + 1;
                                  if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar21)
                                  goto LAB_036acd60;
                                  lVar25 = *(long *)(lVar25 + 0x60);
                                  if (lVar25 == 0) break;
                                  if (*(int *)(*plVar39 + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                  FUN_036fa544(lVar25 + lVar40 + 0x70,0);
                                  lVar25 = unaff_x19[0xe1];
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                  uVar18 = *(undefined8 *)(lVar25 + lVar28 * 8 + 0x28);
                                  if (*(int *)(*(long *)
                                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                              + 0xe0) == 0) {
                                    thunk_FUN_01ac7298();
                                  }
                                  uVar22 = FUN_03922f24(uVar18,0,0);
                                  if ((uVar22 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*in_stack_00000190 == 0) ||
                                         (lVar25 = *(long *)(*in_stack_00000190 + 0x60), lVar25 == 0
                                         )) break;
                                      if (*(int *)(*plVar39 + 0xe0) == 0) {
                                        thunk_FUN_01ac7298();
                                      }
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                      FUN_036fa678(lVar25 + lVar40 + 0x70,1,0);
                                    }
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000190 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_0390262c(lVar25,*(undefined8 *)(lVar20 + lVar40 + 0x80),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000190 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_03902830(lVar25,*(undefined8 *)(lVar20 + lVar40 + 0x98),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000190 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_039028dc(lVar25,*(undefined8 *)(lVar20 + lVar40 + 0xa0),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_03702ba4(lVar25,0);
                                    if ((*in_stack_00000190 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000190 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    if (lVar25 == 0) break;
                                    FUN_03902a3c(lVar25,*(undefined8 *)(lVar20 + lVar40 + 0xa8),0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_03702ba4(lVar25,0), lVar25 == 0)) break;
                                    FUN_03904ddc(lVar25,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_039add2c(lVar25,0);
                                    lVar20 = unaff_x19[0xe1];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar20 = *(long *)(lVar20 + lVar28 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar18 = FUN_03702ba4(lVar20,0), lVar25 == 0)) break;
                                    FUN_03af8c9c(lVar25,uVar18,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_039add2c(lVar25,0), lVar25 == 0)) break;
                                    FUN_03af8894(uVar17,uVar19,uVar54,uVar56,lVar25,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    lVar25 = *(long *)(lVar25 + lVar28 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_039add2c(lVar25,0), lVar25 == 0)) break;
                                    FUN_03af87d0(lVar25,uVar47 & 1,0);
                                    lVar25 = unaff_x19[0xe1];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_036afbe8;
                                    plVar38 = *(long **)(lVar25 + lVar28 * 8 + 0x28);
                                    uVar13 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar38 == (long *)0x0) break;
                                    (**(code **)(*plVar38 + 0x2c8))
                                              (plVar38,uVar13 & 1,*(undefined8 *)(*plVar38 + 0x2d0))
                                    ;
                                  }
                                  lVar25 = *in_stack_00000190;
                                  lVar28 = lVar28 + 1;
                                  lVar40 = lVar40 + 0x50;
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


