/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Quatf>
ENTRY_POINT: 03b69f20
PROGRAM: vrfs-libil2cpp.so
SCORE: 166
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Quatf>
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 *unaff_x21;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w26;
  long *unaff_x27;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  float fStack0000000000000108;
  float fStack000000000000010c;
  
  do {
    thunk_FUN_016466fc(param_1);
    do {
      uVar6 = FUN_051d94d4(unaff_x22,unaff_x23,0);
      if ((uVar6 & 1) != 0) {
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w26) goto LAB_03b6b0c8;
        if (*unaff_x27 == 0) goto LAB_03b6b08c;
        *unaff_x21 = *(undefined8 *)(*unaff_x27 + 0x20);
        thunk_FUN_01656ef8();
      }
      fVar27 = (float)param_4;
      fVar29 = (float)param_3;
      uVar14 = (undefined4)param_5;
      unaff_w26 = unaff_w26 + 1;
      if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w26) {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        lVar7 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0);
        plVar10 = (long *)(unaff_x19 + 0xb0);
        *plVar10 = lVar7;
        thunk_FUN_01656ef8(plVar10,lVar7);
        if (*plVar10 == 0) goto LAB_03b6b08c;
        lVar7 = FUN_0431ae70(*plVar10,*unaff_x25);
        plVar11 = (long *)(unaff_x19 + 0xb8);
        *plVar11 = lVar7;
        thunk_FUN_01656ef8(plVar11,lVar7);
        FUN_03b6b0d8();
        FUN_03b66608();
        FUN_03b6b244();
        puVar1 = PTR_DAT_06e50440;
        if (*(long *)(unaff_x19 + 0x300) == 0) goto LAB_03b6b08c;
        if (*(long *)(*(long *)(unaff_x19 + 0x300) + 0x18) == 0) {
          if (DAT_0722a398 == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e50440);
            DAT_0722a398 = '\x01';
          }
          if (*plVar10 == 0) goto LAB_03b6b08c;
          lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
          fVar25 = *(float *)(lVar7 + 0xc);
          fVar26 = *(float *)(lVar7 + 0x10);
          fVar28 = *(float *)(lVar7 + 0x14);
          lVar7 = FUN_0431ae70(*plVar10,*(undefined8 *)PTR_DAT_06dfafe8);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x24);
          }
          uVar6 = FUN_051d2ac0(lVar7,0,0);
          if ((uVar6 & 1) == 0) {
            uVar6 = (ulong)(uint)(fVar25 * DAT_0534c250);
            fVar29 = fVar26 * DAT_0534c250;
            fVar27 = fVar28 * DAT_0534c250;
          }
          else {
            if (lVar7 == 0) goto LAB_03b6b08c;
            FUN_0486aa88(&stack0x00000050,lVar7,0);
            in_stack_000000a8 = in_stack_00000058;
            in_stack_000000a0 = in_stack_00000050;
            in_stack_000000b0 = in_stack_00000060;
            uVar6 = FUN_051db98c(&stack0x000000a0,0);
          }
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_03b6b08c;
          uVar14 = FUN_049ac010(lVar7,0);
          FUN_03b8c508(uVar6,0);
          FUN_049ac798(lVar7,0);
        }
        uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar6 = FUN_051d2ac0(uVar12,0,0);
        if ((uVar6 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
          uVar12 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                             (*(long *)(unaff_x19 + 0x20),0);
        }
        else {
          uVar12 = *(undefined8 *)(unaff_x19 + 0xc0);
        }
        *(undefined8 *)(unaff_x19 + 0x2e0) = uVar12;
        thunk_FUN_01656ef8(unaff_x19 + 0x2e0);
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar12 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
        *(undefined8 *)(unaff_x19 + 0x140) = uVar12;
        thunk_FUN_01656ef8(unaff_x19 + 0x140);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        uVar12 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                           (*(long *)(unaff_x19 + 0x20),0);
        *(undefined8 *)(unaff_x19 + 0x148) = uVar12;
        thunk_FUN_01656ef8(unaff_x19 + 0x148);
        if ((*(long *)(unaff_x19 + 0x18) == 0) ||
           (lVar7 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar7 == 0)) goto LAB_03b6b08c;
        uVar12 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                           (lVar7,0);
        *(undefined8 *)(unaff_x19 + 0x180) = uVar12;
        thunk_FUN_01656ef8(unaff_x19 + 0x180);
        if ((*(long *)(unaff_x19 + 0x18) == 0) ||
           (lVar7 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar7 == 0)) goto LAB_03b6b08c;
        uVar15 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar7,0);
        *(undefined4 *)(unaff_x19 + 0x188) = uVar15;
        *(float *)(unaff_x19 + 0x18c) = fVar29;
        *(float *)(unaff_x19 + 400) = fVar27;
        if ((*(long *)(unaff_x19 + 0x18) == 0) ||
           (lVar7 = FUN_051e5130(*(long *)(unaff_x19 + 0x18),0), lVar7 == 0)) goto LAB_03b6b08c;
        uVar15 = FUN_04f1adf8(lVar7,0);
        *(undefined4 *)(unaff_x19 + 0x194) = uVar15;
        *(float *)(unaff_x19 + 0x198) = fVar29;
        *(float *)(unaff_x19 + 0x19c) = fVar27;
        *(undefined4 *)(unaff_x19 + 0x1a0) = uVar14;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        uVar15 = Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(unaff_x19 + 0x20),0);
        *(undefined4 *)(unaff_x19 + 0x1a4) = uVar15;
        *(float *)(unaff_x19 + 0x1a8) = fVar29;
        *(float *)(unaff_x19 + 0x1ac) = fVar27;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        uVar15 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
        *(undefined4 *)(unaff_x19 + 0x1b0) = uVar15;
        *(float *)(unaff_x19 + 0x1b4) = fVar29;
        *(float *)(unaff_x19 + 0x1b8) = fVar27;
        *(undefined4 *)(unaff_x19 + 0x1bc) = uVar14;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar15 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x1c0) = uVar15;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar15 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x1c4) = uVar15;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar15 = FUN_049b0afc(*(long *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x1c8) = uVar15;
        uVar15 = FUN_03b6b36c();
        *(undefined4 *)(unaff_x19 + 0x240) = uVar15;
        *(float *)(unaff_x19 + 0x244) = fVar29;
        *(float *)(unaff_x19 + 0x248) = fVar27;
        *(undefined4 *)(unaff_x19 + 0x24c) = uVar14;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        fVar25 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        fVar26 = fVar27;
        fVar28 = fVar29;
        fVar16 = (float)FUN_049b0744(*(long *)(unaff_x19 + 0x18),0);
        fVar21 = fVar25 * fVar26;
        fVar26 = fVar29 * fVar26 - fVar27 * fVar28;
        fVar27 = fVar27 * fVar16 - fVar21;
        fVar29 = fVar25 * fVar28 - fVar29 * fVar16;
        fStack0000000000000090 = fVar26;
        fStack0000000000000094 = fVar27;
        in_stack_00000098 = fVar29;
        if (DAT_0722a39f == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e1a840);
          DAT_0722a39f = '\x01';
        }
        puVar2 = PTR_DAT_06e1a840;
        if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        fVar25 = DAT_0533fbb4;
        fVar16 = fVar29 * fVar29;
        fVar28 = SQRT(fVar16 + fVar26 * fVar26 + fVar27 * fVar27);
        if (fVar28 <= DAT_0533fbb4) {
          if (DAT_0722a13e == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e50440);
            DAT_0722a13e = '\x01';
          }
          pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
          fVar26 = *pfVar9;
          fVar27 = pfVar9[1];
          fVar29 = pfVar9[2];
        }
        else {
          fVar26 = fVar26 / fVar28;
          fVar27 = fVar27 / fVar28;
          fVar29 = fVar29 / fVar28;
        }
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        fVar28 = (float)FUN_049afc60(*(long *)(unaff_x19 + 0x18),0);
        fVar30 = fVar27 * fVar21 - fVar29 * fVar16;
        fVar21 = fVar29 * fVar28 - fVar26 * fVar21;
        fVar28 = fVar26 * fVar16 - fVar27 * fVar28;
        fStack0000000000000090 = fVar30;
        fStack0000000000000094 = fVar21;
        in_stack_00000098 = fVar28;
        if (DAT_0722a39f == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e1a840);
          DAT_0722a39f = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        fVar16 = SQRT(fVar28 * fVar28 + fVar30 * fVar30 + fVar21 * fVar21);
        if (fVar16 <= fVar25) {
          if (DAT_0722a13e == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e50440);
            DAT_0722a13e = '\x01';
          }
          pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
          fVar30 = *pfVar9;
          fVar21 = pfVar9[1];
          fVar28 = pfVar9[2];
        }
        else {
          fVar30 = fVar30 / fVar16;
          fVar21 = fVar21 / fVar16;
          fVar28 = fVar28 / fVar16;
        }
        puVar4 = PTR_DAT_06e52cd8;
        puVar3 = PTR_DAT_06e2ec60;
        puVar2 = PTR_DAT_06ddc378;
        fVar25 = DAT_0534bf7c;
        fVar28 = fVar29 - fVar28;
        fVar16 = fVar28 * fVar28;
        if (fVar16 + (fVar26 - fVar30) * (fVar26 - fVar30) + (fVar27 - fVar21) * (fVar27 - fVar21) <
            DAT_0534bf7c) {
          if (*(long *)(unaff_x19 + 0x18) != 0) {
            uVar12 = FUN_051e0500(*(long *)(unaff_x19 + 0x18),0);
            uVar12 = FUN_02526be4(*(undefined8 *)puVar2,uVar12,*(undefined8 *)puVar3,0);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_016466fc(*(long *)puVar4);
            }
            FUN_0486672c(uVar12,0);
            return;
          }
          goto LAB_03b6b08c;
        }
        fStack0000000000000108 = fVar21;
        fStack000000000000010c = fVar30;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        fVar21 = DAT_0534bf7c;
        FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
        fVar30 = (float)FUN_04f13694(0);
        if (*plVar10 == 0) goto LAB_03b6b08c;
        fVar18 = fVar21;
        fVar20 = fVar16;
        fVar23 = fVar28;
        fVar17 = (float)FUN_04f1adf8(*plVar10,0);
        fVar22 = fVar28 * fVar23;
        fVar24 = fVar30 * fVar20 + fVar21 * fVar23 + fVar28 * fVar18;
        fVar19 = ((fVar21 * fVar18 - fVar30 * fVar17) - fVar16 * fVar20) - fVar22;
        *(float *)(unaff_x19 + 0x2b0) =
             (fVar16 * fVar23 + fVar21 * fVar17 + fVar30 * fVar18) - fVar28 * fVar20;
        *(float *)(unaff_x19 + 0x2b4) =
             (fVar28 * fVar17 + fVar21 * fVar20 + fVar16 * fVar18) - fVar30 * fVar23;
        *(float *)(unaff_x19 + 0x2b8) = fVar24 - fVar16 * fVar17;
        *(float *)(unaff_x19 + 700) = fVar19;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        lVar7 = *(long *)(unaff_x19 + 0xb0);
        Fusion_CloudServices_<Join>d__84__SetStateMachine(*(long *)(unaff_x19 + 0x20),0);
        if (lVar7 == 0) goto LAB_03b6b08c;
        uVar14 = FUN_04f1c838(lVar7,0);
        *(undefined4 *)(unaff_x19 + 0x150) = uVar14;
        *(float *)(unaff_x19 + 0x154) = fVar19;
        *(float *)(unaff_x19 + 0x158) = fVar22;
        if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_03b6b08c;
        FUN_04f1adf8(*(long *)(unaff_x19 + 0xb0),0);
        fVar28 = (float)FUN_04f13694(0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        fVar16 = fVar24;
        fVar21 = fVar19;
        fVar30 = fVar22;
        fVar18 = (float)FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
        fVar20 = (fVar22 * fVar18 + fVar24 * fVar21 + fVar19 * fVar16) - fVar28 * fVar30;
        fVar23 = (fVar28 * fVar21 + fVar24 * fVar30 + fVar22 * fVar16) - fVar19 * fVar18;
        fVar17 = ((fVar24 * fVar16 - fVar28 * fVar18) - fVar19 * fVar21) - fVar22 * fVar30;
        *(float *)(unaff_x19 + 0x15c) =
             (fVar19 * fVar30 + fVar24 * fVar18 + fVar28 * fVar16) - fVar22 * fVar21;
        *(float *)(unaff_x19 + 0x160) = fVar20;
        *(float *)(unaff_x19 + 0x164) = fVar23;
        *(float *)(unaff_x19 + 0x168) = fVar17;
        uVar14 = FUN_04f13694(0);
        *(undefined4 *)(unaff_x19 + 0x344) = uVar14;
        *(float *)(unaff_x19 + 0x348) = fVar20;
        *(float *)(unaff_x19 + 0x34c) = fVar23;
        *(float *)(unaff_x19 + 0x350) = fVar17;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        uVar12 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
        if (*plVar10 == 0) goto LAB_03b6b08c;
        FUN_04f1adf8(*plVar10,0);
        uVar14 = FUN_03b5df08(uVar12);
        *(float *)(unaff_x19 + 0x178) = fVar17;
        *(undefined4 *)(unaff_x19 + 0x16c) = uVar14;
        *(float *)(unaff_x19 + 0x170) = fVar20;
        *(float *)(unaff_x19 + 0x174) = fVar23;
        fVar21 = fStack000000000000010c;
        fVar30 = (float)FUN_04f13c44(fVar26,0);
        fVar26 = fVar27;
        fVar28 = fVar29;
        fVar16 = fVar21;
        uVar14 = FUN_04f13694(0);
        *(undefined4 *)(unaff_x19 + 0x270) = uVar14;
        *(float *)(unaff_x19 + 0x274) = fVar26;
        *(float *)(unaff_x19 + 0x278) = fVar28;
        *(float *)(unaff_x19 + 0x27c) = fVar16;
        fVar26 = *(float *)(unaff_x19 + 0x24c);
        fVar28 = *(float *)(unaff_x19 + 0x240);
        fVar16 = *(float *)(unaff_x19 + 0x244);
        fVar23 = *(float *)(unaff_x19 + 0x248);
        fVar17 = fVar29 * fVar23;
        fVar18 = (fVar29 * fVar16 + fVar21 * fVar28 + fVar30 * fVar26) - fVar27 * fVar23;
        fVar20 = (fVar30 * fVar23 + fVar21 * fVar16 + fVar27 * fVar26) - fVar29 * fVar28;
        *(float *)(unaff_x19 + 0x280) = fVar18;
        *(float *)(unaff_x19 + 0x284) = fVar20;
        *(float *)(unaff_x19 + 0x288) =
             (fVar27 * fVar28 + fVar21 * fVar23 + fVar29 * fVar26) - fVar30 * fVar16;
        *(float *)(unaff_x19 + 0x28c) =
             ((fVar21 * fVar26 - fVar30 * fVar28) - fVar27 * fVar16) - fVar17;
        FUN_03b6b42c();
        fVar28 = (float)FUN_04f13694(0);
        fVar29 = fVar17;
        fVar27 = fVar18;
        fVar26 = fVar20;
        fVar16 = (float)FUN_03b6b4e4();
        fVar23 = fVar20 * fVar26;
        fVar19 = fVar28 * fVar27 + fVar17 * fVar26 + fVar20 * fVar29;
        fVar21 = ((fVar17 * fVar29 - fVar28 * fVar16) - fVar18 * fVar27) - fVar23;
        *(float *)(unaff_x19 + 0x260) =
             (fVar18 * fVar26 + fVar17 * fVar16 + fVar28 * fVar29) - fVar20 * fVar27;
        *(float *)(unaff_x19 + 0x264) =
             (fVar20 * fVar16 + fVar17 * fVar27 + fVar18 * fVar29) - fVar28 * fVar26;
        *(float *)(unaff_x19 + 0x268) = fVar19 - fVar18 * fVar16;
        *(float *)(unaff_x19 + 0x26c) = fVar21;
        FUN_03b6b618();
        fVar28 = (float)FUN_04f13694(0);
        fVar29 = fVar19;
        fVar27 = fVar21;
        fVar26 = fVar23;
        fVar16 = (float)FUN_03b6b36c();
        fVar18 = fVar23 * fVar26;
        fVar20 = fVar28 * fVar27 + fVar19 * fVar26 + fVar23 * fVar29;
        fVar30 = ((fVar19 * fVar29 - fVar28 * fVar16) - fVar21 * fVar27) - fVar18;
        *(float *)(unaff_x19 + 0x250) =
             (fVar21 * fVar26 + fVar19 * fVar16 + fVar28 * fVar29) - fVar23 * fVar27;
        *(float *)(unaff_x19 + 0x254) =
             (fVar23 * fVar16 + fVar19 * fVar27 + fVar21 * fVar29) - fVar28 * fVar26;
        *(float *)(unaff_x19 + 600) = fVar20 - fVar21 * fVar16;
        *(float *)(unaff_x19 + 0x25c) = fVar30;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar12 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x24);
        }
        uVar6 = FUN_051d2ac0(uVar12,0,0);
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
          FUN_049b0044(*(long *)(unaff_x19 + 0x18),0,0);
          if ((*(long *)(unaff_x19 + 0x18) == 0) ||
             (lVar7 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0), lVar7 == 0)) goto LAB_03b6b08c;
          uVar12 = FUN_051e5130(lVar7,0);
          *(undefined8 *)(unaff_x19 + 0x2e8) = uVar12;
          thunk_FUN_01656ef8(unaff_x19 + 0x2e8);
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
          uVar12 = Fusion_CloudServices_<get_CommittedPlayerInternal>d__112__System_Collections_Generic_IEnumerable<Fusion_PlayerRef>_GetEnumerator
                             (*(long *)(unaff_x19 + 0x20),0);
          uVar13 = *(undefined8 *)(unaff_x19 + 0xc0);
          if (*(int *)(*unaff_x24 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x24);
          }
          bVar5 = FUN_051d94d4(uVar12,uVar13,0);
          *(byte *)(unaff_x19 + 0x2fc) = bVar5 & 1;
          FUN_03b6b758();
        }
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar14 = FUN_049b09fc(*(long *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x2f0) = uVar14;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar14 = FUN_049b0a7c(*(long *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x2f4) = uVar14;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar14 = FUN_049b0afc(*(long *)(unaff_x19 + 0x18),0);
        *(undefined4 *)(unaff_x19 + 0x2f8) = uVar14;
        if ((*(long *)(unaff_x19 + 0xb8) == 0) ||
           (lVar7 = FUN_051e5130(*(long *)(unaff_x19 + 0xb8),0), lVar7 == 0)) goto LAB_03b6b08c;
        FUN_04f1adf8(lVar7,0);
        fVar29 = (float)FUN_04f13694(0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        fVar27 = fVar20;
        fVar26 = fVar30;
        fVar28 = fVar18;
        fVar16 = (float)FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
        fVar23 = fVar18 * fVar28;
        fVar17 = fVar29 * fVar26 + fVar20 * fVar28 + fVar18 * fVar27;
        fVar21 = ((fVar20 * fVar27 - fVar29 * fVar16) - fVar30 * fVar26) - fVar23;
        *(float *)(unaff_x19 + 300) =
             (fVar30 * fVar28 + fVar20 * fVar16 + fVar29 * fVar27) - fVar18 * fVar26;
        *(float *)(unaff_x19 + 0x130) =
             (fVar18 * fVar16 + fVar20 * fVar26 + fVar30 * fVar27) - fVar29 * fVar28;
        *(float *)(unaff_x19 + 0x134) = fVar17 - fVar30 * fVar16;
        *(float *)(unaff_x19 + 0x138) = fVar21;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        uVar12 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_016466fc(*unaff_x24);
        }
        uVar6 = FUN_051d94d4(uVar12,0,0);
        if ((uVar6 & 1) == 0) {
          if ((*(long *)(unaff_x19 + 0x18) == 0) ||
             (lVar7 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0), lVar7 == 0)) goto LAB_03b6b08c;
          lVar7 = FUN_051e5130(lVar7,0);
          if ((*plVar10 == 0) ||
             (Fusion_CloudServices_<Join>d__84__SetStateMachine(*plVar10,0), lVar7 == 0))
          goto LAB_03b6b08c;
          uVar14 = FUN_04f1c838(lVar7,0);
          *(undefined4 *)(unaff_x19 + 0x21c) = uVar14;
          *(float *)(unaff_x19 + 0x220) = fVar21;
          *(float *)(unaff_x19 + 0x224) = fVar23;
          if (((*(long *)(unaff_x19 + 0x18) == 0) ||
              (lVar7 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0), lVar7 == 0)) ||
             (lVar7 = FUN_051e5130(lVar7,0), lVar7 == 0)) goto LAB_03b6b08c;
          FUN_04f1adf8(lVar7,0);
          fVar29 = (float)FUN_04f13694(0);
          if (*plVar10 == 0) goto LAB_03b6b08c;
          fVar27 = fVar17;
          fVar26 = fVar21;
          fVar28 = fVar23;
          fVar16 = (float)FUN_04f1adf8(*plVar10,0);
          fVar20 = fVar21 * fVar16;
          fVar30 = fVar21 * fVar26;
          fVar19 = fVar23 * fVar28;
          fVar18 = (fVar21 * fVar28 + fVar17 * fVar16 + fVar29 * fVar27) - fVar23 * fVar26;
          fVar21 = (fVar23 * fVar16 + fVar17 * fVar26 + fVar21 * fVar27) - fVar29 * fVar28;
          fVar23 = (fVar29 * fVar26 + fVar17 * fVar28 + fVar23 * fVar27) - fVar20;
          fVar17 = ((fVar17 * fVar27 - fVar29 * fVar16) - fVar30) - fVar19;
        }
        else {
          if (*plVar10 == 0) goto LAB_03b6b08c;
          uVar14 = FUN_04f1aa98(*plVar10,0);
          *(undefined4 *)(unaff_x19 + 0x21c) = uVar14;
          *(float *)(unaff_x19 + 0x220) = fVar21;
          *(float *)(unaff_x19 + 0x224) = fVar23;
          if (*(long *)(unaff_x19 + 0xb0) == 0) goto LAB_03b6b08c;
          fVar18 = (float)FUN_04f1aef8(*(long *)(unaff_x19 + 0xb0),0);
        }
        *(float *)(unaff_x19 + 0x2a0) = fVar18;
        *(float *)(unaff_x19 + 0x2a4) = fVar21;
        *(float *)(unaff_x19 + 0x2a8) = fVar23;
        *(float *)(unaff_x19 + 0x2ac) = fVar17;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        uVar14 = FUN_04f1aa98(*(long *)(unaff_x19 + 0x20),0);
        *(undefined4 *)(unaff_x19 + 0x228) = uVar14;
        *(float *)(unaff_x19 + 0x22c) = fVar21;
        *(float *)(unaff_x19 + 0x230) = fVar23;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
        uVar14 = FUN_04f1aef8(*(long *)(unaff_x19 + 0x20),0);
        *(undefined4 *)(unaff_x19 + 0x2c0) = uVar14;
        *(float *)(unaff_x19 + 0x2c4) = fVar21;
        *(float *)(unaff_x19 + 0x2c8) = fVar23;
        *(float *)(unaff_x19 + 0x2cc) = fVar17;
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
        FUN_049b1da8(*(long *)(unaff_x19 + 0x18),1,0);
        if ((*(long *)(unaff_x19 + 0x18) == 0) ||
           (lVar7 = FUN_051e516c(*(long *)(unaff_x19 + 0x18),0), lVar7 == 0)) goto LAB_03b6b08c;
        uVar6 = FUN_051df964(lVar7,0);
        puVar2 = PTR_DAT_06e49d60;
        lVar7 = *(long *)(unaff_x19 + 0x18);
        if (lVar7 == 0) goto LAB_03b6b08c;
        if ((uVar6 & 1) == 0) {
          lVar7 = FUN_051e5130(lVar7,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar4);
          }
          uVar12 = *(undefined8 *)puVar2;
        }
        else {
          FUN_049b2360(lVar7,0,0);
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
          FUN_049b21d0(*(long *)(unaff_x19 + 0x18),0,0);
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
          fVar29 = (float)FUN_049afd98(*(long *)(unaff_x19 + 0x18),0);
          if (DAT_0722a13e == '\0') {
            thunk_FUN_0159f088(PTR_DAT_06e50440);
            DAT_0722a13e = '\x01';
          }
          pfVar9 = *(float **)(*(long *)puVar1 + 0xb8);
          fVar23 = fVar23 - pfVar9[2];
          if (fVar23 * fVar23 +
              (fVar29 - *pfVar9) * (fVar29 - *pfVar9) + (fVar21 - pfVar9[1]) * (fVar21 - pfVar9[1])
              < fVar25) {
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
            uVar14 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                               (*(long *)(unaff_x19 + 0x20),0);
            *(undefined4 *)(unaff_x19 + 200) = uVar14;
            *(float *)(unaff_x19 + 0xcc) = fVar25;
            *(float *)(unaff_x19 + 0xd0) = fVar23;
            if (*(long *)(unaff_x19 + 0xb8) == 0) goto LAB_03b6b08c;
            uVar14 = FUN_049ac524(*(long *)(unaff_x19 + 0xb8),0);
            *(undefined4 *)(unaff_x19 + 0x32c) = uVar14;
            *(float *)(unaff_x19 + 0x330) = fVar25;
            *(float *)(unaff_x19 + 0x334) = fVar23;
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
            uVar14 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
            *(undefined4 *)(unaff_x19 + 0xd4) = uVar14;
            *(float *)(unaff_x19 + 0xd8) = fVar25;
            *(float *)(unaff_x19 + 0xdc) = fVar23;
            *(float *)(unaff_x19 + 0xe0) = fVar17;
            fVar29 = (float)FUN_03b6b618();
            fVar16 = *(float *)(unaff_x19 + 0x250);
            fVar21 = *(float *)(unaff_x19 + 0x25c);
            fVar30 = *(float *)(unaff_x19 + 600);
            fVar18 = *(float *)(unaff_x19 + 0x254);
            fVar26 = fVar23 * fVar30;
            fVar27 = (fVar25 * fVar30 + fVar17 * fVar16 + fVar29 * fVar21) - fVar23 * fVar18;
            fVar28 = (fVar23 * fVar16 + fVar17 * fVar18 + fVar25 * fVar21) - fVar29 * fVar30;
            *(float *)(unaff_x19 + 0x290) = fVar27;
            *(float *)(unaff_x19 + 0x294) = fVar28;
            *(float *)(unaff_x19 + 0x298) =
                 (fVar29 * fVar18 + fVar17 * fVar30 + fVar23 * fVar21) - fVar25 * fVar16;
            *(float *)(unaff_x19 + 0x29c) =
                 ((fVar17 * fVar21 - fVar29 * fVar16) - fVar25 * fVar18) - fVar26;
            FUN_03b6b9a0();
            uVar14 = FUN_051dd1d4(0);
            *(undefined4 *)(unaff_x19 + 0x308) = uVar14;
            uVar14 = FUN_051dd1d4(0);
            *(undefined4 *)(unaff_x19 + 0x30c) = uVar14;
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
            uVar14 = Fusion_CloudServices_<Join>d__84__SetStateMachine
                               (*(long *)(unaff_x19 + 0x20),0);
            *(undefined4 *)(unaff_x19 + 0x234) = uVar14;
            *(float *)(unaff_x19 + 0x238) = fVar27;
            *(float *)(unaff_x19 + 0x23c) = fVar26;
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_03b6b08c;
            uVar14 = FUN_04f1adf8(*(long *)(unaff_x19 + 0x20),0);
            *(undefined4 *)(unaff_x19 + 0x2d0) = uVar14;
            *(float *)(unaff_x19 + 0x2d4) = fVar27;
            *(float *)(unaff_x19 + 0x2d8) = fVar26;
            *(float *)(unaff_x19 + 0x2dc) = fVar28;
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar7 == 0))
            goto LAB_03b6b08c;
            uVar12 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dad490,*(undefined4 *)(lVar7 + 0x18));
            *(undefined8 *)(unaff_x19 + 0x318) = uVar12;
            thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x318),uVar12);
            puVar1 = PTR_DAT_06e2a8c0;
            plVar10 = *(long **)(unaff_x19 + 0x318);
            if (plVar10 == (long *)0x0) goto LAB_03b6b08c;
            uVar6 = 0;
            goto 
            System_Array__InternalArray__ICollection_CopyTo<ResourceManager_DeferredCallbackRegisterRequest>
            ;
          }
          if (*plVar10 == 0) goto LAB_03b6b08c;
          uVar12 = FUN_051e0500(*plVar10,0);
          puVar2 = PTR_DAT_06dc37c0;
          puVar1 = PTR_DAT_06db5be8;
          if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
          fStack0000000000000090 = (float)FUN_049afd98(*(long *)(unaff_x19 + 0x18),0);
          fStack0000000000000094 = fVar25;
          in_stack_00000098 = fVar23;
          uVar13 = Fusion_CloudCommunicator__Dispose(&stack0x00000090,0);
          uVar12 = FUN_02526f2c(*(undefined8 *)puVar2,uVar12,*(undefined8 *)puVar1,uVar13,0);
          lVar7 = *plVar10;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_016466fc(*(long *)puVar4);
          }
        }
        FUN_04866834(uVar12,lVar7,0);
        return;
      }
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w26) goto LAB_03b6b0c8;
      unaff_x27 = (long *)(unaff_x20 + (long)(int)unaff_w26 * 8 + 0x20);
      if ((*unaff_x27 == 0) || (lVar7 = *(long *)(*unaff_x27 + 0x18), lVar7 == 0))
      goto LAB_03b6b08c;
      unaff_x22 = FUN_0431ae70(lVar7,*unaff_x25);
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_03b6b08c;
      unaff_x23 = FUN_049afbe0(*(long *)(unaff_x19 + 0x18),0);
      param_1 = *unaff_x24;
    } while (*(int *)(param_1 + 0xe0) != 0);
  } while( true );
System_Array__InternalArray__ICollection_CopyTo<ResourceManager_DeferredCallbackRegisterRequest>:
  do {
    if ((long)(int)plVar10[3] <= (long)uVar6) {
      *(undefined1 *)(unaff_x19 + 0x2fd) = 1;
      return;
    }
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar7 == 0)) break;
    if (*(uint *)(lVar7 + 0x18) <= uVar6) {
LAB_03b6b0c8:
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    uVar12 = *(undefined8 *)(lVar7 + uVar6 * 8 + 0x20);
    lVar7 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
    if (lVar7 == 0) break;
    FUN_03b8a21c(lVar7,uVar12,0);
    lVar8 = thunk_FUN_015d0480(lVar7,*(undefined8 *)(*plVar10 + 0x40));
    if (lVar8 == 0) {
      uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar12,0);
    }
    if (*(uint *)(plVar10 + 3) <= uVar6) goto LAB_03b6b0c8;
    plVar10[uVar6 + 4] = lVar7;
    thunk_FUN_01656ef8(plVar10 + uVar6 + 4,lVar7);
    plVar10 = *(long **)(unaff_x19 + 0x318);
    uVar6 = uVar6 + 1;
  } while (plVar10 != (long *)0x0);
LAB_03b6b08c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


