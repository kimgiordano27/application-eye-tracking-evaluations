/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportingEventArgs$$get_teleportRequest
ENTRY_POINT: 06130d94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_11;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEventArgs__get_teleportRequest
               (undefined8 *param_1,undefined1 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uVar23;
  char cVar24;
  long *plVar25;
  undefined8 *puVar26;
  code *pcVar27;
  long lVar28;
  float *pfVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long *unaff_x19;
  uint uVar35;
  long unaff_x20;
  ulong uVar36;
  int *piVar37;
  uint unaff_w21;
  uint unaff_w22;
  uint unaff_w23;
  undefined8 *unaff_x25;
  ulong uVar38;
  uint uVar39;
  long *plVar40;
  long *plVar41;
  long lVar42;
  ulong uVar43;
  int unaff_w29;
  ushort uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  float fVar66;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000018;
  int iStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float in_stack_00000030;
  undefined8 in_stack_00000040;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  int iStack0000000000000058;
  uint uStack000000000000005c;
  int iStack0000000000000060;
  undefined8 in_stack_00000068;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  uint uStack000000000000007c;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack000000000000009c;
  float *in_stack_000000a0;
  ulong in_stack_000000a8;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  float in_stack_000000e0;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  float in_stack_000000f8;
  float in_stack_00000100;
  float fStack0000000000000104;
  float fStack000000000000011c;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float in_stack_00000128;
  undefined8 in_stack_00000130;
  float in_stack_00000138;
  float fStack000000000000013c;
  float fStack0000000000000140;
  long *in_stack_00000160;
  undefined8 in_stack_00000168;
  float fStack0000000000000170;
  float fStack0000000000000174;
  uint in_stack_00000180;
  float fStack0000000000000190;
  undefined8 *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float fStack00000000000001b0;
  float fStack00000000000001b4;
  float in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  float in_stack_000001d0;
  float in_stack_0000112c;
  float in_stack_00001138;
  float in_stack_00001144;
  float in_stack_00001150;
  float in_stack_0000115c;
  float in_stack_00001168;
  uint in_stack_0000124c;
  uint in_stack_00001278;
  undefined4 in_stack_00001280;
  float in_stack_00001284;
  float in_stack_00001288;
  float in_stack_0000128c;
  float in_stack_00001290;
  ulong in_stack_00001298;
  char in_stack_000012a4;
  float in_stack_000012a8;
  uint in_stack_000012ac;
  undefined8 in_stack_000012b0;
  undefined8 in_stack_000012b8;
  undefined4 in_stack_000012c0;
  undefined4 in_stack_000012c4;
  undefined8 in_stack_000012c8;
  undefined8 in_stack_000012d0;
  undefined8 in_stack_000012d8;
  undefined8 in_stack_000012e0;
  undefined8 in_stack_000012e8;
  
  uVar38 = _uStack0000000000000070;
code_r0x06130d94:
  uVar14 = *(uint *)(param_1 + 7);
  uVar45 = FUN_063f141c(param_2 + 0x250,0);
  if (*(uint *)(unaff_x20 + 0x18) <= uVar14) goto LAB_0613719c;
  *(undefined4 *)(unaff_x20 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x154) = uVar45;
  if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar21 = FUN_061a92c4(in_stack_000012ac,0);
  plVar40 = (long *)PTR_DAT_069feab8;
  uVar14 = *(uint *)(in_stack_000001a0 + 7);
  uVar36 = (ulong)uVar14;
  if ((uVar21 & 1) == 0) {
    if (0 < (int)uVar14) {
      if ((((uVar38 & 0x100000000) == 0) ||
          (uVar15 = *(uint *)((long)unaff_x19 + 0x32c), uVar15 == 0x80000000)) ||
         (uVar15 != uVar14 - 1)) {
        if ((_uStack0000000000000048 & 1) == 0) {
          bVar11 = false;
        }
        else {
          lVar42 = uVar36 * unaff_w23 + 0x144;
          uVar43 = uVar36;
          do {
            uVar43 = uVar43 - 1;
            iVar16 = (int)uVar36;
            uVar14 = iVar16 - 1;
            uVar36 = (ulong)uVar14;
            if ((iVar16 < 1) || (uVar43 == *(uint *)((long)unaff_x19 + 0x32c))) {
              bVar11 = false;
              goto LAB_06131650;
            }
            if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
            goto LAB_0613705c;
            if (*(uint *)(lVar28 + 0x18) <= uVar43) goto LAB_0613719c;
            lVar28 = *(long *)(lVar28 + lVar42 + -0x28c);
            if ((lVar28 == 0) || (lVar28 = *(long *)(lVar28 + 0x20), lVar28 == 0))
            goto LAB_0613705c;
            uVar15 = FUN_063ed08c(lVar28,0);
            if ((*in_stack_00000160 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)
                 ) || (lVar28 = *(long *)(lVar28 + 0x50), lVar28 == 0)))) goto LAB_0613705c;
            uVar22 = FUN_04f8f4b4(lVar28,uVar15 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                  &stack0x00001140,
                                  *(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_2__
                                 );
            lVar42 = lVar42 + -0x178;
          } while ((uVar22 & 1) == 0);
          if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0))
          goto LAB_0613705c;
          if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_0613719c;
          FUN_063f1404(((*(float *)(lVar28 + lVar42 + -0xc) - *(float *)(unaff_x19 + 0xcb)) /
                        unaff_s11 + in_stack_00001144) - in_stack_00001150,in_stack_00001144,
                       in_stack_00001150,&stack0x00001250,0);
          FUN_063f1414(&stack0x00001250,0);
          bVar11 = true;
          in_stack_000000f8 = 0.0;
        }
LAB_06131650:
        plVar40 = (long *)PTR_DAT_069feab8;
        if ((uVar38 & 0x100000000) != 0) {
          uVar14 = *(uint *)((long)unaff_x19 + 0x32c);
          if (uVar14 == 0x80000000) {
            bVar11 = true;
          }
          if (!bVar11) {
            if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
            goto LAB_0613705c;
            if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_0613719c;
            lVar42 = *(long *)(lVar42 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x30);
            if ((lVar42 == 0) || (lVar42 = *(long *)(lVar42 + 0x20), lVar42 == 0))
            goto LAB_0613705c;
            uVar14 = FUN_063ed08c(lVar42,0);
            if ((*in_stack_00000160 == 0) ||
               (((unaff_x19[0x20] == 0 || (lVar42 = *(long *)(unaff_x19[0x20] + 0x178), lVar42 == 0)
                 ) || (lVar42 = *(long *)(lVar42 + 0x48), lVar42 == 0)))) goto LAB_0613705c;
            uVar36 = FUN_04f88174(lVar42,uVar14 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                  &stack0x00001128,
                                  *(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_1__
                                 );
            if ((uVar36 & 1) != 0) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0)) goto LAB_0613705c;
              if (*(uint *)((long)unaff_x19 + 0x32c) < *(uint *)(lVar42 + 0x18)) {
                FUN_063f1404((in_stack_0000112c +
                             (*(float *)(lVar42 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                                  (long)(int)unaff_w23 + 0x138) -
                             *(float *)(unaff_x19 + 0xcb)) / unaff_s11) - in_stack_00001138,
                             in_stack_0000112c,in_stack_00001138,&stack0x00001250,0);
                goto LAB_0613174c;
              }
              goto LAB_0613719c;
            }
          }
        }
      }
      else {
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
        goto LAB_0613705c;
        if (*(uint *)(lVar42 + 0x18) <= uVar15) goto LAB_0613719c;
        lVar42 = *(long *)(lVar42 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x30);
        if ((lVar42 == 0) || (lVar42 = *(long *)(lVar42 + 0x20), lVar42 == 0)) goto LAB_0613705c;
        uVar14 = FUN_063ed08c(lVar42,0);
        if ((*in_stack_00000160 == 0) ||
           (((unaff_x19[0x20] == 0 || (lVar42 = *(long *)(unaff_x19[0x20] + 0x178), lVar42 == 0)) ||
            (lVar42 = *(long *)(lVar42 + 0x48), lVar42 == 0)))) goto LAB_0613705c;
        uVar36 = FUN_04f88174(lVar42,uVar14 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                              &stack0x00001158,
                              *(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_1__
                             );
        if ((uVar36 & 1) != 0) {
          if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
          goto LAB_0613705c;
          if (*(uint *)(lVar42 + 0x18) <= *(uint *)((long)unaff_x19 + 0x32c)) goto LAB_0613719c;
          FUN_063f1404((in_stack_0000115c +
                       (*(float *)(lVar42 + (long)(int)*(uint *)((long)unaff_x19 + 0x32c) *
                                            (long)(int)unaff_w23 + 0x138) -
                       *(float *)(unaff_x19 + 0xcb)) / unaff_s11) - in_stack_00001168,
                       in_stack_0000115c,in_stack_00001168,&stack0x00001250,0);
LAB_0613174c:
          FUN_063f1414(&stack0x00001250,0);
          in_stack_000000f8 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)((long)unaff_x19 + 0x32c) = uVar14;
  }
  fVar46 = (float)UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps(&stack0x00001250,0);
  fVar47 = (float)UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps(&stack0x00001250,0);
  if ((char)unaff_x19[0x1e] != '\0') {
    fVar62 = *(float *)(unaff_x19 + 0xcb);
    fVar48 = (float)FUN_063ecee4(&stack0x00001260,0);
    fVar62 = fVar62 - unaff_s11 * fVar48 * (unaff_s14 - *(float *)(unaff_x19 + 0x60));
    *(float *)(unaff_x19 + 0xcb) = fVar62;
    if ((in_stack_00000180 != 0) || (in_stack_000012ac == 0x200b)) {
      *(float *)(unaff_x19 + 0xcb) = fVar62 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
    }
  }
  fVar62 = *(float *)(unaff_x19 + 0x5b);
  fVar48 = 0.0;
  if (fVar62 != 0.0) {
    if (((*(char *)((long)unaff_x19 + 0x2dc) == '\0') || (0x3a < in_stack_000012ac)) ||
       (fVar48 = 0.25, (1L << ((ulong)in_stack_000012ac & 0x3f) & 0x400500000000000U) == 0)) {
      fVar48 = 0.5;
    }
    fVar49 = (float)FUN_063ecec4(&stack0x00001260,0);
    fVar50 = (float)FUN_063eced4(&stack0x00001260,0);
    fVar48 = (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
             (fVar62 * fVar48 - unaff_s11 * (fVar49 * 0.5 + fVar50));
    *(float *)(unaff_x19 + 0xcb) = fVar48 + *(float *)(unaff_x19 + 0xcb);
  }
  if (((unaff_w22 == 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x284) & 1) != 0)) {
    lVar42 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar36 = FUN_0634eb94(lVar42,0,0);
    fVar49 = 0.0;
    if ((uVar36 & 1) != 0) {
      lVar42 = unaff_x19[0x23];
      if (*(int *)(*plVar40 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar42 == 0) goto LAB_0613705c;
      uVar36 = FUN_0631f7c0(lVar42,*(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0x6c),0);
      if ((uVar36 & 1) != 0) {
        lVar42 = unaff_x19[0x23];
        if (*(int *)(*plVar40 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar42 == 0) goto LAB_0613705c;
        fVar62 = (float)thunk_FUN_06321abc(lVar42,*(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0x6c)
                                           ,0);
        if ((unaff_x19[0x20] == 0) || (unaff_x19[0x23] == 0)) goto LAB_0613705c;
        fVar50 = *(float *)(unaff_x19[0x20] + 0x1a8);
        fVar49 = (float)thunk_FUN_06321abc(unaff_x19[0x23],
                                           *(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0xe4),0);
        fVar49 = fVar49 * fVar62 * fVar50 * 0.25;
        if (fVar62 < unaff_s13 + fVar49) {
          unaff_s13 = fVar62 - fVar49;
        }
      }
    }
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    fStack00000000000000f0 = *(float *)(unaff_x19[0x20] + 0x1ac);
  }
  else {
    lVar42 = unaff_x19[0x23];
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar36 = FUN_0634eb94(lVar42,0,0);
    fStack00000000000000f0 = 0.0;
    if ((uVar36 & 1) != 0) {
      lVar42 = unaff_x19[0x23];
      if (*(int *)(*plVar40 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar42 == 0) goto LAB_0613705c;
      uVar36 = FUN_0631f7c0(lVar42,*(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0x6c),0);
      if ((uVar36 & 1) != 0) {
        lVar42 = unaff_x19[0x23];
        if (*(int *)(*plVar40 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar42 == 0) goto LAB_0613705c;
        uVar36 = FUN_0631f7c0(lVar42,*(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0xe4),0);
        if ((uVar36 & 1) != 0) {
          lVar42 = unaff_x19[0x23];
          if (*(int *)(*plVar40 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar42 != 0) {
            fVar62 = (float)thunk_FUN_06321abc(lVar42,*(undefined4 *)
                                                       (*(long *)(*plVar40 + 0xb8) + 0x6c),0);
            if ((unaff_x19[0x20] != 0) && (unaff_x19[0x23] != 0)) {
              fVar50 = *(float *)(unaff_x19[0x20] + 0x1a0);
              fVar49 = (float)thunk_FUN_06321abc(unaff_x19[0x23],
                                                 *(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0xe4),
                                                 0);
              fVar49 = fVar49 * fVar62 * fVar50 * 0.25;
              if (fVar62 < unaff_s13 + fVar49) {
                unaff_s13 = fVar62 - fVar49;
              }
              goto LAB_06131780;
            }
          }
          goto LAB_0613705c;
        }
      }
    }
    fVar49 = 0.0;
  }
LAB_06131780:
  fVar63 = *(float *)(unaff_x19 + 0xcb);
  fVar62 = (float)FUN_063eced4(&stack0x00001260,0);
  fVar66 = *(float *)((long)unaff_x19 + 0x47c);
  fVar50 = (float)FUN_063f13fc(&stack0x00001250,0);
  fVar63 = fVar63 + (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
                    unaff_s11 * (fVar50 + ((fVar62 * fVar66 - unaff_s13) - fVar49));
  fVar62 = (float)FUN_063ecedc(&stack0x00001260,0);
  fVar50 = (float)UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps(&stack0x00001250,0);
  fStack0000000000000170 =
       *(float *)((long)unaff_x19 + 0x634) +
       ((in_stack_00000168._4_4_ + unaff_s11 * (unaff_s13 + fVar62 + fVar50)) -
       *(float *)((long)unaff_x19 + 0x4ec));
  fVar62 = (float)FUN_063ececc(&stack0x00001260,0);
  fStack0000000000000140 = fStack0000000000000170 - unaff_s11 * (unaff_s13 + unaff_s13 + fVar62);
  fVar62 = (float)FUN_063ecec4(&stack0x00001260,0);
  fVar62 = fVar63 + (unaff_s14 - *(float *)(unaff_x19 + 0x60)) *
                    unaff_s11 *
                    (fVar49 + fVar49 +
                    unaff_s13 + unaff_s13 + fVar62 * *(float *)((long)unaff_x19 + 0x47c));
  fVar50 = fVar63;
  fVar66 = fVar62;
  if (((*(int *)((long)unaff_x19 + 0x65c) == 0) && (unaff_w22 == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x284) >> 1 & 1) != 0)) {
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    lVar42 = unaff_x19[0xc1];
    fVar50 = (float)FUN_063ecc10(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    fVar51 = (float)FUN_063ecc30(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    fVar59 = *(float *)((long)unaff_x19 + 0x43c);
    fVar60 = *(float *)((long)unaff_x19 + 0x634);
    fVar66 = (float)(int)lVar42 * fStack0000000000000050;
    fVar58 = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
    fVar58 = fVar58 * fVar59 * (fVar50 - (fVar51 + fVar60)) * 0.5;
    fVar50 = (float)FUN_063ecedc(&stack0x00001260,0);
    fVar60 = fVar66 * unaff_s11 * ((fVar49 + unaff_s13 + fVar50) - fVar58);
    fVar51 = (float)FUN_063ecedc(&stack0x00001260,0);
    fVar59 = (float)FUN_063ececc(&stack0x00001260,0);
    fStack0000000000000170 = fStack0000000000000170 + 0.0;
    fStack0000000000000140 = fStack0000000000000140 + 0.0;
    fVar50 = fVar63 + fVar60;
    fVar66 = fVar66 * unaff_s11 * ((((fVar51 - fVar59) - unaff_s13) - fVar49) - fVar58);
    fVar63 = fVar63 + fVar66;
    fVar66 = fVar62 + fVar66;
    fVar62 = fVar62 + fVar60;
  }
  uVar65 = *in_stack_000001a0;
  uVar64 = in_stack_000001a0[1];
  if (DAT_06db4d49 == '\0') {
    FUN_02d965b8(PTR_DAT_069fc390);
    DAT_06db4d49 = '\x01';
  }
  uVar52 = **(undefined8 **)(*(long *)PTR_DAT_069fc390 + 0xb8);
  uVar55 = (*(undefined8 **)(*(long *)PTR_DAT_069fc390 + 0xb8))[1];
  if (DAT_010fd090 <
      (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar55 >> 0x20) +
      (float)uVar64 * (float)uVar55 +
      (float)uVar65 * (float)uVar52 +
      (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar52 >> 0x20)) {
    fVar49 = 0.0;
    auVar53._4_12_ = SUB1612(ZEXT816(0),4);
    auVar53._0_4_ = fStack0000000000000140;
    uVar65 = auVar53._0_8_;
    uVar36 = (ulong)(uint)fStack0000000000000170;
    uVar64 = uVar65;
  }
  else {
    FUN_0633d1c8(&stack0x000012b0,*(undefined4 *)((long)unaff_x19 + 0x46c),(int)unaff_x19[0x8e],
                 *(undefined4 *)((long)unaff_x19 + 0x474),(int)unaff_x19[0x8f],0);
    fVar66 = (fVar62 + fVar63) * 0.5;
    fVar58 = (fStack0000000000000140 + fStack0000000000000170) * 0.5;
    unaff_x25[0x16b] = in_stack_000012c8;
    unaff_x25[0x16a] = CONCAT44(in_stack_000012c4,in_stack_000012c0);
    unaff_x25[0x169] = in_stack_000012b8;
    unaff_x25[0x168] = in_stack_000012b0;
    unaff_x25[0x16d] = in_stack_000012d8;
    unaff_x25[0x16c] = in_stack_000012d0;
    fVar62 = 0.0;
    unaff_x25[0x16f] = in_stack_000012e8;
    unaff_x25[0x16e] = in_stack_000012e0;
    auVar53 = ZEXT416((uint)(fStack0000000000000170 - fVar58));
    fVar50 = (float)FUN_0633d0c8(&stack0x000010e0,0);
    fVar50 = fVar66 + fVar50;
    fVar51 = 0.0;
    uVar36 = CONCAT44(fVar62 + 0.0,fVar58 + auVar53._0_4_);
    auVar53 = ZEXT416((uint)(fStack0000000000000140 - fVar58));
    fVar63 = (float)FUN_0633d0c8(&stack0x000010e0,0);
    fVar63 = fVar66 + fVar63;
    fVar49 = 0.0;
    uVar65 = CONCAT44(fVar51 + 0.0,fVar58 + auVar53._0_4_);
    auVar53 = ZEXT416((uint)(fStack0000000000000170 - fVar58));
    fVar62 = (float)FUN_0633d0c8(&stack0x000010e0,0);
    fVar62 = fVar66 + fVar62;
    fVar59 = 0.0;
    fStack0000000000000170 = fVar58 + auVar53._0_4_;
    fVar49 = fVar49 + 0.0;
    auVar53 = ZEXT416((uint)(fStack0000000000000140 - fVar58));
    fVar51 = (float)FUN_0633d0c8(&stack0x000010e0,0);
    fVar66 = fVar66 + fVar51;
    uVar64 = CONCAT44(fVar59 + 0.0,fVar58 + auVar53._0_4_);
  }
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar42 + 0x114) = fVar63;
  *(undefined8 *)(lVar42 + 0x118) = uVar65;
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar42 + 0x108) = fVar50;
  *(ulong *)(lVar42 + 0x10c) = uVar36;
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar42 + 0x120) = fVar62;
  *(ulong *)(lVar42 + 0x124) = CONCAT44(fVar49,fStack0000000000000170);
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(float *)(lVar42 + 300) = fVar66;
  *(undefined8 *)(lVar42 + 0x130) = uVar64;
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
  fVar50 = *(float *)(unaff_x19 + 0xcb);
  fVar49 = (float)FUN_063f13fc(&stack0x00001250,0);
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_0613719c;
  *(float *)(lVar42 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x138) =
       fVar50 + unaff_s11 * fVar49;
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  uVar14 = *(uint *)((long)unaff_x19 + 0x4a4);
  fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
  fVar66 = *(float *)((long)unaff_x19 + 0x634);
  fVar49 = (float)UnityEngine_UIElements_UIR_CommandList__ApplyBatchProps(&stack0x00001250,0);
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_0613719c;
  *(float *)(lVar42 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x144) =
       (in_stack_00000168._4_4_ - fVar50) + fVar66 + unaff_s11 * fVar49;
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  uVar14 = *(uint *)(in_stack_000001a0 + 7);
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_0613719c;
  lVar42 = lVar42 + 0x20;
  *(float *)(lVar42 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x138) =
       (fVar62 - fVar63) / ((float)uVar36 - (float)uVar65);
  fVar46 = unaff_s11 * (in_stack_00000128 + fVar46);
  if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
    fVar46 = fVar46 / in_stack_00000138;
    fVar47 = (unaff_s11 * (fStack0000000000000124 + fVar47)) / in_stack_00000138;
  }
  else {
    fVar47 = unaff_s11 * (fStack0000000000000124 + fVar47);
  }
  fVar62 = *(float *)((long)unaff_x19 + 0x634);
  uVar15 = *(uint *)(unaff_x19 + 0x95);
  if ((in_stack_00000180 == 0) || (uVar14 == uVar15)) {
    fVar46 = fVar46 + fVar62;
    fVar47 = fVar47 + fVar62;
    fVar49 = fVar46;
    fVar50 = fVar47;
    if (fVar62 != 0.0) {
      fVar49 = (fVar46 - fVar62) / *(float *)((long)unaff_x19 + 0x43c);
      fVar50 = (fVar47 - fVar62) / *(float *)((long)unaff_x19 + 0x43c);
      if (fVar49 <= fVar46) {
        fVar49 = fVar46;
      }
      if (fVar47 <= fVar50) {
        fVar50 = fVar47;
      }
    }
    lVar42 = lVar42 + (long)(int)uVar14 * (long)(int)unaff_w23;
    fVar62 = fVar49;
    if (fVar49 <= *(float *)((long)unaff_x19 + 0x4dc)) {
      fVar62 = *(float *)((long)unaff_x19 + 0x4dc);
    }
    fVar66 = fVar50;
    if (*(float *)(unaff_x19 + 0x9c) <= fVar50) {
      fVar66 = *(float *)(unaff_x19 + 0x9c);
    }
    *(float *)((long)unaff_x19 + 0x4dc) = fVar62;
    *(float *)(unaff_x19 + 0x9c) = fVar66;
    *(float *)(lVar42 + 300) = fVar49;
    *(float *)(lVar42 + 0x130) = fVar50;
    fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
    *(float *)(lVar42 + 0x120) = fVar46 - fVar49;
    *(float *)((long)unaff_x19 + 0x4d4) = fVar46 - fVar49;
    *(float *)(lVar42 + 0x128) = fVar47 - fVar49;
    *(float *)(unaff_x19 + 0x9b) = fVar47 - fVar49;
    if (((int)unaff_x19[0x97] == 0) || (*(char *)((long)unaff_x19 + 0x374) != '\0')) {
      *(float *)((long)unaff_x19 + 0x4cc) = fVar62;
      if (unaff_x19[0x20] == 0) goto LAB_0613705c;
      fVar47 = *(float *)(unaff_x19 + 0x9a);
      fVar62 = (float)FUN_063ecc10(unaff_x19[0x20] + 0x28,0);
      in_stack_00000138 = (unaff_s11 * fVar62) / in_stack_00000138;
      if (fVar47 <= in_stack_00000138) {
        fVar47 = in_stack_00000138;
      }
      fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
      *(float *)(unaff_x19 + 0x9a) = fVar47;
    }
    if (fVar49 == 0.0) {
      fVar47 = *(float *)(unaff_x19 + 0x99);
      if (*(float *)(unaff_x19 + 0x99) <= fVar46) {
        fVar47 = fVar46;
      }
      *(float *)(unaff_x19 + 0x99) = fVar47;
    }
  }
  else {
    lVar42 = lVar42 + (long)(int)uVar14 * (long)(int)unaff_w23;
    uVar64 = in_stack_000001a0[0xe];
    *(undefined8 *)(lVar42 + 300) = uVar64;
    fVar49 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar46 = (float)uVar64 - fVar49;
    fVar47 = (float)((ulong)uVar64 >> 0x20) - fVar49;
    *(float *)(lVar42 + 0x120) = fVar46;
    *(float *)(lVar42 + 0x128) = fVar47;
    in_stack_000001a0[0xd] = CONCAT44(fVar47,fVar46);
  }
  lVar42 = unaff_x19[0x74];
  if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0613705c;
  uVar35 = *(uint *)(in_stack_000001a0 + 7);
  if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_0613719c;
  lVar28 = lVar28 + (long)(int)uVar35 * (long)(int)unaff_w23;
  *(undefined1 *)(lVar28 + 400) = 0;
  uVar17 = *(uint *)(unaff_x19 + 0x54);
  if ((((in_stack_000012ac == 9) ||
       ((in_stack_000012ac == 0x200b || in_stack_00000180 != 0 &&
        ((*(uint *)((long)unaff_x19 + 0x304) & 0xfffffffe) == 2)))) ||
      ((in_stack_00000180 == 0 &&
       (((in_stack_000012ac != 3 && (in_stack_000012ac != 0x200b)) && (in_stack_000012ac != 0xad))))
      )) || ((in_stack_000012ac == 0xad && ((uint)fStack0000000000000054 & 1) == 0 ||
             (*(int *)((long)unaff_x19 + 0x65c) == 1)))) {
    *(undefined1 *)(lVar28 + 400) = 1;
    pfVar29 = in_stack_000000a0;
    pfVar32 = _fStack00000000000000d0;
    if (fStack0000000000000190 == (float)unaff_w21) {
      lVar42 = *(long *)(lVar42 + 0x50);
      if (lVar42 == 0) goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
      lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      pfVar32 = (float *)(lVar42 + 100);
      pfVar29 = (float *)(lVar42 + 0x68);
    }
    fVar62 = *pfVar32;
    fVar49 = *pfVar29;
    fVar46 = *(float *)(unaff_x19 + 0x73);
    fVar47 = 0.0;
    fVar50 = *(float *)(unaff_x19 + 0xcb);
    in_stack_00000130._4_4_ = (fStack00000000000000cc - fVar62) - fVar49;
    bVar11 = true;
    if ((fVar46 <= in_stack_00000130._4_4_) && (bVar11 = false, !NAN(fVar46))) {
      bVar11 = fVar46 == -1.0;
    }
    if (!bVar11) {
      in_stack_00000130._4_4_ = fVar46;
    }
    fVar46 = 0.0;
    if ((char)unaff_x19[0x1e] == '\0') {
      fVar46 = (float)FUN_063ecee4(&stack0x00001260,0);
    }
    fVar66 = *(float *)((long)unaff_x19 + 0x4ec);
    if (in_stack_000012ac != 0xad) {
      unaff_s12 = unaff_s11;
    }
    fVar63 = *(float *)(unaff_x19 + 0x60);
    auVar56 = ZEXT416((uint)fVar63);
    if ((0.0 < fVar66) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar47 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    iVar16 = *(int *)(in_stack_000001a0 + 7);
    fVar47 = (*(float *)((long)unaff_x19 + 0x4cc) - (*(float *)(unaff_x19 + 0x9c) - fVar66)) +
             fVar47;
    if (fStack00000000000000dc < fVar47) {
      if (*(int *)((long)unaff_x19 + 0x314) == -1) {
        *(int *)((long)unaff_x19 + 0x314) = iVar16;
      }
      plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
      fVar51 = DAT_010fcf54;
      if ((char)unaff_x19[0x4c] != '\0') {
        if (0.0 < fVar66) {
          fVar66 = *(float *)((long)unaff_x19 + 0x2f4);
          if ((fVar66 < *(float *)(unaff_x19 + 0x5d)) &&
             (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
            fVar46 = *(float *)(unaff_x19 + 0x5d) +
                     ((in_stack_00000018._4_4_ - fVar47) / (float)(int)unaff_x19[0x97]) /
                     fStack0000000000000078;
            if (fVar46 <= fVar66) {
              fVar46 = fVar66;
            }
            goto LAB_06137088;
          }
        }
        fVar47 = *(float *)((long)unaff_x19 + 0x20c);
        fVar66 = *(float *)(unaff_x19 + 0x4f);
        if ((fVar66 < fVar47) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          *(float *)((long)unaff_x19 + 0x264) = fVar47;
          fVar46 = (fVar47 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
          if (fVar46 <= fVar51) {
            fVar46 = fVar51;
          }
          fVar47 = (fVar47 - fVar46) * 20.0 + 0.5;
          fVar46 = DAT_010fd008;
          if (fVar47 != INFINITY) {
            fVar46 = (float)(int)fVar47 / 20.0;
          }
          if (fVar46 <= fVar66) {
            fVar46 = fVar66;
          }
          *(float *)((long)unaff_x19 + 0x20c) = fVar46;
          return;
        }
      }
      iVar19 = (int)unaff_x19[0x62];
      if (iVar19 < 5) {
        if (iVar19 == 1) {
          lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
          if (*(int *)(lVar42 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar42 = *plVar40;
          }
          plVar25 = (long *)PTR_DAT_069fb930;
          lVar28 = *(long *)(lVar42 + 0xb8);
          if (*(int *)(lVar28 + 0x1708) == 0) {
LAB_06132760:
            plVar25 = (long *)PTR_DAT_069fb930;
            in_stack_000001a0[7] = 0;
            in_stack_00001278 = 0xffffffff;
            in_stack_00001298 = DAT_010fbcf8;
          }
          else {
            if (*(int *)(lVar42 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar28 = *(long *)(*plVar40 + 0xb8);
            }
            FUN_047e2610(&stack0x000012b0,lVar28 + 0x1338,
                         *(undefined8 *)Method_System_HashCode_Add<RenderedText>__);
            memcpy(&stack0x00000d28,&stack0x000012b0,0x3b8);
LAB_0613272c:
            iVar16 = FUN_06183d40();
            in_stack_00001278 = iVar16 - 1;
            unaff_w29 = unaff_w29 + 1;
            iVar16 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
            *(int *)((long)unaff_x19 + 0x4a4) = iVar16;
            uVar45 = 0x2026;
LAB_06132758:
            in_stack_00001298 = CONCAT44(uVar45,iVar16);
          }
          goto LAB_06133f74;
        }
        if (iVar19 != 3) goto LAB_06132224;
        if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
LAB_061323c4:
        in_stack_00001278 = FUN_06183d40();
      }
      else {
        if (iVar19 == 5) {
          if (((int)in_stack_00001278 < 0) || (iVar16 == 0)) {
            *(undefined4 *)(in_stack_000001a0 + 7) = 0;
            in_stack_00001278 = 0xffffffff;
            plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
            plVar25 = (long *)PTR_DAT_069fb930;
            in_stack_00001298 = DAT_010fbcf8;
          }
          else {
            auVar56 = ZEXT416((uint)fStack00000000000000dc);
            if (fStack00000000000000dc <
                *(float *)(in_stack_000001a0 + 0xe) - *(float *)(unaff_x19 + 0x9c)) {
              if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              goto LAB_061323c4;
            }
            if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            plVar25 = (long *)PTR_DAT_069fb930;
            in_stack_00001278 = FUN_06183d40();
            *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
            *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
            uVar64 = *(undefined8 *)(*(long *)(*plVar40 + 0xb8) + 0x1730);
            *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
            *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
            uVar64 = NEON_rev64(uVar64,4);
            auVar56 = ZEXT816(0);
            *(int *)(unaff_x19 + 0x97) = (int)unaff_x19[0x97] + 1;
            iVar16 = *(int *)((long)unaff_x19 + 0x4c4);
            *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
            unaff_x19[0x99] = 0;
            in_stack_000001a0[0xe] = uVar64;
            *(int *)((long)unaff_x19 + 0x4c4) = iVar16 + 1;
          }
          goto LAB_06133f74;
        }
        if (iVar19 != 6) goto LAB_06132224;
        if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        in_stack_00001278 = FUN_06183d40();
        lVar42 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_0634eb94(lVar42,0,0);
        if ((uVar21 & 1) == 0) goto LAB_061323d8;
        plVar25 = (long *)unaff_x19[99];
        uVar64 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar25 == (long *)0x0) goto LAB_0613705c;
        (**(code **)(*plVar25 + 0x558))(plVar25,uVar64,*(undefined8 *)(*plVar25 + 0x560));
        lVar42 = unaff_x19[99];
        if (lVar42 == 0) goto LAB_0613705c;
        *(int *)(lVar42 + 0x438) = (int)unaff_x19[0x87];
        FUN_0617757c(lVar42,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
        plVar25 = (long *)unaff_x19[99];
        if (plVar25 == (long *)0x0) goto LAB_0613705c;
        (**(code **)(*plVar25 + 0x7d8))(plVar25,0,0,*(undefined8 *)(*plVar25 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
      }
LAB_061323d8:
      plVar25 = (long *)PTR_DAT_069fb930;
      in_stack_00001298 = CONCAT44(3,iVar16);
      goto LAB_06133f74;
    }
LAB_06132224:
    plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
    plVar25 = (long *)PTR_DAT_069fb930;
    if ((uVar21 & 1) != 0) {
      fVar47 = 1.0;
      if ((uVar17 & 0x18) != 0) {
        fVar47 = DAT_010fd188;
      }
      fVar46 = ABS(fVar50) + fVar46 * (1.0 - fVar63) * unaff_s12;
      if (fVar47 * in_stack_00000130._4_4_ < fVar46) {
        if (((*(int *)((long)unaff_x19 + 0x304) != 0) && (*(int *)((long)unaff_x19 + 0x304) != 3))
           && (iVar16 != (int)unaff_x19[0x95])) {
          if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          in_stack_00001278 = FUN_06183d40();
          if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_010fcd2c) {
            lVar42 = unaff_x19[0x74];
            if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0))
            goto LAB_0613705c;
            if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
            fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
            fVar66 = 0.0;
            if ((0.0 < fVar50) && ((char)unaff_x19[0x5e] == '\0')) {
              fVar66 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
            }
            fVar66 = in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4) +
                     *(float *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                         (long)(int)unaff_w23 + 0x14c) +
                     (fVar66 - *(float *)(unaff_x19 + 0x9c)) +
                     fStack0000000000000078 *
                     (in_stack_00000040._4_4_ + *(float *)(unaff_x19 + 0x5d));
          }
          else {
            lVar42 = unaff_x19[0x74];
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            if (lVar42 == 0) goto LAB_0613705c;
            fVar66 = *(float *)((long)unaff_x19 + 0x2ec) +
                     in_stack_00000100 * *(float *)((long)unaff_x19 + 0x2e4);
            fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
          }
          puVar10 = Method_System_HashCode_Combine<ulong,_int>__;
          lVar42 = *(long *)(lVar42 + 0x38);
          if (lVar42 == 0) goto LAB_0613705c;
          uVar35 = *(uint *)((long)unaff_x19 + 0x4a4);
          if ((*(uint *)(lVar42 + 0x18) <= uVar35) ||
             (uVar33 = uVar35 - 1, *(uint *)(lVar42 + 0x18) <= uVar33)) goto LAB_0613719c;
          unaff_s12 = *(float *)((long)unaff_x19 + 0x4cc);
          lVar42 = lVar42 + 0x20;
          fVar51 = *(float *)(lVar42 + (long)(int)uVar35 * (long)(int)unaff_w23 + 0x130);
          auVar56 = ZEXT416((uint)fVar51);
          fVar51 = (fVar66 + unaff_s12 + fVar50) - fVar51;
          if ((*(short *)(lVar42 + (long)(int)uVar33 * (long)(int)unaff_w23 + 4) == 0xad &&
               ((uint)fStack0000000000000054 & 1) == 0) &&
             (((int)unaff_x19[0x62] == 0 || (fVar51 < fStack00000000000000dc)))) {
            fStack0000000000000054 = 0.0;
            *(uint *)(in_stack_000001a0 + 7) = uVar33;
            plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
            plVar25 = (long *)PTR_DAT_069fb930;
            in_stack_00001278 = in_stack_00001278 - 1;
            in_stack_00001298 = CONCAT44(0x2d,uVar33);
            goto LAB_06133f74;
          }
          if (*(short *)(lVar42 + (long)(int)uVar35 * (long)(int)unaff_w23 + 4) == 0xad) {
            fStack0000000000000054 = 1.4013e-45;
            plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
            plVar25 = (long *)PTR_DAT_069fb930;
          }
          else {
            if ((char)unaff_x19[0x4c] != '\0' && ((uStack000000000000007c ^ 0xffffffff) & 1) == 0) {
              fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
              fVar63 = *(float *)(unaff_x19 + 0x60);
              if ((fVar63 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
              goto LAB_061370f4;
              fVar50 = *(float *)((long)unaff_x19 + 0x20c);
              fVar66 = *(float *)(unaff_x19 + 0x4f);
              auVar56 = ZEXT416((uint)fVar66);
              if ((fVar66 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
              goto LAB_0613713c;
            }
            lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
            if (*(int *)(lVar42 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar42 = *(long *)puVar10;
            }
            if ((((uStack000000000000007c & 1) != 0) &&
                (iVar19 = *(int *)(*(long *)(lVar42 + 0xb8) + 0xf80), iVar19 != -1)) &&
               (iVar19 != iStack0000000000000020)) {
              if (*(int *)(lVar42 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              in_stack_00001278 = FUN_06183d40();
              if ((unaff_x19[0x74] == 0) ||
                 (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0)) goto LAB_0613705c;
              uVar35 = *(int *)(in_stack_000001a0 + 7) - 1;
              if (*(uint *)(lVar42 + 0x18) <= uVar35) goto LAB_0613719c;
              iStack0000000000000020 = iVar19;
              if (*(short *)(lVar42 + (long)(int)uVar35 * (long)(int)unaff_w23 + 0x24) == 0xad) {
                fStack0000000000000054 = 0.0;
                *(uint *)(in_stack_000001a0 + 7) = uVar35;
                plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
                plVar25 = (long *)PTR_DAT_069fb930;
                in_stack_00001278 = in_stack_00001278 - 1;
                in_stack_00001298 = CONCAT44(0x2d,uVar35);
                goto LAB_06133f74;
              }
            }
            if (fVar51 <= fStack00000000000000dc) {
              auVar56 = ZEXT416((uint)unaff_s11);
              unaff_s12 = in_stack_00000100;
              FUN_0618480c();
              fStack0000000000000054 = 0.0;
              uStack000000000000007c = 1;
              uStack0000000000000070 = 1;
              plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
              plVar25 = (long *)PTR_DAT_069fb930;
            }
            else {
              if (*(int *)((long)unaff_x19 + 0x314) == -1) {
                *(undefined4 *)((long)unaff_x19 + 0x314) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
              }
              plVar25 = (long *)PTR_DAT_069fb930;
              if ((char)unaff_x19[0x4c] != '\0') {
                fVar50 = *(float *)((long)unaff_x19 + 0x2f4);
                if ((fVar50 < *(float *)(unaff_x19 + 0x5d)) &&
                   (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
                  fVar46 = *(float *)(unaff_x19 + 0x5d) +
                           ((in_stack_00000018._4_4_ - fVar51) / (float)((int)unaff_x19[0x97] + 1))
                           / fStack0000000000000078;
                  if (fVar46 <= fVar50) {
                    fVar46 = fVar50;
                  }
LAB_06137088:
                  *(float *)(unaff_x19 + 0x5d) = fVar46;
                  return;
                }
                fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
                fVar63 = *(float *)(unaff_x19 + 0x60);
                if ((fVar63 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                {
LAB_061370f4:
                  fVar48 = fVar46;
                  if (0.0 < fVar63) {
                    fVar48 = fVar46 / (1.0 - fVar63);
                  }
                  fVar63 = fVar63 + (fVar46 - fVar47 * (in_stack_00000130._4_4_ + DAT_010fcf90)) /
                                    fVar48;
                  if (fVar50 <= fVar63) {
                    fVar63 = fVar50;
                  }
                  *(float *)(unaff_x19 + 0x60) = fVar63;
                  return;
                }
                fVar50 = *(float *)((long)unaff_x19 + 0x20c);
                fVar66 = *(float *)(unaff_x19 + 0x4f);
                auVar56 = ZEXT416((uint)fVar66);
                if ((fVar66 < fVar50) && (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e]))
                {
LAB_0613713c:
                  fVar46 = DAT_010fcf54;
                  *(float *)((long)unaff_x19 + 0x264) = fVar50;
                  fVar47 = (fVar50 - *(float *)(unaff_x19 + 0x4d)) * 0.5;
                  if (fVar47 <= fVar46) {
                    fVar47 = fVar46;
                  }
                  fVar47 = (fVar50 - fVar47) * 20.0 + 0.5;
                  fVar46 = DAT_010fd008;
                  if (fVar47 != INFINITY) {
                    fVar46 = (float)(int)fVar47 / 20.0;
                  }
                  if (fVar46 <= fVar66) {
                    fVar46 = fVar66;
                  }
LAB_06134534:
                  *(float *)((long)unaff_x19 + 0x20c) = fVar46;
                  return;
                }
              }
              iVar19 = (int)unaff_x19[0x62];
              fStack0000000000000054 = 0.0;
              if (iVar19 < 3) {
                if (iVar19 != 0) {
                  if (iVar19 == 1) {
                    lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
                    if (*(int *)(lVar42 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
                    }
                    in_stack_00001298 = DAT_010fbcf8;
                    lVar28 = *(long *)(lVar42 + 0xb8);
                    if (*(int *)(lVar28 + 0x1708) == 0) {
                      in_stack_00001278 = 0xffffffff;
                      in_stack_000001a0[7] = 0;
                      goto LAB_06134460;
                    }
                    if (*(int *)(lVar42 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                      lVar28 = *(long *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ +
                                        0xb8);
                    }
                    FUN_047e2610(&stack0x000012b0,lVar28 + 0x1338,
                                 *(undefined8 *)Method_System_HashCode_Add<RenderedText>__);
                    memcpy(&stack0x00000970,&stack0x000012b0,0x3b8);
                    iVar16 = FUN_06183d40();
                    in_stack_00001278 = iVar16 - 1;
                    unaff_w29 = unaff_w29 + 1;
                    iVar16 = *(int *)((long)unaff_x19 + 0x4a4) + -1;
                    *(int *)((long)unaff_x19 + 0x4a4) = iVar16;
                    uVar45 = 0x2026;
                    goto LAB_06134414;
                  }
                  if (iVar19 != 2) goto LAB_06132e4c;
                }
LAB_06132d24:
                auVar56 = ZEXT416((uint)unaff_s11);
                unaff_s12 = in_stack_00000100;
                FUN_0618480c();
                fStack0000000000000054 = 0.0;
                uStack000000000000007c = 1;
                uStack0000000000000070 = 1;
                plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
              }
              else if (iVar19 < 5) {
                if (iVar19 != 3) {
                  if (iVar19 == 4) goto LAB_06132d24;
                  goto LAB_06132e4c;
                }
                if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                in_stack_00001278 = FUN_06183d40();
                uVar45 = 3;
LAB_06134414:
                in_stack_00001298 = CONCAT44(uVar45,iVar16);
LAB_06134460:
                fStack0000000000000054 = 0.0;
                plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
                plVar25 = (long *)PTR_DAT_069fb930;
              }
              else {
                if (iVar19 != 5) {
                  if (iVar19 != 6) goto LAB_06132e4c;
                  lVar42 = unaff_x19[99];
                  if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar21 = FUN_0634eb94(lVar42,0,0);
                  if ((uVar21 & 1) != 0) {
                    plVar40 = (long *)unaff_x19[99];
                    uVar64 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar40 == (long *)0x0) goto LAB_0613705c;
                    (**(code **)(*plVar40 + 0x558))
                              (plVar40,uVar64,*(undefined8 *)(*plVar40 + 0x560));
                    lVar42 = unaff_x19[99];
                    if (lVar42 == 0) goto LAB_0613705c;
                    *(int *)(lVar42 + 0x438) = (int)unaff_x19[0x87];
                    FUN_0617757c(lVar42,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
                    plVar40 = (long *)unaff_x19[99];
                    if (plVar40 == (long *)0x0) goto LAB_0613705c;
                    (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x65) = 1;
                  }
                  in_stack_00001298 = CONCAT44(3,*(undefined4 *)(in_stack_000001a0 + 7));
                  goto LAB_06134460;
                }
                auVar56 = ZEXT416((uint)unaff_s11);
                uStack000000000000007c = 1;
                *(undefined1 *)((long)unaff_x19 + 0x374) = 1;
                unaff_s12 = in_stack_00000100;
                FUN_0618480c();
                fStack0000000000000054 = 0.0;
                *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x4ec) = 0;
                *(int *)((long)unaff_x19 + 0x4c4) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
                unaff_x19[0x99] = 0;
                uStack0000000000000070 = 1;
                plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
                plVar25 = (long *)PTR_DAT_069fb930;
              }
            }
          }
          goto LAB_06133f74;
        }
        if (((char)unaff_x19[0x4c] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x26c) < (int)unaff_x19[0x4e])) {
          unaff_s12 = 100.0;
          fVar50 = *(float *)((long)unaff_x19 + 0x2fc) / 100.0;
          if (fVar63 < fVar50) goto LAB_061370f4;
          fVar50 = *(float *)((long)unaff_x19 + 0x20c);
          fVar66 = *(float *)(unaff_x19 + 0x4f);
          auVar56 = ZEXT416((uint)fVar66);
          if (fVar66 < fVar50) goto LAB_0613713c;
        }
        iVar19 = (int)unaff_x19[0x62];
        if (iVar19 == 1) {
          lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
          if (*(int *)(lVar42 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar42 = *plVar40;
          }
          plVar25 = (long *)PTR_DAT_069fb930;
          lVar28 = *(long *)(lVar42 + 0xb8);
          if (*(int *)(lVar28 + 0x1708) == 0) goto LAB_06132760;
          if (*(int *)(lVar42 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar28 = *(long *)(*plVar40 + 0xb8);
          }
          FUN_047e2610(&stack0x000012b0,lVar28 + 0x1338,
                       *(undefined8 *)Method_System_HashCode_Add<RenderedText>__);
          memcpy(&stack0x000005b8,&stack0x000012b0,0x3b8);
          goto LAB_0613272c;
        }
        if (iVar19 == 6) {
          if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          in_stack_00001278 = FUN_06183d40();
          lVar42 = unaff_x19[99];
          if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar21 = FUN_0634eb94(lVar42,0,0);
          if ((uVar21 & 1) != 0) {
            plVar41 = (long *)unaff_x19[99];
            uVar64 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_0613705c;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar64,*(undefined8 *)(*plVar41 + 0x560));
            lVar42 = unaff_x19[99];
            if (lVar42 == 0) goto LAB_0613705c;
            *(int *)(lVar42 + 0x438) = (int)unaff_x19[0x87];
            FUN_0617757c(lVar42,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
            plVar41 = (long *)unaff_x19[99];
            if (plVar41 == (long *)0x0) goto LAB_0613705c;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x65) = 1;
          }
          iVar16 = *(int *)(in_stack_000001a0 + 7);
          uVar45 = 3;
          goto LAB_06132758;
        }
        if (iVar19 == 3) {
          if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          goto LAB_061323c4;
        }
      }
    }
LAB_06132e4c:
    plVar25 = (long *)PTR_DAT_069fb930;
    if (in_stack_00000180 == 0) {
      if (in_stack_000012ac == 0xad) {
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
        goto LAB_0613705c;
        if (*(uint *)(in_stack_000001a0 + 7) < *(uint *)(lVar42 + 0x18)) {
          *(undefined1 *)
           (lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 400) = 0;
          goto LAB_06132fe4;
        }
        goto LAB_0613719c;
      }
      if (*(int *)((long)unaff_x19 + 0x65c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x65c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))();
      }
      if ((uStack0000000000000070 & 1) != 0) {
        *(undefined4 *)(in_stack_000001a0 + 8) = *(undefined4 *)(in_stack_000001a0 + 7);
      }
      *(undefined4 *)((long)unaff_x19 + 0x4b4) = *(undefined4 *)(in_stack_000001a0 + 7);
      *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x50), lVar42 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
      uStack0000000000000070 = 0;
      lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(float *)(lVar42 + 100) = fVar62;
      *(float *)(lVar42 + 0x68) = fVar49;
    }
    else {
      lVar42 = unaff_x19[0x74];
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0613705c;
      uVar35 = *(uint *)(in_stack_000001a0 + 7);
      if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_0613719c;
      *(undefined1 *)(lVar28 + (long)(int)uVar35 * (long)(int)unaff_w23 + 400) = 0;
      *(uint *)((long)unaff_x19 + 0x4b4) = uVar35;
      lVar28 = *(long *)(lVar42 + 0x50);
      if (lVar28 == 0) goto LAB_0613705c;
      uVar35 = *(uint *)(lVar28 + 0x18);
      if (uVar35 <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
      lVar28 = lVar28 + 0x20;
      lVar30 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      iVar16 = *(int *)(lVar30 + 0xc) + 1;
      *(int *)(lVar30 + 0xc) = iVar16;
      uVar33 = *(uint *)(unaff_x19 + 0x97);
      *(int *)(unaff_x19 + 0x98) = iVar16;
      if (uVar35 <= uVar33) goto LAB_0613719c;
      lVar30 = lVar28 + (long)(int)uVar33 * 0x60;
      *(float *)(lVar30 + 0x44) = fVar62;
      *(float *)(lVar30 + 0x48) = fVar49;
      *(int *)(lVar42 + 0x20) = *(int *)(lVar42 + 0x20) + 1;
      if (in_stack_000012ac == 0xa0) {
        *(int *)(lVar28 + (long)(int)uVar33 * 0x60) =
             *(int *)(lVar28 + (long)(int)uVar33 * 0x60) + 1;
      }
    }
  }
  else {
    if (((in_stack_000012ac & 0xfffffffe) == 10) && ((int)unaff_x19[0x62] == 6)) {
      fVar46 = 0.0;
      if ((0.0 < fVar49) && ((char)unaff_x19[0x5e] == '\0')) {
        fVar46 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
      }
      unaff_s12 = *(float *)((long)unaff_x19 + 0x4cc);
      auVar56 = ZEXT416((uint)fStack00000000000000dc);
      if (fStack00000000000000dc < (unaff_s12 - (*(float *)(unaff_x19 + 0x9c) - fVar49)) + fVar46) {
        if (*(int *)((long)unaff_x19 + 0x314) == -1) {
          *(uint *)((long)unaff_x19 + 0x314) = uVar35;
        }
        plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
        plVar25 = (long *)PTR_DAT_069fb930;
        if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        in_stack_00001278 = FUN_06183d40();
        lVar42 = unaff_x19[99];
        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_0634eb94(lVar42,0,0);
        if ((uVar21 & 1) != 0) {
          plVar41 = (long *)unaff_x19[99];
          uVar64 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_0613705c;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar64,*(undefined8 *)(*plVar41 + 0x560));
          lVar42 = unaff_x19[99];
          if (lVar42 == 0) goto LAB_0613705c;
          *(int *)(lVar42 + 0x438) = (int)unaff_x19[0x87];
          FUN_0617757c(lVar42,*(undefined4 *)((long)unaff_x19 + 0x4a4),0);
          plVar41 = (long *)unaff_x19[99];
          if (plVar41 == (long *)0x0) goto LAB_0613705c;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x65) = 1;
        }
        in_stack_00001298 = CONCAT44(3,uVar35);
        goto LAB_06133f74;
      }
    }
    if ((((in_stack_000012ac - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000012ac - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000012ac - 10 < 2)) || (in_stack_000012ac == 0xa0)) {
      plVar25 = (long *)PTR_DAT_069fb930;
      if (in_stack_000012ac == 0xad) goto LAB_06132fe4;
LAB_061328fc:
      plVar25 = (long *)PTR_DAT_069fb930;
      if ((in_stack_000012ac == 0x200b) || (in_stack_000012ac == 0x2060)) goto LAB_06132fe4;
      lVar42 = unaff_x19[0x74];
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
      *(int *)(lVar42 + 0x20) = *(int *)(lVar42 + 0x20) + 1;
    }
    else {
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar21 = FUN_054594b0(in_stack_000012ac,0);
      if (((uVar21 & 1) != 0) && (in_stack_000012ac != 0xad)) goto LAB_061328fc;
    }
    plVar25 = (long *)PTR_DAT_069fb930;
    if (in_stack_000012ac == 0xa0) {
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x50), lVar42 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
      lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
      *(int *)(lVar42 + 0x20) = *(int *)(lVar42 + 0x20) + 1;
    }
  }
LAB_06132fe4:
  if (((int)unaff_x19[0x62] == 1) &&
     ((fStack0000000000000190 != (float)unaff_w21 || (in_stack_000012ac == 0x2d)))) {
    if (unaff_x19[0xce] == 0) goto LAB_0613705c;
    fVar47 = *(float *)(unaff_x19 + 0x42);
    fVar46 = (float)FUN_063ecbd8(unaff_x19[0xce] + 0x28,0);
    if (unaff_x19[0xce] == 0) goto LAB_0613705c;
    fVar49 = (float)FUN_063ecbe0(unaff_x19[0xce] + 0x28,0);
    lVar42 = unaff_x19[0xcd];
    fVar62 = in_stack_000000e0;
    if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
      fVar62 = 1.0;
    }
    if ((lVar42 == 0) || (*(long *)(lVar42 + 0x20) == 0)) goto LAB_0613705c;
    fVar66 = *(float *)((long)unaff_x19 + 0x43c);
    fVar63 = *(float *)(lVar42 + 0x2c);
    fVar50 = (float)FUN_063ed0d8(*(long *)(lVar42 + 0x20),0);
    uVar64 = *(undefined8 *)_fStack00000000000000d0;
    fVar50 = (fVar47 / fVar46) * fVar49 * fVar62 * fVar66 * fVar63 * fVar50;
    if ((in_stack_000012ac == 10) && (*(int *)((long)unaff_x19 + 0x4a4) != (int)unaff_x19[0x95])) {
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
      goto LAB_0613705c;
      uVar35 = *(int *)((long)unaff_x19 + 0x4a4) - 1;
      if (*(uint *)(lVar42 + 0x18) <= uVar35) goto LAB_0613719c;
      if (unaff_x19[0xce] == 0) goto LAB_0613705c;
      fVar47 = *(float *)(lVar42 + (long)(int)uVar35 * (long)(int)unaff_w23 + 0x58);
      fVar46 = (float)FUN_063ecbd8(unaff_x19[0xce] + 0x28,0);
      if (unaff_x19[0xce] == 0) goto LAB_0613705c;
      fVar49 = (float)FUN_063ecbe0(unaff_x19[0xce] + 0x28,0);
      lVar42 = unaff_x19[0xcd];
      fVar62 = in_stack_000000e0;
      if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
        fVar62 = 1.0;
      }
      if ((lVar42 == 0) || (*(long *)(lVar42 + 0x20) == 0)) goto LAB_0613705c;
      fVar66 = *(float *)((long)unaff_x19 + 0x43c);
      fVar63 = *(float *)(lVar42 + 0x2c);
      fVar50 = (float)FUN_063ed0d8(*(long *)(lVar42 + 0x20),0);
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x50), lVar42 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
      uVar64 = *(undefined8 *)(lVar42 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60 + 100);
      fVar50 = (fVar47 / fVar46) * fVar49 * fVar62 * fVar66 * fVar63 * fVar50;
    }
    fVar47 = *(float *)((long)unaff_x19 + 0x4ec);
    fVar46 = 0.0;
    fVar62 = 0.0;
    if ((0.0 < fVar47) && ((char)unaff_x19[0x5e] == '\0')) {
      fVar62 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4e4);
    }
    fVar49 = *(float *)((long)unaff_x19 + 0x4cc);
    fVar66 = *(float *)(unaff_x19 + 0x9c);
    fVar63 = *(float *)(unaff_x19 + 0xcb);
    fStack0000000000000170 = (float)uVar64;
    fStack0000000000000174 = (float)((ulong)uVar64 >> 0x20);
    if ((char)unaff_x19[0x1e] == '\0') {
      if ((unaff_x19[0xcd] == 0) || (lVar42 = *(long *)(unaff_x19[0xcd] + 0x20), lVar42 == 0))
      goto LAB_0613705c;
      FUN_063ed09c(&stack0x000012b0,lVar42,0);
      fVar46 = (float)FUN_063ecee4(&stack0x000011c0,0);
    }
    puVar10 = Method_System_HashCode_Combine<ulong,_int>__;
    fVar51 = *(float *)(unaff_x19 + 0x73);
    fStack0000000000000174 =
         (fStack00000000000000cc - fStack0000000000000170) - fStack0000000000000174;
    bVar11 = true;
    if ((fVar51 <= fStack0000000000000174) && (bVar11 = false, !NAN(fVar51))) {
      bVar11 = fVar51 == -1.0;
    }
    if (!bVar11) {
      fStack0000000000000174 = fVar51;
    }
    fVar51 = 1.0;
    if ((uVar17 & 0x18) != 0) {
      fVar51 = DAT_010fd188;
    }
    if ((ABS(fVar63) + fVar50 * fVar46 * (1.0 - *(float *)(unaff_x19 + 0x60)) <
         fVar51 * fStack0000000000000174) &&
       ((fVar49 - (fVar66 - fVar47)) + fVar62 < fStack00000000000000dc)) {
      if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_061840e4();
      lVar42 = *(long *)(*(long *)puVar10 + 0xb8);
      memcpy(&stack0x000012b0,(void *)(lVar42 + 0x810),0x3b8);
      FUN_047e2524(lVar42 + 0x1338,&stack0x000012b0,
                   *(undefined8 *)Method_System_HashCode_Add<float>__);
    }
  }
  lVar42 = unaff_x19[0x74];
  if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0613705c;
  if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  uVar35 = *(uint *)(unaff_x19 + 0x97);
  *(uint *)(lVar28 + 0x5c) = uVar35;
  *(undefined4 *)(lVar28 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4c4);
  if ((fStack0000000000000190 == (float)unaff_w21) ||
     ((in_stack_000012ac < 0xe && ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0x2c00U) != 0)))) {
    lVar28 = *(long *)(lVar42 + 0x50);
    if (lVar28 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_0613719c;
    if (*(int *)(lVar28 + (long)(int)uVar35 * 0x60 + 0x24) == 1) goto LAB_06133378;
  }
  else {
LAB_06133378:
    lVar42 = *(long *)(lVar42 + 0x50);
    if (lVar42 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar42 + 0x18) <= uVar35) goto LAB_0613719c;
    *(int *)(lVar42 + (long)(int)uVar35 * 0x60 + 0x6c) = (int)unaff_x19[0x54];
  }
  if (in_stack_000012ac == 9) {
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    fVar46 = (float)FUN_063ecc80(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    fVar47 = (float)NEON_ucvtf((uint)*(byte *)(unaff_x19[0x20] + 0x1b1));
    fVar48 = *(float *)(unaff_x19 + 0xcb);
    auVar56 = ZEXT416((uint)fVar48);
    fVar47 = unaff_s11 * fVar46 * fVar47;
    if ((char)unaff_x19[0x1e] == '\0') {
      unaff_s12 = fVar47 * (float)(int)(fVar48 / fVar47);
      fVar46 = unaff_s12;
      if (unaff_s12 <= fVar48) {
        fVar46 = fVar47 + fVar48;
      }
    }
    else {
      unaff_s12 = fVar47 * (float)(int)(fVar48 / fVar47);
      fVar46 = unaff_s12;
      if (fVar48 <= unaff_s12) {
        fVar46 = fVar48 - fVar47;
      }
    }
LAB_061335cc:
    *(float *)(unaff_x19 + 0xcb) = fVar46;
  }
  else {
    fVar46 = *(float *)(unaff_x19 + 0x5b);
    if (fVar46 == 0.0) {
      fVar46 = *(float *)(unaff_x19 + 0xcb);
      if ((char)unaff_x19[0x1e] == '\0') {
        fVar48 = (float)FUN_063ecee4(&stack0x00001260,0);
        fVar49 = *(float *)(in_stack_000001a0 + 2);
        fVar62 = (float)FUN_063f141c(&stack0x00001250,0);
        if (unaff_x19[0x20] != 0) {
          unaff_s12 = *(float *)(unaff_x19 + 0x60);
          fVar47 = 1.0 - unaff_s12;
          fVar46 = fVar46 + fVar47 * (*(float *)((long)unaff_x19 + 0x2d4) +
                                     unaff_s11 * (fVar48 * fVar49 + fVar62) +
                                     in_stack_00000100 *
                                     (fStack00000000000000f0 +
                                     in_stack_000000f8 + *(float *)(unaff_x19[0x20] + 0x1a4)));
          *(float *)(unaff_x19 + 0xcb) = fVar46;
          goto joined_r0x06133508;
        }
        goto LAB_0613705c;
      }
      fVar47 = (float)FUN_063f141c(&stack0x00001250,0);
      if (unaff_x19[0x20] == 0) goto LAB_0613705c;
      unaff_s12 = *(float *)(unaff_x19 + 0x60);
      auVar56 = ZEXT416((uint)(1.0 - unaff_s12));
      fVar46 = fVar46 - (1.0 - unaff_s12) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        unaff_s11 * fVar47 +
                        in_stack_00000100 *
                        (fStack00000000000000f0 +
                        in_stack_000000f8 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcb) = fVar46;
      if ((in_stack_00000180 != 0) || (in_stack_000012ac == 0x200b)) {
        auVar56 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
        unaff_s12 = in_stack_00000100;
        fVar46 = fVar46 - in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
        goto LAB_061335cc;
      }
    }
    else {
      if (((*(char *)((long)unaff_x19 + 0x2dc) != '\0') && (in_stack_000012ac < 0x3b)) &&
         ((1L << ((ulong)in_stack_000012ac & 0x3f) & 0x400500000000000U) != 0)) {
        fVar46 = fVar46 * 0.5;
      }
      if (unaff_x19[0x20] == 0) goto LAB_0613705c;
      unaff_s12 = *(float *)(unaff_x19 + 0x60);
      fVar47 = *(float *)(unaff_x19 + 0xcb);
      fVar46 = fVar47 + (1.0 - unaff_s12) *
                        (*(float *)((long)unaff_x19 + 0x2d4) +
                        (fVar46 - fVar48) +
                        in_stack_00000100 *
                        (in_stack_000000f8 + *(float *)(unaff_x19[0x20] + 0x1a4)));
      *(float *)(unaff_x19 + 0xcb) = fVar46;
joined_r0x06133508:
      if ((in_stack_00000180 != 0) || (auVar56 = ZEXT416((uint)fVar47), in_stack_000012ac == 0x200b)
         ) {
        auVar56 = ZEXT416((uint)(in_stack_00000100 * *(float *)(unaff_x19 + 0x5c)));
        unaff_s12 = in_stack_00000100;
        fVar46 = fVar46 + in_stack_00000100 * *(float *)(unaff_x19 + 0x5c);
        goto LAB_061335cc;
      }
    }
  }
  lVar42 = unaff_x19[0x74];
  if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0613705c;
  uVar35 = *(uint *)(in_stack_000001a0 + 7);
  if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_0613719c;
  *(float *)(lVar28 + (long)(int)uVar35 * (long)(int)unaff_w23 + 0x13c) = fVar46;
  if (in_stack_000012ac == 0xd) {
    *(float *)(unaff_x19 + 0xcb) = *(float *)((long)unaff_x19 + 0x444) + 0.0;
  }
  if (((int)unaff_x19[0x62] == 5) &&
     (((0xd < in_stack_000012ac || ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0x2c00U) == 0)) &&
      (1 < in_stack_000012ac - 0x2028)))) {
    lVar28 = *(long *)(lVar42 + 0x58);
    if (lVar28 == 0) goto LAB_0613705c;
    iVar16 = *(int *)((long)unaff_x19 + 0x4c4) + 1;
    if (*(int *)(lVar28 + 0x18) < iVar16) {
      if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0383ef5c((long *)(lVar42 + 0x58),iVar16,1,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_HashAlgorithm_ValidateTransformBlock__);
      lVar42 = unaff_x19[0x74];
      if (lVar42 == 0) goto LAB_0613705c;
    }
    plVar25 = (long *)PTR_DAT_069fb930;
    lVar28 = *(long *)(lVar42 + 0x58);
    if (lVar28 == 0) goto LAB_0613705c;
    uVar17 = *(uint *)((long)unaff_x19 + 0x4c4);
    if (*(uint *)(lVar28 + 0x18) <= uVar17) goto LAB_0613719c;
    lVar28 = lVar28 + 0x20;
    lVar30 = lVar28 + (long)(int)uVar17 * 0x14;
    *(int *)(lVar30 + 8) = (int)unaff_x19[0x99];
    fVar47 = *(float *)(lVar30 + 0x10);
    auVar56 = ZEXT416((uint)fVar47);
    fVar46 = *(float *)(unaff_x19 + 0x9b);
    if (fVar47 <= *(float *)(unaff_x19 + 0x9b)) {
      fVar46 = fVar47;
    }
    *(float *)(lVar30 + 0x10) = fVar46;
    if (*(char *)((long)unaff_x19 + 0x374) != '\0') {
      *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
      *(undefined4 *)(lVar28 + (long)(int)uVar17 * 0x14) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    }
    uVar35 = *(uint *)(in_stack_000001a0 + 7);
    *(uint *)(lVar28 + (long)(int)uVar17 * 0x14 + 4) = uVar35;
  }
  uVar17 = in_stack_000012ac;
  if (((in_stack_000012ac < 0xc) && ((1 << (ulong)(in_stack_000012ac & 0x1f) & 0xc08U) != 0)) ||
     ((in_stack_000012ac - 0x2028 < 2 ||
      ((in_stack_000012ac == 0x2d && fStack0000000000000190 == (float)unaff_w21 ||
       (uVar35 == uStack000000000000004c)))))) {
    if (0.0 < *(float *)((long)unaff_x19 + 0x4ec)) {
      fVar46 = *(float *)((long)unaff_x19 + 0x4dc);
      fVar47 = *(float *)((long)unaff_x19 + 0x4e4);
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar46 = fVar46 - fVar47;
      if (((fStack0000000000000050 < ABS(fVar46)) && ((char)unaff_x19[0x5e] == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x374) == '\0')) {
        FUN_061844a0();
        puVar10 = Method_System_HashCode_Combine<ulong,_int>__;
        lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
        *(float *)(unaff_x19 + 0x9b) = *(float *)(unaff_x19 + 0x9b) - fVar46;
        *(float *)((long)unaff_x19 + 0x4ec) = fVar46 + *(float *)((long)unaff_x19 + 0x4ec);
        if (*(int *)(lVar42 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar42 = *(long *)puVar10;
        }
        lVar28 = *(long *)(lVar42 + 0xb8);
        if (*(int *)(lVar28 + 0x838) == (int)unaff_x19[0x97]) {
          if (*(int *)(lVar42 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar28 = *(long *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xb8);
          }
          FUN_047e2610(&stack0x000001e0,lVar28 + 0x1338,
                       *(undefined8 *)Method_System_HashCode_Add<RenderedText>__);
          puVar10 = Method_System_HashCode_Combine<ulong,_int>__;
          lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
          memcpy((void *)(*(long *)(lVar42 + 0xb8) + 0x810),&stack0x000001e0,0x3b8);
          LeanTween__value(*(long *)(lVar42 + 0xb8) + 0x8a8,0);
          lVar42 = *(long *)(*(long *)puVar10 + 0xb8);
          *(float *)(lVar42 + 0x848) = fVar46 + *(float *)(lVar42 + 0x848);
          *(float *)(lVar42 + 0x894) = fVar46 + *(float *)(lVar42 + 0x894);
          memcpy(&stack0x000012b0,(void *)(lVar42 + 0x810),0x3b8);
          FUN_047e2524(lVar42 + 0x1338,&stack0x000012b0,
                       *(undefined8 *)Method_System_HashCode_Add<float>__);
        }
      }
    }
    fVar48 = *(float *)((long)unaff_x19 + 0x4ec);
    *(undefined1 *)((long)unaff_x19 + 0x374) = 0;
    fVar47 = *(float *)(unaff_x19 + 0x9c) - fVar48;
    fVar46 = *(float *)(unaff_x19 + 0x9b);
    if (fVar47 <= *(float *)(unaff_x19 + 0x9b)) {
      fVar46 = fVar47;
    }
    fVar62 = *(float *)((long)unaff_x19 + 0x4dc);
    *(float *)(unaff_x19 + 0x9b) = fVar46;
    if (in_stack_000012a4 == '\0') {
      in_stack_000012a8 = fVar46;
    }
    if ((*(char *)((long)unaff_x19 + 0x36c) != '\0') &&
       (((int)unaff_x19[0x6c] <= *(int *)((long)unaff_x19 + 0x4a4) ||
        ((int)unaff_x19[0x6d] <= (int)unaff_x19[0x97])))) {
      in_stack_000012a4 = '\x01';
    }
    lVar42 = unaff_x19[0x74];
    if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
    iVar19 = (int)unaff_x19[0x95];
    *(int *)(lVar28 + 0x38) = iVar19;
    iVar16 = iVar19;
    if (iVar19 <= *(int *)((long)unaff_x19 + 0x4ac)) {
      iVar16 = *(int *)((long)unaff_x19 + 0x4ac);
    }
    *(int *)((long)unaff_x19 + 0x4ac) = iVar16;
    *(int *)(lVar28 + 0x3c) = iVar16;
    iVar4 = *(int *)((long)unaff_x19 + 0x4a4);
    *(int *)(unaff_x19 + 0x96) = iVar4;
    *(int *)(lVar28 + 0x40) = iVar4;
    iVar18 = *(int *)((long)unaff_x19 + 0x4ac);
    if (iVar16 <= *(int *)((long)unaff_x19 + 0x4b4)) {
      iVar18 = *(int *)((long)unaff_x19 + 0x4b4);
    }
    *(int *)((long)unaff_x19 + 0x4b4) = iVar18;
    *(int *)(lVar28 + 0x44) = iVar18;
    *(int *)(lVar28 + 0x24) = (iVar4 - iVar19) + 1;
    iVar16 = *(int *)((long)unaff_x19 + 0x4bc);
    *(int *)(lVar28 + 0x28) = iVar16;
    *(int *)(lVar28 + 0x30) = (iVar18 - (iVar19 + iVar16)) + 1;
    lVar42 = *(long *)(lVar42 + 0x38);
    if (lVar42 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 8)) goto LAB_0613719c;
    *(undefined4 *)(lVar28 + 0x70) =
         *(undefined4 *)
          (lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 8) * (long)(int)unaff_w23 + 0x114);
    *(float *)(lVar28 + 0x74) = fVar47;
    lVar42 = unaff_x19[0x74];
    if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x97)) goto LAB_0613719c;
    lVar42 = *(long *)(lVar42 + 0x38);
    if (lVar42 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4b4)) goto LAB_0613719c;
    fVar62 = fVar62 - fVar48;
    auVar56 = ZEXT416((uint)fVar62);
    lVar28 = lVar28 + 0x20 + (long)(int)*(uint *)(unaff_x19 + 0x97) * 0x60;
    uVar45 = *(undefined4 *)
              (lVar42 + (long)(int)*(uint *)((long)unaff_x19 + 0x4b4) * (long)(int)unaff_w23 + 0x120
              );
    *(float *)(lVar28 + 0x5c) = fVar62;
    *(undefined4 *)(lVar28 + 0x58) = uVar45;
    lVar42 = unaff_x19[0x74];
    if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0613705c;
    uVar35 = *(uint *)(unaff_x19 + 0x97);
    if (*(uint *)(lVar28 + 0x18) <= uVar35) goto LAB_0613719c;
    lVar28 = lVar28 + 0x20;
    lVar30 = lVar28 + (long)(int)uVar35 * 0x60;
    *(float *)(lVar30 + 0x28) = *(float *)(lVar30 + 0x58) - unaff_s11 * unaff_s13;
    *(float *)(lVar30 + 0x40) = in_stack_00000130._4_4_;
    if (*(int *)(lVar30 + 4) == 1) {
      *(int *)(lVar28 + (long)(int)uVar35 * 0x60 + 0x4c) = (int)unaff_x19[0x54];
    }
    if ((unaff_x19[0x20] == 0) || (lVar30 = *(long *)(lVar42 + 0x38), lVar30 == 0))
    goto LAB_0613705c;
    uVar33 = *(uint *)((long)unaff_x19 + 0x4b4);
    if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_0613719c;
    if ((*(char *)(lVar30 + 0x20 + (long)(int)uVar33 * (long)(int)unaff_w23 + 0x170) == '\0') &&
       (uVar33 = *(uint *)(unaff_x19 + 0x96), *(uint *)(lVar30 + 0x18) <= uVar33))
    goto LAB_0613719c;
    lVar28 = lVar28 + (long)(int)uVar35 * 0x60;
    fVar48 = (1.0 - *(float *)(unaff_x19 + 0x60)) *
             (*(float *)((long)unaff_x19 + 0x2d4) +
             in_stack_00000100 *
             (fStack00000000000000f0 + in_stack_000000f8 + *(float *)(unaff_x19[0x20] + 0x1a4)));
    fVar46 = -fVar48;
    if ((char)unaff_x19[0x1e] != '\0') {
      fVar46 = fVar48;
    }
    *(float *)(lVar28 + 0x3c) =
         *(float *)(lVar30 + 0x20 + (long)(int)uVar33 * (long)(int)unaff_w23 + 0x11c) + fVar46;
    unaff_s12 = 0.0 - *(float *)((long)unaff_x19 + 0x4ec);
    *(float *)(lVar28 + 0x2c) = in_stack_00000068._4_4_ + (fVar62 - fVar47);
    *(float *)(lVar28 + 0x30) = fVar62;
    *(float *)(lVar28 + 0x34) = unaff_s12;
    *(float *)(lVar28 + 0x38) = fVar47;
    plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
    if ((((in_stack_000012ac & 0xfffffffe) == 10) ||
        (fStack0000000000000190 == (float)unaff_w21 && in_stack_000012ac == 0x2d)) ||
       (in_stack_000012ac - 0x2028 < 2)) {
      if (*(int *)(*(long *)Method_System_HashCode_Combine<ulong,_int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_061840e4();
      lVar42 = unaff_x19[0x97];
      iVar19 = *(int *)((long)unaff_x19 + 0x4a4);
      in_stack_000001a0[10] = 0;
      iVar16 = (int)lVar42 + 1;
      lVar42 = unaff_x19[0x74];
      *(int *)(unaff_x19 + 0x97) = iVar16;
      *(int *)(unaff_x19 + 0x95) = iVar19 + 1;
      if ((lVar42 == 0) || (*(long *)(lVar42 + 0x50) == 0)) goto LAB_0613705c;
      if (*(int *)(*(long *)(lVar42 + 0x50) + 0x18) <= iVar16) {
        FUN_0618465c();
        lVar42 = unaff_x19[0x74];
        if (lVar42 == 0) goto LAB_0613705c;
      }
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_0613705c;
      if (*(uint *)(in_stack_000001a0 + 7) < *(uint *)(lVar42 + 0x18)) {
        fVar46 = *(float *)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                     (long)(int)unaff_w23 + 0x14c);
        if (*(float *)((long)unaff_x19 + 0x2ec) == DAT_010fcd2c) {
          if ((in_stack_000012ac == 0x2029) || (fVar47 = 0.0, in_stack_000012ac == 10)) {
            fVar47 = *(float *)(unaff_x19 + 0x5f);
          }
          uVar23 = 0;
          fVar47 = fVar46 + (0.0 - *(float *)(unaff_x19 + 0x9c)) +
                   fStack0000000000000078 * (in_stack_00000040._4_4_ + *(float *)(unaff_x19 + 0x5d))
                   + in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar47) +
                   *(float *)((long)unaff_x19 + 0x4ec);
        }
        else {
          if ((in_stack_000012ac == 0x2029) || (fVar47 = 0.0, in_stack_000012ac == 10)) {
            fVar47 = *(float *)(unaff_x19 + 0x5f);
          }
          uVar23 = 1;
          fVar47 = *(float *)((long)unaff_x19 + 0x4ec) +
                   *(float *)((long)unaff_x19 + 0x2ec) +
                   in_stack_00000100 * (*(float *)((long)unaff_x19 + 0x2e4) + fVar47);
        }
        lVar42 = *plVar40;
        *(float *)((long)unaff_x19 + 0x4ec) = fVar47;
        *(undefined1 *)(unaff_x19 + 0x5e) = uVar23;
        if (*(int *)(lVar42 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar42 = *plVar40;
        }
        fVar47 = *(float *)(unaff_x19 + 0x88);
        unaff_s12 = *(float *)((long)unaff_x19 + 0x444);
        uVar64 = *(undefined8 *)(*(long *)(lVar42 + 0xb8) + 0x1730);
        *(float *)((long)unaff_x19 + 0x4e4) = fVar46;
        auVar56._0_8_ = NEON_rev64(uVar64,4);
        auVar56._8_8_ = 0;
        in_stack_000001a0[0xe] = auVar56._0_8_;
        *(float *)(unaff_x19 + 0xcb) = fVar47 + 0.0 + unaff_s12;
        FUN_061840e4();
        FUN_061840e4();
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        uStack000000000000007c = 1;
        uStack0000000000000070 = 1;
        goto LAB_06133f74;
      }
      goto LAB_0613719c;
    }
    if (in_stack_000012ac == 3) {
      if (unaff_x19[0x91] == 0) goto LAB_0613705c;
      in_stack_00001278 = (uint)*(undefined8 *)(unaff_x19[0x91] + 0x18);
      uVar17 = 3;
    }
  }
  plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  lVar42 = *(long *)(lVar42 + 0x38);
  if (lVar42 == 0) goto LAB_0613705c;
  uVar33 = *(uint *)(in_stack_000001a0 + 7);
  uVar35 = *(uint *)(lVar42 + 0x18);
  if (uVar35 <= uVar33) goto LAB_0613719c;
  lVar42 = lVar42 + 0x20;
  if (*(char *)(lVar42 + (long)(int)uVar33 * (long)(int)unaff_w23 + 0x170) != '\0') {
    lVar28 = lVar42 + (long)(int)uVar33 * (long)(int)unaff_w23;
    auVar53 = *(undefined1 (*) [16])(unaff_x19 + 0x9e);
    auVar57 = NEON_ext(auVar53,auVar53,8,1);
    uVar64 = *(undefined8 *)(lVar28 + 0xf4);
    unaff_s12 = (float)uVar64;
    uVar65 = *(undefined8 *)(lVar28 + 0x100);
    fVar46 = (float)uVar65;
    fVar47 = (float)((ulong)uVar65 >> 0x20);
    auVar56._0_4_ = (float)-(uint)(auVar53._0_4_ < unaff_s12);
    auVar56._4_4_ = (float)-(uint)(auVar53._4_4_ < (float)((ulong)uVar64 >> 0x20));
    auVar56._8_4_ = -(uint)(fVar46 < auVar57._0_4_);
    auVar56._12_4_ = -(uint)(fVar47 < auVar57._4_4_);
    auVar57._8_4_ = fVar46;
    auVar57._0_8_ = uVar64;
    auVar57._12_4_ = fVar47;
    auVar53 = auVar53 ^ (auVar53 ^ auVar57) & ~auVar56;
    unaff_x19[0x9f] = auVar53._8_8_;
    unaff_x19[0x9e] = auVar53._0_8_;
  }
  if (((*(int *)((long)unaff_x19 + 0x304) != 3) && (*(int *)((long)unaff_x19 + 0x304) != 0)) ||
     ((*(uint *)(unaff_x19 + 0x62) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x62) & 0x1f) & 0x4aU) != 0)))) {
    if ((((in_stack_00000180 == 0) && (uVar17 != 0x2d)) && (uVar17 != 0x200b)) && (uVar17 != 0xad))
    {
      if (*(char *)((long)unaff_x19 + 0x309) == '\0') goto LAB_06133fe0;
LAB_06133e60:
      if ((uStack000000000000007c & 1) == 0) {
        uStack000000000000007c = 0;
      }
      else {
        uVar35 = (uint)(in_stack_00000180 == 0 || in_stack_000012ac == 0xa0) &
                 ((uint)(in_stack_000012ac != 0xad) | (uint)fStack0000000000000054) ^ 1;
LAB_06133e98:
        uStack000000000000007c = 1;
LAB_06133ea0:
        if (*(int *)(*plVar40 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_061840e4();
        if (uVar35 != 0) goto LAB_06133ed4;
      }
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x309) != '\0') goto LAB_06133e60;
      if ((int)uVar17 < 0x2007) {
        if (uVar17 == 0x2d) {
          if (0 < (int)uVar33) {
            if (uVar35 <= uVar33 - 1) goto LAB_0613719c;
            uVar5 = *(undefined2 *)(lVar42 + (ulong)(uVar33 - 1) * (ulong)unaff_w23 + 4);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar21 = FUN_05455f40(uVar5,0);
            if ((uVar21 & 1) != 0) {
              if ((unaff_x19[0x74] == 0) ||
                 (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0)) goto LAB_0613705c;
              if (*(uint *)(lVar42 + 0x18) <= *(int *)(in_stack_000001a0 + 7) - 1U)
              goto LAB_0613719c;
              if (*(int *)(lVar42 + (long)(int)(*(int *)(in_stack_000001a0 + 7) - 1U) *
                                    (long)(int)unaff_w23 + 0x5c) == (int)unaff_x19[0x97])
              goto LAB_06133f34;
            }
          }
        }
        else if (uVar17 == 0xa0) goto LAB_06133fe0;
LAB_06134268:
        lVar42 = *plVar40;
        if (*(int *)(lVar42 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar42 = *plVar40;
        }
        uStack000000000000007c = 0;
        uVar35 = 0;
        *(undefined4 *)(*(long *)(lVar42 + 0xb8) + 0xf80) = 0xffffffff;
        goto LAB_06133ea0;
      }
      if (((0x28 < uVar17 - 0x2007) ||
          ((1L << ((ulong)(uVar17 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) && (uVar17 != 0x2060))
      goto LAB_06134268;
LAB_06133fe0:
      if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar21 = FUN_061a94f4(uVar17,0);
      if ((uVar21 & 1) == 0) {
LAB_0613402c:
        if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_061a9550(in_stack_000012ac,0);
        if ((uVar21 & 1) != 0) goto LAB_06134058;
        if ((*(char *)((long)unaff_x19 + 0x309) != '\0') ||
           (uVar14 = *(int *)(in_stack_000001a0 + 7) + 1, iStack0000000000000058 <= (int)uVar14))
        goto LAB_06133e60;
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
        goto LAB_0613705c;
        if (uVar14 < *(uint *)(lVar42 + 0x18)) {
          uVar5 = *(undefined2 *)(lVar42 + (long)(int)uVar14 * (long)(int)unaff_w23 + 0x24);
          if (*(int *)(*(long *)Method_System_HashCode_Add<Color>__ + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar21 = FUN_061a9550(uVar5,0);
          if ((uVar21 & 1) == 0) goto LAB_06133e60;
LAB_06134298:
          uVar35 = 0;
          goto LAB_06133ea0;
        }
        goto LAB_0613719c;
      }
      if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      uVar21 = FUN_0619f994(0);
      if ((uVar21 & 1) != 0) goto LAB_0613402c;
LAB_06134058:
      if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      lVar42 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_hmdTrackingState
                         (0);
      if ((lVar42 == 0) || (*(long *)(lVar42 + 0x10) == 0)) goto LAB_0613705c;
      uVar21 = FUN_03c2db5c(*(long *)(lVar42 + 0x10),in_stack_000012ac,
                            *(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__
                           );
      if ((int)uStack000000000000004c <= *(int *)(in_stack_000001a0 + 7)) {
        if ((uVar21 & 1) == 0) {
          uStack000000000000007c = 0;
          goto LAB_06134298;
        }
LAB_061341c4:
        uVar35 = (uint)(in_stack_00000180 != 0);
        if (uVar14 != uVar15 || ((uStack000000000000007c ^ 0xffffffff) & 1) != 0) goto LAB_06133f34;
        goto LAB_06133e98;
      }
      if (*(int *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ + 0xe4)
          == 0) {
        thunk_FUN_02df485c();
      }
      lVar42 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator__get_hmdTrackingState
                         (0);
      if (((lVar42 == 0) || (unaff_x19[0x74] == 0)) ||
         (lVar28 = *(long *)(unaff_x19[0x74] + 0x38), lVar28 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar28 + 0x18) <= *(int *)(in_stack_000001a0 + 7) + 1U) goto LAB_0613719c;
      if (*(long *)(lVar42 + 0x18) == 0) goto LAB_0613705c;
      uVar17 = FUN_03c2db5c(*(long *)(lVar42 + 0x18),
                            *(undefined2 *)
                             (lVar28 + (long)(int)(*(int *)(in_stack_000001a0 + 7) + 1U) *
                                       (long)(int)unaff_w23 + 0x24),
                            *(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnInputModeChanged__
                           );
      if ((uVar21 & 1) != 0) goto LAB_061341c4;
      uStack000000000000007c = uVar17 & uStack000000000000007c;
      uVar35 = uStack000000000000007c & in_stack_00000180 != 0;
      if (((uStack000000000000007c & 1) != 0) || (((uVar17 ^ 1) & 1) != 0)) goto LAB_06133ea0;
      uStack000000000000007c = 0;
      if (uVar35 == 0) goto LAB_06133f34;
LAB_06133ed4:
      if (*(int *)(*plVar40 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_061840e4();
    }
  }
LAB_06133f34:
  if (*(int *)(*plVar40 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_061840e4();
  *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
LAB_06133f74:
  do {
    do {
      lVar42 = unaff_x19[0x91];
      in_stack_00001278 = in_stack_00001278 + 1;
      if (lVar42 == 0) goto LAB_0613705c;
      if ((int)*(uint *)(lVar42 + 0x18) <= (int)in_stack_00001278) {
LAB_06134474:
        if ((char)unaff_x19[0x4c] == '\0') {
LAB_0613453c:
          iVar16 = *(int *)((long)unaff_x19 + 0x26c);
          iVar19 = (int)unaff_x19[0x4e];
        }
        else {
          unaff_s12 = *(float *)((long)unaff_x19 + 0x264);
          auVar56 = ZEXT416((uint)DAT_010fd030);
          if (unaff_s12 - *(float *)(unaff_x19 + 0x4d) <= DAT_010fd030) goto LAB_0613453c;
          fVar46 = *(float *)((long)unaff_x19 + 0x20c);
          fVar47 = *(float *)((long)unaff_x19 + 0x27c);
          auVar56 = ZEXT416((uint)fVar47);
          iVar16 = *(int *)((long)unaff_x19 + 0x26c);
          iVar19 = (int)unaff_x19[0x4e];
          if ((fVar46 < fVar47) && (iVar16 < iVar19)) {
            if (*(float *)(unaff_x19 + 0x60) < *(float *)((long)unaff_x19 + 0x2fc) / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x60) = 0;
            }
            fVar48 = DAT_010fcf54;
            *(float *)(unaff_x19 + 0x4d) = fVar46;
            fVar62 = (unaff_s12 - fVar46) * 0.5;
            if (fVar62 <= fVar48) {
              fVar62 = fVar48;
            }
            fVar48 = (fVar46 + fVar62) * 20.0 + 0.5;
            fVar46 = DAT_010fd008;
            if (fVar48 != INFINITY) {
              fVar46 = (float)(int)fVar48 / 20.0;
            }
            if (fVar47 <= fVar46) {
              fVar46 = fVar47;
            }
            goto LAB_06134534;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x274) = 1;
        if (iVar19 <= iVar16) {
          uVar64 = FUN_054e5768((long)unaff_x19 + 0x26c,0);
          uVar65 = FUN_054fabf8((long)unaff_x19 + 0x20c,0);
          uVar64 = FUN_0536dcdc(*(undefined8 *)
                                 Method_System_HashCode_Combine<uint,_NativeArray<CAPI_ovrAvatar2Transform>,_NativeArray<CAPI_ovrAvatar2Transform>,_NativeArray<int>,_NativeArray<CAPI_ovrAvatar2NodeId>>__
                                ,uVar64,*(undefined8 *)
                                         Method_System_HashCode_Combine<string,_AssemblyVersion,_string,_string>__
                                ,uVar65,0);
          if (*(int *)(*plVar25 + 0xe4) == 0) {
            thunk_FUN_02df485c(*plVar25);
          }
          FUN_0630b598(uVar64,0);
        }
        if ((*(int *)(in_stack_000001a0 + 7) == 0) ||
           ((*(int *)(in_stack_000001a0 + 7) == 1 && (in_stack_000012ac == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          goto LAB_061345f8;
        }
        lVar42 = *plVar40;
        if (*(int *)(lVar42 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar42 = *plVar40;
        }
        lVar42 = **(long **)(lVar42 + 0xb8);
        if (lVar42 == 0) goto LAB_0613705c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_0613719c;
        iVar16 = *(int *)(lVar42 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38 + 0x54) << 2;
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x60), lVar42 == 0))
        goto LAB_0613705c;
        if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<bool>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
        FUN_0619c804(lVar42 + 0x20,0,0);
        fStack00000000000000b0 = (float)FUN_02ffcdb8(0);
        iVar19 = (int)unaff_x19[0x53];
        lVar42 = unaff_x19[0xee];
        in_stack_000000a8._4_4_ = unaff_s12;
        if (iVar19 < 0x401) {
          if (iVar19 == 0x100) {
            if ((int)unaff_x19[0x62] == 5) {
              if (lVar42 == 0) goto LAB_0613705c;
              if ((*(uint *)(lVar42 + 0x18) & 0xfffffffe) == 0) goto LAB_0613719c;
              if ((unaff_x19[0x74] == 0) ||
                 (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0)) goto LAB_0613705c;
              if (*(uint *)(lVar28 + 0x18) <= uStack000000000000005c) goto LAB_0613719c;
              fVar46 = *(float *)(lVar28 + (long)(int)uStack000000000000005c * 0x14 + 0x28);
            }
            else {
              if (lVar42 == 0) goto LAB_0613705c;
              if ((*(uint *)(lVar42 + 0x18) & 0xfffffffe) == 0) goto LAB_0613719c;
              fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
            }
            in_stack_000000a8._4_4_ = *(float *)(lVar42 + 0x34);
            fStack000000000000002c = (0.0 - fVar46) - fStack0000000000000028;
            fVar47 = *(float *)(lVar42 + 0x2c);
            fVar46 = *(float *)(lVar42 + 0x30);
LAB_061349f4:
            unaff_s12 = in_stack_00000030 + 0.0 + fVar47;
            fVar46 = fVar46 + fStack000000000000002c;
          }
          else {
            if (iVar19 != 0x200) {
              if (iVar19 != 0x400) goto LAB_06134a08;
              if ((int)unaff_x19[0x62] == 5) {
                if (lVar42 == 0) goto LAB_0613705c;
                if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
                if ((unaff_x19[0x74] == 0) ||
                   (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0)) goto LAB_0613705c;
                if (*(uint *)(lVar28 + 0x18) <= uStack000000000000005c) goto LAB_0613719c;
                in_stack_000012a8 =
                     *(float *)(lVar28 + (long)(int)uStack000000000000005c * 0x14 + 0x30);
              }
              else {
                if (lVar42 == 0) goto LAB_0613705c;
                if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
              }
              in_stack_000000a8._4_4_ = *(float *)(lVar42 + 0x28);
              fStack000000000000002c = fStack000000000000002c + (0.0 - in_stack_000012a8);
              fVar47 = *(float *)(lVar42 + 0x20);
              fVar46 = *(float *)(lVar42 + 0x24);
              goto LAB_061349f4;
            }
            if ((int)unaff_x19[0x62] != 5) {
              if (lVar42 == 0) goto LAB_0613705c;
              if ((*(int *)(lVar42 + 0x18) != 1) && (*(int *)(lVar42 + 0x18) != 0)) {
                fVar46 = *(float *)((long)unaff_x19 + 0x4cc);
                goto LAB_06134928;
              }
              goto LAB_0613719c;
            }
            if (lVar42 == 0) goto LAB_0613705c;
            if ((*(int *)(lVar42 + 0x18) == 1) || (*(int *)(lVar42 + 0x18) == 0)) goto LAB_0613719c;
            if ((unaff_x19[0x74] == 0) || (lVar28 = *(long *)(unaff_x19[0x74] + 0x58), lVar28 == 0))
            goto LAB_0613705c;
            if (*(uint *)(lVar28 + 0x18) <= uStack000000000000005c) goto LAB_0613719c;
            lVar28 = lVar28 + (long)(int)uStack000000000000005c * 0x14;
            in_stack_000000a8._4_4_ = (*(float *)(lVar42 + 0x28) + *(float *)(lVar42 + 0x34)) * 0.5;
            unaff_s12 = in_stack_00000030 + 0.0 +
                        ((float)*(undefined8 *)(lVar42 + 0x20) +
                        (float)*(undefined8 *)(lVar42 + 0x2c)) * 0.5;
            fVar46 = (0.0 - ((fStack0000000000000028 + *(float *)(lVar28 + 0x28) +
                             *(float *)(lVar28 + 0x30)) - fStack000000000000002c) * 0.5) +
                     ((float)((ulong)*(undefined8 *)(lVar42 + 0x20) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar42 + 0x2c) >> 0x20)) * 0.5;
          }
          in_stack_000000a8._4_4_ = in_stack_000000a8._4_4_ + 0.0;
          auVar56 = ZEXT416((uint)fVar46);
          fStack00000000000000b0 = unaff_s12;
        }
        else if (iVar19 == 0x800) {
          if (lVar42 == 0) goto LAB_0613705c;
          if ((*(int *)(lVar42 + 0x18) == 1) || (*(int *)(lVar42 + 0x18) == 0)) goto LAB_0613719c;
          unaff_s12 = (*(float *)(lVar42 + 0x28) + *(float *)(lVar42 + 0x34)) * 0.5;
          in_stack_000000a8._4_4_ = unaff_s12 + 0.0;
          auVar56 = ZEXT416((uint)(((float)((ulong)*(undefined8 *)(lVar42 + 0x20) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar42 + 0x2c) >> 0x20)) * 0.5 +
                                  0.0));
          fStack00000000000000b0 =
               ((float)*(undefined8 *)(lVar42 + 0x20) + (float)*(undefined8 *)(lVar42 + 0x2c)) * 0.5
               + in_stack_00000030 + 0.0;
        }
        else {
          if (iVar19 == 0x1000) {
            if (lVar42 == 0) goto LAB_0613705c;
            if ((*(int *)(lVar42 + 0x18) == 1) || (*(int *)(lVar42 + 0x18) == 0)) goto LAB_0613719c;
            fVar46 = *(float *)((long)unaff_x19 + 0x4fc);
            in_stack_000012a8 = *(float *)((long)unaff_x19 + 0x4f4);
LAB_06134928:
            fStack0000000000000028 = fStack0000000000000028 + fVar46 + in_stack_000012a8;
          }
          else {
            if (iVar19 != 0x2000) goto LAB_06134a08;
            if (lVar42 == 0) goto LAB_0613705c;
            if ((*(int *)(lVar42 + 0x18) == 1) || (*(int *)(lVar42 + 0x18) == 0)) goto LAB_0613719c;
            fStack0000000000000028 = *(float *)(unaff_x19 + 0x9a) - fStack0000000000000028;
          }
          unaff_s12 = in_stack_00000030 + 0.0;
          auVar56._0_4_ =
               ((float)*(undefined8 *)(lVar42 + 0x24) + (float)*(undefined8 *)(lVar42 + 0x30)) * 0.5
               + (0.0 - (fStack0000000000000028 - fStack000000000000002c) * 0.5);
          auVar56._4_4_ =
               ((float)((ulong)*(undefined8 *)(lVar42 + 0x24) >> 0x20) +
               (float)((ulong)*(undefined8 *)(lVar42 + 0x30) >> 0x20)) * 0.5 + 0.0;
          auVar56._8_8_ = 0;
          in_stack_000000a8._4_4_ = auVar56._4_4_;
          fStack00000000000000b0 =
               unaff_s12 + (*(float *)(lVar42 + 0x20) + *(float *)(lVar42 + 0x2c)) * 0.5;
        }
LAB_06134a08:
        auVar53 = auVar56;
        in_stack_00000100 = (float)FUN_02ffcdb8(0);
        auVar57 = auVar53;
        FUN_02ffcdb8(0);
        lVar42 = FUN_06141a60();
        if (lVar42 == 0) goto LAB_0613705c;
        FUN_0635fd58(lVar42,0);
        *(float *)((long)unaff_x19 + 0x6fc) = auVar57._0_4_;
        uStack000000000000007c =
             FUN_02ea7f18(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        FUN_02ea7f18(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__);
        }
        FUN_061371d8(0);
        FUN_06152bf0(&stack0x00001280,0x4000ffff,0);
        if (*(int *)(*plVar40 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar42 = unaff_x19[0x74];
        if (lVar42 == 0) goto LAB_0613705c;
        iVar19 = *(int *)(in_stack_000001a0 + 7);
        if (iVar19 < 1) {
          fStack00000000000000dc = 0.0;
          iVar18 = 0;
          goto LAB_06136c20;
        }
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0613705c;
        fStack0000000000000190 = auVar56._0_4_;
        fVar46 = 0.0;
        bVar9 = false;
        uVar15 = 0;
        uVar14 = 0;
        lVar28 = lVar42 + 0x20;
        fStack0000000000000120 = *(float *)(*(long *)(*plVar40 + 0xb8) + 0x1730);
        bVar7 = false;
        bVar8 = false;
        fStack00000000000000dc = 0.0;
        fStack0000000000000104 = auVar53._0_4_;
        uStack0000000000000048 = 0;
        bVar11 = false;
        iStack0000000000000060 = 0;
        fStack0000000000000054 = 0.0;
        fStack000000000000011c = 0.0;
        fStack000000000000013c = 0.0;
        fStack000000000000009c = 0.0;
        fStack0000000000000074 = fStack00000000000000d8;
        fStack0000000000000078 = 0.0;
        fStack00000000000000cc = fStack00000000000000d8;
        fStack00000000000000d0 = fStack00000000000000f4;
        in_stack_00000068._4_4_ = fStack00000000000000f4;
        uStack0000000000000070 = uStack00000000000000c8;
        fStack0000000000000094 = fStack00000000000000d8;
        fStack0000000000000098 = fStack00000000000000f4;
        uVar35 = 0;
        fStack00000000000000f0 = unaff_s12;
        goto LAB_06134b8c;
      }
      if (*(uint *)(lVar42 + 0x18) <= in_stack_00001278) goto LAB_0613719c;
      uVar14 = *(uint *)(lVar42 + (long)(int)in_stack_00001278 * 0x10 + 0x24);
      if (uVar14 == 0) goto LAB_06134474;
      if (5 < unaff_w29) {
        uVar64 = FUN_05504f24(&stack0x000012ac,0);
        uVar65 = FUN_054e5768(&stack0x00001278,0);
        uVar64 = FUN_0536dcdc(*(undefined8 *)
                               Method_System_HashCode_Combine<float,_float,_float,_float>__,uVar64,
                              *(undefined8 *)
                               Method_System_HashCode_Combine<ushort,_ushort,_ushort,_ushort>__,
                              uVar65,0);
        if (*(int *)(*plVar25 + 0xe4) == 0) {
          thunk_FUN_02df485c(*plVar25);
        }
        FUN_0630bbe4(uVar64,0);
        in_stack_00001298 = CONCAT44(3,*(undefined4 *)(in_stack_000001a0 + 7));
      }
      in_stack_000012ac = uVar14;
    } while (uVar14 == 0x1a);
    if ((uVar14 == 0x3c) && (*(char *)((long)unaff_x19 + 0x33a) != '\0')) {
      *(undefined1 *)((long)unaff_x19 + 0x469) = 1;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      uVar21 = FUN_0617e944();
      if (((uVar21 & 1) != 0) &&
         (in_stack_00001278 = in_stack_0000124c, *(int *)((long)unaff_x19 + 0x65c) == 0))
      goto LAB_06133f74;
    }
    else {
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
      lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
      *(undefined4 *)((long)unaff_x19 + 0x65c) = *(undefined4 *)(lVar42 + 0x20);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(lVar42 + 0x50);
      unaff_x19[0x20] = *(long *)(lVar42 + 0x40);
      LeanTween__value(unaff_x19 + 0x20);
    }
    if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
    goto LAB_0613705c;
    unaff_w21 = *(uint *)(in_stack_000001a0 + 7);
    if (*(uint *)(lVar42 + 0x18) <= unaff_w21) goto LAB_0613719c;
    lVar28 = lVar42 + 0x20;
    uVar35 = (uint)in_stack_00001298;
    lVar30 = unaff_x19[0x24];
    _fStack0000000000000190 = in_stack_00001298 & 0xffffffff;
    unaff_w22 = (uint)*(byte *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x34);
    *(undefined1 *)((long)unaff_x19 + 0x469) = 0;
    uVar15 = unaff_w21;
    if (uVar35 == unaff_w21) {
      uVar14 = (uint)(in_stack_00001298 >> 0x20);
      *(undefined4 *)((long)unaff_x19 + 0x65c) = 0;
      if (uVar14 == 0x2026) {
        *(long *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x10) = unaff_x19[0xcd];
        LeanTween__value();
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
        goto LAB_0613705c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
        lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
        *(long *)(lVar42 + 0x40) = unaff_x19[0xce];
        *(undefined4 *)(lVar42 + 0x20) = 0;
        LeanTween__value();
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
        goto LAB_0613705c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
        *(long *)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x48
                 ) = unaff_x19[0xcf];
        LeanTween__value();
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
        goto LAB_0613705c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
        *(int *)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x50)
             = (int)unaff_x19[0xd0];
        puVar10 = Method_System_HashCode_Combine<ulong,_int>__;
        lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
        if (*(int *)(lVar42 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar42 = *(long *)puVar10;
        }
        lVar42 = **(long **)(lVar42 + 0xb8);
        if (lVar42 == 0) goto LAB_0613705c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) goto LAB_0613719c;
        lVar42 = lVar42 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x38;
        *(int *)(lVar42 + 0x54) = *(int *)(lVar42 + 0x54) + 1;
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        in_stack_00001298 = CONCAT44(3,*(uint *)((long)unaff_x19 + 0x4a4) + 1);
        uVar15 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
      else if (uVar14 == 3) {
        if ((unaff_x19[0x20] == 0) || (lVar20 = FUN_0615ad34(unaff_x19[0x20],0), lVar20 == 0))
        goto LAB_0613705c;
        uVar64 = FUN_04f94af4(lVar20,3,*(undefined8 *)
                                        Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_3__
                             );
        if (*(uint *)(lVar42 + 0x18) <= unaff_w21) goto LAB_0613719c;
        *(undefined8 *)(lVar28 + (long)(int)unaff_w21 * (long)(int)unaff_w23 + 0x10) = uVar64;
        LeanTween__value();
        *(undefined1 *)(unaff_x19 + 0x65) = 1;
        uVar15 = *(uint *)((long)unaff_x19 + 0x4a4);
      }
    }
    plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
    in_stack_000012ac = uVar14;
    if (((int)uVar15 < *(int *)((long)unaff_x19 + 0x35c)) && (uVar14 != 3)) {
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= uVar15) goto LAB_0613719c;
      lVar42 = lVar42 + (long)(int)uVar15 * (long)(int)unaff_w23;
      *(undefined1 *)(lVar42 + 400) = 0;
      *(undefined2 *)(lVar42 + 0x24) = 0x200b;
      *(undefined4 *)(lVar42 + 0x5c) = 0;
      *(uint *)(in_stack_000001a0 + 7) = uVar15 + 1;
      goto LAB_06133f74;
    }
    iVar16 = *(int *)((long)unaff_x19 + 0x65c);
    fVar46 = 1.0;
    if (iVar16 == 0) {
      uVar15 = *(uint *)((long)unaff_x19 + 0x284);
      if ((uVar15 >> 4 & 1) == 0) {
        if ((uVar15 >> 3 & 1) == 0) {
          in_stack_00000138 = 1.0;
          if ((uVar15 >> 5 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar21 = FUN_054585ac(uVar14,0);
            if ((uVar21 & 1) != 0) {
              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar14 = FUN_05458834(uVar14,0);
              in_stack_00000138 = fStack0000000000000024;
              goto LAB_061308e8;
            }
          }
        }
        else {
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar21 = FUN_0545850c(uVar14,0);
          in_stack_00000138 = 1.0;
          if ((uVar21 & 1) != 0) {
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar14 = FUN_054589ac(uVar14,0);
            goto LAB_061308e8;
          }
        }
      }
      else {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_054585ac(uVar14,0);
        in_stack_00000138 = 1.0;
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar14 = FUN_05458834(uVar14,0);
LAB_061308e8:
          uVar14 = uVar14 & 0xffff;
        }
      }
      iVar16 = *(int *)((long)unaff_x19 + 0x65c);
      in_stack_000012ac = uVar14;
    }
    else {
      in_stack_00000138 = 1.0;
    }
    if (iVar16 != 0) {
      if (iVar16 != 1) {
        lVar42 = unaff_x19[0x74];
        fVar46 = 0.0;
        if (in_stack_000012ac != 3 && in_stack_000012ac != 0xad) {
          fVar46 = unaff_s11;
        }
        in_stack_00000168._4_4_ = 0.0;
        if (lVar42 == 0) goto LAB_0613705c;
        in_stack_00000128 = 0.0;
        fStack0000000000000124 = 0.0;
        unaff_s12 = unaff_s11;
        goto LAB_06130bc0;
      }
      lVar42 = FUN_06177770();
      if ((lVar42 == 0) || (lVar42 = *(long *)(lVar42 + 0x38), lVar42 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
      plVar40 = *(long **)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) *
                                    (long)(int)unaff_w23 + 0x30);
      if (plVar40 == (long *)0x0) goto LAB_0613705c;
      bVar12 = *(byte *)(*(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__ +
                        0x130);
      if ((*(byte *)(*plVar40 + 0x130) < bVar12) ||
         (*(long *)(*(long *)(*plVar40 + 200) + (ulong)bVar12 * 8 + -8) !=
          *(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(plVar40);
      }
      plVar25 = (long *)plVar40[3];
      if (plVar25 == (long *)0x0) {
        plVar25 = (long *)0x0;
        *_iStack0000000000000060 = 0;
      }
      else {
        lVar42 = *(long *)Method_System_Security_Cryptography_HashAlgorithm_ComputeHash__;
        bVar12 = *(byte *)(lVar42 + 0x130);
        if (*(byte *)(*plVar25 + 0x130) < bVar12) {
          plVar41 = (long *)0x0;
        }
        else {
          plVar41 = plVar25;
          if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar12 * 8 + -8) != lVar42) {
            plVar41 = (long *)0x0;
          }
        }
        *_iStack0000000000000060 = (long)plVar41;
        if (*(byte *)(*plVar25 + 0x130) < bVar12) {
          plVar25 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar12 * 8 + -8) != lVar42) {
          plVar25 = (long *)0x0;
        }
      }
      LeanTween__value(_iStack0000000000000060,plVar25);
      lVar42 = plVar40[5];
      *(int *)((long)unaff_x19 + 0x6bc) = (int)lVar42;
      puVar10 = Method_System_HashCode_Combine<ulong,_int>__;
      if (in_stack_000012ac == 0x3c) {
        in_stack_000012ac = (int)lVar42 + 0xe000;
      }
      else {
        lVar42 = *(long *)Method_System_HashCode_Combine<ulong,_int>__;
        if (*(int *)(lVar42 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar42 = *(long *)puVar10;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1d4) = *(undefined4 *)(*(long *)(lVar42 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x20] == 0) goto LAB_0613705c;
      fVar48 = *(float *)(unaff_x19 + 0x42);
      memmove(&stack0x000011e0,(void *)(unaff_x19[0x20] + 0x28),0x60);
      fVar47 = (float)FUN_063ecbd8(&stack0x000011e0,0);
      if (unaff_x19[0x20] == 0) goto LAB_0613705c;
      memmove(&stack0x000011e0,(void *)(unaff_x19[0x20] + 0x28),0x60);
      fVar49 = (float)FUN_063ecbe0(&stack0x000011e0,0);
      fVar62 = in_stack_000000e0;
      if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
        fVar62 = 1.0;
      }
      if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
      fVar62 = (fVar48 / fVar47) * fVar49 * fVar62;
      fVar47 = (float)FUN_063ecbd8(unaff_x19[0xd6] + 0x28,0);
      fVar48 = *(float *)(unaff_x19 + 0x42);
      if (fVar47 <= 0.0) {
        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
        fVar47 = (float)FUN_063ecbd8(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
        fVar49 = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
        fStack0000000000000124 = in_stack_000000e0;
        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
          fStack0000000000000124 = fVar46;
        }
        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
        fVar46 = (float)FUN_063ecc08(unaff_x19[0x20] + 0x28,0);
        if (plVar40[4] == 0) goto LAB_0613705c;
        FUN_063ed09c(&stack0x000012b0,plVar40[4],0);
        fVar50 = (float)FUN_063ececc(&stack0x000011c0,0);
        if (plVar40[4] == 0) goto LAB_0613705c;
        fVar63 = *(float *)((long)plVar40 + 0x2c);
        fVar66 = (float)FUN_063ed0d8(plVar40[4],0);
        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
        in_stack_00000128 = (float)FUN_063ecc08(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
        fVar51 = (float)FUN_063ecc30(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
        fVar58 = *(float *)((long)unaff_x19 + 0x43c);
        in_stack_00000168._4_4_ = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
        if (unaff_x19[0x20] == 0) goto LAB_0613705c;
        fStack0000000000000124 = (fVar48 / fVar47) * fVar49 * fStack0000000000000124;
        unaff_s12 = fStack0000000000000124 * (fVar46 / fVar50) * fVar63 * fVar66;
        fStack0000000000000124 = fStack0000000000000124 / unaff_s12;
        in_stack_00000168._4_4_ = fVar62 * fVar51 * fVar58 * in_stack_00000168._4_4_;
        in_stack_00000128 = fStack0000000000000124 * in_stack_00000128;
        fVar46 = (float)FUN_063ecc38(unaff_x19[0x20] + 0x28,0);
        fStack0000000000000124 = fStack0000000000000124 * fVar46;
      }
      else {
        if (*_iStack0000000000000060 == 0) goto LAB_0613705c;
        fVar47 = (float)FUN_063ecbd8(*_iStack0000000000000060 + 0x28,0);
        if (*_iStack0000000000000060 == 0) goto LAB_0613705c;
        fVar49 = (float)FUN_063ecbe0(*_iStack0000000000000060 + 0x28,0);
        if (plVar40[4] == 0) goto LAB_0613705c;
        fVar66 = *(float *)((long)plVar40 + 0x2c);
        fVar50 = in_stack_000000e0;
        if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
          fVar50 = fVar46;
        }
        fVar46 = (float)FUN_063ed0d8(plVar40[4],0);
        if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
        in_stack_00000128 = (float)FUN_063ecc08(unaff_x19[0xd6] + 0x28,0);
        if (*_iStack0000000000000060 == 0) goto LAB_0613705c;
        fVar63 = (float)FUN_063ecc30(*_iStack0000000000000060 + 0x28,0);
        if (*_iStack0000000000000060 == 0) goto LAB_0613705c;
        fVar51 = *(float *)((long)unaff_x19 + 0x43c);
        in_stack_00000168._4_4_ = (float)FUN_063ecbe0(*_iStack0000000000000060 + 0x28,0);
        if (unaff_x19[0xd6] == 0) goto LAB_0613705c;
        in_stack_00000168._4_4_ = fVar62 * fVar63 * fVar51 * in_stack_00000168._4_4_;
        unaff_s12 = (fVar48 / fVar47) * fVar49 * fVar50 * fVar66 * fVar46;
        fStack0000000000000124 = (float)FUN_063ecc38(unaff_x19[0xd6] + 0x28,0);
      }
      unaff_x19[0xcc] = (long)plVar40;
      LeanTween__value(in_stack_00000160,plVar40);
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
      lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
      *(long *)(lVar42 + 0x40) = unaff_x19[0x20];
      *(undefined4 *)(lVar42 + 0x20) = 1;
      *(float *)(lVar42 + 0x15c) = unaff_s12;
      LeanTween__value();
      lVar42 = unaff_x19[0x74];
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
      unaff_s13 = 0.0;
      *(int *)(lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x50) =
           (int)unaff_x19[0x24];
      *(int *)(unaff_x19 + 0x24) = (int)lVar30;
      goto LAB_06130bac;
    }
    if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
    goto LAB_0613705c;
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
    *in_stack_00000160 =
         *(long *)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 +
                  0x30);
    LeanTween__value(in_stack_00000160);
    plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  } while (*in_stack_00000160 == 0);
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  unaff_x19[0x20] =
       *(long *)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x40)
  ;
  LeanTween__value(unaff_x19 + 0x20);
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  unaff_x19[0x23] =
       *(long *)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x48)
  ;
  LeanTween__value(unaff_x19 + 0x23);
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  uVar15 = *(uint *)(in_stack_000001a0 + 7);
  uVar14 = *(uint *)(lVar42 + 0x18);
  if (uVar14 <= uVar15) goto LAB_0613719c;
  *(undefined4 *)(unaff_x19 + 0x24) =
       *(undefined4 *)(lVar42 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x30);
  if (uVar35 == unaff_w21) {
    lVar28 = unaff_x19[0x91];
    if (lVar28 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar28 + 0x18) <= in_stack_00001278) goto LAB_0613719c;
    if ((*(int *)(lVar28 + (long)(int)in_stack_00001278 * 0x10 + 0x24) != 10) ||
       (uVar15 == *(uint *)(unaff_x19 + 0x95)))
    goto 
    UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationProvider__set_forwardTransformation
    ;
    if (uVar14 <= uVar15 - 1) goto LAB_0613719c;
    lVar28 = unaff_x19[0x20];
    if (lVar28 == 0) goto LAB_0613705c;
    fVar47 = *(float *)(lVar42 + 0x20 + (long)(int)(uVar15 - 1) * (long)(int)unaff_w23 + 0x38);
  }
  else {

    UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportationProvider__set_forwardTransformation
    :
    lVar28 = unaff_x19[0x20];
    if (lVar28 == 0) goto LAB_0613705c;
    fVar47 = *(float *)(unaff_x19 + 0x42);
  }
  fVar48 = (float)FUN_063ecbd8(lVar28 + 0x28,0);
  if (unaff_x19[0x20] == 0) goto LAB_0613705c;
  fVar49 = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
  fVar62 = in_stack_000000e0;
  if (*(char *)((long)unaff_x19 + 0x33e) != '\0') {
    fVar62 = fVar46;
  }
  if (uVar35 == unaff_w21) {
    fStack0000000000000124 = 0.0;
    in_stack_00000128 = 0.0;
    if (in_stack_000012ac != 0x2026) goto LAB_06130a78;
  }
  else {
LAB_06130a78:
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    in_stack_00000128 = (float)FUN_063ecc08(unaff_x19[0x20] + 0x28,0);
    if (unaff_x19[0x20] == 0) goto LAB_0613705c;
    fStack0000000000000124 = (float)FUN_063ecc38(unaff_x19[0x20] + 0x28,0);
  }
  lVar42 = unaff_x19[0xcc];
  if ((lVar42 == 0) || (*(long *)(lVar42 + 0x20) == 0)) goto LAB_0613705c;
  fVar66 = *(float *)((long)unaff_x19 + 0x43c);
  fVar50 = *(float *)(lVar42 + 0x2c);
  fVar46 = (float)FUN_063ed0d8(*(long *)(lVar42 + 0x20),0);
  if (unaff_x19[0x20] == 0) goto LAB_0613705c;
  fVar63 = (float)FUN_063ecc30(unaff_x19[0x20] + 0x28,0);
  if (unaff_x19[0x20] == 0) goto LAB_0613705c;
  fVar51 = *(float *)((long)unaff_x19 + 0x43c);
  in_stack_00000168._4_4_ = (float)FUN_063ecbe0(unaff_x19[0x20] + 0x28,0);
  lVar42 = unaff_x19[0x74];
  if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0613705c;
  if (*(uint *)(lVar28 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar28 = lVar28 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(undefined4 *)(lVar28 + 0x20) = 0;
  fVar62 = ((in_stack_00000138 * fVar47) / fVar48) * fVar49 * fVar62;
  unaff_s12 = fVar62 * fVar66 * fVar50 * fVar46;
  in_stack_00000168._4_4_ = fVar62 * fVar63 * fVar51 * in_stack_00000168._4_4_;
  *(float *)(lVar28 + 0x15c) = unaff_s12;
  uVar14 = *(uint *)(unaff_x19 + 0x24);
  if (uVar14 == 0) {
    unaff_s13 = *(float *)(unaff_x19 + 0xc6);
  }
  else {
    lVar28 = unaff_x19[0xe4];
    if (lVar28 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar28 + 0x18) <= uVar14) goto LAB_0613719c;
    lVar28 = *(long *)(lVar28 + (long)(int)uVar14 * 8 + 0x20);
    if (lVar28 == 0) goto LAB_0613705c;
    unaff_s13 = *(float *)(lVar28 + 0x54);
  }
LAB_06130bac:
  fVar46 = 0.0;
  if (in_stack_000012ac != 3 && in_stack_000012ac != 0xad) {
    fVar46 = unaff_s12;
  }
LAB_06130bc0:
  lVar42 = *(long *)(lVar42 + 0x38);
  if (lVar42 == 0) goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  *(short *)(lVar42 + 0x24) = (short)in_stack_000012ac;
  *(int *)(lVar42 + 0x58) = (int)unaff_x19[0x42];
  *(int *)(lVar42 + 0x160) = (int)unaff_x19[0xa0];
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  *(int *)(lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x164) =
       (int)unaff_x19[0x2b];
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  *(undefined4 *)
   (lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23 + 0x16c) =
       *(undefined4 *)((long)unaff_x19 + 0x15c);
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  auVar53 = *_fStack00000000000000b0;
  *(undefined4 *)(lVar42 + 0x188) = *(undefined4 *)_fStack00000000000000b0[1];
  *(long *)(lVar42 + 0x180) = auVar53._8_8_;
  *(long *)(lVar42 + 0x178) = auVar53._0_8_;
  if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar42 + 0x18) <= *(uint *)(in_stack_000001a0 + 7)) goto LAB_0613719c;
  lVar42 = lVar42 + (long)(int)*(uint *)(in_stack_000001a0 + 7) * (long)(int)unaff_w23;
  lVar28 = *(long *)(lVar42 + 0x38);
  *(undefined4 *)(lVar42 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x284);
  if (lVar28 == 0) {
    if ((*in_stack_00000160 == 0) || (lVar42 = *(long *)(*in_stack_00000160 + 0x20), lVar42 == 0))
    goto LAB_0613705c;
    FUN_063ed09c(&stack0x000012b0,lVar42,0);
    unaff_x25[1] = in_stack_000012b8;
    *unaff_x25 = in_stack_000012b0;
  }
  else {
    FUN_063ed09c(&stack0x000005a0,lVar28,0);
  }
  if (in_stack_000012ac >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    in_stack_00000180 = FUN_05455f40(in_stack_000012ac,0);
    in_stack_00000180 = in_stack_00000180 & 1;
  }
  else {
    in_stack_00000180 = 0;
  }
  in_stack_000000f8 = *(float *)(unaff_x19 + 0x5a);
  if (((in_stack_000000a8 & 0x100000000) != 0) && (*(int *)((long)unaff_x19 + 0x65c) == 0)) {
    if (*in_stack_00000160 == 0) goto LAB_0613705c;
    iVar16 = *(int *)(in_stack_000001a0 + 7);
    uVar14 = *(uint *)(*in_stack_00000160 + 0x28);
    if (iVar16 < (int)uStack000000000000004c) {
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
      goto LAB_0613705c;
      uVar15 = iVar16 + 1;
      if (*(uint *)(lVar42 + 0x18) <= uVar15) goto LAB_0613719c;
      if (*(int *)(lVar42 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23) == 0) {
        lVar42 = *(long *)(lVar42 + 0x20 + (long)(int)uVar15 * (long)(int)unaff_w23 + 0x10);
        if ((((lVar42 == 0) || (unaff_x19[0x20] == 0)) ||
            (lVar28 = *(long *)(unaff_x19[0x20] + 0x178), lVar28 == 0)) ||
           (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto LAB_0613705c;
        uVar21 = FUN_04f7a520(lVar28,uVar14 | *(int *)(lVar42 + 0x28) << 0x10,&stack0x00001190,
                              *(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_0__
                             );
        if ((uVar21 & 1) != 0) {
          FUN_063f178c(&stack0x000012b0,&stack0x00001190,0);
          unaff_x25[0x17b] = in_stack_000012b8;
          unaff_x25[0x17a] = in_stack_000012b0;
          FUN_063f15e0(&stack0x00001170,0);
          uVar21 = FUN_063f17c8(&stack0x00001190,0);
          if ((uVar21 & 0x100) != 0) {
            in_stack_000000f8 = 0.0;
          }
        }
      }
      iVar16 = *(int *)(in_stack_000001a0 + 7);
    }
    if (0 < iVar16) {
      if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x38), lVar42 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= iVar16 - 1U) goto LAB_0613719c;
      lVar42 = *(long *)(lVar42 + (ulong)(iVar16 - 1U) * (ulong)unaff_w23 + 0x30);
      if (lVar42 == 0) goto LAB_0613705c;
      uVar15 = *(uint *)(lVar42 + 0x28);
      lVar42 = FUN_06177770();
      if ((lVar42 == 0) || (lVar42 = *(long *)(lVar42 + 0x38), lVar42 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar42 + 0x18) <= *(int *)(in_stack_000001a0 + 7) - 1U) goto LAB_0613719c;
      if (*(int *)(lVar42 + (long)(int)(*(int *)(in_stack_000001a0 + 7) - 1U) * (long)(int)unaff_w23
                  + 0x20) == 0) {
        if (((unaff_x19[0x20] == 0) || (lVar42 = *(long *)(unaff_x19[0x20] + 0x178), lVar42 == 0))
           || (lVar42 = *(long *)(lVar42 + 0x40), lVar42 == 0)) goto LAB_0613705c;
        uVar21 = FUN_04f7a520(lVar42,uVar15 | uVar14 << 0x10,&stack0x00001190,
                              *(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__80_0__
                             );
        if ((uVar21 & 1) != 0) {
          FUN_063f17b4(&stack0x000012b0,&stack0x00001190,0);
          unaff_x25[0x17b] = in_stack_000012b8;
          unaff_x25[0x17a] = in_stack_000012b0;
          FUN_063f15e0(&stack0x00001170,0);
          FUN_063f1440(0);
          uVar21 = FUN_063f17c8(&stack0x00001190,0);
          if ((uVar21 & 0x100) != 0) {
            in_stack_000000f8 = 0.0;
          }
        }
      }
    }
  }
  unaff_s14 = 1.0;
  if ((unaff_x19[0x74] == 0) || (unaff_x20 = *(long *)(unaff_x19[0x74] + 0x38), unaff_x20 == 0))
  goto LAB_0613705c;
  param_2 = &stack0x00001000;
  param_1 = in_stack_000001a0;
  unaff_s11 = fVar46;
  goto code_r0x06130d94;
LAB_06134b8c:
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_0613719c;
  uVar38 = (ulong)uVar14;
  piVar37 = (int *)(lVar28 + uVar38 * 0x178);
  lVar30 = *(long *)(piVar37 + 8);
  uVar44 = *(ushort *)(piVar37 + 1);
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar17 = (uint)uVar44;
  bVar12 = FUN_05455f40(uVar44,0);
  if (*(uint *)(lVar42 + 0x18) <= uVar14) goto LAB_0613719c;
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x50), lVar20 == 0))
  goto LAB_0613705c;
  uVar33 = *(uint *)(lVar28 + uVar38 * 0x178 + 0x3c);
  if (*(uint *)(lVar20 + 0x18) <= uVar33) goto LAB_0613719c;
  lVar20 = lVar20 + (long)(int)uVar33 * 0x60;
  iVar19 = *(int *)(lVar20 + 0x28);
  iVar18 = *(int *)(lVar20 + 0x2c);
  uVar2 = *(uint *)(lVar20 + 0x40);
  uVar3 = *(uint *)(lVar20 + 0x44);
  fVar50 = *(float *)(lVar20 + 0x58);
  fVar47 = *(float *)(lVar20 + 0x5c);
  uVar39 = *(uint *)(lVar20 + 0x6c);
  fVar66 = *(float *)(lVar20 + 0x60);
  fVar58 = *(float *)(lVar20 + 100);
  iVar4 = *(int *)(lVar20 + 0x20);
  fVar51 = *(float *)(lVar20 + 0x70);
  fVar63 = *(float *)(lVar20 + 0x74);
  fVar49 = *(float *)(lVar20 + 0x50);
  fVar62 = *(float *)(lVar20 + 0x78);
  fVar48 = *(float *)(lVar20 + 0x7c);
  if ((int)uVar39 < 9) {
    if ((int)uVar39 < 3) {
      if (uVar39 == 1) {
        if ((char)unaff_x19[0x1e] == '\0') {
          in_stack_00000100 = fVar58 + 0.0;
        }
        else {
          in_stack_00000100 = 0.0 - fVar47;
        }
        fStack00000000000000f0 = 0.0;
        fStack0000000000000104 = 0.0;
      }
      else if (uVar39 == 2) {
        in_stack_00000100 = (fVar58 + fVar66 * 0.5) - fVar47 * 0.5;
LAB_06134e88:
        fStack0000000000000104 = 0.0;
        fStack00000000000000f0 = 0.0;
      }
      else {
LAB_06134d58:
        uVar44 = NEON_umaxv(CONCAT26(-(ushort)(uVar44 == (ushort)((ulong)DAT_010fc910 >> 0x30)),
                                     CONCAT24(-(ushort)(uVar44 ==
                                                       (ushort)((ulong)DAT_010fc910 >> 0x20)),
                                              CONCAT22(-(ushort)(uVar44 ==
                                                                (ushort)((ulong)DAT_010fc910 >> 0x10
                                                                        )),
                                                       -(ushort)(uVar44 == (ushort)DAT_010fc910)))),
                            2);
        if (((((uVar44 & 1) == 0) && (uVar17 != 3)) && (uVar39 == 8)) && ((int)uVar14 <= (int)uVar3)
           ) goto LAB_06134d98;
      }
    }
    else if (uVar39 != 3) {
      if (uVar39 != 4) goto LAB_06134d58;
      fStack00000000000000f0 = 0.0;
      if ((char)unaff_x19[0x1e] != '\0') {
        fVar47 = 0.0;
      }
      in_stack_00000100 = (fVar66 + fVar58) - fVar47;
      fStack0000000000000104 = 0.0;
    }
  }
  else if (uVar39 == 0x10) {
    if ((int)uVar14 <= (int)uVar3) {
      if (uVar17 < 0xad) {
        if ((uVar17 != 3) && (uVar17 != 10)) goto LAB_06134d98;
      }
      else if ((uVar17 != 0xad) && ((uVar17 != 0x200b && (uVar17 != 0x2060)))) {
LAB_06134d98:
        if (*(uint *)(lVar42 + 0x18) <= uVar2) goto LAB_0613719c;
        uVar5 = *(undefined2 *)(lVar28 + (long)(int)uVar2 * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_054591ec(uVar5,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar33 < (int)unaff_x19[0x97];
        }
        else {
          bVar1 = false;
        }
        if ((!bVar1 && (uVar39 >> 4 & 1) == 0) && (fVar47 <= fVar66)) {
          in_stack_00000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_00000100 = fVar66;
          }
          in_stack_00000100 = fVar58 + in_stack_00000100;
          goto LAB_06134e88;
        }
        if (((uVar14 == 0) || (uVar33 != uVar35)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x35c)))
        {
          in_stack_00000100 = -0.0;
          if ((char)unaff_x19[0x1e] != '\0') {
            in_stack_00000100 = fVar66;
          }
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          in_stack_00000100 = fVar58 + in_stack_00000100;
          uStack0000000000000048 = FUN_054594b0(uVar17,0);
          fStack0000000000000104 = 0.0;
          fStack00000000000000f0 = 0.0;
        }
        else {
          cVar24 = (char)unaff_x19[0x1e];
          iVar18 = (iVar18 - iVar4) - (uStack0000000000000048 & 1);
          fVar58 = -fVar47;
          if (cVar24 != '\0') {
            fVar58 = fVar47;
          }
          if (iVar18 < 1) {
            fVar47 = 1.0;
            iVar18 = 1;
          }
          else {
            fVar47 = *(float *)((long)unaff_x19 + 0x30c);
          }
          if (uVar17 == 9) {
LAB_06136b4c:
            fVar47 = ((fVar66 + fVar58) * (1.0 - fVar47)) / (float)iVar18;
            if (cVar24 == '\0') {
              in_stack_00000100 = in_stack_00000100 + fVar47;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              in_stack_00000100 = in_stack_00000100 - fVar47;
            }
          }
          else {
            if (uVar17 != 0xa0) {
              if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar21 = FUN_054594b0(uVar17,0);
              cVar24 = (char)unaff_x19[0x1e];
              if ((uVar21 & 1) != 0) goto LAB_06136b4c;
            }
            fVar47 = ((fVar66 + fVar58) * fVar47) /
                     (float)(int)((iVar4 - ((uStack0000000000000048 ^ 0xffffffff) & 1)) + iVar19);
            if (cVar24 == '\0') {
              in_stack_00000100 = in_stack_00000100 + fVar47;
              fStack0000000000000104 = fStack0000000000000104 + 0.0;
              fStack00000000000000f0 = fStack00000000000000f0 + 0.0;
            }
            else {
              in_stack_00000100 = in_stack_00000100 - fVar47;
            }
          }
        }
      }
    }
  }
  else if (uVar39 == 0x20) {
    in_stack_00000100 = (fVar58 + fVar66 * 0.5) - (fVar51 + fVar62) * 0.5;
    fStack00000000000000f0 = 0.0;
    fStack0000000000000104 = 0.0;
  }
  uVar39 = (uint)*(undefined8 *)(lVar42 + 0x18);
  if (uVar39 <= uVar14) goto LAB_0613719c;
  lVar20 = lVar28 + uVar38 * 0x178;
  fVar47 = fStack00000000000000b0 + in_stack_00000100;
  fVar66 = fStack0000000000000190 + fStack0000000000000104;
  fVar58 = in_stack_000000a8._4_4_ + fStack00000000000000f0;
  plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  if (*(char *)(lVar20 + 0x170) == '\0') goto LAB_061356c0;
  iVar19 = *piVar37;
  if (iVar19 == 0) {
    fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x34c) * (float)(int)uVar33,1.0);
    iVar18 = *(int *)((long)unaff_x19 + 0x344);
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        lVar31 = lVar28 + uVar38 * 0x178;
        *(undefined4 *)(lVar31 + 100) = 0;
        *(undefined4 *)(lVar31 + 0x8c) = 0;
        *(undefined4 *)(lVar31 + 0xb4) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xdc) = 0x3f800000;
      }
      else if (iVar18 == 1) {
        lVar31 = lVar28 + uVar38 * 0x178;
        fVar48 = *(float *)(lVar31 + 0x48);
        pfVar32 = (float *)(lVar31 + 100);
        if (*(int *)((long)unaff_x19 + 0x29c) == 0x208) {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar62 = *(float *)(lVar31 + 0x70);
          *pfVar32 = fVar46 + ((in_stack_00000100 + fVar48) - *(float *)(unaff_x19 + 0x9e)) /
                              (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar31 + 0x8c) =
               fVar46 + ((in_stack_00000100 + fVar62) - *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar31 + 0xb4) =
               fVar46 + ((in_stack_00000100 + *(float *)(lVar31 + 0x98)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
          *(float *)(lVar31 + 0xdc) =
               fVar46 + ((in_stack_00000100 + *(float *)(lVar31 + 0xc0)) -
                        *(float *)(unaff_x19 + 0x9e)) /
                        (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
        }
        else {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar62 = fVar62 - fVar51;
          fVar63 = *(float *)(lVar31 + 0x70);
          fVar59 = *(float *)(lVar31 + 0x98);
          fVar60 = *(float *)(lVar31 + 0xc0);
          *pfVar32 = fVar46 + (fVar48 - fVar51) / fVar62;
          *(float *)(lVar31 + 0x8c) = fVar46 + (fVar63 - fVar51) / fVar62;
          *(float *)(lVar31 + 0xb4) = fVar46 + (fVar59 - fVar51) / fVar62;
          *(float *)(lVar31 + 0xdc) = fVar46 + (fVar60 - fVar51) / fVar62;
        }
      }
    }
    else if (iVar18 == 2) {
      lVar31 = lVar28 + uVar38 * 0x178;
      *(float *)(lVar31 + 100) =
           fVar46 + ((in_stack_00000100 + *(float *)(lVar31 + 0x48)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar31 + 0x8c) =
           fVar46 + ((in_stack_00000100 + *(float *)(lVar31 + 0x70)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar31 + 0xb4) =
           fVar46 + ((in_stack_00000100 + *(float *)(lVar31 + 0x98)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
      *(float *)(lVar31 + 0xdc) =
           fVar46 + ((in_stack_00000100 + *(float *)(lVar31 + 0xc0)) - *(float *)(unaff_x19 + 0x9e))
                    / (*(float *)(unaff_x19 + 0x9f) - *(float *)(unaff_x19 + 0x9e));
    }
    else if (iVar18 == 3) {
      iVar18 = (int)unaff_x19[0x69];
      if (iVar18 < 2) {
        if (iVar18 == 0) {
          lVar31 = lVar28 + uVar38 * 0x178;
          *(undefined4 *)(lVar31 + 0x68) = 0;
          *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
          *(undefined4 *)(lVar31 + 0xb8) = 0;
          *(undefined4 *)(lVar31 + 0xe0) = 0x3f800000;
        }
        else if (iVar18 == 1) {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar48 = fVar48 - fVar63;
          fVar62 = (*(float *)(lVar31 + 0x74) - fVar63) / fVar48;
          fVar48 = fVar46 + (*(float *)(lVar31 + 0x4c) - fVar63) / fVar48;
          *(float *)(lVar31 + 0x68) = fVar48;
          *(float *)(lVar31 + 0xb8) = fVar48;
          goto LAB_061352bc;
        }
      }
      else if (iVar18 == 2) {
        lVar31 = lVar28 + uVar38 * 0x178;
        fVar48 = fVar46 + (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
                          (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4)
                          );
        *(float *)(lVar31 + 0x68) = fVar48;
        fVar62 = *(float *)((long)unaff_x19 + 0x4f4);
        fVar63 = *(float *)((long)unaff_x19 + 0x4fc);
        *(float *)(lVar31 + 0xb8) = fVar48;
        fVar62 = (*(float *)(lVar31 + 0x74) - fVar62) / (fVar63 - fVar62);
LAB_061352bc:
        *(float *)(lVar31 + 0x90) = fVar46 + fVar62;
        *(float *)(lVar31 + 0xe0) = fVar46 + fVar62;
      }
      else if (iVar18 == 3) {
        if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_0630b598(*(undefined8 *)
                      Method_System_HashCode_Combine<Vector4,_Vector4,_Vector4,_SHCoefficients>__,0)
        ;
        uVar39 = (uint)*(undefined8 *)(lVar42 + 0x18);
      }
      if (uVar39 <= uVar14) goto LAB_0613719c;
      lVar31 = lVar28 + uVar38 * 0x178;
      fVar63 = *(float *)(lVar31 + 0x138);
      fVar62 = (1.0 - (*(float *)(lVar31 + 0x68) + *(float *)(lVar31 + 0x90)) * fVar63) * 0.5;
      fVar48 = fVar46 + *(float *)(lVar31 + 0x68) * fVar63 + fVar62;
      fVar46 = fVar46 + fVar62 + *(float *)(lVar31 + 0x90) * fVar63;
      *(float *)(lVar31 + 100) = fVar48;
      *(float *)(lVar31 + 0x8c) = fVar48;
      *(float *)(lVar31 + 0xb4) = fVar46;
      *(float *)(lVar31 + 0xdc) = fVar46;
    }
    iVar18 = (int)unaff_x19[0x69];
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        if (uVar39 <= uVar14) goto LAB_0613719c;
        lVar31 = lVar28 + uVar38 * 0x178;
        *(undefined4 *)(lVar31 + 0x68) = 0;
        *(undefined4 *)(lVar31 + 0x90) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xb8) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xe0) = 0;
      }
      else if (iVar18 == 1) {
        if (uVar14 < uVar39) {
          lVar31 = lVar28 + uVar38 * 0x178;
          fVar49 = fVar49 - fVar50;
          fVar46 = (*(float *)(lVar31 + 0x4c) - fVar50) / fVar49;
          fVar49 = (*(float *)(lVar31 + 0x74) - fVar50) / fVar49;
          *(float *)(lVar31 + 0x68) = fVar46;
          goto LAB_06135434;
        }
        goto LAB_0613719c;
      }
    }
    else if (iVar18 == 2) {
      if (uVar39 <= uVar14) goto LAB_0613719c;
      lVar31 = lVar28 + uVar38 * 0x178;
      fVar46 = (*(float *)(lVar31 + 0x4c) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
      *(float *)(lVar31 + 0x68) = fVar46;
      fVar49 = (*(float *)(lVar31 + 0x74) - *(float *)((long)unaff_x19 + 0x4f4)) /
               (*(float *)((long)unaff_x19 + 0x4fc) - *(float *)((long)unaff_x19 + 0x4f4));
LAB_06135434:
      *(float *)(lVar31 + 0x90) = fVar49;
      *(float *)(lVar31 + 0xb8) = fVar49;
      *(float *)(lVar31 + 0xe0) = fVar46;
    }
    else if (iVar18 == 3) {
      if (uVar39 <= uVar14) goto LAB_0613719c;
      lVar31 = lVar28 + uVar38 * 0x178;
      fVar62 = *(float *)(lVar31 + 0x138);
      fVar48 = (1.0 - (*(float *)(lVar31 + 100) + *(float *)(lVar31 + 0xb4)) / fVar62) * 0.5;
      fVar46 = *(float *)(lVar31 + 100) / fVar62 + fVar48;
      fVar48 = fVar48 + *(float *)(lVar31 + 0xb4) / fVar62;
      *(float *)(lVar31 + 0x68) = fVar46;
      *(float *)(lVar31 + 0xe0) = fVar46;
      *(float *)(lVar31 + 0x90) = fVar48;
      *(float *)(lVar31 + 0xb8) = fVar48;
    }
    if (uVar39 <= uVar14) goto LAB_0613719c;
    lVar31 = lVar28 + uVar38 * 0x178;
    fVar46 = ABS(auVar57._0_4_) * *(float *)(lVar31 + 0x13c) * (1.0 - *(float *)(unaff_x19 + 0x60));
    if ((*(char *)(lVar31 + 0x34) == '\0') &&
       ((*(byte *)(lVar28 + uVar38 * 0x178 + 0x16c) & 1) != 0)) {
      fVar46 = -fVar46;
    }
    lVar31 = lVar28 + uVar38 * 0x178;
    *(float *)(lVar31 + 0x60) = fVar46;
    *(float *)(lVar31 + 0x88) = fVar46;
    *(float *)(lVar31 + 0xb0) = fVar46;
    *(float *)(lVar31 + 0xd8) = fVar46;
  }
  plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  if (((int)uVar14 < (int)unaff_x19[0x6c]) &&
     ((int)fStack00000000000000dc < *(int *)((long)unaff_x19 + 0x364))) {
    if (((int)unaff_x19[0x6d] <= (int)uVar33) || ((int)unaff_x19[0x62] == 5)) {
      if (((int)uVar33 < (int)unaff_x19[0x6d]) && ((int)unaff_x19[0x62] == 5)) {
        if (uVar14 < uVar39) {
          if (*(uint *)(lVar28 + uVar38 * 0x178 + 0x40) == uStack000000000000005c) {
            lVar20 = lVar28 + uVar38 * 0x178;
            *(ulong *)(lVar20 + 0x48) =
                 CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x48) >> 0x20),
                          fVar47 + (float)*(undefined8 *)(lVar20 + 0x48));
            *(float *)(lVar20 + 0x50) = fVar58 + *(float *)(lVar20 + 0x50);
            *(ulong *)(lVar20 + 0x70) =
                 CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x70) >> 0x20),
                          fVar47 + (float)*(undefined8 *)(lVar20 + 0x70));
            *(float *)(lVar20 + 0x78) = fVar58 + *(float *)(lVar20 + 0x78);
            *(ulong *)(lVar20 + 0x98) =
                 CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x98) >> 0x20),
                          fVar47 + (float)*(undefined8 *)(lVar20 + 0x98));
            *(float *)(lVar20 + 0xa0) = fVar58 + *(float *)(lVar20 + 0xa0);
            *(ulong *)(lVar20 + 0xc0) =
                 CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0xc0) >> 0x20),
                          fVar47 + (float)*(undefined8 *)(lVar20 + 0xc0));
            *(float *)(lVar20 + 200) = fVar58 + *(float *)(lVar20 + 200);
            plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
            goto LAB_06135658;
          }
          goto LAB_06135588;
        }
        goto LAB_0613719c;
      }
      goto LAB_06135588;
    }
    if (uVar39 <= uVar14) goto LAB_0613719c;
    lVar20 = lVar28 + uVar38 * 0x178;
    *(ulong *)(lVar20 + 0x48) =
         CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x48) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar20 + 0x48));
    *(float *)(lVar20 + 0x50) = fVar58 + *(float *)(lVar20 + 0x50);
    *(ulong *)(lVar20 + 0x70) =
         CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x70) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar20 + 0x70));
    *(float *)(lVar20 + 0x78) = fVar58 + *(float *)(lVar20 + 0x78);
    *(ulong *)(lVar20 + 0x98) =
         CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x98) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar20 + 0x98));
    *(float *)(lVar20 + 0xa0) = fVar58 + *(float *)(lVar20 + 0xa0);
    *(ulong *)(lVar20 + 0xc0) =
         CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0xc0) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar20 + 0xc0));
    *(float *)(lVar20 + 200) = fVar58 + *(float *)(lVar20 + 200);
  }
  else {
LAB_06135588:
    if (uVar39 <= uVar14) goto LAB_0613719c;
    if (DAT_06db4c71 == '\0') {
      FUN_02d965b8(PTR_DAT_069fb978);
      uVar39 = *(uint *)(lVar42 + 0x18);
      DAT_06db4c71 = '\x01';
    }
    puVar10 = PTR_DAT_069fb978;
    uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8) + 1);
    *(undefined8 *)(lVar28 + uVar38 * 0x178 + 0x48) =
         **(undefined8 **)(*(long *)PTR_DAT_069fb978 + 0xb8);
    *(undefined4 *)(lVar28 + uVar38 * 0x178 + 0x50) = uVar45;
    if (uVar39 <= uVar14) goto LAB_0613719c;
    lVar31 = lVar28 + uVar38 * 0x178;
    uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x70) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    *(undefined4 *)(lVar31 + 0x78) = uVar45;
    uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined8 *)(lVar31 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    *(undefined4 *)(lVar31 + 0xa0) = uVar45;
    uVar64 = **(undefined8 **)(*(long *)puVar10 + 0xb8);
    uVar45 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
    *(undefined1 *)(lVar20 + 0x170) = 0;
    *(undefined8 *)(lVar31 + 0xc0) = uVar64;
    *(undefined4 *)(lVar31 + 200) = uVar45;
    plVar40 = (long *)Method_System_HashCode_Combine<ulong,_int>__;
  }
LAB_06135658:
  iVar18 = FUN_06318350(0);
  *(bool *)((long)unaff_x19 + 0x174) = iVar18 == 1;
  if (iVar19 == 0) {
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8d8);
  }
  else {
    if (iVar19 != 1) goto LAB_061356c0;
    puVar26 = (undefined8 *)(*unaff_x19 + 0x8f8);
  }
  (*(code *)*puVar26)();
LAB_061356c0:
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
  lVar20 = lVar20 + uVar38 * 0x178;
  uVar64 = *(undefined8 *)(lVar20 + 0x114);
  *(float *)(lVar20 + 0x11c) = fVar58 + *(float *)(lVar20 + 0x11c);
  *(undefined8 *)(lVar20 + 0x114) =
       CONCAT44(fVar66 + (float)((ulong)uVar64 >> 0x20),fVar47 + (float)uVar64);
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
  lVar20 = lVar20 + uVar38 * 0x178;
  *(ulong *)(lVar20 + 0x108) =
       CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x108) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar20 + 0x108));
  *(float *)(lVar20 + 0x110) = fVar58 + *(float *)(lVar20 + 0x110);
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
  lVar20 = lVar20 + uVar38 * 0x178;
  *(ulong *)(lVar20 + 0x120) =
       CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar20 + 0x120) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar20 + 0x120));
  *(float *)(lVar20 + 0x128) = fVar58 + *(float *)(lVar20 + 0x128);
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
  lVar20 = lVar20 + uVar38 * 0x178;
  uVar64 = *(undefined8 *)(lVar20 + 300);
  *(float *)(lVar20 + 0x134) = fVar58 + *(float *)(lVar20 + 0x134);
  *(undefined8 *)(lVar20 + 300) =
       CONCAT44(fVar66 + (float)((ulong)uVar64 >> 0x20),fVar47 + (float)uVar64);
  lVar20 = unaff_x19[0x74];
  if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0)) goto LAB_0613705c;
  uVar39 = *(uint *)(lVar31 + 0x18);
  if (uVar39 <= uVar14) goto LAB_0613719c;
  lVar34 = lVar31 + 0x20 + uVar38 * 0x178;
  uVar64 = *(undefined8 *)(lVar34 + 0x118);
  auVar54._0_8_ = CONCAT44(fVar47 + (float)((ulong)uVar64 >> 0x20),fVar47 + (float)uVar64);
  auVar54._8_4_ = fVar66 + (float)*(undefined8 *)(lVar34 + 0x120);
  auVar54._12_4_ = fVar66 + (float)((ulong)*(undefined8 *)(lVar34 + 0x120) >> 0x20);
  *(float *)(lVar34 + 0x128) = fVar66 + *(float *)(lVar34 + 0x128);
  *(long *)(lVar34 + 0x120) = auVar54._8_8_;
  *(undefined8 *)(lVar34 + 0x118) = auVar54._0_8_;
  if (uVar33 == uVar35) {
    uVar35 = *(int *)(in_stack_000001a0 + 7) - 1;
    if (uVar14 == uVar35) goto LAB_061358cc;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x50);
    if (lVar20 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar20 + 0x18) <= uVar35) goto LAB_0613719c;
    lVar34 = lVar20 + 0x20 + (long)(int)uVar35 * 0x60;
    fVar48 = fVar66 + *(float *)(lVar34 + 0x38);
    *(ulong *)(lVar34 + 0x30) =
         CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar34 + 0x30));
    *(float *)(lVar34 + 0x38) = fVar48;
    *(float *)(lVar34 + 0x3c) = fVar47 + *(float *)(lVar34 + 0x3c);
    if (uVar39 <= *(uint *)(lVar34 + 0x18)) goto LAB_0613719c;
    lVar20 = lVar20 + 0x20 + (long)(int)uVar35 * 0x60;
    uVar45 = *(undefined4 *)(lVar31 + 0x20 + (long)(int)*(uint *)(lVar34 + 0x18) * 0x178 + 0xf4);
    *(float *)(lVar20 + 0x54) = fVar48;
    *(undefined4 *)(lVar20 + 0x50) = uVar45;
    lVar20 = unaff_x19[0x74];
    if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x50), lVar31 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar31 + 0x18) <= uVar35) goto LAB_0613719c;
    lVar20 = *(long *)(lVar20 + 0x38);
    if (lVar20 == 0) goto LAB_0613705c;
    uVar39 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar35 * 0x60 + 0x24);
    if (*(uint *)(lVar20 + 0x18) <= uVar39) goto LAB_0613719c;
    lVar31 = lVar31 + 0x20 + (long)(int)uVar35 * 0x60;
    *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar20 + (long)(int)uVar39 * 0x178 + 0x120);
    *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    uVar35 = *(int *)(in_stack_000001a0 + 7) - 1;
LAB_061358cc:
    if (uVar14 == uVar35) {
      lVar20 = unaff_x19[0x74];
      if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x50), lVar31 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar31 + 0x18) <= uVar33) goto LAB_0613719c;
      lVar34 = lVar31 + 0x20 + (long)(int)uVar33 * 0x60;
      fVar48 = fVar66 + *(float *)(lVar34 + 0x38);
      *(ulong *)(lVar34 + 0x30) =
           CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar34 + 0x30));
      *(float *)(lVar34 + 0x38) = fVar48;
      *(float *)(lVar34 + 0x3c) = fVar47 + *(float *)(lVar34 + 0x3c);
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_0613705c;
      uVar35 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar33 * 0x60 + 0x18);
      if (*(uint *)(lVar20 + 0x18) <= uVar35) goto LAB_0613719c;
      *(undefined4 *)(lVar34 + 0x50) = *(undefined4 *)(lVar20 + (long)(int)uVar35 * 0x178 + 0x114);
      *(float *)(lVar34 + 0x54) = fVar48;
      lVar20 = unaff_x19[0x74];
      if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x50), lVar31 == 0)) goto LAB_0613705c;
      if (*(uint *)(lVar31 + 0x18) <= uVar33) goto LAB_0613719c;
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_0613705c;
      uVar35 = *(uint *)(lVar31 + 0x20 + (long)(int)uVar33 * 0x60 + 0x24);
      if (*(uint *)(lVar20 + 0x18) <= uVar35) goto LAB_0613719c;
      lVar31 = lVar31 + 0x20 + (long)(int)uVar33 * 0x60;
      *(undefined4 *)(lVar31 + 0x58) = *(undefined4 *)(lVar20 + (long)(int)uVar35 * 0x178 + 0x120);
      *(undefined4 *)(lVar31 + 0x5c) = *(undefined4 *)(lVar31 + 0x30);
    }
  }
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar21 = FUN_05458704(uVar17,0);
  if (((((uVar21 & 1) == 0) && (1 < uVar17 - 0x2010)) && (uVar17 != 0xad)) && (uVar17 != 0x2d)) {
    if (bVar11) {
      if (((uVar14 != 0) && ((int)uVar14 < (int)(*(uint *)(lVar42 + 0x18) - 1))) &&
         (((int)uVar14 < *(int *)(in_stack_000001a0 + 7) && ((uVar17 == 0x2019 || (uVar17 == 0x27)))
          ))) {
        if (*(uint *)(lVar42 + 0x18) <= uVar14 - 1) goto LAB_0613719c;
        uVar5 = *(undefined2 *)(lVar28 + (ulong)(uVar14 - 1) * 0x178 + 4);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_05458704(uVar5,0);
        if ((uVar21 & 1) != 0) {
          if (*(uint *)(lVar42 + 0x18) <= uVar14 + 1) goto LAB_0613719c;
          uVar5 = *(undefined2 *)(lVar28 + (ulong)(uVar14 + 1) * 0x178 + 4);
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar21 = FUN_05458704(uVar5,0);
          if ((uVar21 & 1) != 0) goto LAB_06135bc0;
        }
      }
LAB_06136938:
      if (uVar14 == *(int *)(in_stack_000001a0 + 7) - 1U) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_05458704(uVar17,0);
        uVar35 = uVar14;
        if ((uVar21 & 1) == 0) goto LAB_06136974;
      }
      else {
LAB_06136974:
        uVar35 = uVar14 - 1;
      }
      lVar20 = unaff_x19[0x74];
      if (lVar20 != 0) {
        lVar31 = *(long *)(lVar20 + 0x40);
        if (lVar31 != 0) {
          uVar39 = *(uint *)(lVar20 + 0x24);
          iVar19 = *(int *)(lVar31 + 0x18);
          if (iVar19 < (int)(uVar39 + 1)) {
            if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_0383ec94((long *)(lVar20 + 0x40),iVar19 + 1,
                         *(undefined8 *)Method_System_Security_Cryptography_HashAlgorithm_get_Hash__
                        );
            lVar20 = unaff_x19[0x74];
            if (lVar20 == 0) goto LAB_0613705c;
          }
          lVar20 = *(long *)(lVar20 + 0x40);
          if (lVar20 != 0) {
            if (uVar39 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + (long)(int)uVar39 * 0x18;
              *(long **)(lVar20 + 0x20) = unaff_x19;
              *(uint *)(lVar20 + 0x28) = uVar15;
              *(uint *)(lVar20 + 0x2c) = uVar35;
              *(uint *)(lVar20 + 0x30) = (uVar35 - uVar15) + 1;
              LeanTween__value();
              lVar20 = unaff_x19[0x74];
              if (lVar20 != 0) {
                lVar31 = *(long *)(lVar20 + 0x50);
                *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
                if (lVar31 != 0) {
                  if (uVar33 < *(uint *)(lVar31 + 0x18)) {
                    bVar11 = false;
                    goto LAB_06135ad4;
                  }
                  goto LAB_0613719c;
                }
              }
              goto LAB_0613705c;
            }
            goto LAB_0613719c;
          }
        }
      }
      goto LAB_0613705c;
    }
    if (uVar14 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      bVar13 = FUN_0545865c(uVar17,0);
      if ((((uVar17 == 0x200b | bVar13 ^ 0xff | bVar12) & 1) != 0) ||
         (*(int *)(in_stack_000001a0 + 7) == 1)) goto LAB_06136938;
    }
    bVar11 = false;
  }
  else {
    if (!bVar11) {
      uVar15 = uVar14;
    }
    if (uVar14 != *(int *)(in_stack_000001a0 + 7) - 1U) {
LAB_06135bc0:
      bVar11 = true;
      goto LAB_06135bc8;
    }
    lVar20 = unaff_x19[0x74];
    if (lVar20 == 0) goto LAB_0613705c;
    lVar31 = *(long *)(lVar20 + 0x40);
    if (lVar31 == 0) goto LAB_0613705c;
    uVar35 = *(uint *)(lVar20 + 0x24);
    iVar19 = *(int *)(lVar31 + 0x18);
    if (iVar19 < (int)(uVar35 + 1)) {
      if (*(int *)(*(long *)Method_System_HashCode_Add<bool>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0383ec94((long *)(lVar20 + 0x40),iVar19 + 1,
                   *(undefined8 *)Method_System_Security_Cryptography_HashAlgorithm_get_Hash__);
      lVar20 = unaff_x19[0x74];
      if (lVar20 == 0) goto LAB_0613705c;
    }
    lVar20 = *(long *)(lVar20 + 0x40);
    if (lVar20 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar20 + 0x18) <= uVar35) goto LAB_0613719c;
    lVar20 = lVar20 + (long)(int)uVar35 * 0x18;
    *(long **)(lVar20 + 0x20) = unaff_x19;
    *(uint *)(lVar20 + 0x28) = uVar15;
    *(uint *)(lVar20 + 0x2c) = uVar14;
    *(uint *)(lVar20 + 0x30) = (uVar14 - uVar15) + 1;
    LeanTween__value();
    lVar20 = unaff_x19[0x74];
    if (lVar20 == 0) goto LAB_0613705c;
    lVar31 = *(long *)(lVar20 + 0x50);
    *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
    if (lVar31 == 0) goto LAB_0613705c;
    if (*(uint *)(lVar31 + 0x18) <= uVar33) goto LAB_0613719c;
    bVar11 = true;
LAB_06135ad4:
    lVar31 = lVar31 + (long)(int)uVar33 * 0x60;
    fStack00000000000000dc = (float)((int)fStack00000000000000dc + 1);
    *(int *)(lVar31 + 0x34) = *(int *)(lVar31 + 0x34) + 1;
  }
LAB_06135bc8:
  lVar20 = unaff_x19[0x74];
  if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0)) goto LAB_0613705c;
  if (*(uint *)(lVar31 + 0x18) <= uVar14) goto LAB_0613719c;
  lVar34 = lVar31 + 0x20;
  if ((*(byte *)(lVar34 + uVar38 * 0x178 + 0x16c) >> 2 & 1) == 0) {
    if (bVar7) {
      if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar14 + -1)) goto LAB_0613719c;
      lVar34 = lVar34 + ((long)(int)uVar14 + -1) * 0x178;
      lVar31 = *unaff_x19;
      uVar45 = *(undefined4 *)(lVar34 + 0x100);
      uVar61 = *(undefined4 *)(lVar34 + 0x13c);
LAB_06135e74:
      pcVar27 = *(code **)(lVar31 + 0x908);
LAB_06135eac:
      (*pcVar27)(fStack0000000000000074,in_stack_00000068._4_4_,uStack0000000000000070,uVar45,
                 fStack0000000000000120,0,fStack0000000000000078,uVar61);
      lVar20 = *plVar40;
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar20 = *plVar40;
      }
      fStack000000000000013c = 0.0;
      fStack000000000000011c = 0.0;
      fStack0000000000000120 = *(float *)(*(long *)(lVar20 + 0xb8) + 0x1730);
    }
    bVar7 = false;
  }
  else {
    lVar31 = lVar34 + uVar38 * 0x178;
    *(int *)(lVar31 + 0x148) = iVar16;
    iVar19 = *(int *)(lVar31 + 0x40);
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar33)) ||
       (((int)unaff_x19[0x62] == 5 && (iVar19 + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar12 & 1) == 0 && uVar17 != 0x200b) {
      fVar47 = *(float *)(lVar34 + uVar38 * 0x178 + 0x13c);
      if (fStack000000000000013c <= fVar47) {
        fStack000000000000013c = fVar47;
      }
      if (fStack000000000000011c <= ABS(fVar46)) {
        fStack000000000000011c = ABS(fVar46);
      }
      if (iVar19 != iStack0000000000000060) {
        if (*(int *)(*plVar40 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar20 = unaff_x19[0x74];
          if (lVar20 == 0) goto LAB_0613705c;
          lVar31 = *(long *)(*plVar40 + 0xb8);
        }
        else {
          lVar31 = *(long *)(*plVar40 + 0xb8);
        }
        fStack0000000000000120 = *(float *)(lVar31 + 0x1730);
      }
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_0613705c;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
      if (unaff_x19[0x1f] == 0) goto LAB_0613705c;
      fVar48 = *(float *)(lVar20 + uVar38 * 0x178 + 0x144);
      fVar47 = (float)FUN_063ecc60(unaff_x19[0x1f] + 0x28,0);
      fVar48 = fVar48 + fStack000000000000013c * fVar47;
      iStack0000000000000060 = iVar19;
      if (fVar48 <= fStack0000000000000120) {
        fStack0000000000000120 = fVar48;
      }
    }
    if (!bVar7) {
      bVar7 = false;
      if ((bVar1) && ((int)uVar14 <= (int)uVar3)) {
        if ((uVar17 & 0xfffe) == 10) goto LAB_06135ee8;
        if (uVar17 != 0xd) {
          if (uVar14 == uVar3) {
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar21 = FUN_054594b0(uVar17,0);
            if ((uVar21 & 1) != 0) goto LAB_06135dc8;
          }
          if ((unaff_x19[0x74] != 0) && (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 != 0)) {
            if (uVar14 < *(uint *)(lVar20 + 0x18)) {
              lVar20 = lVar20 + uVar38 * 0x178;
              fStack0000000000000078 = *(float *)(lVar20 + 0x15c);
              fVar47 = fVar46;
              fVar48 = fStack0000000000000078;
              if (fStack000000000000013c != 0.0) {
                fVar47 = fStack000000000000011c;
                fVar48 = fStack000000000000013c;
              }
              fStack000000000000013c = fVar48;
              uStack0000000000000070 = 0;
              fStack0000000000000074 = *(float *)(lVar20 + 0x114);
              uStack000000000000007c = *(undefined4 *)(lVar20 + 0x164);
              in_stack_00000068._4_4_ = fStack0000000000000120;
              fStack000000000000011c = fVar47;
              goto LAB_06135e34;
            }
            goto LAB_0613719c;
          }
          goto LAB_0613705c;
        }
      }
LAB_06135dc8:
      bVar7 = false;
      goto LAB_06135ee8;
    }
LAB_06135e34:
    if (*(int *)(in_stack_000001a0 + 7) == 1) {
      if ((unaff_x19[0x74] != 0) && (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 != 0)) {
        if (uVar14 < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + uVar38 * 0x178;
LAB_06135e68:
          lVar31 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar20 + 0x120);
          uVar61 = *(undefined4 *)(lVar20 + 0x15c);
          goto LAB_06135e74;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((uVar14 == uVar2) || ((int)uVar3 <= (int)uVar14)) {
      lVar20 = unaff_x19[0x74];
      if ((bVar12 & 1) == 0 && uVar17 != 0x200b) {
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0)) goto LAB_0613705c;
        if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
        lVar20 = lVar20 + uVar38 * 0x178;
      }
      else {
        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0)) goto LAB_0613705c;
        if (*(uint *)(lVar20 + 0x18) <= uVar3) goto LAB_0613719c;
        lVar20 = lVar20 + (long)(int)uVar3 * 0x178;
      }
      uVar45 = *(undefined4 *)(lVar20 + 0x120);
      uVar61 = *(undefined4 *)(lVar20 + 0x15c);
      pcVar27 = *(code **)(*unaff_x19 + 0x908);
      goto LAB_06135eac;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 != 0)) {
        if ((uint)((long)(int)uVar14 + -1) < *(uint *)(lVar20 + 0x18)) {
          lVar20 = lVar20 + ((long)(int)uVar14 + -1) * 0x178;
          goto LAB_06135e68;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((int)uVar14 < *(int *)(in_stack_000001a0 + 7) + -1) {
      if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar20 + 0x18) <= uVar14 + 1) goto LAB_0613719c;
      uVar21 = FUN_06151678(uStack000000000000007c,
                            *(undefined4 *)(lVar20 + (ulong)(uVar14 + 1) * 0x178 + 0x164),0);
      if ((uVar21 & 1) == 0) {
        if ((unaff_x19[0x74] != 0) && (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 != 0)) {
          if (uVar14 < *(uint *)(lVar20 + 0x18)) {
            lVar20 = lVar20 + uVar38 * 0x178;
            uVar45 = *(undefined4 *)(lVar20 + 0x120);
            uVar61 = *(undefined4 *)(lVar20 + 0x15c);
            pcVar27 = *(code **)(*unaff_x19 + 0x908);
            goto LAB_06135eac;
          }
          goto LAB_0613719c;
        }
        goto LAB_0613705c;
      }
      bVar7 = true;
    }
    else {
      bVar7 = true;
    }
  }
LAB_06135ee8:
  if ((unaff_x19[0x74] == 0) || (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 == 0))
  goto LAB_0613705c;
  if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
  if (lVar30 == 0) goto LAB_0613705c;
  uVar35 = *(uint *)(lVar20 + uVar38 * 0x178 + 0x18c);
  fVar47 = (float)FUN_063ecc70(lVar30 + 0x28,0);
  if ((uVar35 >> 6 & 1) == 0) {
    if (bVar8) {
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
      goto LAB_0613705c;
      if (*(uint *)(lVar30 + 0x18) <= (uint)((long)(int)uVar14 + -1)) goto LAB_0613719c;
      lVar30 = lVar30 + ((long)(int)uVar14 + -1) * 0x178;
LAB_06136194:
      fVar48 = *(float *)(lVar30 + 0x144);
      lVar20 = *unaff_x19;
      uVar45 = *(undefined4 *)(lVar30 + 0x120);
LAB_06136414:
      (**(code **)(lVar20 + 0x908))
                (fStack0000000000000094,fStack0000000000000098,uStack00000000000000c8,uVar45,
                 fStack000000000000009c * fVar47 + fVar48,0,fStack000000000000009c,
                 fStack000000000000009c);
    }
LAB_06136450:
    bVar8 = false;
  }
  else {
    lVar20 = unaff_x19[0x74];
    if ((lVar20 == 0) || (lVar31 = *(long *)(lVar20 + 0x38), lVar31 == 0)) goto LAB_0613705c;
    if (*(uint *)(lVar31 + 0x18) <= uVar14) goto LAB_0613719c;
    *(int *)(lVar31 + 0x20 + uVar38 * 0x178 + 0x150) = iVar16;
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar33)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar31 + 0x20 + uVar38 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bool)(bVar8 | bVar1 ^ 1U)) || ((int)uVar3 < (int)uVar14)) || ((uVar17 & 0xfffe) == 10))
       || (uVar17 == 0xd)) {
LAB_06136024:
      if (!bVar8) goto LAB_06136450;
    }
    else {
      if (uVar14 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_054594b0(uVar17,0);
        if ((uVar21 & 1) != 0) goto LAB_06136024;
        lVar20 = unaff_x19[0x74];
        if (lVar20 == 0) goto LAB_0613705c;
      }
      lVar20 = *(long *)(lVar20 + 0x38);
      if (lVar20 == 0) goto LAB_0613705c;
      if (*(uint *)(lVar20 + 0x18) <= uVar14) goto LAB_0613719c;
      lVar20 = lVar20 + uVar38 * 0x178;
      fStack000000000000009c = *(float *)(lVar20 + 0x15c);
      fStack0000000000000098 = fVar47 * fStack000000000000009c + *(float *)(lVar20 + 0x144);
      uStack00000000000000c8 = 0;
      fStack0000000000000054 = *(float *)(lVar20 + 0x58);
      fStack0000000000000094 = *(float *)(lVar20 + 0x114);
    }
    iVar19 = *(int *)(in_stack_000001a0 + 7);
    if (iVar19 == 1) {
LAB_06136168:
      if ((unaff_x19[0x74] != 0) && (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 != 0)) {
        if (uVar14 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + uVar38 * 0x178;
          goto LAB_06136194;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if (uVar14 == uVar2) {
      lVar30 = unaff_x19[0x74];
      if ((uVar17 != 0x200b & (bVar12 ^ 0xff)) == 0) goto LAB_061361cc;
LAB_061363d8:
      if ((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x38), lVar30 != 0)) {
        if (uVar14 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + uVar38 * 0x178;
LAB_061363f8:
          fVar48 = *(float *)(lVar30 + 0x144);
          lVar20 = *unaff_x19;
          uVar45 = *(undefined4 *)(lVar30 + 0x120);
          goto LAB_06136414;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    if ((int)uVar14 < iVar19) {
      if ((unaff_x19[0x74] != 0) && (lVar20 = *(long *)(unaff_x19[0x74] + 0x38), lVar20 != 0)) {
        if (uVar14 + 1 < *(uint *)(lVar20 + 0x18)) {
          if (*(float *)(lVar20 + (ulong)(uVar14 + 1) * 0x178 + 0x58) == fStack0000000000000054) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_OnMenuVisible__
                        + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar21 = FUN_06151b7c(0);
            if ((uVar21 & 1) != 0) {
              iVar19 = *(int *)(in_stack_000001a0 + 7);
              goto 
              UnityEngine_XR_Interaction_Toolkit_Locomotion_Comfort_VignetteParameters__set_vignetteColor
              ;
            }
          }
          lVar30 = unaff_x19[0x74];
          if ((int)uVar14 <= (int)uVar3) goto LAB_061363d8;
LAB_061361cc:
          if ((lVar30 != 0) && (lVar30 = *(long *)(lVar30 + 0x38), lVar30 != 0)) {
            if (uVar3 < *(uint *)(lVar30 + 0x18)) {
              lVar30 = lVar30 + (long)(int)uVar3 * 0x178;
              goto LAB_061363f8;
            }
            goto LAB_0613719c;
          }
          goto LAB_0613705c;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
UnityEngine_XR_Interaction_Toolkit_Locomotion_Comfort_VignetteParameters__set_vignetteColor:
    if ((int)uVar14 < iVar19) {
      iVar19 = FUN_063540b8(lVar30,0);
      if (*(uint *)(lVar42 + 0x18) <= uVar14 + 1) goto LAB_0613719c;
      lVar30 = *(long *)(lVar28 + (ulong)(uVar14 + 1) * 0x178 + 0x20);
      if (lVar30 == 0) goto LAB_0613705c;
      iVar18 = FUN_063540b8(lVar30,0);
      if (iVar19 != iVar18) goto LAB_06136168;
    }
    if (!bVar1) {
      if ((unaff_x19[0x74] != 0) && (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 != 0)) {
        if ((uint)((long)(int)uVar14 + -1) < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + ((long)(int)uVar14 + -1) * 0x178;
          goto LAB_06136194;
        }
        goto LAB_0613719c;
      }
      goto LAB_0613705c;
    }
    bVar8 = true;
  }
  if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
  goto LAB_0613705c;
  uVar35 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar35 <= uVar14) goto LAB_0613719c;
  if ((*(byte *)(lVar30 + 0x20 + uVar38 * 0x178 + 0x16d) >> 1 & 1) == 0) {
    if (bVar9) {
      (**(code **)(*unaff_x19 + 0x918))();
    }
LAB_06136564:
    bVar9 = false;
  }
  else {
    if ((((int)unaff_x19[0x6c] < (int)uVar14) || ((int)unaff_x19[0x6d] < (int)uVar33)) ||
       (((int)unaff_x19[0x62] == 5 &&
        (*(int *)(lVar30 + 0x20 + uVar38 * 0x178 + 0x40) + 1 != (int)unaff_x19[0x6e])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar9) {
      if ((((!bVar1) || ((int)uVar3 < (int)uVar14)) || ((uVar17 & 0xfffe) == 10)) || (uVar17 == 0xd)
         ) goto LAB_06136564;
      if (uVar14 == uVar3) {
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_054594b0(uVar17,0);
        if ((uVar21 & 1) != 0) goto LAB_06136564;
      }
      lVar20 = *plVar40;
      if (*(int *)(lVar20 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar20 = *plVar40;
      }
      if ((unaff_x19[0x74] == 0) || (lVar30 = *(long *)(unaff_x19[0x74] + 0x38), lVar30 == 0))
      goto LAB_0613705c;
      uVar35 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar35 <= uVar14) goto LAB_0613719c;
      lVar31 = *(long *)(lVar20 + 0xb8);
      lVar20 = lVar30 + uVar38 * 0x178;
      fStack00000000000000cc = *(float *)(lVar31 + 0x1728);
      fStack00000000000000d0 = *(float *)(lVar31 + 0x172c);
      in_stack_00001290 = *(float *)(lVar20 + 0x188);
      fStack00000000000000d8 = *(float *)(lVar31 + 0x1720);
      fStack00000000000000f4 = *(float *)(lVar31 + 0x1724);
      auVar53 = *(undefined1 (*) [16])(lVar20 + 0x178);
      in_stack_00001288 = auVar53._8_4_;
      in_stack_0000128c = auVar53._12_4_;
      in_stack_00001280 = auVar53._0_4_;
      in_stack_00001284 = auVar53._4_4_;
    }
    if (uVar35 <= uVar14) goto LAB_0613719c;
    lVar30 = lVar30 + uVar38 * 0x178;
    in_stack_000001c0 = CONCAT44(in_stack_00001284,in_stack_00001280);
    auVar6._8_4_ = in_stack_00001288;
    auVar6._0_8_ = in_stack_000001c0;
    auVar6._12_4_ = in_stack_0000128c;
    lVar20 = 0x118;
    if ((bVar12 & 1) == 0) {
      lVar20 = 0xf4;
    }
    fVar50 = *(float *)(lVar30 + 0x180);
    fVar66 = *(float *)(lVar30 + 0x184);
    fVar63 = *(float *)(lVar30 + 0x188);
    uVar64 = *(undefined8 *)(lVar30 + 0x178);
    fVar51 = *(float *)(lVar30 + 0x120);
    fVar47 = *(float *)(lVar30 + 0x13c);
    fVar49 = *(float *)(lVar30 + 0x140);
    fVar62 = *(float *)(lVar30 + 0x148);
    fVar48 = *(float *)(lVar30 + lVar20 + 0x20);
    in_stack_000001c8 = auVar6._8_8_;
    in_stack_000001a8 = uVar64;
    fStack00000000000001b0 = fVar50;
    fStack00000000000001b4 = fVar66;
    in_stack_000001b8 = fVar63;
    in_stack_000001d0 = in_stack_00001290;
    uVar38 = FUN_06152ca0(&stack0x000001c0,&stack0x000001a8,0);
    if ((uVar38 & 1) == 0) {
      if ((bVar12 & 1) == 0) {
        fVar47 = fVar51;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar48 = fVar48 - in_stack_00001284;
      if (fVar48 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar48;
      }
      if (fStack00000000000000cc <= fVar47 + in_stack_00001288) {
        fStack00000000000000cc = fVar47 + in_stack_00001288;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fVar62 = fVar62 - in_stack_00001290;
      fVar49 = fVar49 + in_stack_0000128c;
      if (fVar62 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar62;
      }
      if (fStack00000000000000d0 <= fVar49) {
        fStack00000000000000d0 = fVar49;
      }
    }
    else {
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack00000000000000d8 = (fVar48 + (fStack00000000000000cc - in_stack_00001288)) * 0.5;
      (**(code **)(*unaff_x19 + 0x918))();
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if ((bVar12 & 1) == 0) {
        fVar47 = fVar51;
      }
      if (*(int *)(*(long *)Method_UnityEngine_Hash128_Append<Vector2Int>__ + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      fStack00000000000000f4 = fVar62 - fVar63;
      in_stack_00001280 = (undefined4)uVar64;
      in_stack_00001284 = (float)((ulong)uVar64 >> 0x20);
      fStack00000000000000cc = fVar50 + fVar47;
      fStack00000000000000d0 = fVar49 + fVar66;
      in_stack_00001288 = fVar50;
      in_stack_0000128c = fVar66;
      in_stack_00001290 = fVar63;
    }
    if (((*(int *)(in_stack_000001a0 + 7) == 1) || (uVar14 == uVar2)) ||
       (((int)uVar3 <= (int)uVar14 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))();
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  iVar19 = *(int *)(in_stack_000001a0 + 7);
  uVar14 = uVar14 + 1;
  uVar35 = uVar33;
  if (iVar19 <= (int)uVar14) goto LAB_06136c08;
  goto LAB_06134b8c;
LAB_06136c08:
  lVar42 = unaff_x19[0x74];
  if (lVar42 != 0) {
    iVar18 = uVar33 + 1;
LAB_06136c20:
    puVar10 = Method_UnityEngine_Hash128_Append<bool>__;
    lVar28 = *(long *)(lVar42 + 0x60);
    if (lVar28 != 0) {
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd4)) {
LAB_0613719c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd4) * 0x50 + 0x28) = iVar16;
      *(int *)(lVar42 + 0x18) = iVar19;
      lVar28 = unaff_x19[0xd7];
      *(int *)(lVar42 + 0x2c) = iVar18;
      if (iVar19 < 1 || fStack00000000000000dc == 0.0) {
        fStack00000000000000dc = 1.4013e-45;
      }
      *(int *)(lVar42 + 0x1c) = (int)lVar28;
      *(float *)(lVar42 + 0x24) = fStack00000000000000dc;
      *(int *)(lVar42 + 0x30) = *(int *)((long)unaff_x19 + 0x4c4) + 1;
      if (((int)unaff_x19[0x6a] != 0xff) ||
         (uVar38 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar38 & 1) == 0)) {
LAB_061345f8:
        if (*(int *)(*(long *)Method_System_HashCode_Combine<float,_float,_float>__ + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_06150bd0();
        return;
      }
      lVar42 = unaff_x19[0xde];
      if (lVar42 != 0) {
        (**(code **)(lVar42 + 0x18))
                  (*(undefined8 *)(lVar42 + 0x40),unaff_x19[0x74],*(undefined8 *)(lVar42 + 0x28));
      }
      if (*(int *)((long)unaff_x19 + 0x354) != 0) {
        if ((unaff_x19[0x74] == 0) || (lVar42 = *(long *)(unaff_x19[0x74] + 0x60), lVar42 == 0))
        goto LAB_0613705c;
        if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
        FUN_0619ca50(lVar42 + 0x20,1,0);
      }
      if (unaff_x19[0x7b] != 0) {
        FUN_0632a884(unaff_x19[0x7b],0);
        if ((unaff_x19[0x74] != 0) && (lVar42 = *(long *)(unaff_x19[0x74] + 0x60), lVar42 != 0)) {
          if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
          if (unaff_x19[0x7b] != 0) {
            FUN_063281f8(unaff_x19[0x7b],*(undefined8 *)(lVar42 + 0x30),0);
            if ((unaff_x19[0x74] != 0) && (lVar42 = *(long *)(unaff_x19[0x74] + 0x60), lVar42 != 0))
            {
              if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
              if (unaff_x19[0x7b] != 0) {
                FUN_0632924c(unaff_x19[0x7b],0,*(undefined8 *)(lVar42 + 0x48),0);
                if ((unaff_x19[0x74] != 0) &&
                   (lVar42 = *(long *)(unaff_x19[0x74] + 0x60), lVar42 != 0)) {
                  if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
                  if (unaff_x19[0x7b] != 0) {
                    FUN_063284a8(unaff_x19[0x7b],*(undefined8 *)(lVar42 + 0x50),0);
                    if ((unaff_x19[0x74] != 0) &&
                       (lVar42 = *(long *)(unaff_x19[0x74] + 0x60), lVar42 != 0)) {
                      if (*(int *)(lVar42 + 0x18) == 0) goto LAB_0613719c;
                      if (unaff_x19[0x7b] != 0) {
                        FUN_06328668(unaff_x19[0x7b],*(undefined8 *)(lVar42 + 0x58),0);
                        if (unaff_x19[0x7b] != 0) {
                          FUN_0632a644(unaff_x19[0x7b],0);
                          lVar42 = unaff_x19[0x74];
                          if (lVar42 != 0) {
                            lVar30 = 0;
                            lVar28 = 0;
                            do {
                              uVar38 = lVar28 + 1;
                              if ((long)*(int *)(lVar42 + 0x34) <= (long)uVar38) goto LAB_061345f8;
                              lVar42 = *(long *)(lVar42 + 0x60);
                              if (lVar42 == 0) break;
                              if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                              FUN_0619c92c(lVar42 + lVar30 + 0x70,0);
                              lVar42 = unaff_x19[0xe4];
                              if (lVar42 == 0) break;
                              if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                              uVar64 = *(undefined8 *)(lVar42 + lVar28 * 8 + 0x28);
                              if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
                                thunk_FUN_02df485c();
                              }
                              uVar21 = FUN_06350670(uVar64,0,0);
                              if ((uVar21 & 1) == 0) {
                                if (*(int *)((long)unaff_x19 + 0x354) != 0) {
                                  if ((unaff_x19[0x74] == 0) ||
                                     (lVar42 = *(long *)(unaff_x19[0x74] + 0x60), lVar42 == 0))
                                  break;
                                  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                                    thunk_FUN_02df485c();
                                  }
                                  if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                                  FUN_0619ca50(lVar42 + lVar30 + 0x70,1,0);
                                }
                                lVar42 = unaff_x19[0xe4];
                                if (lVar42 == 0) break;
                                if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                                lVar42 = *(long *)(lVar42 + lVar28 * 8 + 0x28);
                                if (lVar42 == 0) break;
                                lVar42 = FUN_061a5b08(lVar42,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0)) break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar38) goto LAB_0613719c;
                                if (lVar42 == 0) break;
                                FUN_063281f8(lVar42,*(undefined8 *)(lVar20 + lVar30 + 0x80),0);
                                lVar42 = unaff_x19[0xe4];
                                if (lVar42 == 0) break;
                                if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                                lVar42 = *(long *)(lVar42 + lVar28 * 8 + 0x28);
                                if (lVar42 == 0) break;
                                lVar42 = FUN_061a5b08(lVar42,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0)) break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar38) goto LAB_0613719c;
                                if (lVar42 == 0) break;
                                FUN_0632924c(lVar42,0,*(undefined8 *)(lVar20 + lVar30 + 0x98),0);
                                lVar42 = unaff_x19[0xe4];
                                if (lVar42 == 0) break;
                                if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                                lVar42 = *(long *)(lVar42 + lVar28 * 8 + 0x28);
                                if (lVar42 == 0) break;
                                lVar42 = FUN_061a5b08(lVar42,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0)) break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar38) goto LAB_0613719c;
                                if (lVar42 == 0) break;
                                FUN_063284a8(lVar42,*(undefined8 *)(lVar20 + lVar30 + 0xa0),0);
                                lVar42 = unaff_x19[0xe4];
                                if (lVar42 == 0) break;
                                if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                                lVar42 = *(long *)(lVar42 + lVar28 * 8 + 0x28);
                                if (lVar42 == 0) break;
                                lVar42 = FUN_061a5b08(lVar42,0);
                                if ((unaff_x19[0x74] == 0) ||
                                   (lVar20 = *(long *)(unaff_x19[0x74] + 0x60), lVar20 == 0)) break;
                                if (*(uint *)(lVar20 + 0x18) <= uVar38) goto LAB_0613719c;
                                if (lVar42 == 0) break;
                                FUN_06328668(lVar42,*(undefined8 *)(lVar20 + lVar30 + 0xa8),0);
                                lVar42 = unaff_x19[0xe4];
                                if (lVar42 == 0) break;
                                if (*(uint *)(lVar42 + 0x18) <= uVar38) goto LAB_0613719c;
                                lVar42 = *(long *)(lVar42 + lVar28 * 8 + 0x28);
                                if ((lVar42 == 0) || (lVar42 = FUN_061a5b08(lVar42,0), lVar42 == 0))
                                break;
                                FUN_0632a644(lVar42,0);
                              }
                              lVar42 = unaff_x19[0x74];
                              lVar28 = lVar28 + 1;
                              lVar30 = lVar30 + 0x50;
                            } while (lVar42 != 0);
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
LAB_0613705c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


