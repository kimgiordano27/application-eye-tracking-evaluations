/*
FUNCTION_NAME: Unity.VisualScripting.Member$$Invoke
ENTRY_POINT: 05bd8df0
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


void Unity_VisualScripting_Member__Invoke(void)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  long *unaff_x19;
  undefined8 uVar23;
  uint uVar24;
  uint unaff_w21;
  long unaff_x22;
  undefined8 uVar25;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_s13;
  float fVar37;
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
  uint in_stack_00000108;
  int iStack0000000000000110;
  float fStack0000000000000114;
  uint uStack0000000000000118;
  uint uStack000000000000011c;
  float in_stack_00000130;
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
  
code_r0x05bd8df0:
  if (!(bool)in_ZR) goto LAB_05bd9630;
LAB_05bd8df4:
  if (unaff_w24 == *in_stack_00000180 - 1U) {
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar12 = FUN_04f83944(in_stack_00000170,0);
    iVar11 = iStack0000000000000110;
    if ((uVar12 & 1) == 0) goto LAB_05bd8e34;
  }
  else {
LAB_05bd8e34:
    iVar11 = unaff_w23 - 2;
  }
  lVar16 = *unaff_x27;
  if (lVar16 != 0) {
    lVar22 = *(long *)(lVar16 + 0x40);
    if (lVar22 != 0) {
      uVar10 = *(uint *)(lVar16 + 0x24);
      iVar9 = *(int *)(lVar22 + 0x18);
      if (iVar9 < (int)(uVar10 + 1)) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__ + 0xe4
                    ) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_03562f88((long *)(lVar16 + 0x40),iVar9 + 1,
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__);
        lVar16 = *unaff_x27;
        if (lVar16 == 0) goto LAB_05bda144;
      }
      unaff_x28 = (long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
      lVar16 = *(long *)(lVar16 + 0x40);
      if (lVar16 != 0) {
        if (uVar10 < *(uint *)(lVar16 + 0x18)) {
          lVar16 = lVar16 + (long)(int)uVar10 * 0x18;
          *(long **)(lVar16 + 0x20) = unaff_x19;
          *(uint *)(lVar16 + 0x28) = in_stack_00000148;
          *(int *)(lVar16 + 0x2c) = iVar11;
          *(uint *)(lVar16 + 0x30) = (iVar11 - in_stack_00000148) + 1;
          thunk_FUN_02dd37b4();
          lVar16 = unaff_x19[0x74];
          if (lVar16 != 0) {
            lVar22 = *(long *)(lVar16 + 0x50);
            unaff_x22 = 0x178;
            *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
            if (lVar22 != 0) {
              if (unaff_w21 < *(uint *)(lVar22 + 0x18)) {
                lVar22 = lVar22 + in_stack_00000150 * unaff_x26;
                bVar6 = false;
                in_stack_000000c8 = in_stack_000000c8 + 1;
                *(int *)(lVar22 + 0x34) = *(int *)(lVar22 + 0x34) + 1;
                uVar10 = unaff_w24;
                uVar24 = unaff_w21;
                unaff_w24 = in_stack_00000158;
LAB_05bd8b98:
                lVar16 = *unaff_x27;
                if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x38), lVar22 == 0))
                goto LAB_05bda144;
                if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_05bda2b0;
                uVar19 = (uint)in_stack_000000d8;
                uVar15 = (uint)in_stack_00000168;
                if ((*(byte *)(lVar22 + unaff_x25 * unaff_x22 + 0x18c) >> 2 & 1) == 0) {
                  if ((in_stack_00000108 & 1) == 0) {
                    in_stack_00000108 = 0;
                  }
                  else {
                    in_stack_00000158 = unaff_w24;
                    if (*(uint *)(lVar22 + 0x18) <= unaff_w24 - 2) goto LAB_05bda2b0;
LAB_05bd8bdc:
                    lVar21 = *unaff_x19;
                    uVar29 = *(undefined4 *)(lVar22 + in_stack_00000160 + -0x334);
                    uVar31 = *(undefined4 *)(lVar22 + in_stack_00000160 + -0x2f8);
LAB_05bd90bc:
                    (**(code **)(lVar21 + 0x908))
                              (uStack0000000000000070,fStack0000000000000068,uStack000000000000006c,
                               uVar29,fStack00000000000000f4,0,fStack0000000000000074,uVar31);
LAB_05bd90fc:
                    lVar16 = *unaff_x28;
                    unaff_w24 = in_stack_00000158;
LAB_05bd9100:
                    if (*(int *)(lVar16 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                      lVar16 = *unaff_x28;
                    }
                    in_stack_00000108 = 0;
                    fStack0000000000000114 = 0.0;
                    fStack00000000000000f4 = *(float *)(*(long *)(lVar16 + 0xb8) + 0x1730);
                    fStack00000000000000f0 = 0.0;
                  }
                }
                else {
                  lVar21 = lVar22 + unaff_x25 * unaff_x22;
                  iVar11 = *(int *)(lVar21 + 0x60);
                  *(undefined4 *)(lVar21 + 0x168) = in_stack_00001274;
                  if ((((int)unaff_x19[0x6c] < (int)uVar10) || ((int)unaff_x19[0x6d] < (int)uVar24))
                     || (((int)unaff_x19[0x62] == 5 && (iVar11 + 1 != (int)unaff_x19[0x6e])))) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (in_stack_00000170 != 1.14949e-41 && (uStack0000000000000118 & 1) == 0) {
                    fVar26 = *(float *)(lVar22 + unaff_x25 * unaff_x22 + 0x15c);
                    if (fStack0000000000000114 <= fVar26) {
                      fStack0000000000000114 = fVar26;
                    }
                    if (fStack00000000000000f0 <= ABS(unaff_s13)) {
                      fStack00000000000000f0 = ABS(unaff_s13);
                    }
                    if (iVar11 != iStack0000000000000064) {
                      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar16 = *unaff_x27;
                        if (lVar16 == 0) goto LAB_05bda144;
                        lVar22 = *(long *)(*unaff_x28 + 0xb8);
                      }
                      else {
                        lVar22 = *(long *)(*unaff_x28 + 0xb8);
                      }
                      fStack00000000000000f4 = *(float *)(lVar22 + 0x1730);
                    }
                    lVar16 = *(long *)(lVar16 + 0x38);
                    if (lVar16 == 0) goto LAB_05bda144;
                    if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05bda2b0;
                    if (unaff_x19[0x1f] == 0) goto LAB_05bda144;
                    fVar27 = *(float *)(lVar16 + unaff_x25 * unaff_x22 + 0x144);
                    fVar26 = (float)FUN_06114688(unaff_x19[0x1f] + 0x28,0);
                    fVar27 = fVar27 + fStack0000000000000114 * fVar26;
                    iStack0000000000000064 = iVar11;
                    if (fVar27 <= fStack00000000000000f4) {
                      fStack00000000000000f4 = fVar27;
                    }
                  }
                  unaff_x26 = 0x60;
                  unaff_w24 = in_stack_00000158;
                  if ((in_stack_00000108 & 1) == 0) {
                    if ((((in_stack_00000170 == 1.82169e-44) ||
                         (((uint)in_stack_00000170 & 0xfffe) == 10)) || ((int)uVar15 < (int)uVar10))
                       || (!bVar1)) {
LAB_05bd9014:
                      in_stack_00000108 = 0;
                      goto LAB_05bd912c;
                    }
                    if (uVar10 == uVar15) {
                      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar12 = FUN_04f8481c(in_stack_00000170,0);
                      if ((uVar12 & 1) != 0) goto LAB_05bd9014;
                    }
                    if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 == 0))
                    goto LAB_05bda144;
                    if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05bda2b0;
                    lVar16 = lVar16 + unaff_x25 * unaff_x22;
                    fStack0000000000000074 = *(float *)(lVar16 + 0x15c);
                    uStack0000000000000070 = *(undefined4 *)(lVar16 + 0x114);
                    in_stack_00000078 = *(undefined4 *)(lVar16 + 0x164);
                    fVar26 = fStack0000000000000074;
                    if (fStack0000000000000114 != 0.0) {
                      fVar26 = fStack0000000000000114;
                    }
                    uStack000000000000006c = 0;
                    fVar27 = unaff_s13;
                    if (fStack0000000000000114 != 0.0) {
                      fVar27 = fStack00000000000000f0;
                    }
                    fStack0000000000000068 = fStack00000000000000f4;
                    fStack00000000000000f0 = fVar27;
                    fStack0000000000000114 = fVar26;
                  }
                  if (*in_stack_00000180 == 1) {
                    if ((*unaff_x27 != 0) && (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 != 0)) {
                      if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                        lVar16 = lVar16 + unaff_x25 * unaff_x22;
                        lVar21 = *unaff_x19;
                        uVar29 = *(undefined4 *)(lVar16 + 0x120);
                        uVar31 = *(undefined4 *)(lVar16 + 0x15c);
                        goto LAB_05bd90bc;
                      }
                      goto LAB_05bda2b0;
                    }
                    goto LAB_05bda144;
                  }
                  if ((uVar10 == uVar19) || ((int)uVar15 <= (int)uVar10)) {
                    if ((*unaff_x27 != 0) && (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 != 0)) {
                      lVar22 = unaff_x25;
                      uVar20 = uVar10;
                      if (in_stack_00000170 == 1.14949e-41 || (uStack0000000000000118 & 1) != 0) {
                        lVar22 = in_stack_00000168;
                        uVar20 = uVar15;
                      }
                      if (uVar20 < *(uint *)(lVar16 + 0x18)) {
                        lVar16 = lVar16 + lVar22 * unaff_x22;
                        (**(code **)(*unaff_x19 + 0x908))
                                  (uStack0000000000000070,fStack0000000000000068,
                                   uStack000000000000006c,*(undefined4 *)(lVar16 + 0x120),
                                   fStack00000000000000f4,0,fStack0000000000000074,
                                   *(undefined4 *)(lVar16 + 0x15c));
                        lVar16 = *unaff_x28;
                        goto LAB_05bd9100;
                      }
                      goto LAB_05bda2b0;
                    }
                    goto LAB_05bda144;
                  }
                  if (!bVar1) {
                    if ((*unaff_x27 != 0) && (lVar22 = *(long *)(*unaff_x27 + 0x38), lVar22 != 0)) {
                      if (in_stack_00000158 - 2 < *(uint *)(lVar22 + 0x18)) goto LAB_05bd8bdc;
                      goto LAB_05bda2b0;
                    }
                    goto LAB_05bda144;
                  }
                  if ((int)uVar10 < *in_stack_00000180 + -1) {
                    if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 == 0))
                    goto LAB_05bda144;
                    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000158) goto LAB_05bda2b0;
                    uVar12 = FUN_05bf4b74(in_stack_00000078,
                                          *(undefined4 *)(lVar16 + in_stack_00000160),0);
                    unaff_x28 = (long *)
                                Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    if ((uVar12 & 1) == 0) {
                      if ((*unaff_x27 != 0) && (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 != 0))
                      {
                        if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                          lVar16 = lVar16 + unaff_x25 * unaff_x22;
                          (**(code **)(*unaff_x19 + 0x908))
                                    (uStack0000000000000070,fStack0000000000000068,
                                     uStack000000000000006c,*(undefined4 *)(lVar16 + 0x120),
                                     fStack00000000000000f4,0,fStack0000000000000074,
                                     *(undefined4 *)(lVar16 + 0x15c));
                          unaff_x28 = (long *)
                                      Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                          ;
                          goto LAB_05bd90fc;
                        }
                        goto LAB_05bda2b0;
                      }
                      goto LAB_05bda144;
                    }
                  }
                  in_stack_00000108 = 1;
                }
LAB_05bd912c:
                if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 == 0))
                goto LAB_05bda144;
                if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05bda2b0;
                if (in_stack_000000f8 == 0) goto LAB_05bda144;
                uVar20 = *(uint *)(lVar16 + unaff_x25 * unaff_x22 + 0x18c);
                fVar26 = (float)FUN_06114698(in_stack_000000f8 + 0x28,0);
                if ((uVar20 >> 6 & 1) == 0) {
                  if ((uStack000000000000011c & 1) != 0) {
                    if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 == 0))
                    goto LAB_05bda144;
                    if (*(uint *)(lVar16 + 0x18) <= unaff_w24 - 2) goto LAB_05bda2b0;
                    uVar29 = *(undefined4 *)(lVar16 + in_stack_00000160 + -0x334);
                    fVar27 = *(float *)(lVar16 + in_stack_00000160 + -0x310);
                    pcVar17 = *(code **)(*unaff_x19 + 0x908);
LAB_05bd96d8:
                    (*pcVar17)(uStack000000000000008c,fStack0000000000000088,in_stack_00000080._4_4_
                               ,uVar29,in_stack_00000090 * fVar26 + fVar27,0,in_stack_00000090,
                               in_stack_00000090);
                  }
LAB_05bd970c:
                  uStack000000000000011c = 0;
                }
                else {
                  lVar16 = *unaff_x27;
                  if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x38), lVar22 == 0))
                  goto LAB_05bda144;
                  if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_05bda2b0;
                  *(undefined4 *)(lVar22 + unaff_x25 * unaff_x22 + 0x170) = in_stack_00001274;
                  if ((((int)unaff_x19[0x6c] < (int)uVar10) || ((int)unaff_x19[0x6d] < (int)uVar24))
                     || (((int)unaff_x19[0x62] == 5 &&
                         (*(int *)(lVar22 + unaff_x25 * unaff_x22 + 0x60) + 1 !=
                          (int)unaff_x19[0x6e])))) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if ((((in_stack_00000170 == 1.82169e-44) ||
                       (((uint)in_stack_00000170 & 0xfffe) == 10)) || ((int)uVar15 < (int)uVar10))
                     || ((uStack000000000000011c & 1) != 0 || !bVar1)) {
LAB_05bd927c:
                    if ((uStack000000000000011c & 1) == 0) goto LAB_05bd970c;
                  }
                  else {
                    if (uVar10 == uVar15) {
                      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar12 = FUN_04f8481c(in_stack_00000170,0);
                      if ((uVar12 & 1) != 0) goto LAB_05bd927c;
                      lVar16 = *unaff_x27;
                      if (lVar16 == 0) goto LAB_05bda144;
                    }
                    lVar16 = *(long *)(lVar16 + 0x38);
                    if (lVar16 == 0) goto LAB_05bda144;
                    if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05bda2b0;
                    lVar16 = lVar16 + unaff_x25 * unaff_x22;
                    in_stack_00000090 = *(float *)(lVar16 + 0x15c);
                    uStack000000000000008c = *(undefined4 *)(lVar16 + 0x114);
                    fStack000000000000005c = *(float *)(lVar16 + 0x58);
                    fStack0000000000000058 = *(float *)(lVar16 + 0x144);
                    fStack0000000000000088 = fVar26 * in_stack_00000090 + fStack0000000000000058;
                    in_stack_00000080._4_4_ = 0;
                  }
                  iVar11 = *in_stack_00000180;
                  if (iVar11 == 1) {
LAB_05bd93b4:
                    if ((*unaff_x27 != 0) && (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 != 0)) {
                      if (uVar10 < *(uint *)(lVar16 + 0x18)) {
                        lVar16 = lVar16 + unaff_x25 * unaff_x22;
                        lVar22 = *unaff_x19;
                        uVar29 = *(undefined4 *)(lVar16 + 0x120);
                        fVar27 = *(float *)(lVar16 + 0x144);
LAB_05bd93e0:
                        pcVar17 = *(code **)(lVar22 + 0x908);
                        goto LAB_05bd96d8;
                      }
                      goto LAB_05bda2b0;
                    }
                    goto LAB_05bda144;
                  }
                  if (uVar10 == uVar19) {
                    if ((*unaff_x27 != 0) && (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 != 0)) {
                      uVar20 = *(uint *)(lVar16 + 0x18);
                      if (in_stack_00000170 == 1.14949e-41 || (uStack0000000000000118 & 1) != 0) {
                        if (uVar20 <= uVar15) goto LAB_05bda2b0;
                      }
                      else {
LAB_05bd96ac:
                        in_stack_00000168 = unaff_x25;
                        if (uVar20 <= uVar10) goto LAB_05bda2b0;
                      }
LAB_05bd96b4:
                      lVar16 = lVar16 + in_stack_00000168 * unaff_x22;
                      fVar27 = *(float *)(lVar16 + 0x144);
                      uVar29 = *(undefined4 *)(lVar16 + 0x120);
                      pcVar17 = *(code **)(*unaff_x19 + 0x908);
                      goto LAB_05bd96d8;
                    }
                    goto LAB_05bda144;
                  }
                  if ((int)uVar10 < iVar11) {
                    lVar16 = *unaff_x27;
                    if ((lVar16 != 0) && (lVar22 = *(long *)(lVar16 + 0x38), lVar22 != 0)) {
                      if (unaff_w24 < *(uint *)(lVar22 + 0x18)) {
                        if (*(float *)(lVar22 + in_stack_00000160 + -0x10c) ==
                            fStack000000000000005c) {
                          fVar27 = *(float *)(lVar22 + in_stack_00000160 + -0x20);
                          if (*(int *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<Substring>_get_Item__
                                      + 0xe4) == 0) {
                            thunk_FUN_02dbd7b4();
                          }
                          uVar12 = FUN_05bf5098(in_stack_00000130 + fVar27,fStack0000000000000058,0)
                          ;
                          if ((uVar12 & 1) != 0) {
                            iVar11 = *in_stack_00000180;
                            goto LAB_05bd94b4;
                          }
                          lVar16 = *unaff_x27;
                          if (lVar16 == 0) goto LAB_05bda144;
                        }
                        lVar16 = *(long *)(lVar16 + 0x38);
                        if (lVar16 != 0) {
                          uVar20 = *(uint *)(lVar16 + 0x18);
                          if ((int)uVar10 <= (int)uVar15) goto LAB_05bd96ac;
                          if (uVar15 < uVar20) goto LAB_05bd96b4;
                          goto LAB_05bda2b0;
                        }
                        goto LAB_05bda144;
                      }
                      goto LAB_05bda2b0;
                    }
                    goto LAB_05bda144;
                  }
LAB_05bd94b4:
                  if ((int)uVar10 < iVar11) {
                    iVar11 = FUN_0606f30c(in_stack_000000f8,0);
                    if (*(uint *)(unaff_x29 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
                    lVar16 = *(long *)(unaff_x29 + in_stack_00000160 + -0x124);
                    if (lVar16 == 0) goto LAB_05bda144;
                    iVar9 = FUN_0606f30c(lVar16,0);
                    unaff_x27 = in_stack_00000178;
                    if (iVar11 != iVar9) goto LAB_05bd93b4;
                  }
                  if (!bVar1) {
                    if ((*unaff_x27 != 0) && (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 != 0)) {
                      if (unaff_w24 - 2 < *(uint *)(lVar16 + 0x18)) {
                        lVar22 = *unaff_x19;
                        uVar29 = *(undefined4 *)(lVar16 + in_stack_00000160 + -0x334);
                        fVar27 = *(float *)(lVar16 + in_stack_00000160 + -0x310);
                        goto LAB_05bd93e0;
                      }
                      goto LAB_05bda2b0;
                    }
                    goto LAB_05bda144;
                  }
                  uStack000000000000011c = 1;
                }
                if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 == 0))
                goto LAB_05bda144;
                uVar20 = (uint)*(undefined8 *)(lVar16 + 0x18);
                if (uVar20 <= uVar10) goto LAB_05bda2b0;
                if ((*(byte *)(lVar16 + unaff_x25 * unaff_x22 + 0x18d) >> 1 & 1) == 0) {
                  if ((in_stack_00000100._4_4_ & 1) != 0) {
LAB_05bd9a90:
                    (**(code **)(*unaff_x19 + 0x918))
                              (in_stack_000000c0._4_4_,in_stack_000000d0._4_4_,
                               uStack00000000000000b0,fStack00000000000000b4,in_stack_000000b8,
                               uStack00000000000000b0);
                  }
LAB_05bd9ac4:
                  in_stack_00000100._4_4_ = 0;
                }
                else {
                  if ((((int)unaff_x19[0x6c] < (int)uVar10) || ((int)unaff_x19[0x6d] < (int)uVar24))
                     || (((int)unaff_x19[0x62] == 5 &&
                         (*(int *)(lVar16 + unaff_x25 * unaff_x22 + 0x60) + 1 !=
                          (int)unaff_x19[0x6e])))) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if ((in_stack_00000100._4_4_ & 1) == 0) {
                    if ((((in_stack_00000170 != 1.82169e-44) &&
                         (((uint)in_stack_00000170 & 0xfffe) != 10)) && ((int)uVar10 <= (int)uVar15)
                        ) && (bVar1)) {
                      if (uVar10 == uVar15) {
                        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar12 = FUN_04f8481c(in_stack_00000170,0);
                        if ((uVar12 & 1) != 0) goto LAB_05bd9ac4;
                      }
                      lVar22 = *unaff_x28;
                      if (*(int *)(lVar22 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar22 = *unaff_x28;
                      }
                      if ((*unaff_x27 != 0) && (lVar16 = *(long *)(*unaff_x27 + 0x38), lVar16 != 0))
                      {
                        uVar20 = (uint)*(undefined8 *)(lVar16 + 0x18);
                        if (uVar10 < uVar20) {
                          lVar22 = *(long *)(lVar22 + 0xb8);
                          lVar21 = lVar16 + unaff_x25 * unaff_x22;
                          in_stack_00001268 = *(undefined8 *)(lVar21 + 0x180);
                          in_stack_00001260 = *(undefined8 *)(lVar21 + 0x178);
                          in_stack_00000170 = *(float *)(lVar22 + 0x1720);
                          in_stack_00001270 = *(float *)(lVar21 + 0x188);
                          fStack00000000000000b4 = *(float *)(lVar22 + 0x1728);
                          in_stack_000000d0._4_4_ = *(float *)(lVar22 + 0x1724);
                          in_stack_000000b8 = *(float *)(lVar22 + 0x172c);
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
                    if (uVar20 <= uVar10) goto LAB_05bda2b0;
                    lVar16 = lVar16 + unaff_x25 * unaff_x22;
                    fVar32 = *(float *)(lVar16 + 0x120);
                    fVar27 = *(float *)(lVar16 + 0x13c);
                    fVar35 = *(float *)(lVar16 + 0x180);
                    fVar36 = *(float *)(lVar16 + 0x188);
                    uVar25 = *(undefined8 *)(lVar16 + 0x178);
                    fVar37 = *(float *)(lVar16 + 0x184);
                    uVar23 = *(undefined8 *)(lVar16 + 0x180);
                    fVar34 = *(float *)(lVar16 + 0x114);
                    fVar26 = *(float *)(lVar16 + 0x138);
                    fVar30 = *(float *)(lVar16 + 0x140);
                    fVar33 = *(float *)(lVar16 + 0x148);
                    in_stack_00000188 = uVar25;
                    fStack0000000000000190 = fVar35;
                    fStack0000000000000194 = fVar37;
                    in_stack_00000198 = fVar36;
                    in_stack_000001a0 = in_stack_00001260;
                    in_stack_000001a8 = in_stack_00001268;
                    in_stack_000001b0 = in_stack_00001270;
                    uVar12 = FUN_05bf61dc(&stack0x000001a0,&stack0x00000188,0);
                    lVar16 = *(long *)
                              Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                    ;
                    if ((uVar12 & 1) == 0) {
                      if (*(int *)(lVar16 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar16);
                      }
                      bVar8 = (uStack0000000000000118 & 1) == 0;
                      if (bVar8) {
                        fVar27 = fVar32;
                      }
                      fVar27 = fVar27 + (float)in_stack_00001268;
                      if (bVar8) {
                        fVar26 = fVar34;
                      }
                      fVar26 = fVar26 - (float)((ulong)in_stack_00001260 >> 0x20);
                      in_stack_000000c0._4_4_ = in_stack_00000170;
                      if (fVar26 <= in_stack_00000170) {
                        in_stack_000000c0._4_4_ = fVar26;
                      }
                      if (fStack00000000000000b4 <= fVar27) {
                        fStack00000000000000b4 = fVar27;
                      }
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_RemoveAtWithCapacity__
                                  + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      if (fVar33 - in_stack_00001270 <= in_stack_000000d0._4_4_) {
                        in_stack_000000d0._4_4_ = fVar33 - in_stack_00001270;
                      }
                      fVar30 = fVar30 + (float)((ulong)in_stack_00001268 >> 0x20);
                      if (in_stack_000000b8 <= fVar30) {
                        in_stack_000000b8 = fVar30;
                      }
                    }
                    else {
                      if (*(int *)(lVar16 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(lVar16);
                      }
                      if ((uStack0000000000000118 & 1) == 0) {
                        fVar26 = fVar34;
                      }
                      in_stack_000000c0._4_4_ =
                           (fVar26 + (fStack00000000000000b4 - (float)in_stack_00001268)) * 0.5;
                      if (fVar33 <= in_stack_000000d0._4_4_) {
                        in_stack_000000d0._4_4_ = fVar33;
                      }
                      if (in_stack_000000b8 <= fVar30) {
                        in_stack_000000b8 = fVar30;
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
                      in_stack_000000d0._4_4_ = fVar33 - fVar36;
                      if ((uStack0000000000000118 & 1) == 0) {
                        fVar27 = fVar32;
                      }
                      fStack00000000000000b4 = fVar27 + fVar35;
                      uStack00000000000000b0 = 0;
                      in_stack_000000b8 = fVar30 + fVar37;
                      in_stack_00001260 = uVar25;
                      in_stack_00001268 = uVar23;
                      in_stack_00001270 = fVar36;
                    }
                    unaff_x22 = 0x178;
                    if ((((*in_stack_00000180 == 1) || (uVar10 == uVar19)) ||
                        ((int)uVar15 <= (int)uVar10)) || (!bVar1)) goto LAB_05bd9a90;
                    in_stack_00000100._4_4_ = 1;
                  }
                }
                puVar7 = 
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<Touchscreen>_AppendWithCapacity__
                ;
                iVar11 = *in_stack_00000180;
                iStack0000000000000110 = iStack0000000000000110 + 1;
                in_stack_00000160 = in_stack_00000160 + 0x178;
                unaff_w23 = unaff_w24 + 1;
                if (iVar11 <= (int)unaff_w24) {
                  lVar16 = *unaff_x27;
                  if (lVar16 == 0) goto LAB_05bda144;
                  lVar22 = *(long *)(lVar16 + 0x60);
                  if (lVar22 == 0) goto LAB_05bda144;
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_05bda2b0;
                  *(undefined4 *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) =
                       in_stack_00001274;
                  *(int *)(lVar16 + 0x18) = iVar11;
                  lVar22 = unaff_x19[0xd7];
                  *(uint *)(lVar16 + 0x2c) = uVar24 + 1;
                  if (iVar11 < 1 || in_stack_000000c8 == 0) {
                    in_stack_000000c8 = 1;
                  }
                  *(int *)(lVar16 + 0x1c) = (int)lVar22;
                  *(int *)(lVar16 + 0x24) = in_stack_000000c8;
                  *(int *)(lVar16 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
                  if (((int)unaff_x19[0x6a] != 0xff) ||
                     (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0))
                  goto LAB_05bd7728;
                  lVar16 = unaff_x19[0xde];
                  if (lVar16 != 0) {
                    (**(code **)(lVar16 + 0x18))
                              (*(undefined8 *)(lVar16 + 0x40),*unaff_x27,
                               *(undefined8 *)(lVar16 + 0x28));
                  }
                  if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                    if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x60), lVar16 == 0))
                    goto LAB_05bda144;
                    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05bda2b0;
                    FUN_05c3fd34(lVar16 + 0x20,1,0);
                  }
                  if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
                  FUN_06042ef4(unaff_x19[0x7b],0);
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar16 = *(long *)(unaff_x19[0x74] + 0x60), lVar16 == 0)) goto LAB_05bda144;
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05bda2b0;
                  if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
                  FUN_06040930(unaff_x19[0x7b],*(undefined8 *)(lVar16 + 0x30),0);
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar16 = *(long *)(unaff_x19[0x74] + 0x60), lVar16 == 0)) goto LAB_05bda144;
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05bda2b0;
                  if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
                  FUN_06041994(unaff_x19[0x7b],0,*(undefined8 *)(lVar16 + 0x48),0);
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar16 = *(long *)(unaff_x19[0x74] + 0x60), lVar16 == 0)) goto LAB_05bda144;
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05bda2b0;
                  if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
                  FUN_06040b94(unaff_x19[0x7b],*(undefined8 *)(lVar16 + 0x50),0);
                  if ((unaff_x19[0x74] == 0) ||
                     (lVar16 = *(long *)(unaff_x19[0x74] + 0x60), lVar16 == 0)) goto LAB_05bda144;
                  if (*(int *)(lVar16 + 0x18) == 0) goto LAB_05bda2b0;
                  if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
                  FUN_06040ca8(unaff_x19[0x7b],*(undefined8 *)(lVar16 + 0x58),0);
                  if (unaff_x19[0x7b] == 0) goto LAB_05bda144;
                  FUN_06042d74(unaff_x19[0x7b],0);
                  lVar16 = *unaff_x27;
                  if (lVar16 == 0) goto LAB_05bda144;
                  lVar21 = 0;
                  lVar22 = 0;
                  goto LAB_05bd9ec8;
                }
                if (*(uint *)(unaff_x29 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
                unaff_x25 = (long)(int)unaff_w24;
                lVar16 = unaff_x29 + unaff_x25 * unaff_x22;
                in_stack_000000f8 = *(long *)(lVar16 + 0x40);
                uVar3 = *(ushort *)(lVar16 + 0x24);
                in_stack_00000170 = (float)(uint)uVar3;
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uStack0000000000000118 = FUN_04f80ed4(uVar3,0);
                if (*(uint *)(unaff_x29 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
                if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x50), lVar16 == 0))
                goto LAB_05bda144;
                unaff_w21 = *(uint *)(unaff_x29 + unaff_x25 * unaff_x22 + 0x5c);
                if (*(uint *)(lVar16 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
                in_stack_00000150 = (long)(int)unaff_w21;
                lVar16 = lVar16 + in_stack_00000150 * unaff_x26;
                in_stack_000000d8 = (long)(int)*(uint *)(lVar16 + 0x40);
                uVar10 = *(uint *)(lVar16 + 0x6c);
                iVar2 = *(int *)(lVar16 + 0x20);
                iVar11 = *(int *)(lVar16 + 0x28);
                iVar9 = *(int *)(lVar16 + 0x2c);
                iVar5 = *(int *)(lVar16 + 0x44);
                in_stack_00000168 = (long)iVar5;
                fVar27 = *(float *)(lVar16 + 0x50);
                fVar30 = *(float *)(lVar16 + 0x58);
                fVar34 = *(float *)(lVar16 + 0x5c);
                fVar35 = *(float *)(lVar16 + 0x60);
                fVar36 = *(float *)(lVar16 + 100);
                fVar33 = *(float *)(lVar16 + 0x70);
                fVar37 = *(float *)(lVar16 + 0x74);
                fVar26 = *(float *)(lVar16 + 0x78);
                fVar32 = *(float *)(lVar16 + 0x7c);
                if ((int)uVar10 < 9) {
                  switch(uVar10) {
                  case 1:
                    if ((char)unaff_x19[0x1e] == '\0') {
                      in_stack_000000e8._4_4_ = fVar36 + 0.0;
                    }
                    else {
                      in_stack_000000e8._4_4_ = 0.0 - fVar34;
                    }
                    break;
                  case 2:
                    in_stack_000000e8._4_4_ = (fVar36 + fVar35 * 0.5) - fVar34 * 0.5;
                    break;
                  case 3:
                    goto switchD_05bd7eb4_caseD_3;
                  case 4:
                    in_stack_000000e8._4_4_ = (fVar35 + fVar36) - fVar34;
                    if ((char)unaff_x19[0x1e] != '\0') {
                      in_stack_000000e8._4_4_ = fVar35 + fVar36;
                    }
                    break;
                  default:
                    if ((((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.1614e-41)) &&
                        (in_stack_00000170 != 1.14949e-41)) &&
                       (((in_stack_00000170 != 2.42425e-43 && (in_stack_00000170 != 1.4013e-44)) &&
                        (((int)unaff_w24 <= iVar5 && (uVar10 == 8)))))) goto LAB_05bd7f50;
                    goto switchD_05bd7eb4_caseD_3;
                  }
                  in_stack_000000e0 = 0;
                }
                else if (uVar10 == 0x10) {
                  if ((int)unaff_w24 <= iVar5) {
                    if ((uint)in_stack_00000170 < 0xad) {
                      if ((in_stack_00000170 != 4.2039e-45) && (in_stack_00000170 != 1.4013e-44))
                      goto LAB_05bd7f50;
                    }
                    else if ((in_stack_00000170 != 2.42425e-43) &&
                            ((in_stack_00000170 != 1.14949e-41 && (in_stack_00000170 != 1.1614e-41))
                            )) {
LAB_05bd7f50:
                      if (*(uint *)(lVar16 + 0x40) < *(uint *)(unaff_x29 + 0x18)) {
                        uVar4 = *(undefined2 *)(unaff_x29 + in_stack_000000d8 * 0x178 + 0x24);
                        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                        }
                        uVar12 = FUN_04f84410(uVar4,0);
                        unaff_x28 = (long *)
                                    Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__
                        ;
                        if ((uVar12 & 1) == 0) {
                          bVar1 = (int)unaff_w21 < (int)unaff_x19[0x97];
                        }
                        else {
                          bVar1 = false;
                        }
                        if ((fVar35 < fVar34) || (bVar1 || uVar10 >> 4 != 0)) {
                          if ((unaff_w23 == 1) ||
                             ((unaff_w21 != uVar24 ||
                              (unaff_w24 == *(uint *)((long)unaff_x19 + 0x35c))))) {
                            in_stack_000000e8._4_4_ = fVar36;
                            if ((char)unaff_x19[0x1e] != '\0') {
                              in_stack_000000e8._4_4_ = fVar35 + fVar36;
                            }
                            if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                              thunk_FUN_02dbd7b4();
                            }
                            in_stack_00000050._4_4_ = FUN_04f8481c(in_stack_00000170,0);
                            in_stack_000000e0 = 0;
                          }
                          else {
                            cVar14 = (char)unaff_x19[0x1e];
                            iVar9 = (iVar9 - iVar2) - (in_stack_00000050._4_4_ & 1);
                            fVar36 = -fVar34;
                            if (cVar14 != '\0') {
                              fVar36 = fVar34;
                            }
                            if (iVar9 < 1) {
                              fVar34 = 1.0;
                              iVar9 = 1;
                            }
                            else {
                              fVar34 = *(float *)((long)unaff_x19 + 0x30c);
                            }
                            fVar28 = (float)((ulong)in_stack_000000e0 >> 0x20);
                            if (in_stack_00000170 == 1.26117e-44) {
LAB_05bd9c58:
                              fVar34 = ((fVar35 + fVar36) * (1.0 - fVar34)) / (float)iVar9;
                              if (cVar14 == '\0') {
                                in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar34;
                                in_stack_000000e0 =
                                     CONCAT44(fVar28 + 0.0,(float)in_stack_000000e0 + 0.0);
                              }
                              else {
                                in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar34;
                              }
                            }
                            else {
                              if (in_stack_00000170 != 2.24208e-43) {
                                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                                  thunk_FUN_02dbd7b4();
                                }
                                uVar12 = FUN_04f8481c(in_stack_00000170,0);
                                cVar14 = (char)unaff_x19[0x1e];
                                if ((uVar12 & 1) != 0) goto LAB_05bd9c58;
                              }
                              fVar34 = ((fVar35 + fVar36) * fVar34) /
                                       (float)(int)((iVar2 - (~in_stack_00000050._4_4_ & 1)) +
                                                   iVar11);
                              if (cVar14 == '\0') {
                                in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ + fVar34;
                                in_stack_000000e0 =
                                     CONCAT44(fVar28 + 0.0,(float)in_stack_000000e0 + 0.0);
                              }
                              else {
                                in_stack_000000e8._4_4_ = in_stack_000000e8._4_4_ - fVar34;
                              }
                            }
                          }
                        }
                        else {
                          in_stack_000000e8._4_4_ = fVar36;
                          if ((char)unaff_x19[0x1e] != '\0') {
                            in_stack_000000e8._4_4_ = fVar35 + fVar36;
                          }
                          in_stack_000000e0 = 0;
                        }
                        goto switchD_05bd7eb4_caseD_3;
                      }
                      goto LAB_05bda2b0;
                    }
                  }
                }
                else if (uVar10 == 0x20) {
                  in_stack_000000e8._4_4_ = (fVar36 + fVar35 * 0.5) - (fVar33 + fVar26) * 0.5;
                  in_stack_000000e0 = 0;
                }
switchD_05bd7eb4_caseD_3:
                unaff_x22 = 0x178;
                uVar10 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
                if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                lVar16 = unaff_x29 + unaff_x25 * 0x178;
                fVar35 = in_stack_000000a8 + in_stack_000000e8._4_4_;
                in_stack_00000130 = (float)in_stack_000000a0 + (float)in_stack_000000e0;
                fVar34 = (float)((ulong)in_stack_000000a0 >> 0x20) +
                         (float)((ulong)in_stack_000000e0 >> 0x20);
                if (*(char *)(lVar16 + 400) == '\0') goto LAB_05bd8760;
                iVar11 = *(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x20);
                if (iVar11 != 0) goto LAB_05bd8578;
                fVar36 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)unaff_w21,1.0);
                switch(*(undefined4 *)((long)unaff_x19 + 0x344)) {
                case 0:
                  lVar22 = unaff_x29 + unaff_x25 * 0x178;
                  *(undefined4 *)(lVar22 + 0x84) = 0;
                  *(undefined4 *)(lVar22 + 0xac) = 0;
                  *(undefined4 *)(lVar22 + 0xd4) = 0x3f800000;
                  fVar36 = 1.0;
                  break;
                case 1:
                  fVar32 = *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0x68);
                  if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
                    lVar22 = unaff_x29 + unaff_x25 * 0x178;
                    fVar26 = (in_stack_000000e8._4_4_ + fVar32) - *(float *)(unaff_x19 + 0x9e);
                    fVar32 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
                    goto LAB_05bd8168;
                  }
                  lVar22 = unaff_x29 + unaff_x25 * 0x178;
                  fVar26 = fVar26 - fVar33;
                  *(float *)(lVar22 + 0x84) = fVar36 + (fVar32 - fVar33) / fVar26;
                  *(float *)(lVar22 + 0xac) = fVar36 + (*(float *)(lVar22 + 0x90) - fVar33) / fVar26
                  ;
                  *(float *)(lVar22 + 0xd4) = fVar36 + (*(float *)(lVar22 + 0xb8) - fVar33) / fVar26
                  ;
                  fVar36 = fVar36 + (*(float *)(lVar22 + 0xe0) - fVar33) / fVar26;
                  break;
                case 2:
                  lVar22 = unaff_x29 + unaff_x25 * 0x178;
                  fVar32 = *(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e);
                  fVar26 = (in_stack_000000e8._4_4_ + *(float *)(lVar22 + 0x68)) -
                           *(float *)(unaff_x19 + 0x9e);
LAB_05bd8168:
                  *(float *)(lVar22 + 0x84) = fVar36 + fVar26 / fVar32;
                  *(float *)(lVar22 + 0xac) =
                       fVar36 + ((in_stack_000000e8._4_4_ + *(float *)(lVar22 + 0x90)) -
                                *(float *)(unaff_x19 + 0x9e)) /
                                (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
                  *(float *)(lVar22 + 0xd4) =
                       fVar36 + ((in_stack_000000e8._4_4_ + *(float *)(lVar22 + 0xb8)) -
                                *(float *)(unaff_x19 + 0x9e)) /
                                (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
                  fVar36 = fVar36 + ((in_stack_000000e8._4_4_ + *(float *)(lVar22 + 0xe0)) -
                                    *(float *)(unaff_x19 + 0x9e)) /
                                    (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
                  break;
                case 3:
                  switch((int)unaff_x19[0x69]) {
                  case 0:
                    lVar22 = unaff_x29 + unaff_x25 * 0x178;
                    *(undefined4 *)(lVar22 + 0x88) = 0;
                    *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
                    *(undefined4 *)(lVar22 + 0xd8) = 0;
                    *(undefined4 *)(lVar22 + 0x100) = 0x3f800000;
                    break;
                  case 1:
                    lVar22 = unaff_x29 + unaff_x25 * 0x178;
                    fVar32 = fVar32 - fVar37;
                    fVar26 = fVar36 + (*(float *)(lVar22 + 0x6c) - fVar37) / fVar32;
                    fVar32 = fVar36 + (*(float *)(lVar22 + 0x94) - fVar37) / fVar32;
                    *(float *)(lVar22 + 0x88) = fVar26;
                    *(float *)(lVar22 + 0xb0) = fVar32;
                    *(float *)(lVar22 + 0xd8) = fVar26;
                    *(float *)(lVar22 + 0x100) = fVar32;
                    break;
                  case 2:
                    lVar22 = unaff_x29 + unaff_x25 * 0x178;
                    fVar26 = fVar36 + (*(float *)(lVar22 + 0x6c) -
                                      *(float *)((long)unaff_x19 + 0x4f4)) /
                                      (*(float *)((long)unaff_x19 + 0x4fc) -
                                      *(float *)((long)unaff_x19 + 0x4f4));
                    *(float *)(lVar22 + 0x88) = fVar26;
                    fVar32 = *(float *)((long)unaff_x19 + 0x4f4);
                    fVar33 = *(float *)((long)unaff_x19 + 0x4fc);
                    *(float *)(lVar22 + 0xd8) = fVar26;
                    fVar26 = fVar36 + (*(float *)(lVar22 + 0x94) - fVar32) / (fVar33 - fVar32);
                    *(float *)(lVar22 + 0xb0) = fVar26;
                    *(float *)(lVar22 + 0x100) = fVar26;
                    break;
                  case 3:
                    if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    FUN_06021dcc(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlList<InputControl>_Resize__
                                 ,0);
                    uVar10 = (uint)*(undefined8 *)(unaff_x29 + 0x18);
                  }
                  if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                  lVar22 = unaff_x29 + unaff_x25 * 0x178;
                  fVar26 = *(float *)(lVar22 + 0x158);
                  fVar32 = (1.0 - (*(float *)(lVar22 + 0x88) + *(float *)(lVar22 + 0xb0)) * fVar26)
                           * 0.5;
                  fVar33 = fVar36 + *(float *)(lVar22 + 0x88) * fVar26 + fVar32;
                  fVar36 = fVar36 + fVar32 + *(float *)(lVar22 + 0xb0) * fVar26;
                  *(float *)(lVar22 + 0x84) = fVar33;
                  *(float *)(lVar22 + 0xac) = fVar33;
                  *(float *)(lVar22 + 0xd4) = fVar36;
                  break;
                default:
                  goto switchD_05bd80d4_default;
                }
                *(float *)(unaff_x29 + unaff_x25 * 0x178 + 0xfc) = fVar36;
switchD_05bd80d4_default:
                switch((int)unaff_x19[0x69]) {
                case 0:
                  if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                  lVar22 = unaff_x29 + unaff_x25 * 0x178;
                  *(undefined4 *)(lVar22 + 0x88) = 0;
                  *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
                  *(undefined4 *)(lVar22 + 0xd8) = 0x3f800000;
                  *(undefined4 *)(lVar22 + 0x100) = 0;
                  break;
                case 1:
                  if (unaff_w24 < uVar10) {
                    lVar22 = unaff_x29 + unaff_x25 * 0x178;
                    fVar27 = fVar27 - fVar30;
                    fVar26 = (*(float *)(lVar22 + 0x6c) - fVar30) / fVar27;
                    fVar27 = (*(float *)(lVar22 + 0x94) - fVar30) / fVar27;
                    *(float *)(lVar22 + 0x88) = fVar26;
                    goto LAB_05bd84c0;
                  }
                  goto LAB_05bda2b0;
                case 2:
                  if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                  lVar22 = unaff_x29 + unaff_x25 * 0x178;
                  fVar26 = (*(float *)(lVar22 + 0x6c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                           (*(float *)((long)unaff_x19 + 0x4fc) -
                           *(float *)((long)unaff_x19 + 0x4f4));
                  *(float *)(lVar22 + 0x88) = fVar26;
                  fVar27 = (*(float *)(lVar22 + 0x94) - *(float *)((long)unaff_x19 + 0x4f4)) /
                           (*(float *)((long)unaff_x19 + 0x4fc) -
                           *(float *)((long)unaff_x19 + 0x4f4));
LAB_05bd84c0:
                  *(float *)(lVar22 + 0xb0) = fVar27;
                  *(float *)(lVar22 + 0xd8) = fVar27;
                  *(float *)(lVar22 + 0x100) = fVar26;
                  break;
                case 3:
                  if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                  lVar22 = unaff_x29 + unaff_x25 * 0x178;
                  fVar32 = *(float *)(lVar22 + 0x158);
                  fVar27 = (1.0 - (*(float *)(lVar22 + 0x84) + *(float *)(lVar22 + 0xd4)) / fVar32)
                           * 0.5;
                  fVar26 = *(float *)(lVar22 + 0x84) / fVar32 + fVar27;
                  fVar27 = fVar27 + *(float *)(lVar22 + 0xd4) / fVar32;
                  *(float *)(lVar22 + 0x88) = fVar26;
                  *(float *)(lVar22 + 0xb0) = fVar27;
                  *(float *)(lVar22 + 0x100) = fVar26;
                  *(float *)(lVar22 + 0xd8) = fVar27;
                }
                if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                lVar22 = unaff_x29 + unaff_x25 * 0x178;
                unaff_s13 = fStack0000000000000060 * *(float *)(lVar22 + 0x15c) *
                            (1.0 - *(float *)(unaff_x19 + 0x60));
                if ((*(char *)(lVar22 + 0x54) == '\0') &&
                   ((*(byte *)(unaff_x29 + unaff_x25 * 0x178 + 0x18c) & 1) != 0)) {
                  unaff_s13 = -unaff_s13;
                }
                lVar22 = unaff_x29 + unaff_x25 * 0x178;
                *(float *)(lVar22 + 0x80) = unaff_s13;
                *(float *)(lVar22 + 0xa8) = unaff_s13;
                *(float *)(lVar22 + 0xd0) = unaff_s13;
                *(float *)(lVar22 + 0xf8) = unaff_s13;
LAB_05bd8578:
                if (((int)unaff_w24 < (int)unaff_x19[0x6c]) &&
                   (in_stack_000000c8 < *(int *)((long)unaff_x19 + 0x364))) {
                  if (((int)unaff_w21 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] != 5)) {
                    if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                    lVar16 = unaff_x29 + unaff_x25 * 0x178;
                    *(ulong *)(lVar16 + 0x68) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x68) >> 0x20),
                                  fVar35 + (float)*(undefined8 *)(lVar16 + 0x68));
                    *(float *)(lVar16 + 0x70) = fVar34 + *(float *)(lVar16 + 0x70);
                    *(ulong *)(lVar16 + 0x90) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x90) >> 0x20),
                                  fVar35 + (float)*(undefined8 *)(lVar16 + 0x90));
                    *(float *)(lVar16 + 0x98) = fVar34 + *(float *)(lVar16 + 0x98);
                    *(ulong *)(lVar16 + 0xb8) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar16 + 0xb8) >> 0x20),
                                  fVar35 + (float)*(undefined8 *)(lVar16 + 0xb8));
                    *(float *)(lVar16 + 0xc0) = fVar34 + *(float *)(lVar16 + 0xc0);
                    *(ulong *)(lVar16 + 0xe0) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar16 + 0xe0) >> 0x20),
                                  fVar35 + (float)*(undefined8 *)(lVar16 + 0xe0));
                    *(float *)(lVar16 + 0xe8) = fVar34 + *(float *)(lVar16 + 0xe8);
                    goto LAB_05bd870c;
                  }
                  if (((int)unaff_w21 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
                    if (unaff_w24 < uVar10) {
                      if (*(int *)(unaff_x29 + unaff_x25 * 0x178 + 0x60) == in_stack_00000030._4_4_)
                      {
                        lVar16 = unaff_x29 + unaff_x25 * 0x178;
                        *(ulong *)(lVar16 + 0x68) =
                             CONCAT44(in_stack_00000130 +
                                      (float)((ulong)*(undefined8 *)(lVar16 + 0x68) >> 0x20),
                                      fVar35 + (float)*(undefined8 *)(lVar16 + 0x68));
                        *(float *)(lVar16 + 0x70) = fVar34 + *(float *)(lVar16 + 0x70);
                        *(ulong *)(lVar16 + 0x90) =
                             CONCAT44(in_stack_00000130 +
                                      (float)((ulong)*(undefined8 *)(lVar16 + 0x90) >> 0x20),
                                      fVar35 + (float)*(undefined8 *)(lVar16 + 0x90));
                        *(float *)(lVar16 + 0x98) = fVar34 + *(float *)(lVar16 + 0x98);
                        *(ulong *)(lVar16 + 0xb8) =
                             CONCAT44(in_stack_00000130 +
                                      (float)((ulong)*(undefined8 *)(lVar16 + 0xb8) >> 0x20),
                                      fVar35 + (float)*(undefined8 *)(lVar16 + 0xb8));
                        *(float *)(lVar16 + 0xc0) = fVar34 + *(float *)(lVar16 + 0xc0);
                        *(ulong *)(lVar16 + 0xe0) =
                             CONCAT44(in_stack_00000130 +
                                      (float)((ulong)*(undefined8 *)(lVar16 + 0xe0) >> 0x20),
                                      fVar35 + (float)*(undefined8 *)(lVar16 + 0xe0));
                        *(float *)(lVar16 + 0xe8) = fVar34 + *(float *)(lVar16 + 0xe8);
                        goto LAB_05bd870c;
                      }
                      goto LAB_05bd8650;
                    }
                    goto LAB_05bda2b0;
                  }
                }
LAB_05bd8650:
                if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                if (DAT_06b7224b == '\0') {
                  FUN_02d6084c(PTR_DAT_0675e318);
                  DAT_06b7224b = '\x01';
                  uVar10 = *(uint *)(unaff_x29 + 0x18);
                }
                puVar7 = PTR_DAT_0675e318;
                uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8) + 1);
                lVar22 = unaff_x29 + unaff_x25 * 0x178;
                *(undefined8 *)(lVar22 + 0x68) = **(undefined8 **)(*(long *)PTR_DAT_0675e318 + 0xb8)
                ;
                *(undefined4 *)(lVar22 + 0x70) = uVar29;
                if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                lVar22 = unaff_x29 + unaff_x25 * 0x178;
                *(undefined8 *)(lVar22 + 0x90) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                *(undefined4 *)(lVar22 + 0x98) = uVar29;
                uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                *(undefined8 *)(lVar22 + 0xb8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                *(undefined4 *)(lVar22 + 0xc0) = uVar29;
                uVar29 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                *(undefined8 *)(lVar22 + 0xe0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                *(undefined4 *)(lVar22 + 0xe8) = uVar29;
                *(undefined1 *)(lVar16 + 400) = 0;
LAB_05bd870c:
                iVar9 = FUN_06030c10(0);
                *(bool *)((long)unaff_x19 + 0x174) = iVar9 == 1;
                if (iVar11 == 0) {
                  pcVar17 = *(code **)(*unaff_x19 + 0x8d8);
LAB_05bd874c:
                  (*pcVar17)();
                  unaff_x28 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                }
                else {
                  unaff_x28 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if (iVar11 == 1) {
                    pcVar17 = *(code **)(*unaff_x19 + 0x8f8);
                    goto LAB_05bd874c;
                  }
                }
LAB_05bd8760:
                unaff_x26 = 0x60;
                if ((*in_stack_00000178 == 0) ||
                   (lVar16 = *(long *)(*in_stack_00000178 + 0x38), lVar16 == 0)) goto LAB_05bda144;
                if (*(uint *)(lVar16 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
                lVar16 = lVar16 + unaff_x25 * 0x178;
                uVar23 = *(undefined8 *)(lVar16 + 0x114);
                *(undefined8 *)(lVar16 + 0x114) =
                     CONCAT44(in_stack_00000130 + (float)((ulong)uVar23 >> 0x20),
                              fVar35 + (float)uVar23);
                *(float *)(lVar16 + 0x11c) = fVar34 + *(float *)(lVar16 + 0x11c);
                if ((*in_stack_00000178 == 0) ||
                   (lVar16 = *(long *)(*in_stack_00000178 + 0x38), lVar16 == 0)) goto LAB_05bda144;
                if (*(uint *)(lVar16 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
                lVar16 = lVar16 + unaff_x25 * 0x178;
                *(ulong *)(lVar16 + 0x108) =
                     CONCAT44(in_stack_00000130 +
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x108) >> 0x20),
                              fVar35 + (float)*(undefined8 *)(lVar16 + 0x108));
                *(float *)(lVar16 + 0x110) = fVar34 + *(float *)(lVar16 + 0x110);
                if ((*in_stack_00000178 == 0) ||
                   (lVar16 = *(long *)(*in_stack_00000178 + 0x38), lVar16 == 0)) goto LAB_05bda144;
                if (*(uint *)(lVar16 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
                lVar16 = lVar16 + unaff_x25 * 0x178;
                *(ulong *)(lVar16 + 0x120) =
                     CONCAT44(in_stack_00000130 +
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x120) >> 0x20),
                              fVar35 + (float)*(undefined8 *)(lVar16 + 0x120));
                *(float *)(lVar16 + 0x128) = fVar34 + *(float *)(lVar16 + 0x128);
                if ((*in_stack_00000178 == 0) ||
                   (lVar16 = *(long *)(*in_stack_00000178 + 0x38), lVar16 == 0)) goto LAB_05bda144;
                if (*(uint *)(lVar16 + 0x18) <= unaff_w24) goto LAB_05bda2b0;
                lVar16 = lVar16 + unaff_x25 * 0x178;
                *(float *)(lVar16 + 300) = fVar35 + *(float *)(lVar16 + 300);
                *(ulong *)(lVar16 + 0x130) =
                     CONCAT44(fVar34 + (float)((ulong)*(undefined8 *)(lVar16 + 0x130) >> 0x20),
                              in_stack_00000130 + (float)*(undefined8 *)(lVar16 + 0x130));
                lVar16 = *in_stack_00000178;
                if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x38), lVar22 == 0))
                goto LAB_05bda144;
                uVar10 = *(uint *)(lVar22 + 0x18);
                if (uVar10 <= unaff_w24) goto LAB_05bda2b0;
                lVar21 = lVar22 + unaff_x25 * 0x178;
                *(float *)(lVar21 + 0x148) = in_stack_00000130 + *(float *)(lVar21 + 0x148);
                *(ulong *)(lVar21 + 0x138) =
                     CONCAT44(fVar35 + (float)((ulong)*(undefined8 *)(lVar21 + 0x138) >> 0x20),
                              fVar35 + (float)*(undefined8 *)(lVar21 + 0x138));
                *(ulong *)(lVar21 + 0x140) =
                     CONCAT44(in_stack_00000130 +
                              (float)((ulong)*(undefined8 *)(lVar21 + 0x140) >> 0x20),
                              in_stack_00000130 + (float)*(undefined8 *)(lVar21 + 0x140));
                if (unaff_w21 == uVar24) {
                  uVar10 = *in_stack_00000180 - 1;
                  if (unaff_w24 == uVar10) goto LAB_05bd8970;
                }
                else {
                  lVar16 = *(long *)(lVar16 + 0x50);
                  if (lVar16 == 0) goto LAB_05bda144;
                  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_05bda2b0;
                  lVar21 = (long)(int)uVar24;
                  lVar18 = lVar16 + lVar21 * 0x60;
                  fVar26 = in_stack_00000130 + *(float *)(lVar18 + 0x58);
                  *(ulong *)(lVar18 + 0x50) =
                       CONCAT44(in_stack_00000130 +
                                (float)((ulong)*(undefined8 *)(lVar18 + 0x50) >> 0x20),
                                in_stack_00000130 + (float)*(undefined8 *)(lVar18 + 0x50));
                  *(float *)(lVar18 + 0x58) = fVar26;
                  *(float *)(lVar18 + 0x5c) = fVar35 + *(float *)(lVar18 + 0x5c);
                  if (uVar10 <= *(uint *)(lVar18 + 0x38)) goto LAB_05bda2b0;
                  uVar29 = *(undefined4 *)
                            (lVar22 + (long)(int)*(uint *)(lVar18 + 0x38) * 0x178 + 0x114);
                  lVar16 = lVar16 + lVar21 * 0x60;
                  *(float *)(lVar16 + 0x74) = fVar26;
                  *(undefined4 *)(lVar16 + 0x70) = uVar29;
                  lVar16 = *in_stack_00000178;
                  if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x50), lVar22 == 0))
                  goto LAB_05bda144;
                  if (*(uint *)(lVar22 + 0x18) <= uVar24) goto LAB_05bda2b0;
                  lVar16 = *(long *)(lVar16 + 0x38);
                  if (lVar16 == 0) goto LAB_05bda144;
                  uVar10 = *(uint *)(lVar22 + lVar21 * 0x60 + 0x44);
                  if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05bda2b0;
                  lVar22 = lVar22 + lVar21 * 0x60;
                  *(undefined4 *)(lVar22 + 0x78) =
                       *(undefined4 *)(lVar16 + (long)(int)uVar10 * 0x178 + 0x120);
                  *(undefined4 *)(lVar22 + 0x7c) = *(undefined4 *)(lVar22 + 0x50);
                  uVar10 = *in_stack_00000180 - 1;
LAB_05bd8970:
                  if (unaff_w24 == uVar10) {
                    lVar16 = *in_stack_00000178;
                    if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x50), lVar22 == 0))
                    goto LAB_05bda144;
                    if (*(uint *)(lVar22 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
                    lVar21 = lVar22 + in_stack_00000150 * 0x60;
                    fVar26 = in_stack_00000130 + *(float *)(lVar21 + 0x58);
                    *(ulong *)(lVar21 + 0x50) =
                         CONCAT44(in_stack_00000130 +
                                  (float)((ulong)*(undefined8 *)(lVar21 + 0x50) >> 0x20),
                                  in_stack_00000130 + (float)*(undefined8 *)(lVar21 + 0x50));
                    *(float *)(lVar21 + 0x58) = fVar26;
                    *(float *)(lVar21 + 0x5c) = fVar35 + *(float *)(lVar21 + 0x5c);
                    lVar16 = *(long *)(lVar16 + 0x38);
                    if (lVar16 == 0) goto LAB_05bda144;
                    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(lVar21 + 0x38)) goto LAB_05bda2b0;
                    uVar29 = *(undefined4 *)
                              (lVar16 + (long)(int)*(uint *)(lVar21 + 0x38) * 0x178 + 0x114);
                    lVar22 = lVar22 + in_stack_00000150 * 0x60;
                    *(float *)(lVar22 + 0x74) = fVar26;
                    *(undefined4 *)(lVar22 + 0x70) = uVar29;
                    lVar16 = *in_stack_00000178;
                    if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x50), lVar22 == 0))
                    goto LAB_05bda144;
                    if (*(uint *)(lVar22 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
                    lVar16 = *(long *)(lVar16 + 0x38);
                    if (lVar16 == 0) goto LAB_05bda144;
                    uVar10 = *(uint *)(lVar22 + in_stack_00000150 * 0x60 + 0x44);
                    if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05bda2b0;
                    lVar22 = lVar22 + in_stack_00000150 * 0x60;
                    *(undefined4 *)(lVar22 + 0x78) =
                         *(undefined4 *)(lVar16 + (long)(int)uVar10 * 0x178 + 0x120);
                    *(undefined4 *)(lVar22 + 0x7c) = *(undefined4 *)(lVar22 + 0x50);
                  }
                }
                if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar12 = FUN_04f83944(in_stack_00000170,0);
                in_stack_00000158 = unaff_w23;
                if (((((uVar12 & 1) == 0) && (1 < (int)in_stack_00000170 - 0x2010U)) &&
                    (in_stack_00000170 != 2.42425e-43)) && (in_stack_00000170 != 6.30584e-44)) {
                  if (!bVar6) {
                    unaff_x27 = in_stack_00000178;
                    if (unaff_w23 == 1) {
                      if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar10 = FUN_04f83894(in_stack_00000170,0);
                      if ((in_stack_00000170 != 1.14949e-41) &&
                         (((uStack0000000000000118 | uVar10 ^ 1) & 1) == 0)) {
                        in_ZR = *in_stack_00000180 == 1;
                        goto code_r0x05bd8df0;
                      }
                      goto LAB_05bd8df4;
                    }
LAB_05bd9630:
                    bVar6 = false;
                    uVar10 = unaff_w24;
                    uVar24 = unaff_w21;
                    unaff_w24 = unaff_w23;
                    goto LAB_05bd8b98;
                  }
                  unaff_x27 = in_stack_00000178;
                  if (((unaff_w23 == 1) ||
                      ((int)(*(uint *)(unaff_x29 + 0x18) - 1) <= (int)unaff_w24)) ||
                     ((*in_stack_00000180 <= (int)unaff_w24 ||
                      ((in_stack_00000170 != 1.15145e-41 && (in_stack_00000170 != 5.46506e-44))))))
                  goto LAB_05bd8df4;
                  if (*(uint *)(unaff_x29 + 0x18) <= unaff_w24 - 1) goto LAB_05bda2b0;
                  uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x430);
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar12 = FUN_04f83944(uVar4,0);
                  if ((uVar12 & 1) == 0) goto LAB_05bd8df4;
                  if (*(uint *)(unaff_x29 + 0x18) <= unaff_w23) goto LAB_05bda2b0;
                  uVar4 = *(undefined2 *)(unaff_x29 + in_stack_00000160 + -0x140);
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x88) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar12 = FUN_04f83944(uVar4,0);
                  unaff_x28 = (long *)
                              Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                  if ((uVar12 & 1) == 0) goto LAB_05bd8df4;
                }
                else {
                  if (!bVar6) {
                    in_stack_00000148 = unaff_w24;
                  }
                  if (unaff_w24 == *in_stack_00000180 - 1U) {
                    lVar16 = *in_stack_00000178;
                    if (lVar16 == 0) goto LAB_05bda144;
                    lVar22 = *(long *)(lVar16 + 0x40);
                    if (lVar22 == 0) goto LAB_05bda144;
                    uVar10 = *(uint *)(lVar16 + 0x24);
                    iVar11 = *(int *)(lVar22 + 0x18);
                    if (iVar11 < (int)(uVar10 + 1)) {
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_set_Item__
                                  + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_03562f88((long *)(lVar16 + 0x40),iVar11 + 1,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<ulong>_get_Item__
                                  );
                      lVar16 = *in_stack_00000178;
                      if (lVar16 == 0) goto LAB_05bda144;
                    }
                    unaff_x28 = (long *)
                                Method_UnityEngine_InputSystem_InputControlList<InputControl>_Add__;
                    lVar16 = *(long *)(lVar16 + 0x40);
                    if (lVar16 == 0) goto LAB_05bda144;
                    if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_05bda2b0;
                    lVar16 = lVar16 + (long)(int)uVar10 * 0x18;
                    *(long **)(lVar16 + 0x20) = unaff_x19;
                    *(uint *)(lVar16 + 0x28) = in_stack_00000148;
                    *(uint *)(lVar16 + 0x2c) = unaff_w24;
                    *(uint *)(lVar16 + 0x30) = unaff_w23 - in_stack_00000148;
                    thunk_FUN_02dd37b4();
                    lVar16 = unaff_x19[0x74];
                    if (lVar16 == 0) goto LAB_05bda144;
                    lVar22 = *(long *)(lVar16 + 0x50);
                    *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + 1;
                    if (lVar22 == 0) goto LAB_05bda144;
                    if (*(uint *)(lVar22 + 0x18) <= unaff_w21) goto LAB_05bda2b0;
                    lVar22 = lVar22 + in_stack_00000150 * 0x60;
                    in_stack_000000c8 = in_stack_000000c8 + 1;
                    *(int *)(lVar22 + 0x34) = *(int *)(lVar22 + 0x34) + 1;
                  }
                }
                unaff_x22 = 0x178;
                bVar6 = true;
                unaff_x27 = in_stack_00000178;
                uVar10 = unaff_w24;
                uVar24 = unaff_w21;
                unaff_w24 = unaff_w23;
                goto LAB_05bd8b98;
              }
              goto LAB_05bda2b0;
            }
          }
          goto LAB_05bda144;
        }
        goto LAB_05bda2b0;
      }
    }
  }
  goto LAB_05bda144;
  while( true ) {
    lVar16 = *unaff_x27;
    lVar22 = lVar22 + 1;
    lVar21 = lVar21 + 0x50;
    if (lVar16 == 0) break;
LAB_05bd9ec8:
    uVar12 = lVar22 + 1;
    if ((long)*(int *)(lVar16 + 0x34) <= (long)uVar12) {
LAB_05bd7728:
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_InputControlList<InputControl>_Clear__ +
                  0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05bf40c4();
      return;
    }
    lVar16 = *(long *)(lVar16 + 0x60);
    if (lVar16 == 0) break;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_05bda2b0;
    FUN_05c3fc00(lVar16 + lVar21 + 0x70,0);
    lVar16 = unaff_x19[0xe4];
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_05bda2b0;
    uVar23 = *(undefined8 *)(lVar16 + lVar22 * 8 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar13 = UnityEngine_Font__add_textureRebuilt(uVar23,0,0);
    if ((uVar13 & 1) == 0) {
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((*unaff_x27 == 0) || (lVar16 = *(long *)(*unaff_x27 + 0x60), lVar16 == 0)) break;
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar12) {
LAB_05bda2b0:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        FUN_05c3fd34(lVar16 + lVar21 + 0x70,1,0);
      }
      lVar16 = unaff_x19[0xe4];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_05c48e08(lVar16,0);
      if ((*unaff_x27 == 0) || (lVar18 = *(long *)(*unaff_x27 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar16 == 0) break;
      FUN_06040930(lVar16,*(undefined8 *)(lVar18 + lVar21 + 0x80),0);
      lVar16 = unaff_x19[0xe4];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_05c48e08(lVar16,0);
      if ((*unaff_x27 == 0) || (lVar18 = *(long *)(*unaff_x27 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar16 == 0) break;
      FUN_06041994(lVar16,0,*(undefined8 *)(lVar18 + lVar21 + 0x98),0);
      lVar16 = unaff_x19[0xe4];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_05c48e08(lVar16,0);
      if ((*unaff_x27 == 0) || (lVar18 = *(long *)(*unaff_x27 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar16 == 0) break;
      FUN_06040b94(lVar16,*(undefined8 *)(lVar18 + lVar21 + 0xa0),0);
      lVar16 = unaff_x19[0xe4];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if (lVar16 == 0) break;
      lVar16 = FUN_05c48e08(lVar16,0);
      if ((*unaff_x27 == 0) || (lVar18 = *(long *)(*unaff_x27 + 0x60), lVar18 == 0)) break;
      if (*(uint *)(lVar18 + 0x18) <= uVar12) goto LAB_05bda2b0;
      if (lVar16 == 0) break;
      FUN_06040ca8(lVar16,*(undefined8 *)(lVar18 + lVar21 + 0xa8),0);
      lVar16 = unaff_x19[0xe4];
      if (lVar16 == 0) break;
      if (*(uint *)(lVar16 + 0x18) <= uVar12) goto LAB_05bda2b0;
      lVar16 = *(long *)(lVar16 + lVar22 * 8 + 0x28);
      if ((lVar16 == 0) || (lVar16 = FUN_05c48e08(lVar16,0), lVar16 == 0)) break;
      FUN_06042d74(lVar16,0);
    }
  }
LAB_05bda144:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


