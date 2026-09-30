/*
FUNCTION_NAME: FUN_05f304c8
ENTRY_POINT: 05f304c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


bool FUN_05f304c8(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_138;
  int local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined1 auStack_d0 [80];
  
  if ((DAT_066dceb7 & 1) == 0) {
    FUN_02b3c81c(StringLiteral_224);
    FUN_02b3c81c(Pico_Platform_Models_SpeechError_TypeInfo);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(UnityEngine_SphereCollider_TypeInfo);
    FUN_02b3c81c(StringLiteral_225);
    FUN_02b3c81c(StringLiteral_217);
    FUN_02b3c81c(PTR_DAT_06320a98);
    FUN_02b3c81c(StringLiteral_226);
    FUN_02b3c81c(StringLiteral_223);
    FUN_02b3c81c(PTR_DAT_0631f188);
    FUN_02b3c81c(StringLiteral_227);
    DAT_066dceb7 = 1;
  }
  local_e0 = 0;
  local_128 = 0;
  local_12c = 0;
  local_138 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  plVar8 = (long *)FUN_05f30018(param_3);
  puVar2 = UnityEngine_SphereCollider_TypeInfo;
  if (plVar8 != (long *)0x0) {
    iVar7 = 0;
    bVar1 = true;
    plVar15 = (long *)StringLiteral_223;
    plVar17 = (long *)PTR_DAT_06320a98;
    plVar18 = (long *)StringLiteral_217;
    do {
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar18) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
            goto LAB_05f30630;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(plVar8,*plVar18,4);
LAB_05f30630:
      iVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (iVar6 <= iVar7) {
        if (bVar1) {
          *(undefined4 *)(param_3 + 0x38) = 0;
          if (*(long *)(param_3 + 0x30) == 0) break;
          FUN_0444eb38(*(long *)(param_3 + 0x30),
                       *(undefined8 *)
                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
        }
        plVar8 = (long *)FUN_05f30018(param_3);
        if (plVar8 != (long *)0x0) {
          lVar10 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_05f30a34;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_05f30a1c;
        }
        break;
      }
      plVar8 = (long *)FUN_05f30018(param_3);
      if (plVar8 == (long *)0x0) break;
      lVar10 = *plVar8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar18) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_05f306a4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(plVar8,*plVar18,5);
LAB_05f306a4:
      (*(code *)*puVar9)(auStack_d0,plVar8,iVar7,puVar9[1]);
      memcpy(&local_120,auStack_d0,0x44);
      iVar6 = FUN_05d030c8(&local_120,0);
      if ((iVar6 != 1) && (iVar6 = FUN_05d030b0(&local_120,0), iVar6 != 2)) {
        iVar6 = FUN_05d030b0(&local_120,0);
        if (iVar6 == 0) {
          bVar5 = true;
        }
        else {
          iVar6 = FUN_05d030b0(&local_120,0);
          bVar5 = iVar6 == 1;
        }
        uVar19 = FUN_05d03070(&local_120,0);
        if (*(int *)(*(long *)PTR_DAT_0631f188 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05e35a08(uVar19,param_2,&local_128,0);
        FUN_05d03078(&local_120,0);
        FUN_05d03080(&local_120,0);
        FUN_05e35a08(&local_138,0);
        UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_FontSizeProperty__SetValue
                  (&local_120,0);
        FUN_05d03090(&local_120,0);
        FUN_05e35d20(0);
        FUN_05d03098(&local_120,0);
        lVar10 = *(long *)(param_3 + 0x30);
        uVar19 = FUN_05d03068(&local_120,0);
        if (lVar10 == 0) break;
        uVar11 = FUN_04450324(lVar10,uVar19,&local_12c,*(undefined8 *)puVar2);
        if ((uVar11 & 1) == 0) {
          local_12c = *(int *)(param_3 + 0x38);
          lVar10 = *(long *)(param_3 + 0x30);
          *(int *)(param_3 + 0x38) = local_12c + 1;
          uVar19 = FUN_05d03068(&local_120,0);
          if (lVar10 == 0) break;
          FUN_0444e9b8(lVar10,uVar19,local_12c,
                       *(undefined8 *)Pico_Platform_Models_SpeechError_TypeInfo);
        }
        lVar10 = *plVar17;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *plVar17;
        }
        iVar3 = local_12c;
        lVar13 = *(long *)(param_3 + 0x50);
        iVar6 = *(int *)(*(long *)(lVar10 + 0xb8) + 0xc);
        uVar20 = FUN_05d03070(&local_120,0);
        uVar19 = param_2;
        uVar21 = FUN_05d03090(&local_120,0);
        uVar4 = local_128;
        lVar10 = *plVar15;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar10 = *plVar15;
        }
        puVar9 = *(undefined8 **)(lVar10 + 0xb8);
        lVar14 = puVar9[10];
        if (lVar14 == 0) {
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            puVar9 = *(undefined8 **)(*(long *)StringLiteral_223 + 0xb8);
          }
          uVar16 = *puVar9;
          lVar14 = thunk_FUN_02b79644(*(undefined8 *)StringLiteral_225);
          FUN_049c9454(lVar14,uVar16,*(undefined8 *)StringLiteral_226,0);
          plVar8 = (long *)(*(long *)(*(long *)StringLiteral_223 + 0xb8) + 0x50);
          *plVar8 = lVar14;
          thunk_FUN_02bb0e9c(plVar8,lVar14);
          plVar17 = (long *)PTR_DAT_06320a98;
          plVar18 = (long *)StringLiteral_217;
        }
        memcpy(auStack_d0,&local_120,0x44);
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_168 = 0;
        local_170 = 0;
        uStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        FUN_041a8410(&local_190,auStack_d0,iVar3 + iVar6,local_128,*(undefined8 *)StringLiteral_227)
        ;
        if (lVar13 == 0) break;
        bVar1 = (bool)(!bVar5 & bVar1);
        memcpy(auStack_d0,&local_190,0x50);
        FUN_0319d670(uVar20,param_2,0,uVar21,uVar19,0,lVar13,iVar3 + iVar6,uVar4,lVar14,auStack_d0,0
                     ,*(undefined8 *)StringLiteral_224);
        plVar15 = (long *)StringLiteral_223;
      }
      iVar7 = iVar7 + 1;
      plVar8 = (long *)FUN_05f30018(param_3);
    } while (plVar8 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_05f30a1c:
    if (*(long *)(piVar12 + -2) == *plVar18) {
      puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
      goto LAB_05f30a54;
    }
  }
LAB_05f30a34:
  puVar9 = (undefined8 *)FUN_02b7654c(plVar8,*plVar18,4);
LAB_05f30a54:
  iVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  return 0 < iVar7;
}


