/*
FUNCTION_NAME: FUN_0625dd1c
ENTRY_POINT: 0625dd1c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0625e3f0) */
/* WARNING: Removing unreachable block (ram,0x0625e978) */

long FUN_0625dd1c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,int param_6
                 )

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  uint uVar23;
  undefined8 uVar24;
  long *plVar25;
  uint local_7c;
  int local_64;
  
  if ((DAT_076de1d0 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
    thunk_FUN_032e1da0(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo);
    thunk_FUN_032e1da0(MikeNspired_UnityXRHandPoser_TransformStruct___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07282378);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(Oculus_Interaction_TubePoint___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(RootMotion_FinalIK_FBIKChain_ChildConstraint___TypeInfo);
    thunk_FUN_032e1da0(Oculus_Interaction_GrabAPI_FingerRawPinchAPI_FingerPinchData___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1998);
    thunk_FUN_032e1da0(RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo);
    thunk_FUN_032e1da0(MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
    thunk_FUN_032e1da0(Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo);
                    /* try { // try from 0625de10 to 0635e1b7 has its CatchHandler @ 0625de10
                       catch() { ... } // from try @ 0625de10 with catch @ 0625de10
                       catch() { ... } // from try @ 0625e2e8 with catch @ 0625de10
                       catch() { ... } // from try @ 0625e438 with catch @ 0625de10
                       catch() { ... } // from try @ 0625e484 with catch @ 0625de10
                       catch() { ... } // from try @ 0625e550 with catch @ 0625de10 */
    thunk_FUN_032e1da0(Oculus_Avatar2_OvrAvatarEntity_PrimitiveRenderData___TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072798c8);
    DAT_076de1d0 = 1;
  }
  local_64 = 0;
  if (param_2 == 0) goto LAB_0625e90c;
  plVar22 = *(long **)(param_2 + 0x10);
  plVar8 = (long *)thunk_FUN_032a56a0(*(undefined8 *)
                                       OVRUnityHumanoidSkeletonRetargeter_JointAdjustment___TypeInfo
                                     );
  FUN_0627d990(plVar8,0);
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(*(long *)MikeNspired_UnityXRHandPoser_TransformStruct___TypeInfo + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_062513dc(plVar22,1,0);
  }
  if (param_5 == 0) {
    param_5 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Oculus_Interaction_GrabAPI_FingerRawPinchAPI_FingerPinchData___TypeInfo
                                );
    FUN_06258e18();
  }
  lVar9 = FUN_06252594(param_2,0);
  if (plVar22 == (long *)0x0) goto LAB_0625e90c;
  uVar10 = FUN_0593d0b8(plVar22,0);
  if ((uVar10 & 1) == 0) {
LAB_0625ded8:
    local_7c = 0;
  }
  else {
    if (*(int *)(*(long *)Oculus_Interaction_TubePoint___TypeInfo + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar11 = FUN_062516b8(lVar9,0);
    if (lVar11 == 0) goto LAB_0625e90c;
    if (*(int *)(lVar11 + 0x20) != 3) goto LAB_0625ded8;
    if (lVar9 == 0) goto LAB_0625e90c;
    local_7c = FUN_0593d0b8(lVar9,0);
    local_7c = local_7c & 1;
  }
  plVar12 = (long *)thunk_FUN_032a56a0(*(undefined8 *)MS_Internal_Xml_XPath_Operator_Op___TypeInfo);
  FUN_062798c8(plVar12,0);
  if ((param_5 != 0) && (*(long *)(param_5 + 0x28) != 0)) {
    plVar13 = (long *)FUN_058f31f0(*(long *)(param_5 + 0x28),0);
    puVar5 = RootMotion_FinalIK_FBIKChain_ChildConstraint___TypeInfo;
    puVar4 = PTR_DAT_0727a180;
    puVar2 = PTR_DAT_072794f8;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    do {
      lVar20 = *plVar13;
      lVar11 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar11) {
            puVar14 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_0625df98;
          }
          uVar10 = uVar10 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar10 != 0);
      }
      puVar14 = (undefined8 *)FUN_032937ac(plVar13,lVar11,0);
LAB_0625df98:
      uVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar3 = PTR_DAT_07279f60;
      if ((uVar10 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_032a55a4(plVar13,*(undefined8 *)PTR_DAT_07279f60);
        if (plVar13 == (long *)0x0) goto LAB_0625e3e4;
        lVar11 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar10 == 0) goto LAB_0625e374;
        piVar21 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0625e35c;
      }
      lVar20 = *plVar13;
      lVar11 = *(long *)puVar4;
      uVar10 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar10 != 0) {
        piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar11) {
            puVar14 = (undefined8 *)(lVar20 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_0625dff8;
          }
          uVar10 = uVar10 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar10 != 0);
      }
      puVar14 = (undefined8 *)FUN_032937ac(plVar13,lVar11,1);
LAB_0625dff8:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      bVar6 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar15);
      }
      if ((plVar15[5] != 0) && ((int)plVar15[4] == 2)) {
        thunk_FUN_032e1da0(PTR_DAT_07279578);
        uVar16 = thunk_FUN_032a56a0();
        uVar18 = thunk_FUN_032e1da0(Oculus_Avatar2_OvrAvatarEntity_SkeletonJoint___TypeInfo);
        FUN_0592371c(uVar16,uVar18,0);
        uVar18 = thunk_FUN_032e1da0(Oculus_Avatar2_OvrAvatarManager_BoneTransformInfo___TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar16,uVar18);
      }
      if (*(int *)((long)plVar15 + 0x34) == param_6) {
        lVar11 = plVar15[7];
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar10 = FUN_0593c20c(lVar11,0,0);
        lVar11 = lVar9;
        if ((uVar10 & 1) != 0) {
          lVar11 = plVar15[7];
        }
        if ((DAT_076de1a4 & 1) == 0) {
          thunk_FUN_032e1da0(puVar2);
          DAT_076de1a4 = 1;
        }
        lVar20 = plVar15[2];
        if (lVar20 == 0) {
          lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
        }
        if (*(int *)(*(long *)Oculus_Interaction_TubePoint___TypeInfo + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar16 = FUN_06256788(lVar11,lVar20,0,0);
        lVar17 = thunk_FUN_032a56a0(*(undefined8 *)Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo
                                   );
        FUN_062793d8(lVar17,0,uVar16,0);
        lVar20 = param_4;
        if (plVar15[5] != 0) {
          lVar20 = plVar15[5];
        }
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        plVar25 = (long *)(lVar17 + 0x18);
        *plVar25 = lVar20;
        uVar16 = thunk_FUN_0333a630(plVar25);
        if (*plVar25 == 0) {
          *plVar25 = *(long *)PTR_DAT_072798c8;
          uVar16 = thunk_FUN_0333a630(plVar25);
        }
        lVar20 = plVar15[4];
        *(int *)(lVar17 + 0x20) = (int)lVar20;
        if ((int)lVar20 == 2) {
          *plVar25 = **(long **)(*(long *)puVar2 + 0xb8);
          uVar16 = thunk_FUN_0333a630(plVar25);
        }
        if ((*(char *)((long)plVar15 + 0x31) == '\0') || (bVar6 = 0, (char)plVar15[6] != '\0')) {
          bVar6 = FUN_0625f8d0(uVar16,*(undefined8 *)(lVar17 + 0x48));
          bVar6 = bVar6 & 1;
        }
        *(byte *)(lVar17 + 0x38) = bVar6;
        *(undefined4 *)(lVar17 + 0x3c) = *(undefined4 *)((long)plVar15 + 0x34);
        if (local_7c == 0) {
          if (*(long *)(lVar17 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar10 = FUN_062523a8(*(long *)(lVar17 + 0x48),0);
          if ((uVar10 & 1) != 0) {
            uVar16 = FUN_0625c6cc(param_1,lVar11,0,*plVar25);
            *(undefined8 *)(lVar17 + 0x40) = uVar16;
            thunk_FUN_0333a630();
          }
        }
        else {
          uVar16 = FUN_062615c8(param_1,lVar11,0,*plVar25,param_5,param_6 + 1);
          *(undefined8 *)(lVar17 + 0x40) = uVar16;
          thunk_FUN_0333a630();
        }
        if ((DAT_076de1a5 & 1) == 0) {
          thunk_FUN_032e1da0(puVar2);
          DAT_076de1a5 = 1;
        }
        lVar20 = plVar15[3];
        if (lVar20 == 0) {
          if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(int *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x10) == 0)
          goto System_Net_HttpWebRequest__GetRequestHeaders;
          lVar20 = **(long **)(*(long *)puVar2 + 0xb8);
LAB_0625e268:
          if (*(int *)(*(long *)PTR_DAT_072a1998 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar16 = FUN_06240334(lVar20,0);
          *(undefined8 *)(lVar17 + 0x10) = uVar16;
          thunk_FUN_0333a630();
        }
        else {
          if (*(int *)(lVar20 + 0x10) != 0) goto LAB_0625e268;
System_Net_HttpWebRequest__GetRequestHeaders:
          if (*(long *)(lVar17 + 0x40) == 0) {
            if (*(int *)(*(long *)Oculus_Interaction_TubePoint___TypeInfo + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            lVar11 = FUN_062516b8(lVar11,0);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar11 + 0x18);
            thunk_FUN_0333a630();
          }
          else {
            *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(*(long *)(lVar17 + 0x40) + 0x30);
            thunk_FUN_0333a630();
          }
        }
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar12 + 0x308))(plVar12,lVar17,*(undefined8 *)(*plVar12 + 0x310));
      }
    } while( true );
  }
  goto LAB_0625e90c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar21 = piVar21 + 4;
    if (uVar10 == 0) break;
LAB_0625e35c:
    if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
      puVar14 = (undefined8 *)(lVar11 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_0625e3d8;
    }
  }
LAB_0625e374:
  puVar14 = (undefined8 *)FUN_032937ac(plVar13,*(long *)puVar3,0);
LAB_0625e3d8:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_0625e3e4:
  if (plVar12 == (long *)0x0) goto LAB_0625e90c;
  iVar7 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
  puVar2 = Oculus_Interaction_TubePoint___TypeInfo;
  if (iVar7 == 0) {
    if (*(int *)(*(long *)Oculus_Interaction_TubePoint___TypeInfo + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar16 = FUN_062516b8(lVar9,0);
    lVar11 = thunk_FUN_032a56a0(*(undefined8 *)Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo);
    FUN_062793d8(lVar11,0,uVar16,0);
    if (local_7c == 0) {
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x48) == 0)) goto LAB_0625e90c;
      uVar10 = FUN_062523a8(*(long *)(lVar11 + 0x48),0);
      if ((uVar10 & 1) != 0) {
        uVar16 = FUN_0625c6cc(param_1,lVar9,0,param_4);
        goto LAB_0625e4c0;
      }
    }
    else {
      uVar16 = FUN_062615c8(param_1,lVar9,0,param_4,param_5,param_6 + 1);
      if (lVar11 == 0) goto LAB_0625e90c;
LAB_0625e4c0:
      *(undefined8 *)(lVar11 + 0x40) = uVar16;
      thunk_FUN_0333a630();
    }
    if (*(long *)(lVar11 + 0x40) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar9 = FUN_062516b8(lVar9,0);
      if (lVar9 == 0) goto LAB_0625e90c;
      puVar14 = (undefined8 *)(lVar9 + 0x18);
    }
    else {
      puVar14 = (undefined8 *)(*(long *)(lVar11 + 0x40) + 0x48);
    }
    *(undefined8 *)(lVar11 + 0x10) = *puVar14;
    thunk_FUN_0333a630();
    lVar9 = *(long *)PTR_DAT_072798c8;
    if (param_4 != 0) {
      lVar9 = param_4;
    }
    *(long *)(lVar11 + 0x18) = lVar9;
    uVar16 = thunk_FUN_0333a630();
    bVar6 = FUN_0625f8d0(uVar16,*(undefined8 *)(lVar11 + 0x48));
    *(byte *)(lVar11 + 0x38) = bVar6 & 1;
    (**(code **)(*plVar12 + 0x308))(plVar12,lVar11,*(undefined8 *)(*plVar12 + 0x310));
  }
  if (plVar8 != (long *)0x0) {
    plVar8[2] = (long)plVar12;
    thunk_FUN_0333a630(plVar8 + 2,plVar12);
    iVar7 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    if (iVar7 < 2) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x2e8))(plVar12,0,*(undefined8 *)(*plVar12 + 0x2f0))
      ;
      if (plVar12 == (long *)0x0) goto LAB_0625e90c;
      bVar6 = *(byte *)(*(long *)Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar6 * 8 + -8) !=
          *(long *)Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c();
      }
      if (plVar12[8] == 0) {
        lVar9 = plVar12[2];
        lVar11 = *(long *)Oculus_Interaction_TubePoint___TypeInfo;
        iVar7 = *(int *)(lVar11 + 0xe0);
      }
      else {
        lVar9 = *(long *)(plVar12[8] + 0x48);
        lVar11 = *(long *)Oculus_Interaction_TubePoint___TypeInfo;
        iVar7 = *(int *)(lVar11 + 0xe0);
      }
      if (iVar7 == 0) {
        thunk_FUN_032cd7c0(lVar11);
      }
      uVar16 = FUN_062520cc(lVar9,0);
    }
    else {
      local_64 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = local_64 + 1;
      uVar16 = FUN_05920f80(&local_64,0);
      uVar16 = FUN_057a19ac(*(undefined8 *)
                             Oculus_Avatar2_OvrAvatarEntity_PrimitiveRenderData___TypeInfo,uVar16,0)
      ;
    }
    puVar5 = UnityEngine_XR_OpenXR_OpenXRSettings_ColorSubmissionModeGroup___TypeInfo;
    puVar4 = RootMotion_FinalIK_OffsetPose_EffectorLink___TypeInfo;
    puVar2 = PTR_DAT_07282378;
    uVar18 = uVar16;
    iVar7 = 1;
    do {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0625e90c;
      lVar9 = FUN_06251048(*(long *)(param_1 + 0x28),uVar18,param_4,0);
      if (lVar9 == 0) break;
      uVar10 = (**(code **)(*plVar8 + 0x138))
                         (plVar8,*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)(*plVar8 + 0x140));
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar9 + 0x58) == 0) goto LAB_0625e90c;
        uVar18 = *(undefined8 *)(param_2 + 0x10);
        uVar24 = *(undefined8 *)(*(long *)(lVar9 + 0x58) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        uVar10 = FUN_0593b434(uVar18,uVar24,0);
        if ((uVar10 & 1) != 0) {
          return lVar9;
        }
      }
      iVar1 = iVar7 + 1;
      local_64 = iVar7;
      uVar18 = FUN_05920f80(&local_64,0);
      uVar18 = FUN_057a19ac(uVar16,uVar18,0);
      iVar7 = iVar1;
    } while (iVar1 != -1);
    lVar9 = System_Net_HttpWebRequest_AuthorizationState__ToString
                      (param_1,param_2,param_3,uVar18,param_4);
    if (lVar9 != 0) {
      *(long **)(lVar9 + 0x10) = plVar8;
      thunk_FUN_0333a630();
      uVar16 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar16 = FUN_059324dc(uVar16,0);
      lVar11 = (**(code **)(*plVar22 + 0x218))(plVar22,uVar16,0,*(undefined8 *)(*plVar22 + 0x220));
      if (lVar11 == 0) {
        lVar20 = 0;
      }
      else {
        uVar16 = *(undefined8 *)puVar4;
        lVar20 = thunk_FUN_032a55a4(lVar11,uVar16);
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(lVar11,uVar16);
        }
      }
      uVar16 = FUN_059324dc(*(undefined8 *)puVar2,0);
      lVar11 = FUN_0625c6cc(param_1,uVar16,0,0);
      if (lVar20 != 0) {
        uVar19 = *(uint *)(lVar20 + 0x18);
        if (0 < (int)uVar19) {
          uVar23 = 0;
          do {
            if (uVar19 <= uVar23) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            lVar17 = *(long *)(lVar20 + (long)(int)uVar23 * 8 + 0x20);
            if ((lVar17 == 0) || (lVar11 == 0)) goto LAB_0625e90c;
            plVar8 = *(long **)(lVar11 + 0x70);
            uVar16 = FUN_0625c6cc(param_1,*(undefined8 *)(lVar17 + 0x10),0,param_4);
            if (plVar8 == (long *)0x0) goto LAB_0625e90c;
            (**(code **)(*plVar8 + 0x308))(plVar8,uVar16,*(undefined8 *)(*plVar8 + 0x310));
            uVar19 = *(uint *)(lVar20 + 0x18);
            uVar23 = uVar23 + 1;
          } while ((int)uVar23 < (int)uVar19);
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_06250f7c(*(long *)(param_1 + 0x28),lVar9,uVar18,param_4,0);
          uVar16 = *(undefined8 *)puVar2;
          if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar16 = FUN_059324dc(uVar16,0);
          lVar11 = FUN_0625c6cc(param_1,uVar16,0,0);
          if ((lVar11 != 0) && (plVar8 = *(long **)(lVar11 + 0x70), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x308))(plVar8,lVar9,*(undefined8 *)(*plVar8 + 0x310));
            return lVar9;
          }
        }
      }
    }
  }
LAB_0625e90c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


