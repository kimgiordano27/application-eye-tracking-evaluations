/*
FUNCTION_NAME: FUN_0667aad4
ENTRY_POINT: 0667aad4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_0667aad4(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,
                 undefined8 param_5,long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  float extraout_s0;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  long local_78;
  int local_68;
  int local_64;
  
  if ((DAT_073a0dd2 & 1) == 0) {
    FUN_02fe925c(System_Collections_Generic_IReadOnlyCollection<Color>_TypeInfo);
    FUN_02fe925c(
                System_Collections_Generic_IEnumerable<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
                );
    FUN_02fe925c(
                System_Collections_Generic_IEnumerator<KeyValuePair<int,_ValueTuple<RTHandle,_int>>>_TypeInfo
                );
    FUN_02fe925c(System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_02fe925c(System_Collections_Generic_IReadOnlyCollection<Color32>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_IEnumerable<TimelineClip>_TypeInfo);
    FUN_02fe925c(System_Collections_Generic_IReadOnlyCollection<Expression>_TypeInfo);
    DAT_073a0dd2 = 1;
  }
  puVar5 = System_Collections_Generic_IReadOnlyCollection<Expression>_TypeInfo;
  local_78 = 0;
  if (*(char *)(param_4 + 0x141) != '\0') {
    FUN_03d32664(1,*(undefined8 *)
                    System_Collections_Generic_IReadOnlyCollection<Expression>_TypeInfo);
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar6 = FUN_068f5d7c(param_6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar13 = FUN_069042b4(lVar6,0);
    if (*(long *)(param_4 + 400) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(char *)(*(long *)(param_4 + 400) + 0x40) == '\0') {
      *(undefined4 *)(param_4 + 0x278) = uVar13;
      uVar14 = CONCAT44(param_2,uVar13);
      *(undefined4 *)(param_4 + 0x27c) = param_2;
      *(float *)(param_4 + 0x280) = param_3;
    }
    else {
      uVar14 = *(undefined8 *)(param_4 + 0x278);
      param_3 = *(float *)(param_4 + 0x280);
    }
    uVar17 = *(undefined8 *)(param_4 + 0x14);
    fVar18 = *(float *)(param_4 + 0x1c);
    uVar7 = FUN_06675254(param_4,*(int *)(param_4 + 0x34) + -1);
    if (DAT_0738e666 == '\0') {
      uVar7 = FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e666 = '\x01';
    }
    uVar16 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8) + 0xc);
    fVar15 = ((float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar17 >> 0x20)) / extraout_s0 +
             (float)((ulong)uVar16 >> 0x20) * -0.5;
    uVar17 = CONCAT44(fVar15,((float)uVar14 - (float)uVar17) / extraout_s0 + (float)uVar16 * -0.5);
    fVar18 = (param_3 - fVar18) / extraout_s0 +
             *(float *)(*(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8) + 0x14) * -0.5;
    uVar14 = FUN_0667a6a8(uVar17,fVar15,fVar18,uVar7,*(undefined8 *)(param_4 + 0x240));
    FUN_0667a6a8(uVar17,fVar15,fVar18,uVar14,*(undefined8 *)(param_4 + 0x238));
    puVar2 = System_Collections_Generic_IReadOnlyCollection<Color>_TypeInfo;
    FUN_03bdd7f8(*(undefined8 *)(param_4 + 0x240),
                 *(undefined8 *)System_Collections_Generic_IReadOnlyCollection<Color>_TypeInfo);
    FUN_03bdd7f8(*(undefined8 *)(param_4 + 0x238),*(undefined8 *)puVar2);
    puVar4 = System_Collections_Generic_IReadOnlyCollection<Color32>_TypeInfo;
    puVar2 = System_Collections_Generic_IEnumerable<OVRSemanticLabels_Classification>_TypeInfo;
    if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    local_64 = *(int *)(*(long *)(param_4 + 0x40) + 0x20);
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    local_68 = *(int *)(*(long *)(param_4 + 0x38) + 0x80);
    lVar6 = *(long *)(param_4 + 0x240);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar1 = *(int *)(param_4 + 0x164);
    if (*(int *)(lVar6 + 0x18) <= *(int *)(param_4 + 0x164)) {
      iVar1 = *(int *)(lVar6 + 0x18);
    }
    if (*(char *)(param_4 + 0x11) == '\0') {
      if (0 < iVar1) {
        lVar11 = *(long *)(param_4 + 0x248);
        while( true ) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          puVar8 = (undefined8 *)
                   FUN_053fe888(lVar6,*(undefined4 *)(lVar11 + 0x18),*(undefined8 *)puVar2);
          FUN_0667a8d8(param_4,*puVar8,&local_68,&local_64,*(undefined8 *)(param_4 + 0x248));
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) break;
          lVar11 = *(long *)(param_4 + 0x248);
          lVar6 = *(long *)(param_4 + 0x240);
        }
      }
    }
    else {
      do {
        lVar6 = *(long *)(param_4 + 0x248);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (iVar1 <= *(int *)(lVar6 + 0x18)) goto LAB_0667ad4c;
        if (*(long *)(param_4 + 0x240) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        puVar8 = (undefined8 *)
                 FUN_053fe888(*(long *)(param_4 + 0x240),*(int *)(lVar6 + 0x18),
                              *(undefined8 *)puVar2);
        uVar9 = FUN_0667a8d8(param_4,*puVar8,&local_68,&local_64,*(undefined8 *)(param_4 + 0x248));
      } while ((uVar9 & 1) != 0);
      lVar6 = *(long *)(param_4 + 0x248);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
LAB_0667ad4c:
      puVar3 = 
      System_Collections_Generic_IEnumerator<KeyValuePair<int,_ValueTuple<RTHandle,_int>>>_TypeInfo;
      if (*(int *)(lVar6 + 0x18) != iVar1) {
        if (lVar6 != 0) {
          iVar12 = 0;
          do {
            if (iVar1 <= *(int *)(lVar6 + 0x18)) {
LAB_0667aeb0:
              if (0 < -iVar12) {
                lVar6 = *(long *)(param_4 + 0x238);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                System_Collections_Generic_List_Enumerator<LinkedVoxelSpan>__System_Collections_IEnumerator_get_Current
                          (lVar6,*(int *)(lVar6 + 0x18) + iVar12,-iVar12,*(undefined8 *)puVar4);
                FUN_06672c1c(param_4);
              }
              goto LAB_0667aedc;
            }
            lVar6 = *(long *)(param_4 + 0x238);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            if (iVar12 + *(int *)(lVar6 + 0x18) == 0) goto LAB_0667aeb0;
            plVar10 = (long *)FUN_053fe888(lVar6,iVar12 + *(int *)(lVar6 + 0x18) + -1,
                                           *(undefined8 *)puVar2);
            local_78 = *plVar10;
            if (*(long *)(param_4 + 0x248) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            if (*(long *)(param_4 + 0x240) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            plVar10 = (long *)FUN_053fe888(*(long *)(param_4 + 0x240),
                                           *(undefined4 *)(*(long *)(param_4 + 0x248) + 0x18),
                                           *(undefined8 *)puVar2);
            if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            lVar6 = *plVar10;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            if (*(float *)(local_78 + 0x98) <= *(float *)(lVar6 + 0x98)) goto LAB_0667aeb0;
            FUN_06671f4c(param_4,local_78);
            if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            lVar11 = *(long *)(local_78 + 0x10);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            local_68 = *(int *)(lVar11 + 0x30) + local_68;
            local_64 = *(int *)(lVar11 + 0x2c) + local_64;
            if (*(long *)(param_4 + 0x250) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            FUN_053fe2f8(*(long *)(param_4 + 0x250),&local_78,*(undefined8 *)puVar3);
            FUN_0667a8d8(param_4,lVar6,&local_68,&local_64,*(undefined8 *)(param_4 + 0x248));
            lVar6 = *(long *)(param_4 + 0x248);
            iVar12 = iVar12 + -1;
          } while (lVar6 != 0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
    }
LAB_0667aedc:
    if (*(long *)(param_4 + 0x248) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (*(long *)(param_4 + 0x240) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    System_Collections_Generic_List_Enumerator<LinkedVoxelSpan>__System_Collections_IEnumerator_get_Current
              (*(long *)(param_4 + 0x240),0,*(undefined4 *)(*(long *)(param_4 + 0x248) + 0x18),
               *(undefined8 *)puVar4);
    puVar2 = 
    System_Collections_Generic_IEnumerable<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
    ;
    if (*(long *)(param_4 + 0x238) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_053fe3c8(*(long *)(param_4 + 0x238),*(undefined8 *)(param_4 + 0x248),
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerable<JointVelocityActiveState_JointVelocityFeatureConfig>_TypeInfo
                );
    if (*(long *)(param_4 + 0x240) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_053fe3c8(*(long *)(param_4 + 0x240),*(undefined8 *)(param_4 + 0x250),*(undefined8 *)puVar2);
    puVar2 = System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo;
    if (*(long *)(param_4 + 0x248) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_053fe2bc(*(long *)(param_4 + 0x248),
                 *(undefined8 *)
                  System_Collections_Generic_IEnumerable<OVRPermissionsRequester_Permission>_TypeInfo
                );
    if (*(long *)(param_4 + 0x250) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_053fe2bc(*(long *)(param_4 + 0x250),*(undefined8 *)puVar2);
    uVar9 = FUN_066711d8(param_4);
    if ((uVar9 & 1) != 0) {
      FUN_03d32664(2,*(undefined8 *)puVar5);
      FUN_0667b10c(param_4,param_5);
    }
  }
  return;
}


