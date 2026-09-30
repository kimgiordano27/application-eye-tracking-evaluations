/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection$$GetFlattenedMethod
ENTRY_POINT: 036ede90
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection__GetFlattenedMethod
               (float param_1,float param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint *puVar19;
  long unaff_x21;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  byte bStack000000000000004c;
  
  bStack000000000000004c = (byte)((ulong)param_4 >> 0x18);
  if ((*(byte *)(unaff_x21 + 0x62f) & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2271);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0x62f) = 1;
  }
  if ((*(long *)(param_3 + 0x368) == 0) ||
     (lVar16 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(param_3 + 0x494)) goto LAB_036ee9dc;
  lVar16 = lVar16 + (long)(int)*(uint *)(param_3 + 0x494) * 0x178;
  plVar1 = (long *)(param_3 + 0x368);
  *(undefined8 *)(lVar16 + 0x70) = *(undefined8 *)(lVar16 + 0x11c);
  *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar16 + 0x124);
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
  puVar2 = (uint *)(param_3 + 0x494);
  if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
  lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
  *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(lVar16 + 0x110);
  *(undefined4 *)(lVar16 + 0xa0) = *(undefined4 *)(lVar16 + 0x118);
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
  if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
  lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
  *(undefined8 *)(lVar16 + 0xc0) = *(undefined8 *)(lVar16 + 0x128);
  *(undefined4 *)(lVar16 + 200) = *(undefined4 *)(lVar16 + 0x130);
  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
  if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
  lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
  *(undefined8 *)(lVar16 + 0xe8) = *(undefined8 *)(lVar16 + 0x134);
  *(undefined4 *)(lVar16 + 0xf0) = *(undefined4 *)(lVar16 + 0x13c);
  puVar6 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  uVar18 = (uint)param_4;
  uVar8 = (uint)*(byte *)(param_3 + 0x147);
  if (uVar18 >> 0x18 <= uVar8) {
    uVar8 = (uint)bStack000000000000004c;
  }
  bStack000000000000004c = (byte)uVar8;
  if ((*(char *)(param_3 + 0x160) == '\0') ||
     ((*(char *)(param_3 + 0x1d4) == '\0' && (1 < *(int *)(param_3 + 0x4f8))))) {
    if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
    if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
    uVar4 = (undefined1)((ulong)param_4 >> 0x10);
    *(undefined1 *)(lVar16 + 0x96) = uVar4;
    uVar5 = (undefined2)param_4;
    *(undefined2 *)(lVar16 + 0x94) = uVar5;
    *(byte *)(lVar16 + 0x97) = bStack000000000000004c;
    if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
    if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
    *(undefined1 *)(lVar16 + 0xbe) = uVar4;
    *(undefined2 *)(lVar16 + 0xbc) = uVar5;
    *(byte *)(lVar16 + 0xbf) = bStack000000000000004c;
    if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
    if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
    *(undefined1 *)(lVar16 + 0xe6) = uVar4;
    *(undefined2 *)(lVar16 + 0xe4) = uVar5;
    *(byte *)(lVar16 + 0xe7) = bStack000000000000004c;
    if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
    if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
    lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
    *(undefined1 *)(lVar16 + 0x10e) = uVar4;
    *(undefined2 *)(lVar16 + 0x10c) = uVar5;
    *(byte *)(lVar16 + 0x10f) = bStack000000000000004c;
  }
  else {
    uVar20 = *(undefined8 *)(param_3 + 0x1a8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar15 = FUN_0391f968(uVar20,0,0);
    if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
    uVar3 = *puVar2;
    if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
    if ((uVar15 & 1) == 0) {
      fVar31 = (float)(uVar18 & 0xff) / 255.0;
      fVar29 = (float)(uVar18 >> 8 & 0xff) / 255.0;
      fVar27 = (float)(uVar18 >> 0x10 & 0xff) / 255.0;
      fVar25 = (float)uVar8 / 255.0;
      uVar7 = FUN_01bd7168(*(float *)(param_3 + 0x188) * fVar31,*(float *)(param_3 + 0x18c) * fVar29
                           ,*(float *)(param_3 + 400) * fVar27,*(float *)(param_3 + 0x194) * fVar25,
                           0);
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0x94) = uVar7;
      if ((*(long *)(param_3 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
      uVar7 = FUN_01bd7168(fVar31 * *(float *)(param_3 + 0x168),fVar29 * *(float *)(param_3 + 0x16c)
                           ,fVar27 * *(float *)(param_3 + 0x170),
                           fVar25 * *(float *)(param_3 + 0x174),0);
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0xbc) = uVar7;
      if ((*(long *)(param_3 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
      uVar7 = FUN_01bd7168(fVar31 * *(float *)(param_3 + 0x178),fVar29 * *(float *)(param_3 + 0x17c)
                           ,fVar27 * *(float *)(param_3 + 0x180),
                           fVar25 * *(float *)(param_3 + 0x184),0);
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0xe4) = uVar7;
      if ((*(long *)(param_3 + 0x368) == 0) ||
         (lVar16 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
      fVar21 = *(float *)(param_3 + 0x198);
      fVar22 = *(float *)(param_3 + 0x19c);
      fVar23 = *(float *)(param_3 + 0x1a0);
      fVar24 = *(float *)(param_3 + 0x1a4);
    }
    else {
      lVar17 = *(long *)(param_3 + 0x1a8);
      if (lVar17 == 0) goto LAB_036ee9d8;
      fVar31 = (float)(uVar18 & 0xff) / 255.0;
      fVar29 = (float)(uVar18 >> 8 & 0xff) / 255.0;
      fVar27 = (float)(uVar18 >> 0x10 & 0xff) / 255.0;
      fVar25 = (float)uVar8 / 255.0;
      uVar7 = FUN_01bd7168(*(float *)(lVar17 + 0x3c) * fVar31,*(float *)(lVar17 + 0x40) * fVar29,
                           *(float *)(lVar17 + 0x44) * fVar27,*(float *)(lVar17 + 0x48) * fVar25,0);
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0x94) = uVar7;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
      lVar17 = *(long *)(param_3 + 0x1a8);
      if (lVar17 == 0) goto LAB_036ee9d8;
      uVar7 = FUN_01bd7168(fVar31 * *(float *)(lVar17 + 0x1c),fVar29 * *(float *)(lVar17 + 0x20),
                           fVar27 * *(float *)(lVar17 + 0x24),fVar25 * *(float *)(lVar17 + 0x28),0);
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0xbc) = uVar7;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
      lVar17 = *(long *)(param_3 + 0x1a8);
      if (lVar17 == 0) goto LAB_036ee9d8;
      uVar7 = FUN_01bd7168(fVar31 * *(float *)(lVar17 + 0x2c),fVar29 * *(float *)(lVar17 + 0x30),
                           fVar27 * *(float *)(lVar17 + 0x34),fVar25 * *(float *)(lVar17 + 0x38),0);
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0xe4) = uVar7;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar3 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
      lVar17 = *(long *)(param_3 + 0x1a8);
      if (lVar17 == 0) goto LAB_036ee9d8;
      fVar21 = *(float *)(lVar17 + 0x4c);
      fVar22 = *(float *)(lVar17 + 0x50);
      fVar23 = *(float *)(lVar17 + 0x54);
      fVar24 = *(float *)(lVar17 + 0x58);
    }
    uVar7 = FUN_01bd7168(fVar31 * fVar21,fVar29 * fVar22,fVar27 * fVar23,fVar25 * fVar24,0);
    *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0x10c) = uVar7;
  }
  uVar20 = *(undefined8 *)(param_3 + 0x580);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar15 = FUN_0391f968(uVar20,0,0);
  if ((uVar15 & 1) != 0) {
    if ((*(long *)(param_3 + 0x368) == 0) ||
       (lVar16 = *(long *)(*(long *)(param_3 + 0x368) + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
    uVar3 = *puVar2;
    if (*(uint *)(lVar16 + 0x18) <= uVar3) goto LAB_036ee9dc;
    if (*(char *)(param_3 + 0x5b0) == '\0') {
      lVar17 = *(long *)(param_3 + 0x580);
      if (lVar17 == 0) goto LAB_036ee9d8;
      fVar31 = (float)(uVar18 & 0xff) / 255.0;
      fVar29 = (float)(uVar18 >> 8 & 0xff) / 255.0;
      fVar25 = (float)(uVar18 >> 0x10 & 0xff) / 255.0;
      fVar27 = (float)uVar8 / 255.0;
      FUN_036c10cc(*(undefined4 *)(lVar17 + 0x3c),*(undefined4 *)(lVar17 + 0x40),
                   *(undefined4 *)(lVar17 + 0x44),*(undefined4 *)(lVar17 + 0x48),fVar31,fVar29,
                   fVar25,fVar27,0);
      uVar7 = FUN_01bd7168(0);
      *(undefined4 *)(lVar16 + (long)(int)uVar3 * 0x178 + 0x94) = uVar7;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar8 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_036ee9dc;
      lVar17 = *(long *)(param_3 + 0x580);
      if (lVar17 == 0) goto LAB_036ee9d8;
      FUN_036c10cc(*(undefined4 *)(lVar17 + 0x1c),*(undefined4 *)(lVar17 + 0x20),
                   *(undefined4 *)(lVar17 + 0x24),*(undefined4 *)(lVar17 + 0x28),fVar31,fVar29,
                   fVar25,fVar27,0);
      uVar7 = FUN_01bd7168(0);
      *(undefined4 *)(lVar16 + (long)(int)uVar8 * 0x178 + 0xbc) = uVar7;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar8 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_036ee9dc;
      lVar17 = *(long *)(param_3 + 0x580);
      if (lVar17 == 0) goto LAB_036ee9d8;
      FUN_036c10cc(*(undefined4 *)(lVar17 + 0x2c),*(undefined4 *)(lVar17 + 0x30),
                   *(undefined4 *)(lVar17 + 0x34),*(undefined4 *)(lVar17 + 0x38),fVar31,fVar29,
                   fVar25,fVar27,0);
      uVar7 = FUN_01bd7168(0);
      *(undefined4 *)(lVar16 + (long)(int)uVar8 * 0x178 + 0xe4) = uVar7;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      uVar8 = *puVar2;
      if (*(uint *)(lVar16 + 0x18) <= uVar8) goto LAB_036ee9dc;
      lVar17 = *(long *)(param_3 + 0x580);
      if (lVar17 == 0) goto LAB_036ee9d8;
      FUN_036c10cc(*(undefined4 *)(lVar17 + 0x4c),*(undefined4 *)(lVar17 + 0x50),
                   *(undefined4 *)(lVar17 + 0x54),*(undefined4 *)(lVar17 + 0x58),fVar31,fVar29,
                   fVar25,fVar27,0);
      uVar7 = FUN_01bd7168(0);
      *(undefined4 *)(lVar16 + (long)(int)uVar8 * 0x178 + 0x10c) = uVar7;
    }
    else {
      puVar19 = (uint *)(lVar16 + (long)(int)uVar3 * 0x178 + 0x94);
      uVar8 = *puVar19;
      lVar16 = *(long *)(param_3 + 0x580);
      if (lVar16 == 0) goto LAB_036ee9d8;
      uVar8 = FUN_01bd7168(((float)(uVar8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x3c),
                           ((float)(uVar8 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x40),
                           ((float)(uVar8 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar16 + 0x44),
                           ((float)(uVar8 >> 0x18) / 255.0) * *(float *)(lVar16 + 0x48),0);
      *puVar19 = uVar8;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
      puVar19 = (uint *)(lVar16 + (long)(int)*puVar2 * 0x178 + 0xbc);
      uVar8 = *puVar19;
      lVar16 = *(long *)(param_3 + 0x580);
      if (lVar16 == 0) goto LAB_036ee9d8;
      uVar8 = FUN_01bd7168(((float)(uVar8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c),
                           ((float)(uVar8 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x20),
                           ((float)(uVar8 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar16 + 0x24),
                           ((float)(uVar8 >> 0x18) / 255.0) * *(float *)(lVar16 + 0x28),0);
      *puVar19 = uVar8;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
      puVar19 = (uint *)(lVar16 + (long)(int)*puVar2 * 0x178 + 0xe4);
      uVar8 = *puVar19;
      lVar16 = *(long *)(param_3 + 0x580);
      if (lVar16 == 0) goto LAB_036ee9d8;
      uVar8 = FUN_01bd7168(((float)(uVar8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x2c),
                           ((float)(uVar8 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x30),
                           ((float)(uVar8 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar16 + 0x34),
                           ((float)(uVar8 >> 0x18) / 255.0) * *(float *)(lVar16 + 0x38),0);
      *puVar19 = uVar8;
      if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0)) goto LAB_036ee9d8;
      if (*(uint *)(lVar16 + 0x18) <= *puVar2) goto LAB_036ee9dc;
      lVar17 = *(long *)(param_3 + 0x580);
      if (lVar17 == 0) goto LAB_036ee9d8;
      lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
      uVar8 = *(uint *)(lVar16 + 0x10c);
      uVar7 = FUN_01bd7168(((float)(uVar8 & 0xff) / 255.0) * *(float *)(lVar17 + 0x4c),
                           ((float)(uVar8 >> 8 & 0xff) / 255.0) * *(float *)(lVar17 + 0x50),
                           ((float)(uVar8 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar17 + 0x54),
                           ((float)(uVar8 >> 0x18) / 255.0) * *(float *)(lVar17 + 0x58),0);
      *(undefined4 *)(lVar16 + 0x10c) = uVar7;
    }
  }
  puVar6 = StringLiteral_2271;
  fVar25 = 0.0;
  if (*(char *)(param_3 + 0x108) != '\0') {
    fVar25 = param_2;
  }
  if ((*(long *)(param_3 + 0x648) != 0) &&
     (lVar16 = *(long *)(*(long *)(param_3 + 0x648) + 0x20), lVar16 != 0)) {
    FUN_0396b168(lVar16,0);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar9 = FUN_0396ad2c();
    if (*(long *)(param_3 + 0x100) != 0) {
      iVar28 = *(int *)(*(long *)(param_3 + 0x100) + 0x108);
      iVar10 = FUN_0396ad34();
      if (*(long *)(param_3 + 0x100) != 0) {
        iVar30 = *(int *)(*(long *)(param_3 + 0x100) + 0x10c);
        iVar11 = FUN_0396ad34();
        iVar12 = FUN_0396ad44();
        if (*(long *)(param_3 + 0x100) != 0) {
          iVar26 = *(int *)(*(long *)(param_3 + 0x100) + 0x10c);
          iVar13 = FUN_0396ad2c();
          iVar14 = FUN_0396ad3c();
          if (((*(long *)(param_3 + 0x100) != 0) && (*plVar1 != 0)) &&
             (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 != 0)) {
            if (*puVar2 < *(uint *)(lVar16 + 0x18)) {
              fVar29 = (((float)iVar9 - param_1) - fVar25) / (float)iVar28;
              fVar27 = (((float)iVar10 - param_1) - fVar25) / (float)iVar30;
              iVar9 = *(int *)(*(long *)(param_3 + 0x100) + 0x108);
              lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
              *(float *)(lVar16 + 0x7c) = fVar29;
              *(float *)(lVar16 + 0x80) = fVar27;
              if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
              goto LAB_036ee9d8;
              if (*puVar2 < *(uint *)(lVar16 + 0x18)) {
                lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
                fVar31 = (fVar25 + (float)iVar11 + param_1 + (float)iVar12) / (float)iVar26;
                *(float *)(lVar16 + 0xa4) = fVar29;
                *(float *)(lVar16 + 0xa8) = fVar31;
                if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
                goto LAB_036ee9d8;
                if (*puVar2 < *(uint *)(lVar16 + 0x18)) {
                  lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
                  fVar25 = (fVar25 + (float)iVar13 + param_1 + (float)iVar14) / (float)iVar9;
                  *(float *)(lVar16 + 0xcc) = fVar25;
                  *(float *)(lVar16 + 0xd0) = fVar31;
                  if ((*plVar1 == 0) || (lVar16 = *(long *)(*plVar1 + 0x38), lVar16 == 0))
                  goto LAB_036ee9d8;
                  if (*puVar2 < *(uint *)(lVar16 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)*puVar2 * 0x178;
                    *(float *)(lVar16 + 0xf4) = fVar25;
                    *(float *)(lVar16 + 0xf8) = fVar27;
                    return;
                  }
                }
              }
            }
LAB_036ee9dc:
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
        }
      }
    }
  }
LAB_036ee9d8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


