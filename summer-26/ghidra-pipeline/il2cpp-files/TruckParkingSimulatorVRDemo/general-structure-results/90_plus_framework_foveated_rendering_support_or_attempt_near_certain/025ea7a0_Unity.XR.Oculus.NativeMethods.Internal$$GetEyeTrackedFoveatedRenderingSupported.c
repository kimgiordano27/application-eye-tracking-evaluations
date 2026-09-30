/*
FUNCTION_NAME: Unity.XR.Oculus.NativeMethods.Internal$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 025ea7a0
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 149
LABEL: framework_foveated_rendering_support_or_attempt_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering;frame_behavior;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;strong_foveation_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined4
Unity_XR_Oculus_NativeMethods_Internal__GetEyeTrackedFoveatedRenderingSupported
          (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *__src;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulong uVar29;
  uint *puVar30;
  long *plVar31;
  uint uVar32;
  int iStack_178;
  undefined1 auStack_170 [80];
  undefined1 auStack_120 [80];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  uint uStack_8;
  undefined1 auStack_4 [4];
  
  if ((DAT_02c70ea4 & 1) == 0) {
    thunk_FUN_011f4b58(PTR_DAT_02abaa38);
    thunk_FUN_011f4b58(PTR_DAT_02ab8108);
    thunk_FUN_011f4b58(PTR_DAT_02ac4ff0);
    thunk_FUN_011f4b58(PTR_DAT_02ae45f0);
    thunk_FUN_011f4b58(PTR_DAT_02ab97f0);
    thunk_FUN_011f4b58(PTR_DAT_02ae46c0);
                    /* try { // try from 025ea800 to 026ea827 has its CatchHandler @ 025ea970 */
    thunk_FUN_011f4b58(PTR_DAT_02ae43e0);
    thunk_FUN_011f4b58(PTR_DAT_02ab7968);
    thunk_FUN_011f4b58(PTR_DAT_02ab7a38);
    thunk_FUN_011f4b58(PTR_DAT_02ab7868);
    thunk_FUN_011f4b58(PTR_DAT_02ab7b00);
    thunk_FUN_011f4b58(PTR_DAT_02ae46c8);
    thunk_FUN_011f4b58(PTR_DAT_02ae4628);
    thunk_FUN_011f4b58(PTR_DAT_02ae46d0);
    thunk_FUN_011f4b58(PTR_DAT_02ae46d8);
    thunk_FUN_011f4b58(PTR_DAT_02ae46e0);
    thunk_FUN_011f4b58(PTR_DAT_02ae46e8);
    thunk_FUN_011f4b58(PTR_DAT_02ae46f0);
    thunk_FUN_011f4b58(PTR_DAT_02ae4410);
    thunk_FUN_011f4b58(PTR_DAT_02ae4458);
    thunk_FUN_011f4b58(PTR_DAT_02ae4470);
    thunk_FUN_011f4b58(PTR_DAT_02ae4490);
    thunk_FUN_011f4b58(PTR_DAT_02abc118);
    thunk_FUN_011f4b58(PTR_DAT_02ae46f8);
    thunk_FUN_011f4b58(PTR_DAT_02ae4700);
    thunk_FUN_011f4b58(PTR_DAT_02ae4708);
    thunk_FUN_011f4b58(PTR_DAT_02ae4710);
    DAT_02c70ea4 = 1;
  }
  puVar7 = PTR_DAT_02ae4490;
  puVar5 = PTR_DAT_02ae4470;
  auStack_4[0] = 0;
  uStack_8 = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined1 *)(param_1 + 0x26a) = 0;
  *(undefined2 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 600);
  FUN_026370dc(param_1 + 0x260,0);
  if ((*(byte *)(param_1 + 0x25c) & 1) == 0) {
    uVar13 = *(undefined4 *)(param_1 + 0x210);
  }
  else {
    uVar13 = 700;
  }
  *(undefined4 *)(param_1 + 0x214) = uVar13;
  puVar6 = PTR_DAT_02ae4458;
  FUN_01f2c418(param_1 + 0x218,uVar13,*(undefined8 *)puVar5);
  uVar19 = *(undefined8 *)(param_1 + 0xf8);
  uVar20 = *(undefined8 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x100) = uVar19;
  *(undefined8 *)(param_1 + 0x118) = uVar20;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_011ea084();
    uVar13 = *(undefined4 *)(param_1 + 0x120);
    uVar19 = *(undefined8 *)(param_1 + 0x100);
    uVar20 = *(undefined8 *)(param_1 + 0x118);
  }
  else {
    uVar13 = 0;
  }
  uStack_10 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_025e5e0c(*(undefined4 *)(param_1 + 0x618),&uStack_40,uVar13,uVar19,0,uVar20);
  uStack_c8 = uStack_38;
  uStack_d0 = uStack_40;
  uStack_b8 = uStack_28;
  uStack_c0 = uStack_30;
  uStack_a8 = uStack_18;
  uStack_b0 = uStack_20;
  uStack_a0 = uStack_10;
  FUN_01f2c9fc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,&uStack_d0,*(undefined8 *)puVar6);
  plVar31 = (long *)PTR_DAT_02ae4410;
  lVar14 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
  if (lVar14 == 0) goto LAB_025ec22c;
  FUN_0199f28c(lVar14,*(undefined8 *)PTR_DAT_02ac4ff0);
  FUN_025e5f84(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x100),
               *(long *)(*(long *)puVar7 + 0xb8),
               *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 8));
  if (*(long *)(param_1 + 0x368) == 0) {
    uVar13 = *(undefined4 *)(param_1 + 0x480);
    uVar19 = thunk_FUN_01268e40(*plVar31);
    FUN_02636204(uVar19,uVar13,0);
    *(undefined8 *)(param_1 + 0x368) = uVar19;
  }
  else {
    plVar25 = (long *)(*(long *)(param_1 + 0x368) + 0x38);
    lVar14 = *plVar25;
    if (lVar14 == 0) goto LAB_025ec22c;
    iVar8 = *(int *)(param_1 + 0x480);
    if (*(int *)(lVar14 + 0x18) < iVar8) {
      if (*(int *)(*plVar31 + 0xe0) == 0) {
        thunk_FUN_011ea084();
      }
      FUN_017dbed8(plVar25,iVar8,0,*(undefined8 *)PTR_DAT_02ae46e0);
    }
  }
  iVar8 = *(int *)(param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 0x644) = 0;
  if (iVar8 == 1) {
    FUN_0262505c(param_1,*(undefined8 *)(param_1 + 0x100),0);
    if (*(long *)(param_1 + 0x650) == 0) {
      *(undefined4 *)(param_1 + 0x2e0) = 3;
      uVar15 = FUN_0262e138(0);
      if ((uVar15 & 1) == 0) {
        if (*(long *)(param_1 + 0x100) == 0) goto LAB_025ec22c;
        uVar19 = FUN_02760680(*(long *)(param_1 + 0x100),0);
        uVar19 = FUN_0215a598(*(undefined8 *)PTR_DAT_02ae4708,uVar19,*(undefined8 *)PTR_DAT_02ae4710
                              ,0);
        if (*(int *)(*(long *)PTR_DAT_02ab8108 + 0xe0) == 0) {
          thunk_FUN_011ea084(*(long *)PTR_DAT_02ab8108);
        }
        FUN_027376dc(uVar19,param_1,0);
      }
    }
    else {
      if (*(long *)(param_1 + 0x658) == 0) goto LAB_025ec22c;
      iVar8 = FUN_027602a4(*(long *)(param_1 + 0x658),0);
      if (*(long *)(param_1 + 0x100) == 0) goto LAB_025ec22c;
      iVar9 = FUN_027602a4(*(long *)(param_1 + 0x100),0);
      if (iVar8 != iVar9) {
        uVar15 = FUN_0262e290(0);
        if ((uVar15 & 1) == 0) {
LAB_025eab38:
          lVar14 = *(long *)(param_1 + 0x658);
          if (lVar14 == 0) goto LAB_025ec22c;
          uVar19 = *(undefined8 *)(lVar14 + 0x20);
          *(undefined8 *)(param_1 + 0x660) = uVar19;
        }
        else {
          if (*(long *)(param_1 + 0x118) == 0) goto LAB_025ec22c;
          iVar8 = FUN_027602a4(*(long *)(param_1 + 0x118),0);
          if ((*(long *)(param_1 + 0x658) == 0) ||
             (lVar14 = *(long *)(*(long *)(param_1 + 0x658) + 0x20), lVar14 == 0))
          goto LAB_025ec22c;
          iVar9 = FUN_027602a4(lVar14,0);
          if (iVar8 == iVar9) goto LAB_025eab38;
          if (*(long *)(param_1 + 0x658) == 0) goto LAB_025ec22c;
          uVar19 = *(undefined8 *)(param_1 + 0x118);
          uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x658) + 0x20);
          if (*(int *)(*(long *)PTR_DAT_02ae46d0 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          uVar19 = FUN_0262a7d0(uVar19,uVar20,0);
          lVar14 = *(long *)(param_1 + 0x658);
          *(undefined8 *)(param_1 + 0x660) = uVar19;
        }
        lVar16 = *(long *)puVar7;
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_011ea084();
          lVar16 = *(long *)puVar7;
        }
        uVar10 = FUN_025e5f84(uVar19,lVar14,*(long *)(lVar16 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
        *(uint *)(param_1 + 0x668) = uVar10;
        lVar14 = **(long **)(*(long *)puVar7 + 0xb8);
        if (lVar14 == 0) goto LAB_025ec22c;
        if (*(uint *)(lVar14 + 0x18) <= uVar10) {
LAB_025ec230:
                    /* WARNING: Subroutine does not return */
          FUN_012196e0();
        }
        *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x54) = 0;
      }
    }
    iVar8 = *(int *)(param_1 + 0x2e0);
  }
  if (iVar8 == 6) {
    uVar19 = *(undefined8 *)(param_1 + 0x2e8);
    if (*(int *)(*(long *)PTR_DAT_02ab7868 + 0xe0) == 0) {
      thunk_FUN_011ea084();
    }
    uVar15 = FUN_0275d0a4(uVar19,0,0);
    if (((uVar15 & 1) != 0) && (*(char *)(param_1 + 0x3f5) == '\0')) {
      plVar25 = *(long **)(param_1 + 0x2e8);
      if (plVar25 == (long *)0x0) goto LAB_025ec22c;
      (**(code **)(*plVar25 + 0x558))
                (plVar25,**(undefined8 **)(*(long *)PTR_DAT_02ab7b00 + 0xb8),
                 *(undefined8 *)(*plVar25 + 0x560));
    }
  }
  if (param_2 != 0) {
    uVar10 = *(uint *)(param_2 + 0x18);
    if ((int)uVar10 < 1) {
      iStack_178 = 0;
    }
    else {
      uVar32 = 0;
      iStack_178 = 0;
      do {
        if (uVar10 <= uVar32) goto LAB_025ec230;
        puVar30 = (uint *)(param_2 + (long)(int)uVar32 * 0xc + 0x20);
        if (*puVar30 == 0) break;
        if (*(long *)(param_1 + 0x368) == 0) goto LAB_025ec22c;
        plVar25 = (long *)(*(long *)(param_1 + 0x368) + 0x38);
        lVar14 = *plVar25;
        iVar8 = *(int *)(param_1 + 0x490);
        if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) <= iVar8)) {
          if (*(int *)(*plVar31 + 0xe0) == 0) {
            thunk_FUN_011ea084();
          }
          FUN_017dbed8(plVar25,iVar8 + 1,1,*(undefined8 *)PTR_DAT_02ae46e0);
          uVar10 = *(uint *)(param_2 + 0x18);
        }
        if (uVar10 <= uVar32) goto LAB_025ec230;
        uVar10 = *puVar30;
        if ((uVar10 == 0x3c) && (*(char *)(param_1 + 0x302) != '\0')) {
          uVar13 = *(undefined4 *)(param_1 + 0x120);
          uVar15 = FUN_0261a554(param_1,param_2,uVar32 + 1,&uStack_8,0);
          uVar11 = uStack_8;
          if ((uVar15 & 1) == 0) goto LAB_025eaf1c;
          if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_025ec230;
          iVar8 = *(int *)(param_2 + (long)(int)uVar32 * 0xc + 0x24);
          if ((*(byte *)(param_1 + 0x25c) & 1) != 0) {
            *(undefined1 *)(param_1 + 0x26a) = 1;
          }
          uVar32 = uStack_8;
          if (*(int *)(param_1 + 0x644) == 1) {
            lVar14 = *(long *)puVar7;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_011ea084();
              lVar14 = *(long *)puVar7;
            }
            lVar14 = **(long **)(lVar14 + 0xb8);
            if (lVar14 != 0) {
              if (*(uint *)(param_1 + 0x120) < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)*(uint *)(param_1 + 0x120) * 0x38;
                *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
                if ((*(long *)(param_1 + 0x368) != 0) &&
                   (lVar14 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar14 != 0)) {
                  uVar10 = *(uint *)(param_1 + 0x490);
                  if (uVar10 < *(uint *)(lVar14 + 0x18)) {
                    uVar12 = *(undefined4 *)(param_1 + 0x6a4);
                    lVar22 = lVar14 + (long)(int)uVar10 * 0x178;
                    *(short *)(lVar22 + 0x20) = (short)uVar12 + -0x2000;
                    *(undefined4 *)(lVar22 + 0x48) = uVar12;
                    *(undefined8 *)(lVar22 + 0x38) = *(undefined8 *)(param_1 + 0x100);
                    lVar16 = *(long *)(param_1 + 0x698);
                    *(long *)(lVar22 + 0x40) = lVar16;
                    *(undefined4 *)(lVar22 + 0x58) = *(undefined4 *)(param_1 + 0x120);
                    if ((lVar16 != 0) && (lVar16 = FUN_02630ec4(lVar16,0), lVar16 != 0)) {
                      uVar19 = FUN_01cdae58(lVar16,*(undefined4 *)(param_1 + 0x6a4),
                                            *(undefined8 *)PTR_DAT_02ae43e0);
                      if (uVar10 < *(uint *)(lVar14 + 0x18)) {
                        *(undefined8 *)(lVar14 + (long)(int)uVar10 * 0x178 + 0x30) = uVar19;
                        plVar31 = (long *)PTR_DAT_02ae4410;
                        if ((*(long *)(param_1 + 0x368) != 0) &&
                           (lVar14 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar14 != 0)) {
                          uVar10 = *(uint *)(param_1 + 0x490);
                          if (uVar10 < *(uint *)(lVar14 + 0x18)) {
                            uVar12 = *(undefined4 *)(param_1 + 0x644);
                            lVar16 = lVar14 + (long)(int)uVar10 * 0x178;
                            *(int *)(lVar16 + 0x24) = iVar8;
                            *(undefined4 *)(lVar16 + 0x2c) = uVar12;
                            if (uVar11 < *(uint *)(param_2 + 0x18)) {
                              *(int *)(lVar14 + (long)(int)uVar10 * 0x178 + 0x28) =
                                   (*(int *)(param_2 + (long)(int)uVar11 * 0xc + 0x24) - iVar8) + 1;
                              *(undefined4 *)(param_1 + 0x644) = 0;
                              *(undefined4 *)(param_1 + 0x120) = uVar13;
                              uVar32 = uVar11;
                              goto LAB_025eb700;
                            }
                          }
                          goto LAB_025ec230;
                        }
                        goto LAB_025ec22c;
                      }
                      goto LAB_025ec230;
                    }
                    goto LAB_025ec22c;
                  }
                  goto LAB_025ec230;
                }
                goto LAB_025ec22c;
              }
              goto LAB_025ec230;
            }
            goto LAB_025ec22c;
          }
        }
        else {
LAB_025eaf1c:
          uVar19 = *(undefined8 *)(param_1 + 0x100);
          uVar20 = *(undefined8 *)(param_1 + 0x118);
          uVar13 = *(undefined4 *)(param_1 + 0x120);
          if (*(int *)(param_1 + 0x644) != 0)
          goto Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22__MoveNext;
          uVar11 = *(uint *)(param_1 + 0x25c);
          if ((uVar11 >> 4 & 1) == 0) {
            if ((uVar11 >> 3 & 1) == 0) {
              if ((uVar11 >> 5 & 1) != 0) goto LAB_025eaf48;
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_02abaa38 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              uVar15 = FUN_02246184(uVar10,0);
              if ((uVar15 & 1) != 0) {
                if (*(int *)(*(long *)PTR_DAT_02abaa38 + 0xe0) == 0) {
                  thunk_FUN_011ea084();
                }
                uVar10 = FUN_02246698(uVar10,0);
                goto LAB_025eafe4;
              }
            }
          }
          else {
LAB_025eaf48:
            if (*(int *)(*(long *)PTR_DAT_02abaa38 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            uVar15 = FUN_02246240(uVar10,0);
            if ((uVar15 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_02abaa38 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              uVar10 = FUN_02246520(uVar10,0);
LAB_025eafe4:
              uVar10 = uVar10 & 0xffff;
            }
          }
Unity_XR_Oculus_OculusRestarter_<PauseAndRestartCoroutine>d__22__MoveNext:
          lVar14 = FUN_02625390(param_1,uVar10,*(undefined8 *)(param_1 + 0x100),
                                *(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x214),
                                auStack_4,0);
          if (lVar14 == 0) {
            iVar8 = FUN_0262e0fc();
            if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_025ec230;
            if (iVar8 == 0) {
              uVar11 = 0x25a1;
            }
            else {
              uVar11 = FUN_0262e0fc(0);
            }
            *puVar30 = uVar11;
            uVar27 = *(undefined8 *)(param_1 + 0x100);
            uVar12 = *(undefined4 *)(param_1 + 0x25c);
            uVar2 = *(undefined4 *)(param_1 + 0x214);
            if (*(int *)(*(long *)PTR_DAT_02ae46c8 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            lVar14 = FUN_02605918(uVar11,uVar27,1,uVar12,uVar2,auStack_4,0);
            if (lVar14 == 0) {
              lVar14 = FUN_0262e274();
              if (lVar14 != 0) {
                lVar14 = FUN_0262e274(0);
                if (lVar14 == 0) goto LAB_025ec22c;
                if (0 < *(int *)(lVar14 + 0x18)) {
                  uVar28 = *(undefined8 *)(param_1 + 0x100);
                  uVar27 = FUN_0262e274(0);
                  uVar12 = *(undefined4 *)(param_1 + 0x25c);
                  uVar2 = *(undefined4 *)(param_1 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_02ae46c8 + 0xe0) == 0) {
                    thunk_FUN_011ea084(*(long *)PTR_DAT_02ae46c8);
                  }
                  lVar14 = FUN_02605e30(uVar11,uVar28,uVar27,1,uVar12,uVar2,auStack_4,0);
                  if (lVar14 != 0) goto LAB_025eb094;
                }
              }
              uVar27 = FUN_0262e154(0);
              if (*(int *)(*(long *)PTR_DAT_02ab7868 + 0xe0) == 0) {
                thunk_FUN_011ea084(*(long *)PTR_DAT_02ab7868);
              }
              uVar15 = FUN_0275d0a4(uVar27,0,0);
              if ((uVar15 & 1) != 0) {
                uVar27 = FUN_0262e154(0);
                uVar12 = *(undefined4 *)(param_1 + 0x25c);
                uVar2 = *(undefined4 *)(param_1 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_02ae46c8 + 0xe0) == 0) {
                  thunk_FUN_011ea084(*(long *)PTR_DAT_02ae46c8);
                }
                lVar14 = FUN_02605918(uVar11,uVar27,1,uVar12,uVar2,auStack_4,0);
                if (lVar14 != 0) goto LAB_025eb094;
              }
              if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_025ec230;
              *puVar30 = 0x20;
              uVar27 = *(undefined8 *)(param_1 + 0x100);
              uVar12 = *(undefined4 *)(param_1 + 0x25c);
              uVar2 = *(undefined4 *)(param_1 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_02ae46c8 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              uVar11 = 0x20;
              lVar14 = FUN_02605918(0x20,uVar27,1,uVar12,uVar2,auStack_4,0);
              if (lVar14 == 0) {
                if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_025ec230;
                *puVar30 = 3;
                uVar27 = *(undefined8 *)(param_1 + 0x100);
                uVar12 = *(undefined4 *)(param_1 + 0x25c);
                uVar2 = *(undefined4 *)(param_1 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_02ae46c8 + 0xe0) == 0) {
                  thunk_FUN_011ea084();
                }
                uVar11 = 3;
                lVar14 = FUN_02605918(3,uVar27,1,uVar12,uVar2,auStack_4,0);
              }
            }
LAB_025eb094:
            uVar15 = FUN_0262e138(0);
            if ((uVar15 & 1) == 0) {
              plVar31 = (long *)FUN_01219524(*(undefined8 *)PTR_DAT_02ab7a38,4);
              if ((int)uVar10 < 0x10000) {
                uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar10);
                lVar16 = thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02ab97f0,&uStack_d0);
                if (plVar31 == (long *)0x0) goto LAB_025ec22c;
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if ((int)plVar31[3] == 0) goto LAB_025ec230;
                plVar31[4] = lVar16;
                if (*(long *)(param_1 + 0xf8) == 0) goto LAB_025ec22c;
                lVar16 = FUN_02760680(*(long *)(param_1 + 0xf8),0);
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if (*(uint *)(plVar31 + 3) < 2) goto LAB_025ec230;
                plVar31[5] = lVar16;
                if (lVar14 == 0) goto LAB_025ec22c;
                uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(lVar14 + 0x14));
                lVar16 = thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02abc118,&uStack_40);
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if (*(uint *)(plVar31 + 3) < 3) goto LAB_025ec230;
                plVar31[6] = lVar16;
                lVar16 = FUN_02760680(param_1,0);
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if (*(uint *)(plVar31 + 3) < 4) goto LAB_025ec230;
                plVar31[7] = lVar16;
                puVar21 = (undefined8 *)PTR_DAT_02ae4700;
              }
              else {
                uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar10);
                lVar16 = thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02ab97f0,&uStack_d0);
                if (plVar31 == (long *)0x0) goto LAB_025ec22c;
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if ((int)plVar31[3] == 0) goto LAB_025ec230;
                plVar31[4] = lVar16;
                if (*(long *)(param_1 + 0xf8) == 0) goto LAB_025ec22c;
                lVar16 = FUN_02760680(*(long *)(param_1 + 0xf8),0);
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if (*(uint *)(plVar31 + 3) < 2) goto LAB_025ec230;
                plVar31[5] = lVar16;
                if (lVar14 == 0) goto LAB_025ec22c;
                uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(lVar14 + 0x14));
                lVar16 = thunk_FUN_01268a94(*(undefined8 *)PTR_DAT_02abc118,&uStack_40);
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if (*(uint *)(plVar31 + 3) < 3) goto LAB_025ec230;
                plVar31[6] = lVar16;
                lVar16 = FUN_02760680(param_1,0);
                if ((lVar16 != 0) &&
                   (lVar22 = thunk_FUN_01268d44(lVar16,*(undefined8 *)(*plVar31 + 0x40)),
                   lVar22 == 0)) goto LAB_025ec234;
                if (*(uint *)(plVar31 + 3) < 4) goto LAB_025ec230;
                plVar31[7] = lVar16;
                puVar21 = (undefined8 *)PTR_DAT_02ae46f8;
              }
              uVar27 = FUN_0215aad8(*puVar21,plVar31,0);
              plVar31 = (long *)PTR_DAT_02ae4410;
              if (*(int *)(*(long *)PTR_DAT_02ab8108 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              FUN_027376dc(uVar27,param_1,0);
              uVar10 = uVar11;
            }
            else {
              plVar31 = (long *)PTR_DAT_02ae4410;
              uVar10 = uVar11;
              if (lVar14 == 0) goto LAB_025ec22c;
            }
          }
          if (*(char *)(lVar14 + 0x10) == '\x01') {
            if (*(long *)(lVar14 + 0x18) == 0) goto LAB_025ec22c;
            iVar8 = FUN_025f600c(*(long *)(lVar14 + 0x18),0);
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_025ec22c;
            iVar9 = FUN_025f600c(*(long *)(param_1 + 0x100),0);
            if (iVar8 == iVar9) goto LAB_025eb540;
            plVar25 = *(long **)(lVar14 + 0x18);
            if (plVar25 == (long *)0x0) {
              *(undefined8 *)(param_1 + 0x100) = 0;
            }
            else {
              bVar3 = *(byte *)(*(long *)PTR_DAT_02ae4628 + 0x130);
              if (*(byte *)(*plVar25 + 0x130) < bVar3) {
                plVar25 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
                       *(long *)PTR_DAT_02ae4628) {
                plVar25 = (long *)0x0;
              }
              *(long **)(param_1 + 0x100) = plVar25;
            }
            bVar4 = true;
          }
          else {
LAB_025eb540:
            bVar4 = false;
          }
          if ((*(long *)(param_1 + 0x368) == 0) ||
             (lVar16 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar16 == 0))
          goto LAB_025ec22c;
          uVar11 = *(uint *)(param_1 + 0x490);
          if (*(uint *)(lVar16 + 0x18) <= uVar11) goto LAB_025ec230;
          lVar22 = lVar16 + (long)(int)uVar11 * 0x178;
          *(undefined4 *)(lVar22 + 0x2c) = 0;
          *(long *)(lVar22 + 0x30) = lVar14;
          *(short *)(lVar22 + 0x20) = (short)uVar10;
          *(undefined1 *)(lVar22 + 0x5c) = auStack_4[0];
          if (*(uint *)(param_2 + 0x18) <= uVar32) goto LAB_025ec230;
          lVar16 = lVar16 + (long)(int)uVar11 * 0x178;
          *(undefined8 *)(lVar16 + 0x24) = *(undefined8 *)(param_2 + (long)(int)uVar32 * 0xc + 0x24)
          ;
          lVar22 = *(long *)(param_1 + 0x100);
          *(long *)(lVar16 + 0x38) = lVar22;
          if (*(char *)(lVar14 + 0x10) == '\x02') {
            plVar25 = *(long **)(lVar14 + 0x18);
            if (plVar25 == (long *)0x0) goto LAB_025ec22c;
            bVar3 = *(byte *)(*(long *)PTR_DAT_02ae46d8 + 0x130);
            if ((*(byte *)(*plVar25 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)PTR_DAT_02ae46d8)) goto LAB_025ec22c;
            lVar16 = *(long *)puVar7;
            lVar22 = plVar25[4];
            if (*(int *)(lVar16 + 0xe0) == 0) {
              thunk_FUN_011ea084();
              lVar16 = *(long *)puVar7;
            }
            uVar10 = FUN_025e6190(lVar22,plVar25,*(long *)(lVar16 + 0xb8),
                                  *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
            *(uint *)(param_1 + 0x120) = uVar10;
            lVar16 = **(long **)(*(long *)puVar7 + 0xb8);
            if (lVar16 == 0) goto LAB_025ec22c;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_025ec230;
            lVar16 = lVar16 + (long)(int)uVar10 * 0x38;
            *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
            if ((*(long *)(param_1 + 0x368) == 0) ||
               (lVar16 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar16 == 0))
            goto LAB_025ec22c;
            uVar10 = *(uint *)(param_1 + 0x490);
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_025ec230;
            lVar16 = lVar16 + (long)(int)uVar10 * 0x178;
            *(undefined4 *)(lVar16 + 0x2c) = 1;
            uVar12 = *(undefined4 *)(param_1 + 0x120);
            *(long **)(lVar16 + 0x40) = plVar25;
            *(undefined4 *)(lVar16 + 0x58) = uVar12;
            *(undefined4 *)(lVar16 + 0x48) = *(undefined4 *)(lVar14 + 0x28);
            *(undefined4 *)(param_1 + 0x644) = 0;
            *(undefined4 *)(param_1 + 0x120) = uVar13;
LAB_025eb700:
            iStack_178 = iStack_178 + 1;
          }
          else {
            if (bVar4) {
              if (lVar22 == 0) goto LAB_025ec22c;
              iVar8 = FUN_025f600c(lVar22,0);
              if (*(long *)(param_1 + 0xf8) == 0) goto LAB_025ec22c;
              iVar9 = FUN_025f600c(*(long *)(param_1 + 0xf8),0);
              if (iVar8 != iVar9) {
                uVar15 = FUN_0262e290(0);
                if ((uVar15 & 1) == 0) {
                  lVar16 = *(long *)(param_1 + 0x100);
                  if (lVar16 == 0) goto LAB_025ec22c;
                  uVar27 = *(undefined8 *)(lVar16 + 0x20);
                }
                else {
                  if (*(long *)(param_1 + 0x100) == 0) goto LAB_025ec22c;
                  uVar27 = *(undefined8 *)(param_1 + 0x118);
                  uVar28 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x20);
                  if (*(int *)(*(long *)PTR_DAT_02ae46d0 + 0xe0) == 0) {
                    thunk_FUN_011ea084();
                  }
                  uVar27 = FUN_0262a7d0(uVar27,uVar28,0);
                  lVar16 = *(long *)(param_1 + 0x100);
                }
                *(undefined8 *)(param_1 + 0x118) = uVar27;
                lVar22 = *(long *)puVar7;
                if (*(int *)(lVar22 + 0xe0) == 0) {
                  thunk_FUN_011ea084();
                  lVar22 = *(long *)puVar7;
                }
                uVar12 = FUN_025e5f84(uVar27,lVar16,*(long *)(lVar22 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
                *(undefined4 *)(param_1 + 0x120) = uVar12;
                plVar31 = (long *)PTR_DAT_02ae4410;
              }
            }
            if (*(long *)(lVar14 + 0x20) == 0) goto LAB_025ec22c;
            iVar8 = UnityEngine_UIElements_EventCallbackRegistry__GetCallbackListForWriting
                              (*(long *)(lVar14 + 0x20),0);
            if (0 < iVar8) {
              if (*(long *)(lVar14 + 0x20) == 0) goto LAB_025ec22c;
              uVar27 = *(undefined8 *)(param_1 + 0x100);
              uVar28 = *(undefined8 *)(param_1 + 0x118);
              uVar12 = UnityEngine_UIElements_EventCallbackRegistry__GetCallbackListForWriting
                                 (*(long *)(lVar14 + 0x20),0);
              if (*(int *)(*(long *)PTR_DAT_02ae46d0 + 0xe0) == 0) {
                thunk_FUN_011ea084(*(long *)PTR_DAT_02ae46d0);
              }
              uVar27 = FUN_0262a28c(uVar27,uVar28,uVar12,0);
              *(undefined8 *)(param_1 + 0x118) = uVar27;
              lVar14 = *(long *)puVar7;
              uVar28 = *(undefined8 *)(param_1 + 0x100);
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_011ea084();
                lVar14 = *(long *)puVar7;
              }
              plVar31 = (long *)PTR_DAT_02ae4410;
              uVar12 = FUN_025e5f84(uVar27,uVar28,*(long *)(lVar14 + 0xb8),
                                    *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
              bVar4 = true;
              *(undefined4 *)(param_1 + 0x120) = uVar12;
            }
            if (*(int *)(*(long *)PTR_DAT_02abaa38 + 0xe0) == 0) {
              thunk_FUN_011ea084();
            }
            uVar15 = FUN_022437e0(uVar10,0);
            if ((uVar10 != 0x200b) && ((uVar15 & 1) == 0)) {
              lVar14 = *(long *)puVar7;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_011ea084(lVar14);
                lVar14 = *(long *)puVar7;
              }
              lVar16 = **(long **)(lVar14 + 0xb8);
              if (lVar16 == 0) goto LAB_025ec22c;
              uVar10 = *(uint *)(param_1 + 0x120);
              if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_025ec230;
              if (*(int *)(lVar16 + (long)(int)uVar10 * 0x38 + 0x54) < 0x3fff) {
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_011ea084(lVar14);
                  lVar16 = **(long **)(*(long *)puVar7 + 0xb8);
                  if (lVar16 == 0) goto LAB_025ec22c;
                  uVar10 = *(uint *)(param_1 + 0x120);
                }
              }
              else {
                uVar28 = *(undefined8 *)(param_1 + 0x118);
                uVar27 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ab7968);
                FUN_02741d10(uVar27,uVar28,0);
                lVar14 = *(long *)puVar7;
                uVar28 = *(undefined8 *)(param_1 + 0x100);
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_011ea084();
                  lVar14 = *(long *)puVar7;
                }
                uVar10 = FUN_025e5f84(uVar27,uVar28,*(long *)(lVar14 + 0xb8),
                                      *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
                *(uint *)(param_1 + 0x120) = uVar10;
                lVar16 = **(long **)(*(long *)puVar7 + 0xb8);
                if (lVar16 == 0) goto LAB_025ec22c;
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_025ec230;
              lVar16 = lVar16 + (long)(int)uVar10 * 0x38;
              *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
            }
            if ((*(long *)(param_1 + 0x368) == 0) ||
               (lVar14 = *(long *)(*(long *)(param_1 + 0x368) + 0x38), lVar14 == 0))
            goto LAB_025ec22c;
            if (*(uint *)(lVar14 + 0x18) <= *(uint *)(param_1 + 0x490)) goto LAB_025ec230;
            lVar14 = lVar14 + (long)(int)*(uint *)(param_1 + 0x490) * 0x178;
            *(undefined8 *)(lVar14 + 0x50) = *(undefined8 *)(param_1 + 0x118);
            uVar10 = *(uint *)(param_1 + 0x120);
            *(uint *)(lVar14 + 0x58) = uVar10;
            lVar14 = *(long *)puVar7;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_011ea084();
              lVar14 = *(long *)puVar7;
              uVar10 = *(uint *)(param_1 + 0x120);
            }
            lVar16 = **(long **)(lVar14 + 0xb8);
            if (lVar16 == 0) goto LAB_025ec22c;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_025ec230;
            *(bool *)(lVar16 + (long)(int)uVar10 * 0x38 + 0x41) = bVar4;
            if (bVar4) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_011ea084();
                lVar16 = **(long **)(*(long *)puVar7 + 0xb8);
                if (lVar16 == 0) goto LAB_025ec22c;
                uVar10 = *(uint *)(param_1 + 0x120);
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar10) goto LAB_025ec230;
              *(undefined8 *)(lVar16 + (long)(int)uVar10 * 0x38 + 0x48) = uVar20;
              *(undefined8 *)(param_1 + 0x118) = uVar20;
              *(undefined8 *)(param_1 + 0x100) = uVar19;
              *(undefined4 *)(param_1 + 0x120) = uVar13;
            }
            uVar10 = *(uint *)(param_1 + 0x490);
          }
          *(uint *)(param_1 + 0x490) = uVar10 + 1;
        }
        uVar10 = *(uint *)(param_2 + 0x18);
        uVar32 = uVar32 + 1;
      } while ((int)uVar32 < (int)uVar10);
    }
    if (*(char *)(param_1 + 0x3f5) != '\0') {
      *(undefined1 *)(param_1 + 0x3f5) = 0;
Unity_XR_Oculus_Input_OculusHMD__set_trackingState:
      return *(undefined4 *)(param_1 + 0x490);
    }
    lVar14 = *(long *)(param_1 + 0x368);
    if (lVar14 != 0) {
      *(int *)(lVar14 + 0x1c) = iStack_178;
      puVar5 = PTR_DAT_02ab7868;
      lVar16 = *(long *)puVar7;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_011ea084();
        lVar16 = *(long *)puVar7;
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar16 != 0) {
        uVar10 = FUN_0199efa0(lVar16,*(undefined8 *)PTR_DAT_02ae45f0);
        *(uint *)(lVar14 + 0x34) = uVar10;
        if (*(long *)(param_1 + 0x368) != 0) {
          plVar25 = (long *)(*(long *)(param_1 + 0x368) + 0x60);
          lVar14 = *plVar25;
          if (lVar14 != 0) {
            uVar15 = (ulong)uVar10;
            if (*(int *)(lVar14 + 0x18) < (int)uVar10) {
              if (*(int *)(*plVar31 + 0xe0) == 0) {
                thunk_FUN_011ea084();
              }
              FUN_017dbf78(plVar25,uVar15,0,*(undefined8 *)PTR_DAT_02ae46e8);
            }
            if (*(long *)(param_1 + 0x708) != 0) {
              plVar25 = (long *)(param_1 + 0x708);
              if (*(int *)(*(long *)(param_1 + 0x708) + 0x18) < (int)uVar10) {
                uVar13 = FUN_02753edc(uVar10 + 1,0);
                if (*(int *)(*plVar31 + 0xe0) == 0) {
                  thunk_FUN_011ea084(*plVar31);
                }
                FUN_017dbcc4(plVar25,uVar13,*(undefined8 *)PTR_DAT_02ae46f0);
              }
              if (*(char *)(param_1 + 0x321) != '\0') {
                if (*(long *)(param_1 + 0x368) == 0) goto LAB_025ec22c;
                plVar26 = (long *)(*(long *)(param_1 + 0x368) + 0x38);
                lVar14 = *plVar26;
                if (lVar14 == 0) goto LAB_025ec22c;
                iVar8 = *(int *)(param_1 + 0x490);
                if (0x100 < *(int *)(lVar14 + 0x18) - iVar8) {
                  iVar9 = 0x100;
                  if (0x100 < iVar8 + 1) {
                    iVar9 = iVar8 + 1;
                  }
                  if (*(int *)(*plVar31 + 0xe0) == 0) {
                    thunk_FUN_011ea084();
                  }
                  FUN_017dbed8(plVar26,iVar9,1,*(undefined8 *)PTR_DAT_02ae46e0);
                }
              }
              if (0 < (int)uVar10) {
                lVar14 = 0;
                uVar29 = 0;
                lVar16 = 0x54;
                do {
                  if (uVar29 == 0) {
                    lVar22 = *(long *)puVar7;
                  }
                  else {
                    lVar22 = *plVar25;
                    if (lVar22 == 0) goto LAB_025ec22c;
                    if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                    uVar19 = *(undefined8 *)(lVar22 + uVar29 * 8 + 0x20);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_011ea084();
                    }
                    uVar17 = FUN_027604e8(uVar19,0,0);
                    if ((uVar17 & 1) != 0) {
                      lVar22 = *(long *)puVar7;
                      plVar31 = (long *)*plVar25;
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_011ea084();
                        lVar22 = *(long *)puVar7;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar22 = lVar22 + lVar16;
                      uStack_50 = *(undefined8 *)(lVar22 + -4);
                      uStack_58 = *(undefined8 *)(lVar22 + -0xc);
                      uStack_60 = *(undefined8 *)(lVar22 + -0x14);
                      uStack_68 = *(undefined8 *)(lVar22 + -0x1c);
                      uStack_70 = *(undefined8 *)(lVar22 + -0x24);
                      uStack_78 = *(undefined8 *)(lVar22 + -0x2c);
                      uStack_80 = *(undefined8 *)(lVar22 + -0x34);
                      lVar22 = FUN_02633eb8(param_1,&uStack_80,0);
                      if (plVar31 == (long *)0x0) goto LAB_025ec22c;
                      if ((lVar22 != 0) &&
                         (lVar18 = thunk_FUN_01268d44(lVar22,*(undefined8 *)(*plVar31 + 0x40)),
                         lVar18 == 0)) {
LAB_025ec234:
                        uVar19 = thunk_FUN_01214298();
                    /* WARNING: Subroutine does not return */
                        FUN_012195a4(uVar19,0);
                      }
                      if (*(uint *)(plVar31 + 3) <= uVar29) goto LAB_025ec230;
                      plVar31[uVar29 + 4] = lVar22;
                      if ((*(long *)(param_1 + 0x368) == 0) ||
                         (lVar22 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar22 == 0))
                      goto LAB_025ec22c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                      *(undefined8 *)(lVar22 + lVar14 + 0x30) = 0;
                    }
                    lVar22 = *plVar25;
                    if (lVar22 == 0) goto LAB_025ec22c;
                    if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                    lVar22 = *(long *)(lVar22 + uVar29 * 8 + 0x20);
                    if (lVar22 == 0) goto LAB_025ec22c;
                    uVar19 = *(undefined8 *)(lVar22 + 0x38);
                    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                      thunk_FUN_011ea084();
                    }
                    uVar17 = FUN_027604e8(uVar19,0,0);
                    if ((uVar17 & 1) == 0) {
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar22 = *(long *)(lVar22 + uVar29 * 8 + 0x20);
                      if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x38), lVar22 == 0))
                      goto LAB_025ec22c;
                      iVar8 = FUN_027602a4(lVar22,0);
                      lVar22 = *(long *)puVar7;
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_011ea084(lVar22);
                        lVar22 = *(long *)puVar7;
                      }
                      lVar22 = **(long **)(lVar22 + 0xb8);
                      if (lVar22 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar22 = *(long *)(lVar22 + lVar16 + -0x1c);
                      if (lVar22 == 0) goto LAB_025ec22c;
                      iVar9 = FUN_027602a4(lVar22,0);
                      if (iVar8 != iVar9) goto LAB_025ebdfc;
                      lVar22 = *(long *)puVar7;
                    }
                    else {
LAB_025ebdfc:
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar18 = *(long *)puVar7;
                      lVar22 = *(long *)(lVar22 + uVar29 * 8 + 0x20);
                      if (*(int *)(lVar18 + 0xe0) == 0) {
                        thunk_FUN_011ea084();
                        lVar18 = *(long *)puVar7;
                      }
                      lVar18 = **(long **)(lVar18 + 0xb8);
                      if (lVar18 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_025ec230;
                      if (lVar22 == 0) goto LAB_025ec22c;
                      FUN_02633a28(lVar22,*(undefined8 *)(lVar18 + lVar16 + -0x1c),0);
                      lVar18 = *plVar25;
                      if (lVar18 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar22 = *(long *)puVar7;
                      lVar23 = **(long **)(lVar22 + 0xb8);
                      if (lVar23 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar18 = lVar18 + uVar29 * 8;
                      lVar24 = *(long *)(lVar18 + 0x20);
                      if (lVar24 == 0) goto LAB_025ec22c;
                      *(undefined8 *)(lVar24 + 0x20) = *(undefined8 *)(lVar23 + lVar16 + -0x2c);
                      lVar18 = *(long *)(lVar18 + 0x20);
                      if (lVar18 == 0) goto LAB_025ec22c;
                      *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(lVar23 + lVar16 + -0x24);
                    }
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_011ea084();
                      lVar22 = *(long *)puVar7;
                    }
                    lVar18 = **(long **)(lVar22 + 0xb8);
                    if (lVar18 == 0) goto LAB_025ec22c;
                    if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_025ec230;
                    if (*(char *)(lVar18 + lVar16 + -0x13) != '\0') {
                      lVar23 = *plVar25;
                      if (lVar23 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar23 = *(long *)(lVar23 + uVar29 * 8 + 0x20);
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_011ea084();
                        lVar18 = **(long **)(*(long *)puVar7 + 0xb8);
                        if (lVar18 == 0) goto LAB_025ec22c;
                      }
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_025ec230;
                      if (lVar23 == 0) goto LAB_025ec22c;
                      FUN_02633a70(lVar23,*(undefined8 *)(lVar18 + lVar16 + -0x1c),0);
                      lVar18 = *plVar25;
                      if (lVar18 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar22 = *(long *)puVar7;
                      lVar23 = **(long **)(lVar22 + 0xb8);
                      if (lVar23 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
                      if (lVar18 == 0) goto LAB_025ec22c;
                      *(undefined8 *)(lVar18 + 0x48) = *(undefined8 *)(lVar23 + lVar16 + -0xc);
                    }
                  }
                  if (*(int *)(lVar22 + 0xe0) == 0) {
                    thunk_FUN_011ea084();
                    lVar22 = *(long *)puVar7;
                  }
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_025ec22c;
                  if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                  if ((*(long *)(param_1 + 0x368) == 0) ||
                     (lVar18 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar18 == 0))
                  goto LAB_025ec22c;
                  if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_025ec230;
                  lVar23 = *(long *)(lVar18 + lVar14 + 0x30);
                  iVar8 = *(int *)(lVar22 + lVar16);
                  if (lVar23 == 0) {
                    if (uVar29 == 0) {
                      uStack_98 = 0;
                      uStack_a0 = 0;
                      uStack_88 = 0;
                      uStack_90 = 0;
                      uStack_b8 = 0;
                      uStack_c0 = 0;
                      uStack_a8 = 0;
                      uStack_b0 = 0;
                      uStack_c8 = 0;
                      uStack_d0 = 0;
                      FUN_0262b2b8(&uStack_d0,*(undefined8 *)(param_1 + 0x3a0),iVar8 + 1,0);
                      memcpy(auStack_120,&uStack_d0,0x50);
                      if (*(int *)(lVar18 + 0x18) == 0) goto LAB_025ec230;
                      __src = auStack_120;
                    }
                    else {
                      lVar22 = *plVar25;
                      if (lVar22 == 0) goto LAB_025ec22c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_025ec230;
                      lVar22 = *(long *)(lVar22 + uVar29 * 8 + 0x20);
                      if (lVar22 == 0) goto LAB_025ec22c;
                      uVar19 = FUN_02633d6c(lVar22,0);
                      uStack_98 = 0;
                      uStack_a0 = 0;
                      uStack_88 = 0;
                      uStack_90 = 0;
                      uStack_b8 = 0;
                      uStack_c0 = 0;
                      uStack_a8 = 0;
                      uStack_b0 = 0;
                      uStack_c8 = 0;
                      uStack_d0 = 0;
                      FUN_0262b2b8(&uStack_d0,uVar19,iVar8 + 1,0);
                      memcpy(auStack_170,&uStack_d0,0x50);
                      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_025ec230;
                      __src = auStack_170;
                    }
                    memcpy((void *)(lVar18 + lVar14 + 0x20),__src,0x50);
                  }
                  else {
                    iVar9 = *(int *)(lVar23 + 0x18);
                    if (iVar9 < iVar8 * 4) {
LAB_025ebff8:
                      if (iVar8 < 0x401) {
                        iVar8 = FUN_02753edc(iVar8 + 1,0);
                      }
                      else {
                        iVar8 = iVar8 + 0x100;
                      }
                      FUN_0262bf30(lVar18 + lVar14 + 0x20,iVar8,0);
                    }
                    else if ((0 < iVar8) && (*(char *)(param_1 + 0x321) != '\0')) {
                      iVar1 = iVar9 + 3;
                      if (-1 < iVar9) {
                        iVar1 = iVar9;
                      }
                      if (0x100 < (iVar1 >> 2) - iVar8) goto LAB_025ebff8;
                    }
                  }
                  if ((*(long *)(param_1 + 0x368) == 0) ||
                     (lVar22 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar22 == 0))
                  goto LAB_025ec22c;
                  lVar18 = *(long *)puVar7;
                  if (*(int *)(lVar18 + 0xe0) == 0) {
                    thunk_FUN_011ea084();
                    lVar18 = *(long *)puVar7;
                  }
                  lVar18 = **(long **)(lVar18 + 0xb8);
                  if (lVar18 == 0) goto LAB_025ec22c;
                  if ((*(uint *)(lVar18 + 0x18) <= uVar29) || (*(uint *)(lVar22 + 0x18) <= uVar29))
                  goto LAB_025ec230;
                  lVar18 = lVar18 + lVar16;
                  uVar29 = uVar29 + 1;
                  lVar22 = lVar22 + lVar14;
                  lVar14 = lVar14 + 0x50;
                  lVar16 = lVar16 + 0x38;
                  *(undefined8 *)(lVar22 + 0x68) = *(undefined8 *)(lVar18 + -0x1c);
                } while (uVar10 != uVar29);
              }
              lVar14 = *plVar25;
              if (lVar14 != 0) {
                lVar16 = (long)(int)uVar10 * 0x50 + 0x20;
                lVar22 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3) + 0x20;
                do {
                  uVar10 = (uint)uVar15;
                  if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar10)
                  goto Unity_XR_Oculus_Input_OculusHMD__set_trackingState;
                  if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_025ec230;
                  uVar19 = *(undefined8 *)(lVar14 + lVar22);
                  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                    thunk_FUN_011ea084();
                  }
                  uVar15 = FUN_0275d0a4(uVar19,0,0);
                  if ((uVar15 & 1) == 0) goto Unity_XR_Oculus_Input_OculusHMD__set_trackingState;
                  if ((*(long *)(param_1 + 0x368) == 0) ||
                     (lVar14 = *(long *)(*(long *)(param_1 + 0x368) + 0x60), lVar14 == 0)) break;
                  if ((int)uVar10 < (int)*(uint *)(lVar14 + 0x18)) {
                    if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_025ec230;
                    FUN_0262cec8(lVar14 + lVar16,0,1,0);
                  }
                  lVar14 = *plVar25;
                  uVar15 = (ulong)(uVar10 + 1);
                  lVar16 = lVar16 + 0x50;
                  lVar22 = lVar22 + 8;
                } while (lVar14 != 0);
              }
            }
          }
        }
      }
    }
  }
LAB_025ec22c:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


