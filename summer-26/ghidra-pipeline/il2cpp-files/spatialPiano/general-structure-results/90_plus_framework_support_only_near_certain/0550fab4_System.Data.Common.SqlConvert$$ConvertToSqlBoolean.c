/*
FUNCTION_NAME: System.Data.Common.SqlConvert$$ConvertToSqlBoolean
ENTRY_POINT: 0550fab4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void System_Data_Common_SqlConvert__ConvertToSqlBoolean(void)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  uint in_w8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint uVar17;
  long *unaff_x23;
  long unaff_x26;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000028;
  
  while ((uint)unaff_x29 < in_w8) {
    plVar3 = *(long **)(unaff_x22 + unaff_x28 * 8);
    if ((plVar3 == (long *)0x0) ||
       (lVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0)), lVar4 == 0)
       ) goto LAB_0550fc64;
    uVar5 = FUN_050eed58(lVar4,0);
    uVar5 = uVar5 & 0xffffffff;
    lVar4 = unaff_x28;
    while( true ) {
      if (unaff_x20 == (long *)0x0) goto LAB_0550fc64;
      if ((unaff_x26 != 0) &&
         (lVar6 = thunk_FUN_02f45174(unaff_x26,*(undefined8 *)(*unaff_x20 + 0x40)), lVar6 == 0))
      goto LAB_0550fd30;
      if (*(uint *)(unaff_x20 + 3) <= (uint)unaff_x29) goto LAB_05510124;
      unaff_x20[lVar4] = unaff_x26;
      lVar6 = *(long *)(unaff_x21 + 0x10);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050e4454(lVar6 + 0x20,0);
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x19);
      }
      lVar6 = FUN_054c0540(unaff_x26,uVar7,0);
      if (unaff_x23 == (long *)0x0) goto LAB_0550fc64;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*unaff_x23 + 0x40)), lVar8 == 0))
      goto LAB_0550fd30;
      if (*(uint *)(unaff_x23 + 3) <= (uint)unaff_x29) goto LAB_05510124;
      unaff_x23[lVar4] = lVar6;
      unaff_x28 = lVar4 + 1;
      if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_x28 + -4) {
        lVar4 = *(long *)(unaff_x21 + 0x10);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar7 = FUN_050e4454(lVar4 + 0x20,0);
        if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
        }
        uVar7 = FUN_054d1e44(uVar7);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                    System_Collections_Generic_IEnumerator<FieldInfo>_TypeInfo);
        FUN_04e02ad4();
        uVar9 = FUN_054cb494(uVar9,0);
        uVar10 = FUN_050e4454(*(undefined8 *)PTR_DAT_067ccea8,0);
        uVar10 = FUN_054bfec0(uVar10,*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo,0);
        if (in_stack_00000018 == (long *)0x0) goto LAB_0550fc64;
        uVar11 = (**(code **)(*in_stack_00000018 + 0x3d8))
                           (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x3e0));
        uVar12 = FUN_050e4454(*(long *)(unaff_x21 + 0x20) + 0x20,0);
        uVar13 = FUN_050ed374(uVar11,uVar12,0);
        if ((uVar13 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_054bed80(uVar9,uVar10,0);
          uVar11 = (**(code **)(*in_stack_00000018 + 0x3d8))
                             (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x3e0));
          uVar9 = FUN_054c0540(uVar9,uVar11,0);
        }
        else {
          lVar4 = *(long *)(unaff_x21 + 0x20);
          if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar11 = FUN_050e4454(lVar4 + 0x20,0);
          plVar3 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ccea0,1);
          if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
          }
          lVar4 = FUN_054bed80(uVar9,uVar10,0);
          if (plVar3 == (long *)0x0) goto LAB_0550fc64;
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_02f45174(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
          goto LAB_0550fd30;
          if ((int)plVar3[3] == 0) goto LAB_05510124;
          plVar3[4] = lVar4;
          uVar9 = FUN_054c9ba4(uVar11,plVar3,0);
        }
        if ((uVar5 & 1) == 0) goto LAB_0550ffd4;
        lVar4 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ce2f8);
        FUN_03abf108(lVar4,*(undefined8 *)PTR_DAT_067ce2f0);
        puVar2 = OVRTelemetry_QPLTelemetryClient_TypeInfo;
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if ((int)uVar1 < 1) goto LAB_0550ff6c;
        lVar6 = 0;
        goto LAB_0550fddc;
      }
      unaff_x29 = lVar4 + -3;
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_05510124;
      plVar3 = *(long **)(unaff_x22 + unaff_x28 * 8);
      if (plVar3 == (long *)0x0) goto LAB_0550fc64;
      uVar7 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      if (*(uint *)(unaff_x22 + 0x18) <= (uint)unaff_x29) goto LAB_05510124;
      plVar3 = *(long **)(unaff_x22 + unaff_x28 * 8);
      if (plVar3 == (long *)0x0) goto LAB_0550fc64;
      uVar9 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x19);
      }
      unaff_x26 = FUN_054bfec0(uVar7,uVar9,0);
      if ((uVar5 & 1) == 0) break;
      uVar5 = 1;
      lVar4 = unaff_x28;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
  }
LAB_05510124:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
LAB_0550fddc:
  uVar17 = (uint)lVar6;
  if (uVar1 <= uVar17) goto LAB_05510124;
  plVar3 = *(long **)(unaff_x22 + 0x20 + lVar6 * 8);
  if ((plVar3 == (long *)0x0) ||
     (lVar8 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0)), lVar8 == 0))
  goto LAB_0550fc64;
  uVar5 = FUN_050eed58(lVar8,0);
  if ((uVar5 & 1) != 0) {
    if (unaff_x20 == (long *)0x0) {
LAB_0550fc64:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(uint *)(unaff_x20 + 3) <= uVar17) goto LAB_05510124;
    lVar8 = unaff_x20[lVar6 + 4];
    plVar3 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067ccea0,1);
    in_stack_00000028._4_4_ = uVar17;
    uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(unaff_x21 + 0x48),(long)&stack0x00000028 + 4);
    if (*(int *)(*(long *)PTR_DAT_067c9c68 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9c68);
    }
    lVar14 = FUN_054cb494(uVar11,0);
    if (plVar3 == (long *)0x0) goto LAB_0550fc64;
    if ((lVar14 != 0) &&
       (lVar15 = thunk_FUN_02f45174(lVar14,*(undefined8 *)(*plVar3 + 0x40)), lVar15 == 0)) {
LAB_0550fd30:
      uVar7 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar7,0);
    }
    if ((int)plVar3[3] == 0) goto LAB_05510124;
    plVar3[4] = lVar14;
    uVar11 = FUN_054cc54c(uVar10,plVar3,0);
    if (*(uint *)(unaff_x22 + 0x18) <= uVar17) goto LAB_05510124;
    plVar3 = *(long **)(unaff_x22 + 0x20 + lVar6 * 8);
    if ((plVar3 == (long *)0x0) ||
       (plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0)),
       plVar3 == (long *)0x0)) goto LAB_0550fc64;
    uVar12 = (**(code **)(*plVar3 + 0x418))(plVar3,*(undefined8 *)(*plVar3 + 0x420));
    uVar11 = FUN_054c0540(uVar11,uVar12,0);
    uVar11 = FUN_054beedc(lVar8,uVar11,0);
    if (lVar4 == 0) goto LAB_0550fc64;
    lVar8 = *(long *)(lVar4 + 0x10);
    lVar14 = *(long *)puVar2;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_0550fc64;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
    }
    else {
      FUN_03abf904(lVar4,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  lVar6 = lVar6 + 1;
  if ((int)uVar1 <= (int)lVar6) {
LAB_0550ff6c:
    lVar6 = *(long *)(unaff_x21 + 0x20);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_050e4454(lVar6 + 0x20,0);
    lVar6 = thunk_FUN_02f6ef30(PTR_DAT_067c9c68);
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_054c9c2c(uVar11,lVar4,0);
    uVar9 = FUN_054d2680(uVar9,uVar11,0);
LAB_0550ffd4:
    FUN_02a7da48(in_stack_00000018);
    uVar11 = (**(code **)(*in_stack_00000018 + 0x3d8))
                       (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x3e0));
    uVar12 = thunk_FUN_02f6ef30(PTR_DAT_067cbc68);
    uVar12 = FUN_02f0880c(uVar12,1);
    FUN_02a7da48();
    FUN_02a81aa0(uVar12,uVar10);
    FUN_02a81ad4(uVar12,0,uVar10);
    uVar16 = thunk_FUN_02f6ef30(PTR_DAT_067ccea0);
    uVar16 = FUN_02f0880c(uVar16,2);
    thunk_FUN_02f6ef30(PTR_DAT_067c9c68);
    FUN_02a7d698();
    uVar7 = FUN_054beedc(uVar10,uVar7,0);
    FUN_02a7da48(uVar16);
    FUN_02a81aa0(uVar16,uVar7);
    FUN_02a81ad4(uVar16,0,uVar7);
    FUN_02a81aa0(uVar16,uVar9);
    FUN_02a81ad4(uVar16,1,uVar9);
    uVar7 = FUN_054c9f4c(uVar11,uVar12,uVar16,0);
    FUN_054ceef8(in_stack_00000010,uVar7);
    thunk_FUN_02f6ef30(PTR_DAT_067cb988);
    uVar7 = thunk_FUN_02f45270();
    uVar9 = thunk_FUN_02f6ef30(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_050d7b10(uVar7,uVar9,0);
    uVar9 = thunk_FUN_02f6ef30(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar7,uVar9);
  }
  goto LAB_0550fddc;
}


