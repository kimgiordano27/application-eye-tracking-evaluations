/*
FUNCTION_NAME: FUN_03212018
ENTRY_POINT: 03212018
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;telemetry_or_network_hits_14
*/


void FUN_03212018(undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong *puVar10;
  undefined4 *puVar11;
  long *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float unaff_s11;
  undefined4 uVar30;
  float unaff_s12;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uStack0000000000000070;
  uint uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  uint in_stack_00000098;
  ulong in_stack_00000100;
  ulong in_stack_00000108;
  ulong in_stack_00000110;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  undefined4 in_stack_00000128;
  ulong in_stack_00000130;
  undefined4 in_stack_00000138;
  ulong in_stack_00000140;
  float fStack0000000000000148;
  float fStack000000000000014c;
  ulong in_stack_00000150;
  ulong in_stack_00000158;
  ulong in_stack_00000160;
  float in_stack_00000168;
  ulong in_stack_00000170;
  float in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  ulong in_stack_00000190;
  float in_stack_00000198;
  
  fVar18 = unaff_s12 * param_2;
  param_3 = param_3 * param_4;
  FUN_03914564(unaff_s11 * param_2,fVar18,param_3,0);
  if ((unaff_x22 & 1) != 0) {
    if ((unaff_x24 & 1) == 0) {
      if (unaff_x19[6] == 0) goto LAB_03213298;
      FUN_03929060(unaff_x19[6],0);
      lVar7 = unaff_x19[6];
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (*(char *)(unaff_x25 + 0x3d9) == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
        *(undefined1 *)(unaff_x25 + 0x3d9) = 1;
      }
      lVar8 = *unaff_x20;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *unaff_x20;
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
      if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_03213298;
      fVar18 = *(float *)(lVar8 + 0x5c);
      param_3 = *(float *)(lVar8 + 0x60);
      FUN_039282dc(*(undefined4 *)(lVar8 + 0x58),fVar18,param_3,lVar7,0);
LAB_03212358:
      if (unaff_x19[6] == 0) goto LAB_03213298;
      lVar7 = unaff_x19[5];
      FUN_03928280(unaff_x19[6],0);
      if (lVar7 == 0) goto LAB_03213298;
      FUN_039282dc(lVar7,0);
      if (unaff_x19[6] == 0) goto LAB_03213298;
      lVar7 = unaff_x19[7];
      FUN_03928280(unaff_x19[6],0);
      if (lVar7 == 0) goto LAB_03213298;
      FUN_039282dc(lVar7,0);
      if (unaff_x19[6] == 0) goto LAB_03213298;
      lVar7 = unaff_x19[5];
      FUN_03928fd8(unaff_x19[6],0);
      if (lVar7 == 0) goto LAB_03213298;
      FUN_03929060(lVar7,0);
      if (unaff_x19[6] == 0) goto LAB_03213298;
      lVar7 = unaff_x19[7];
      uVar6 = FUN_03928fd8(unaff_x19[6],0);
      if (lVar7 == 0) goto LAB_03213298;
    }
    else {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      in_stack_00000190 =
           **(ulong **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      fVar18 = *(float *)(*(ulong **)
                           (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8) + 1);
      in_stack_00000198 = fVar18;
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
      in_stack_00000188 =
           (*(ulong **)
             (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8
             ))[1];
      in_stack_00000180 =
           **(ulong **)
             (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ + 0xb8
             );
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c14c(2,4,2,0xffffffff,&stack0x00000190);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[6] == 0) goto LAB_03213298;
        fVar18 = (float)(in_stack_00000190 >> 0x20);
        param_3 = in_stack_00000198;
        FUN_039282dc(in_stack_00000190 & 0xffffffff,in_stack_00000190 >> 0x20,in_stack_00000198,
                     unaff_x19[6],0);
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c4d8(2,5,2,0xffffffff,&stack0x00000180);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[6] == 0) goto LAB_03213298;
        param_4 = (float)(in_stack_00000188 >> 0x20);
        param_3 = (float)in_stack_00000188;
        fVar18 = (float)(in_stack_00000180 >> 0x20);
        FUN_03929060(in_stack_00000180 & 0xffffffff,in_stack_00000180 >> 0x20,
                     in_stack_00000188 & 0xffffffff,in_stack_00000188 >> 0x20,unaff_x19[6],0);
      }
      if ((unaff_x23 & 1) != 0) goto LAB_03212358;
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar10 = *(ulong **)(*(long *)puVar2 + 0xb8);
      in_stack_00000170 = *puVar10;
      in_stack_00000178 = *(float *)(puVar10 + 1);
      in_stack_00000160 = *puVar10;
      fVar18 = *(float *)(puVar10 + 1);
      in_stack_00000168 = fVar18;
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar10 = *(ulong **)(*(long *)puVar1 + 0xb8);
      in_stack_00000158 = puVar10[1];
      in_stack_00000150 = *puVar10;
      _fStack0000000000000148 = puVar10[1];
      in_stack_00000140 = *puVar10;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c14c(0,4,0,0xffffffff,&stack0x00000170);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[5] == 0) goto LAB_03213298;
        fVar18 = (float)(in_stack_00000170 >> 0x20);
        param_3 = in_stack_00000178;
        FUN_039282dc(in_stack_00000170 & 0xffffffff,in_stack_00000170 >> 0x20,in_stack_00000178,
                     unaff_x19[5],0);
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c14c(1,4,1,0xffffffff,&stack0x00000160);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[7] == 0) goto LAB_03213298;
        fVar18 = (float)(in_stack_00000160 >> 0x20);
        param_3 = in_stack_00000168;
        FUN_039282dc(in_stack_00000160 & 0xffffffff,in_stack_00000160 >> 0x20,in_stack_00000168,
                     unaff_x19[7],0);
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c4d8(0,5,0,0xffffffff,&stack0x00000150);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[5] == 0) goto LAB_03213298;
        param_4 = (float)(in_stack_00000158 >> 0x20);
        param_3 = (float)in_stack_00000158;
        fVar18 = (float)(in_stack_00000150 >> 0x20);
        FUN_03929060(in_stack_00000150 & 0xffffffff,in_stack_00000150 >> 0x20,
                     in_stack_00000158 & 0xffffffff,in_stack_00000158 >> 0x20,unaff_x19[5],0);
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c4d8(1,5,1,0xffffffff,&stack0x00000140);
      if ((uVar6 & 1) == 0) goto LAB_032123e8;
      lVar7 = unaff_x19[7];
      if (lVar7 == 0) goto LAB_03213298;
      uVar6 = in_stack_00000140 & 0xffffffff;
      param_4 = fStack000000000000014c;
      param_3 = fStack0000000000000148;
      fVar18 = in_stack_00000140._4_4_;
    }
    FUN_03929060(uVar6,lVar7,0);
  }
LAB_032123e8:
  if ((unaff_x21 & 1) != 0) {
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *unaff_x20;
    }
    puVar2 = 
    Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
    ;
    if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x100) == 2) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar10 = *(ulong **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      in_stack_00000130 = *puVar10;
      in_stack_00000138 = (undefined4)puVar10[1];
      in_stack_00000120 = *puVar10;
      in_stack_00000128 = (undefined4)puVar10[1];
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      puVar10 = *(ulong **)
                 (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                 0xb8);
      in_stack_00000118 = puVar10[1];
      in_stack_00000110 = *puVar10;
      in_stack_00000108 = puVar10[1];
      in_stack_00000100 = *puVar10;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c14c(4,4,3,0xffffffff,&stack0x00000130);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_03213298;
        FUN_039282dc(in_stack_00000130 & 0xffffffff,in_stack_00000130._4_4_,in_stack_00000138,
                     unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c14c(5,4,4,0xffffffff,&stack0x00000120);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[9] == 0) goto LAB_03213298;
        FUN_039282dc(in_stack_00000120 & 0xffffffff,in_stack_00000120._4_4_,in_stack_00000128,
                     unaff_x19[9],0);
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c4d8(4,5,3,0xffffffff,&stack0x00000110);
      if ((uVar6 & 1) != 0) {
        if (unaff_x19[8] == 0) goto LAB_03213298;
        FUN_03929060(in_stack_00000110 & 0xffffffff,in_stack_00000110._4_4_,
                     in_stack_00000118 & 0xffffffff,in_stack_00000118._4_4_,unaff_x19[8],0);
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0320c4d8(5,5,4,0xffffffff,&stack0x00000100);
      if ((uVar6 & 1) != 0) {
        lVar7 = unaff_x19[9];
        if (lVar7 == 0) goto LAB_03213298;
        puVar10 = &stack0x00000100;
        goto LAB_03212dd8;
      }
    }
    else {
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar4 = FUN_0322c420(1,0);
      iVar5 = FUN_0322c420(2,0);
      if (uVar4 == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = 0x20;
        uVar6 = FUN_0322c0ec(0x20,0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar4 = FUN_0322c0ec(1,0);
          uVar4 = uVar4 & 1;
        }
      }
      if (iVar5 == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar5 = 0x40;
        uVar6 = FUN_0322c0ec(0x40,0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_0322c0ec(2,0);
          iVar5 = 2;
          if ((uVar6 & 1) == 0) {
            iVar5 = 0;
          }
        }
      }
      lVar7 = unaff_x19[8];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_0322c524(uVar4,0);
      if (lVar7 == 0) goto LAB_03213298;
      FUN_039282dc(lVar7,0);
      lVar7 = unaff_x19[9];
      FUN_0322c524(iVar5,0);
      if (lVar7 == 0) goto LAB_03213298;
      FUN_039282dc(lVar7,0);
      lVar7 = unaff_x19[8];
      FUN_0322cfb8(uVar4,0);
      if (lVar7 == 0) goto LAB_03213298;
      FUN_03929060(lVar7,0);
      lVar7 = unaff_x19[9];
      FUN_0322cfb8(iVar5,0);
      if (lVar7 == 0) goto LAB_03213298;
      FUN_03929060(lVar7,0);
      iVar5 = FUN_0322c320(0,0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
      if (iVar5 == 1) {
        lVar7 = unaff_x19[4];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0322c524(0x20,0);
        if (lVar7 == 0) goto LAB_03213298;
        FUN_03927438(lVar7,0);
        if (unaff_x19[8] == 0) goto LAB_03213298;
        lVar7 = unaff_x19[0xd];
        FUN_0392a520(unaff_x19[8],0);
        if (lVar7 == 0) goto LAB_03213298;
        FUN_039282dc(lVar7,0);
        if (unaff_x19[8] == 0) goto LAB_03213298;
        lVar7 = unaff_x19[0xd];
        FUN_03928fd8(unaff_x19[8],0);
        fVar12 = (float)FUN_03914250(0);
        fVar22 = param_4;
        fVar26 = param_3;
        fVar19 = fVar18;
        fVar13 = (float)FUN_0322cfb8(0x20,0);
        if (lVar7 == 0) goto LAB_03213298;
        FUN_03929060((fVar18 * fVar26 + param_4 * fVar13 + fVar12 * fVar22) - param_3 * fVar19,
                     (param_3 * fVar13 + param_4 * fVar19 + fVar18 * fVar22) - fVar12 * fVar26,
                     (fVar12 * fVar19 + param_4 * fVar26 + param_3 * fVar22) - fVar18 * fVar13,
                     ((param_4 * fVar22 - fVar12 * fVar13) - fVar18 * fVar19) - param_3 * fVar26,
                     lVar7,0);
        lVar7 = unaff_x19[10];
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
        ;
        FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
        lVar7 = unaff_x19[10];
joined_r0x03212950:
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
      }
      else {
        if (iVar5 == 2) {
          lVar7 = unaff_x19[10];
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_0322c524(1,0);
          if (lVar7 == 0) goto LAB_03213298;
          FUN_039282dc(lVar7,0);
          lVar7 = unaff_x19[10];
          FUN_0322cfb8(1,0);
          if (lVar7 == 0) goto LAB_03213298;
          FUN_03929060(lVar7,0);
          lVar7 = unaff_x19[0xd];
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          if (lVar7 == 0) goto LAB_03213298;
          puVar11 = *(undefined4 **)
                     (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
          lVar7 = unaff_x19[0xd];
          goto joined_r0x03212950;
        }
        lVar7 = unaff_x19[10];
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
        ;
        FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
        lVar7 = unaff_x19[10];
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        FUN_03929060(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar7,0);
        lVar7 = unaff_x19[0xd];
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
        FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
        lVar7 = unaff_x19[0xd];
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
      }
      if (lVar7 == 0) goto LAB_03213298;
      puVar11 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      fVar22 = (float)puVar11[2];
      fVar26 = (float)puVar11[3];
      fVar18 = (float)puVar11[1];
      FUN_03929060(*puVar11,fVar18,fVar22,fVar26,lVar7,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar5 = FUN_0322c320(1,0);
      if (iVar5 == 1) {
        lVar7 = unaff_x19[4];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0322c524(0x40,0);
        if (lVar7 == 0) goto LAB_03213298;
        FUN_03927438(lVar7,0);
        if (unaff_x19[9] == 0) goto LAB_03213298;
        lVar7 = unaff_x19[0xf];
        FUN_0392a520(unaff_x19[9],0);
        if (lVar7 == 0) goto LAB_03213298;
        FUN_039282dc(lVar7,0);
        if (unaff_x19[9] == 0) goto LAB_03213298;
        lVar7 = unaff_x19[0xf];
        FUN_03928fd8(unaff_x19[9],0);
        fVar14 = (float)FUN_03914250(0);
        fVar19 = fVar26;
        fVar12 = fVar22;
        fVar13 = fVar18;
        fVar15 = (float)FUN_0322cfb8(0x40,0);
        if (lVar7 == 0) goto LAB_03213298;
        FUN_03929060((fVar18 * fVar12 + fVar26 * fVar15 + fVar14 * fVar19) - fVar22 * fVar13,
                     (fVar22 * fVar15 + fVar26 * fVar13 + fVar18 * fVar19) - fVar14 * fVar12,
                     (fVar14 * fVar13 + fVar26 * fVar12 + fVar22 * fVar19) - fVar18 * fVar15,
                     ((fVar26 * fVar19 - fVar14 * fVar15) - fVar18 * fVar13) - fVar22 * fVar12,lVar7
                     ,0);
        lVar7 = unaff_x19[0xb];
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
        ;
        FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
        lVar7 = unaff_x19[0xb];
joined_r0x03212cc0:
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
      }
      else {
        if (iVar5 == 2) {
          lVar7 = unaff_x19[0xb];
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_0322c524(2,0);
          if (lVar7 == 0) goto LAB_03213298;
          FUN_039282dc(lVar7,0);
          lVar7 = unaff_x19[0xb];
          FUN_0322cfb8(2,0);
          if (lVar7 == 0) goto LAB_03213298;
          FUN_03929060(lVar7,0);
          lVar7 = unaff_x19[0xf];
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          if (lVar7 == 0) goto LAB_03213298;
          puVar11 = *(undefined4 **)
                     (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
          FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
          lVar7 = unaff_x19[0xf];
          goto joined_r0x03212cc0;
        }
        lVar7 = unaff_x19[0xb];
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
        ;
        FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
        lVar7 = unaff_x19[0xb];
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        FUN_03929060(*puVar11,puVar11[1],puVar11[2],puVar11[3],lVar7,0);
        lVar7 = unaff_x19[0xf];
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar7 == 0) goto LAB_03213298;
        puVar11 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
        FUN_039282dc(*puVar11,puVar11[1],puVar11[2],lVar7,0);
        lVar7 = unaff_x19[0xf];
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
      }
      if (lVar7 == 0) goto LAB_03213298;
      puVar10 = *(ulong **)(*(long *)puVar1 + 0xb8);
LAB_03212dd8:
      FUN_03929060(*puVar10,*puVar10 >> 0x20,puVar10[1] & 0xffffffff,puVar10[1] >> 0x20,lVar7,0);
    }
    if (unaff_x19[0x12] == 0) goto LAB_03213298;
    FUN_039282dc(unaff_x19[0x12],0);
    FUN_0320c0b4(&stack0x00000080);
    uVar4 = in_stack_00000098;
    uVar30 = uStack0000000000000094;
    uVar29 = uStack0000000000000090;
    uVar28 = uStack000000000000008c;
    uVar33 = uStack0000000000000088;
    uVar32 = uStack0000000000000084;
    uVar31 = uStack0000000000000080;
    FUN_0320c0b4(&stack0x00000080);
    uVar23 = uStack0000000000000088;
    uVar20 = uStack0000000000000084;
    uVar27 = uStack0000000000000080;
    lVar7 = *unaff_x20;
    uStack0000000000000078 = uStack0000000000000094;
    uStack000000000000007c = uStack0000000000000090;
    uVar6 = (ulong)in_stack_00000098;
    uStack0000000000000070 = uStack000000000000008c;
    uStack0000000000000074 = in_stack_00000098;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      uVar6 = thunk_FUN_01ac7298(uVar6,uStack0000000000000084);
      lVar7 = *unaff_x20;
    }
    uVar25 = uVar23;
    if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x100) == 2) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(uVar6,uVar20);
      }
      FUN_03237acc(&stack0x00000080,4,0);
      uVar4 = in_stack_00000098;
      uVar30 = uStack0000000000000094;
      uVar29 = uStack0000000000000090;
      uVar28 = uStack000000000000008c;
      uVar33 = uStack0000000000000088;
      uVar32 = uStack0000000000000084;
      uVar31 = uStack0000000000000080;
      FUN_03237acc(&stack0x00000080,5,0);
      uVar25 = uStack0000000000000088;
      uVar27 = uStack0000000000000080;
      if (unaff_x19[0x10] == 0) goto LAB_03213298;
      lVar7 = unaff_x19[4];
      uStack0000000000000078 = uStack0000000000000094;
      uStack000000000000007c = uStack0000000000000090;
      uStack0000000000000074 = in_stack_00000098;
      uVar20 = uStack0000000000000090;
      FUN_03928d34(unaff_x19[0x10],0);
      if (lVar7 == 0) goto LAB_03213298;
      uVar16 = FUN_0392a520(lVar7,0);
      if (unaff_x19[0x11] == 0) goto LAB_03213298;
      lVar7 = unaff_x19[4];
      uVar24 = uVar23;
      uVar21 = uVar20;
      FUN_03928d34(unaff_x19[0x11],0);
      if (lVar7 == 0) goto LAB_03213298;
      uVar17 = FUN_0392a520(lVar7,0);
      if (unaff_x19[4] == 0) goto LAB_03213298;
      uStack0000000000000070 = uStack000000000000008c;
      FUN_039274a0(unaff_x19[4],0);
      FUN_03914250(0);
      if (unaff_x19[0x10] == 0) goto LAB_03213298;
      FUN_039274a0(unaff_x19[0x10],0);
      if (unaff_x19[4] == 0) goto LAB_03213298;
      FUN_039274a0(unaff_x19[4],0);
      FUN_03914250(0);
      if (unaff_x19[0x11] == 0) goto LAB_03213298;
      FUN_039274a0(unaff_x19[0x11],0);
      FUN_032379c4(uVar16,uVar20,uVar23,uVar17,uVar21,uVar24,0);
      uVar20 = uStack0000000000000084;
    }
    if (unaff_x19[0x11] == 0) goto LAB_03213298;
    FUN_039282dc(uVar27,uVar20,uVar25,unaff_x19[0x11],0);
    if (unaff_x19[0x11] == 0) goto LAB_03213298;
    FUN_03929060(uStack0000000000000070,uStack000000000000007c,uStack0000000000000078,
                 uStack0000000000000074,unaff_x19[0x11],0);
    if (unaff_x19[0x10] == 0) goto LAB_03213298;
    FUN_039282dc(uVar31,uVar32,uVar33,unaff_x19[0x10],0);
    if (unaff_x19[0x10] == 0) goto LAB_03213298;
    FUN_03929060(uVar28,uVar29,uVar30,uVar4,unaff_x19[0x10],0);
  }
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (*(char *)(unaff_x25 + 0x3d9) == '\0') {
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_2__);
    *(undefined1 *)(unaff_x25 + 0x3d9) = 1;
  }
  lVar7 = *unaff_x20;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar7 = *unaff_x20;
  }
  if (**(long **)(lVar7 + 0xb8) == 0) {
LAB_03213298:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(char *)(**(long **)(lVar7 + 0xb8) + 0x112) != '\0') {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar7 = FUN_0323af38(0);
    if (lVar7 != 0) {
      if (unaff_x19[6] == 0) goto LAB_03213298;
      uVar9 = FUN_0391c27c(unaff_x19[6],0);
      FUN_03b3ab1c(lVar7,uVar9,0,0);
      FUN_03b3ab1c(lVar7,unaff_x19[8],1,0);
      FUN_03b3ab1c(lVar7,unaff_x19[9],2,0);
    }
  }
  (**(code **)(*unaff_x19 + 0x1f8))();
  (**(code **)(*unaff_x19 + 0x1e8))();
  return;
}


