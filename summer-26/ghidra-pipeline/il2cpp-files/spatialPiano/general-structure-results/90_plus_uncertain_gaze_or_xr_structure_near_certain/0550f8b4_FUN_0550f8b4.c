/*
FUNCTION_NAME: FUN_0550f8b4
ENTRY_POINT: 0550f8b4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


void FUN_0550f8b4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint local_64;
  
  puVar2 = PTR_DAT_067cbc88;
  if ((DAT_06bbf5a3 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ccea0);
    FUN_02f08768(PTR_DAT_067c9c68);
    FUN_02f08768(System_Collections_Generic_IEnumerator<FieldInfo>_TypeInfo);
    FUN_02f08768(OVRTelemetry_NullTelemetryClient_TypeInfo);
    FUN_02f08768(OVRTelemetry_QPLTelemetryClient_TypeInfo);
    FUN_02f08768(PTR_DAT_067ce2f0);
    FUN_02f08768(PTR_DAT_067ce2f8);
    FUN_02f08768(PTR_DAT_067ccea8);
    FUN_02f08768(PTR_DAT_067cbc68);
    FUN_02f08768(PTR_DAT_067cbc80);
    FUN_02f08768(PTR_DAT_067cbc88);
    FUN_02f08768(OVRTelemetryConstants_OVRManager_TypeInfo);
    DAT_06bbf5a3 = 1;
  }
  puVar3 = PTR_DAT_067cbc80;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar5 = (long *)FUN_0552e020(param_2,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar3);
  }
  lVar6 = FUN_0552a738(plVar5,0);
  if (lVar6 != 0) {
    plVar7 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067cbc68,*(undefined4 *)(lVar6 + 0x18));
    plVar8 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ccea0,*(undefined4 *)(lVar6 + 0x18));
    puVar3 = PTR_DAT_067c9c68;
    puVar2 = PTR_DAT_067c9338;
    uVar1 = *(uint *)(lVar6 + 0x18);
    uVar4 = 0;
    if (0 < (int)uVar1) {
      lVar21 = 4;
      do {
        uVar22 = (int)lVar21 - 4;
        if (uVar1 <= uVar22) goto LAB_05510124;
        plVar9 = *(long **)(lVar6 + lVar21 * 8);
        if (plVar9 == (long *)0x0) goto LAB_0550fc64;
        uVar10 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_05510124;
        plVar9 = *(long **)(lVar6 + lVar21 * 8);
        if (plVar9 == (long *)0x0) goto LAB_0550fc64;
        uVar11 = (**(code **)(*plVar9 + 0x1d8))(plVar9,*(undefined8 *)(*plVar9 + 0x1e0));
        lVar20 = *(long *)puVar3;
        if (*(int *)(lVar20 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar20);
        }
        lVar20 = FUN_054bfec0(uVar10,uVar11,0);
        if ((uVar4 & 1) == 0) {
          if (*(uint *)(lVar6 + 0x18) <= uVar22) goto LAB_05510124;
          plVar9 = *(long **)(lVar6 + lVar21 * 8);
          if ((plVar9 == (long *)0x0) ||
             (lVar12 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0)),
             lVar12 == 0)) goto LAB_0550fc64;
          uVar4 = FUN_050eed58(lVar12,0);
        }
        else {
          uVar4 = 1;
        }
        if (plVar7 == (long *)0x0) goto LAB_0550fc64;
        if ((lVar20 != 0) &&
           (lVar12 = thunk_FUN_02f45174(lVar20,*(undefined8 *)(*plVar7 + 0x40)), lVar12 == 0))
        goto LAB_0550fd30;
        if (*(uint *)(plVar7 + 3) <= uVar22) goto LAB_05510124;
        plVar7[lVar21] = lVar20;
        lVar12 = *(long *)(puVar2 + 0x10);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_050e4454(lVar12 + 0x20,0);
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_02f6670c(lVar12);
        }
        lVar20 = FUN_054c0540(lVar20,uVar10,0);
        if (plVar8 == (long *)0x0) goto LAB_0550fc64;
        if ((lVar20 != 0) &&
           (lVar12 = thunk_FUN_02f45174(lVar20,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
        goto LAB_0550fd30;
        if (*(uint *)(plVar8 + 3) <= uVar22) goto LAB_05510124;
        plVar8[lVar21] = lVar20;
        uVar1 = *(uint *)(lVar6 + 0x18);
        lVar21 = lVar21 + 1;
      } while ((int)lVar21 + -4 < (int)uVar1);
    }
    lVar21 = *(long *)(puVar2 + 0x10);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050e4454(lVar21 + 0x20,0);
    if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
    }
    uVar10 = FUN_054d1e44(uVar10,plVar8,0);
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 System_Collections_Generic_IEnumerator<FieldInfo>_TypeInfo);
    FUN_04e02ad4(uVar11,param_1,*(undefined8 *)OVRTelemetry_NullTelemetryClient_TypeInfo,0);
    uVar11 = FUN_054cb494(uVar11,0);
    uVar13 = FUN_050e4454(*(undefined8 *)PTR_DAT_067ccea8,0);
    uVar13 = FUN_054bfec0(uVar13,*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo,0);
    if (plVar5 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
      uVar15 = FUN_050e4454(*(long *)(puVar2 + 0x20) + 0x20,0);
      uVar16 = FUN_050ed374(uVar14,uVar15,0);
      if ((uVar16 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar11 = FUN_054bed80(uVar11,uVar13,0);
        uVar14 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
        uVar11 = FUN_054c0540(uVar11,uVar14,0);
      }
      else {
        lVar21 = *(long *)(puVar2 + 0x20);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar14 = FUN_050e4454(lVar21 + 0x20,0);
        plVar8 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ccea0,1);
        if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
        }
        lVar21 = FUN_054bed80(uVar11,uVar13,0);
        if (plVar8 == (long *)0x0) goto LAB_0550fc64;
        if ((lVar21 != 0) &&
           (lVar20 = thunk_FUN_02f45174(lVar21,*(undefined8 *)(*plVar8 + 0x40)), lVar20 == 0)) {
LAB_0550fd30:
          uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar10,0);
        }
        if ((int)plVar8[3] == 0) {
LAB_05510124:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar8[4] = lVar21;
        uVar11 = FUN_054c9ba4(uVar14,plVar8,0);
      }
      if ((uVar4 & 1) != 0) {
        lVar21 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce2f8);
        FUN_03abf108(lVar21,*(undefined8 *)PTR_DAT_067ce2f0);
        puVar3 = OVRTelemetry_QPLTelemetryClient_TypeInfo;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar1) {
          lVar20 = 0;
          do {
            uVar4 = (uint)lVar20;
            if (uVar1 <= uVar4) goto LAB_05510124;
            plVar8 = *(long **)(lVar6 + 0x20 + lVar20 * 8);
            if ((plVar8 == (long *)0x0) ||
               (lVar12 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
               lVar12 == 0)) goto LAB_0550fc64;
            uVar16 = FUN_050eed58(lVar12,0);
            if ((uVar16 & 1) != 0) {
              if (plVar7 == (long *)0x0) goto LAB_0550fc64;
              if (*(uint *)(plVar7 + 3) <= uVar4) goto LAB_05510124;
              lVar12 = plVar7[lVar20 + 4];
              plVar8 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ccea0,1);
              local_64 = uVar4;
              uVar14 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_64);
              if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
                thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
              }
              lVar17 = FUN_054cb494(uVar14,0);
              if (plVar8 == (long *)0x0) goto LAB_0550fc64;
              if ((lVar17 != 0) &&
                 (lVar18 = thunk_FUN_02f45174(lVar17,*(undefined8 *)(*plVar8 + 0x40)), lVar18 == 0))
              goto LAB_0550fd30;
              if ((int)plVar8[3] == 0) goto LAB_05510124;
              plVar8[4] = lVar17;
              uVar14 = FUN_054cc54c(uVar13,plVar8,0);
              if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_05510124;
              plVar8 = *(long **)(lVar6 + 0x20 + lVar20 * 8);
              if ((plVar8 == (long *)0x0) ||
                 (plVar8 = (long *)(**(code **)(*plVar8 + 0x1e8))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x1f0)),
                 plVar8 == (long *)0x0)) goto LAB_0550fc64;
              uVar15 = (**(code **)(*plVar8 + 0x418))(plVar8,*(undefined8 *)(*plVar8 + 0x420));
              uVar14 = FUN_054c0540(uVar14,uVar15,0);
              uVar14 = FUN_054beedc(lVar12,uVar14,0);
              if (lVar21 == 0) goto LAB_0550fc64;
              lVar12 = *(long *)(lVar21 + 0x10);
              lVar17 = *(long *)puVar3;
              *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_0550fc64;
              uVar1 = *(uint *)(lVar21 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar21 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
              }
              else {
                FUN_03abf904(lVar21,uVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar1 = *(uint *)(lVar6 + 0x18);
            lVar20 = lVar20 + 1;
          } while ((int)lVar20 < (int)uVar1);
        }
        lVar6 = *(long *)(puVar2 + 0x20);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar14 = FUN_050e4454(lVar6 + 0x20,0);
        lVar6 = thunk_FUN_02f6ef30(PTR_DAT_067c9c68);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar14 = FUN_054c9c2c(uVar14,lVar21,0);
        uVar11 = FUN_054d2680(uVar11,uVar14,0);
      }
      FUN_02a7da48(plVar5);
      uVar14 = (**(code **)(*plVar5 + 0x3d8))(plVar5,*(undefined8 *)(*plVar5 + 0x3e0));
      uVar15 = thunk_FUN_02f6ef30(PTR_DAT_067cbc68);
      uVar15 = FUN_02f0880c(uVar15,1);
      FUN_02a7da48();
      FUN_02a81aa0(uVar15,uVar13);
      FUN_02a81ad4(uVar15,0,uVar13);
      uVar19 = thunk_FUN_02f6ef30(PTR_DAT_067ccea0);
      uVar19 = FUN_02f0880c(uVar19,2);
      thunk_FUN_02f6ef30(PTR_DAT_067c9c68);
      FUN_02a7d698();
      uVar10 = FUN_054beedc(uVar13,uVar10,0);
      FUN_02a7da48(uVar19);
      FUN_02a81aa0(uVar19,uVar10);
      FUN_02a81ad4(uVar19,0,uVar10);
      FUN_02a81aa0(uVar19,uVar11);
      FUN_02a81ad4(uVar19,1,uVar11);
      uVar10 = FUN_054c9f4c(uVar14,uVar15,uVar19,0);
      FUN_054ceef8(param_2,uVar10,plVar7,0);
      thunk_FUN_02f6ef30(PTR_DAT_067cb988);
      uVar10 = thunk_FUN_02f45270();
      uVar11 = thunk_FUN_02f6ef30(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
      FUN_050d7b10(uVar10,uVar11,0);
      uVar11 = thunk_FUN_02f6ef30(
                                 OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar11);
    }
  }
LAB_0550fc64:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


