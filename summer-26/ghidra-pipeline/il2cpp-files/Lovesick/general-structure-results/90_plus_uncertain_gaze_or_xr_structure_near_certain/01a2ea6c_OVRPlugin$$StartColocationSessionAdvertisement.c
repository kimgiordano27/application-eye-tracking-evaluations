/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 01a2ea6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 125
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionAdvertisement
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  bool in_CY;
  bool bVar7;
  long lVar8;
  long in_x9;
  long in_x10;
  undefined8 uVar9;
  long in_x11;
  uint in_w12;
  uint in_w13;
  uint in_w14;
  undefined1 in_w15;
  long unaff_x19;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar21;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  ulong uStack00000000000000e4;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined4 uStack00000000000001a8;
  undefined4 uStack00000000000001ac;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 uStack00000000000001b8;
  ulong uVar20;
  
  *(undefined1 *)(in_x9 + 0x23) = in_w15;
  if ((((!in_CY || in_ZR) || (*(undefined1 *)(in_x10 + 0x23) = 0, in_w14 < 4)) ||
      (*(undefined4 *)(in_x11 + 0x2c) = 0, in_w12 < 5)) ||
     ((*(undefined1 *)(in_x9 + 0x24) = 1, in_w13 < 5 ||
      (*(undefined1 *)(in_x10 + 0x24) = 0, puVar6 = StringLiteral_6259,
      puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__,
      puVar4 = Method_Newtonsoft_Json_Linq_Extensions_Values<JToken,_JToken>__, in_w14 < 5))))
  goto LAB_01a2ef9c;
  *(undefined4 *)(in_x11 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  puVar3 = Method_System_Collections_Generic_List<DecalEntityManager_CombinedChunks>_Add__;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar10 = 0;
  lVar12 = 4;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(param_1 + 0x84) = uVar9;
  *(undefined8 *)(param_1 + 0x7c) = uVar17;
  *(undefined8 *)(param_1 + 0x74) = uVar16;
  do {
    lVar8 = *(long *)(unaff_x19 + 0x58);
    if (lVar8 == 0) goto LAB_01a2efa0;
    uVar13 = (int)lVar12 - 4;
    if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_01a2ef9c;
    lVar8 = *(long *)(lVar8 + lVar12 * 8);
    if (lVar8 == 0) goto LAB_01a2efa0;
    lVar11 = *(long *)(unaff_x19 + 0x70);
    uVar14 = FUN_0269f910(lVar8,0);
    if (lVar11 == 0) goto LAB_01a2efa0;
    if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_01a2ef9c;
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + lVar10;
    lVar10 = lVar10 + 0x10;
    *(undefined4 *)(lVar11 + 0x20) = uVar14;
    *(int *)(lVar11 + 0x24) = (int)param_3;
    *(int *)(lVar11 + 0x28) = (int)param_4;
    *(int *)(lVar11 + 0x2c) = (int)param_5;
  } while ((int)lVar12 != 0x1c);
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x68) + 0x38);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02666fdc(&stack0x000000b0,0);
    in_stack_000000d8 = uStack00000000000000b8;
    in_stack_000000d0 = in_stack_000000b0;
    uStack00000000000000e4 = uStack00000000000000c4;
    uStack00000000000000dc = uStack00000000000000bc;
    uStack00000000000000e0 = uStack00000000000000c0;
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) < 2) {
LAB_01a2ef9c:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      *(undefined8 *)(lVar12 + 0x50) = uStack00000000000000c4;
      *(ulong *)(lVar12 + 0x48) = CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
      *(ulong *)(lVar12 + 0x44) = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
      *(undefined8 *)(lVar12 + 0x3c) = in_stack_000000b0;
      lVar12 = *(long *)(unaff_x19 + 0x70);
      if (DAT_03774f00 == '\0') {
        thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                          );
        DAT_03774f00 = '\x01';
      }
      if (lVar12 == 0) goto LAB_01a2efa0;
      if (*(int *)(lVar12 + 0x18) == 0) goto LAB_01a2ef9c;
      uVar9 = **(undefined8 **)
                (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                + 0xb8);
      *(undefined8 *)(lVar12 + 0x28) =
           (*(undefined8 **)
             (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
             0xb8))[1];
      *(undefined8 *)(lVar12 + 0x20) = uVar9;
      if ((*(long *)(unaff_x19 + 0x60) != 0) && (lVar12 = *(long *)(unaff_x19 + 0x68), lVar12 != 0))
      {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x70);
        uVar14 = *(undefined4 *)(*(long *)(unaff_x19 + 0x60) + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01952b68(uVar9,uVar14,lVar12 + 0x38,0);
        lVar12 = *(long *)(unaff_x19 + 0x68);
        if (lVar12 != 0) {
          uVar9 = *(undefined8 *)(lVar12 + 0x38);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01a2a778(uVar9,lVar12 + 0x48,0);
          if (*(char *)(unaff_x19 + 0x50) == '\0') {
            lVar12 = *(long *)(unaff_x19 + 0x68);
            FUN_019aa6e4(&stack0x000000b0,*(undefined8 *)(unaff_x19 + 0x48),0,0);
            in_stack_000000d8 = uStack00000000000000b8;
            in_stack_000000d0 = in_stack_000000b0;
            uStack00000000000000e4 = uStack00000000000000c4;
            uStack00000000000000e0 = uStack00000000000000c0;
            if (lVar12 == 0) goto LAB_01a2efa0;
            *(undefined8 *)(lVar12 + 0x28) = uStack00000000000000c4;
            *(ulong *)(lVar12 + 0x20) = CONCAT44(uStack00000000000000c0,uStack00000000000000bc);
            *(ulong *)(lVar12 + 0x1c) = CONCAT44(uStack00000000000000bc,uStack00000000000000b8);
            *(undefined8 *)(lVar12 + 0x14) = in_stack_000000b0;
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01a2efa0;
            lVar12 = *(long *)(unaff_x19 + 0x68);
            uVar14 = FUN_026a125c(*(long *)(unaff_x19 + 0x48),0);
          }
          else {
            FUN_019aa6e4(&stack0x000000d0,*(undefined8 *)(unaff_x19 + 0x48),1,0);
            uStack00000000000001a8 = in_stack_000000d8;
            in_stack_000001a0 = in_stack_000000d0;
            _uStack00000000000001b4 = uStack00000000000000e4;
            uStack00000000000001ac = uStack00000000000000dc;
            uStack00000000000001b0 = uStack00000000000000e0;
            lVar12 = FUN_01a2e660();
            if (lVar12 == 0) goto LAB_01a2efa0;
            lVar10 = *(long *)puVar3;
            iVar2 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar10 = *(long *)puVar3;
            }
            uVar18 = uStack00000000000001b0;
            uVar14 = uStack00000000000001ac;
            puVar4 = Method_System_Linq_Enumerable_First<MemberInfo>__;
            bVar7 = iVar2 != 0;
            lVar12 = 0x138;
            if (bVar7) {
              lVar12 = 0x16c;
            }
            puVar1 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + lVar12);
            in_stack_00000168 = puVar1[1];
            in_stack_00000160 = *puVar1;
            in_stack_00000178 = puVar1[3];
            in_stack_00000170 = puVar1[2];
            in_stack_00000188 = puVar1[5];
            in_stack_00000180 = puVar1[4];
            in_stack_00000190 = *(undefined4 *)(puVar1 + 6);
            lVar12 = 0xd0;
            if (bVar7) {
              lVar12 = 0x104;
            }
            puVar1 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + lVar12);
            in_stack_00000128 = puVar1[1];
            in_stack_00000120 = *puVar1;
            in_stack_00000138 = puVar1[3];
            in_stack_00000130 = puVar1[2];
            in_stack_00000150 = *(undefined4 *)(puVar1 + 6);
            in_stack_00000148 = puVar1[5];
            in_stack_00000140 = puVar1[4];
            uVar15 = uStack00000000000001b8;
            uVar20 = _uStack00000000000001b4 & 0xffffffff;
            uVar19 = (undefined4)_uStack00000000000001b4;
            if (DAT_03775377 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03775377 = '\x01';
            }
            puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            lVar12 = *(long *)(*(long *)
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              + 0xb8);
            uStack00000000000000f4 = uVar18;
            uStack00000000000000f0 =
                 FUN_02699088(uVar14,uVar18,uVar20,uVar15,*(undefined4 *)(lVar12 + 0x48),
                              *(undefined4 *)(lVar12 + 0x4c),*(undefined4 *)(lVar12 + 0x50),0);
            in_stack_000000f8 = uVar19;
            uVar14 = uStack00000000000000f4;
            uVar18 = in_stack_000000f8;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
            uVar15 = uStack00000000000001b0;
            uVar19 = uStack00000000000001b8;
            uVar20 = _uStack00000000000001b4 & 0xffffffff;
            uVar21 = (undefined4)_uStack00000000000001b4;
            if (DAT_037750c4 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_037750c4 = '\x01';
            }
            lVar12 = *(long *)(*(long *)puVar5 + 0xb8);
            uStack00000000000000f0 =
                 FUN_02699088(uStack00000000000001ac,uVar15,uVar20,uVar19,
                              *(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c),
                              *(undefined4 *)(lVar12 + 0x20),0);
            in_stack_000000f8 = uVar21;
            uStack00000000000000f4 = uVar15;
            uVar15 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
            uStack00000000000001ac = FUN_02698e08(uVar9,0);
            uStack00000000000001b0 = uVar14;
            uStack00000000000001b8 = uVar15;
            uStack00000000000001b4 = uVar18;
            in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x30);
            uStack0000000000000114 = *(undefined8 *)(unaff_x20 + 0x44);
            uStack0000000000000108 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
            uStack000000000000010c = (undefined4)*(undefined8 *)(unaff_x20 + 0x3c);
            uStack0000000000000110 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
            if (*(long *)(unaff_x19 + 0x68) == 0) goto LAB_01a2efa0;
            FUN_019a7844(&stack0x00000100,&stack0x000001a0,*(long *)(unaff_x19 + 0x68) + 0x14,0);
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_01a2efa0;
            lVar12 = *(long *)(unaff_x19 + 0x68);
            uVar14 = FUN_0269fcf8(*(long *)(unaff_x19 + 0x48),0);
          }
          if (lVar12 != 0) {
            *(undefined4 *)(lVar12 + 0x70) = uVar14;
            if (*(long *)(unaff_x19 + 0x68) != 0) {
              *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x30) = 2;
              return;
            }
          }
        }
      }
    }
  }
LAB_01a2efa0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


