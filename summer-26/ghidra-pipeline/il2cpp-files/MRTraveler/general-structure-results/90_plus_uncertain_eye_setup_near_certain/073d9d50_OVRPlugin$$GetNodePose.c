/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 073d9d50
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetNodePose(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  long *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  int iVar12;
  long unaff_x23;
  long unaff_x27;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  undefined4 uStack0000000000000034;
  ulong *in_stack_00000038;
  undefined4 uStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  ulong in_stack_00000090;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 uStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  uint in_stack_000000b8;
  undefined4 uStack00000000000000bc;
  float fStack00000000000000c0;
  float fStack00000000000000c4;
  float in_stack_000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 in_stack_000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 in_stack_000000e8;
  ulong in_stack_000000f0;
  float in_stack_000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 in_stack_00000100;
  undefined4 uStack0000000000000104;
  undefined4 in_stack_00000108;
  undefined4 uStack000000000000010c;
  undefined8 in_stack_00000110;
  ulong in_stack_00000120;
  ulong in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  char in_stack_00000148;
  ulong in_stack_00000150;
  undefined4 uStack0000000000000158;
  undefined4 uStack000000000000015c;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  ulong in_stack_00000170;
  ulong in_stack_00000178;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e78410);
  *(undefined1 *)(unaff_x23 + 0x728) = 1;
  lVar7 = *unaff_x20;
  in_stack_00000150 = 0;
  _uStack0000000000000158 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000110 = 0;
  in_stack_000000e8 = 0;
  _uStack00000000000000e0 = 0;
  _fStack00000000000000c0 = 0;
  in_stack_000000c8 = 0.0;
  uStack00000000000000cc = 0;
  *(undefined8 *)(unaff_x27 + 0x24) = 0;
  *(undefined8 *)(unaff_x27 + 0x1c) = 0;
  puVar3 = PTR_DAT_08eb3460;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_000000f8 = 0.0;
  uStack00000000000000fc = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  uStack000000000000010c = 0;
  in_stack_00000100 = 0;
  uStack0000000000000104 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  uStack00000000000000d4 = 0;
  uStack00000000000000bc = 0;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_085e99cc(&stack0x00000090,0);
  _uStack0000000000000158 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
  in_stack_00000150 = in_stack_00000090;
  *(ulong *)(unaff_x27 + 0x44) = CONCAT44(uStack00000000000000a8,uStack00000000000000a4);
  *(ulong *)(unaff_x27 + 0x3c) = CONCAT44(uStack00000000000000a0,uStack000000000000009c);
  FUN_085e99cc(&stack0x00000090,0);
  FUN_085e99cc(&stack0x00000170,0);
  uVar16 = *(undefined8 *)(unaff_x27 + 100);
  uStack00000000000000a4 = (undefined4)uVar16;
  uStack00000000000000a8 = (undefined4)((ulong)uVar16 >> 0x20);
  uStack00000000000000a0 = (undefined4)((ulong)*(undefined8 *)(unaff_x27 + 0x5c) >> 0x20);
  fStack0000000000000098 = (float)in_stack_00000178;
  uStack000000000000009c = (undefined4)(in_stack_00000178 >> 0x20);
  in_stack_00000090 = in_stack_00000170;
  *(undefined8 *)((long)in_stack_00000038 + 0x14) = uVar16;
  *(ulong *)((long)in_stack_00000038 + 0xc) =
       CONCAT44(uStack00000000000000a0,uStack000000000000009c);
  in_stack_00000038[1] = in_stack_00000178;
  *in_stack_00000038 = in_stack_00000170;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar5 = PTR_DAT_08eb5ba0;
  puVar4 = PTR_DAT_08e722b0;
  puVar3 = PTR_DAT_08e6a6b8;
  lVar8 = *(long *)(unaff_x22 + 0x20);
  if (lVar8 != 0) {
    uStack0000000000000034 = 0;
    puVar10 = *(undefined4 **)(lVar7 + 0xb8);
    uStack000000000000007c = *puVar10;
    uStack0000000000000078 = puVar10[1];
    iVar12 = 0;
    uStack0000000000000074 = puVar10[2];
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar12) {
        return uStack0000000000000034;
      }
      FUN_0516b218(&stack0x00000090,lVar8,iVar12,*(undefined8 *)puVar5);
      in_stack_00000128 = CONCAT44(uStack000000000000009c,fStack0000000000000098);
      in_stack_00000138 = CONCAT44(uStack00000000000000ac,uStack00000000000000a8);
      in_stack_00000130 = CONCAT44(uStack00000000000000a4,uStack00000000000000a0);
      in_stack_00000120 = in_stack_00000090;
      *(ulong *)(unaff_x27 + 0x24) = CONCAT44(in_stack_000000b8,uStack00000000000000b4);
      *(ulong *)(unaff_x27 + 0x1c) = CONCAT44(uStack00000000000000b0,uStack00000000000000ac);
      lVar7 = *(long *)(unaff_x22 + 0x20);
      if (lVar7 == 0) break;
      iVar1 = *(int *)(lVar7 + 0x18);
      iVar12 = iVar12 + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar12 / iVar1;
      }
      FUN_0516b218(&stack0x00000090,lVar7,iVar12 - iVar2 * iVar1,*(undefined8 *)puVar5);
      in_stack_00000110 = CONCAT44(uStack00000000000000b4,uStack00000000000000b0);
      in_stack_000000f8 = fStack0000000000000098;
      uStack00000000000000fc = uStack000000000000009c;
      in_stack_000000f0 = in_stack_00000090;
      in_stack_00000108 = uStack00000000000000a8;
      uStack000000000000010c = uStack00000000000000ac;
      in_stack_00000100 = uStack00000000000000a0;
      uStack0000000000000104 = uStack00000000000000a4;
      if (in_stack_00000148 == '\0') {
        if ((in_stack_000000b8 & 0xff) == 0) goto LAB_073d9eec;
        goto LAB_073da3d0;
      }
      if ((in_stack_000000b8 & 0xff) == 0) {
LAB_073d9eec:
        if (*(long *)(unaff_x22 + 0x20) == 0) break;
        if (*(int *)(*(long *)(unaff_x22 + 0x20) + 0x18) == 1) goto LAB_073d9f00;
        in_stack_00000178 = in_stack_00000128;
        in_stack_00000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_0737f84c(&stack0x00000090);
        uVar6 = uStack00000000000000a8;
        uVar24 = uStack00000000000000a4;
        uVar21 = uStack00000000000000a0;
        uVar15 = uStack000000000000009c;
        fVar23 = fStack0000000000000098;
        uVar29 = in_stack_00000090;
        uVar9 = in_stack_00000090 & 0xffffffff;
        fVar20 = in_stack_00000090._4_4_;
        in_stack_00000178 = CONCAT44(uStack00000000000000fc,in_stack_000000f8);
        in_stack_00000170 = in_stack_000000f0;
        *(ulong *)(unaff_x27 + 100) = CONCAT44(in_stack_00000108,uStack0000000000000104);
        *(ulong *)(unaff_x27 + 0x5c) = CONCAT44(in_stack_00000100,uStack00000000000000fc);
        uVar22 = uStack00000000000000a8;
        FUN_0737f84c(&stack0x00000090);
        uVar14 = uStack00000000000000a4;
        fVar32 = (float)FUN_073d9690(&stack0x00000120);
        fVar19 = fVar32;
        fVar26 = fVar20;
        fVar31 = fVar23;
        fVar13 = (float)FUN_073da414(uVar9);
        fVar34 = *unaff_x21;
        fVar27 = unaff_x21[1];
        fVar30 = unaff_x21[2];
        fVar17 = unaff_x21[3];
        fVar35 = unaff_x21[4];
        fVar28 = unaff_x21[5];
        if (DAT_094108d2 == '\0') {
          FUN_03c8f898(puVar4);
          DAT_094108d2 = '\x01';
        }
        fVar28 = fVar31 * fVar28 + fVar13 * fVar17 + fVar26 * fVar35;
        fVar35 = ABS(fVar28);
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        fVar18 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar17 = fVar35 * DAT_018b0840;
        if (fVar35 * DAT_018b0840 <= fVar18) {
          fVar17 = fVar18;
        }
        if (fVar17 <= ABS(0.0 - fVar28)) {
          uVar25 = (ulong)(uint)(fVar31 * fVar30);
          fVar19 = -(fVar31 * fVar30 + fVar34 * fVar13 + fVar26 * fVar27) - fVar19;
          uVar9 = (ulong)(uint)fVar19;
          if (fVar19 / fVar28 <= 0.0) goto LAB_073da3d0;
          uVar16 = FUN_085a92a8();
          FUN_073d96b4(uVar16);
          uVar14 = FUN_073da774(uVar29 & 0xffffffff,fVar20,fVar23,fVar32,uVar14,uVar22);
          in_stack_00000150 = CONCAT44(fVar20,uVar14);
          _uStack0000000000000158 = CONCAT44(uStack000000000000015c,fVar23);
          uVar15 = FUN_085d23b0(uVar15,0);
          in_stack_00000168 = uVar6;
          _uStack0000000000000158 = CONCAT44(uVar15,uStack0000000000000158);
          in_stack_00000160 = CONCAT44(uVar24,uVar21);
LAB_073da348:
          uVar33 = in_stack_00000150 & 0xffffffff;
          uVar15 = in_stack_00000150._4_4_;
          uVar29 = _uStack0000000000000158 & 0xffffffff;
          if (*(int *)(*(long *)PTR_DAT_08eb3460 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          FUN_073d893c(uVar16,uVar9,uVar25,uVar33,uVar15,uVar29,&stack0x000000e0,0);
          uVar9 = FUN_073d2688(uStack000000000000007c,uStack0000000000000078,uStack0000000000000074,
                               &stack0x000000e0);
          if ((uVar9 & 1) != 0) {
            uStack0000000000000078 = uStack00000000000000e4;
            uStack000000000000007c = uStack00000000000000e0;
            uStack0000000000000074 = in_stack_000000e8;
            FUN_0737f108(in_stack_00000038,&stack0x00000150,0);
            uStack0000000000000034 = 1;
          }
        }
      }
      else {
LAB_073d9f00:
        in_stack_00000178 = in_stack_00000128;
        in_stack_00000170 = in_stack_00000120;
        *(undefined8 *)(unaff_x27 + 100) = *(undefined8 *)(unaff_x27 + 0x14);
        *(undefined8 *)(unaff_x27 + 0x5c) = *(undefined8 *)(unaff_x27 + 0xc);
        FUN_0737f84c(&stack0x00000090);
        fVar20 = fStack0000000000000098;
        in_stack_000000c8 = fStack0000000000000098;
        _fStack00000000000000c0 = in_stack_00000090;
        uVar9 = _fStack00000000000000c0;
        uStack00000000000000d4 = uStack00000000000000a4;
        in_stack_000000d8 = uStack00000000000000a8;
        uStack00000000000000cc = uStack000000000000009c;
        in_stack_000000d0 = uStack00000000000000a0;
        fStack00000000000000c0 = (float)in_stack_00000090;
        fVar23 = fStack00000000000000c0;
        fStack00000000000000c4 = (float)(in_stack_00000090 >> 0x20);
        fVar19 = fStack00000000000000c4;
        fVar32 = unaff_x21[3];
        fVar31 = unaff_x21[4];
        fVar26 = unaff_x21[5];
        _fStack00000000000000c0 = uVar9;
        if (DAT_094100b4 == '\0') {
          FUN_03c8f898(puVar3);
          DAT_094100b4 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        fVar13 = SQRT(fVar26 * fVar26 + fVar32 * fVar32 + fVar31 * fVar31);
        if (fVar13 <= DAT_018b0528) {
          if (DAT_0940fff5 == '\0') {
            FUN_03c8f898(PTR_DAT_08e68e18);
            DAT_0940fff5 = '\x01';
          }
          pfVar11 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
          fVar32 = *pfVar11;
          fVar31 = pfVar11[1];
          fVar13 = pfVar11[2];
        }
        else {
          fVar32 = -fVar32 / fVar13;
          fVar31 = -fVar31 / fVar13;
          fVar13 = -fVar26 / fVar13;
        }
        fVar26 = *unaff_x21;
        fVar35 = unaff_x21[1];
        fVar27 = unaff_x21[2];
        fVar28 = unaff_x21[3];
        fVar34 = unaff_x21[4];
        fVar30 = unaff_x21[5];
        if (DAT_094108d2 == '\0') {
          FUN_03c8f898(puVar4);
          DAT_094108d2 = '\x01';
        }
        fVar28 = fVar13 * fVar30 + fVar32 * fVar28 + fVar31 * fVar34;
        fVar30 = ABS(fVar28);
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar17 = **(float **)(*(long *)puVar4 + 0xb8) * 8.0;
        fVar34 = fVar30 * DAT_018b0840;
        if (fVar30 * DAT_018b0840 <= fVar17) {
          fVar34 = fVar17;
        }
        if (fVar34 <= ABS(0.0 - fVar28)) {
          fVar26 = fVar13 * fVar27 + fVar32 * fVar26 + fVar31 * fVar35;
          uVar25 = (ulong)(uint)fVar26;
          fVar26 = (fVar20 * fVar13 + fVar23 * fVar32 + fVar19 * fVar31) - fVar26;
          uVar9 = (ulong)(uint)fVar26;
          if (0.0 < fVar26 / fVar28) {
            uVar16 = FUN_085a92a8();
            FUN_0737f108(&stack0x00000150,&stack0x000000c0,0);
            goto LAB_073da348;
          }
        }
      }
LAB_073da3d0:
      lVar8 = *(long *)(unaff_x22 + 0x20);
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


