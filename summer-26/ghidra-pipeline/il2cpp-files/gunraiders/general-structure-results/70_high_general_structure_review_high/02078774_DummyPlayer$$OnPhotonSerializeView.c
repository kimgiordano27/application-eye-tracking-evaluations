/*
FUNCTION_NAME: DummyPlayer$$OnPhotonSerializeView
ENTRY_POINT: 02078774
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void DummyPlayer__OnPhotonSerializeView(float param_1,float param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 uVar15;
  long lVar16;
  long unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float unaff_s8;
  float fVar20;
  float fVar21;
  float unaff_s9;
  float unaff_s12;
  float fVar22;
  float fVar23;
  undefined4 uStack0000000000000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  undefined4 uStack000000000000005c;
  undefined8 uStack0000000000000064;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  float fStack0000000000000084;
  float in_stack_00000088;
  float fStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  float fStack000000000000009c;
  float in_stack_000000a0;
  float fStack00000000000000a4;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000ac;
  undefined4 in_stack_000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  float fStack00000000000000bc;
  undefined4 in_stack_000000c0;
  undefined4 uStack00000000000000c4;
  undefined4 in_stack_000000c8;
  float fStack00000000000000cc;
  float in_stack_000000d0;
  float fStack00000000000000d4;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  param_1 = SQRT(param_1);
  if (param_1 <= param_2) {
    if (*(char *)(unaff_x23 + 0x6e9) == '\0') {
      FUN_01c5d288(PTR_DAT_042301b0);
      *(undefined1 *)(unaff_x23 + 0x6e9) = 1;
    }
    pfVar12 = *(float **)(*unaff_x28 + 0xb8);
    fStack000000000000003c = *pfVar12;
    fVar22 = pfVar12[1];
    param_1 = pfVar12[2];
  }
  else {
    fStack000000000000003c = unaff_s12 / param_1;
    fVar22 = unaff_s9 / param_1;
    param_1 = unaff_s8 / param_1;
  }
  fVar21 = fStack000000000000003c;
  uStack00000000000000c4 = uStack0000000000000030;
  fStack00000000000000cc = fStack000000000000003c;
  in_stack_000000d0 = fVar22;
  fStack00000000000000d4 = param_1;
  FUN_020e3434(&stack0x000000d8);
  in_stack_00000198 = unaff_x24[1];
  in_stack_00000190 = *unaff_x24;
  in_stack_000001a8 = unaff_x24[3];
  in_stack_000001a0 = unaff_x24[2];
  *(undefined8 *)((long)unaff_x24 + 0xdc) = *(undefined8 *)((long)unaff_x24 + 0x24);
  *(undefined8 *)((long)unaff_x24 + 0xd4) = *(undefined8 *)((long)unaff_x24 + 0x1c);
  uVar7 = FUN_03dad9e8(&stack0x00000190,0);
  puVar2 = PTR_DAT_0422f9e8;
  if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422f9e8);
  }
  uVar8 = FUN_03d4f3bc(uVar7,0,0);
  if ((uVar8 & 1) == 0) {
    FUN_03dad9e0(*(undefined4 *)(unaff_x19 + 0x4c4),&stack0x00000190,0);
  }
  fVar20 = *(float *)(unaff_x19 + 0x4b4) * *(float *)(unaff_x19 + 0x4ac);
  uVar7 = FUN_03dad9d8(&stack0x00000190,0);
  uStack00000000000000ac = uStack0000000000000030;
  fStack00000000000000b4 = fVar21;
  in_stack_000000b8 = fVar22;
  fStack00000000000000bc = param_1;
  lVar9 = TutorialManager__Update(fVar20,extraout_d0,uVar7,&stack0x000000a8,unaff_w20);
  uStack0000000000000094 = uStack0000000000000030;
  fStack000000000000009c = fVar21;
  in_stack_000000a0 = fVar22;
  fStack00000000000000a4 = param_1;
  FUN_020e3434(&stack0x000000d8);
  in_stack_00000168 = unaff_x24[1];
  in_stack_00000160 = *unaff_x24;
  in_stack_00000178 = unaff_x24[3];
  in_stack_00000170 = unaff_x24[2];
  *(undefined8 *)((long)unaff_x24 + 0xac) = *(undefined8 *)((long)unaff_x24 + 0x24);
  *(undefined8 *)((long)unaff_x24 + 0xa4) = *(undefined8 *)((long)unaff_x24 + 0x1c);
  uVar1 = *(undefined4 *)(unaff_x19 + 0x288);
  uVar7 = FUN_03dad9d8(&stack0x00000190,0);
  uStack000000000000007c = uStack0000000000000030;
  fStack0000000000000084 = fVar21;
  in_stack_00000088 = fVar22;
  fStack000000000000008c = param_1;
  lVar10 = TutorialManager__Update(fVar20,extraout_d0_00,uVar7,&stack0x00000078,uVar1);
  if (DAT_0452d9ab == '\0') {
    FUN_01c5d288(PTR_DAT_042301b0);
    DAT_0452d9ab = '\x01';
  }
  lVar13 = *(long *)(*unaff_x28 + 0xb8);
  fVar17 = *(float *)(lVar13 + 0x1c);
  fVar20 = *(float *)(lVar13 + 0x20);
  fVar19 = *(float *)(lVar13 + 0x18);
  uVar8 = (ulong)(uint)fVar19;
  fStack000000000000003c = fVar21;
  if (*(char *)(unaff_x26 + 0x813) == '\0') {
    FUN_01c5d288(PTR_DAT_0422fa60);
    *(undefined1 *)(unaff_x26 + 0x813) = 1;
  }
  fVar23 = fVar22 * fVar20 - param_1 * fVar17;
  fVar20 = param_1 * fVar19 - fVar21 * fVar20;
  fVar21 = fVar21 * fVar17 - fVar22 * fVar19;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar18 = (ulong)(uint)fStack0000000000000034;
  if ((SQRT(fVar21 * fVar21 + fVar23 * fVar23 + fVar20 * fVar20) <= fStack0000000000000034) &&
     (*(char *)(unaff_x23 + 0x6e9) == '\0')) {
    FUN_01c5d288(PTR_DAT_042301b0);
    *(undefined1 *)(unaff_x23 + 0x6e9) = 1;
  }
  uVar7 = FUN_03dad9e8(&stack0x00000160,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar2);
  }
  uVar11 = FUN_03d4f3bc(uVar7,0,0);
  if ((uVar11 & 1) != 0) {
    lVar13 = FUN_03dad8fc(&stack0x00000160,0);
    if ((lVar13 == 0) || (lVar13 = FUN_03d468e8(lVar13,0), lVar13 == 0)) goto LAB_0207904c;
    iVar5 = FUN_03d498ec(lVar13,0);
    if (iVar5 == *(int *)(unaff_x19 + 0x28c)) {
      lVar13 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
      FUN_03dad9a8(&stack0x00000160,0);
      if (lVar13 == 0) goto LAB_0207904c;
      FUN_02043b94(lVar13,0);
      uVar7 = FUN_03dad9a8(&stack0x00000160,0);
      if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_01ddc32c(uVar7,uVar18,uVar8,0x3f800000,0,*(undefined8 *)System_TimeSpan___var,0,0,0,0,0);
    }
  }
  uVar7 = 0;
  if (lVar9 != 0) {
    if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_03568cd0(0);
    if ((uVar11 & 1) == 0) {
      FUN_0207a0f4();
    }
    else {
      uVar15 = **(undefined8 **)(*(long *)PTR_DAT_04239590 + 0xb8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_03d4f3bc(uVar15,0,0);
      puVar3 = System_Collections_Generic_List<Bounty>_TypeInfo;
      if ((uVar11 & 1) != 0) {
        lVar13 = *(long *)System_Collections_Generic_List<Bounty>_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
          lVar13 = *(long *)puVar3;
        }
        lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
        if (lVar16 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar13 = *(long *)puVar3;
          }
          uVar7 = **(undefined8 **)(lVar13 + 0xb8);
          lVar16 = thunk_FUN_01c496e0(*(undefined8 *)
                                       System_Collections_Generic_List<BoneCapsuleTriggerLogic>_TypeInfo
                                     );
          FUN_0280e920(lVar16,uVar7,*(undefined8 *)System_Collections_Generic_List<bool>_TypeInfo,0)
          ;
          *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar16;
        }
        FUN_022d6a20(lVar9,lVar16,
                     *(undefined8 *)System_Collections_Generic_List<BlockedUser>_TypeInfo);
        uVar7 = FUN_02079124(0);
      }
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04237a90 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar11 = FUN_03568cd0(0);
  puVar4 = System_Collections_Generic_List<BranchLabel>_TypeInfo;
  puVar3 = System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo;
  if ((uVar11 & 1) != 0) {
    if (lVar10 == 0) goto LAB_0207904c;
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar11 = 0;
      uVar14 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      lVar9 = lVar10 + 0x20;
      do {
        if (uVar14 <= uVar11) {
LAB_02079050:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4ac();
        }
        lVar13 = FUN_03dad9e8(lVar9,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar14 = FUN_03d4f3bc(lVar13,0,0);
        if ((uVar14 & 1) != 0) {
          if (lVar13 == 0) goto LAB_0207904c;
          lVar13 = FUN_0230c12c(lVar13,*(undefined8 *)puVar3);
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar14 = FUN_03d4f3bc(lVar13,0,0);
          if ((uVar14 & 1) != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_02079050;
            uVar15 = FUN_03dad9a8(lVar9,0);
            if (*(int *)(*(long *)PTR_DAT_04231ee0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_01ddc32c(uVar15,uVar18,uVar8,0x3f800000,0,*(undefined8 *)puVar4,0,0,0,0,0);
            if (lVar13 == 0) goto LAB_0207904c;
            uVar18 = 0x7f800000;
            iVar5 = -0x80000000;
            if (*(float *)(unaff_x19 + 0x178) != INFINITY) {
              iVar5 = (int)*(float *)(unaff_x19 + 0x178);
            }
            FUN_01f616e0(lVar13,iVar5,0);
          }
        }
        uVar14 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0x2c;
      } while ((long)uVar11 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
  }
  if ((float)uVar7 <= 0.0) {
    uVar7 = FUN_03dad9e8(&stack0x00000190,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar11 = FUN_03d4f3bc(uVar7,0,0);
    if ((uVar11 & 1) != 0) {
      lVar9 = FUN_03dad9e8(&stack0x00000190,0);
      if ((lVar9 != 0) && (lVar9 = FUN_03d468e8(lVar9,0), lVar9 != 0)) {
        iVar5 = FUN_03d498ec(lVar9,0);
        iVar6 = FUN_03d4a6fc(*(undefined8 *)System_ContextBoundObject_var,0);
        if (iVar5 == iVar6) goto LAB_02078ff4;
        lVar9 = FUN_03dad9e8(&stack0x00000190,0);
        if ((lVar9 != 0) && (lVar9 = FUN_03d468e8(lVar9,0), lVar9 != 0)) {
          iVar5 = FUN_03d498ec(lVar9,0);
          iVar6 = FUN_03d4a6fc(*(undefined8 *)System_Reflection_MethodBase_var,0);
          if (iVar5 == iVar6) goto LAB_02078ff4;
          lVar9 = FUN_03dad9e8(&stack0x00000190,0);
          if ((lVar9 != 0) && (lVar9 = FUN_03d468e8(lVar9,0), lVar9 != 0)) {
            iVar5 = FUN_03d498ec(lVar9,0);
            iVar6 = FUN_03d4a6fc(*(undefined8 *)System_Reflection_MemberInfoSerializationHolder_var,
                                 0);
            if (iVar5 == iVar6) goto LAB_02078ff4;
            lVar9 = FUN_03dad9e8(&stack0x00000190,0);
            if ((lVar9 != 0) && (lVar9 = FUN_03d468e8(lVar9,0), lVar9 != 0)) {
              iVar5 = FUN_03d498ec(lVar9,0);
              iVar6 = FUN_03d4a6fc(*(undefined8 *)UnityEngine_Font_var,0);
              if (iVar5 == iVar6) goto LAB_02078ff4;
              lVar9 = FUN_03dad8fc(&stack0x00000190,0);
              if (lVar9 != 0) {
                uVar11 = FUN_03d47010(lVar9,*(undefined8 *)System_Type___var,0);
                if ((uVar11 & 1) == 0) {
                  lVar9 = FUN_03dad8fc(&stack0x00000190,0);
                  if (lVar9 != 0) {
                    uVar11 = FUN_03d47010(lVar9,*(undefined8 *)UnityEngine_RaycastHit2D___var,0);
                    if ((uVar11 & 1) == 0) {
                      lVar9 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
                      uVar7 = FUN_03dad9a8(&stack0x00000190,0);
                      uVar11 = uVar18;
                      uVar14 = uVar8;
                      fVar21 = (float)FUN_03dad9c0(&stack0x00000190,0);
                      if (lVar9 == 0) goto LAB_0207904c;
                      FUN_020436b8(uVar7,uVar18,uVar8,-fVar21,-(float)uVar11,-(float)uVar14,
                                   *(float *)(unaff_x19 + 0x4a8) * *(float *)(unaff_x19 + 0x508) +
                                   1.0,lVar9,1,0);
                    }
                    goto LAB_02078ff4;
                  }
                }
                else {
                  lVar9 = **(long **)(*(long *)PTR_DAT_04239ed8 + 0xb8);
                  uVar7 = FUN_03dad9a8(&stack0x00000190,0);
                  uVar11 = uVar18;
                  uVar14 = uVar8;
                  fVar21 = (float)FUN_03dad9c0(&stack0x00000190,0);
                  if (lVar9 != 0) {
                    FUN_02043910(uVar7,uVar18,uVar8,-fVar21,-(float)uVar11,-(float)uVar14,lVar9,0);
                    goto LAB_02078ff4;
                  }
                }
              }
            }
          }
        }
      }
LAB_0207904c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
  }
  else {
    FUN_03dad9e0(uVar7,&stack0x00000190,0);
  }
LAB_02078ff4:
  uStack0000000000000064 = *(undefined8 *)((long)unaff_x24 + 0xdc);
  uStack000000000000005c = (undefined4)*(undefined8 *)((long)unaff_x24 + 0xd4);
  FUN_02077bfc(fStack000000000000003c,fVar22,param_1);
  return;
}


