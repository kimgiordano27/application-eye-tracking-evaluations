/*
FUNCTION_NAME: Unity.VisualScripting.Member$$Invoke
ENTRY_POINT: 05bd87ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_VisualScripting_Member__Invoke(long param_1,undefined8 param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 uVar21;
  uint unaff_w21;
  uint uVar22;
  long unaff_x22;
  undefined8 uVar23;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined8 in_d5;
  float fVar28;
  float in_s6;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_s13;
  float fVar35;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  int iStack0000000000000064;
  float fStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  float fStack0000000000000088;
  undefined4 uStack000000000000008c;
  float in_stack_00000090;
  undefined8 in_stack_000000a0;
  float in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  undefined8 in_stack_000000c0;
  int in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  long in_stack_000000f8;
  undefined8 in_stack_00000100;
  uint uStack0000000000000108;
  uint uStack000000000000010c;
  int iStack0000000000000110;
  float fStack0000000000000114;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  undefined8 in_stack_00000130;
  uint in_stack_00000148;
  long in_stack_00000150;
  uint in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  float in_stack_00000170;
  long *in_stack_00000178;
  int *in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  float in_stack_00001270;
  undefined4 in_stack_00001274;
  
code_r0x05bd87ec:
  uVar22 = unaff_w21;
  if (param_1 == 0) goto LAB_05bda144;
  if (*(uint *)(param_1 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
  param_1 = param_1 + unaff_x25 * unaff_x22;
  *(ulong *)(param_1 + 0x120) =
       CONCAT44((float)((ulong)param_2 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20),
                (float)param_2 + (float)*(undefined8 *)(param_1 + 0x120));
  *(float *)(param_1 + 0x128) = param_3 + *(float *)(param_1 + 0x128);
  if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 == 0)) goto LAB_05bda144;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
  lVar14 = lVar14 + unaff_x25 * unaff_x22;
  fVar24 = (float)in_d5;
  *(float *)(lVar14 + 300) = in_s6 + *(float *)(lVar14 + 300);
  *(ulong *)(lVar14 + 0x130) =
       CONCAT44((float)((ulong)in_d5 >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar14 + 0x130) >> 0x20),
                fVar24 + (float)*(undefined8 *)(lVar14 + 0x130));
  lVar14 = *unaff_x27;
  if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x38), lVar15 == 0)) goto LAB_05bda144;
  uVar9 = *(uint *)(lVar15 + 0x18);
  if (uVar9 <= unaff_w24) goto LAB_05bda2b0;
  lVar20 = lVar15 + unaff_x25 * unaff_x22;
  *(float *)(lVar20 + 0x148) = fVar24 + *(float *)(lVar20 + 0x148);
  *(ulong *)(lVar20 + 0x138) =
       CONCAT44(in_s6 + (float)((ulong)*(undefined8 *)(lVar20 + 0x138) >> 0x20),
                in_s6 + (float)*(undefined8 *)(lVar20 + 0x138));
  *(ulong *)(lVar20 + 0x140) =
       CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x140) >> 0x20),
                fVar24 + (float)*(undefined8 *)(lVar20 + 0x140));
  if (uVar22 == unaff_w20) {
    uVar9 = *in_stack_00000180 - 1;
    if (unaff_w24 == uVar9) goto LAB_05bd8970;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x50);
    if (lVar14 == 0) goto LAB_05bda144;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_05bda2b0;
    lVar20 = (long)(int)unaff_w20;
    lVar17 = lVar14 + lVar20 * unaff_x26;
    fVar25 = fVar24 + *(float *)(lVar17 + 0x58);
    *(ulong *)(lVar17 + 0x50) =
         CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar17 + 0x50) >> 0x20),
                  fVar24 + (float)*(undefined8 *)(lVar17 + 0x50));
    *(float *)(lVar17 + 0x58) = fVar25;
    *(float *)(lVar17 + 0x5c) = in_s6 + *(float *)(lVar17 + 0x5c);
    if (uVar9 <= *(uint *)(lVar17 + 0x38)) goto LAB_05bda2b0;
    uVar27 = *(undefined4 *)(lVar15 + (int)*(uint *)(lVar17 + 0x38) * unaff_x22 + 0x114);
    lVar14 = lVar14 + lVar20 * unaff_x26;
    *(float *)(lVar14 + 0x74) = fVar25;
    *(undefined4 *)(lVar14 + 0x70) = uVar27;
    lVar14 = *unaff_x27;
    if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x50), lVar15 == 0)) goto LAB_05bda144;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w20) goto LAB_05bda2b0;
    lVar14 = *(long *)(lVar14 + 0x38);
    if (lVar14 == 0) goto LAB_05bda144;
    uVar9 = *(uint *)(lVar15 + lVar20 * unaff_x26 + 0x44);
    if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bda2b0;
    lVar15 = lVar15 + lVar20 * unaff_x26;
    *(undefined4 *)(lVar15 + 0x78) = *(undefined4 *)(lVar14 + (int)uVar9 * unaff_x22 + 0x120);
    *(undefined4 *)(lVar15 + 0x7c) = *(undefined4 *)(lVar15 + 0x50);
    uVar9 = *in_stack_00000180 - 1;
LAB_05bd8970:
    if (unaff_w24 == uVar9) {
      lVar14 = *unaff_x27;
      if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x50), lVar15 == 0)) goto LAB_05bda144;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_05bda2b0;
      lVar20 = lVar15 + in_stack_00000150 * unaff_x26;
      fVar25 = fVar24 + *(float *)(lVar20 + 0x58);
      *(ulong *)(lVar20 + 0x50) =
           CONCAT44(fVar24 + (float)((ulong)*(undefined8 *)(lVar20 + 0x50) >> 0x20),
                    fVar24 + (float)*(undefined8 *)(lVar20 + 0x50));
      *(float *)(lVar20 + 0x58) = fVar25;
      *(float *)(lVar20 + 0x5c) = in_s6 + *(float *)(lVar20 + 0x5c);
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_05bda144;
      if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar20 + 0x38)) goto LAB_05bda2b0;
      uVar27 = *(undefined4 *)(lVar14 + (int)*(uint *)(lVar20 + 0x38) * unaff_x22 + 0x114);
      lVar15 = lVar15 + in_stack_00000150 * unaff_x26;
      *(float *)(lVar15 + 0x74) = fVar25;
      *(undefined4 *)(lVar15 + 0x70) = uVar27;
      lVar14 = *unaff_x27;
      if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x50), lVar15 == 0)) goto LAB_05bda144;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_05bda2b0;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_05bda144;
      uVar9 = *(uint *)(lVar15 + in_stack_00000150 * unaff_x26 + 0x44);
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bda2b0;
      lVar15 = lVar15 + in_stack_00000150 * unaff_x26;
      *(undefined4 *)(lVar15 + 0x78) = *(undefined4 *)(lVar14 + (int)uVar9 * unaff_x22 + 0x120);
      *(undefined4 *)(lVar15 + 0x7c) = *(undefined4 *)(lVar15 + 0x50);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar11 = FUN_04f83944(in_stack_00000170,0);
  if (((((uVar11 & 1) == 0) && (1 < (int)in_stack_00000170 - 0x2010U)) &&
      (in_stack_00000170 != 2.42425e-43)) && (in_stack_00000170 != 6.30584e-44)) {
    if ((uStack000000000000010c & 1) == 0) {
      if (unaff_w23 == 1) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar9 = FUN_04f83894(in_stack_00000170,0);
        if (((in_stack_00000170 == 1.14949e-41) || (((uStack0000000000000118 | uVar9 ^ 1) & 1) != 0)
            ) || (*in_stack_00000180 == 1)) goto LAB_05bd8df4;
      }
      uStack000000000000010c = 0;
    }
    else {
      if (((unaff_w23 != 1) && ((int)unaff_w24 < (int)(*(uint *)(unaff_x29 + 0x18) - 1))) &&
         (((int)unaff_w24 < *in_stack_00000180 &&
          ((in_stack_00000170 == 1.15145e-41 || (in_stack_00000170 == 5.46506e-44)))))) {
        if (*(uint *)(unaff_x29 + 0x18) <= unaff_w23 - 2) goto LAB_05bda2b0;
        uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x430);
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_04f83944(uVar4,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(unaff_x29 + 0x18) <= unaff_w23) goto LAB_05bda2b0;
          uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x140);
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_04f83944(uVar4,0);
          unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if ((uVar11 & 1) != 0) goto LAB_05bd8b90;
        }
      }
LAB_05bd8df4:
      if (unaff_w24 == *in_stack_00000180 - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_04f83944(in_stack_00000170,0);
        iVar10 = iStack0000000000000110;
        if ((uVar11 & 1) == 0) goto LAB_05bd8e34;
      }
      else {
LAB_05bd8e34:
        iVar10 = unaff_w23 - 2;
      }
      lVar14 = *unaff_x27;
      if (lVar14 == 0) goto LAB_05bda144;
      lVar15 = *(long *)(lVar14 + 0x40);
      if (lVar15 == 0) goto LAB_05bda144;
      uVar9 = *(uint *)(lVar14 + 0x24);
      iVar8 = *(int *)(lVar15 + 0x18);
      if (iVar8 < (int)(uVar9 + 1)) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03562f88((long *)(lVar14 + 0x40),iVar8 + 1,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__);
        lVar14 = *unaff_x27;
        if (lVar14 == 0) goto LAB_05bda144;
      }
      unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar14 = *(long *)(lVar14 + 0x40);
      if (lVar14 == 0) goto LAB_05bda144;
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bda2b0;
      lVar14 = lVar14 + (long)(int)uVar9 * 0x18;
      *(long **)(lVar14 + 0x20) = unaff_x19;
      *(uint *)(lVar14 + 0x28) = in_stack_00000148;
      *(int *)(lVar14 + 0x2c) = iVar10;
      *(uint *)(lVar14 + 0x30) = (iVar10 - in_stack_00000148) + 1;
      thunk_FUN_02dd37b4();
      lVar14 = unaff_x19[0x74];
      if (lVar14 == 0) goto LAB_05bda144;
      lVar15 = *(long *)(lVar14 + 0x50);
      unaff_x22 = 0x178;
      *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
      if (lVar15 == 0) goto LAB_05bda144;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_05bda2b0;
      lVar15 = lVar15 + in_stack_00000150 * unaff_x26;
      uStack000000000000010c = 0;
      in_stack_000000c8 = in_stack_000000c8 + 1;
      *(int *)(lVar15 + 0x34) = *(int *)(lVar15 + 0x34) + 1;
      unaff_w23 = in_stack_00000158;
    }
  }
  else {
    if ((uStack000000000000010c & 1) == 0) {
      in_stack_00000148 = unaff_w24;
    }
    if (unaff_w24 == *in_stack_00000180 - 1U) {
      lVar14 = *unaff_x27;
      if (lVar14 == 0) goto LAB_05bda144;
      lVar15 = *(long *)(lVar14 + 0x40);
      if (lVar15 == 0) goto LAB_05bda144;
      uVar9 = *(uint *)(lVar14 + 0x24);
      iVar10 = *(int *)(lVar15 + 0x18);
      if (iVar10 < (int)(uVar9 + 1)) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03562f88((long *)(lVar14 + 0x40),iVar10 + 1,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__);
        lVar14 = *unaff_x27;
        if (lVar14 == 0) goto LAB_05bda144;
      }
      unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar14 = *(long *)(lVar14 + 0x40);
      if (lVar14 == 0) goto LAB_05bda144;
      unaff_x22 = 0x178;
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05bda2b0;
      lVar14 = lVar14 + (long)(int)uVar9 * 0x18;
      *(long **)(lVar14 + 0x20) = unaff_x19;
      *(uint *)(lVar14 + 0x28) = in_stack_00000148;
      *(uint *)(lVar14 + 0x2c) = unaff_w24;
      *(uint *)(lVar14 + 0x30) = unaff_w23 - in_stack_00000148;
      thunk_FUN_02dd37b4();
      lVar14 = unaff_x19[0x74];
      if (lVar14 == 0) goto LAB_05bda144;
      lVar15 = *(long *)(lVar14 + 0x50);
      *(int *)(lVar14 + 0x24) = *(int *)(lVar14 + 0x24) + 1;
      if (lVar15 == 0) goto LAB_05bda144;
      if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_05bda2b0;
      lVar15 = lVar15 + in_stack_00000150 * unaff_x26;
      in_stack_000000c8 = in_stack_000000c8 + 1;
      *(int *)(lVar15 + 0x34) = *(int *)(lVar15 + 0x34) + 1;
    }
LAB_05bd8b90:
    uStack000000000000010c = 1;
  }
  lVar14 = *unaff_x27;
  if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x38), lVar15 == 0)) goto LAB_05bda144;
  if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
  uVar18 = (uint)in_stack_000000d8;
  uVar9 = (uint)in_stack_00000168;
  if ((*(byte *)(lVar15 + unaff_x25 * unaff_x22 + 0x18c) >> 2 & 1) == 0) {
    in_stack_00000158 = unaff_w23;
    if ((uStack0000000000000108 & 1) == 0) {
      uStack0000000000000108 = 0;
    }
    else {
      if (*(uint *)(lVar15 + 0x18) <= unaff_w23 - 2) goto LAB_05bda2b0;
LAB_05bd8bdc:
      lVar20 = *unaff_x19;
      uVar27 = *(undefined4 *)(lVar15 + in_stack_00000160 + -0x334);
      uVar29 = *(undefined4 *)(lVar15 + in_stack_00000160 + -0x2f8);
LAB_05bd90bc:
      (**(code **)(lVar20 + 0x908))
                (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,uVar27,
                 fStack00000000000000f4,0,fStack0000000000000074,uVar29);
LAB_05bd90fc:
      lVar14 = *unaff_x28;
LAB_05bd9100:
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar14 = *unaff_x28;
      }
      uStack0000000000000108 = 0;
      fStack0000000000000114 = 0.0;
      fStack00000000000000f4 = *(float *)(*(long *)(lVar14 + 0xb8) + 0x1730);
      fStack00000000000000f0 = 0.0;
    }
  }
  else {
    lVar20 = lVar15 + unaff_x25 * unaff_x22;
    iVar10 = *(int *)(lVar20 + 0x60);
    *(undefined4 *)(lVar20 + 0x168) = in_stack_00001274;
    if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)uVar22)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar10 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (in_stack_00000170 != 1.14949e-41 && (uStack0000000000000118 & 1) == 0) {
      fVar24 = *(float *)(lVar15 + unaff_x25 * unaff_x22 + 0x15c);
      if (fStack0000000000000114 <= fVar24) {
        fStack0000000000000114 = fVar24;
      }
      if (fStack00000000000000f0 <= ABS(unaff_s13)) {
        fStack00000000000000f0 = ABS(unaff_s13);
      }
      if (iVar10 != iStack0000000000000064) {
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar14 = *unaff_x27;
          if (lVar14 == 0) goto LAB_05bda144;
          lVar15 = *(long *)(*unaff_x28 + 0xb8);
        }
        else {
          lVar15 = *(long *)(*unaff_x28 + 0xb8);
        }
        fStack00000000000000f4 = *(float *)(lVar15 + 0x1730);
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_05bda144;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
      if (unaff_x19[0x1f] == 0) goto LAB_05bda144;
      fVar25 = *(float *)(lVar14 + unaff_x25 * unaff_x22 + 0x144);
      fVar24 = (float)FUN_06114688(unaff_x19[0x1f] + 0x28,0);
      fVar25 = fVar25 + fStack0000000000000114 * fVar24;
      iStack0000000000000064 = iVar10;
      if (fVar25 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar25;
      }
    }
    unaff_x26 = 0x60;
    if ((uStack0000000000000108 & 1) == 0) {
      if ((((in_stack_00000170 == 1.82169e-44) || (((uint)in_stack_00000170 & 0xfffe) == 10)) ||
          ((int)uVar9 < (int)unaff_w24)) || (!bVar1)) {
LAB_05bd9014:
        uStack0000000000000108 = 0;
        goto LAB_05bd912c;
      }
      if (unaff_w24 == uVar9) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_04f8481c(in_stack_00000170,0);
        if ((uVar11 & 1) != 0) goto LAB_05bd9014;
      }
      if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 == 0))
      goto LAB_05bda144;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
      lVar14 = lVar14 + unaff_x25 * unaff_x22;
      fStack0000000000000074 = *(float *)(lVar14 + 0x15c);
      uStack0000000000000070 = *(undefined4 *)(lVar14 + 0x114);
      in_stack_00000078 = *(undefined4 *)(lVar14 + 0x164);
      fVar24 = fStack0000000000000074;
      if (fStack0000000000000114 != 0.0) {
        fVar24 = fStack0000000000000114;
      }
      uStack000000000000006c = 0;
      fVar25 = unaff_s13;
      if (fStack0000000000000114 != 0.0) {
        fVar25 = fStack00000000000000f0;
      }
      fStack0000000000000068 = fStack00000000000000f4;
      fStack00000000000000f0 = fVar25;
      fStack0000000000000114 = fVar24;
    }
    if (*in_stack_00000180 == 1) {
      if ((*unaff_x27 != 0) && (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 != 0)) {
        if (unaff_w24 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + unaff_x25 * unaff_x22;
          lVar20 = *unaff_x19;
          uVar27 = *(undefined4 *)(lVar14 + 0x120);
          uVar29 = *(undefined4 *)(lVar14 + 0x15c);
          goto LAB_05bd90bc;
        }
        goto LAB_05bda2b0;
      }
      goto LAB_05bda144;
    }
    if ((unaff_w24 == uVar18) || ((int)uVar9 <= (int)unaff_w24)) {
      if ((*unaff_x27 != 0) && (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 != 0)) {
        lVar15 = unaff_x25;
        uVar19 = unaff_w24;
        if (in_stack_00000170 == 1.14949e-41 || (uStack0000000000000118 & 1) != 0) {
          lVar15 = in_stack_00000168;
          uVar19 = uVar9;
        }
        if (uVar19 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + lVar15 * unaff_x22;
          (**(code **)(*unaff_x19 + 0x908))
                    (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                     *(undefined4 *)(lVar14 + 0x120),fStack00000000000000f4,0,fStack0000000000000074
                     ,*(undefined4 *)(lVar14 + 0x15c));
          lVar14 = *unaff_x28;
          goto LAB_05bd9100;
        }
        goto LAB_05bda2b0;
      }
      goto LAB_05bda144;
    }
    if (!bVar1) {
      if ((*unaff_x27 != 0) && (lVar15 = *(long *)(*unaff_x27 + 0x38), lVar15 != 0)) {
        if (in_stack_00000158 - 2 < *(uint *)(lVar15 + 0x18)) goto LAB_05bd8bdc;
        goto LAB_05bda2b0;
      }
      goto LAB_05bda144;
    }
    if ((int)unaff_w24 < *in_stack_00000180 + -1) {
      if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 == 0))
      goto LAB_05bda144;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
      uVar11 = FUN_05bf4b74(in_stack_00000078,*(undefined4 *)(lVar14 + in_stack_00000160),0);
      unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      if ((uVar11 & 1) == 0) {
        if ((*unaff_x27 != 0) && (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 != 0)) {
          if (unaff_w24 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + unaff_x25 * unaff_x22;
            (**(code **)(*unaff_x19 + 0x908))
                      (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                       *(undefined4 *)(lVar14 + 0x120),fStack00000000000000f4,0,
                       fStack0000000000000074,*(undefined4 *)(lVar14 + 0x15c));
            unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
            goto LAB_05bd90fc;
          }
          goto LAB_05bda2b0;
        }
        goto LAB_05bda144;
      }
    }
    uStack0000000000000108 = 1;
  }
LAB_05bd912c:
  if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 == 0)) goto LAB_05bda144;
  if (*(uint *)(lVar14 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
  if (in_stack_000000f8 == 0) goto LAB_05bda144;
  uVar19 = *(uint *)(lVar14 + unaff_x25 * unaff_x22 + 0x18c);
  fVar24 = (float)FUN_06114698(in_stack_000000f8 + 0x28,0);
  if ((uVar19 >> 6 & 1) == 0) {
    if ((uStack000000000000011c & 1) != 0) {
      if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 == 0))
      goto LAB_05bda144;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000158 - 2) goto LAB_05bda2b0;
      uVar27 = *(undefined4 *)(lVar14 + in_stack_00000160 + -0x334);
      fVar25 = *(float *)(lVar14 + in_stack_00000160 + -0x310);
      pcVar16 = *(code **)(*unaff_x19 + 0x908);
LAB_05bd96d8:
      (*pcVar16)(uStack000000000000008c,fStack0000000000000088,in_stack_00000080._4_4_,uVar27,
                 in_stack_00000090 * fVar24 + fVar25,0,in_stack_00000090,in_stack_00000090);
    }
LAB_05bd970c:
    uStack000000000000011c = 0;
  }
  else {
    lVar14 = *unaff_x27;
    if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x38), lVar15 == 0)) goto LAB_05bda144;
    if (*(uint *)(lVar15 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
    *(undefined4 *)(lVar15 + unaff_x25 * unaff_x22 + 0x170) = in_stack_00001274;
    if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)uVar22)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar15 + unaff_x25 * unaff_x22 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((in_stack_00000170 == 1.82169e-44) || (((uint)in_stack_00000170 & 0xfffe) == 10)) ||
        ((int)uVar9 < (int)unaff_w24)) || ((uStack000000000000011c & 1) != 0 || !bVar1)) {
LAB_05bd927c:
      if ((uStack000000000000011c & 1) == 0) goto LAB_05bd970c;
    }
    else {
      if (unaff_w24 == uVar9) {
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_04f8481c(in_stack_00000170,0);
        if ((uVar11 & 1) != 0) goto LAB_05bd927c;
        lVar14 = *unaff_x27;
        if (lVar14 == 0) goto LAB_05bda144;
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (lVar14 == 0) goto LAB_05bda144;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
      lVar14 = lVar14 + unaff_x25 * unaff_x22;
      in_stack_00000090 = *(float *)(lVar14 + 0x15c);
      uStack000000000000008c = *(undefined4 *)(lVar14 + 0x114);
      fStack000000000000005c = *(float *)(lVar14 + 0x58);
      fStack0000000000000058 = *(float *)(lVar14 + 0x144);
      fStack0000000000000088 = fVar24 * in_stack_00000090 + fStack0000000000000058;
      in_stack_00000080._4_4_ = 0;
    }
    iVar10 = *in_stack_00000180;
    if (iVar10 == 1) {
LAB_05bd93b4:
      if ((*unaff_x27 != 0) && (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 != 0)) {
        if (unaff_w24 < *(uint *)(lVar14 + 0x18)) {
          lVar14 = lVar14 + unaff_x25 * unaff_x22;
          lVar15 = *unaff_x19;
          uVar27 = *(undefined4 *)(lVar14 + 0x120);
          fVar25 = *(float *)(lVar14 + 0x144);
LAB_05bd93e0:
          pcVar16 = *(code **)(lVar15 + 0x908);
          goto LAB_05bd96d8;
        }
        goto LAB_05bda2b0;
      }
      goto LAB_05bda144;
    }
    if (unaff_w24 == uVar18) {
      if ((*unaff_x27 != 0) && (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 != 0)) {
        uVar19 = *(uint *)(lVar14 + 0x18);
        if (in_stack_00000170 == 1.14949e-41 || (uStack0000000000000118 & 1) != 0) {
          if (uVar19 <= uVar9) goto LAB_05bda2b0;
        }
        else {
LAB_05bd96ac:
          in_stack_00000168 = unaff_x25;
          if (uVar19 <= unaff_w24) goto LAB_05bda2b0;
        }
LAB_05bd96b4:
        lVar14 = lVar14 + in_stack_00000168 * unaff_x22;
        fVar25 = *(float *)(lVar14 + 0x144);
        uVar27 = *(undefined4 *)(lVar14 + 0x120);
        pcVar16 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_05bd96d8;
      }
      goto LAB_05bda144;
    }
    if ((int)unaff_w24 < iVar10) {
      lVar14 = *unaff_x27;
      if ((lVar14 != 0) && (lVar15 = *(long *)(lVar14 + 0x38), lVar15 != 0)) {
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
        if (*(float *)(lVar15 + in_stack_00000160 + -0x10c) == fStack000000000000005c) {
          fVar25 = *(float *)(lVar15 + in_stack_00000160 + -0x20);
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_get_Item__
                      + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_05bf5098((float)in_stack_00000130 + fVar25,fStack0000000000000058,0);
          if ((uVar11 & 1) != 0) {
            iVar10 = *in_stack_00000180;
            goto LAB_05bd94b4;
          }
          lVar14 = *unaff_x27;
          if (lVar14 == 0) goto LAB_05bda144;
        }
        lVar14 = *(long *)(lVar14 + 0x38);
        if (lVar14 != 0) {
          uVar19 = *(uint *)(lVar14 + 0x18);
          if ((int)unaff_w24 <= (int)uVar9) goto LAB_05bd96ac;
          if (uVar9 < uVar19) goto LAB_05bd96b4;
          goto LAB_05bda2b0;
        }
      }
      goto LAB_05bda144;
    }
LAB_05bd94b4:
    if ((int)unaff_w24 < iVar10) {
      iVar10 = FUN_0606f30c(in_stack_000000f8,0);
      if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
      lVar14 = *(long *)(unaff_x29 + in_stack_00000160 + -0x124);
      if (lVar14 == 0) goto LAB_05bda144;
      iVar8 = FUN_0606f30c(lVar14,0);
      unaff_x27 = in_stack_00000178;
      if (iVar10 != iVar8) goto LAB_05bd93b4;
    }
    if (!bVar1) {
      if ((*unaff_x27 != 0) && (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 != 0)) {
        if (in_stack_00000158 - 2 < *(uint *)(lVar14 + 0x18)) {
          lVar15 = *unaff_x19;
          uVar27 = *(undefined4 *)(lVar14 + in_stack_00000160 + -0x334);
          fVar25 = *(float *)(lVar14 + in_stack_00000160 + -0x310);
          goto LAB_05bd93e0;
        }
        goto LAB_05bda2b0;
      }
      goto LAB_05bda144;
    }
    uStack000000000000011c = 1;
  }
  if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 == 0)) goto LAB_05bda144;
  uVar19 = (uint)*(undefined8 *)(lVar14 + 0x18);
  if (uVar19 <= unaff_w24) goto LAB_05bda2b0;
  if ((*(byte *)(lVar14 + unaff_x25 * unaff_x22 + 0x18d) >> 1 & 1) == 0) {
    if ((in_stack_00000100._4_4_ & 1) != 0) {
LAB_05bd9a90:
      (**(code **)(*unaff_x19 + 0x918))
                (in_stack_000000c0._4_4_,in_stack_000000d0._4_4_,uStack00000000000000b0,
                 fStack00000000000000b4,in_stack_000000b8,uStack00000000000000b0);
    }
LAB_05bd9ac4:
    in_stack_00000100._4_4_ = 0;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)unaff_w24) || ((int)unaff_x19[0x6d] < (int)uVar22)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar14 + unaff_x25 * unaff_x22 + 0x60) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((in_stack_00000100._4_4_ & 1) == 0) {
      if ((((in_stack_00000170 != 1.82169e-44) && (((uint)in_stack_00000170 & 0xfffe) != 10)) &&
          ((int)unaff_w24 <= (int)uVar9)) && (bVar1)) {
        if (unaff_w24 == uVar9) {
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_04f8481c(in_stack_00000170,0);
          if ((uVar11 & 1) != 0) goto LAB_05bd9ac4;
        }
        lVar15 = *unaff_x28;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar15 = *unaff_x28;
        }
        if ((*unaff_x27 != 0) && (lVar14 = *(long *)(*unaff_x27 + 0x38), lVar14 != 0)) {
          uVar19 = (uint)*(undefined8 *)(lVar14 + 0x18);
          if (unaff_w24 < uVar19) {
            lVar15 = *(long *)(lVar15 + 0xb8);
            lVar20 = lVar14 + unaff_x25 * unaff_x22;
            in_stack_00001268 = *(undefined8 *)(lVar20 + 0x180);
            in_stack_00001260 = *(undefined8 *)(lVar20 + 0x178);
            in_stack_00000170 = *(float *)(lVar15 + 0x1720);
            in_stack_00001270 = *(float *)(lVar20 + 0x188);
            fStack00000000000000b4 = *(float *)(lVar15 + 0x1728);
            in_stack_000000d0._4_4_ = *(float *)(lVar15 + 0x1724);
            in_stack_000000b8 = *(float *)(lVar15 + 0x172c);
            uStack00000000000000b0 = 0;
            goto LAB_05bd9854;
          }
          goto LAB_05bda2b0;
        }
        goto LAB_05bda144;
      }
      in_stack_00000100._4_4_ = 0;
    }
    else {
      in_stack_00000170 = in_stack_000000c0._4_4_;
LAB_05bd9854:
      if (uVar19 <= unaff_w24) goto LAB_05bda2b0;
      lVar14 = lVar14 + unaff_x25 * unaff_x22;
      fVar30 = *(float *)(lVar14 + 0x120);
      fVar25 = *(float *)(lVar14 + 0x13c);
      fVar33 = *(float *)(lVar14 + 0x180);
      fVar34 = *(float *)(lVar14 + 0x188);
      uVar23 = *(undefined8 *)(lVar14 + 0x178);
      fVar35 = *(float *)(lVar14 + 0x184);
      uVar21 = *(undefined8 *)(lVar14 + 0x180);
      fVar32 = *(float *)(lVar14 + 0x114);
      fVar24 = *(float *)(lVar14 + 0x138);
      fVar28 = *(float *)(lVar14 + 0x140);
      fVar31 = *(float *)(lVar14 + 0x148);
      in_stack_00000188 = uVar23;
      fStack0000000000000190 = fVar33;
      fStack0000000000000194 = fVar35;
      in_stack_00000198 = fVar34;
      in_stack_000001a0 = in_stack_00001260;
      in_stack_000001a8 = in_stack_00001268;
      in_stack_000001b0 = in_stack_00001270;
      uVar11 = FUN_05bf61dc(&stack0x000001a0,&stack0x00000188,0);
      lVar14 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
      ;
      if ((uVar11 & 1) == 0) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar14);
        }
        bVar7 = (uStack0000000000000118 & 1) == 0;
        if (bVar7) {
          fVar25 = fVar30;
        }
        fVar25 = fVar25 + (float)in_stack_00001268;
        if (bVar7) {
          fVar24 = fVar32;
        }
        fVar24 = fVar24 - (float)((ulong)in_stack_00001260 >> 0x20);
        in_stack_000000c0._4_4_ = in_stack_00000170;
        if (fVar24 <= in_stack_00000170) {
          in_stack_000000c0._4_4_ = fVar24;
        }
        if (fStack00000000000000b4 <= fVar25) {
          fStack00000000000000b4 = fVar25;
        }
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                    + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (fVar31 - in_stack_00001270 <= in_stack_000000d0._4_4_) {
          in_stack_000000d0._4_4_ = fVar31 - in_stack_00001270;
        }
        fVar28 = fVar28 + (float)((ulong)in_stack_00001268 >> 0x20);
        if (in_stack_000000b8 <= fVar28) {
          in_stack_000000b8 = fVar28;
        }
      }
      else {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar14);
        }
        if ((uStack0000000000000118 & 1) == 0) {
          fVar24 = fVar32;
        }
        in_stack_000000c0._4_4_ =
             (fVar24 + (fStack00000000000000b4 - (float)in_stack_00001268)) * 0.5;
        if (fVar31 <= in_stack_000000d0._4_4_) {
          in_stack_000000d0._4_4_ = fVar31;
        }
        if (in_stack_000000b8 <= fVar28) {
          in_stack_000000b8 = fVar28;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (in_stack_00000170,in_stack_000000d0._4_4_,uStack00000000000000b0,
                   in_stack_000000c0._4_4_,in_stack_000000b8,uStack00000000000000b0);
        if ((*(int *)(*(long *)
                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                     + 0xe4) == 0) &&
           (thunk_FUN_02dbd7b4(),
           *(int *)(*(long *)
                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                   + 0xe4) == 0)) {
          thunk_FUN_02dbd7b4();
        }
        in_stack_000000d0._4_4_ = fVar31 - fVar34;
        if ((uStack0000000000000118 & 1) == 0) {
          fVar25 = fVar30;
        }
        fStack00000000000000b4 = fVar25 + fVar33;
        uStack00000000000000b0 = 0;
        in_stack_000000b8 = fVar28 + fVar35;
        in_stack_00001260 = uVar23;
        in_stack_00001268 = uVar21;
        in_stack_00001270 = fVar34;
      }
      unaff_x22 = 0x178;
      if ((((*in_stack_00000180 == 1) || (unaff_w24 == uVar18)) || ((int)uVar9 <= (int)unaff_w24))
         || (!bVar1)) goto LAB_05bd9a90;
      in_stack_00000100._4_4_ = 1;
    }
  }
  puVar6 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__;
  iVar10 = *in_stack_00000180;
  iStack0000000000000110 = iStack0000000000000110 + 1;
  in_stack_00000160 = in_stack_00000160 + 0x178;
  unaff_w23 = in_stack_00000158 + 1;
  if (iVar10 <= (int)in_stack_00000158) {
    lVar14 = *unaff_x27;
    if (lVar14 == 0) goto LAB_05bda144;
    lVar15 = *(long *)(lVar14 + 0x60);
    if (lVar15 == 0) goto LAB_05bda144;
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05bda2b0;
    *(undefined4 *)(lVar15 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) =
         in_stack_00001274;
    *(int *)(lVar14 + 0x18) = iVar10;
    lVar15 = unaff_x19[0xd7];
    *(uint *)(lVar14 + 0x2c) = uVar22 + 1;
    if (iVar10 < 1 || in_stack_000000c8 == 0) {
      in_stack_000000c8 = 1;
    }
    *(int *)(lVar14 + 0x1c) = (int)lVar15;
    *(int *)(lVar14 + 0x24) = in_stack_000000c8;
    *(int *)(lVar14 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
    if (((int)unaff_x19[0x6a] != 0xff) ||
       (uVar11 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar11 & 1) == 0)) goto LAB_05bd7728;
    lVar14 = unaff_x19[0xde];
    if (lVar14 != 0) {
      (**(code **)(lVar14 + 0x18))
                (*(undefined8 *)(lVar14 + 0x40),*unaff_x27,*(undefined8 *)(lVar14 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x354) != 0) {
      if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x60), lVar14 == 0))
      goto LAB_05bda144;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_05bda2b0;
      FUN_05c3fd34(lVar14 + 0x20,1,0);
    }
    if (unaff_x19[0x7b] != 0) {
      FUN_06042ef4(unaff_x19[0x7b],0);
      if ((unaff_x19[0x74] != 0) && (lVar14 = *(long *)(unaff_x19[0x74] + 0x60), lVar14 != 0)) {
        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_05bda2b0;
        if (unaff_x19[0x7b] != 0) {
          FUN_06040930(unaff_x19[0x7b],*(undefined8 *)(lVar14 + 0x30),0);
          if ((unaff_x19[0x74] != 0) && (lVar14 = *(long *)(unaff_x19[0x74] + 0x60), lVar14 != 0)) {
            if (*(int *)(lVar14 + 0x18) == 0) goto LAB_05bda2b0;
            if (unaff_x19[0x7b] != 0) {
              FUN_06041994(unaff_x19[0x7b],0,*(undefined8 *)(lVar14 + 0x48),0);
              if ((unaff_x19[0x74] != 0) &&
                 (lVar14 = *(long *)(unaff_x19[0x74] + 0x60), lVar14 != 0)) {
                if (*(int *)(lVar14 + 0x18) == 0) goto LAB_05bda2b0;
                if (unaff_x19[0x7b] != 0) {
                  FUN_06040b94(unaff_x19[0x7b],*(undefined8 *)(lVar14 + 0x50),0);
                  if ((unaff_x19[0x74] != 0) &&
                     (lVar14 = *(long *)(unaff_x19[0x74] + 0x60), lVar14 != 0)) {
                    if (*(int *)(lVar14 + 0x18) == 0) goto LAB_05bda2b0;
                    if (unaff_x19[0x7b] != 0) {
                      FUN_06040ca8(unaff_x19[0x7b],*(undefined8 *)(lVar14 + 0x58),0);
                      if (unaff_x19[0x7b] != 0) {
                        FUN_06042d74(unaff_x19[0x7b],0);
                        lVar14 = *unaff_x27;
                        if (lVar14 != 0) {
                          lVar20 = 0;
                          lVar15 = 0;
                          goto LAB_05bd9ec8;
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
    goto LAB_05bda144;
  }
  if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
  unaff_x25 = (long)(int)in_stack_00000158;
  lVar14 = unaff_x29 + unaff_x25 * unaff_x22;
  in_stack_000000f8 = *(long *)(lVar14 + 0x40);
  uVar3 = *(ushort *)(lVar14 + 0x24);
  in_stack_00000170 = (float)(uint)uVar3;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uStack0000000000000118 = FUN_04f80ed4(uVar3,0);
  if (*(uint *)(unaff_x29 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
  if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x50), lVar14 == 0)) goto LAB_05bda144;
  unaff_w21 = *(uint *)(unaff_x29 + unaff_x25 * unaff_x22 + 0x5c);
  if (*(uint *)(lVar14 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
  in_stack_00000150 = (long)(int)unaff_w21;
  lVar14 = lVar14 + in_stack_00000150 * unaff_x26;
  in_stack_000000d8 = (long)(int)*(uint *)(lVar14 + 0x40);
  uVar9 = *(uint *)(lVar14 + 0x6c);
  iVar2 = *(int *)(lVar14 + 0x20);
  iVar10 = *(int *)(lVar14 + 0x28);
  iVar8 = *(int *)(lVar14 + 0x2c);
  iVar5 = *(int *)(lVar14 + 0x44);
  in_stack_00000168 = (long)iVar5;
  fVar25 = *(float *)(lVar14 + 0x50);
  fVar28 = *(float *)(lVar14 + 0x58);
  fVar32 = *(float *)(lVar14 + 0x5c);
  fVar33 = *(float *)(lVar14 + 0x60);
  fVar34 = *(float *)(lVar14 + 100);
  fVar31 = *(float *)(lVar14 + 0x70);
  fVar35 = *(float *)(lVar14 + 0x74);
  fVar24 = *(float *)(lVar14 + 0x78);
  fVar30 = *(float *)(lVar14 + 0x7c);
  if ((int)uVar9 < 9) {
    switch(uVar9) {
    case 1:
      if ((char)unaff_x19[0x1e] == '\0') {
        in_stack_000000e8._4_4_ = fVar34 + 0.0;
      }
      else {
        in_stack_000000e8._4_4_ = 0.0 - fVar32;
      }
      break;
    case 2:
      in_stack_000000e8._4_4_ = (fVar34 + fVar33 * 0.5) - fVar32 * 0.5;
      break;
    case 3:
      goto switchD_05bd7eb4_caseD_3;
    case 4:
      in_stack_000000e8._4_4_ = (fVar33 + fVar34) - fVar32;
      if ((char)unaff_x19[0x1e] != '\0') {
        in_stack_000000e8._4_4_ = fVar33 + fVar34;
      }
      break;
    default:
      if ((((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.1614e-41)) &&
          (in_stack_00000170 != 1.14949e-41)) &&
         (((in_stack_00000170 != 2.42425e-43 && (in_stack_00000170 != 1.4013e-44)) &&
          (((int)in_stack_00000158 <= iVar5 && (uVar9 == 8)))))) goto LAB_05bd7f50;
      goto switchD_05bd7eb4_caseD_3;
    }
    in_stack_000000e0 = 0;
  }
  else if (uVar9 == 0x10) {
    if ((int)in_stack_00000158 <= iVar5) {
      if ((uint)in_stack_00000170 < 0xad) {
        if ((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.4013e-44))
        goto LAB_05bd7f50;
      }
      else if ((in_stack_00000170 != 2.42425e-43) &&
              ((in_stack_00000170 != 1.14949e-41 && (in_stack_00000170 != 1.1614e-41)))) {
LAB_05bd7f50:
        if (*(uint *)(lVar14 + 0x40) < *(uint *)(unaff_x29 + 0x18)) {
          uVar4 = *(undefined2 *)(unaff_x29 + in_stack_000000d8 * 0x178 + 0x24);
          if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar11 = FUN_04f84410(uVar4,0);
          unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
          if ((uVar11 & 1) == 0) {
            bVar1 = (int)unaff_w21 < (int)unaff_x19[0x97];
          }
          else {
            bVar1 = false;
          }
          if ((fVar33 < fVar32) || (bVar1 || uVar9 >> 4 != 0)) {
            if ((unaff_w23 == 1) ||
               ((unaff_w21 != uVar22 || (in_stack_00000158 == *(uint *)((long)unaff_x19 + 0x35c)))))
            {
              in_stack_000000e8._4_4_ = fVar34;
              if ((char)unaff_x19[0x1e] != '\0') {
                in_stack_000000e8._4_4_ = fVar33 + fVar34;
              }
              if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              in_stack_00000050._4_4_ = FUN_04f8481c(in_stack_00000170,0);
              in_stack_000000e0 = 0;
            }
            else {
              cVar13 = (char)unaff_x19[0x1e];
              iVar8 = (iVar8 - iVar2) - (in_stack_00000050._4_4_ & 1);
              fVar34 = -fVar32;
              if (cVar13 != '\0') {
                fVar34 = fVar32;
              }
              if (iVar8 < 1) {
                fVar32 = 1.0;
                iVar8 = 1;
              }
              else {
                fVar32 = *(float *)((long)unaff_x19 + 0x30c);
              }
              fVar26 = (float)((ulong)in_stack_000000e0 >> 0x20);
              if (in_stack_00000170 == 1.26117e-44) {
LAB_05bd9c58:
                fVar32 = ((fVar33 + fVar34) * (1.0 - fVar32)) / (float)iVar8;
                if (cVar13 == '\0') {
                  in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar32;
                  in_stack_000000e0 = CONCAT44(fVar26 + 0.0,(float)in_stack_000000e0 + 0.0);
                }
                else {
                  in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar32;
                }
              }
              else {
                if (in_stack_00000170 != 2.24208e-43) {
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar11 = FUN_04f8481c(in_stack_00000170,0);
                  cVar13 = (char)unaff_x19[0x1e];
                  if ((uVar11 & 1) != 0) goto LAB_05bd9c58;
                }
                fVar32 = ((fVar33 + fVar34) * fVar32) /
                         (float)(int)((iVar2 - (~in_stack_00000050._4_4_ & 1)) + iVar10);
                if (cVar13 == '\0') {
                  in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar32;
                  in_stack_000000e0 = CONCAT44(fVar26 + 0.0,(float)in_stack_000000e0 + 0.0);
                }
                else {
                  in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar32;
                }
              }
            }
          }
          else {
            in_stack_000000e8._4_4_ = fVar34;
            if ((char)unaff_x19[0x1e] != '\0') {
              in_stack_000000e8._4_4_ = fVar33 + fVar34;
            }
            in_stack_000000e0 = 0;
          }
          goto switchD_05bd7eb4_caseD_3;
        }
        goto LAB_05bda2b0;
      }
    }
  }
  else if (uVar9 == 0x20) {
    in_stack_000000e8._4_4_ = (fVar34 + fVar33 * 0.5) - (fVar31 + fVar24) * 0.5;
    in_stack_000000e0 = 0;
  }
switchD_05bd7eb4_caseD_3:
  unaff_x22 = 0x178;
  uVar9 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
  if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
  lVar14 = unaff_x29 + unaff_x25 * 0x178;
  in_s6 = in_stack_000000a8 + in_stack_000000e8._4_4_;
  fVar32 = (float)in_stack_000000a0 + (float)in_stack_000000e0;
  param_3 = (float)((ulong)in_stack_000000a0 >> 0x20) + (float)((ulong)in_stack_000000e0 >> 0x20);
  in_d5 = CONCAT44(param_3,fVar32);
  if (*(char *)(lVar14 + 400) == '\0') goto LAB_05bd8760;
  iVar10 = *(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x20);
  if (iVar10 != 0) goto LAB_05bd8578;
  fVar33 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)unaff_w21,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x344)) {
  case 0:
    lVar15 = unaff_x29 + unaff_x25 * 0x178;
    *(undefined4 *)(lVar15 + 0x84) = 0;
    *(undefined4 *)(lVar15 + 0xac) = 0;
    *(undefined4 *)(lVar15 + 0xd4) = 0x3f800000;
    fVar33 = 1.0;
    break;
  case 1:
    fVar30 = *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0x68);
    if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
      lVar15 = unaff_x29 + unaff_x25 * 0x178;
      fVar24 = (in_stack_000000e8._4_4_ + fVar30) - *(float *)(unaff_x19 + 0x9e);
      fVar30 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
      goto LAB_05bd8168;
    }
    lVar15 = unaff_x29 + unaff_x25 * 0x178;
    fVar24 = fVar24 - fVar31;
    *(float *)(lVar15 + 0x84) = fVar33 + (fVar30 - fVar31) / fVar24;
    *(float *)(lVar15 + 0xac) = fVar33 + (*(float *)(lVar15 + 0x90) - fVar31) / fVar24;
    *(float *)(lVar15 + 0xd4) = fVar33 + (*(float *)(lVar15 + 0xb8) - fVar31) / fVar24;
    fVar33 = fVar33 + (*(float *)(lVar15 + 0xe0) - fVar31) / fVar24;
    break;
  case 2:
    lVar15 = unaff_x29 + unaff_x25 * 0x178;
    fVar30 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
    fVar24 = (in_stack_000000e8._4_4_ + *(float *)(lVar15 + 0x68)) - *(float *)(unaff_x19 + 0x9e);
LAB_05bd8168:
    *(float *)(lVar15 + 0x84) = fVar33 + fVar24 / fVar30;
    *(float *)(lVar15 + 0xac) =
         fVar33 + ((in_stack_000000e8._4_4_ + *(float *)(lVar15 + 0x90)) -
                  *(float *)(unaff_x19 + 0x9e)) /
                  (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    *(float *)(lVar15 + 0xd4) =
         fVar33 + ((in_stack_000000e8._4_4_ + *(float *)(lVar15 + 0xb8)) -
                  *(float *)(unaff_x19 + 0x9e)) /
                  (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    fVar33 = fVar33 + ((in_stack_000000e8._4_4_ + *(float *)(lVar15 + 0xe0)) -
                      *(float *)(unaff_x19 + 0x9e)) /
                      (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    break;
  case 3:
    switch((int)unaff_x19[0x69]) {
    case 0:
      lVar15 = unaff_x29 + unaff_x25 * 0x178;
      *(undefined4 *)(lVar15 + 0x88) = 0;
      *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar15 + 0xd8) = 0;
      *(undefined4 *)(lVar15 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar15 = unaff_x29 + unaff_x25 * 0x178;
      fVar30 = fVar30 - fVar35;
      fVar24 = fVar33 + (*(float *)(lVar15 + 0x6c) - fVar35) / fVar30;
      fVar30 = fVar33 + (*(float *)(lVar15 + 0x94) - fVar35) / fVar30;
      *(float *)(lVar15 + 0x88) = fVar24;
      *(float *)(lVar15 + 0xb0) = fVar30;
      *(float *)(lVar15 + 0xd8) = fVar24;
      *(float *)(lVar15 + 0x100) = fVar30;
      break;
    case 2:
      lVar15 = unaff_x29 + unaff_x25 * 0x178;
      fVar24 = fVar33 + (*(float *)(lVar15 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                        (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar15 + 0x88) = fVar24;
      fVar30 = *(float *)((long)unaff_x19 + 0x4f4);
      fVar31 = *(float *)((long)unaff_x19 + 0x4fc);
      *(float *)(lVar15 + 0xd8) = fVar24;
      fVar24 = fVar33 + (*(float *)(lVar15 + 0x94) - fVar30) / (fVar31 - fVar30);
      *(float *)(lVar15 + 0xb0) = fVar24;
      *(float *)(lVar15 + 0x100) = fVar24;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_06021dcc(*(undefined8 *)
                    Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__,0);
      uVar9 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
    }
    if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
    lVar15 = unaff_x29 + unaff_x25 * 0x178;
    fVar24 = *(float *)(lVar15 + 0x158);
    fVar30 = (1.0 - (*(float *)(lVar15 + 0x88) + *(float *)(lVar15 + 0xb0)) * fVar24) * 0.5;
    fVar31 = fVar33 + *(float *)(lVar15 + 0x88) * fVar24 + fVar30;
    fVar33 = fVar33 + fVar30 + *(float *)(lVar15 + 0xb0) * fVar24;
    *(float *)(lVar15 + 0x84) = fVar31;
    *(float *)(lVar15 + 0xac) = fVar31;
    *(float *)(lVar15 + 0xd4) = fVar33;
    break;
  default:
    goto switchD_05bd80d4_default;
  }
  *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0xfc) = fVar33;
switchD_05bd80d4_default:
  switch((int)unaff_x19[0x69]) {
  case 0:
    if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
    lVar15 = unaff_x29 + unaff_x25 * 0x178;
    *(undefined4 *)(lVar15 + 0x88) = 0;
    *(undefined4 *)(lVar15 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar15 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar15 + 0x100) = 0;
    break;
  case 1:
    if (in_stack_00000158 < uVar9) {
      lVar15 = unaff_x29 + unaff_x25 * 0x178;
      fVar25 = fVar25 - fVar28;
      fVar24 = (*(float *)(lVar15 + 0x6c) - fVar28) / fVar25;
      fVar25 = (*(float *)(lVar15 + 0x94) - fVar28) / fVar25;
      *(float *)(lVar15 + 0x88) = fVar24;
      goto LAB_05bd84c0;
    }
    goto LAB_05bda2b0;
  case 2:
    if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
    lVar15 = unaff_x29 + unaff_x25 * 0x178;
    fVar24 = (*(float *)(lVar15 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
             (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
    *(float *)(lVar15 + 0x88) = fVar24;
    fVar25 = (*(float *)(lVar15 + 0x94) - *(float *)((long)unaff_x19 + 0x4f4)) /
             (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_05bd84c0:
    *(float *)(lVar15 + 0xb0) = fVar25;
    *(float *)(lVar15 + 0xd8) = fVar25;
    *(float *)(lVar15 + 0x100) = fVar24;
    break;
  case 3:
    if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
    lVar15 = unaff_x29 + unaff_x25 * 0x178;
    fVar30 = *(float *)(lVar15 + 0x158);
    fVar25 = (1.0 - (*(float *)(lVar15 + 0x84) + *(float *)(lVar15 + 0xd4)) / fVar30) * 0.5;
    fVar24 = *(float *)(lVar15 + 0x84) / fVar30 + fVar25;
    fVar25 = fVar25 + *(float *)(lVar15 + 0xd4) / fVar30;
    *(float *)(lVar15 + 0x88) = fVar24;
    *(float *)(lVar15 + 0xb0) = fVar25;
    *(float *)(lVar15 + 0x100) = fVar24;
    *(float *)(lVar15 + 0xd8) = fVar25;
  }
  if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
  lVar15 = unaff_x29 + unaff_x25 * 0x178;
  unaff_s13 = fStack0000000000000060 * *(float *)(lVar15 + 0x15c) *
              (1.0 - *(float *)(unaff_x19 + 0x60));
  if ((*(char *)(lVar15 + 0x54) == '\0') &&
     ((*(byte *)(unaff_x29 + unaff_x25 * 0x178 + 0x18c) & 1) != 0)) {
    unaff_s13 = -unaff_s13;
  }
  lVar15 = unaff_x29 + unaff_x25 * 0x178;
  *(float *)(lVar15 + 0x80) = unaff_s13;
  *(float *)(lVar15 + 0xa8) = unaff_s13;
  *(float *)(lVar15 + 0xd0) = unaff_s13;
  *(float *)(lVar15 + 0xf8) = unaff_s13;
LAB_05bd8578:
  if (((int)in_stack_00000158 < (int)unaff_x19[0x6c]) &&
     (in_stack_000000c8 < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_w21 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] != 5)) {
      if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
      lVar14 = unaff_x29 + unaff_x25 * 0x178;
      *(ulong *)(lVar14 + 0x68) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0x68) >> 0x20),
                    in_s6 + (float)*(undefined8 *)(lVar14 + 0x68));
      *(float *)(lVar14 + 0x70) = param_3 + *(float *)(lVar14 + 0x70);
      *(ulong *)(lVar14 + 0x90) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0x90) >> 0x20),
                    in_s6 + (float)*(undefined8 *)(lVar14 + 0x90));
      *(float *)(lVar14 + 0x98) = param_3 + *(float *)(lVar14 + 0x98);
      *(ulong *)(lVar14 + 0xb8) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0xb8) >> 0x20),
                    in_s6 + (float)*(undefined8 *)(lVar14 + 0xb8));
      *(float *)(lVar14 + 0xc0) = param_3 + *(float *)(lVar14 + 0xc0);
      *(ulong *)(lVar14 + 0xe0) =
           CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0xe0) >> 0x20),
                    in_s6 + (float)*(undefined8 *)(lVar14 + 0xe0));
      *(float *)(lVar14 + 0xe8) = param_3 + *(float *)(lVar14 + 0xe8);
      goto LAB_05bd870c;
    }
    if (((int)unaff_w21 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
      if (in_stack_00000158 < uVar9) {
        if (*(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x60) == in_stack_00000030._4_4_) {
          lVar14 = unaff_x29 + unaff_x25 * 0x178;
          *(ulong *)(lVar14 + 0x68) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0x68) >> 0x20),
                        in_s6 + (float)*(undefined8 *)(lVar14 + 0x68));
          *(float *)(lVar14 + 0x70) = param_3 + *(float *)(lVar14 + 0x70);
          *(ulong *)(lVar14 + 0x90) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0x90) >> 0x20),
                        in_s6 + (float)*(undefined8 *)(lVar14 + 0x90));
          *(float *)(lVar14 + 0x98) = param_3 + *(float *)(lVar14 + 0x98);
          *(ulong *)(lVar14 + 0xb8) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0xb8) >> 0x20),
                        in_s6 + (float)*(undefined8 *)(lVar14 + 0xb8));
          *(float *)(lVar14 + 0xc0) = param_3 + *(float *)(lVar14 + 0xc0);
          *(ulong *)(lVar14 + 0xe0) =
               CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0xe0) >> 0x20),
                        in_s6 + (float)*(undefined8 *)(lVar14 + 0xe0));
          *(float *)(lVar14 + 0xe8) = param_3 + *(float *)(lVar14 + 0xe8);
          goto LAB_05bd870c;
        }
        goto LAB_05bd8650;
      }
      goto LAB_05bda2b0;
    }
  }
LAB_05bd8650:
  if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
  if (DAT_06b7224b == '\0') {
    FUN_02d6084c(PTR_DAT_0675e318);
    DAT_06b7224b = '\x01';
    uVar9 = *(uint *)(unaff_x29 + 0x18);
  }
  puVar6 = PTR_DAT_0675e318;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8) + 1);
  lVar15 = unaff_x29 + unaff_x25 * 0x178;
  *(undefined8 *)(lVar15 + 0x68) = **(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8);
  *(undefined4 *)(lVar15 + 0x70) = uVar27;
  if (uVar9 <= in_stack_00000158) goto LAB_05bda2b0;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  lVar15 = unaff_x29 + unaff_x25 * 0x178;
  *(undefined8 *)(lVar15 + 0x90) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar15 + 0x98) = uVar27;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar15 + 0xb8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar15 + 0xc0) = uVar27;
  uVar27 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar15 + 0xe0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar15 + 0xe8) = uVar27;
  *(undefined1 *)(lVar14 + 400) = 0;
LAB_05bd870c:
  iVar8 = FUN_06030c10(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar8 == 1;
  if (iVar10 == 0) {
    pcVar16 = *(code **)(*unaff_x19 + 0x8d8);
LAB_05bd874c:
    (*pcVar16)();
    unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
  }
  else {
    unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
    if (iVar10 == 1) {
      pcVar16 = *(code **)(*unaff_x19 + 0x8f8);
      goto LAB_05bd874c;
    }
  }
LAB_05bd8760:
  unaff_x26 = 0x60;
  if ((*in_stack_00000178 == 0) || (lVar14 = *(long *)(*in_stack_00000178 + 0x38), lVar14 == 0))
  goto LAB_05bda144;
  if (*(uint *)(lVar14 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
  lVar14 = lVar14 + unaff_x25 * 0x178;
  uVar21 = *(undefined8 *)(lVar14 + 0x114);
  param_2 = CONCAT44(fVar32,in_s6);
  *(undefined8 *)(lVar14 + 0x114) =
       CONCAT44(fVar32 + (float)((ulong)uVar21 >> 0x20),in_s6 + (float)uVar21);
  *(float *)(lVar14 + 0x11c) = param_3 + *(float *)(lVar14 + 0x11c);
  if ((*in_stack_00000178 == 0) || (lVar14 = *(long *)(*in_stack_00000178 + 0x38), lVar14 == 0))
  goto LAB_05bda144;
  if (*(uint *)(lVar14 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
  lVar14 = lVar14 + unaff_x25 * 0x178;
  *(ulong *)(lVar14 + 0x108) =
       CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar14 + 0x108) >> 0x20),
                in_s6 + (float)*(undefined8 *)(lVar14 + 0x108));
  *(float *)(lVar14 + 0x110) = param_3 + *(float *)(lVar14 + 0x110);
  if (*in_stack_00000178 == 0) goto LAB_05bda144;
  param_1 = *(long *)(*in_stack_00000178 + 0x38);
  unaff_x27 = in_stack_00000178;
  unaff_w24 = in_stack_00000158;
  unaff_w20 = uVar22;
  in_stack_00000130 = in_d5;
  in_stack_00000158 = unaff_w23;
  goto code_r0x05bd87ec;
  while( true ) {
    lVar14 = *unaff_x27;
    lVar15 = lVar15 + 1;
    lVar20 = lVar20 + 0x50;
    if (lVar14 == 0) break;
LAB_05bd9ec8:
    uVar11 = lVar15 + 1;
    if ((long)*(int *)(lVar14 + 0x34) <= (long)uVar11) {
LAB_05bd7728:
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05bf40c4();
      return;
    }
    lVar14 = *(long *)(lVar14 + 0x60);
    if (lVar14 == 0) break;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_05bda2b0;
    FUN_05c3fc00(lVar14 + lVar20 + 0x70,0);
    lVar14 = unaff_x19[0xe4];
    if (lVar14 == 0) break;
    if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_05bda2b0;
    uVar21 = *(undefined8 *)(lVar14 + lVar15 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar12 = UnityEngine_Font__add_textureRebuilt(uVar21,0,0);
    if ((uVar12 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((*unaff_x27 == 0) || (lVar14 = *(long *)(*unaff_x27 + 0x60), lVar14 == 0)) break;
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (*(uint *)(lVar14 + 0x18) <= uVar11) {
LAB_05bda2b0:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        FUN_05c3fd34(lVar14 + lVar20 + 0x70,1,0);
      }
      lVar14 = unaff_x19[0xe4];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_05c48e08(lVar14,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar14 == 0) break;
      FUN_06040930(lVar14,*(undefined8 *)(lVar17 + lVar20 + 0x80),0);
      lVar14 = unaff_x19[0xe4];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_05c48e08(lVar14,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar14 == 0) break;
      FUN_06041994(lVar14,0,*(undefined8 *)(lVar17 + lVar20 + 0x98),0);
      lVar14 = unaff_x19[0xe4];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_05c48e08(lVar14,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar14 == 0) break;
      FUN_06040b94(lVar14,*(undefined8 *)(lVar17 + lVar20 + 0xa0),0);
      lVar14 = unaff_x19[0xe4];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x28);
      if (lVar14 == 0) break;
      lVar14 = FUN_05c48e08(lVar14,0);
      if ((*unaff_x27 == 0) || (lVar17 = *(long *)(*unaff_x27 + 0x60), lVar17 == 0)) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar11) goto LAB_05bda2b0;
      if (lVar14 == 0) break;
      FUN_06040ca8(lVar14,*(undefined8 *)(lVar17 + lVar20 + 0xa8),0);
      lVar14 = unaff_x19[0xe4];
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_05bda2b0;
      lVar14 = *(long *)(lVar14 + lVar15 * 8 + 0x28);
      if ((lVar14 == 0) || (lVar14 = FUN_05c48e08(lVar14,0), lVar14 == 0)) break;
      FUN_06042d74(lVar14,0);
    }
  }
LAB_05bda144:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


