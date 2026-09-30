/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 033bf220
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__GetEyeRecommendedResolutionScale(void)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int in_w8;
  long lVar14;
  long lVar15;
  undefined8 *in_x9;
  uint unaff_w19;
  uint unaff_w20;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar18;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar19;
  long unaff_x28;
  long lVar20;
  long *unaff_x29;
  long *in_stack_00000010;
  long in_stack_00000020;
  long *in_stack_00000028;
  uint in_stack_00000030;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000048;
  uint in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x033bf220:
  uVar17 = *in_x9;
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar17 = FUN_033a87c8(uVar17,0);
  uVar9 = FUN_033aa3b4(unaff_x29,uVar17,0);
  if ((uVar9 & 1) != 0) goto LAB_033bf488;
  if (unaff_x29 == (long *)0x0) goto LAB_033bec5c;
  uVar9 = FUN_033ac7d8(unaff_x29,0);
  if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
  lVar14 = *unaff_x24;
  if (lVar14 == 0) goto LAB_033bec5c;
  if ((*(uint *)(lVar14 + 0x18) <= unaff_w20) ||
     (uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar6))
  goto LAB_033bfa24;
  uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
  if (*(int *)(*(long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar10 = FUN_033aa3b4(uVar17,0,0);
  unaff_x22 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
  ;
  uVar6 = unaff_w20;
  if ((uVar9 & 1) == 0) {
    if ((uVar10 & 1) != 0) goto LAB_033bf488;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
    lVar14 = *unaff_x24;
    if (lVar14 == 0) goto LAB_033bec5c;
    if ((*(uint *)(lVar14 + 0x18) <= unaff_w20) ||
       (uVar7 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7))
    goto LAB_033bfa24;
    uVar9 = (**(code **)(*unaff_x29 + 0x288))
                      (unaff_x29,*(undefined8 *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20),
                       *(undefined8 *)(*unaff_x29 + 0x290));
    if ((uVar9 & 1) != 0) goto LAB_033bf488;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
    lVar14 = *unaff_x24;
    if (lVar14 == 0) goto LAB_033bec5c;
    if ((*(uint *)(lVar14 + 0x18) <= unaff_w20) ||
       (uVar7 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20), *(uint *)(unaff_x26 + 0x18) <= uVar7))
    goto LAB_033bfa24;
    lVar14 = *(long *)(unaff_x26 + (long)(int)uVar7 * 8 + 0x20);
    if (lVar14 == 0) goto LAB_033bec5c;
    uVar9 = FUN_033ac5f4(lVar14,0);
    if ((uVar9 & 1) == 0) goto LAB_033bf4a8;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
    lVar14 = *unaff_x24;
    if (lVar14 == 0) goto LAB_033bec5c;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_033bfa24;
    lVar15 = *in_stack_00000058;
    if (lVar15 == 0) goto LAB_033bec5c;
    uVar7 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
    uVar9 = (**(code **)(*unaff_x29 + 0x858))
                      (unaff_x29,*(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20),
                       *(undefined8 *)(*unaff_x29 + 0x860));
  }
  else {
    if ((uVar10 & 1) != 0) goto LAB_033bf4a8;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
    lVar14 = *unaff_x24;
    if (lVar14 == 0) goto LAB_033bec5c;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_033bfa24;
    lVar15 = *in_stack_00000058;
    if (lVar15 == 0) goto LAB_033bec5c;
    uVar7 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
    if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
    uVar17 = *(undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
    if ((*(byte *)(*unaff_x29 + 0x130) < bVar4) ||
       (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar4 * 8 + -8) !=
        *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(unaff_x29);
    }
    uVar9 = FUN_033c0b48(uVar17,unaff_x29);
    unaff_x22 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  if ((uVar9 & 1) != 0) goto LAB_033bf488;
LAB_033bf4a8:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar9 = FUN_033ab18c(in_stack_00000048,0,0);
  if (((uVar9 & 1) != 0) && (uVar6 == *(int *)(unaff_x27 + 0x18) - 1U)) {
    lVar14 = *in_stack_00000058;
    if (lVar14 == 0) goto LAB_033bec5c;
    lVar15 = (-(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3) + 0x20;
    while ((int)uVar6 < *(int *)(lVar14 + 0x18)) {
      if ((in_stack_00000048 == (long *)0x0) ||
         (uVar9 = FUN_033ac7d8(in_stack_00000048,0), unaff_x26 == 0)) goto LAB_033bec5c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_033bfa24;
      uVar17 = *(undefined8 *)(unaff_x26 + lVar15);
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar10 = FUN_033aa3b4(uVar17,0,0);
      unaff_x22 = (long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
      ;
      if ((uVar9 & 1) == 0) {
        if ((uVar10 & 1) == 0) {
          if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_033bfa24;
          uVar9 = (**(code **)(*in_stack_00000048 + 0x288))
                            (in_stack_00000048,*(undefined8 *)(unaff_x26 + lVar15),
                             *(undefined8 *)(*in_stack_00000048 + 0x290));
          if ((uVar9 & 1) == 0) {
            if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_033bfa24;
            if (*(long *)(unaff_x26 + lVar15) == 0) goto LAB_033bec5c;
            uVar9 = FUN_033ac5f4(*(long *)(unaff_x26 + lVar15),0);
            if ((uVar9 & 1) != 0) {
              lVar14 = *in_stack_00000058;
              if (lVar14 != 0) {
                if (uVar6 < *(uint *)(lVar14 + 0x18)) {
                  uVar9 = (**(code **)(*in_stack_00000048 + 0x858))
                                    (in_stack_00000048,*(undefined8 *)(lVar14 + lVar15),
                                     *(undefined8 *)(*in_stack_00000048 + 0x860));
                  goto joined_r0x033bf658;
                }
                goto LAB_033bfa24;
              }
              goto LAB_033bec5c;
            }
            break;
          }
        }
      }
      else {
        if ((uVar10 & 1) != 0) break;
        lVar14 = *in_stack_00000058;
        if (lVar14 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_033bfa24;
        uVar17 = *(undefined8 *)(lVar14 + lVar15);
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        bVar4 = *(byte *)(*(long *)StringLiteral_1157 + 0x130);
        if ((*(byte *)(*in_stack_00000048 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*in_stack_00000048 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1157)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c(in_stack_00000048);
        }
        uVar9 = FUN_033c0b48(uVar17,in_stack_00000048);
        unaff_x22 = (long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
        ;
joined_r0x033bf658:
        if ((uVar9 & 1) == 0) break;
      }
      lVar14 = *in_stack_00000058;
      uVar6 = uVar6 + 1;
      lVar15 = lVar15 + 8;
      if (lVar14 == 0) goto LAB_033bec5c;
    }
  }
  if (*in_stack_00000058 != 0) {
    uVar9 = unaff_x25;
    if (uVar6 != *(uint *)(*in_stack_00000058 + 0x18)) goto LAB_033bf82c;
    if (unaff_x23 != 0) {
      if ((unaff_x25 < *(uint *)(unaff_x23 + 0x18)) &&
         (in_stack_00000030 < *(uint *)(unaff_x23 + 0x18))) {
        lVar14 = (long)(int)in_stack_00000030;
        *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) =
             *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20);
        thunk_FUN_01e10808();
        if (in_stack_00000038 != (long *)0x0) {
          if ((in_stack_00000048 == (long *)0x0) ||
             (lVar15 = thunk_FUN_01de26bc(in_stack_00000048,
                                          *(undefined8 *)(*in_stack_00000038 + 0x40)), lVar15 != 0))
          {
            if (in_stack_00000030 < *(uint *)(in_stack_00000038 + 3)) {
              in_stack_00000038[lVar14 + 4] = (long)in_stack_00000048;
              thunk_FUN_01e10808(in_stack_00000038 + lVar14 + 4,in_stack_00000048);
              uVar9 = (ulong)*(uint *)(in_stack_00000040 + 3);
              if (unaff_x25 < uVar9) {
                lVar15 = *in_stack_00000028;
                if (lVar15 == 0) goto LAB_033bf738;
LAB_033bf720:
                lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*in_stack_00000040 + 0x40));
                if (lVar11 != 0) {
                  uVar9 = in_stack_00000040[3];
LAB_033bf738:
                  if (in_stack_00000030 < (uint)uVar9) {
                    in_stack_00000040[lVar14 + 4] = lVar15;
                    in_stack_00000030 = in_stack_00000030 + 1;
                    thunk_FUN_01e10808(in_stack_00000040 + lVar14 + 4,lVar15);
                    unaff_x22 = (long *)
                                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                    ;
                    uVar9 = unaff_x25;
LAB_033bf82c:
                    do {
                      uVar6 = *(uint *)(in_stack_00000040 + 3);
                      uVar10 = (ulong)uVar6;
                      unaff_x25 = uVar9 + 1;
                      if ((long)(int)uVar6 <= (long)unaff_x25) {
                        if (in_stack_00000030 != 1) {
                          if (in_stack_00000030 == 0) {
                            uVar17 = thunk_FUN_01dd295c(StringLiteral_8802);
                            uVar17 = FUN_033d6e4c(uVar17,0);
                            thunk_FUN_01dd295c(StringLiteral_1159);
                            uVar19 = thunk_FUN_01de27b8();
                            FUN_033958dc(uVar19,uVar17,0);
                            goto LAB_033c0894;
                          }
                          if ((int)in_stack_00000030 < 2) {
                            uVar6 = 0;
                            goto LAB_033bfae0;
                          }
                          if (uVar6 == 0) goto LAB_033bfa24;
                          lVar14 = 0;
                          lVar15 = 0;
                          uVar6 = 0;
                          bVar2 = false;
                          goto LAB_033bf900;
                        }
                        if (in_stack_00000020 != 0) {
                          if (unaff_x23 == 0) goto LAB_033bec5c;
                          if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                          if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_033bec5c;
                          lVar14 = FUN_033b5440(*(long *)(unaff_x23 + 0x20),0);
                          lVar15 = *in_stack_00000058;
                          if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0))
                          goto LAB_033bec5c;
                          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                          lVar11 = in_stack_00000038[4];
                          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          bVar4 = FUN_033ab18c(lVar11,0,0);
                          lVar11 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
                          if (lVar14 == 0) {
                            lVar18 = 0;
                          }
                          else {
                            uVar17 = *(undefined8 *)StringLiteral_151;
                            lVar18 = thunk_FUN_01de26bc(lVar14,uVar17);
                            if (lVar18 == 0) goto LAB_033bfb98;
                          }
                          uVar17 = *(undefined8 *)(lVar15 + 0x18);
                          FUN_033d8040(lVar11,0);
                          *(long *)(lVar11 + 0x10) = lVar18;
                          thunk_FUN_01e10808((long *)(lVar11 + 0x10),lVar18);
                          *(int *)(lVar11 + 0x18) = (int)uVar17;
                          *(byte *)(lVar11 + 0x1c) = bVar4 & 1;
                          *in_stack_00000010 = lVar11;
                          thunk_FUN_01e10808(in_stack_00000010,lVar11);
                          if (*(int *)(unaff_x23 + 0x18) == 0) goto LAB_033bfa24;
                          uVar17 = *(undefined8 *)(unaff_x23 + 0x20);
                          lVar14 = *in_stack_00000058;
                          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          FUN_033c0ca4(uVar17,lVar14);
                          uVar6 = (uint)in_stack_00000040[3];
                          unaff_x22 = (long *)
                                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          ;
                        }
                        if (uVar6 == 0) goto LAB_033bfa24;
                        plVar8 = in_stack_00000040 + 4;
                        plVar16 = (long *)*plVar8;
                        if (((plVar16 == (long *)0x0) ||
                            (lVar14 = (**(code **)(*plVar16 + 0x3b8))
                                                (plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
                            lVar14 == 0)) || (*in_stack_00000058 == 0)) goto LAB_033bec5c;
                        iVar5 = *(int *)(*in_stack_00000058 + 0x18);
                        if (*(int *)(lVar14 + 0x18) == iVar5) {
                          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                          lVar15 = in_stack_00000038[4];
                          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          uVar9 = FUN_033ab18c(lVar15,0,0);
                          if ((uVar9 & 1) == 0) goto LAB_033c0740;
                          plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                         *(undefined4 *)(lVar14 + 0x18));
                          uVar6 = *(int *)(lVar14 + 0x18) - 1;
                          FUN_033b4f38(*in_stack_00000058,0,plVar16,0,uVar6,0);
                          if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                          lVar15 = in_stack_00000038[4];
                          lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                          if (lVar14 == 0) goto LAB_033bec5c;
                          if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
                          *(undefined4 *)(lVar14 + 0x20) = 1;
                          lVar14 = thunk_FUN_033b4750(lVar15,lVar14,0);
                          if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                          if ((lVar14 != 0) &&
                             (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)),
                             lVar15 == 0)) goto LAB_033c07f0;
                          if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                          plVar12 = plVar16 + (long)(int)uVar6 + 4;
                          *plVar12 = lVar14;
                          thunk_FUN_01e10808(plVar12,lVar14);
                          if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                          lVar14 = *in_stack_00000058;
                          if (lVar14 == 0) goto LAB_033bec5c;
                          if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_033bfa24;
                          plVar12 = (long *)*plVar12;
                          if (plVar12 == (long *)0x0) goto LAB_033bec5c;
                          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                          if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                              *(long *)StringLiteral_1183)) goto LAB_033c090c;
                          FUN_033b49e8(plVar12,*(undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20)
                                       ,0,0);
                          goto LAB_033c0730;
                        }
                        if (iVar5 < *(int *)(lVar14 + 0x18)) {
                          plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
                          lVar15 = *in_stack_00000058;
                          if (lVar15 == 0) goto LAB_033bec5c;
                          uVar9 = 0;
                          plVar12 = plVar16 + 4;
                          goto LAB_033bfe14;
                        }
                        if ((int)in_stack_00000040[3] == 0) goto LAB_033bfa24;
                        plVar16 = (long *)*plVar8;
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        uVar6 = (**(code **)(*plVar16 + 600))
                                          (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                        if ((uVar6 >> 1 & 1) != 0) goto LAB_033c0740;
                        plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,
                                                       *(undefined4 *)(lVar14 + 0x18));
                        uVar6 = *(int *)(lVar14 + 0x18) - 1;
                        FUN_033b4f38(*in_stack_00000058,0,plVar16,0,uVar6,0);
                        if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
                        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
                        lVar15 = in_stack_00000038[4];
                        lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
                        if ((*in_stack_00000058 == 0) || (lVar14 == 0)) goto LAB_033bec5c;
                        if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
                        *(uint *)(lVar14 + 0x20) = *(int *)(*in_stack_00000058 + 0x18) - uVar6;
                        lVar14 = thunk_FUN_033b4750(lVar15,lVar14,0);
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        if ((lVar14 != 0) &&
                           (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar15 == 0)) goto LAB_033c07f0;
                        if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                        plVar12 = plVar16 + (long)(int)uVar6 + 4;
                        *plVar12 = lVar14;
                        thunk_FUN_01e10808(plVar12,lVar14);
                        if (*(uint *)(plVar16 + 3) <= uVar6) goto LAB_033bfa24;
                        lVar14 = *in_stack_00000058;
                        if (lVar14 == 0) goto LAB_033bec5c;
                        plVar12 = (long *)*plVar12;
                        if (plVar12 != (long *)0x0) {
                          bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
                          if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
                             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
                              *(long *)StringLiteral_1183)) goto LAB_033c090c;
                        }
                        FUN_033b4f38(lVar14,uVar6,plVar12,0,*(int *)(lVar14 + 0x18) - uVar6,0);
                        *in_stack_00000058 = (long)plVar16;
                        thunk_FUN_01e10808(in_stack_00000058,plVar16);
                        goto LAB_033c0740;
                      }
                      if (uVar10 <= unaff_x25) goto LAB_033bfa24;
                      in_stack_00000028 = in_stack_00000040 + uVar9 + 5;
                      uVar10 = FUN_03308638(*in_stack_00000028,0,0);
                      uVar9 = unaff_x25;
                    } while ((uVar10 & 1) != 0);
                    if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_033bfa24;
                    plVar16 = (long *)*in_stack_00000028;
                    if ((plVar16 == (long *)0x0) ||
                       (unaff_x27 = (**(code **)(*plVar16 + 0x3b8))
                                              (plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
                       unaff_x27 == 0)) goto LAB_033bec5c;
                    uVar10 = *(ulong *)(unaff_x27 + 0x18);
                    lVar14 = *in_stack_00000058;
                    if (uVar10 == 0) {
                      if (lVar14 == 0) goto LAB_033bec5c;
                      if (*(long *)(lVar14 + 0x18) == 0) goto LAB_033beda8;
                      if (*(uint *)(in_stack_00000040 + 3) <= unaff_x25) goto LAB_033bfa24;
                      plVar16 = (long *)*in_stack_00000028;
                      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                      uVar6 = (**(code **)(*plVar16 + 600))
                                        (plVar16,*(undefined8 *)(*plVar16 + 0x260));
                      if ((uVar6 >> 1 & 1) != 0) goto LAB_033beda8;
                      goto LAB_033bf82c;
                    }
                    if (lVar14 == 0) goto LAB_033bec5c;
                    uVar6 = *(uint *)(lVar14 + 0x18);
                    iVar5 = (int)uVar10;
                    if ((int)uVar6 < iVar5) {
                      uVar7 = iVar5 - 1;
                      if ((int)uVar6 < (int)uVar7) {
                        plVar16 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                        do {
                          if ((uint)uVar10 <= uVar6) goto LAB_033bfa24;
                          plVar8 = (long *)*plVar16;
                          if (plVar8 == (long *)0x0) goto LAB_033bec5c;
                          lVar14 = (**(code **)(*plVar8 + 0x1f8))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x200));
                          puVar3 = StringLiteral_4821;
                          lVar15 = *(long *)StringLiteral_4821;
                          if (*(int *)(lVar15 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30(lVar15);
                            lVar15 = *(long *)puVar3;
                          }
                          if (lVar14 == **(long **)(lVar15 + 0xb8)) {
                            uVar10 = (ulong)*(uint *)(unaff_x27 + 0x18);
                            uVar7 = *(uint *)(unaff_x27 + 0x18) - 1;
                            break;
                          }
                          uVar10 = *(ulong *)(unaff_x27 + 0x18);
                          uVar6 = uVar6 + 1;
                          plVar16 = plVar16 + 1;
                          uVar7 = (int)uVar10 - 1;
                        } while ((int)uVar6 < (int)uVar7);
                      }
                      if (uVar6 != uVar7) goto LAB_033bf82c;
                      if ((uint)uVar10 <= uVar6) goto LAB_033bfa24;
                      plVar8 = (long *)(unaff_x27 + (long)(int)uVar6 * 8 + 0x20);
                      plVar16 = (long *)*plVar8;
                      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                      lVar14 = (**(code **)(*plVar16 + 0x1f8))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x200));
                      puVar3 = StringLiteral_4821;
                      lVar15 = *(long *)StringLiteral_4821;
                      if (*(int *)(lVar15 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30(lVar15);
                        lVar15 = *(long *)puVar3;
                      }
                      if (lVar14 != **(long **)(lVar15 + 0xb8)) goto LAB_033bf040;
                      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
                      plVar16 = (long *)*plVar8;
                      if ((plVar16 == (long *)0x0) ||
                         (lVar14 = (**(code **)(*plVar16 + 0x1d8))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                         lVar14 == 0)) goto LAB_033bec5c;
                      uVar10 = FUN_033ac038(lVar14,0);
                      if ((uVar10 & 1) == 0) goto LAB_033bf82c;
                      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
                      plVar16 = (long *)*plVar8;
                      uVar17 = *(undefined8 *)StringLiteral_8800;
                      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                        thunk_FUN_01dc4f30();
                      }
                      uVar17 = FUN_033a87c8(uVar17,0);
                      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                      uVar10 = (**(code **)(*plVar16 + 0x208))
                                         (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                      unaff_x22 = (long *)
                                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      ;
                      if ((uVar10 & 1) == 0) goto LAB_033bf82c;
                      if (*(uint *)(unaff_x27 + 0x18) <= uVar6) goto LAB_033bfa24;
                      plVar8 = (long *)*plVar8;
                      if ((plVar8 == (long *)0x0) ||
                         (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                      (plVar8,*(undefined8 *)(*plVar8 + 0x1e0)),
                         plVar16 == (long *)0x0)) goto LAB_033bec5c;
LAB_033bf87c:
                      in_stack_00000048 =
                           (long *)(**(code **)(*plVar16 + 0x418))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x420));
                    }
                    else {
                      if (iVar5 == 0) goto LAB_033bfa24;
                      uVar7 = iVar5 - 1;
                      lVar14 = (long)(int)uVar7;
                      plVar8 = (long *)(unaff_x27 + lVar14 * 8 + 0x20);
                      plVar16 = (long *)*plVar8;
                      if ((plVar16 == (long *)0x0) ||
                         (lVar15 = (**(code **)(*plVar16 + 0x1d8))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
                         lVar15 == 0)) goto LAB_033bec5c;
                      uVar10 = FUN_033ac038(lVar15,0);
                      if (iVar5 < (int)uVar6) {
                        if ((uVar10 & 1) != 0) {
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                          plVar16 = (long *)*plVar8;
                          uVar17 = *(undefined8 *)StringLiteral_8800;
                          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                            thunk_FUN_01dc4f30();
                          }
                          uVar17 = FUN_033a87c8(uVar17,0);
                          if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                          uVar10 = (**(code **)(*plVar16 + 0x208))
                                             (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                          unaff_x22 = (long *)
                                      Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                          ;
                          if ((uVar10 & 1) != 0) {
                            if (unaff_x23 == 0) goto LAB_033bec5c;
                            if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                            lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                            if (lVar15 == 0) goto LAB_033bec5c;
                            if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
                            if (*(uint *)(lVar15 + lVar14 * 4 + 0x20) == uVar7) {
LAB_033bf854:
                              if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                              plVar8 = (long *)*plVar8;
                              if ((plVar8 != (long *)0x0) &&
                                 (plVar16 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                                              (plVar8,*(undefined8 *)
                                                                       (*plVar8 + 0x1e0)),
                                 plVar16 != (long *)0x0)) goto LAB_033bf87c;
                              goto LAB_033bec5c;
                            }
                          }
                        }
                        goto LAB_033bf82c;
                      }
                      if ((uVar10 & 1) != 0) {
                        if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                        plVar16 = (long *)*plVar8;
                        uVar17 = *(undefined8 *)StringLiteral_8800;
                        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                          thunk_FUN_01dc4f30();
                        }
                        uVar17 = FUN_033a87c8(uVar17,0);
                        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
                        uVar9 = (**(code **)(*plVar16 + 0x208))
                                          (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x210));
                        unaff_x22 = (long *)
                                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        ;
                        if ((uVar9 & 1) == 0) {
                          in_stack_00000048 = (long *)0x0;
                          goto LAB_033bf044;
                        }
                        if (unaff_x23 == 0) goto LAB_033bec5c;
                        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
                        lVar15 = *(long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                        if (lVar15 == 0) goto LAB_033bec5c;
                        if (*(uint *)(lVar15 + 0x18) <= uVar7) goto LAB_033bfa24;
                        if (*(uint *)(lVar15 + lVar14 * 4 + 0x20) == uVar7) {
                          if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_033bfa24;
                          plVar16 = (long *)*plVar8;
                          if ((plVar16 == (long *)0x0) ||
                             (plVar16 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                                          (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)
                                                          ), unaff_x26 == 0)) goto LAB_033bec5c;
                          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_033bfa24;
                          if (plVar16 != (long *)0x0) {
                            uVar9 = (**(code **)(*plVar16 + 0x288))
                                              (plVar16,*(undefined8 *)
                                                        (unaff_x26 + lVar14 * 8 + 0x20),
                                               *(undefined8 *)(*plVar16 + 0x290));
                            if ((uVar9 & 1) == 0) goto LAB_033bf854;
                            goto LAB_033bf040;
                          }
                          goto LAB_033bec5c;
                        }
                      }
LAB_033bf040:
                      in_stack_00000048 = (long *)0x0;
                    }
LAB_033bf044:
                    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                      thunk_FUN_01dc4f30();
                    }
                    uVar9 = FUN_033ab18c(in_stack_00000048,0,0);
                    if ((uVar9 & 1) == 0) {
                      if (*in_stack_00000058 == 0) goto LAB_033bec5c;
                      unaff_w19 = *(uint *)(*in_stack_00000058 + 0x18);
                    }
                    else {
                      unaff_w19 = *(int *)(unaff_x27 + 0x18) - 1;
                    }
                    if (0 < (int)unaff_w19) {
                      unaff_w20 = 0;
                      unaff_x24 = (long *)(unaff_x23 + unaff_x25 * 8 + 0x20);
                      goto LAB_033bf094;
                    }
                    uVar6 = 0;
                    goto LAB_033bf4a8;
                  }
                  goto LAB_033bfa24;
                }
                goto LAB_033c07f0;
              }
            }
            goto LAB_033bfa24;
          }
          goto LAB_033c07f0;
        }
        goto LAB_033bec5c;
      }
      goto LAB_033bfa24;
    }
  }
  goto LAB_033bec5c;
LAB_033bf900:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((uint)*(ulong *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
  if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
  if (((((uint)in_stack_00000038[3] <= uVar6) || (uVar9 = lVar14 + 1, uVar10 <= uVar9)) ||
      ((*(ulong *)(unaff_x23 + 0x18) & 0xffffffff) <= uVar9)) ||
     ((in_stack_00000038[3] & 0xffffffffU) <= uVar9)) goto LAB_033bfa24;
  lVar18 = in_stack_00000040[lVar15 + 4];
  lVar20 = in_stack_00000040[lVar14 + 5];
  lVar11 = in_stack_00000038[lVar15 + 4];
  uVar17 = *(undefined8 *)(unaff_x23 + lVar15 * 8 + 0x20);
  uVar19 = *(undefined8 *)(unaff_x23 + 0x28 + lVar14 * 8);
  lVar15 = in_stack_00000038[lVar14 + 5];
  if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  iVar5 = FUN_033c0e28(lVar18,uVar17,lVar11,lVar20,uVar19,lVar15);
  if (iVar5 == 0) {
    bVar2 = true;
  }
  else if (iVar5 == 2) {
    uVar6 = (int)lVar14 + 1;
    bVar2 = false;
  }
  if ((ulong)in_stack_00000030 - 2 != lVar14) {
    lVar15 = (long)(int)uVar6;
    lVar14 = lVar14 + 1;
    uVar10 = in_stack_00000040[3] & 0xffffffff;
    if ((uint)in_stack_00000040[3] <= uVar6) goto LAB_033bfa24;
    goto LAB_033bf900;
  }
  unaff_x22 = (long *)
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
  ;
  if (bVar2) {
    uVar17 = thunk_FUN_01dd295c(StringLiteral_6016);
    uVar17 = FUN_033d6e4c(uVar17,0);
    thunk_FUN_01dd295c(StringLiteral_5868);
    uVar19 = thunk_FUN_01de27b8();
    FUN_033063d0(uVar19,uVar17,0);
LAB_033c0894:
    uVar17 = thunk_FUN_01dd295c(StringLiteral_8803);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar19,uVar17);
  }
LAB_033bfae0:
  if (in_stack_00000020 != 0) {
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    plVar16 = (long *)(unaff_x23 + (long)(int)uVar6 * 8 + 0x20);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_033bec5c;
    lVar14 = FUN_033b5440(lVar14,0);
    lVar15 = *in_stack_00000058;
    if ((lVar15 == 0) || (in_stack_00000038 == (long *)0x0)) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar11 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    bVar4 = FUN_033ab18c(lVar11,0,0);
    lVar11 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8798);
    if (lVar14 == 0) {
      lVar18 = 0;
    }
    else {
      uVar17 = *(undefined8 *)StringLiteral_151;
      lVar18 = thunk_FUN_01de26bc(lVar14,uVar17);
      if (lVar18 == 0) {
LAB_033bfb98:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(lVar14,uVar17);
      }
    }
    uVar17 = *(undefined8 *)(lVar15 + 0x18);
    FUN_033d8040(lVar11,0);
    *(long *)(lVar11 + 0x10) = lVar18;
    thunk_FUN_01e10808((long *)(lVar11 + 0x10),lVar18);
    *(int *)(lVar11 + 0x18) = (int)uVar17;
    *(byte *)(lVar11 + 0x1c) = bVar4 & 1;
    *in_stack_00000010 = lVar11;
    thunk_FUN_01e10808(in_stack_00000010,lVar11);
    if (*(uint *)(unaff_x23 + 0x18) <= uVar6) goto LAB_033bfa24;
    lVar14 = *plVar16;
    lVar15 = *in_stack_00000058;
    if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033c0ca4(lVar14,lVar15);
    unaff_x22 = (long *)
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
    ;
  }
  if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_033bfa24;
  plVar8 = in_stack_00000040 + (long)(int)uVar6 + 4;
  plVar16 = (long *)*plVar8;
  if (((plVar16 == (long *)0x0) ||
      (lVar14 = (**(code **)(*plVar16 + 0x3b8))(plVar16,*(undefined8 *)(*plVar16 + 0x3c0)),
      lVar14 == 0)) || (*in_stack_00000058 == 0)) goto LAB_033bec5c;
  iVar5 = *(int *)(*in_stack_00000058 + 0x18);
  if (*(int *)(lVar14 + 0x18) == iVar5) {
    if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
    if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
    lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033ab18c(lVar15,0,0);
    if ((uVar9 & 1) != 0) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar14 + 0x18)
                                    );
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_033b4f38(*in_stack_00000058,0,plVar16,0,uVar7,0);
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
      *(undefined4 *)(lVar14 + 0x20) = 1;
      lVar14 = thunk_FUN_033b4750(lVar15,lVar14,0);
      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      plVar12 = plVar16 + (long)(int)uVar7 + 4;
      *plVar12 = lVar14;
      thunk_FUN_01e10808(plVar12,lVar14);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      lVar14 = *in_stack_00000058;
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_033bec5c;
      bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
          *(long *)StringLiteral_1183)) {
LAB_033c090c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(plVar12);
      }
      FUN_033b49e8(plVar12,*(undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20),0,0);
      goto FUN_033c07b0;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar14 + 0x18)) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887);
      lVar15 = *in_stack_00000058;
      if (lVar15 == 0) goto LAB_033bec5c;
      uVar9 = 0;
      plVar12 = plVar16 + 4;
      do {
        if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar9) {
          uVar7 = *(uint *)(lVar14 + 0x18);
          if ((int)uVar9 < (int)(uVar7 - 1)) {
            do {
              if (uVar7 <= (uint)uVar9) goto LAB_033bfa24;
              plVar13 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
              if ((plVar13 == (long *)0x0) ||
                 (lVar15 = (**(code **)(*plVar13 + 0x1f8))
                                     (plVar13,*(undefined8 *)(*plVar13 + 0x200)),
                 plVar16 == (long *)0x0)) goto LAB_033bec5c;
              if ((lVar15 != 0) &&
                 (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0)
                 ) goto LAB_033c07f0;
              if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_033bfa24;
              *plVar12 = lVar15;
              thunk_FUN_01e10808(plVar12,lVar15);
              uVar7 = *(uint *)(lVar14 + 0x18);
              uVar9 = uVar9 + 1;
              plVar12 = plVar12 + 1;
            } while ((int)uVar9 < (int)(uVar7 - 1));
          }
          if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
          if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
          lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = FUN_033ab18c(lVar15,0,0);
          uVar7 = (uint)uVar9;
          if ((uVar10 & 1) == 0) {
            if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_033bfa24;
            plVar12 = *(long **)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
            if ((plVar12 == (long *)0x0) ||
               (lVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
               plVar16 == (long *)0x0)) goto LAB_033bec5c;
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
            goto LAB_033c07f0;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          else {
            if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
            lVar14 = in_stack_00000038[(long)(int)uVar6 + 4];
            uVar17 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
            lVar14 = thunk_FUN_033b4750(lVar14,uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_033bec5c;
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
            goto LAB_033c07f0;
            uVar1 = *(uint *)(plVar16 + 3);
          }
          if (uVar1 <= uVar7) goto LAB_033bfa24;
          plVar16[(long)(int)uVar7 + 4] = lVar14;
          thunk_FUN_01e10808(plVar16 + (long)(int)uVar7 + 4,lVar14);
FUN_033c07b0:
          *in_stack_00000058 = (long)plVar16;
          thunk_FUN_01e10808(in_stack_00000058,plVar16);
          goto OVRPlugin__TriggerVibrationAction;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_033bfa24;
        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
        lVar15 = *(long *)(lVar15 + uVar9 * 8 + 0x20);
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
        goto LAB_033c07f0;
        if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_033bfa24;
        *plVar12 = lVar15;
        thunk_FUN_01e10808(plVar12,lVar15);
        lVar15 = *in_stack_00000058;
        uVar9 = uVar9 + 1;
        plVar12 = plVar12 + 1;
        if (lVar15 == 0) goto LAB_033bec5c;
      } while( true );
    }
    if (*(uint *)(in_stack_00000040 + 3) <= uVar6) goto LAB_033bfa24;
    plVar16 = (long *)*plVar8;
    if (plVar16 == (long *)0x0) goto LAB_033bec5c;
    uVar7 = (**(code **)(*plVar16 + 600))(plVar16,*(undefined8 *)(*plVar16 + 0x260));
    if ((uVar7 >> 1 & 1) == 0) {
      plVar16 = (long *)FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,*(undefined4 *)(lVar14 + 0x18)
                                    );
      uVar7 = *(int *)(lVar14 + 0x18) - 1;
      FUN_033b4f38(*in_stack_00000058,0,plVar16,0,uVar7,0);
      if (in_stack_00000038 == (long *)0x0) goto LAB_033bec5c;
      if (*(uint *)(in_stack_00000038 + 3) <= uVar6) goto LAB_033bfa24;
      lVar15 = in_stack_00000038[(long)(int)uVar6 + 4];
      lVar14 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
      if ((*in_stack_00000058 == 0) || (lVar14 == 0)) goto LAB_033bec5c;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_033bfa24;
      *(uint *)(lVar14 + 0x20) = *(int *)(*in_stack_00000058 + 0x18) - uVar7;
      lVar14 = thunk_FUN_033b4750(lVar15,lVar14,0);
      if (plVar16 == (long *)0x0) goto LAB_033bec5c;
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
      goto LAB_033c07f0;
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      plVar12 = plVar16 + (long)(int)uVar7 + 4;
      *plVar12 = lVar14;
      thunk_FUN_01e10808(plVar12,lVar14);
      if (*(uint *)(plVar16 + 3) <= uVar7) goto LAB_033bfa24;
      lVar14 = *in_stack_00000058;
      if (lVar14 == 0) goto LAB_033bec5c;
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        bVar4 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar4) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) !=
            *(long *)StringLiteral_1183)) goto LAB_033c090c;
      }
      FUN_033b4f38(lVar14,uVar7,plVar12,0,*(int *)(lVar14 + 0x18) - uVar7,0);
      *in_stack_00000058 = (long)plVar16;
      thunk_FUN_01e10808(in_stack_00000058,plVar16);
    }
  }
OVRPlugin__TriggerVibrationAction:
  if (uVar6 < *(uint *)(in_stack_00000040 + 3)) goto LAB_033c07cc;
  goto LAB_033bfa24;
  while( true ) {
    lVar15 = *(long *)(lVar15 + uVar9 * 8 + 0x20);
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar16 + 3) <= uVar9) goto LAB_033bfa24;
    *plVar12 = lVar15;
    thunk_FUN_01e10808(plVar12,lVar15);
    lVar15 = *in_stack_00000058;
    uVar9 = uVar9 + 1;
    plVar12 = plVar12 + 1;
    if (lVar15 == 0) break;
LAB_033bfe14:
    if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar9) {
      uVar6 = *(uint *)(lVar14 + 0x18);
      if ((int)(uVar6 - 1) <= (int)uVar9) goto LAB_033c0080;
      goto LAB_033c000c;
    }
    if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_033bfa24;
    if (plVar16 == (long *)0x0) break;
  }
  goto LAB_033bec5c;
LAB_033beda8:
  if (unaff_x23 == 0) goto LAB_033bec5c;
  if ((*(uint *)(unaff_x23 + 0x18) <= unaff_x25) ||
     (*(uint *)(unaff_x23 + 0x18) <= in_stack_00000030)) goto LAB_033bfa24;
  lVar14 = (long)(int)in_stack_00000030;
  *(undefined8 *)(unaff_x23 + lVar14 * 8 + 0x20) = *(undefined8 *)(unaff_x23 + unaff_x25 * 8 + 0x20)
  ;
  thunk_FUN_01e10808();
  uVar9 = (ulong)*(uint *)(in_stack_00000040 + 3);
  if (uVar9 <= unaff_x25) goto LAB_033bfa24;
  lVar15 = *in_stack_00000028;
  if (lVar15 != 0) goto LAB_033bf720;
  goto LAB_033bf738;
LAB_033bf094:
  do {
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_w20) goto LAB_033bfa24;
    unaff_x28 = (long)(int)unaff_w20;
    plVar16 = *(long **)(unaff_x27 + unaff_x28 * 8 + 0x20);
    if ((plVar16 == (long *)0x0) ||
       (unaff_x29 = (long *)(**(code **)(*plVar16 + 0x1d8))
                                      (plVar16,*(undefined8 *)(*plVar16 + 0x1e0)),
       unaff_x29 == (long *)0x0)) goto LAB_033bec5c;
    uVar9 = FUN_033ac048(unaff_x29,0);
    if ((uVar9 & 1) != 0) {
      unaff_x29 = (long *)(**(code **)(*unaff_x29 + 0x418))
                                    (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x420));
    }
    if (unaff_x23 == 0) goto LAB_033bec5c;
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
    lVar14 = *unaff_x24;
    if (lVar14 == 0) goto LAB_033bec5c;
    if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_033bfa24;
    if (unaff_x26 == 0) goto LAB_033bec5c;
    uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar6) goto LAB_033bfa24;
    uVar17 = *(undefined8 *)(unaff_x26 + (long)(int)uVar6 * 8 + 0x20);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar9 = FUN_033aa3b4(unaff_x29,uVar17,0);
    if ((uVar9 & 1) == 0) {
      if ((in_stack_00000050 >> 0x12 & 1) != 0) {
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
        lVar14 = *unaff_x24;
        if (lVar14 == 0) goto LAB_033bec5c;
        if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_033bfa24;
        lVar15 = *in_stack_00000058;
        if (lVar15 == 0) goto LAB_033bec5c;
        uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
        if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
        lVar14 = *unaff_x22;
        lVar15 = *(long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar14 = *unaff_x22;
        }
        if (lVar15 == *(long *)(*(long *)(lVar14 + 0xb8) + 0x18)) goto LAB_033bf488;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) goto LAB_033bfa24;
      lVar14 = *unaff_x24;
      if (lVar14 == 0) goto LAB_033bec5c;
      if (*(uint *)(lVar14 + 0x18) <= unaff_w20) goto LAB_033bfa24;
      lVar15 = *in_stack_00000058;
      if (lVar15 == 0) goto LAB_033bec5c;
      uVar6 = *(uint *)(lVar14 + unaff_x28 * 4 + 0x20);
      if (*(uint *)(lVar15 + 0x18) <= uVar6) goto LAB_033bfa24;
      if (*(long *)(lVar15 + (long)(int)uVar6 * 8 + 0x20) != 0) {
        in_w8 = *(int *)(*unaff_x22 + 0xe0);
        in_x9 = (undefined8 *)StringLiteral_2477;
        goto code_r0x033bf220;
      }
    }
LAB_033bf488:
    unaff_w20 = unaff_w20 + 1;
    uVar6 = unaff_w19;
  } while (unaff_w19 != unaff_w20);
  goto LAB_033bf4a8;
  while( true ) {
    plVar13 = *(long **)(lVar14 + 0x20 + uVar9 * 8);
    if ((plVar13 == (long *)0x0) ||
       (lVar15 = (**(code **)(*plVar13 + 0x1f8))(plVar13,*(undefined8 *)(*plVar13 + 0x200)),
       plVar16 == (long *)0x0)) goto LAB_033bec5c;
    if ((lVar15 != 0) &&
       (lVar11 = thunk_FUN_01de26bc(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar11 == 0))
    goto LAB_033c07f0;
    if (*(uint *)(plVar16 + 3) <= (uint)uVar9) goto LAB_033bfa24;
    *plVar12 = lVar15;
    thunk_FUN_01e10808(plVar12,lVar15);
    uVar6 = *(uint *)(lVar14 + 0x18);
    uVar9 = uVar9 + 1;
    plVar12 = plVar12 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar9) break;
LAB_033c000c:
    if (uVar6 <= (uint)uVar9) goto LAB_033bfa24;
  }
LAB_033c0080:
  if (in_stack_00000038 != (long *)0x0) {
    if ((int)in_stack_00000038[3] != 0) {
      lVar15 = in_stack_00000038[4];
      if (*(int *)(*(long *)
                    Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                  + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar10 = FUN_033ab18c(lVar15,0,0);
      uVar6 = (uint)uVar9;
      if ((uVar10 & 1) == 0) {
        if (*(uint *)(lVar14 + 0x18) <= uVar6) goto LAB_033bfa24;
        plVar12 = *(long **)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
        if ((plVar12 == (long *)0x0) ||
           (lVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200)),
           plVar16 == (long *)0x0)) goto LAB_033bec5c;
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
        goto LAB_033c07f0;
        uVar7 = *(uint *)(plVar16 + 3);
      }
      else {
        if ((int)in_stack_00000038[3] == 0) goto LAB_033bfa24;
        lVar14 = in_stack_00000038[4];
        uVar17 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,1);
        lVar14 = thunk_FUN_033b4750(lVar14,uVar17,0);
        if (plVar16 == (long *)0x0) goto LAB_033bec5c;
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_01de26bc(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0)) {
LAB_033c07f0:
          uVar17 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar17,0);
        }
        uVar7 = *(uint *)(plVar16 + 3);
      }
      if (uVar6 < uVar7) {
        plVar16[(long)(int)uVar6 + 4] = lVar14;
        thunk_FUN_01e10808(plVar16 + (long)(int)uVar6 + 4,lVar14);
LAB_033c0730:
        *in_stack_00000058 = (long)plVar16;
        thunk_FUN_01e10808(in_stack_00000058,plVar16);
LAB_033c0740:
        if ((int)in_stack_00000040[3] != 0) {
LAB_033c07cc:
          return *plVar8;
        }
      }
    }
LAB_033bfa24:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
LAB_033bec5c:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


