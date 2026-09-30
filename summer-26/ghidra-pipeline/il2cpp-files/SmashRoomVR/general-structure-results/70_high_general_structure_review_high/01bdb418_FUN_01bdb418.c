/*
FUNCTION_NAME: FUN_01bdb418
ENTRY_POINT: 01bdb418
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


void FUN_01bdb418(long param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  int *piVar21;
  uint *puVar22;
  float fVar23;
  undefined4 uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  puVar7 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed28d & 1) == 0) {
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_Reset__);
    thunk_FUN_01ad9084(Method_System_Collections_Stack_StackEnumerator_get_Current__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__);
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<Awake>b__90_0__
                      );
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
                    /* catch() { ... } // from try @ 01bdb518 with catch @ 01bdb4d8 */
    thunk_FUN_01ad9084(Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__);
    thunk_FUN_01ad9084(Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed28d = 1;
  }
  plVar16 = (long *)(param_1 + 0x20);
  lVar18 = *plVar16;
                    /* try { // try from 01bdb50c to 01cdb517 has its CatchHandler @ 01bdb5a4 */
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
                    /* try { // try from 01bdb518 to 01cdb5bf has its CatchHandler @ 01bdb4d8 */
  uVar9 = FUN_03922f24(lVar18,0,0);
  if ((uVar9 & 1) != 0) {
    uVar10 = FUN_01e8b0b4(param_1,*(undefined8 *)
                                   Method_System_Collections_Stack_StackEnumerator_Reset__);
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    thunk_FUN_01b4f09c(plVar16,uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar9 = FUN_03922f24(uVar10,0,0);
    if ((uVar9 & 1) != 0) {
      return;
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    fVar30 = *(float *)(param_1 + 0x30);
    fVar23 = (float)FUN_0395bb00(*(long *)(param_1 + 0x20),0);
    if (fVar30 == fVar23) {
      if (*plVar16 == 0) goto LAB_01bdcd0c;
      fVar30 = *(float *)(param_1 + 0x34);
      fVar23 = (float)FUN_0395ba78(*plVar16,0);
                    /* catch() { ... } // from try @ 01bdb50c with catch @ 01bdb5a4 */
      if (((fVar30 == fVar23) && (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x38))) &&
         (*(int *)(param_1 + 0x44) == *(int *)(param_1 + 0x3c))) {
        return;
      }
    }
    if (*plVar16 != 0) {
      uVar24 = FUN_0395bb00(*plVar16,0);
      *(undefined4 *)(param_1 + 0x30) = uVar24;
      puVar8 = Method_System_Resources_ResourceReader_ResourceEnumerator_get_Key__;
      puVar7 = Method_System_Resources_ResourceReader_ResourceEnumerator_get_Entry__;
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar24 = FUN_0395ba78(*(long *)(param_1 + 0x20),0);
        *(undefined4 *)(param_1 + 0x34) = uVar24;
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
        lVar18 = thunk_FUN_01afaadc(*(undefined8 *)puVar7);
        FUN_02bd6644(lVar18,*(undefined8 *)puVar8);
        puVar7 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
        if (lVar18 != 0) {
          fVar23 = *(float *)(param_1 + 0x30);
          fVar30 = *(float *)(param_1 + 0x34);
          lVar11 = *(long *)(lVar18 + 0x10);
          lVar12 = *(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_16__;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar4 = *(uint *)(lVar18 + 0x18);
            fVar23 = fVar23 * 0.5;
            if (uVar4 < *(uint *)(lVar11 + 0x18)) {
              lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
              *(uint *)(lVar18 + 0x18) = uVar4 + 1;
              *(undefined4 *)(lVar11 + 0x20) = 0;
              *(float *)(lVar11 + 0x24) = fVar23;
              *(undefined4 *)(lVar11 + 0x28) = 0;
            }
            else {
              FUN_02bd6ed8(0,fVar23,0,lVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            fVar6 = DAT_00b552c8;
            piVar2 = (int *)(param_1 + 0x3c);
            iVar14 = *(int *)(param_1 + 0x38) + -1;
            if (-1 < iVar14) {
              iVar15 = *piVar2;
              do {
                if (0 < iVar15) {
                  iVar25 = *(int *)(param_1 + 0x38);
                  iVar20 = 0;
                  do {
                    fVar27 = ((float)iVar20 / (float)iVar15) * 360.0 * fVar6;
                    fVar28 = ((float)iVar14 / (float)iVar25) * 90.0 * fVar6;
                    FUN_03914564(0,0);
                    fVar26 = (float)FUN_03914a7c(0);
                    fVar29 = *(float *)(param_1 + 0x34);
                    lVar11 = *(long *)(lVar18 + 0x10);
                    lVar12 = *(long *)puVar7;
                    *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                    if (lVar11 == 0) goto LAB_01bdcd0c;
                    uVar4 = *(uint *)(lVar18 + 0x18);
                    if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                      lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                      *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                      *(float *)(lVar11 + 0x20) = fVar26 * fVar29 + 0.0;
                      *(float *)(lVar11 + 0x24) = (fVar23 - fVar30) + fVar27 * fVar29;
                      *(float *)(lVar11 + 0x28) = fVar28 * fVar29 + 0.0;
                    }
                    else {
                      FUN_02bd6ed8(lVar18,*(undefined8 *)
                                           (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar15 = *piVar2;
                    iVar20 = iVar20 + 1;
                  } while (iVar20 < iVar15);
                }
                iVar14 = iVar14 + -1;
              } while (-1 < iVar14);
              iVar14 = *(int *)(param_1 + 0x38);
              if (0 < iVar14) {
                iVar20 = *piVar2;
                iVar15 = 0;
                do {
                  if (0 < iVar20) {
                    iVar25 = 0;
                    do {
                      fVar27 = (((float)iVar25 / (float)iVar20) * 360.0 + 180.0) * fVar6;
                      fVar28 = ((float)iVar15 / (float)iVar14) * 90.0 * fVar6;
                      FUN_03914564(0,0);
                      fVar26 = (float)FUN_03914a7c(0);
                      fVar29 = *(float *)(param_1 + 0x34);
                      lVar11 = *(long *)(lVar18 + 0x10);
                      lVar12 = *(long *)puVar7;
                      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
                      if (lVar11 == 0) goto LAB_01bdcd0c;
                      uVar4 = *(uint *)(lVar18 + 0x18);
                      if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                        lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                        *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                        *(float *)(lVar11 + 0x20) = 0.0 - fVar26 * fVar29;
                        *(float *)(lVar11 + 0x24) = (fVar30 - fVar23) - fVar27 * fVar29;
                        *(float *)(lVar11 + 0x28) = 0.0 - fVar28 * fVar29;
                      }
                      else {
                        FUN_02bd6ed8(lVar18,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar20 = *piVar2;
                      iVar25 = iVar25 + 1;
                    } while (iVar25 < iVar20);
                    iVar14 = *(int *)(param_1 + 0x38);
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < iVar14);
              }
            }
            fVar23 = *(float *)(param_1 + 0x30);
            lVar11 = *(long *)(lVar18 + 0x10);
            lVar12 = *(long *)puVar7;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            puVar8 = 
            Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
            ;
            puVar7 = Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__;
            if (lVar11 != 0) {
              uVar4 = *(uint *)(lVar18 + 0x18);
              fVar23 = fVar23 * -0.5;
              if (uVar4 < *(uint *)(lVar11 + 0x18)) {
                lVar11 = lVar11 + (long)(int)uVar4 * 0xc;
                *(uint *)(lVar18 + 0x18) = uVar4 + 1;
                *(undefined4 *)(lVar11 + 0x20) = 0;
                *(float *)(lVar11 + 0x24) = fVar23;
                *(undefined4 *)(lVar11 + 0x28) = 0;
              }
              else {
                FUN_02bd6ed8(0,fVar23,0,lVar18,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = thunk_FUN_01afaadc(*(undefined8 *)puVar8);
              FUN_02b2c088(lVar11,*(undefined8 *)puVar7);
              puVar7 = 
              Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__;
              if (lVar11 != 0) {
                iVar14 = *piVar2;
                piVar21 = (int *)(lVar11 + 0x1c);
                lVar12 = *(long *)(lVar11 + 0x10);
                lVar13 = *(long *)
                          Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                ;
                *piVar21 = *piVar21 + 1;
                if (lVar12 != 0) {
                  iVar15 = 0;
                  puVar22 = (uint *)(lVar11 + 0x18);
                  bVar1 = 0 < iVar14;
                  do {
                    uVar4 = *puVar22;
                    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(undefined4 *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = 0;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,0,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    if (!bVar1) {
                      iVar14 = *piVar2;
                      lVar12 = *(long *)(lVar11 + 0x10);
                      lVar13 = *(long *)puVar7;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar12 == 0) break;
                      uVar4 = *(uint *)(lVar11 + 0x18);
                      if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                        *puVar22 = uVar4 + 1;
                        *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
                        *piVar21 = *piVar21 + 1;
                      }
                      else {
                        FUN_02b2c8dc(lVar11,iVar14,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        lVar12 = *(long *)(lVar11 + 0x10);
                        lVar13 = *(long *)puVar7;
                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                        if (lVar12 == 0) break;
                      }
                      uVar4 = *puVar22;
                      if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                        *puVar22 = uVar4 + 1;
                        *(undefined4 *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = 1;
                      }
                      else {
                        FUN_02b2c8dc(lVar11,1,*(undefined8 *)
                                               (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      }
                      iVar14 = *(int *)(param_1 + 0x3c);
                      iVar15 = *(int *)(param_1 + 0x38) + -1;
                      if (iVar15 < 1) goto LAB_01bdc070;
                      iVar20 = 0;
                      goto LAB_01bdbbd0;
                    }
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar13 = *(long *)puVar7;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) break;
                    uVar4 = *(uint *)(lVar11 + 0x18);
                    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar15;
                      *piVar21 = *piVar21 + 1;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)(lVar11 + 0x10);
                      lVar13 = *(long *)puVar7;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar12 == 0) break;
                    }
                    uVar4 = *puVar22;
                    iVar15 = iVar15 + 1;
                    if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar15;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = *(long *)puVar7;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    bVar1 = iVar15 < *piVar2;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  } while (lVar12 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_01bdcd0c;
  while( true ) {
    uVar4 = *(uint *)(lVar11 + 0x18);
    iVar25 = iVar14 + iVar15;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar25;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar25,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
      lVar12 = *(long *)puVar7;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar3 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_01bdcd0c;
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar3 + iVar25;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar3 + iVar25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)puVar7;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar3 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_01bdcd0c;
    uVar4 = *puVar22;
    iVar14 = iVar14 + iVar15 + 1;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar3;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar14 - iVar3,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)puVar7;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar15 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_01bdcd0c;
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar15;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar14 - iVar15,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar12 = *(long *)puVar7;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar15 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 == 0) goto LAB_01bdcd0c;
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar15 + iVar25;
      *piVar21 = *piVar21 + 1;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar15 + iVar25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar12 = *(long *)puVar7;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_01bdcd0c;
    }
    uVar4 = *puVar22;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar14,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
    iVar14 = *(int *)(param_1 + 0x3c);
    iVar20 = iVar20 + 1;
    iVar15 = *(int *)(param_1 + 0x38) + -1;
    if (iVar15 <= iVar20) break;
LAB_01bdbbd0:
    iVar15 = iVar14 * iVar20;
    if (0 < iVar14 + -1) {
      iVar25 = 0;
      do {
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)puVar7;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_01bdcd0c;
        uVar4 = *(uint *)(lVar11 + 0x18);
        iVar14 = iVar15 + iVar25 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_02b2c8dc(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar7;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar14 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 == 0) goto LAB_01bdcd0c;
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + iVar14 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
          *piVar21 = *piVar21 + 1;
        }
        else {
          FUN_02b2c8dc(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)puVar7;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_01bdcd0c;
        }
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + 2;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
          *piVar21 = *piVar21 + 1;
        }
        else {
          FUN_02b2c8dc(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar13 = *(long *)(lVar11 + 0x10);
          lVar12 = *(long *)puVar7;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_01bdcd0c;
        }
        uVar4 = *puVar22;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_02b2c8dc(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar7;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar14 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 == 0) goto LAB_01bdcd0c;
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + iVar14 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_02b2c8dc(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar7;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar14 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 == 0) goto LAB_01bdcd0c;
        uVar4 = *puVar22;
        iVar14 = iVar15 + iVar25 + iVar14 + 2;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        }
        else {
          FUN_02b2c8dc(lVar11,iVar14,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        iVar14 = *piVar2;
        iVar25 = iVar25 + 1;
      } while (iVar25 < iVar14 + -1);
    }
    lVar13 = *(long *)(lVar11 + 0x10);
    lVar12 = *(long *)puVar7;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_01bdcd0c;
  }
LAB_01bdc070:
  iVar15 = iVar14 * iVar15;
  if (0 < iVar14 + -1) {
    iVar20 = 0;
    do {
      lVar13 = *(long *)(lVar11 + 0x10);
      lVar12 = *(long *)puVar7;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar13 == 0) goto LAB_01bdcd0c;
      uVar4 = *(uint *)(lVar11 + 0x18);
      iVar14 = iVar15 + iVar20 + 1;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_02b2c8dc(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar7;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar14 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 == 0) goto LAB_01bdcd0c;
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + iVar14 + 1;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        *piVar21 = *piVar21 + 1;
      }
      else {
        FUN_02b2c8dc(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)puVar7;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_01bdcd0c;
      }
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + 2;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
        *piVar21 = *piVar21 + 1;
      }
      else {
        FUN_02b2c8dc(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar12 = *(long *)puVar7;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_01bdcd0c;
      }
      uVar4 = *puVar22;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_02b2c8dc(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar7;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar14 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 == 0) goto LAB_01bdcd0c;
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + iVar14 + 1;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_02b2c8dc(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar7;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar14 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 == 0) goto LAB_01bdcd0c;
      uVar4 = *puVar22;
      iVar14 = iVar15 + iVar20 + iVar14 + 2;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
      }
      else {
        FUN_02b2c8dc(lVar11,iVar14,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      iVar14 = *piVar2;
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar14 + -1);
  }
  lVar13 = *(long *)(lVar11 + 0x10);
  lVar12 = *(long *)puVar7;
  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
  if (lVar13 != 0) {
    uVar4 = *(uint *)(lVar11 + 0x18);
    iVar20 = iVar14 + iVar15;
    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
      *puVar22 = uVar4 + 1;
      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
    }
    else {
      FUN_02b2c8dc(lVar11,iVar20,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
      lVar12 = *(long *)puVar7;
      lVar13 = *(long *)(lVar11 + 0x10);
    }
    iVar25 = *piVar2;
    *piVar21 = *piVar21 + 1;
    if (lVar13 != 0) {
      uVar4 = *puVar22;
      if (uVar4 < *(uint *)(lVar13 + 0x18)) {
        *puVar22 = uVar4 + 1;
        *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar25 + iVar20;
      }
      else {
        FUN_02b2c8dc(lVar11,iVar25 + iVar20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        lVar12 = *(long *)puVar7;
        lVar13 = *(long *)(lVar11 + 0x10);
      }
      iVar25 = *piVar2;
      *piVar21 = *piVar21 + 1;
      if (lVar13 != 0) {
        uVar4 = *puVar22;
        iVar14 = iVar14 + iVar15 + 1;
        if (uVar4 < *(uint *)(lVar13 + 0x18)) {
          *puVar22 = uVar4 + 1;
          *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar25;
        }
        else {
          FUN_02b2c8dc(lVar11,iVar14 - iVar25,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          lVar12 = *(long *)puVar7;
          lVar13 = *(long *)(lVar11 + 0x10);
        }
        iVar15 = *piVar2;
        *piVar21 = *piVar21 + 1;
        if (lVar13 != 0) {
          uVar4 = *puVar22;
          if (uVar4 < *(uint *)(lVar13 + 0x18)) {
            *puVar22 = uVar4 + 1;
            *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 - iVar15;
          }
          else {
            FUN_02b2c8dc(lVar11,iVar14 - iVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            lVar12 = *(long *)puVar7;
            lVar13 = *(long *)(lVar11 + 0x10);
          }
          iVar15 = *piVar2;
          *piVar21 = *piVar21 + 1;
          if (lVar13 != 0) {
            uVar4 = *puVar22;
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *puVar22 = uVar4 + 1;
              *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar15 + iVar20;
              *piVar21 = *piVar21 + 1;
            }
            else {
              FUN_02b2c8dc(lVar11,iVar15 + iVar20,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              lVar13 = *(long *)(lVar11 + 0x10);
              lVar12 = *(long *)puVar7;
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar13 == 0) goto LAB_01bdcd0c;
            }
            uVar4 = *puVar22;
            if (uVar4 < *(uint *)(lVar13 + 0x18)) {
              *puVar22 = uVar4 + 1;
              *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14;
            }
            else {
              FUN_02b2c8dc(lVar11,iVar14,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            iVar14 = *(int *)(param_1 + 0x38);
            if (0 < iVar14 + -1) {
              iVar15 = 0;
              do {
                iVar20 = *piVar2;
                iVar14 = iVar20 * (iVar14 + iVar15);
                if (0 < iVar20 + -1) {
                  iVar25 = 0;
                  do {
                    lVar13 = *(long *)(lVar11 + 0x10);
                    lVar12 = *(long *)puVar7;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar13 == 0) goto LAB_01bdcd0c;
                    uVar4 = *(uint *)(lVar11 + 0x18);
                    iVar20 = iVar14 + iVar25 + 1;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)puVar7;
                      lVar13 = *(long *)(lVar11 + 0x10);
                    }
                    iVar20 = *piVar2;
                    *piVar21 = *piVar21 + 1;
                    if (lVar13 == 0) goto LAB_01bdcd0c;
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + iVar20 + 1;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                      *piVar21 = *piVar21 + 1;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar13 = *(long *)(lVar11 + 0x10);
                      lVar12 = *(long *)puVar7;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_01bdcd0c;
                    }
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + 2;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                      *piVar21 = *piVar21 + 1;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar13 = *(long *)(lVar11 + 0x10);
                      lVar12 = *(long *)puVar7;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar13 == 0) goto LAB_01bdcd0c;
                    }
                    uVar4 = *puVar22;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)puVar7;
                      lVar13 = *(long *)(lVar11 + 0x10);
                    }
                    iVar20 = *piVar2;
                    *piVar21 = *piVar21 + 1;
                    if (lVar13 == 0) goto LAB_01bdcd0c;
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + iVar20 + 1;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      lVar12 = *(long *)puVar7;
                      lVar13 = *(long *)(lVar11 + 0x10);
                    }
                    iVar20 = *piVar2;
                    *piVar21 = *piVar21 + 1;
                    if (lVar13 == 0) goto LAB_01bdcd0c;
                    uVar4 = *puVar22;
                    iVar20 = iVar14 + iVar25 + iVar20 + 2;
                    if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                      *puVar22 = uVar4 + 1;
                      *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                    }
                    else {
                      FUN_02b2c8dc(lVar11,iVar20,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    iVar20 = *piVar2;
                    iVar25 = iVar25 + 1;
                  } while (iVar25 < iVar20 + -1);
                }
                lVar13 = *(long *)(lVar11 + 0x10);
                lVar12 = *(long *)puVar7;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar13 == 0) goto LAB_01bdcd0c;
                uVar4 = *(uint *)(lVar11 + 0x18);
                iVar25 = iVar20 + iVar14;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar25;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar7;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar3 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_01bdcd0c;
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar3 + iVar25;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar3 + iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar7;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar3 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_01bdcd0c;
                uVar4 = *puVar22;
                iVar20 = iVar20 + iVar14 + 1;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20 - iVar3;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar20 - iVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar7;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar14 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_01bdcd0c;
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20 - iVar14;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar20 - iVar14,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)puVar7;
                  lVar13 = *(long *)(lVar11 + 0x10);
                }
                iVar14 = *piVar2;
                *piVar21 = *piVar21 + 1;
                if (lVar13 == 0) goto LAB_01bdcd0c;
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar14 + iVar25;
                  *piVar21 = *piVar21 + 1;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar14 + iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar12 = *(long *)puVar7;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_01bdcd0c;
                }
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar13 + (long)(int)uVar4 * 4 + 0x20) = iVar20;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar20,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                iVar14 = *(int *)(param_1 + 0x38);
                iVar15 = iVar15 + 1;
              } while (iVar15 < iVar14 + -1);
            }
            iVar14 = *(int *)(lVar18 + 0x18);
            iVar15 = *piVar2;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)puVar7;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 != 0) {
              iVar25 = iVar14 + -1;
              bVar1 = 0 < iVar15;
              iVar20 = 1;
              do {
                uVar4 = *puVar22;
                if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar25;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar25,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                if (!bVar1) {
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar13 = *(long *)puVar7;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  puVar8 = Method_System_IO_Stream_<>c_<BeginEndReadAsync>b__45_0__;
                  if (lVar12 == 0) break;
                  uVar4 = *(uint *)(lVar11 + 0x18);
                  if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                    *puVar22 = uVar4 + 1;
                    *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar25 - iVar15;
                    *piVar21 = *piVar21 + 1;
                  }
                  else {
                    FUN_02b2c8dc(lVar11,iVar25 - iVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                    lVar12 = *(long *)(lVar11 + 0x10);
                    lVar13 = *(long *)puVar7;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar12 == 0) break;
                  }
                  uVar4 = *puVar22;
                  if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                    *puVar22 = uVar4 + 1;
                    *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar14 + -2;
                  }
                  else {
                    FUN_02b2c8dc(lVar11,iVar14 + -2,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar10 = FUN_02bd89b8(lVar18,*(undefined8 *)
                                                Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<Awake>b__90_0__
                                       );
                  puVar19 = (undefined8 *)(param_1 + 0x48);
                  *puVar19 = uVar10;
                  thunk_FUN_01b4f09c(puVar19,uVar10);
                  uVar10 = FUN_02b2e2b8(lVar11,*(undefined8 *)
                                                Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_1__
                                       );
                  puVar17 = (undefined8 *)(param_1 + 0x50);
                  *puVar17 = uVar10;
                  thunk_FUN_01b4f09c(puVar17,uVar10);
                  lVar18 = FUN_0391c2b8(param_1,0);
                  if (lVar18 != 0) {
                    lVar18 = FUN_01ed712c(lVar18,*(undefined8 *)
                                                  Method_System_Collections_Stack_StackEnumerator_get_Current__
                                         );
                    plVar16 = (long *)(param_1 + 0x28);
                    *plVar16 = lVar18;
                    thunk_FUN_01b4f09c(plVar16,lVar18);
                    lVar18 = *plVar16;
                    uVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar8);
                    FUN_03901184(uVar10,0);
                    if (lVar18 != 0) {
                      FUN_03900e48(lVar18,uVar10,0);
                      if ((*plVar16 != 0) && (lVar18 = FUN_03900d8c(*plVar16,0), lVar18 != 0)) {
                        FUN_0390262c(lVar18,*puVar19,0);
                        if ((*plVar16 != 0) && (lVar18 = FUN_03900d8c(*plVar16,0), lVar18 != 0)) {
                          FUN_0390400c(lVar18,*puVar17,0);
                          if ((*plVar16 != 0) && (lVar18 = FUN_03900d8c(*plVar16,0), lVar18 != 0)) {
                            FUN_03904ed8(lVar18,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                  break;
                }
                lVar12 = *(long *)(lVar11 + 0x10);
                lVar13 = *(long *)puVar7;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar12 == 0) break;
                uVar4 = *(uint *)(lVar11 + 0x18);
                iVar3 = (iVar14 - iVar15) + iVar20;
                iVar5 = iVar3 + -1;
                if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar5;
                  *piVar21 = *piVar21 + 1;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar13 = *(long *)puVar7;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) break;
                }
                uVar4 = *puVar22;
                iVar3 = iVar3 + -2;
                if (uVar4 < *(uint *)(lVar12 + 0x18)) {
                  *puVar22 = uVar4 + 1;
                  *(int *)(lVar12 + (long)(int)uVar4 * 4 + 0x20) = iVar3;
                }
                else {
                  FUN_02b2c8dc(lVar11,iVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  lVar13 = *(long *)puVar7;
                  lVar12 = *(long *)(lVar11 + 0x10);
                }
                bVar1 = iVar20 < *piVar2;
                iVar20 = iVar20 + 1;
                *piVar21 = *piVar21 + 1;
              } while (lVar12 != 0);
            }
          }
        }
      }
    }
  }
LAB_01bdcd0c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


