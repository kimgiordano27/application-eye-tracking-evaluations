/*
FUNCTION_NAME: FUN_05c76678
ENTRY_POINT: 05c76678
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x05c76b14) */
/* WARNING: Removing unreachable block (ram,0x05c76b2c) */

void FUN_05c76678(long param_1,long param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 local_a0 [2];
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar7 = UnityEngine_XR_ARFoundation_ARPointCloudChangedEventArgs_var;
  puVar6 = UnityEngine_XR_ARFoundation_ARPlanesChangedEventArgs_var;
  puVar5 = PTR_DAT_065c9610;
  puVar4 = PTR_DAT_065c9608;
  puVar3 = PTR_DAT_065c9440;
  puVar2 = PTR_DAT_065c9438;
  if ((DAT_06a79ecb & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d6b60);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cc608);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d6b80);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9650);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_XR_ARFoundation_ARRaycastHit_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9448);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9610);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9440);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_ARFoundation_ARPointCloudChangedEventArgs_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9860);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9878);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9608);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_ARFoundation_ARPlanesChangedEventArgs_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9438);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3528);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca9b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca9b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e34a0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3358);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cbbe0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065cefb0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce10);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Tuple<Pose,_float,_float>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_ARDK_AR_Protobuf_ARSessionEvent_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_XR_ARFoundation_ARTextureInfo_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065df1e8);
    DAT_06a79ecb = 1;
  }
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar6);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar11,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x38) = uVar11;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
            (uVar11,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  uVar11 = thunk_FUN_02cea894(*(undefined8 *)puVar4);
  FUN_0391d9b4(uVar11,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x48) = uVar11;
  FUN_04f7383c(param_1,0);
  puVar2 = PTR_DAT_065e34a0;
  iVar10 = *param_3;
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (iVar10 < *(int *)(param_2 + 0x10)) {
    FUN_04db48b0(param_2,iVar10,0);
    if (*param_3 + 1 < *(int *)(param_2 + 0x10)) {
      uVar8 = FUN_04db48b0(param_2,*param_3 + 1,0);
      local_a0[0] = 0;
      FUN_03c8165c(local_a0,uVar8,*(undefined8 *)puVar2);
      uVar8 = local_a0[0];
    }
    else {
      uVar8 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x05c7693c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)switchD_05c7693c::switchdataD_0148fb80 * 4 + 0x5c76940))(uVar8);
    return;
  }
  FUN_03c868ac(&local_68,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_065ca9b8);
  if ((char)local_78 == '\0') {
    FUN_03c868ac(&local_78,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_065ca9b8);
  }
  puVar2 = PTR_DAT_065cefb0;
  iVar9 = FUN_03c868c4(&local_68,*(undefined8 *)PTR_DAT_065cefb0);
  lVar12 = FUN_04dbaed4(param_2,iVar10,iVar9 - iVar10,0);
  *(long *)(param_1 + 0x50) = lVar12;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar13 = FUN_04dbda24(lVar12,0x2b,0);
  lVar12 = *(long *)(param_1 + 0x50);
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_065dce10 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05c884dc(lVar12,0x60,&local_90,&local_98,0);
    lVar12 = *(long *)(param_1 + 0x40);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar16 = *(long *)PTR_DAT_065c9448;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = local_90;
    }
    else {
      FUN_039683cc(lVar12,local_90,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    lVar12 = *(long *)(param_1 + 0x48);
    if (local_98 == 0) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)PTR_DAT_065c9650;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = 0;
      }
      else {
        FUN_0391e1ac(lVar12,0,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      uVar8 = FUN_04f2e990(local_98,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar14 = *(long *)(lVar12 + 0x10);
      lVar16 = *(long *)PTR_DAT_065c9650;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
      }
      else {
        FUN_0391e1ac(lVar12,uVar8,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar12 = FUN_04dbb798(lVar12,0x2b,0,0);
    puVar5 = PTR_DAT_065dce10;
    puVar4 = PTR_DAT_065c9650;
    puVar3 = PTR_DAT_065c9448;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
      uVar13 = 0;
      uVar15 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
      do {
        if (uVar15 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        uVar11 = *(undefined8 *)(lVar12 + 0x20 + uVar13 * 8);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_05c884dc(uVar11,0x60,&local_80,&local_88,0);
        lVar14 = *(long *)(param_1 + 0x40);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        lVar16 = *(long *)(lVar14 + 0x10);
        lVar17 = *(long *)puVar3;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = local_80;
        }
        else {
          FUN_039683cc(lVar14,local_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        lVar14 = *(long *)(param_1 + 0x48);
        if (local_88 == 0) {
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = 0;
          }
          else {
            FUN_0391e1ac(lVar14,0,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70)
                        );
          }
        }
        else {
          uVar8 = FUN_04f2e990(local_88,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          lVar16 = *(long *)(lVar14 + 0x10);
          lVar17 = *(long *)puVar4;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x20) = uVar8;
          }
          else {
            FUN_0391e1ac(lVar14,uVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = (ulong)*(uint *)(lVar12 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)*(uint *)(lVar12 + 0x18));
    }
  }
  if ((char)local_70 != '\0') {
    uVar8 = FUN_03c868c4(&local_70,*(undefined8 *)puVar2);
    iVar10 = FUN_03c868c4(&local_78,*(undefined8 *)puVar2);
    iVar9 = FUN_03c868c4(&local_70,*(undefined8 *)puVar2);
    lVar12 = FUN_04dbaed4(param_2,uVar8,iVar10 - iVar9,0);
    *(long *)(param_1 + 0x10) = lVar12;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar11 = FUN_04dbb798(lVar12,0x2c,0,0);
    puVar2 = Niantic_ARDK_AR_Protobuf_ARSessionEvent_var;
    lVar12 = *(long *)Niantic_ARDK_AR_Protobuf_ARSessionEvent_var;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar12);
      lVar12 = *(long *)puVar2;
    }
    lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
    if (lVar14 == 0) {
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02cd038c(lVar12);
        lVar12 = *(long *)puVar2;
      }
      uVar18 = **(undefined8 **)(lVar12 + 0xb8);
      lVar14 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065d6b80);
      FUN_04a5701c(lVar14,uVar18,
                   *(undefined8 *)UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_var,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar14;
    }
    uVar11 = FUN_033eb504(uVar11,lVar14,*(undefined8 *)PTR_DAT_065d6b60);
    lVar12 = FUN_033fb070(uVar11,*(undefined8 *)PTR_DAT_065cc608);
    uVar11 = FUN_05c77264(lVar12,*(undefined8 *)PTR_DAT_065df1e8);
    puVar2 = UnityEngine_XR_ARFoundation_ARTextureInfo_var;
    *(undefined8 *)(param_1 + 0x20) = uVar11;
    uVar11 = FUN_05c77264(lVar12,*(undefined8 *)puVar2);
    puVar2 = Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var;
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    uVar11 = FUN_05c77264(lVar12,*(undefined8 *)puVar2);
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (0 < *(int *)(lVar12 + 0x18)) {
      uVar11 = FUN_03968108(lVar12,0,*(undefined8 *)PTR_DAT_065c9878);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
    }
  }
  return;
}


