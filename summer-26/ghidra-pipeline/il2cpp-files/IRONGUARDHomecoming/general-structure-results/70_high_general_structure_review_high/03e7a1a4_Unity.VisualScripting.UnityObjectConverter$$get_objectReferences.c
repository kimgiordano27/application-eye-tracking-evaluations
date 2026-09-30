/*
FUNCTION_NAME: Unity.VisualScripting.UnityObjectConverter$$get_objectReferences
ENTRY_POINT: 03e7a1a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


float Unity_VisualScripting_UnityObjectConverter__get_objectReferences(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  undefined1 uVar32;
  long unaff_x19;
  float *unaff_x22;
  uint unaff_w24;
  uint unaff_w26;
  long lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float unaff_s8;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined8 in_stack_00000168;
  undefined4 in_stack_00000170;
  uint in_stack_00000bd8;
  uint in_stack_00000bdc;
  undefined4 uVar54;
  
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03e7bfc0;
  lVar27 = FUN_03e5d25c(*(long *)(unaff_x19 + 0xf8),0);
  puVar15 = PTR_DAT_04579e78;
  puVar14 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (lVar27 == 0) {
    in_stack_00000168._4_4_ = FUN_04076320();
    uVar28 = FUN_035683d0((long)&stack0x00000168 + 4,0);
    uVar28 = FUN_03405678(*(undefined8 *)puVar15,uVar28,0);
    if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar14);
    }
    FUN_0403f2cc(uVar28,0);
LAB_03e7a314:
    *(undefined1 *)(unaff_x19 + 0x24c) = 1;
    if (DAT_0482ee9c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
      DAT_0482ee9c = '\x01';
    }
LAB_03e7a338:
    return **(float **)(*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
  }
  lVar27 = *(long *)(unaff_x19 + 0x478);
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x18) == 0)) goto LAB_03e7a314;
  if ((int)*(long *)(lVar27 + 0x18) == 0) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  if (*(int *)(lVar27 + 0x20) == 0) goto LAB_03e7a314;
  plVar1 = (long *)(unaff_x19 + 0x100);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0xf8);
  thunk_FUN_01f51358(plVar1);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0x110);
  thunk_FUN_01f51358(unaff_x19 + 0x118);
  *(undefined4 *)(unaff_x19 + 0x120) = 0;
  puVar14 = PTR_DAT_04579e70;
  if (*(int *)(*(long *)PTR_DAT_04579e70 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  in_stack_000000b0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  FUN_03e45878(*(undefined4 *)(unaff_x19 + 0x618),&stack0x00000080,0,
               *(undefined8 *)(unaff_x19 + 0x100),0,*(undefined8 *)(unaff_x19 + 0x118),0);
  uVar17 = in_stack_00000090;
  uVar16 = in_stack_00000088;
  uVar28 = in_stack_00000080;
  FUN_02770708(*(long *)(*(long *)puVar14 + 0xb8) + 0x10,&stack0x00000be0,
               *(undefined8 *)PTR_DAT_04579e38);
  iVar23 = *(int *)(unaff_x19 + 0x490);
  plVar2 = (long *)(unaff_x19 + 0x488);
  if ((*(long *)(unaff_x19 + 0x488) == 0) ||
     (*(int *)(*(long *)(unaff_x19 + 0x488) + 0x18) < iVar23)) {
    if (iVar23 < 0x401) {
      iVar22 = FUN_04068278(iVar23,0);
    }
    else {
      iVar22 = iVar23 + 0x100;
    }
    lVar27 = FUN_01f08890(*(undefined8 *)PTR_DAT_0457ac08,iVar22);
    *plVar2 = lVar27;
    thunk_FUN_01f51358();
  }
  if (*(long *)(unaff_x19 + 0xf8) == 0) {
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  fVar48 = *unaff_x22;
  memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
  iVar22 = FUN_040ced70(&stack0x00000100,0);
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_03e7bfc0;
  memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0xf8) + 0x50),0x60);
  fVar34 = (float)FUN_040ced80(&stack0x00000100,0);
  fVar51 = *unaff_x22;
  *(undefined4 *)(unaff_x19 + 0x404) = 0x3f800000;
  *(float *)(unaff_x19 + 0x1e8) = *unaff_x22;
  puVar15 = PTR_DAT_04579e58;
  fVar43 = DAT_00c925a0;
  fVar38 = DAT_00c925a0;
  if (*(char *)(unaff_x19 + 0x305) != '\0') {
    fVar38 = 1.0;
  }
  FUN_027714ac(unaff_x19 + 0x1f0,*(undefined8 *)PTR_DAT_04579e58);
  *(undefined4 *)(unaff_x19 + 0x25c) = *(undefined4 *)(unaff_x19 + 600);
  *(undefined4 *)(unaff_x19 + 0x278) = *(undefined4 *)(unaff_x19 + 0x26c);
  FUN_027700e8(unaff_x19 + 0x280,*(undefined4 *)(unaff_x19 + 0x26c),*(undefined8 *)PTR_DAT_04579e28)
  ;
  *(undefined4 *)(unaff_x19 + 0x61c) = 0;
  FUN_027714a0(unaff_x19 + 0x620,*(undefined8 *)PTR_DAT_04579df8);
  *(undefined4 *)(unaff_x19 + 0x4d8) = 0;
  *(undefined4 *)(unaff_x19 + 0x2c0) = 0xc6fffe00;
  if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
  memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
  fVar35 = (float)FUN_040ced90(&stack0x00000100,0);
  if (*plVar1 == 0) goto LAB_03e7bfc0;
  memmove(&stack0x00000100,(void *)(*plVar1 + 0x50),0x60);
  fVar36 = (float)FUN_040ceda0(&stack0x00000100,0);
  if (*plVar1 == 0) goto LAB_03e7bfc0;
  memmove(&stack0x00000100,(void *)(*plVar1 + 0x50),0x60);
  fVar37 = (float)FUN_040cede0(&stack0x00000100,0);
  *(undefined8 *)(unaff_x19 + 0x2ac) = 0;
  *(undefined4 *)(unaff_x19 + 0x640) = 0;
  *(undefined8 *)(unaff_x19 + 0x408) = 0;
  FUN_027714ac(0,unaff_x19 + 0x410,*(undefined8 *)puVar15);
  *(undefined1 *)(unaff_x19 + 0x430) = 0;
  *(undefined8 *)(unaff_x19 + 0x494) = 0;
  lVar27 = *(long *)puVar14;
  uStack0000000000000034 = unaff_w26;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar27 = *(long *)puVar14;
  }
  uVar44 = NEON_rev64(*(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8),4);
  *(undefined4 *)(unaff_x19 + 0x4a8) = 0;
  *(undefined4 *)(unaff_x19 + 0x4d0) = 0;
  *(undefined1 *)(unaff_x19 + 0x2c4) = 0;
  *(undefined8 *)(unaff_x19 + 0x350) = 0;
  *(undefined4 *)(unaff_x19 + 0x360) = 0xbf800000;
  *(undefined1 *)(unaff_x19 + 0x3f5) = 1;
  *(undefined8 *)(unaff_x19 + 0x4b8) = 0;
  *(undefined4 *)(unaff_x19 + 0x4c4) = 0;
  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar44;
  *(undefined1 *)(unaff_x19 + 0x2da) = 0;
  FUN_03e989e0(&stack0x00000bd8,0xffffffff,0,0);
  memset(&stack0x00000860,0,0x378);
  memset(&stack0x000004e8,0,0x378);
  memset(&stack0x00000170,0,0x378);
  lVar27 = *(long *)(unaff_x19 + 0x478);
  *(int *)(unaff_x19 + 0x244) = *(int *)(unaff_x19 + 0x244) + 1;
  fVar13 = DAT_00c9294c;
  fVar12 = DAT_00c924f4;
  if (lVar27 == 0) goto LAB_03e7bfc0;
  plVar3 = (long *)(unaff_x19 + 0x698);
  uVar9 = iVar23 - 1;
  uVar6 = uStack0000000000000034 ^ 1;
  fStack0000000000000064 = 0.0;
  fStack0000000000000048 = 0.0;
  fStack0000000000000044 = 0.0;
  fVar35 = fVar35 - (fVar36 - fVar37);
  fStack000000000000006c = 0.0;
  fStack0000000000000038 = 0.0;
  fVar36 = unaff_s8 + DAT_00c92318;
  fStack000000000000005c = 0.0;
  fVar34 = (fVar48 / (float)iVar22) * fVar34 * fVar38;
  bVar11 = false;
  bVar19 = false;
  fVar38 = fVar38 * fVar51 * DAT_00c9294c;
  uVar25 = 0;
  puVar4 = (uint *)(unaff_x19 + 0x494);
  plVar5 = (long *)(unaff_x19 + 0x648);
  uStack0000000000000030 = 1;
  fVar48 = fVar34;
LAB_03e7a6b4:
  if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar25) {
LAB_03e7bfc4:
    if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
         ((unaff_w24 & 1) == 0)) || (fVar48 = *unaff_x22, *(float *)(unaff_x19 + 0x254) <= fVar48))
       || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
      fVar48 = *(float *)(unaff_x19 + 0x340);
      fVar43 = *(float *)(unaff_x19 + 0x348);
      if (fVar48 <= 0.0) {
        fVar48 = 0.0;
      }
      if (fVar43 <= 0.0) {
        fVar43 = 0.0;
      }
      *(undefined1 *)(unaff_x19 + 0x24c) = 1;
      fVar43 = (fStack000000000000006c + fVar48 + fVar43) * 100.0 + 1.0;
      fVar48 = DAT_00c92378;
      if (fVar43 != INFINITY) {
        fVar48 = (float)(int)fVar43 / 100.0;
      }
      *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
      return fVar48;
    }
    if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
      *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
      fVar48 = *unaff_x22;
    }
    *(float *)(unaff_x19 + 0x240) = fVar48;
    fVar48 = (*(float *)(unaff_x19 + 0x23c) - *unaff_x22) * 0.5;
    if (fVar48 <= DAT_00c92764) {
      fVar48 = DAT_00c92764;
    }
    fVar48 = *unaff_x22 + fVar48;
    *unaff_x22 = fVar48;
    fVar43 = fVar48 * 20.0 + 0.5;
    fVar48 = DAT_00c92a58;
    if (fVar43 != INFINITY) {
      fVar48 = (float)(int)fVar43 / 20.0;
    }
    if (*(float *)(unaff_x19 + 0x254) <= fVar48) {
      fVar48 = *(float *)(unaff_x19 + 0x254);
    }
    *unaff_x22 = fVar48;
LAB_03e7c098:
    if (DAT_0482ee9c == '\0') {
      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
      DAT_0482ee9c = '\x01';
    }
    goto LAB_03e7a338;
  }
  if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_03e7c214;
  uVar26 = *(uint *)(lVar27 + (long)(int)uVar25 * 0xc + 0x20);
  if (uVar26 == 0) goto LAB_03e7bfc4;
  if ((uVar26 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
    *(undefined1 *)(unaff_x19 + 0x431) = 1;
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    uVar29 = FUN_03e7c218();
    if (((uVar29 & 1) == 0) || (uVar25 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) != 0))
    goto LAB_03e7a758;
    goto LAB_03e7bfb0;
  }
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
  if (*(uint *)(lVar27 + 0x18) <= *puVar4) goto LAB_03e7c214;
  lVar27 = lVar27 + (long)(int)*puVar4 * 0x178;
  *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar27 + 0x2c);
  *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar27 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar27 + 0x38);
  thunk_FUN_01f51358(plVar1);
LAB_03e7a758:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
  uVar24 = *puVar4;
  if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_03e7c214;
  lVar33 = (long)(int)uVar24;
  cVar8 = *(char *)(lVar27 + lVar33 * 0x178 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  uVar50 = *(undefined4 *)(unaff_x19 + 0x120);
  if (in_stack_00000bd8 == uVar24) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000bdc == 0x2026) {
      lVar27 = *plVar2;
      if (lVar27 != 0) {
        if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_03e7c214;
        *(undefined8 *)(lVar27 + lVar33 * 0x178 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
        thunk_FUN_01f51358();
        lVar27 = *plVar2;
        if (lVar27 != 0) {
          if (*(uint *)(lVar27 + 0x18) <= *puVar4) goto LAB_03e7c214;
          lVar27 = lVar27 + (long)(int)*puVar4 * 0x178;
          *(undefined4 *)(lVar27 + 0x2c) = 0;
          *(undefined8 *)(lVar27 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
          thunk_FUN_01f51358();
          lVar27 = *(long *)(unaff_x19 + 0x488);
          if (lVar27 != 0) {
            if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
            *(undefined8 *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x50) =
                 *(undefined8 *)(unaff_x19 + 0x660);
            thunk_FUN_01f51358();
            lVar27 = *plVar2;
            if (lVar27 != 0) {
              uVar24 = *puVar4;
              if (uVar24 < *(uint *)(lVar27 + 0x18)) {
                bVar20 = true;
                in_stack_00000bd8 = uVar24 + 1;
                *(undefined4 *)(lVar27 + (long)(int)uVar24 * 0x178 + 0x58) =
                     *(undefined4 *)(unaff_x19 + 0x668);
                uVar26 = 0x2026;
                *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                in_stack_00000bdc = 3;
                goto LAB_03e7a8f4;
              }
              goto LAB_03e7c214;
            }
          }
        }
      }
      goto LAB_03e7bfc0;
    }
    if (in_stack_00000bdc != 3) {
      bVar20 = true;
      uVar26 = in_stack_00000bdc;
      goto LAB_03e7a8f4;
    }
    lVar27 = *plVar2;
    if (((lVar27 == 0) || (*plVar1 == 0)) || (lVar30 = FUN_03e5d25c(*plVar1,0), lVar30 == 0))
    goto LAB_03e7bfc0;
    uVar44 = FUN_02bd6170(lVar30,3,*(undefined8 *)PTR_DAT_04579db0);
    if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_03e7c214;
    *(undefined8 *)(lVar27 + lVar33 * 0x178 + 0x30) = uVar44;
    thunk_FUN_01f51358();
    bVar20 = true;
    uVar26 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar20 = false;
LAB_03e7a8f4:
    if ((uVar26 != 3) && ((int)uVar24 < *(int *)(unaff_x19 + 0x324))) {
      lVar27 = *plVar2;
      if (lVar27 != 0) {
        if (uVar24 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + (long)(int)uVar24 * 0x178;
          *(undefined1 *)(lVar27 + 0x194) = 0;
          *(undefined2 *)(lVar27 + 0x20) = 0x200b;
          *(undefined4 *)(lVar27 + 100) = 0;
          *puVar4 = uVar24 + 1;
          goto LAB_03e7bfb0;
        }
        goto LAB_03e7c214;
      }
      goto LAB_03e7bfc0;
    }
  }
  iVar23 = *(int *)(unaff_x19 + 0x644);
  uVar54 = (undefined4)uVar17;
  if (iVar23 == 0) {
    uVar24 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar24 >> 4 & 1) == 0) {
      if ((uVar24 >> 3 & 1) == 0) {
        fStack0000000000000068 = 1.0;
        if ((uVar24 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar29 = FUN_034fc51c(uVar26,0);
          fStack0000000000000068 = 1.0;
          if ((uVar29 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar26 = FUN_034fc7fc(uVar26,0);
            fStack0000000000000068 = fVar12;
            goto LAB_03e7ac68;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar29 = FUN_034fc460(uVar26,0);
        fStack0000000000000068 = 1.0;
        if ((uVar29 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar26 = FUN_034fc974(uVar26,0);
          goto LAB_03e7ac68;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar29 = FUN_034fc51c(uVar26,0);
      fStack0000000000000068 = 1.0;
      if ((uVar29 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar26 = FUN_034fc7fc(uVar26,0);
LAB_03e7ac68:
        uVar26 = uVar26 & 0xffff;
      }
    }
    iVar23 = *(int *)(unaff_x19 + 0x644);
    if (iVar23 != 0) goto LAB_03e7a954;
LAB_03e7ac74:
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar27 + 0x18) <= *puVar4) goto LAB_03e7c214;
    *plVar5 = *(long *)(lVar27 + (long)(int)*puVar4 * 0x178 + 0x30);
    thunk_FUN_01f51358(plVar5);
    if (*plVar5 == 0) goto LAB_03e7bfb0;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
    uVar7 = *puVar4;
    uVar24 = *(uint *)(lVar27 + 0x18);
    if (uVar24 <= uVar7) goto LAB_03e7c214;
    *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar27 + (long)(int)uVar7 * 0x178 + 0x58);
    if (bVar20) {
      lVar33 = *(long *)(unaff_x19 + 0x478);
      if (lVar33 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar33 + 0x18) <= uVar25) goto LAB_03e7c214;
      if ((*(int *)(lVar33 + (long)(int)uVar25 * 0xc + 0x20) != 10) ||
         (uVar7 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
      if (uVar24 <= uVar7 - 1) goto LAB_03e7c214;
      if (*plVar1 == 0) goto LAB_03e7bfc0;
      fVar48 = *(float *)(lVar27 + (long)(int)(uVar7 - 1) * 0x178 + 0x60);
      iVar23 = FUN_040ced70(*plVar1 + 0x50,0);
      lVar27 = *plVar1;
    }
    else {
LAB_03e7ad14:
      if (*plVar1 == 0) goto LAB_03e7bfc0;
      fVar48 = *(float *)(unaff_x19 + 0x1e8);
      iVar23 = FUN_040ced70(*plVar1 + 0x50,0);
      lVar27 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar27 == 0) goto LAB_03e7bfc0;
    fVar49 = (float)FUN_040ced80(lVar27 + 0x50,0);
    fVar37 = fVar43;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar37 = 1.0;
    }
    fVar51 = 0.0;
    fVar40 = 0.0;
    if (!(bool)(bVar20 & uVar26 == 0x2026)) {
      if (*plVar1 == 0) goto LAB_03e7bfc0;
      fVar40 = (float)FUN_040ceda0(*plVar1 + 0x50,0);
      if (*plVar1 == 0) goto LAB_03e7bfc0;
      fVar51 = (float)FUN_040cede0(*plVar1 + 0x50,0);
    }
    if ((*plVar5 == 0) || (lVar27 = *(long *)(unaff_x19 + 0x488), lVar27 == 0)) goto LAB_03e7bfc0;
    uVar24 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_03e7c214;
    fVar48 = ((fStack0000000000000068 * fVar48) / (float)iVar23) * fVar49 * fVar37 *
             *(float *)(unaff_x19 + 0x404) * *(float *)(*plVar5 + 0x2c);
    *(undefined4 *)(lVar27 + (long)(int)uVar24 * 0x178 + 0x2c) = 0;
LAB_03e7afa0:
    bVar20 = uVar26 == 0xad;
    fVar37 = 0.0;
    if (!bVar20 && uVar26 != 3) {
      fVar37 = fVar48;
    }
  }
  else {
    fStack0000000000000068 = 1.0;
    if (iVar23 == 0) goto LAB_03e7ac74;
LAB_03e7a954:
    if (iVar23 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar27 + 0x18) <= *puVar4) goto LAB_03e7c214;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar27 + (long)(int)*puVar4 * 0x178 + 0x40);
      thunk_FUN_01f51358(plVar3);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar27 + 0x18) <= *puVar4) goto LAB_03e7c214;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar27 + (long)(int)*puVar4 * 0x178 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar27 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar27 == 0)) goto LAB_03e7bfc0;
      lVar27 = FUN_030f28e4(lVar27,*(undefined4 *)(unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_04579db8);
      if (lVar27 == 0) goto LAB_03e7bfb0;
      if (uVar26 == 0x3c) {
        uVar26 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
      }
      if (*plVar3 == 0) goto LAB_03e7bfc0;
      memmove(&stack0x00000100,(void *)(*plVar3 + 0x48),0x60);
      iVar23 = FUN_040ced70(&stack0x00000100,0);
      fVar48 = *(float *)(unaff_x19 + 0x1e8);
      if (iVar23 < 1) {
        if (*plVar1 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*plVar1 + 0x50),0x60);
        iVar23 = FUN_040ced70(&stack0x00000100,0);
        if (*plVar1 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*plVar1 + 0x50),0x60);
        fVar37 = (float)FUN_040ced80(&stack0x00000100,0);
        fVar51 = fVar43;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar51 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar49 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,*(long *)(lVar27 + 0x20),0);
        in_stack_000000c0 = uVar28;
        in_stack_000000c8 = uVar16;
        in_stack_000000d0 = uVar54;
        fVar39 = (float)FUN_040cf0bc(&stack0x000000c0,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar42 = *(float *)(lVar27 + 0x2c);
        fVar41 = (float)FUN_040cf2c8(*(long *)(lVar27 + 0x20),0);
        if (*plVar1 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*plVar1 + 0x50),0x60);
        fVar40 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*plVar1 == 0) goto LAB_03e7bfc0;
        fVar51 = (fVar48 / (float)iVar23) * fVar37 * fVar51;
        fVar48 = fVar51 * (fVar49 / fVar39) * fVar42 * fVar41;
        fVar51 = fVar51 / fVar48;
        fVar40 = fVar51 * fVar40;
        memmove(&stack0x00000100,(void *)(*plVar1 + 0x50),0x60);
        fVar37 = (float)FUN_040cede0(&stack0x00000100,0);
        fVar51 = fVar51 * fVar37;
      }
      else {
        if (*plVar3 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*plVar3 + 0x48),0x60);
        iVar23 = FUN_040ced70(&stack0x00000100,0);
        if (*plVar3 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*plVar3 + 0x48),0x60);
        fVar51 = (float)FUN_040ced80(&stack0x00000100,0);
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar49 = *(float *)(lVar27 + 0x2c);
        fVar37 = fVar43;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar37 = 1.0;
        }
        fVar39 = (float)FUN_040cf2c8(*(long *)(lVar27 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
        fVar40 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*plVar3 == 0) goto LAB_03e7bfc0;
        fVar48 = (fVar48 / (float)iVar23) * fVar51 * fVar37 * fVar49 * fVar39;
        memmove(&stack0x00000100,(void *)(*plVar3 + 0x48),0x60);
        fVar51 = (float)FUN_040cede0(&stack0x00000100,0);
      }
      *plVar5 = lVar27;
      thunk_FUN_01f51358(plVar5,lVar27);
      lVar27 = *plVar2;
      if (lVar27 != 0) {
        uVar24 = *puVar4;
        if (uVar24 < *(uint *)(lVar27 + 0x18)) {
          lVar33 = lVar27 + (long)(int)uVar24 * 0x178;
          *(undefined4 *)(lVar33 + 0x2c) = 1;
          *(float *)(lVar33 + 0x160) = fVar48;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar50;
          goto LAB_03e7afa0;
        }
        goto LAB_03e7c214;
      }
      goto LAB_03e7bfc0;
    }
    bVar20 = uVar26 == 0xad;
    lVar27 = *plVar2;
    fVar40 = 0.0;
    fVar37 = 0.0;
    if (!bVar20 && uVar26 != 3) {
      fVar37 = fVar48;
    }
    if (lVar27 == 0) goto LAB_03e7bfc0;
    uVar24 = *puVar4;
    fVar51 = 0.0;
  }
  if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_03e7c214;
  *(short *)(lVar27 + (long)(int)uVar24 * 0x178 + 0x20) = (short)uVar26;
  if ((*plVar5 == 0) || (lVar27 = *(long *)(*plVar5 + 0x20), lVar27 == 0)) goto LAB_03e7bfc0;
  FUN_040cf28c(&stack0x00000be0,lVar27,0);
  in_stack_000000e0 = uVar28;
  in_stack_000000e8 = uVar16;
  in_stack_000000f0 = uVar54;
  if ((int)uVar26 < 0x10000) {
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar24 = FUN_034f9bb4(uVar26,0);
    uVar24 = uVar24 & 1;
  }
  else {
    uVar24 = 0;
  }
  fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
  *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
  if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
    fVar49 = 0.0;
  }
  else {
    if (*plVar5 == 0) goto LAB_03e7bfc0;
    uVar31 = *puVar4;
    uVar7 = *(uint *)(*plVar5 + 0x28);
    if ((int)uVar31 < (int)uVar9) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar27 + 0x18) <= uVar31 + 1) goto LAB_03e7c214;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar31 + 1) * 0x178 + 0x30);
      if ((((lVar27 == 0) || (*plVar1 == 0)) || (lVar33 = *(long *)(*plVar1 + 0x128), lVar33 == 0))
         || (lVar33 = *(long *)(lVar33 + 0x18), lVar33 == 0)) goto LAB_03e7bfc0;
      uVar29 = FUN_02bd799c(lVar33,uVar7 | *(int *)(lVar27 + 0x28) << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      uVar50 = 0;
      if ((uVar29 & 1) == 0) {
        uVar52 = 0;
        fVar49 = 0.0;
        uVar53 = 0;
      }
      else {
        if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
        uVar50 = *(undefined4 *)(in_stack_000000b8 + 0x14);
        uVar52 = *(undefined4 *)(in_stack_000000b8 + 0x18);
        fVar49 = *(float *)(in_stack_000000b8 + 0x1c);
        uVar53 = *(undefined4 *)(in_stack_000000b8 + 0x20);
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
      uVar31 = *puVar4;
    }
    else {
      uVar50 = 0;
      uVar52 = 0;
      fVar49 = 0.0;
      uVar53 = 0;
    }
    if (0 < (int)uVar31) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar27 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar27 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar27 + 0x18) <= uVar31 - 1) goto LAB_03e7c214;
      lVar27 = *(long *)(lVar27 + (ulong)(uVar31 - 1) * 0x178 + 0x30);
      if (((lVar27 == 0) || (*plVar1 == 0)) ||
         ((lVar33 = *(long *)(*plVar1 + 0x128), lVar33 == 0 ||
          (lVar33 = *(long *)(lVar33 + 0x18), lVar33 == 0)))) goto LAB_03e7bfc0;
      uVar29 = FUN_02bd799c(lVar33,*(uint *)(lVar27 + 0x28) | uVar7 << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_04579da8);
      if ((uVar29 & 1) != 0) {
        if ((in_stack_000000b8 == 0) ||
           (FUN_03e67c10(uVar50,uVar52,fVar49,uVar53,*(undefined4 *)(in_stack_000000b8 + 0x28),
                         *(undefined4 *)(in_stack_000000b8 + 0x2c),
                         *(undefined4 *)(in_stack_000000b8 + 0x30),
                         *(undefined4 *)(in_stack_000000b8 + 0x34),0), in_stack_000000b8 == 0))
        goto LAB_03e7bfc0;
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
    }
    *(float *)(unaff_x19 + 0x2fc) = fVar49;
  }
  fStack0000000000000060 = 0.0;
  fVar39 = *(float *)(unaff_x19 + 0x2b0);
  if (fVar39 != 0.0) {
    if ((*plVar5 == 0) || (lVar27 = *(long *)(*plVar5 + 0x20), lVar27 == 0)) goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar27,0);
    in_stack_000000c0 = uVar28;
    in_stack_000000c8 = uVar16;
    in_stack_000000d0 = uVar54;
    fVar41 = (float)FUN_040cf0b4(&stack0x000000c0,0);
    if ((*plVar5 == 0) || (lVar27 = *(long *)(*plVar5 + 0x20), lVar27 == 0)) goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar27,0);
    in_stack_000000c0 = uVar28;
    in_stack_000000c8 = uVar16;
    in_stack_000000d0 = uVar54;
    fVar42 = (float)FUN_040cf0c4(&stack0x000000c0,0);
    fStack0000000000000060 =
         (1.0 - *(float *)(unaff_x19 + 0x2d4)) * (fVar39 * 0.5 - fVar37 * (fVar41 * 0.5 + fVar42));
    *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
  }
  iVar23 = *(int *)(unaff_x19 + 0x644);
  fVar39 = 0.0;
  if (((cVar8 == '\0') && (fVar39 = 0.0, iVar23 == 0)) && ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0))
  {
    if (*plVar1 == 0) goto LAB_03e7bfc0;
    fVar39 = *(float *)(*plVar1 + 0x1b4);
  }
  lVar27 = *plVar2;
  if (lVar27 == 0) goto LAB_03e7bfc0;
  uVar7 = *puVar4;
  lVar33 = (long)(int)uVar7;
  if (*(uint *)(lVar27 + 0x18) <= uVar7) goto LAB_03e7c214;
  fVar41 = *(float *)(unaff_x19 + 0x4d8);
  fVar42 = *(float *)(unaff_x19 + 0x61c);
  fVar40 = fVar40 * fVar37;
  *(float *)(lVar27 + lVar33 * 0x178 + 0x14c) = (0.0 - fVar41) + fVar42;
  if (iVar23 == 0) {
    fVar40 = fVar40 / fStack0000000000000068;
    fVar51 = (fVar51 * fVar37) / fStack0000000000000068;
  }
  else {
    fVar51 = fVar51 * fVar37;
  }
  fVar40 = fVar42 + fVar40;
  if ((uVar24 == 0) || (uVar7 == *(uint *)(unaff_x19 + 0x498))) {
    fVar51 = fVar42 + fVar51;
    fVar46 = fVar40;
    fVar45 = fVar51;
    if (fVar42 != 0.0) {
      fVar46 = (fVar40 - fVar42) / *(float *)(unaff_x19 + 0x404);
      fVar45 = (fVar51 - fVar42) / *(float *)(unaff_x19 + 0x404);
      if (fVar46 <= fVar40) {
        fVar46 = fVar40;
      }
      if (fVar51 <= fVar45) {
        fVar45 = fVar51;
      }
    }
    lVar27 = lVar27 + lVar33 * 0x178;
    fVar42 = fVar46;
    if (fVar46 <= *(float *)(unaff_x19 + 0x4c8)) {
      fVar42 = *(float *)(unaff_x19 + 0x4c8);
    }
    fVar47 = fVar45;
    if (*(float *)(unaff_x19 + 0x4cc) <= fVar45) {
      fVar47 = *(float *)(unaff_x19 + 0x4cc);
    }
    *(float *)(unaff_x19 + 0x4cc) = fVar47;
    *(float *)(unaff_x19 + 0x4c8) = fVar42;
    *(float *)(lVar27 + 0x154) = fVar46;
    *(float *)(lVar27 + 0x158) = fVar45;
    *(float *)(lVar27 + 0x148) = fVar40 - fVar41;
    *(float *)(unaff_x19 + 0x4c0) = fVar40 - fVar41;
    *(float *)(lVar27 + 0x150) = fVar51 - fVar41;
    *(float *)(unaff_x19 + 0x4c4) = fVar51 - fVar41;
    if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
      *(float *)(unaff_x19 + 0x4b8) = fVar42;
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
      fVar51 = *(float *)(unaff_x19 + 0x4bc);
      fVar41 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
      fStack0000000000000068 = (fVar37 * fVar41) / fStack0000000000000068;
      fVar41 = *(float *)(unaff_x19 + 0x4d8);
      if (fVar51 <= fStack0000000000000068) {
        fVar51 = fStack0000000000000068;
      }
      *(float *)(unaff_x19 + 0x4bc) = fVar51;
    }
  }
  else {
    fVar51 = *(float *)(unaff_x19 + 0x4c8);
    lVar27 = lVar27 + lVar33 * 0x178;
    *(float *)(lVar27 + 0x154) = fVar51;
    fVar42 = *(float *)(unaff_x19 + 0x4cc);
    fVar51 = fVar51 - fVar41;
    *(float *)(lVar27 + 0x148) = fVar51;
    *(float *)(lVar27 + 0x158) = fVar42;
    *(float *)(unaff_x19 + 0x4c0) = fVar51;
    fVar42 = fVar42 - fVar41;
    *(float *)(lVar27 + 0x150) = fVar42;
    *(float *)(unaff_x19 + 0x4c4) = fVar42;
  }
  if (fVar41 == 0.0) {
    if ((uVar24 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fVar51 = *(float *)(unaff_x19 + 0x4b4);
      if (*(float *)(unaff_x19 + 0x4b4) <= fVar40) {
        fVar51 = fVar40;
      }
      *(float *)(unaff_x19 + 0x4b4) = fVar51;
      goto LAB_03e7b470;
    }
    bVar21 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
    if (uVar26 != 9) goto LAB_03e7b4c4;
LAB_03e7b484:
    bVar10 = true;
LAB_03e7b4e0:
    fVar41 = *(float *)(unaff_x19 + 0x360);
    fVar42 = *(float *)(unaff_x19 + 0x640);
    fVar51 = (fVar36 - *(float *)(unaff_x19 + 0x350)) - *(float *)(unaff_x19 + 0x354);
    bVar18 = true;
    if ((fVar41 <= fVar51) && (bVar18 = false, !NAN(fVar41))) {
      bVar18 = fVar41 == -1.0;
    }
    if (!bVar18) {
      fVar51 = fVar41;
    }
    fVar41 = (float)FUN_040cf0d4(&stack0x000000e0,0);
    if (!bVar20) {
      fVar48 = fVar37;
    }
    fVar40 = 1.0;
    if (!bVar21) {
      fVar40 = DAT_00c926dc;
    }
    fStack000000000000005c = ABS(fVar42) + fVar48 * fVar41 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
    if ((fStack000000000000005c <= fVar40 * fVar51 || (uVar6 & 1) != 0) ||
       (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
      fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
      fStack0000000000000044 = *(float *)(unaff_x19 + 0x354);
      if (!bVar10) goto LAB_03e7b658;
      if (*plVar1 != 0) {
        memmove(&stack0x00000100,(void *)(*plVar1 + 0x50),0x60);
        fVar48 = (float)FUN_040cee68(&stack0x00000100,0);
        if (*plVar1 != 0) {
          fVar49 = *(float *)(unaff_x19 + 0x640);
          fVar51 = (float)NEON_ucvtf((uint)*(byte *)(*plVar1 + 0x1b9));
          fVar51 = fVar37 * fVar48 * fVar51;
          fVar48 = fVar51 * (float)(int)(fVar49 / fVar51);
          if (fVar48 <= fVar49) {
            fVar48 = fVar49 + fVar51;
          }
          goto LAB_03e7b75c;
        }
      }
    }
    else {
      uVar25 = FUN_03e81e20();
      lVar27 = *(long *)(unaff_x19 + 0x488);
      if (lVar27 != 0) {
        uVar26 = *(uint *)(unaff_x19 + 0x494);
        uVar24 = uVar26 - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_03e7c214;
        if ((!bVar19 && *(short *)(lVar27 + (long)(int)uVar24 * 0x178 + 0x20) == 0xad) &&
           (*(int *)(unaff_x19 + 0x2e0) == 0)) {
          bVar19 = false;
          in_stack_00000bdc = 0x2d;
          *puVar4 = uVar24;
          fVar48 = fVar37;
          uVar25 = uVar25 - 1;
          in_stack_00000bd8 = uVar24;
          goto LAB_03e7bfb0;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_03e7c214;
        if (*(short *)(lVar27 + (long)(int)uVar26 * 0x178 + 0x20) == 0xad) {
          bVar19 = true;
          fVar48 = fVar37;
          goto LAB_03e7bfb0;
        }
        if ((uStack0000000000000030 & unaff_w24) != 0) {
          fVar48 = *(float *)(unaff_x19 + 0x2d4);
          fVar49 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
          if ((fVar49 <= fVar48) || (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
            if ((*unaff_x22 <= *(float *)(unaff_x19 + 0x250)) ||
               (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) goto LAB_03e7bd10;
            *(float *)(unaff_x19 + 0x23c) = *unaff_x22;
            fVar48 = (*unaff_x22 - *(float *)(unaff_x19 + 0x240)) * 0.5;
            if (fVar48 <= DAT_00c92764) {
              fVar48 = DAT_00c92764;
            }
            fVar48 = *unaff_x22 - fVar48;
            *unaff_x22 = fVar48;
            fVar43 = fVar48 * 20.0 + 0.5;
            fVar48 = DAT_00c92a58;
            if (fVar43 != INFINITY) {
              fVar48 = (float)(int)fVar43 / 20.0;
            }
            if (fVar48 <= *(float *)(unaff_x19 + 0x250)) {
              fVar48 = *(float *)(unaff_x19 + 0x250);
            }
            *unaff_x22 = fVar48;
          }
          else {
            fVar43 = fStack000000000000005c;
            if (0.0 < fVar48) {
              fVar43 = fStack000000000000005c / (1.0 - fVar48);
            }
            fVar48 = fVar48 + (fStack000000000000005c - fVar40 * (fVar51 + DAT_00c928e4)) / fVar43;
            if (fVar49 <= fVar48) {
              fVar48 = fVar49;
            }
            *(float *)(unaff_x19 + 0x2d4) = fVar48;
          }
          goto LAB_03e7c098;
        }
LAB_03e7bd10:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar48 = *(float *)(unaff_x19 + 0x4c8);
          fVar51 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          fVar48 = fVar48 - fVar51;
          if (((fVar13 < ABS(fVar48)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar48;
            *(float *)(unaff_x19 + 0x4d8) = fVar48 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar49 = *(float *)(unaff_x19 + 0x640);
        fVar51 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fVar48 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar51 <= *(float *)(unaff_x19 + 0x4c4)) {
          fVar48 = fVar51;
        }
        *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
        *(float *)(unaff_x19 + 0x4c4) = fVar48;
        *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
        if ((uStack0000000000000034 & 1) == 0) {
          fVar51 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar51;
          if (fStack0000000000000038 <= fVar51) {
            fStack0000000000000038 = fVar51;
          }
        }
        else {
          fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar48;
        }
        FUN_03e821b4();
        lVar27 = *(long *)(unaff_x19 + 0x488);
        *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
        if (lVar27 != 0) {
          if (*(uint *)(unaff_x19 + 0x494) < *(uint *)(lVar27 + 0x18)) {
            fVar48 = *(float *)(unaff_x19 + 0x2c0);
            fVar51 = *(float *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x494) * 0x178 + 0x154);
            bVar19 = fVar48 != DAT_00c927ac;
            if (bVar19) {
              fVar39 = fVar38 * *(float *)(unaff_x19 + 0x2b8);
            }
            else {
              fVar39 = fVar51 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                       fVar34 * (fVar35 + *(float *)(unaff_x19 + 700));
              fVar48 = fVar38 * *(float *)(unaff_x19 + 0x2b8);
            }
            *(bool *)(unaff_x19 + 0x2c4) = bVar19;
            *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar48 + fVar39;
            puVar14 = PTR_DAT_04579e70;
            lVar27 = *(long *)PTR_DAT_04579e70;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar27 = *(long *)puVar14;
            }
            bVar19 = false;
            fStack000000000000006c = fStack000000000000006c + fVar49;
            uVar44 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
            uVar44 = NEON_rev64(uVar44,4);
            *(float *)(unaff_x19 + 0x4d0) = fVar51;
            *(undefined8 *)(unaff_x19 + 0x4c8) = uVar44;
            uStack0000000000000030 = 1;
            fVar48 = fVar37;
            goto LAB_03e7bfb0;
          }
          goto LAB_03e7c214;
        }
      }
    }
    goto LAB_03e7bfc0;
  }
LAB_03e7b470:
  bVar21 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
  if (uVar26 == 9) goto LAB_03e7b484;
  if ((((uVar24 == 0) && (uVar26 != 3)) && (uVar26 != 0x200b)) && (uVar26 != 0xad)) {
LAB_03e7b4dc:
    bVar10 = false;
    goto LAB_03e7b4e0;
  }
LAB_03e7b4c4:
  if ((!(bool)(bVar19 | bVar20 ^ 1U)) || (*(int *)(unaff_x19 + 0x644) == 1)) goto LAB_03e7b4dc;
LAB_03e7b658:
  fVar48 = *(float *)(unaff_x19 + 0x640);
  if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
    fVar51 = (float)FUN_040cf0d4(&stack0x000000e0,0);
    if (*plVar1 == 0) goto LAB_03e7bfc0;
    fVar51 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
             (*(float *)(unaff_x19 + 0x2ac) +
             fVar37 * (fVar49 + fVar51) +
             fVar38 * (fVar39 + fStack0000000000000074 + *(float *)(*plVar1 + 0x1ac)));
  }
  else {
    if (*plVar1 == 0) goto LAB_03e7bfc0;
    fVar51 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
             (*(float *)(unaff_x19 + 0x2ac) +
             (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
             fVar38 * (fStack0000000000000074 + *(float *)(*plVar1 + 0x1ac)));
  }
  fVar48 = fVar48 + fVar51;
  *(float *)(unaff_x19 + 0x640) = fVar48;
  if ((uVar26 == 0x200b) || (uVar24 != 0)) {
    fVar48 = fVar48 + fVar38 * *(float *)(unaff_x19 + 0x2b4);
    *(float *)(unaff_x19 + 0x640) = fVar48;
  }
  if (uVar26 == 0xd) {
    if (fStack0000000000000064 <= fStack000000000000006c + fVar48) {
      fStack0000000000000064 = fStack000000000000006c + fVar48;
    }
    fStack000000000000006c = 0.0;
    fVar48 = *(float *)(unaff_x19 + 0x40c) + 0.0;
LAB_03e7b75c:
    bVar21 = false;
    *(float *)(unaff_x19 + 0x640) = fVar48;
LAB_03e7b764:
    if (*puVar4 == uVar9) goto LAB_03e7b820;
  }
  else {
    bVar21 = uVar26 == 10;
    if (((0xb < uVar26) || ((1 << (ulong)(uVar26 & 0x1f) & 0xc08U) == 0)) && (1 < uVar26 - 0x2028))
    goto LAB_03e7b764;
LAB_03e7b820:
    if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
      fVar48 = *(float *)(unaff_x19 + 0x4c8);
      fVar51 = *(float *)(unaff_x19 + 0x4d0);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar48 = fVar48 - fVar51;
      if (((fVar13 < ABS(fVar48)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
         (*(char *)(unaff_x19 + 0x33c) == '\0')) {
        *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar48;
        *(float *)(unaff_x19 + 0x4d8) = fVar48 + *(float *)(unaff_x19 + 0x4d8);
      }
    }
    fVar48 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
    if (fVar48 <= *(float *)(unaff_x19 + 0x4c4)) {
      fStack0000000000000038 = fVar48;
    }
    fVar51 = fStack0000000000000044 +
             fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
    fVar48 = fStack0000000000000064;
    if (fStack0000000000000064 <= fVar51) {
      fVar48 = fVar51;
    }
    *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
    fStack000000000000006c = fVar48;
    if (*(uint *)(unaff_x19 + 0x494) != uVar9) {
      fStack000000000000006c = 0.0;
      fStack0000000000000064 = fVar48;
    }
    fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
    *(undefined1 *)(unaff_x19 + 0x33c) = 0;
    if (bVar21) {
LAB_03e7bb3c:
      FUN_03e821b4();
      FUN_03e821b4();
      uVar24 = *(uint *)(unaff_x19 + 0x494);
      lVar27 = *(long *)(unaff_x19 + 0x488);
      iVar23 = uVar24 + 1;
      *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
      *(int *)(unaff_x19 + 0x498) = iVar23;
      if (lVar27 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_03e7c214;
      fVar48 = *(float *)(lVar27 + (long)(int)uVar24 * 0x178 + 0x154);
      if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
        fVar51 = 0.0;
        if (!(bool)(uVar26 != 0x2029 & (bVar21 ^ 1U))) {
          fVar51 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar32 = 0;
        fVar51 = fVar48 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                 fVar34 * (fVar35 + *(float *)(unaff_x19 + 700)) +
                 fVar38 * (*(float *)(unaff_x19 + 0x2b8) + fVar51) + *(float *)(unaff_x19 + 0x4d8);
      }
      else {
        fVar51 = 0.0;
        if (!(bool)(uVar26 != 0x2029 & (bVar21 ^ 1U))) {
          fVar51 = *(float *)(unaff_x19 + 0x2cc);
        }
        uVar32 = 1;
        fVar51 = *(float *)(unaff_x19 + 0x4d8) +
                 *(float *)(unaff_x19 + 0x2c0) + fVar38 * (*(float *)(unaff_x19 + 0x2b8) + fVar51);
      }
      *(float *)(unaff_x19 + 0x4d8) = fVar51;
      *(undefined1 *)(unaff_x19 + 0x2c4) = uVar32;
      puVar14 = PTR_DAT_04579e70;
      lVar27 = *(long *)PTR_DAT_04579e70;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar27 = *(long *)puVar14;
        iVar23 = *puVar4 + 1;
      }
      uVar44 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 0x640) =
           *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
      uVar44 = NEON_rev64(uVar44,4);
      *(float *)(unaff_x19 + 0x4d0) = fVar48;
      *(undefined8 *)(unaff_x19 + 0x4c8) = uVar44;
      *(int *)(unaff_x19 + 0x494) = iVar23;
      fVar48 = fVar37;
      goto LAB_03e7bfb0;
    }
    if ((int)uVar26 < 0x2028) {
      if (uVar26 == 3) {
        if (*(long *)(unaff_x19 + 0x478) != 0) {
          uVar25 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
          uVar26 = 3;
          goto LAB_03e7b774;
        }
        goto LAB_03e7bfc0;
      }
      if ((uVar26 == 0xb) || (uVar26 == 0x2d)) goto LAB_03e7bb3c;
    }
    else if (uVar26 - 0x2028 < 2) goto LAB_03e7bb3c;
  }
LAB_03e7b774:
  if (((uStack0000000000000034 & 1) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
    if ((uVar24 == 0) && (((uVar26 != 0x2d && (uVar26 != 0x200b)) && (uVar26 != 0xad)))) {
      if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03e7b9d0:
        if (((((0x2bfd < uVar26 - 0xac01) && (0xfd < uVar26 - 0x1101)) && (0x1d < uVar26 - 0xa961))
            || (uVar29 = FUN_03e90be8(0), (uVar29 & 1) != 0)) &&
           ((((0xed < uVar26 - 0xff01 && (0x1d < uVar26 - 0xfe31)) && (0x717d < uVar26 - 0x2e81)) &&
            (0x1fd < uVar26 - 0xf901)))) goto LAB_03e7b79c;
        lVar27 = FUN_03e90a7c(0);
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_03e7bfc0;
        uVar26 = FUN_02afbd84(*(long *)(lVar27 + 0x10),uVar26,*(undefined8 *)PTR_DAT_04579da0);
        if ((int)uVar9 <= (int)*puVar4) {
          if (uStack0000000000000030 != 0 || ((uVar26 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
            FUN_03e821b4();
          }
LAB_03e7bf74:
          uStack0000000000000030 = 0;
          bVar11 = true;
          goto Unity_VisualScripting_Serialization__Serialize;
        }
        lVar27 = FUN_03e90a7c(0);
        if ((lVar27 == 0) || (lVar33 = *plVar2, lVar33 == 0)) goto LAB_03e7bfc0;
        if (*(uint *)(lVar33 + 0x18) <= *puVar4 + 1) goto LAB_03e7c214;
        if (*(long *)(lVar27 + 0x18) == 0) goto LAB_03e7bfc0;
        uVar29 = FUN_02afbd84(*(long *)(lVar27 + 0x18),
                              *(undefined2 *)(lVar33 + (long)(int)(*puVar4 + 1) * 0x178 + 0x20),
                              *(undefined8 *)PTR_DAT_04579da0);
        if (uStack0000000000000030 == 0 && ((uVar26 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
        if ((uVar29 & 1) == 0) goto LAB_03e7bf60;
        if (uStack0000000000000030 == 0) goto LAB_03e7bf74;
        if (uVar24 != 0) {
          FUN_03e821b4();
        }
        FUN_03e821b4();
        bVar11 = true;
LAB_03e7b988:
        uStack0000000000000030 = 1;
      }
      else {
LAB_03e7b79c:
        if (bVar11) {
          lVar27 = FUN_03e90a7c(0);
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_03e7bfc0;
          uVar29 = FUN_02afbd84(*(long *)(lVar27 + 0x10),uVar26,*(undefined8 *)PTR_DAT_04579da0);
          if ((uVar29 & 1) == 0) {
            FUN_03e821b4();
          }
          bVar11 = false;
        }
        else {
          if (uStack0000000000000030 != 0) {
            if ((!bVar19 && bVar20) || (uVar24 != 0)) {
              FUN_03e821b4();
            }
            FUN_03e821b4();
            bVar11 = false;
            goto LAB_03e7b988;
          }
          bVar11 = false;
          uStack0000000000000030 = 0;
        }
      }
    }
    else {
      if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
      if (((uVar26 - 0x2007 < 0x29) &&
          ((1L << ((ulong)(uVar26 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((uVar26 == 0xa0 || (uVar26 == 0x2060)))) goto LAB_03e7b9d0;
      FUN_03e821b4();
      bVar11 = false;
      uStack0000000000000030 = 0;
      in_stack_00000170 = 0xffffffff;
    }
  }
Unity_VisualScripting_Serialization__Serialize:
  *puVar4 = *puVar4 + 1;
  fVar48 = fVar37;
LAB_03e7bfb0:
  lVar27 = *(long *)(unaff_x19 + 0x478);
  uVar25 = uVar25 + 1;
  if (lVar27 == 0) goto LAB_03e7bfc0;
  goto LAB_03e7a6b4;
}


