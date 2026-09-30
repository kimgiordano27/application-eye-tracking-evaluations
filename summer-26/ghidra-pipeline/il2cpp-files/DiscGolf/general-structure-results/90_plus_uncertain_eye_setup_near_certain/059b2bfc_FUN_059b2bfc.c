/*
FUNCTION_NAME: FUN_059b2bfc
ENTRY_POINT: 059b2bfc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x059b3eb4) */
/* WARNING: Removing unreachable block (ram,0x059b3ec0) */
/* WARNING: Removing unreachable block (ram,0x059b3d68) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_059b2bfc(uint *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  ushort uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 *puVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  long local_128;
  uint *puStack_120;
  uint **local_118;
  long local_110;
  uint *puStack_108;
  uint **local_100;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  long *local_80;
  uint *local_78;
  uint local_6c;
  uint *local_68;
  
                    /* try { // try from 059b2bfc to 05ab2c07 has its CatchHandler @ 059b2c98 */
                    /* try { // try from 059b2c08 to 05ab2c0f has its CatchHandler @ 059b2c94 */
                    /* try { // try from 059b2c10 to 05ab2c17 has its CatchHandler @ 059b2c90 */
                    /* try { // try from 059b2c18 to 05ab2c23 has its CatchHandler @ 059b2c8c */
                    /* try { // try from 059b2c24 to 05ab2c2f has its CatchHandler @ 059b2c88 */
  local_68 = param_1;
  if ((DAT_06dc14ad & 1) == 0) {
                    /* try { // try from 059b2c30 to 05ab2c33 has its CatchHandler @ 059b2cfc */
                    /* try { // try from 059b2c34 to 05ab2c37 has its CatchHandler @ 059b2c80 */
    FUN_02d965b8(PTR_DAT_06a01478);
                    /* try { // try from 059b2c38 to 05ab2c3b has its CatchHandler @ 059b2cfc */
                    /* try { // try from 059b2c3c to 05ab2c3f has its CatchHandler @ 059b2c7c */
                    /* try { // try from 059b2c40 to 05ab2c43 has its CatchHandler @ 059b2c78 */
    FUN_02d965b8(OVRPlugin_OVRP_1_45_0_TypeInfo);
                    /* try { // try from 059b2c44 to 05ab2c4b has its CatchHandler @ 059b2ccc */
                    /* try { // try from 059b2c4c to 05ab2c4f has its CatchHandler @ 059b2c74 */
    FUN_02d965b8(OVRPlugin_OVRP_1_46_0_TypeInfo);
                    /* try { // try from 059b2c50 to 05ab2c53 has its CatchHandler @ 059b2c70 */
                    /* try { // try from 059b2c54 to 05ab2c57 has its CatchHandler @ 059b2c68 */
                    /* try { // try from 059b2c58 to 05ab2d97 has its CatchHandler @ 059b215c */
    FUN_02d965b8(OVRPlugin_OVRP_1_47_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_48_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2c54 with catch @ 059b2c68 */
                    /* catch() { ... } // from try @ 059b28f8 with catch @ 059b2c6c */
                    /* catch() { ... } // from try @ 059b2c50 with catch @ 059b2c70 */
    FUN_02d965b8(OVRPlugin_OVRP_1_49_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2c4c with catch @ 059b2c74 */
                    /* catch() { ... } // from try @ 059b2c40 with catch @ 059b2c78 */
                    /* catch() { ... } // from try @ 059b2c3c with catch @ 059b2c7c */
    FUN_02d965b8(OVRPlugin_OVRP_1_3_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2c34 with catch @ 059b2c80 */
                    /* catch() { ... } // from try @ 059b2808 with catch @ 059b2c84 */
                    /* catch() { ... } // from try @ 059b2c24 with catch @ 059b2c88 */
    FUN_02d965b8(OVRPlugin_OVRP_1_50_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2c18 with catch @ 059b2c8c */
                    /* catch() { ... } // from try @ 059b2c10 with catch @ 059b2c90 */
                    /* catch() { ... } // from try @ 059b2c08 with catch @ 059b2c94 */
    FUN_02d965b8(PTR_DAT_06a0dba8);
                    /* catch() { ... } // from try @ 059b2bfc with catch @ 059b2c98 */
                    /* catch() { ... } // from try @ 059b2bf0 with catch @ 059b2c9c */
                    /* catch() { ... } // from try @ 059b2a14 with catch @ 059b2ca0 */
    FUN_02d965b8(System_Runtime_CompilerServices_DateTimeConstantAttribute_var);
                    /* catch() { ... } // from try @ 059b2a70 with catch @ 059b2ca4 */
                    /* catch() { ... } // from try @ 059b2a7c with catch @ 059b2ca8 */
                    /* catch() { ... } // from try @ 059b2be8 with catch @ 059b2cac */
    FUN_02d965b8(PTR_DAT_06a0d410);
                    /* catch() { ... } // from try @ 059b2be0 with catch @ 059b2cb0 */
                    /* catch() { ... } // from try @ 059b2bdc with catch @ 059b2cb4 */
                    /* catch() { ... } // from try @ 059b2a5c with catch @ 059b2cb8 */
    FUN_02d965b8(OVRPlugin_OVRP_1_51_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2bd8 with catch @ 059b2cbc */
                    /* catch() { ... } // from try @ 059b2a38 with catch @ 059b2cc0 */
                    /* catch() { ... } // from try @ 059b2924 with catch @ 059b2cc4 */
    FUN_02d965b8(OVRPlugin_OVRP_1_52_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2bd4 with catch @ 059b2cc8 */
                    /* catch() { ... } // from try @ 059b2c44 with catch @ 059b2ccc */
                    /* catch() { ... } // from try @ 059b26e4 with catch @ 059b2cd0 */
    FUN_02d965b8(OVRPlugin_OVRP_1_53_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2bd0 with catch @ 059b2cd4 */
                    /* catch() { ... } // from try @ 059b2bcc with catch @ 059b2cd8 */
                    /* catch() { ... } // from try @ 059b26d4 with catch @ 059b2cdc */
    FUN_02d965b8(OVRPlugin_OVRP_1_54_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2794 with catch @ 059b2ce0 */
                    /* catch() { ... } // from try @ 059b2834 with catch @ 059b2ce4 */
                    /* catch() { ... } // from try @ 059b25f8 with catch @ 059b2ce8 */
    FUN_02d965b8(OVRPlugin_OVRP_1_55_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2480 with catch @ 059b2cec */
                    /* catch() { ... } // from try @ 059b259c with catch @ 059b2cf0 */
                    /* catch() { ... } // from try @ 059b2bc8 with catch @ 059b2cf4 */
    FUN_02d965b8(OVRPlugin_OVRP_1_55_1_TypeInfo);
                    /* catch() { ... } // from try @ 059b2bc0 with catch @ 059b2cf8 */
                    /* catch() { ... } // from try @ 059b2c30 with catch @ 059b2cfc
                       catch() { ... } // from try @ 059b2c38 with catch @ 059b2cfc */
                    /* catch() { ... } // from try @ 059b24e8 with catch @ 059b2d00 */
    FUN_02d965b8(OVRPlugin_OVRP_1_56_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2bb4 with catch @ 059b2d04 */
                    /* catch() { ... } // from try @ 059b2bac with catch @ 059b2d08 */
                    /* catch() { ... } // from try @ 059b2518 with catch @ 059b2d0c */
    FUN_02d965b8(OVRPlugin_OVRP_1_57_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b24b0 with catch @ 059b2d10 */
                    /* catch() { ... } // from try @ 059b2704 with catch @ 059b2d14 */
                    /* catch() { ... } // from try @ 059b274c with catch @ 059b2d18 */
    FUN_02d965b8(OVRPlugin_OVRP_1_58_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b29c8 with catch @ 059b2d1c */
                    /* catch() { ... } // from try @ 059b2be4 with catch @ 059b2d20
                       catch() { ... } // from try @ 059b2bec with catch @ 059b2d20 */
                    /* catch() { ... } // from try @ 059b2698 with catch @ 059b2d24 */
    FUN_02d965b8(PTR_DAT_069fbff0);
                    /* catch() { ... } // from try @ 059b2560 with catch @ 059b2d28 */
                    /* catch() { ... } // from try @ 059b243c with catch @ 059b2d2c */
                    /* catch() { ... } // from try @ 059b2ba4 with catch @ 059b2d30 */
    FUN_02d965b8(PTR_DAT_06a18c18);
                    /* catch() { ... } // from try @ 059b2b9c with catch @ 059b2d34 */
                    /* catch() { ... } // from try @ 059b2bbc with catch @ 059b2d38
                       catch() { ... } // from try @ 059b2bc4 with catch @ 059b2d38 */
                    /* catch() { ... } // from try @ 059b2468 with catch @ 059b2d3c */
    FUN_02d965b8(PTR_DAT_06a18c20);
                    /* catch() { ... } // from try @ 059b2a94 with catch @ 059b2d40 */
                    /* catch() { ... } // from try @ 059b23cc with catch @ 059b2d44 */
                    /* catch() { ... } // from try @ 059b2368 with catch @ 059b2d48 */
    FUN_02d965b8(OVRPlugin_OVRP_1_122_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2ba0 with catch @ 059b2d4c
                       catch() { ... } // from try @ 059b2ba8 with catch @ 059b2d4c */
                    /* catch() { ... } // from try @ 059b2b94 with catch @ 059b2d50 */
                    /* catch() { ... } // from try @ 059b2b58 with catch @ 059b2d54 */
    FUN_02d965b8(PTR_DAT_069fbff8);
                    /* catch() { ... } // from try @ 059b2b44 with catch @ 059b2d58 */
                    /* catch() { ... } // from try @ 059b2b60 with catch @ 059b2d5c
                       catch() { ... } // from try @ 059b2b68 with catch @ 059b2d5c */
                    /* catch() { ... } // from try @ 059b2b5c with catch @ 059b2d60
                       catch() { ... } // from try @ 059b2b7c with catch @ 059b2d60 */
    FUN_02d965b8(OVRPlugin_OVRP_1_123_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2b48 with catch @ 059b2d64
                       catch() { ... } // from try @ 059b2b70 with catch @ 059b2d64 */
                    /* catch() { ... } // from try @ 059b2b64 with catch @ 059b2d68
                       catch() { ... } // from try @ 059b2b6c with catch @ 059b2d68
                       catch() { ... } // from try @ 059b2b88 with catch @ 059b2d68 */
                    /* catch() { ... } // from try @ 059b2630 with catch @ 059b2d6c */
    FUN_02d965b8(OVRPlugin_OVRP_1_124_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2b50 with catch @ 059b2d70 */
                    /* catch() { ... } // from try @ 059b2b40 with catch @ 059b2d74
                       catch() { ... } // from try @ 059b2b4c with catch @ 059b2d74 */
                    /* catch() { ... } // from try @ 059b2968 with catch @ 059b2d78 */
    FUN_02d965b8(PTR_DAT_06a0e690);
                    /* catch() { ... } // from try @ 059b287c with catch @ 059b2d7c */
    FUN_02d965b8(PTR_DAT_06a1e288);
    FUN_02d965b8(PTR_DAT_06a0e698);
                    /* try { // try from 059b2d98 to 05ab2d9b has its CatchHandler @ 059b2da4 */
    FUN_02d965b8(PTR_DAT_06a0de90);
                    /* catch() { ... } // from try @ 059b2d98 with catch @ 059b2da4 */
                    /* try { // try from 059b2da8 to 05ab2daf has its CatchHandler @ 059b2db8 */
    FUN_02d965b8(PTR_DAT_06a0de98);
                    /* try { // try from 059b2db0 to 05ab2dbb has its CatchHandler @ 059b215c */
    FUN_02d965b8(OVRPlugin_OVRP_1_59_0_TypeInfo);
                    /* catch() { ... } // from try @ 059b2da8 with catch @ 059b2db8 */
    FUN_02d965b8(OVRPlugin_OVRP_1_5_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_60_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_61_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fd8d8);
    FUN_02d965b8(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0db50);
    FUN_02d965b8(OVRPlugin_OVRP_1_68_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_118_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_70_0_TypeInfo);
    DAT_06dc14ad = 1;
  }
  plVar12 = (long *)OVRPlugin_OVRP_1_3_0_TypeInfo;
  puVar2 = PTR_DAT_069fb9c0;
  local_6c = *param_1;
  local_80 = (long *)0x0;
  local_78 = (uint *)0x0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  local_c0._0_8_ = 0;
  local_c0._8_8_ = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  plVar19 = *(long **)(param_1 + 8);
  local_d8 = 0;
  local_e0 = 0;
  if (local_6c < 4) {
LAB_059b3238:
    puStack_108 = &local_6c;
    local_100 = &local_68;
    local_110 = 0;
    if ((int)local_6c < 2) {
      if (local_6c == 0) {
        local_6c = 0xffffffff;
        local_a0 = *(undefined1 (*) [16])(local_68 + 0x1a);
        local_68[0x1a] = 0;
        local_68[0x1b] = 0;
        local_68[0x1c] = 0;
        local_68[0x1d] = 0;
        *local_68 = 0xffffffff;
        goto LAB_059b363c;
      }
      if (local_6c == 1) {
        local_6c = 0xffffffff;
        local_c0 = *(undefined1 (*) [16])(local_68 + 0x20);
        local_68[0x20] = 0;
        local_68[0x21] = 0;
        local_68[0x22] = 0;
        local_68[0x23] = 0;
        *local_68 = 0xffffffff;
        goto LAB_059b373c;
      }
LAB_059b32a0:
      if (*(long *)(local_68 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined8 *)(local_68 + 0x18) = *(undefined8 *)(*(long *)(local_68 + 0xc) + 0x38);
      LeanTween__value();
      if (*(long *)(local_68 + 0x18) != 0) {
        plVar12 = *(long **)(local_68 + 0xe);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
        if (*(long *)(local_68 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar20 = FUN_059b24d8();
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        puVar13 = (uint *)FUN_059b20a8();
        puVar6 = OVRPlugin_OVRP_1_122_0_TypeInfo;
        puVar5 = PTR_DAT_06a18c20;
        puVar4 = PTR_DAT_06a18c18;
        puVar3 = PTR_DAT_069fbff8;
        puVar2 = PTR_DAT_069fbff0;
        puStack_120 = &local_6c;
        local_118 = &local_78;
        local_128 = 0;
joined_r0x059b3310:
        local_78 = puVar13;
        if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar16 = *(long *)puVar13;
        lVar20 = *(long *)puVar3;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar20) {
              puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_059b338c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)FUN_02dd004c(puVar13,lVar20,0);
LAB_059b338c:
        uVar17 = (*(code *)*puVar15)(puVar13,puVar15[1]);
        puVar13 = local_78;
        plVar12 = (long *)OVRPlugin_OVRP_1_3_0_TypeInfo;
        if ((uVar17 & 1) != 0) {
          if (local_78 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar20 = *(long *)local_78;
          uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                puVar15 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_059b33f0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar15 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar6,0);
LAB_059b33f0:
          auVar23 = (*(code *)*puVar15)(puVar13,puVar15[1]);
          plVar12 = auVar23._8_8_;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar20 = *plVar12;
          uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                puVar15 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_059b3454;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar15 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)puVar4,0);
LAB_059b3454:
          plVar12 = (long *)(*(code *)*puVar15)(plVar12,puVar15[1]);
          do {
            local_80 = plVar12;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar16 = *plVar12;
            lVar20 = *(long *)puVar3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar20) {
                  puVar15 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_059b34c0;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(plVar12,lVar20,0);
LAB_059b34c0:
            uVar17 = (*(code *)*puVar15)(plVar12,puVar15[1]);
            plVar12 = local_80;
            if ((uVar17 & 1) == 0) goto LAB_059b3558;
            if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar20 = *local_80;
            uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar5) {
                  puVar15 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_059b3524;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar15 = (undefined8 *)FUN_02dd004c(local_80,*(long *)puVar5,0);
LAB_059b3524:
            uVar14 = (*(code *)*puVar15)(plVar12,puVar15[1]);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05ced510(lVar11,auVar23._0_8_,uVar14,0);
            plVar12 = local_80;
          } while( true );
        }
        if ((-1 < (int)*puStack_120) || (puVar13 = *local_118, puVar13 == (uint *)0x0))
        goto LAB_059b3d58;
        lVar11 = *(long *)puVar13;
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar17 == 0) goto LAB_059b3990;
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_059b3978;
      }
      if (*(long *)(local_68 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar17 = FUN_059b2744(*(undefined8 *)(*(long *)(local_68 + 0xc) + 0x18));
      if ((uVar17 & 1) != 0) {
        plVar9 = *(long **)(local_68 + 0xe);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        (**(code **)(*plVar9 + 0x228))(plVar9,0,*(undefined8 *)(*plVar9 + 0x230));
      }
LAB_059b3a10:
      plVar9 = *(long **)(local_68 + 0xe);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar11 = (**(code **)(*plVar9 + 0x318))(plVar9,*(undefined8 *)(*plVar9 + 800));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_d0 = FUN_0481d044(lVar11,0,*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
      uVar17 = FUN_04b88f80(local_d0,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
      if ((uVar17 & 1) == 0) {
        local_6c = 3;
        *local_68 = 3;
        *(undefined1 (*) [16])(local_68 + 0x24) = local_d0;
        LeanTween__value(local_68 + 0x24,0);
        puVar13 = local_68;
        if (*(int *)(*plVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c(*plVar12,extraout_x1_01,local_68);
        }
        FUN_031e7840(puVar13 + 2,local_d0,local_68,*(undefined8 *)OVRPlugin_OVRP_1_47_0_TypeInfo);
        goto LAB_059b3b40;
      }
    }
    else {
      if (local_6c != 3) {
        if (local_6c != 2) goto LAB_059b32a0;
        goto LAB_059b377c;
      }
      local_6c = 0xffffffff;
      local_d0 = *(undefined1 (*) [16])(local_68 + 0x24);
      local_68[0x24] = 0;
      local_68[0x25] = 0;
      local_68[0x26] = 0;
      local_68[0x27] = 0;
      *local_68 = 0xffffffff;
    }
    plVar9 = (long *)FUN_04b88fc8(local_d0,*(undefined8 *)OVRPlugin_OVRP_1_53_0_TypeInfo);
    if (plVar9 == (long *)0x0) {
      local_68[0x10] = 0;
      local_68[0x11] = 0;
    }
    else {
      lVar11 = *(long *)OVRPlugin_OVRP_1_58_0_TypeInfo;
      bVar1 = *(byte *)(lVar11 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
LAB_059b3ae0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar9);
      }
      *(long **)(local_68 + 0x10) = plVar9;
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) goto LAB_059b3ae0;
    }
    LeanTween__value(local_68 + 0x10,plVar9);
    puVar13 = local_68 + 0x18;
    puVar13[0] = 0;
    puVar13[1] = 0;
    LeanTween__value(puVar13,0);
    uVar22 = 0x23;
    goto LAB_059b3b6c;
  }
  if (local_6c != 4) {
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if ((char)plVar19[0x16] != '\0') {
      plVar12 = (long *)thunk_FUN_02da6564(plVar19,0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar14 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      thunk_FUN_02dfd288(PTR_DAT_069fe0d8);
      uVar21 = thunk_FUN_02dd3144();
      FUN_054f71d0(uVar21,uVar14,0);
      uVar14 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_71_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar21,uVar14);
    }
    uVar14 = *(undefined8 *)System_Runtime_CompilerServices_DateTimeConstantAttribute_var;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar9 = (long *)FUN_054f73b4(uVar14,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x758))
                               (plVar9,*(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo,0x2c,
                                *(undefined8 *)(*plVar9 + 0x760));
    puVar3 = PTR_DAT_06a0d410;
    local_110 = *(long *)(local_68 + 10);
    uVar14 = thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_06a0d410,&local_110);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860(uVar14,uVar14);
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x390));
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06a0dba8 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06a0dba8))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar9);
      }
    }
    plVar10 = (long *)FUN_054f73b4(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x758))
                                (plVar10,*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo,0x2c,
                                 *(undefined8 *)(*plVar10 + 0x760));
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar9 = (long *)(**(code **)(*plVar10 + 0x388))
                               (plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x390));
    if (plVar9 != (long *)0x0) {
      if (*plVar9 != *(long *)PTR_DAT_06a0db50) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar9);
      }
      uVar14 = *(undefined8 *)OVRPlugin_OVRP_1_67_0_TypeInfo;
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar10 = (long *)FUN_054f73b4(uVar14,0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x758))
                                  (plVar10,*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo,0x2c,
                                   *(undefined8 *)(*plVar10 + 0x760));
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar9 = (long *)(**(code **)(*plVar10 + 0x388))
                                 (plVar10,plVar9,*(undefined8 *)(*plVar10 + 0x390));
      if (*(int *)(*(long *)PTR_DAT_069fd8d8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(puVar2 + 0x68) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar9);
      }
      plVar9 = (long *)thunk_FUN_02dd328c(plVar9);
      uVar14 = FUN_054ff5e0((double)*plVar9,0);
      local_110 = 0;
      puStack_108 = (uint *)0x0;
      FUN_043372c0(&local_110,uVar14,*(undefined8 *)PTR_DAT_06a1e288);
      plVar19[0x15] = (long)puStack_108;
      plVar19[0x14] = local_110;
    }
    thunk_FUN_02da4860();
    *(undefined1 *)((long)plVar19 + 0x91) = 1;
    uVar14 = (**(code **)(*plVar19 + 0x1f8))
                       (plVar19,*(undefined8 *)(local_68 + 0xc),*(undefined8 *)(*plVar19 + 0x200));
    *(undefined8 *)(local_68 + 0xe) = uVar14;
    LeanTween__value();
    puVar13 = local_68 + 0x10;
    puVar13[0] = 0;
    puVar13[1] = 0;
    LeanTween__value(puVar13,0);
    puVar13 = local_68;
    puVar2 = OVRPlugin_OVRP_1_118_0_TypeInfo;
    if (3 < local_6c) {
      lVar11 = *(long *)OVRPlugin_OVRP_1_118_0_TypeInfo;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar11 = *(long *)puVar2;
      }
      puVar7 = local_68;
      puVar15 = *(undefined8 **)(lVar11 + 0xb8);
      lVar20 = puVar15[3];
      if (lVar20 == 0) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar15 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar14 = *puVar15;
        lVar20 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a01478);
        FUN_04be213c(lVar20,uVar14,*(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo,0);
        plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        *plVar9 = lVar20;
        LeanTween__value(plVar9,lVar20);
      }
      uVar14 = *(undefined8 *)(local_68 + 0xe);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0554ae68(&local_128,puVar13 + 10,lVar20,uVar14,0);
      puStack_108 = puStack_120;
      local_110 = local_128;
      local_100 = local_118;
      *(uint **)(puVar7 + 0x14) = puStack_120;
      *(long *)(puVar7 + 0x12) = local_128;
      *(uint ***)(puVar7 + 0x16) = local_118;
      LeanTween__value(puVar7 + 0x12,0);
    }
    goto LAB_059b3238;
  }
  local_d8 = *(undefined8 *)(param_1 + 0x28);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_6c = 0xffffffff;
  *param_1 = 0xffffffff;
  local_c0 = ZEXT816(0);
  local_d0 = ZEXT816(0);
  local_a0 = ZEXT816(0);
  local_b0 = ZEXT816(0);
  local_90 = ZEXT816(0);
  goto LAB_059b3c44;
LAB_059b3558:
  puVar13 = local_78;
  if (((int)local_6c < 0) && (local_80 != (long *)0x0)) {
    lVar20 = *local_80;
    uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar15 = (undefined8 *)(lVar20 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_059b35c0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)FUN_02dd004c(local_80,*(long *)puVar2,0);
LAB_059b35c0:
    (*(code *)*puVar15)(plVar12,puVar15[1]);
    puVar13 = local_78;
  }
  goto joined_r0x059b3310;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_059b3978:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar15 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_059b3d4c;
    }
  }
LAB_059b3990:
  puVar15 = (undefined8 *)FUN_02dd004c(puVar13,*(long *)PTR_DAT_069fbff0,0);
LAB_059b3d4c:
  (*(code *)*puVar15)(puVar13,puVar15[1]);
LAB_059b3d58:
  if (local_128 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if (*(long *)(local_68 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar11 = FUN_059b1d4c();
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar8 = FUN_059b44f8();
  if ((uVar8 < 0x100) || ((uVar8 & 0xff) == 0)) {
    if (*(long *)(local_68 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = FUN_059b24d8();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_90 = FUN_059b4660();
    if ((local_90._0_8_ & 0xff) != 0) {
      plVar9 = *(long **)(local_68 + 0xe);
      uVar14 = FUN_04330580(local_90,*(undefined8 *)PTR_DAT_06a0de98);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar14,uVar14);
      }
      (**(code **)(*plVar9 + 0x228))(plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x230));
      goto LAB_059b369c;
    }
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (plVar19[6] == 0) {
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar14 = thunk_FUN_02dd3144();
      uVar21 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_72_0_TypeInfo);
      FUN_054e8008(uVar14,uVar21,0);
      uVar21 = thunk_FUN_02dfd288(OVRPlugin_OVRP_1_71_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar14,uVar21);
    }
    if (*(long *)(local_68 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = FUN_059b4788();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_a0 = FUN_0555c350(lVar11,0,0);
    uVar17 = FUN_05410178(local_a0,0);
    if ((uVar17 & 1) != 0) {
LAB_059b363c:
      FUN_05410190(local_a0,0);
      if (*(long *)(local_68 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar9 = *(long **)(local_68 + 0xe);
      lVar11 = FUN_059b24d8();
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_b0 = FUN_059b4660();
      uVar14 = FUN_04330580(local_b0,*(undefined8 *)PTR_DAT_06a0de98);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar14,uVar14);
      }
      (**(code **)(*plVar9 + 0x228))(plVar9,uVar14,*(undefined8 *)(*plVar9 + 0x230));
      goto LAB_059b369c;
    }
    local_6c = 0;
    *local_68 = 0;
    *(undefined1 (*) [16])(local_68 + 0x1a) = local_a0;
    LeanTween__value(local_68 + 0x1a,0);
    puVar13 = local_68;
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c(*plVar12,extraout_x1_03,local_68);
    }
    FUN_032003e0(puVar13 + 2,local_a0,local_68,*(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
  }
  else {
    if (*(long *)(local_68 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_05c17684(*(long *)(local_68 + 0xe),1,0);
LAB_059b369c:
    lVar11 = *(long *)(local_68 + 0xe);
    uVar21 = *(undefined8 *)(local_68 + 0x18);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_03b78e40(uVar14,uVar21,*(undefined8 *)OVRPlugin_OVRP_1_57_0_TypeInfo,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined8 *)(lVar11 + 0x188) = uVar14;
    LeanTween__value(lVar11 + 0x188,uVar14);
    plVar9 = *(long **)(local_68 + 0xe);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = (**(code **)(*plVar9 + 0x308))(plVar9,*(undefined8 *)(*plVar9 + 0x310));
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_c0 = FUN_0481d044(lVar11,0,*(undefined8 *)OVRPlugin_OVRP_1_65_0_TypeInfo);
    uVar17 = FUN_04b88f80(local_c0,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
    if ((uVar17 & 1) != 0) {
LAB_059b373c:
      uVar14 = FUN_04b88fc8(local_c0,*(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
      *(undefined8 *)(local_68 + 0x1e) = uVar14;
      LeanTween__value();
      puStack_120 = &local_6c;
      local_128 = 0;
      local_118 = &local_68;
      if (local_6c == 2) {
LAB_059b377c:
        local_118 = &local_68;
        puStack_120 = &local_6c;
        local_128 = 0;
        local_6c = 0xffffffff;
        local_a0 = *(undefined1 (*) [16])(local_68 + 0x1a);
        local_68[0x1a] = 0;
        local_68[0x1b] = 0;
        local_68[0x1c] = 0;
        local_68[0x1d] = 0;
        *local_68 = 0xffffffff;
LAB_059b3798:
        FUN_05410190(local_a0,0);
        uVar22 = 0x20;
      }
      else {
        if (*(long *)(local_68 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = *(long *)(*(long *)(local_68 + 0xc) + 0x38);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar11 = FUN_059b6b30(lVar11,*(undefined8 *)(local_68 + 0x1e),0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        auVar23 = FUN_0555c350(lVar11,0,0);
        local_a0 = auVar23;
        uVar17 = FUN_05410178(local_a0,0);
        if ((uVar17 & 1) != 0) goto LAB_059b3798;
        local_6c = 2;
        *local_68 = 2;
        *(undefined1 (*) [16])(local_68 + 0x1a) = local_a0;
        LeanTween__value(local_68 + 0x1a,0);
        puVar13 = local_68;
        if (*(int *)(*plVar12 + 0xe4) == 0) {
          thunk_FUN_02df485c(*plVar12,extraout_x1,local_68);
        }
        FUN_032003e0(puVar13 + 2,local_a0,local_68,*(undefined8 *)OVRPlugin_OVRP_1_46_0_TypeInfo);
        uVar22 = 0x1c;
      }
      if (((int)local_6c < 0) && (plVar9 = *(long **)(*local_118 + 0x1e), plVar9 != (long *)0x0)) {
        lVar11 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_069fbff0) {
              puVar15 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_059b39e4;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_059b39e4:
        (*(code *)*puVar15)(plVar9,puVar15[1]);
      }
      if ((uVar22 | 0x20) == 0x20) {
        puVar13 = local_68 + 0x1e;
        puVar13[0] = 0;
        puVar13[1] = 0;
        LeanTween__value(puVar13,0);
        goto LAB_059b3a10;
      }
      goto LAB_059b3b6c;
    }
    local_6c = 1;
    *local_68 = 1;
    *(undefined1 (*) [16])(local_68 + 0x20) = local_c0;
    LeanTween__value(local_68 + 0x20,0);
    puVar13 = local_68;
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c(*plVar12,extraout_x1_00,local_68);
    }
    FUN_031e7840(puVar13 + 2,local_c0,local_68,*(undefined8 *)OVRPlugin_OVRP_1_45_0_TypeInfo);
  }
LAB_059b3b40:
  uVar22 = 0x1c;
LAB_059b3b6c:
  if ((int)*puStack_108 < 0) {
    FUN_0554d088(*local_100 + 0x12,0);
  }
  puVar13 = local_68;
  if (local_110 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((uVar22 != 0x23) && (uVar22 != 0)) {
    return;
  }
  local_68[0x14] = 0;
  local_68[0x15] = 0;
  local_68[0x16] = 0;
  local_68[0x17] = 0;
  local_68[0x12] = 0;
  local_68[0x13] = 0;
  if (*(int *)(*(long *)PTR_DAT_06a0d410 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar17 = FUN_0554ab48(puVar13 + 10,0);
  if ((uVar17 & 1) == 0) {
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar14 = FUN_059b21e0(uVar17,*(undefined8 *)(local_68 + 0x10),*(undefined8 *)(local_68 + 0xc),
                          *(undefined8 *)(local_68 + 10));
    goto LAB_059b3c70;
  }
  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
  FUN_047e8068(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_61_0_TypeInfo);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_047e83a0(lVar11,*(undefined8 *)OVRPlugin_OVRP_1_60_0_TypeInfo);
  if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  local_d8 = FUN_0481d028(*(long *)(lVar11 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_66_0_TypeInfo);
  uVar17 = FUN_047e6248(&local_d8,*(undefined8 *)OVRPlugin_OVRP_1_5_0_TypeInfo);
  if ((uVar17 & 1) == 0) {
    local_6c = 4;
    *local_68 = 4;
    *(undefined8 *)(local_68 + 0x28) = local_d8;
    LeanTween__value(local_68 + 0x28,0);
    puVar13 = local_68;
    if (*(int *)(*plVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c(*plVar12,extraout_x1_02,local_68);
    }
    FUN_031f3ca8(puVar13 + 2,&local_d8,local_68,*(undefined8 *)OVRPlugin_OVRP_1_48_0_TypeInfo);
    return;
  }
LAB_059b3c44:
  uVar14 = FUN_047e6288(&local_d8,*(undefined8 *)OVRPlugin_OVRP_1_59_0_TypeInfo);
LAB_059b3c70:
  puVar2 = OVRPlugin_OVRP_1_49_0_TypeInfo;
  *local_68 = 0xfffffffe;
  puVar13 = local_68 + 0xe;
  puVar13[0] = 0;
  puVar13[1] = 0;
  LeanTween__value(puVar13,0);
  puVar13 = local_68 + 0x10;
  puVar13[0] = 0;
  puVar13[1] = 0;
  LeanTween__value(puVar13,0);
  puVar13 = local_68;
  if (*(int *)(*plVar12 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(puVar13 + 2,uVar14,*(undefined8 *)puVar2);
  return;
}


