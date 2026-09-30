/*
FUNCTION_NAME: c2$$a
ENTRY_POINT: 01bebeec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
c2__a(long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
     undefined1 param_5 [16],undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  undefined8 *in_x9;
  undefined4 *puVar5;
  float *in_x10;
  long in_x11;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long unaff_x21;
  uint unaff_w22;
  uint uVar12;
  long unaff_x23;
  uint uVar13;
  long unaff_x24;
  long *unaff_x25;
  long lVar14;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  long in_stack_00000020;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  long in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  while( true ) {
    uVar13 = (uint)unaff_x24;
    uVar8 = uVar13 + 1;
    if (*(uint *)(param_1 + 0x18) <= uVar8) break;
    lVar6 = *(long *)(in_x11 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    lVar14 = (long)(int)uVar8;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar7 = param_1 + lVar14 * unaff_x20;
    uVar15 = *(undefined8 *)(lVar7 + 0x20);
    fVar16 = *(float *)(lVar7 + 0x28);
    lVar6 = lVar6 + lVar14 * unaff_x20;
    fVar24 = (float)param_6;
    fVar17 = (float)((ulong)param_6 >> 0x20);
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) - fVar17,(float)uVar15 - fVar24);
    *(float *)(lVar6 + 0x28) = fVar16 - param_4;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    uVar11 = (uint)unaff_x21;
    if ((*(uint *)(lVar6 + 0x18) <= uVar11) ||
       (uVar12 = (uint)unaff_x23, *(uint *)(param_1 + 0x18) <= uVar12)) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    fVar16 = *in_x10;
    lVar6 = lVar6 + unaff_x23 * unaff_x20;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*in_x9 >> 0x20) - fVar17,(float)*in_x9 - fVar24);
    *(float *)(lVar6 + 0x28) = fVar16 - param_4;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if ((*(uint *)(lVar6 + 0x18) <= uVar11) ||
       (uVar1 = uVar13 + 3, *(uint *)(param_1 + 0x18) <= uVar1)) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    lVar7 = (long)(int)uVar1;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    param_1 = param_1 + lVar7 * unaff_x20;
    uVar15 = *(undefined8 *)(param_1 + 0x20);
    fVar16 = *(float *)(param_1 + 0x28);
    lVar6 = lVar6 + lVar7 * unaff_x20;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) - fVar17,(float)uVar15 - fVar24);
    *(float *)(lVar6 + 0x28) = fVar16 - param_4;
    FUN_0391a0e8(uStack0000000000000044,uStack0000000000000040,0);
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(unaff_x28);
      DAT_03fed258 = '\x01';
    }
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__;
    lVar6 = *(long *)(*unaff_x28 + 0xb8);
    uVar21 = *(undefined4 *)(lVar6 + 0xc);
    uVar20 = *(undefined4 *)(lVar6 + 0x10);
    uVar28 = *(undefined4 *)(lVar6 + 0x14);
    if (*(char *)(unaff_x29 + 0x256) == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      cVar4 = DAT_03fed258;
      *(undefined1 *)(unaff_x29 + 0x256) = 1;
    }
    else {
      cVar4 = '\x01';
    }
    puVar5 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
    uVar22 = *puVar5;
    uVar25 = puVar5[1];
    uVar26 = puVar5[2];
    uVar27 = puVar5[3];
    if (cVar4 == '\0') {
      thunk_FUN_01ad9084(unaff_x28);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,uVar21,uVar20,uVar28,uVar22,uVar25,uVar26,uVar27,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    lVar9 = lVar6 + unaff_x24 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar9 = lVar6 + lVar14 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar9 = lVar6 + unaff_x23 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    lVar9 = lVar6 + lVar7 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    puVar2 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    lVar6 = lVar6 + unaff_x24 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = param_4 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar6 = lVar6 + lVar14 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = param_4 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = lVar6 + unaff_x23 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = param_4 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    lVar6 = lVar6 + lVar7 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar17 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = param_4 + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    lVar6 = lVar6 + unaff_x24 * 0xc;
    fVar16 = (float)in_stack_00000058;
    fVar24 = (float)((ulong)in_stack_00000058 >> 0x20);
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - fVar24,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar16);
    *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - in_stack_00000050._4_4_;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar6 = lVar6 + lVar14 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - fVar24,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar16);
    *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - in_stack_00000050._4_4_;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = lVar6 + unaff_x23 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - fVar24,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar16);
    *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - in_stack_00000050._4_4_;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    lVar6 = lVar6 + lVar7 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) - fVar24,
                  (float)*(undefined8 *)(lVar6 + 0x20) - fVar16);
    *(float *)(lVar6 + 0x28) = *(float *)(lVar6 + 0x28) - in_stack_00000050._4_4_;
    if (DAT_03fed258 == '\0') {
      thunk_FUN_01ad9084(puVar2);
      DAT_03fed258 = '\x01';
    }
    FUN_03910ecc(&stack0x00000080,0);
    in_stack_000000c8 = in_stack_00000088;
    in_stack_000000c0 = in_stack_00000080;
    in_stack_000000d8 = in_stack_00000098;
    in_stack_000000d0 = in_stack_00000090;
    in_stack_000000e8 = in_stack_000000a8;
    in_stack_000000e0 = in_stack_000000a0;
    in_stack_000000f8 = in_stack_000000b8;
    in_stack_000000f0 = in_stack_000000b0;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    lVar9 = lVar6 + unaff_x24 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar9 = lVar6 + lVar14 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar9 = lVar6 + unaff_x23 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    lVar9 = lVar6 + lVar7 * 0xc;
    uVar21 = *(undefined4 *)(lVar9 + 0x24);
    uVar28 = *(undefined4 *)(lVar9 + 0x28);
    uVar20 = FUN_03911ddc(*(undefined4 *)(lVar9 + 0x20),&stack0x000000c0,0);
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    *(undefined4 *)(lVar9 + 0x20) = uVar20;
    *(undefined4 *)(lVar9 + 0x24) = uVar21;
    *(undefined4 *)(lVar9 + 0x28) = uVar28;
    unaff_x28 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    unaff_x20 = 0xc;
    unaff_x29 = 0x3fed000;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    lVar6 = lVar6 + unaff_x24 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar16 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar6 = lVar6 + lVar14 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar16 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) break;
    lVar6 = lVar6 + unaff_x23 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar16 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar11) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) break;
    lVar6 = lVar6 + lVar7 * 0xc;
    *(ulong *)(lVar6 + 0x20) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20),
                  fVar16 + (float)*(undefined8 *)(lVar6 + 0x20));
    *(float *)(lVar6 + 0x28) = in_stack_00000050._4_4_ + *(float *)(lVar6 + 0x28);
    lVar6 = in_stack_00000048;
    do {
      unaff_w22 = unaff_w22 + 1;
      if ((int)lVar6 < (int)unaff_w22) {
        do {
          lVar6 = *(long *)(in_stack_00000038 + 0x28);
          uStack0000000000000034 = uStack0000000000000034 + 1;
          if (uStack0000000000000034 == uStack0000000000000030) {
            if (lVar6 == 0) goto LAB_01bec90c;
            uVar10 = 0;
            lVar14 = 0x20;
            goto LAB_01bec878;
          }
          if ((lVar6 == 0) || (lVar14 = *(long *)(lVar6 + 0x50), lVar14 == 0)) goto LAB_01bec90c;
          if (*(uint *)(lVar14 + 0x18) <= uStack0000000000000034) goto c6__Equals;
          lVar7 = *(long *)(lVar6 + 0x38);
          if (lVar7 == 0) goto LAB_01bec90c;
          lVar14 = lVar14 + (long)(int)uStack0000000000000034 * 0x5c;
          unaff_w22 = *(uint *)(lVar14 + 0x34);
          if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto c6__Equals;
          uVar8 = *(uint *)(lVar14 + 0x3c);
          lVar6 = (long)(int)uVar8;
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto c6__Equals;
          lVar9 = lVar7 + 0x20 + (long)(int)unaff_w22 * 0x178;
          uVar15 = *(undefined8 *)(lVar9 + 0xfc);
          lVar14 = lVar7 + 0x20 + lVar6 * 0x178;
          uVar23 = *(undefined8 *)(lVar14 + 0x108);
          fVar24 = *(float *)(lVar14 + 0x110);
          fVar16 = *(float *)(lVar9 + 0x104);
          FUN_0391a0e8(0xbe800000,0x3e800000,0);
          FUN_03914564(0,0);
        } while ((int)uVar8 < (int)unaff_w22);
        in_stack_00000058 =
             CONCAT44(((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar23 >> 0x20)) * 0.5,
                      ((float)uVar15 + (float)uVar23) * 0.5);
        in_stack_00000050._4_4_ = (fVar16 + fVar24) * 0.5;
        in_stack_00000048 = lVar6;
      }
      lVar14 = *(long *)(in_stack_00000038 + 0x28);
      if ((lVar14 == 0) || (lVar7 = *(long *)(lVar14 + 0x38), lVar7 == 0)) goto LAB_01bec90c;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w22) goto c6__Equals;
    } while (*(char *)(lVar7 + (long)(int)unaff_w22 * 0x178 + 0x194) == '\0');
    lVar6 = *(long *)(lVar14 + 0x60);
    if (lVar6 == 0) goto LAB_01bec90c;
    lVar7 = lVar7 + (long)(int)unaff_w22 * 0x178;
    uVar8 = *(uint *)(lVar7 + 0x58);
    unaff_x21 = (long)(int)uVar8;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    param_1 = *(long *)(lVar6 + unaff_x21 * 0x50 + 0x30);
    if (param_1 == 0) goto LAB_01bec90c;
    uVar13 = *(uint *)(lVar7 + 0x6c);
    unaff_x24 = (long)(int)uVar13;
    if ((*(uint *)(param_1 + 0x18) <= uVar13) || (*(uint *)(param_1 + 0x18) <= uVar13 + 2)) break;
    unaff_x23 = (long)(int)(uVar13 + 2);
    lVar14 = param_1 + unaff_x24 * 0xc;
    lVar6 = param_1 + unaff_x23 * 0xc;
    uVar15 = *(undefined8 *)(lVar14 + 0x20);
    fVar16 = *(float *)(lVar14 + 0x28);
    in_x9 = (undefined8 *)(lVar6 + 0x20);
    in_x10 = (float *)(lVar6 + 0x28);
    lVar6 = *unaff_x25;
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar8) break;
    lVar6 = *(long *)(lVar6 + unaff_x21 * 8 + 0x20);
    if (lVar6 == 0) goto LAB_01bec90c;
    if (*(uint *)(lVar6 + 0x18) <= uVar13) break;
    fVar24 = (float)uVar15;
    fVar17 = (float)((ulong)uVar15 >> 0x20);
    fVar18 = (fVar24 + (float)*in_x9) * 0.5;
    fVar19 = (fVar17 + (float)((ulong)*in_x9 >> 0x20)) * 0.5;
    param_6 = CONCAT44(fVar19,fVar18);
    param_4 = (fVar16 + *in_x10) * 0.5;
    lVar6 = lVar6 + unaff_x24 * 0xc;
    *(ulong *)(lVar6 + 0x20) = CONCAT44(fVar17 - fVar19,fVar24 - fVar18);
    *(float *)(lVar6 + 0x28) = fVar16 - param_4;
    in_x11 = *unaff_x25;
    if (in_x11 == 0) goto LAB_01bec90c;
    if (*(uint *)(in_x11 + 0x18) <= uVar8) break;
  }
c6__Equals:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_01bec878:
  lVar6 = *(long *)(lVar6 + 0x60);
  if (lVar6 == 0) {
LAB_01bec90c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar8 = (uint)uVar10;
  if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar8) {
    uVar15 = thunk_FUN_01afaadc(*(undefined8 *)
                                 Method_Unity_XR_Oculus_OculusRestarter_<RestartCoroutine>d__23_System_Collections_IEnumerator_Reset__
                               );
    FUN_03924d70(DAT_00b55290,uVar15,0);
    *(undefined8 *)(in_stack_00000038 + 0x18) = uVar15;
    thunk_FUN_01b4f09c((undefined8 *)(in_stack_00000038 + 0x18),uVar15);
    *(undefined4 *)(in_stack_00000038 + 0x10) = 2;
    return 1;
  }
  if (*(uint *)(lVar6 + 0x18) <= uVar8) goto c6__Equals;
  lVar7 = *(long *)(in_stack_00000038 + 0x30);
  if (lVar7 == 0) goto LAB_01bec90c;
  if (*(uint *)(lVar7 + 0x18) <= uVar8) goto c6__Equals;
  if (*(long *)(lVar6 + lVar14) == 0) goto LAB_01bec90c;
  FUN_0390262c(*(long *)(lVar6 + lVar14),*(undefined8 *)(lVar7 + uVar10 * 8 + 0x20),0);
  if ((*(long *)(in_stack_00000038 + 0x28) == 0) ||
     (lVar6 = *(long *)(*(long *)(in_stack_00000038 + 0x28) + 0x60), lVar6 == 0)) goto LAB_01bec90c;
  if (*(uint *)(lVar6 + 0x18) <= uVar8) goto c6__Equals;
  plVar3 = *(long **)(in_stack_00000020 + 0x30);
  if (plVar3 == (long *)0x0) goto LAB_01bec90c;
  (**(code **)(*plVar3 + 0x7e8))
            (plVar3,*(undefined8 *)(lVar6 + lVar14),uVar10 & 0xffffffff,
             *(undefined8 *)(*plVar3 + 0x7f0));
  lVar6 = *(long *)(in_stack_00000038 + 0x28);
  uVar10 = uVar10 + 1;
  lVar14 = lVar14 + 0x50;
  if (lVar6 == 0) goto LAB_01bec90c;
  goto LAB_01bec878;
}


